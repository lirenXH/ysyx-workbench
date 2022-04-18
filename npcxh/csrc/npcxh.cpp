#include "verilated.h"
#include "verilated_vcd_c.h"
#include <fstream>
#include <string.h>
#include <memory>
#include "Vysyx_22040759_npc.h"
#define PG_ALIGN __attribute((aligned(4096)))

vluint64_t main_time = 0;

static const uint32_t img [] = {
  0x01408093,  // 
  0x00608093,  // 
  0x00118113,  // 
  0x00328193,  // 
  0x00408093,  // 
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

double sc_time_stamp()
{
    return main_time;
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
    while (sc_time_stamp() < 1000 ) {
      if (main_time > 14) 
        top->rst = 0;
      if ((main_time % 10) == 5) {
        top->clk = 1;
        printf("here1,%d\n",top->rom_addr);
        top->inst = pmem_read(0x80000000,4);
        printf("here2\n");
      }
      if ((main_time % 10) == 0) 
        top->clk = 0;
      top->eval();
      tfp->dump(main_time);
      main_time++;
      printf("here3,%ld,%d\n",main_time,top->clk);
    }
    top->final();
    tfp->close();
    delete top;
    delete tfp;
}