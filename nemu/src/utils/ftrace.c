#include <common.h>
#include <elf.h>
extern uint64_t g_nr_guest_inst;
FILE *ftrace_fp = NULL;
char*fname;
int OStype;
int frc;
int *frc1;
FILE *fp;
char strtable[9999];

void section_header_64_parse(Elf64_Ehdr* ehdr);
void print64(void(*fun)(Elf64_Ehdr* ehdr));

void init_ftrace(const char *ftrace_file) {
  printf("file :%s\n",ftrace_file);
  ftrace_fp = stdout;
  char str[20];
  char text[1024];
  if (ftrace_file != NULL) {
    fp = fopen(ftrace_file, "rb");
    memset(str,0,sizeof(str));
    memset(text,0,sizeof(text));
    fname = &str[0];
    frc=fread(str, 1, 5, fp);
    if(str[0] != 0x7f || str[1] != 'E' || str[2] != 'L' || str[3] != 'F') {
    printf("%s is not an ELF file%d\n", fname,frc);
    exit(1);
    }
    OStype = str[4] == 1 ? 32 : 64; //判断elf⽂件为32位还是64位
    printf("魔数检验通过，该⽂件为%d位ELF⽂件\n", OStype);
    if(OStype ==64){
        print64(section_header_64_parse);
    }
    Assert(fp, "Can not open elf'%s'", ftrace_file);
    ftrace_fp = fp;
  }
}
void print64(void(*fun)(Elf64_Ehdr* ehdr)){
    static Elf64_Ehdr ehdr[1];
    //freopen("CON","w",stdout);
    fun(ehdr);
    //freopen("result.txt","a+",stdout);
    fun(ehdr);
    //freopen("CON","w",stdout);
}
void section_header_64_parse(Elf64_Ehdr* ehdr){
    Elf64_Shdr shdr[99];
    int count = ehdr->e_shnum;
    fseek(fp, ehdr->e_shoff,SEEK_SET);
    frc=fread(shdr,sizeof(Elf64_Shdr), count, fp);
    fseek(fp, shdr[ehdr->e_shstrndx].sh_offset,SEEK_SET);
    frc=fread(strtable,1, shdr[ehdr->e_shstrndx].sh_size, fp);
    printf("There are %d section headers, starting at offset 0x%04lx:\n\n", count, ehdr->e_shoff);
    puts("节头表:");
    printf("[编号]\t名称\t    类型\t属性\t  虚拟地址\t    偏移量\t    ⼤⼩\t  索引值\t信息\t对齐长度\t表项⼤⼩\n");
    for(int i =0; i < count;++i){
        printf("[%02d]\t%s", i,&strtable[shdr[i].sh_name]);
        for(int j =0; j <20-strlen(&strtable[shdr[i].sh_name]);++j){
            putchar(' ');
        }
        switch(shdr[i].sh_type){
            case 0:printf("SHT_NULL\t");break;
            case 1:printf("SHT_PROGBITS");break;
            case 2:printf("SHT_SYMTAB\t");break;
            case 3:printf("SHT_STRTAB\t");break;
            case 4:printf("SHT_RELA\t");break;
            case 5:printf("SHT_HASH\t");break;
            case 6:printf("SHT_DYNAMIC\t");break;
            case 7:printf("SHT_NOTE\t");break;
            case 8:printf("SHT_NOBITS\t");break;
            case 9:printf("SHT_REL\t");break;
            case 10:printf("SHT_SHLIB\t");break;
            case 11:printf("SHT_DYNSYM\t");break;
            case 14:printf("SHT_INIT_ARRAY");break;
            case 15:printf("SHT_FINI_ARRAY");break;
            case 0x70000000:printf("SHT_LOPROC");break;
            case 0x7fffffff:printf("SHT_HIPROC");break;
            case 0x80000000:printf("SHT_LOUSER");break;
            case 0xffffffff:printf("SHT_HIUSER");break;
            case 0x6ffffff6:printf("SHT_GNU_HASH");break;
            case 0x6fffffff:printf("SHT_GNU_versym");break;
            case 0x6ffffffe:printf("SHT_GNU_verneed");break;
        }
        printf("\t0x%lx\t", shdr[i].sh_flags);
        printf("0x%016lx\t", shdr[i].sh_addr);
        printf("0x%08lx\t", shdr[i].sh_offset);
        printf("%4lu bytes\t", shdr[i].sh_size);
        printf("%u\t", shdr[i].sh_link);
        printf("%u\t", shdr[i].sh_info);
        printf("%2lu bytes\t", shdr[i].sh_addralign);
        printf("%4lx\n", shdr[i].sh_entsize);
    }
}
