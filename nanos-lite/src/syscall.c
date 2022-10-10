#include <common.h>
#include "syscall.h"
void strace_main(uintptr_t a7,uintptr_t re){
  
  switch (a7)
  {
  case 0:
    printf("strace system call exit  , ID is 0 the return value is %d\n\n",re);
    break;
  case 1:
    printf("strace system call yield , ID is 1 the return value is %d\n\n",re);
    break;
  case 2:
    printf("strace system call open  , ID is 2 the return value is %d\n\n",re);
    break;
  case 3:
    printf("strace system call read  , ID is 3 the return value is %d\n\n",re);
    break;
  case 4:
    printf("strace system call write , ID is 4 the return value is %d\n\n",re);
    break;
  case 7:
    printf("strace system call close , ID is 7 the return value is %d\n\n",re);
    break;
  case 8:
    printf("strace system call lseek , ID is 8 the return value is %d\n\n",re);
    break;
  case 9:
    printf("strace system call sbrk  , ID is 9 the return value is %d\n\n",re);
    break;
  default:
    printf("should not come here");
    break;
  }
}



void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  switch (a[0]) {
    case 0 : strace_main(a[0],c->GPRx);
             halt(c->GPRx);break;
    case 1 : yield();c->GPRx = 0 ;
             strace_main(a[0],c->GPRx);break;
    case 2 : c->GPRx = fs_open((const char *)a[1],(int)a[2],(int)a[3]);
             strace_main(a[0],c->GPRx);break;
    case 3 : c->GPRx = fs_read1((int)a[1],(void*)a[2],(size_t)a[3]);
             strace_main(a[0],c->GPRx);break;
    case 4 : c->GPRx = fs_write((int)a[1],(void*)a[2],(size_t)a[3]);
             /* strace_main(a[0],c->GPRx);*/break;
    case 7 : c->GPRx = fs_close((int)a[1]);
             strace_main(a[0],c->GPRx);break;   //保证返回值正确
    case 8 : c->GPRx = fs_lseek((int)a[1],a[2],(int)a[3]);
             strace_main(a[0],c->GPRx);break;
    case 9 : c->GPRx = 0;
             strace_main(a[0],c->GPRx);break;    //只需要让SYS_brk系统调用总是返回0即可
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}

