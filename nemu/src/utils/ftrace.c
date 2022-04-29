#include <common.h>
#include <elf.h>
extern uint64_t g_nr_guest_inst;
FILE *ftrace_fp = NULL;
char*fname;
int OStype;
void init_ftrace(const char *ftrace_file) {
  printf("file :%s\n",ftrace_file);
  ftrace_fp = stdout;
  int frc;
  char str[20];
  char text[1024];
  if (ftrace_file != NULL) {
    FILE *fp = fopen(ftrace_file, "rb");
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

    Assert(fp, "Can not open elf'%s'", ftrace_file);
    ftrace_fp = fp;
  }
}
