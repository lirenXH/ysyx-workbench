#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h" 
Vtop *top;
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);   // Remember args
    top = new Vtop;             // Create model
        while (true) {
          int a = rand() & 1;
          int b = rand() & 1;
          top->a = a;
          top->b = b; 
          top->eval();
          printf("a = %d, b = %d, f = %d\n", a, b, top->f);
          assert(top->f == a ^ b);
        }
        top->final();
        delete top; 
}
