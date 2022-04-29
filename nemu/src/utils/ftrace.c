#include <common.h>
#include <elf.h>
extern uint64_t g_nr_guest_inst;
FILE *fp = NULL;

void init_ftrace(const char *ftrace_file) {
  fp = stdout;
  char str[20];
  int readcount;
  if (ftrace_file != NULL) {
    FILE *fp = fopen(ftrace_file, "rb");
    memset(str,0,sizeof(str));
    readcount=fread(str,1,5,fp);
    if(str[0]!=0x7f|| str[1]!='E'|| str[2]!='L'|| str[3]!='F')
        printf(" is not an ELF file\n");
    else
        printf("readcount = %d\n",readcount);
    Assert(fp, "Can not open elf'%s'", ftrace_file);
    fp = fp;
  }
}
