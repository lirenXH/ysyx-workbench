#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
////////////////////////iringbuf
static struct iringbuf
{
  word_t irpc;
  char irp[50];
}iringbuf[16];
extern struct funt{
    uint64_t value;
    int ffnum;
    int fsize;
    char name[20];
}func[20];
//////////////////////////////////
void device_update();
void iringbuff(word_t irpcc,char irpp[50]);
void ftrace_main(word_t ftpc,uint64_t inst,word_t fdnpc);
static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
}

void cpu_quit(){
  nemu_state.state = NEMU_QUIT;
}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = 0; i < ilen; i ++) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
  iringbuff(s->pc,p);
  IFDEF(CONFIG_FTRACE,ftrace_main(s->pc,s->isa.inst.val,s->dnpc));
#endif
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);           //检查si大小决定是否需要依次打印运行指令
  switch (nemu_state.state) {                       //cpu每执行一步，检测一次nemu状态，决定是否结束运行
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }


  uint64_t timer_start = get_time();//
  printf("timer_start1:%ld\n",timer_start);
  execute(n);
  uint64_t timer_end = get_time();
  printf("timer_start2:%ld\n",timer_start);
  g_timer += timer_end - timer_start;
  printf("g_timer:%ld\n",g_timer);
  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ASNI_FMT("ABORT", ASNI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
            ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
////////////////////////iringbuf
void iringbuff(word_t irpcc,char irpp[50]){
  static int iri=0;
  iringbuf[iri].irpc=irpcc;
  strcpy(iringbuf[iri].irp,irpp);
  if(iri==15)
    iri=0;
  else
    iri++;
  if(nemu_state.state==NEMU_ABORT||nemu_state.halt_ret==1){
    char error_flag[10] = "<<----";
    for(int i=0;i<=15;i++){
      if(i!=iri-1)
        printf("pc:%#08lx %s\n",iringbuf[i].irpc,iringbuf[i].irp);
      else
        printf("pc:%#08lx %s %s\n",iringbuf[i].irpc,iringbuf[i].irp,error_flag);
    }
  }
}

void ftrace_main(word_t ftpc,uint64_t inst,word_t fdnpc){
  //printf("pc:%#08lx,inst:%x\n",ftpc,inst);
  static int space_len=0;
  if(((inst&0x0000007f)==0b1101111)||((inst&0x0000007f)==0b1100111)){
    //printf("catch jal/jalr dnpc=%ld\n",fdnpc);
    for(int i=0;i<func[1].ffnum;i++){
      if(fdnpc==func[i].value){
        //strcat(space1,"  ");
        printf("%#08lx:",ftpc);
        for(int j=0;j<=space_len;j++)
          putchar(' ');
        printf("call [%s@%lx]\n",func[i].name,func[i].value);
        space_len = space_len + 4;
      }
    }
    if(inst==0x00008067){
      for(int i=0;i<func[1].ffnum;i++){
        if(ftpc-func[i].value<=func[i].fsize){
          if(space_len>=4)
            space_len= space_len-4;
        printf("%#08lx:",ftpc);
        for(int j=0;j<=space_len;j++)
          putchar(' ');
        printf("ret [%s]\n",func[i].name);
        }
      }
    }
  }
  //for(int ii=0;ii<func[1].ffnum;ii++)
  //  printf("cpu:::==ffnum=%d fnum[%d]:%ld name:%s\n",func[1].ffnum,ii,func[ii].value,func[ii].name);
}
////////////////////////////////