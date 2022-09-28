#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.csr[65] = cpu.pc; //mepc
  cpu.csr[66] = NO;     //mcause
  cpu.pc = epc;         //mtevc
  printf("isa_raise_intr run epc= 0x%08lx\n",epc);
  return 0;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
