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
    VL_OUT(ws_inst,31,0);
    VL_IN64(io_logCtrl_log_begin,63,0);
    VL_IN64(io_logCtrl_log_end,63,0);
    VL_IN64(io_logCtrl_log_level,63,0);
    VL_OUT64(pc_out,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ SimTop__DOT__fetched;
    CData/*0:0*/ SimTop__DOT__ds_allowin;
    CData/*0:0*/ SimTop__DOT__es_allowin;
    CData/*1:0*/ SimTop__DOT__ForwardA;
    CData/*1:0*/ SimTop__DOT__ForwardB;
    CData/*0:0*/ SimTop__DOT__IF_ID_write;
    CData/*0:0*/ SimTop__DOT__cmt_wen;
    CData/*7:0*/ SimTop__DOT__cmt_wdest;
    CData/*0:0*/ SimTop__DOT__cmt_valid;
    CData/*0:0*/ SimTop__DOT__trap;
    CData/*7:0*/ SimTop__DOT__trap_code;
    CData/*0:0*/ SimTop__DOT__inst_valid;
    CData/*0:0*/ SimTop__DOT__IF__DOT__fs_valid;
    CData/*0:0*/ SimTop__DOT__IF__DOT__fs_allowin;
    CData/*0:0*/ SimTop__DOT__ID__DOT__ds_valid;
    CData/*0:0*/ SimTop__DOT__EXE__DOT__es_valid;
    CData/*0:0*/ SimTop__DOT__EXE__DOT__bru__DOT__equ;
    CData/*0:0*/ SimTop__DOT__EXE__DOT__bru__DOT__lt;
    CData/*0:0*/ SimTop__DOT__EXE__DOT__bru__DOT__ltu;
    CData/*0:0*/ SimTop__DOT__MEM__DOT__ms_valid;
    CData/*0:0*/ SimTop__DOT__WB__DOT__ws_valid;
    VlWide<5>/*130:0*/ SimTop__DOT__bru_to_fs_bus;
    VlWide<3>/*69:0*/ SimTop__DOT__ws_to_rf_bus;
    VlWide<6>/*172:0*/ SimTop__DOT__es_to_ms_bus;
    VlWide<8>/*231:0*/ SimTop__DOT__ms_to_ws_bus;
    IData/*31:0*/ SimTop__DOT__inst;
    IData/*31:0*/ SimTop__DOT__cmt_inst;
    IData/*31:0*/ SimTop__DOT__ID__DOT__inst;
    VlWide<3>/*95:0*/ SimTop__DOT__ID__DOT__fs_to_ds_bus_r;
    IData/*19:0*/ SimTop__DOT__ID__DOT__con_signal;
    IData/*31:0*/ SimTop__DOT__ID__DOT__GPR__DOT__i;
    VlWide<11>/*322:0*/ SimTop__DOT__EXE__DOT__ds_to_es_bus_r;
    VlWide<6>/*172:0*/ SimTop__DOT__MEM__DOT__es_to_ms_bus_r;
    VlWide<8>/*231:0*/ SimTop__DOT__WB__DOT__ms_to_ws_bus_r;
    QData/*63:0*/ SimTop__DOT__es_alu_result;
    QData/*63:0*/ SimTop__DOT__cmt_wdata;
    QData/*63:0*/ SimTop__DOT__cmt_pc;
    QData/*63:0*/ SimTop__DOT__cycleCnt;
    QData/*63:0*/ SimTop__DOT__instrCnt;
    QData/*63:0*/ SimTop__DOT__IF__DOT__nextpc;
    QData/*63:0*/ SimTop__DOT__IF__DOT__fs_pc;
    QData/*63:0*/ SimTop__DOT__inst_ram__DOT__inst_ext;
    QData/*63:0*/ SimTop__DOT__ID__DOT__imme_o;
    QData/*63:0*/ SimTop__DOT__EXE__DOT__es_alu_a;
    QData/*63:0*/ SimTop__DOT__EXE__DOT__es_alu_b;
    QData/*63:0*/ SimTop__DOT__EXE__DOT__es_for_src1;
    QData/*63:0*/ SimTop__DOT__EXE__DOT__es_for_src2;
    QData/*63:0*/ SimTop__DOT__EXE__DOT__alu__DOT__sel_result;
    QData/*63:0*/ SimTop__DOT__EXE__DOT__alu__DOT__sub_result;
    QData/*63:0*/ SimTop__DOT__EXE__DOT__alu__DOT__div_result;
    QData/*63:0*/ SimTop__DOT__EXE__DOT__alu__DOT__mul_result;
    QData/*63:0*/ SimTop__DOT__EXE__DOT__alu__DOT__rem_result;
    QData/*63:0*/ SimTop__DOT__EXE__DOT__alu__DOT__sll_result;
    QData/*63:0*/ SimTop__DOT__EXE__DOT__alu__DOT__srl_result;
    QData/*63:0*/ SimTop__DOT__EXE__DOT__alu__DOT__sra_result;
    QData/*63:0*/ SimTop__DOT__MEM__DOT__es_to_alu_result_r;
    QData/*63:0*/ SimTop__DOT__MEM__DOT__ms_rdata;
    QData/*63:0*/ SimTop__DOT__MEM__DOT__ram__DOT__rdata_RAMHelper;
    QData/*63:0*/ SimTop__DOT__MEM__DOT__ram__DOT__rdata;
    QData/*63:0*/ SimTop__DOT__MEM__DOT__ram__DOT__wmask;
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__regs_ds_o;
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__regs_diff;
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__ID__DOT__GPR__DOT__register;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    QData/*63:0*/ __Vfunc_ram_read_helper__0__Vfuncout;
    QData/*63:0*/ __Vfunc_ram_read_helper__2__Vfuncout;
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT____Vcellout__ID__regs_ds_o;
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o;
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
