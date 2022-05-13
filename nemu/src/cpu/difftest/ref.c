#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

struct diff_context_t {
  uint64_t gpr[32];
  uint64_t pc;
};

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
      paddr_write(addr, n ,*(uint8_t*)buf);
  } 
  else{
    assert(0);
  }
}

void difftest_regcpy(void *dut, bool direction) {
  struct diff_context_t* ctx = (struct diff_context_t*)dut;
  if (direction == DIFFTEST_TO_REF) {
    for (int i = 1; i < 32; i++) {      //i==0!!!!
      if(i==0)
        cpu.gpr[i] = 0;
      else
        cpu.gpr[i] = ctx->gpr[i];
      printf("cpi.gpr[%d]=%ld",i,cpu.gpr[i]);
    }
    cpu.pc = ctx->pc;
  } 
  else if (direction == DIFFTEST_TO_DUT){
    for (int i = 0; i < 32; i++) {
      ctx->gpr[i] = cpu.gpr[i];
    }
    ctx->pc = cpu.pc;
  }
}

void difftest_exec(uint64_t n) {
  cpu_exec(n);
  //assert(0);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}
