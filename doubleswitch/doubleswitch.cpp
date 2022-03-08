#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h" 
#include "verilated.h"
int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop* top = new Vtop{contextp};
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp,99);
    tfp->open("obj_dir/sim1.vcd");
        while (true) {
	  contextp->timeInc(1);
          int a = rand() & 1;
          int b = rand() & 1;
          top->a = a;
          top->b = b; 
          top->eval();
	  tfp->dump(contextp->time());
          printf("a = %d, b = %d, f = %d\n", a, b, top->f);
          assert(top->f == a ^ b);
        }
        top->final();
	tfp->close();
        delete top; 
	delete contextp;
	delete tfp;
	return 0;
}
