// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvcpu.h for the primary calling header

#ifndef VERILATED_VRVCPU___024ROOT_H_
#define VERILATED_VRVCPU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vrvcpu__Syms;
class Vrvcpu_VerilatedVcd;


//----------

VL_MODULE(Vrvcpu___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(inst_ena,0,0);
    VL_IN(inst,31,0);
    VL_OUT64(inst_addr,63,0);

    // LOCAL SIGNALS
    CData/*4:0*/ rvcpu__DOT__rd_w_addr;
    CData/*4:0*/ rvcpu__DOT__inst_type;
    CData/*7:0*/ rvcpu__DOT__inst_opcode;
    CData/*0:0*/ rvcpu__DOT__Id_stage__DOT__inst_addi;
    QData/*63:0*/ rvcpu__DOT__rd_data;
    QData/*63:0*/ rvcpu__DOT__If_stage__DOT__pc;
    VlUnpacked<QData/*63:0*/, 32> rvcpu__DOT__Regfile__DOT__regs;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vrvcpu__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvcpu___024root);  ///< Copying not allowed
  public:
    Vrvcpu___024root(const char* name);
    ~Vrvcpu___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vrvcpu__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
