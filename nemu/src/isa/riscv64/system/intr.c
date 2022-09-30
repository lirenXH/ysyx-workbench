#include <isa.h>
vaddr_t epc_all;
void etrace_main(){
  printf("etrace interrupt/exception NO is 0x%lx \ncurrect pc is 0x%08lx,mtevc is 0x%08lx\n\n",cpu.csr[66],cpu.pc,epc_all);
}

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.csr[65] = cpu.pc; //mepc
  cpu.csr[66] = NO;     //mcause
  epc_all = epc;
  IFDEF(CONFIG_ETRACE,etrace_main());
  return epc;
}

word_t isa_mret_intr() {
  //cpu.csr[0] = 0xa00000080;
  return cpu.csr[65];
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
