#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"
#include <fstream>
#include <string.h>
#include <memory>
#include <assert.h>
#include <getopt.h>
#include "Vysyx_22040759_npc.h"
#include <svdpi.h>
#include "Vysyx_22040759_npc__Dpi.h"
#define PG_ALIGN __attribute((aligned(4096)))
vluint64_t main_time = 0;
static char *img_file = NULL;
static char *diff_so_file = NULL;
static int flag = 0;
static int halt_ret = 0;
int flag2 = 0;
int break_time=0;
// ----------- state -----------

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };
struct NPCstate{
  int state=NPC_RUNNING;
  long long int halt_pc;
  long long int halt_ret;
} npcstate;
//------------------------------
//to difftest - spike - npc

















//------------------------------
//to test
//------------------------------------------------------------

void c_ebreak(){
  //printf("THE c_ebreak is called!\n");
  npcstate.state=NPC_END;
  flag = 1;
}
void c_npctrap(long long int pc,long long int code){
  //printf("pc=0x%08d ,code=%d\n",pc,code);
  npcstate.halt_pc=pc;
  npcstate.halt_ret=code;
}
void npc_halt_ret(){      //判断halt_ret的值来实现hit good trip/hit bad trip
  if(npcstate.state == NPC_END&&npcstate.halt_ret == 0)
    printf("\033[32m""  HIT GOOD TRAP\n");
  else
    printf("\033[31m""  HIT BAD TRAP\n");
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

static uint8_t pmem[0x8000000] PG_ALIGN = {};

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - 0x80000000; }

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

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  for (i = 0; i < 31; i++) {
    if(cpu_gpr[i]!=0)
      printf("gpr[%s] = 0x%08lx\n",regs[i], cpu_gpr[i]);
  }
}

//--------------------------------------------------------------------------
int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vysyx_22040759_npc* top = new Vysyx_22040759_npc{contextp};
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp,0);
    tfp->open("obj_dir/dump.vcd");
    init_isa();
    parse_args(argc, argv);
    long img_size = load_img();
    printf("the new img is loaded img_size=%ld\n",img_size);
    top->rst = 1;
    top->clk = 0;
    top->eval();
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
        printf("inst: 0x%08lx\n",pmem_read(top->pc_out,4));
        dump_gpr();
      }
      if(flag==1){
        if(flag2==40){
          printf("THE break is called!\n");
          break;
        }
      }
      if(flag==1)
        flag2++;
      top->eval();
      tfp->dump(main_time);
    }
    dump_gpr();
    npc_halt_ret();
    top->final();
    tfp->close();
    delete top;
    delete tfp;
    return 0;
}