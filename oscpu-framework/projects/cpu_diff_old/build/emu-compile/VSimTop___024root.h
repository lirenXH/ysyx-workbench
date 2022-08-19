// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimTop.h for the primary calling header

#ifndef VERILATED_VSIMTOP___024ROOT_H_
#define VERILATED_VSIMTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VSimTop__Syms;
class VSimTop_VerilatedVcd;
class VSimTop___024unit;


//----------

VL_MODULE(VSimTop___024root) {
  public:
    // CELLS
    VSimTop___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_perfInfo_clean,0,0);
    VL_IN8(io_perfInfo_dump,0,0);
    VL_OUT8(io_uart_out_valid,0,0);
    VL_OUT8(io_uart_out_ch,7,0);
    VL_OUT8(io_uart_in_valid,0,0);
    VL_IN8(io_uart_in_ch,7,0);
    VL_IN64(io_logCtrl_log_begin,63,0);
    VL_IN64(io_logCtrl_log_end,63,0);
    VL_IN64(io_logCtrl_log_level,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ SimTop__DOT__rd_w_ena;
    CData/*4:0*/ SimTop__DOT__rd_w_addr;
    CData/*4:0*/ SimTop__DOT__inst_type;
    CData/*7:0*/ SimTop__DOT__inst_opcode;
    CData/*0:0*/ SimTop__DOT__cmt_wen;
    CData/*7:0*/ SimTop__DOT__cmt_wdest;
    CData/*0:0*/ SimTop__DOT__cmt_valid;
    CData/*0:0*/ SimTop__DOT__trap;
    CData/*7:0*/ SimTop__DOT__trap_code;
    CData/*0:0*/ SimTop__DOT__inst_valid;
    CData/*0:0*/ SimTop__DOT__Id_stage__DOT__inst_addi;
    IData/*31:0*/ SimTop__DOT__inst;
    IData/*31:0*/ SimTop__DOT__cmt_inst;
    QData/*63:0*/ SimTop__DOT__pc;
    QData/*63:0*/ SimTop__DOT__rd_data;
    QData/*63:0*/ SimTop__DOT__cmt_wdata;
    QData/*63:0*/ SimTop__DOT__cmt_pc;
    QData/*63:0*/ SimTop__DOT__cycleCnt;
    QData/*63:0*/ SimTop__DOT__instrCnt;
    QData/*63:0*/ SimTop__DOT__If_stage__DOT__rdata;
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__regs;
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__regs_diff;
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__Regfile__DOT__regs;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    QData/*63:0*/ __Vfunc_ram_read_helper__0__Vfuncout;
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT____Vcellout__Regfile__regs_o;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VSimTop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSimTop___024root);  ///< Copying not allowed
  public:
    VSimTop___024root(const char* name);
    ~VSimTop___024root();

    // INTERNAL METHODS
    void __Vconfigure(VSimTop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
