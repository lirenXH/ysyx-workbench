#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  //difftest_regcpy(&ref_r,DIFFTEST_TO_REF);
  int re_flag=1;
  for(int i=0;i<32;i++){
    printf("ref_r->gpr[i]=0x%08lX,cpu.gpr[i]=0x%08lX\n",ref_r->gpr[i],cpu.gpr[i]);
    if(ref_r->gpr[i]==cpu.gpr[i])
      re_flag=1;
    else{
      re_flag=0;
      break;
    }
    }
  printf("ref_r->pc=%lx,cpu.pc=%lx",ref_r->pc,pc);
  if(ref_r->pc==pc)
      re_flag=1;
    else
      re_flag=0;
  if(re_flag)
    return true;
  else
    return false;
}

void isa_difftest_attach() {
}
