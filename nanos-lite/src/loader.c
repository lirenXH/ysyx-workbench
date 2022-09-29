#include <proc.h>
#include <elf.h>
#include <common.h>
#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

static uintptr_t loader(PCB *pcb, const char *filename) {
  Elf_Ehdr elf_E = {};
  //Elf_Phdr elf_P = {};
  ramdisk_read(&elf_E , 0 , sizeof(elf_E));
  printf("moshu is %x",32);
  assert(*(uint32_t *)elf_E.e_ident == 0x464c457f);
  TODO();
  return 0;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

