#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int re_flag=1;
  int pc_flag=1;
  for(int i=0;i<32;i++){
    printf("ref_r->gpr[%d]=0x%08lX,cpu.gpr[%d]=0x%08lX\n",i,ref_r->gpr[i],i,cpu.gpr[i]);
    if(ref_r->gpr[i]==cpu.gpr[i])
      re_flag=1;
    else{
      re_flag=0;
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
