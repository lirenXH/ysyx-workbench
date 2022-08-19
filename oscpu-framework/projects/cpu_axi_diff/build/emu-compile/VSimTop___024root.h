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
    VL_IN8(io_memAXI_0_aw_ready,0,0);
    VL_OUT8(io_memAXI_0_aw_valid,0,0);
    VL_OUT8(io_memAXI_0_aw_bits_prot,2,0);
    VL_OUT8(io_memAXI_0_aw_bits_id,3,0);
    VL_OUT8(io_memAXI_0_aw_bits_user,0,0);
    VL_OUT8(io_memAXI_0_aw_bits_len,7,0);
    VL_OUT8(io_memAXI_0_aw_bits_size,2,0);
    VL_OUT8(io_memAXI_0_aw_bits_burst,1,0);
    VL_OUT8(io_memAXI_0_aw_bits_lock,0,0);
    VL_OUT8(io_memAXI_0_aw_bits_cache,3,0);
    VL_OUT8(io_memAXI_0_aw_bits_qos,3,0);
    VL_IN8(io_memAXI_0_w_ready,0,0);
    VL_OUT8(io_memAXI_0_w_valid,0,0);
    VL_OUT8(io_memAXI_0_w_bits_strb,7,0);
    VL_OUT8(io_memAXI_0_w_bits_last,0,0);
    VL_OUT8(io_memAXI_0_b_ready,0,0);
    VL_IN8(io_memAXI_0_b_valid,0,0);
    VL_IN8(io_memAXI_0_b_bits_resp,1,0);
    VL_IN8(io_memAXI_0_b_bits_id,3,0);
    VL_IN8(io_memAXI_0_b_bits_user,0,0);
    VL_IN8(io_memAXI_0_ar_ready,0,0);
    VL_OUT8(io_memAXI_0_ar_valid,0,0);
    VL_OUT8(io_memAXI_0_ar_bits_prot,2,0);
    VL_OUT8(io_memAXI_0_ar_bits_id,3,0);
    VL_OUT8(io_memAXI_0_ar_bits_user,0,0);
    VL_OUT8(io_memAXI_0_ar_bits_len,7,0);
    VL_OUT8(io_memAXI_0_ar_bits_size,2,0);
    VL_OUT8(io_memAXI_0_ar_bits_burst,1,0);
    VL_OUT8(io_memAXI_0_ar_bits_lock,0,0);
    VL_OUT8(io_memAXI_0_ar_bits_cache,3,0);
    VL_OUT8(io_memAXI_0_ar_bits_qos,3,0);
    VL_OUT8(io_memAXI_0_r_ready,0,0);
    VL_IN8(io_memAXI_0_r_valid,0,0);
    VL_IN8(io_memAXI_0_r_bits_resp,1,0);
    VL_IN8(io_memAXI_0_r_bits_last,0,0);
    VL_IN8(io_memAXI_0_r_bits_id,3,0);
    VL_IN8(io_memAXI_0_r_bits_user,0,0);
    VL_IN64(io_logCtrl_log_begin,63,0);
    VL_IN64(io_logCtrl_log_end,63,0);
    VL_IN64(io_logCtrl_log_level,63,0);
    VL_OUT64(io_memAXI_0_aw_bits_addr,63,0);
    VL_OUT64(io_memAXI_0_ar_bits_addr,63,0);
    VL_OUT64(io_memAXI_0_w_bits_data[4],63,0);
    VL_IN64(io_memAXI_0_r_bits_data[4],63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ SimTop__DOT__aw_ready;
    CData/*0:0*/ SimTop__DOT__aw_valid;
    CData/*2:0*/ SimTop__DOT__aw_prot;
    CData/*3:0*/ SimTop__DOT__aw_id;
    CData/*0:0*/ SimTop__DOT__aw_user;
    CData/*7:0*/ SimTop__DOT__aw_len;
    CData/*2:0*/ SimTop__DOT__aw_size;
    CData/*1:0*/ SimTop__DOT__aw_burst;
    CData/*0:0*/ SimTop__DOT__aw_lock;
    CData/*3:0*/ SimTop__DOT__aw_cache;
    CData/*3:0*/ SimTop__DOT__aw_qos;
    CData/*3:0*/ SimTop__DOT__aw_region;
    CData/*0:0*/ SimTop__DOT__w_ready;
    CData/*0:0*/ SimTop__DOT__w_valid;
    CData/*7:0*/ SimTop__DOT__w_strb;
    CData/*0:0*/ SimTop__DOT__w_last;
    CData/*0:0*/ SimTop__DOT__w_user;
    CData/*0:0*/ SimTop__DOT__b_ready;
    CData/*0:0*/ SimTop__DOT__b_valid;
    CData/*1:0*/ SimTop__DOT__b_resp;
    CData/*3:0*/ SimTop__DOT__b_id;
    CData/*0:0*/ SimTop__DOT__b_user;
    CData/*3:0*/ SimTop__DOT__ar_region;
    CData/*0:0*/ SimTop__DOT__u_axi_rw__DOT__w_hs;
    CData/*0:0*/ SimTop__DOT__u_axi_rw__DOT__ar_hs;
    CData/*0:0*/ SimTop__DOT__u_axi_rw__DOT__r_hs;
    CData/*0:0*/ SimTop__DOT__u_axi_rw__DOT__r_done;
    CData/*1:0*/ SimTop__DOT__u_axi_rw__DOT__w_state;
    CData/*1:0*/ SimTop__DOT__u_axi_rw__DOT__r_state;
    CData/*7:0*/ SimTop__DOT__u_axi_rw__DOT__len;
    CData/*0:0*/ SimTop__DOT__u_axi_rw__DOT__len_incr_en;
    CData/*7:0*/ SimTop__DOT__u_axi_rw__DOT__axi_len;
    CData/*0:0*/ SimTop__DOT__u_axi_rw__DOT__rw_ready;
    CData/*0:0*/ SimTop__DOT__u_axi_rw__DOT__rw_ready_en;
    CData/*1:0*/ SimTop__DOT__u_axi_rw__DOT__rw_resp;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__rd_w_ena;
    CData/*4:0*/ SimTop__DOT__u_cpu__DOT__rd_w_addr;
    CData/*4:0*/ SimTop__DOT__u_cpu__DOT__inst_type;
    CData/*7:0*/ SimTop__DOT__u_cpu__DOT__inst_opcode;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__fetched;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__w_ena;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__cmt_wen;
    CData/*7:0*/ SimTop__DOT__u_cpu__DOT__cmt_wdest;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__cmt_valid;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__trap;
    CData/*7:0*/ SimTop__DOT__u_cpu__DOT__trap_code;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__Id_stage__DOT__inst_addi;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__inst;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__cmt_inst;
    QData/*63:0*/ SimTop__DOT__aw_addr;
    QData/*63:0*/ SimTop__DOT__w_data;
    QData/*63:0*/ SimTop__DOT__data_write;
    QData/*63:0*/ SimTop__DOT__if_addr;
    QData/*63:0*/ SimTop__DOT__u_axi_rw__DOT__axi_r_data_l;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__pc;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rd_data;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__cmt_wdata;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__cmt_pc;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__cycleCnt;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__instrCnt;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__If_stage__DOT__addr;
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__u_cpu__DOT__regs;
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__u_cpu__DOT__regs_diff;
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlWide<3>/*64:0*/ SimTop__DOT____Vcellout__u_axi_rw__data_read_o;
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o;
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
