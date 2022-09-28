#ifndef __RISCV64_REG_H__
#define __RISCV64_REG_H__

#include <common.h>

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}

static inline int check_csr_idx(int idx) {
  //printf("csr idx = 0x%08x\n",idx);
  //IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx <= 75));//check csr idx
  return idx;
}

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])

#define csr(idx) (cpu.csr[check_csr_idx(idx)])

static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

static inline const char* csr_name(int idx, int width) {
  extern const char* csrs[];
  return csrs[check_csr_idx(idx)];
}

#endif
