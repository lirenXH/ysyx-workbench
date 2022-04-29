#include <common.h>
#include <elf.h>
extern uint64_t g_nr_guest_inst;
FILE *ftrace_fp = NULL;

void init_ftrace(const char *ftrace_file) {
  ftrace_fp = stdout;
  int frc;
  char str[20];
  if (ftrace_file != NULL) {
    FILE *fp = fopen(ftrace_file, "rb");
    memset(str,0,sizeof(str));
    frc=fread(str,1,15, fp);
    printf("frc=%d,str=%s\n",frc,str);
    //print64(program_header_64_parse);
    Assert(fp, "Can not open elf'%s'", ftrace_file);
    ftrace_fp = fp;
  }
}
