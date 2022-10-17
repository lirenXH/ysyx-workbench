#include <stdio.h>
#include <fixedptc.h>

int main() {
    //fixedpt a = fixedpt_rconst(1.2);
    //printf("a = %d\n",a);
    //fixedpt b = fixedpt_fromint(10);
    //printf("b = %d\n",b);
    //int c = 0;
    //if (b > fixedpt_rconst(7.9)) {
    //  c = fixedpt_toint(fixedpt_div(fixedpt_mul(a + FIXEDPT_ONE, b), fixedpt_rconst(2.3)));
    //}
    //printf("c = %d\n",c);
    float aa = 3;
    fixedpt AA = fixedpt_rconst(aa);
    printf("AA dut floor = %d\n",fixedpt_floor(AA));
    float bb = 3.4;
    fixedpt BB = fixedpt_rconst(bb);
    printf("BB dut floor = %d\n",fixedpt_ceil(BB));

    fixedpt a = fixedpt_rconst(1.2);
    printf("a = %d\n",a);
    int b = 10;
    printf("b = %d\n",b);
    int c = 0;
    if (fixedpt_fromint(b) > fixedpt_rconst(7.9)) {
      c = fixedpt_toint(fixedpt_divi(fixedpt_muli(a + FIXEDPT_ONE, b), fixedpt_rconst(2.3)));
    }
    printf("c = %d\n",c);
    return 0;
}
