#include <stdio.h>
#include <fixedptc.h>

int main() {
  float a =1.1;
  int b = 0;
  fixedpt_fromint(a);
  fixedpt_floor(fixedpt_fromint(a));
  printf("b = %d\n",b);
  return 0;
}
