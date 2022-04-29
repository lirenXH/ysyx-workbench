#include <common.h>
#include <elf.h>
extern uint64_t g_nr_guest_inst;
FILE *ftrace_fp = NULL;

void init_ftrace(const char *ftrace_file) {
  ftrace_fp = stdout;
  int frc;
  char str[20];
  char text[1024];
  if (ftrace_file != NULL) {
    FILE *fp = fopen(ftrace_file, "rb");
    memset(str,0,sizeof(str));
    memset(text,0,sizeof(text));
    frc=fread(str,1,5,fp);
    printf("frc=%d,str=%s\n",frc,str);
    while(fgets(text,1024,fp)!=NULL){//逐行读取fp1所指向文件中的内容到text中
        puts(text);//输出到屏幕
    }
    while(fgets(text,1024,fp)!=NULL){//逐行读取fp1所指向文件中的内容到text中
        puts(text);//输出到屏幕
    }
    Assert(fp, "Can not open elf'%s'", ftrace_file);
    ftrace_fp = fp;
  }
}
