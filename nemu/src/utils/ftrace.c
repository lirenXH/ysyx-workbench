#include <common.h>
#include <elf.h>
extern uint64_t g_nr_guest_inst;
FILE *fp = NULL;
void program_header_64_parse(Elf64_Ehdr* ehdr){
int freadc;
Elf64_Phdr phdr[99];
fseek(fp, ehdr->e_phoff,SEEK_SET);
int count = ehdr->e_phnum;//
freadc=fread(phdr,sizeof(Elf64_Phdr), count, fp);
printf("%dThere are %d program headers, starting at offset 0x%04lx:\n\n",freadc,count,ehdr->e_phoff);
puts("程序头表:");
puts("类型\t\t属性\t偏移量\t\t虚拟地址\t\t物理地址\t\t⽂件⼤⼩\t镜像⼤⼩\t对齐长度");
puts("类型\t\t属性\t偏移量\t\t虚拟地址\t\t物理地址\t\t⽂件⼤⼩\t镜像⼤⼩\t对齐长度");
for(int i =0; i < count;++i){
switch(phdr[i].p_type){
case 0:printf("PT_NULL\t");break;
case 1:printf("PT_LOAD\t");break;
case 2:printf("PT_DYNAMIC");break;
case 3:printf("PT_INTERP");break;
case 4:printf("PT_NOTE\t");break;
case 5:printf("PT_SHLIB");break;
case 6:printf("PT_PHDR\t");break;
case 0x6474e550:printf("GNU_EH_FRAME");break;
case 0x6474e551:printf("GNU_STACK");break;
case 0x6474e552:printf("GNU_RELRO");break;
case 0x70000000:printf("PT_LOPROC");break;
case 0x7fffffff:printf("PT_HIPROC");break;
}
putchar('\t');
switch(phdr[i].p_flags){
case 0:printf("none");break;
case 1:printf("x");break;
case 2:printf("w");break;
case 3:printf("wx");break;
case 4:printf("r");break;
case 5:printf("rx");break;
case 6:printf("rw");break;
case 7:printf("rwx");break;
}
printf("\t0x%08lx", phdr[i].p_offset);
printf("\t0x%016lx", phdr[i].p_vaddr);
printf("\t0x%016lx", phdr[i].p_paddr);
printf("\t%6lu bytes", phdr[i].p_filesz);
printf("\t%6lu bytes", phdr[i].p_memsz);
printf("\t%8lu bytes", phdr[i].p_align);
putchar('\n');
}
}
void print64(void(*fun)(Elf64_Ehdr* ehdr)){
static Elf64_Ehdr ehdr[1];
fun(ehdr);
}
void init_ftrace(const char *ftrace_file) {
  fp = stdout;
  char str[20];
  if (ftrace_file != NULL) {
    FILE *fp = fopen(ftrace_file, "rb");
    memset(str,0,sizeof(str));
    print64(program_header_64_parse);
    Assert(fp, "Can not open elf'%s'", ftrace_file);
    fp = fp;
  }
}
