#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
const char *csrs[] = {
  "mstatus", "misa", "medeleg", "mideleg", "mie"      , "mtvec" , "mcounteren", "7 "   , "8 " , "9 ",
  "10"     , "11"  , "12"     , "13"     , "14"       , "15"    , "16"        , "17"   , "18" , "19",
  "20"     , "21"  , "22"     , "23"     , "24"       , "25"    , "26"        , "27"   , "28" , "29",
  "30"     , "31"  , "32"     , "33"     , "34"       , "35"    , "36"        , "37"   , "38" , "39",
  "40"     , "41"  , "42"     , "43"     , "44"       , "45"    , "46"        , "47"   , "48" , "49",
  "50"     , "51"  , "52"     , "53"     , "54"       , "55"    , "56"        , "57"   , "58" , "59",
  "60"     , "61"  , "62"     , "63"     , "mscratch" , "mepc"  , "mcause"    , "mtval", "mip", "69",
  "70"     , "71"  , "72"     , "73"     , "mtinst"   , "mtval2"
};
void isa_reg_display() {
  int i;
  for(i=0;i<32;i++)
    printf("%s -> 0x%016lx\n",regs[i],cpu.gpr[i]);
  for(i=0;i<=75;i++){
    if(i >= 0 && i < 7)
      printf("%8s -> 0x%016lx  ",csrs[i],cpu.csr[i]);
    if(i==4)
      printf("\n");
    if(i >= 64 && i < 69)
      printf("%8s -> 0x%016lx  ",csrs[i],cpu.csr[i]);
    if(i==69)
      printf("\n");
    if(i >= 74 && i <= 75)
      printf("%8s -> 0x%016lx  ",csrs[i],cpu.csr[i]);
    if(i==75)
      printf("\n");
  }
}

word_t isa_reg_str2val(const char *s, bool *success) {
  return 0;
}
