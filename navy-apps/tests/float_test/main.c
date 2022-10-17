#include <stdio.h>
#include <fixedptc.h>

int main() {
  float a =3.14159265358979323846;
  int b = 0;
  //fixedpt_fromint(a);
  b = fixedpt_floor(fixedpt_fromint(a));
  printf("b = %d\n",b);
  return 0;
}
