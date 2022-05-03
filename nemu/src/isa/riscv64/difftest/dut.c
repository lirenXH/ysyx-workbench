#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  //difftest_regcpy(&ref_r,DIFFTEST_TO_REF);
  int re_flag=1;
  for(int i=0;i<32;i++){
    //if(ref_r->reg[i]==cpu.gpr[i])
    //  re_flag=1;
    //else{
    //  re_flag=0;
    //  break;
    //}
    }
  if(ref_r->pc!=pc){
    printf("pc error\n");
    re_flag=0;
  }
  if(re_flag)
    return true;
  else
    return false;
}

void isa_difftest_attach() {
}
