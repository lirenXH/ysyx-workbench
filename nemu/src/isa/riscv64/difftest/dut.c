#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"
char *regs1[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int re_flag=1;
  int pc_flag=1;
  for(int i=0;i<32;i++){
    if(ref_r->gpr[i]==cpu.gpr[i])
      re_flag=1;
    else{
      re_flag=0;
      for(int j=0;j<32;j++)
        printf("ref_r.gpr[%s]=0x%08lX,cpu.gpr[%s]=0x%08lX\n",regs1[j],ref_r->gpr[j],regs1[j],cpu.gpr[j]);
      break;
    }
    }
  printf("ref_r.pc=%lx,cpu.pc=%lx\n",ref_r->pc,cpu.pc);
  if(ref_r->pc==cpu.pc)
      pc_flag=1;
    else
      pc_flag=0;
  if(re_flag==1&&pc_flag==1)
    return true;
  else
    return false;
}

void isa_difftest_attach() {
}
