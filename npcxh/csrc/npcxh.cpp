#include "verilated.h"
#include "verilated_vcd_c.h"
#include <fstream>
#include <string.h>
#include <memory>
#include "Vysyx_22040759_npc.h"
#include <svdpi.h>
#include "Vysyx_22040759_npc__Dpi.h"
#define PG_ALIGN __attribute((aligned(4096)))

vluint64_t main_time = 0;
static int flag = 0;
//------------------------------------------------------------
//to test
void c_ebreak(){
  printf("THE c_ebreak is called!\n");
  flag = 1;
}
//------------------------------------------------------------

static const uint32_t img [] = {
               //     imme      rs1       rd                     rd  rs1 imme reg  result
               //<_start>:
  0x00000413,  //     li	s0,0  
  0x00009117,  //     auipc	sp,0x9  
  0xffc10113,  //     addi	sp,sp,-4 # 80009000 <_end>  
  0x00c000ef,  //     jal	ra,80000018 <_trm_init> 
               //<main>:
  0x00000513,  //     li	a0,0  
  0x00008067,  //     ret 
               //<_trm_init>:
  0xff010113,  //     addi	sp,sp,-16                                                                    5
  0x00000517,  //     auipc	a0,0x0
  0x01450513,  //     addi	a0,a0,20 # 80000030 <_etext>   
  0x00113423,  //     sd	ra,8(sp)
  0xfe9ff0ef,  //     jal	ra,80000010 <main>
  0x0000006f   //     j	8000002c <_trm_init+0x14>
};
li	s0,0
auipc	sp,0x9
addi	sp,sp,-4 # 80009000 <_end>
jal	ra,80000018 <_trm_init>
li	a0,0
ret
addi	sp,sp,-16
auipc	a0,0x0
addi	a0,a0,20 # 80000030 <_etext>      //aready
sd	ra,8(sp)
jal	ra,80000010 <main>
j	8000002c <_trm_init+0x14>
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

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vysyx_22040759_npc* top = new Vysyx_22040759_npc{contextp};
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp,0);
    tfp->open("obj_dir/dump.vcd");
    init_isa();
    top->rst = 1;
    top->clk = 0;
    top->eval();
    for(main_time=0;main_time<1000;main_time++){
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
        printf("inst: %lx\n",pmem_read(top->pc_out,4));
      }
      if(flag==1){
        printf("THE break is called!\n");
        break;
      }
      top->eval();
      tfp->dump(main_time);
    }
    top->final();
    tfp->close();
    delete top;
    delete tfp;
}