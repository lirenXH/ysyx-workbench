#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"
#include <fstream>
#include <string.h>
#include <memory>
#include <assert.h>
#include <dlfcn.h>
//#include "macro.h"
#include <getopt.h>
#include "Vysyx_22040759_npc.h"
#include <svdpi.h>
#include "Vysyx_22040759_npc__Dpi.h"

#define CONFIG_MBASE 0x80000000
#define CINFIG_MSIZE 0x2800000
#define PG_ALIGN __attribute((aligned(4096)))

#define RED "\033[31m"
#define GREEN "\033[32m"
#define NONE "\033[m"
typedef uint64_t word_t;
typedef word_t   vaddr_t;
typedef uint32_t paddr_t;

vluint64_t main_time = 0;
static char *img_file = NULL;
static char *diff_so_file = NULL;
static int ebreak_flag = 0;
static int ebreak_flag2 = 0;
static int halt_ret = 0;
static int difftest_port = 1234;
static uint64_t spike_pc;
static uint8_t pmem[0x8000000] PG_ALIGN = {};
//int break_time=0;
// ----------- state -----------

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT};
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
struct NPCstate{
  int state=NPC_RUNNING;
  long long int halt_pc;
  long long int halt_ret;
} npcstate;

 typedef struct{
  uint64_t gpr[32];
  uint64_t pc;
} CPU_state;

CPU_state cpu ={};
uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - 0x80000000; }
//--------------------------------------------------------------------------
//reg
const char *regs[] = {
  "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

// 输出RTL中通用寄存器
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    if(cpu_gpr[i]!=0)
      printf("gpr[%s] = 0x%08lx\n",regs[i], cpu_gpr[i]);
  }
}

//--------------------------------------------------------------------------

