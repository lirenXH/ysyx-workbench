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
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  printf("syscall no is %d\n",a[0]);
  switch (a[0]) {
    case 0 : strace_main(a[0],c->GPRx);halt(c->GPRx);break;
    case 1 : yield();c->GPRx = 0 ;strace_main(a[0],c->GPRx);break;
    case 4 : printf("write");break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}

