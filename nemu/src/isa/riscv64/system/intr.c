#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.csr[65] = cpu.pc; //mepc
  cpu.csr[66] = NO;     //mcause
  return epc;
}
word_t isa_mret_intr() {
  return cpu.csr[65];
}
word_t isa_query_intr() {
  return INTR_EMPTY;
}
