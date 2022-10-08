// --xuezhen--
//rvcpu-test.cpp
/*#include <verilated.h>          
#include <verilated_vcd_c.h>    
#include <iostream>
#include <fstream>
#include "Vrvcpu.h"

using namespace std;

static Vrvcpu* top;
static VerilatedVcdC* tfp;
static vluint64_t main_time = 0;
static const vluint64_t sim_time = 1000;

// inst.bin
// inst 0: 1 + zero = reg1 1+0=1
// inst 1: 2 + zero = reg1 2+0=2
// inst 2: 1 + reg1 = reg1 1+2=3
int inst_rom[65536];

void read_inst( char* filename)
{
  FILE *fp = fopen(filename, "rb");
  if( fp == NULL ) {
		printf( "Can not open this file!\n" );
		exit(1);
  }
  
  fseek(fp, 0, SEEK_END);
  size_t size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  size = fread(inst_rom, size, 1, fp);
  fclose(fp);
}

int main(int argc, char **argv)
{
	char filename[100];
	printf("Please enter your filename~\n");
	cin >> filename;
	read_inst(filename);

  // initialization
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

	top = new Vrvcpu;
  tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("top.vcd");
	
	while( !Verilated::gotFinish() && main_time < sim_time )
	{
	  if( main_time % 10 == 0 ) top->clk = 0;
	  if( main_time % 10 == 5 ) top->clk = 1;
		  
	  if( main_time < 10 )
	  {
		top->rst = 1;
	  }
	  else
	  {
	    top->rst = 0;
		if( main_time % 10 == 5 )
		  top->inst = (top->inst_ena == 1) ? inst_rom[ (top->inst_addr) >> 2 ] : 0;
	  }
	  top->eval();
	  tfp->dump(main_time);
	  main_time++;
	}
		
  // clean
  tfp->close();
  delete top;
  delete tfp;
  exit(0);
  return 0;
}*/
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
#define CONFIG_MSIZE 0x2800000
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
static int inst_count = 0;
static int difftest_port = 1234;
static uint64_t spike_pc;
static uint8_t *pmem = NULL;
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
uint8_t* guest_to_host(paddr_t paddr) { 
  //printf("guest_to_host: 0x%x\n",paddr);
  return pmem + paddr - CONFIG_MBASE;
  }
//--------------------------------------------------------------------------
//reg
const char *regs[] = {
  "x0","ra", "sp", "gp", "tp", "t0", "t1", "t2",
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
  //if(ref_r->pc != dnpc){
  //  printf("PC false! \nspike_pc is: 0x%08lx  npc_pc is 0x%08lx\n",ref_r->pc,dnpc);
  //  DIF_result = false;
  //}
  for(i=0;i<32;i++){
    if(ref_r->gpr[i]!=cpu_gpr[i]){  
      printf(RED "REG different ! \n" NONE);   // inst!!!
      //for(int j=0;j<32;j++)
        //printf("spike_reg[%d]=0x%08lx npc_reg[%d]=0x%08lx\n",j,ref_r->gpr[j],j,cpu_gpr[j]);
      printf("spike_reg[%s]=0x%08lx npc_reg[%s]=0x%08lx\n",regs[i],ref_r->gpr[i],regs[i],cpu_gpr[i]);
      DIF_result = false;   //FALSE
    }
    else{
      if(cpu_gpr[i]!=0)
        printf("spike_reg[%s]=0x%08lx npc_reg[%s]=0x%08lx\n",regs[i],ref_r->gpr[i],regs[i],cpu_gpr[i]);
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
  npcstate.state=NPC_END; //实现ebreak的
  ebreak_flag = 1;
}

extern "C" void c_npctrap(long long int pc,long long int code){
  //printf("pc=0x%08d ,code=%d\n",pc,code);
  npcstate.halt_pc=pc;       //实现good trip的
  npcstate.halt_ret=code;
}

void npc_halt_ret(){      //判断halt_ret的值来实现hit good trip/hit bad trip
  if(npcstate.state == NPC_END&&npcstate.halt_ret == 0){
    printf(GREEN "  HIT GOOD TRAP\n" NONE);
    printf("inst count is : %d\n",inst_count);
  }
  else if(!npcstate.state == NPC_ABORT){
    printf(RED "  HIT BAD TRAP\n" NONE);
    printf("inst count is : %d\n",inst_count);
  }
}

//------------------------------------------------------------

//ram
//--------------------------------------------------------------------------
void init_ram(){
  pmem = (uint8_t *)malloc(CONFIG_MSIZE);
  printf(GREEN "ram init success!~\n" NONE);
  assert(pmem);
}

static inline word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: {printf(RED "read error!\n" NONE);assert(0);return 4096;}
  }
}

