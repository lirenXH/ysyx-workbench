#ifndef ARCH_H__
#define ARCH_H__

struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t gpr[32], mcause, mstatus, mepc;
  void *pdir;
};

#define GPR1 gpr[17] // a7 系统调用参数
#define GPR2 gpr[18]
#define GPR3 gpr[19]
#define GPR4 gpr[20]
#define GPRx gpr[0]
#endif
