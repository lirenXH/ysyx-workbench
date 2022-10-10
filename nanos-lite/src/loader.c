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

enum {SEEK_SET, SEEK_CUR, SEEK_END};

static uintptr_t loader(PCB *pcb, const char *filename) { //调用fs_open 传filename进去
  uint64_t fd = fs_open(filename,0,0);
  int i = 0;
  Elf_Ehdr elf_E = {};
  Elf_Phdr elf_P = {};
  fs_read1(0, &elf_E, sizeof(elf_E));
  //ramdisk_read(&elf_E , 0 , sizeof(elf_E));
  assert(*(uint32_t *)elf_E.e_ident == 0x464c457f);
  for(i=0;i<elf_E.e_phnum;i++){
    uint64_t phoff_temp = elf_E.e_phoff + elf_E.e_phentsize * i;
    //uint64_t phoff_temp = elf_E.e_phentsize * i;
    fs_lseek(fd,phoff_temp,SEEK_CUR);
    //ramdisk_read(&elf_P,phoff_temp,elf_E.e_phentsize);
    fs_read1(fd, &elf_P, elf_E.e_phentsize);
    if(elf_P.p_type == PT_LOAD){
      printf("load %d\n",i);
      fs_lseek(fd,elf_P.p_offset,SEEK_CUR);
      fs_read1(fd , (void*)elf_P.p_paddr , elf_P.p_memsz);
      //ramdisk_read((void*)elf_P.p_paddr , elf_P.p_offset , elf_P.p_memsz);//若是load则 load对应size
      memset((void *)(elf_P.p_vaddr + elf_P.p_filesz), 0 ,(elf_P.p_memsz - elf_P.p_filesz));  //清零 对应位置
    }
  }
  return elf_E.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);    //需要返回一个入口地址
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

