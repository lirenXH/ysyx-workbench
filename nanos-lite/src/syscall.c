#include <common.h>
#include "syscall.h"
void strace_main(uintptr_t a7,uintptr_t re){
  
  switch (a7)
  {
  case 0:
    printf("strace system call exit , ID is 0\nthe return value is %d\n\n",re);
    break;
  case 1:
    printf("strace system call yield , ID is 1\nthe return value is %d\n\n",re);
    break;
  default:
    printf("should not come here");
    break;
  }
}

size_t system_write(int fd,const void* buf,size_t len){
  int i;
  Log("system_write fd:%d, len:%d\n",fd,len);
  if((fd == 1)&&(fd == 2)){
    for(i=0;i<len;i++)
      putch( ((char*)buf)[i] );//输出i个字符
    return len;//返回写的字节数
  }
  return -1;
}


void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  printf("a[0] = %d\n",a[0]);
  switch (a[0]) {
    case 0 : strace_main(a[0],c->GPRx);halt(c->GPRx);break;
    case 1 : yield();c->GPRx = 0 ;strace_main(a[0],c->GPRx);break;
    case 4 : printf("do syscall_write\n");system_write((int)a[1],(void*)a[2],a[3]);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}