//------------------------------
//to difftest - spike - npc
void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
static void checkregs(CPU_state *ref,vaddr_t dnpc);
void difftest_step(vaddr_t dnpc);
bool isa_difftest_checkregs(CPU_state *ref_r,vaddr_t dnpc);

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  printf("dlopen!\n");
  assert(handle);

  ref_difftest_memcpy = (void(*)(paddr_t,void*,size_t,bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void(*)(void*,bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void(*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void(*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void(*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  ref_difftest_init(port);
  cpu.pc = CONFIG_MBASE;
  ref_difftest_memcpy(CONFIG_MBASE, guest_to_host(CONFIG_MBASE), img_size, DIFFTEST_TO_REF);
  for(int i=0;i<32;i++){
    cpu.gpr[i] = 0;
  }
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);

  printf("Differential testing: ON\n");
}

void difftest_step(vaddr_t dnpc){
  CPU_state ref_r;
  ref_difftest_regcpy(&ref_r,DIFFTEST_TO_DUT);
  checkregs(&ref_r,dnpc);
  ref_difftest_exec(1);
}

static void checkregs(CPU_state *ref,vaddr_t dnpc){
  if(!isa_difftest_checkregs(ref,dnpc)){
    npcstate.state = NPC_ABORT;
  }
}

bool isa_difftest_checkregs(CPU_state *ref_r,vaddr_t dnpc){
  int i = 0;
  int count_reg = 0;
  bool DIF_result = true;
  spike_pc = ref_r->pc;
  if(ref_r->pc != dnpc){
    printf("PC false! \nspike_pc is: 0x%08lx  npc_pc is 0x%08lx\n",ref_r->pc,dnpc);
    DIF_result = false;
  }
  for(i=0;i<32;i++){
    if(ref_r->gpr[i]!=cpu_gpr[i]){  
      printf(RED "REG different ! \n" NONE);   // inst!!!
      for(int j=0;j<32;j++)
        printf("spike_reg[%d]=0x%08lx npc_reg[%d]=0x%08lx\n",j,ref_r->gpr[j],j,cpu_gpr[j]);
      DIF_result = false;
    }
    else{
      if(cpu_gpr[i]!=0)
        printf("spike_reg[%d]=0x%08lx npc_reg[%d]=0x%08lx\n",i,ref_r->gpr[i],i,cpu_gpr[i]);
      count_reg++;
    }
  }
  if(count_reg == 32){
    printf(GREEN "REGS right!\n" NONE);
    count_reg = 0;
  }
  return DIF_result;
}









//------------------------------
//to test
//------------------------------------------------------------

extern "C" void c_ebreak(){
  //printf("THE c_ebreak is called!\n");
  npcstate.state=NPC_END;
  ebreak_flag = 1;
}
extern "C" void c_npctrap(long long int pc,long long int code){
  //printf("pc=0x%08d ,code=%d\n",pc,code);
  npcstate.halt_pc=pc;       //实现good trip的
  npcstate.halt_ret=code;
}
void npc_halt_ret(){      //判断halt_ret的值来实现hit good trip/hit bad trip
  if(npcstate.state == NPC_END&&npcstate.halt_ret == 0)
    printf(GREEN "  HIT GOOD TRAP\n" NONE);
  else
    printf(RED "  HIT BAD TRAP\n" NONE);
}

//------------------------------------------------------------

//ram
//--------------------------------------------------------------------------
static const uint32_t img [] = {
               //     imme      rs1       rd                     rd  rs1 imme reg  result
               //<_start>:
  0x00000413,  //     li	s0,0  
  0x00009117,  //     auipc	sp,0x9  
  0xffc10113,  //     addi	sp,sp,-4 # 80009000 <_end>  
  0x00c000ef,  //     jal	ra,80000018 <_trm_init> 
};

static inline uint64_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: return 0;
  }
}


static uint64_t pmem_read(uint32_t addr, int len) {
  uint64_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

void init_isa() {
  memcpy(guest_to_host(0x80000000), img, sizeof(img));
  printf("The img has been loaded\n");
}

static long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  assert("Can not open ");

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(0x80000000), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"image"    , optional_argument, NULL, 'i'},
    {"diff"     , optional_argument, NULL, 'd'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-i:d:", table, NULL)) != -1) {
    switch (o) {
      case 'd': diff_so_file = optarg;printf("diff_so_file = %s\n",diff_so_file);    break;
      case 'i': img_file = optarg;    printf("img_file     = %s\n",img_file);    break;
      default : exit(0);
    }
  }
  return 0;
}

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vysyx_22040759_npc* top = new Vysyx_22040759_npc{contextp};
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp,0);
    tfp->open("obj_dir/dump.vcd");
    init_isa();           //初始化内存
    parse_args(argc, argv);
    long img_size = load_img();
    printf("the new img is loaded img_size=%ld\n",img_size);
    top->rst = 1;
    top->clk = 0;
    top->eval();

    init_difftest(diff_so_file,img_size,difftest_port);
    for(main_time=0;main_time<10000;main_time++){
      if ((main_time % 40) == 20) {
        top->clk = 1;
        top->eval();
      }
      if ((main_time % 40) == 0) {
        top->clk = 0;
        top->eval();
      }
      if (main_time >= 30) {
        top->rst = 0;
      }
      if ((main_time % 40) == 20){
        top->inst = pmem_read(top->pc_out,4);
        difftest_step(top->pc_out);
        printf("\nspike_pc:0x%08lx ,npc_pc:0x%08lx ,inst: 0x%08lx\n",spike_pc,top->pc_out,pmem_read(top->pc_out,4));
        //dump_gpr();
      }

      if(npcstate.state == NPC_ABORT){
        printf("\n!!!!NPC_ABORT!!!!\n");
        break;
      } 
      if(ebreak_flag==1){
          printf("THE break is called!\npc:0x%08lx\n",top->pc_out);
          break;
      }
      
      cpu.pc = top->pc_out;
      top->eval();
      tfp->dump(main_time);
    }
    //dump_gpr();
    npc_halt_ret();
    top->final();
    tfp->close();
    delete top;
    delete tfp;
    return 0;
}