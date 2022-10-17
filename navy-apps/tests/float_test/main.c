#include <stdio.h>
#include <fixedptc.h>

int main() {
  fixedpt a = fixedpt_rconst(1.2);
  printf("a = %d\n",a);
  int b = 0;
  //fixedpt_fromint(a);
  b = fixedpt_floor(fixedpt_fromint(a));
  printf("b = %d\n",b);
  return 0;
}
