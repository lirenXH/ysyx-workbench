#include <common.h>

extern uint64_t g_nr_guest_inst;
FILE *ftrace_fp = NULL;

void init_ftrace(const char *ftrace_file) {
  ftrace_fp = stdout;
  if (ftrace_file != NULL) {
    FILE *fp = fopen(ftrace_file, "r");
    printf("ftrace file opened!\n");
    Assert(fp, "Can not open elf'%s'", ftrace_file);
    ftrace_fp = fp;
  }
}
