#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  //difftest_regcpy(DIFFTEST_TO_DUT);
  return false;
}

void isa_difftest_attach() {
}