static inline word_t host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data ;return 1;break;
    case 2: *(uint16_t *)addr = data ;return 1;break;
    case 4: *(uint32_t *)addr = data ;return 1;break;
    case 8: *(uint64_t *)addr = data ;return 1;break;
    default: printf(RED "write error!\n" NONE);return 1;break;
  }
}

// read
extern "C" void pmem_read(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  //printf("raddr is :0x%llx\n",raddr);
  if(raddr >=CONFIG_MBASE){
    *rdata = host_read(guest_to_host(raddr & ~0x7ull),8);
    //printf("rdata is 0x%016llx\n",*rdata);
  }
  else {
    *rdata = 0;
    printf(RED "raddr error \n" NONE);
  }
}
//write
extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  int len;
  long long addr = waddr & ~0x7ull;
  switch(wmask){
    //8bit
    case 0x1  : len = 1 ;                ;break;
    case 0x2  : len = 1 ; addr = addr + 1;break;
    case 0x4  : len = 1 ; addr = addr + 2;break;
    case 0x8  : len = 1 ; addr = addr + 3;break;
    case 0x10 : len = 1 ; addr = addr + 4;break;
    case 0x20 : len = 1 ; addr = addr + 5;break;
    case 0x40 : len = 1 ; addr = addr + 6;break;
    case -128 : len = 1 ; addr = addr + 7;break;         //sign 0b1000_0000
    //16bit
    case 0x3  : len = 2 ;                ;break;
    case 0xc  : len = 2 ; addr = addr + 2;break;
    case 0x30 : len = 2 ; addr = addr + 4;break;
    case -64  : len = 2 ; addr = addr + 6;break;         //sign 0b1100_0000
    //32bit
    case 0xf  : len = 4 ;                ;break;      
    case -16  : len = 4 ; addr = addr + 4;break;         //sign 0b1111_0000
    //64bit
    case -1   : len = 8 ; printf(GREEN "sd!\n" NONE); break;         //sign 0b1111_1111
    default   : printf(RED "write addr error!\n" NONE);assert(0);
  }
  printf("waddr = 0x%016llx\n",waddr);
  printf(" addr = 0x%016llx\n",addr);
  printf("wdata = 0x%016llx\n",wdata);
  printf("wmask = 0x%x\n",wmask);

  host_write(guest_to_host(addr), len, wdata);
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
  int ret = fread(guest_to_host(CONFIG_MBASE), size, 1, fp);
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
    parse_args(argc, argv);
    init_ram();           //初始化内存
    long img_size = load_img();
    printf("the new img is loaded img_size=%ld\n",img_size);
    top->rst = 1;
    top->clk = 0;
    top->eval();

    init_difftest(diff_so_file,img_size,difftest_port);
    for(main_time=0;main_time<500000;main_time++){
      if ((main_time % 40) == 20) {
        top->clk = 1;
        printf(GREEN "\nmain time is : %ld\n" NONE,main_time);
        printf("spike_pc:0x%08lx ,npc_pc:0x%08lx\n",spike_pc,top->pc_out);
        top->eval();
      }
      if ((main_time % 40) == 0) {
        top->clk = 0;
        top->eval();
      }
      if (main_time >= 30) {
        top->rst = 0;
      }
      if ((top->pc_out!=0)&(main_time>=200)&(main_time%40) == 20){   //pc为零 即冲刷 跳过不比较
        //top->inst = pmem_read(top->pc_out,4);
        difftest_step(top->pc_out);
        printf("spike_pc:0x%08lx ,npc_pc:0x%08lx\n",spike_pc,top->pc_out);
        inst_count++;
        //dump_gpr();
      }

      if(npcstate.state == NPC_ABORT){
        printf(RED "\n!!!!NPC_ABORT!!!!\n" NONE);
        printf("inst count is : %d\n",inst_count);
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