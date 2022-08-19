// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024root.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========

void VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ priviledgeMode, QData/*63:0*/ mstatus, QData/*63:0*/ sstatus, QData/*63:0*/ mepc, QData/*63:0*/ sepc, QData/*63:0*/ mtval, QData/*63:0*/ stval, QData/*63:0*/ mtvec, QData/*63:0*/ stvec, QData/*63:0*/ mcause, QData/*63:0*/ scause, QData/*63:0*/ satp, QData/*63:0*/ mip, QData/*63:0*/ mie, QData/*63:0*/ mscratch, QData/*63:0*/ sscratch, QData/*63:0*/ mideleg, QData/*63:0*/ medeleg);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ fpr_0, QData/*63:0*/ fpr_1, QData/*63:0*/ fpr_2, QData/*63:0*/ fpr_3, QData/*63:0*/ fpr_4, QData/*63:0*/ fpr_5, QData/*63:0*/ fpr_6, QData/*63:0*/ fpr_7, QData/*63:0*/ fpr_8, QData/*63:0*/ fpr_9, QData/*63:0*/ fpr_10, QData/*63:0*/ fpr_11, QData/*63:0*/ fpr_12, QData/*63:0*/ fpr_13, QData/*63:0*/ fpr_14, QData/*63:0*/ fpr_15, QData/*63:0*/ fpr_16, QData/*63:0*/ fpr_17, QData/*63:0*/ fpr_18, QData/*63:0*/ fpr_19, QData/*63:0*/ fpr_20, QData/*63:0*/ fpr_21, QData/*63:0*/ fpr_22, QData/*63:0*/ fpr_23, QData/*63:0*/ fpr_24, QData/*63:0*/ fpr_25, QData/*63:0*/ fpr_26, QData/*63:0*/ fpr_27, QData/*63:0*/ fpr_28, QData/*63:0*/ fpr_29, QData/*63:0*/ fpr_30, QData/*63:0*/ fpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, CData/*7:0*/ code, QData/*63:0*/ pc, QData/*63:0*/ cycleCnt, QData/*63:0*/ instrCnt);
void VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*0:0*/ skip, CData/*0:0*/ isRVC, CData/*0:0*/ scFailed, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata);
extern const VlUnpacked<CData/*0:0*/, 64> VSimTop__ConstPool__TABLE_9fe1c362_0;
extern const VlUnpacked<CData/*1:0*/, 64> VSimTop__ConstPool__TABLE_3bca007f_0;

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__2(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*5:0*/ __Vtableidx1;
    CData/*7:0*/ __Vdly__SimTop__DOT__u_axi_rw__DOT__len;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32;
    VlWide<3>/*64:0*/ __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o;
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<4>/*127:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<4>/*127:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp15;
    VlWide<3>/*95:0*/ __Vtemp16;
    QData/*63:0*/ __Vdly__SimTop__DOT__if_addr;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32;
    // Body
    __Vdly__SimTop__DOT__u_axi_rw__DOT__len = vlSelf->SimTop__DOT__u_axi_rw__DOT__len;
    __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U] 
        = vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U];
    __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U] 
        = vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U];
    __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[2U] 
        = vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[2U];
    __Vdly__SimTop__DOT__if_addr = vlSelf->SimTop__DOT__if_addr;
    __Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32 = 0U;
    VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(0U, 3U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(0U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(0U, 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [1U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [2U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [3U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [4U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [5U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [6U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [7U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [8U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [9U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xaU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xbU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xcU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xdU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xeU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xfU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x10U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x11U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x12U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x13U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x14U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x15U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x16U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x17U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x18U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x19U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1aU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1bU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1cU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1dU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1eU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1fU]);
    VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(0U, (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap), 
                                                                        (7U 
                                                                         & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code)), vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc, vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt, vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt);
    if (vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid) {
        VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid), vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc, vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst, 0U, 0U, 0U, (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen), vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest, vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata);
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_axi_rw__DOT__w_state = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_resp = 0U;
    } else if (vlSelf->SimTop__DOT__u_axi_rw__DOT__r_done) {
        vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_resp 
            = (1U & (IData)(vlSelf->io_memAXI_0_r_bits_resp));
    }
    if (((IData)(vlSelf->reset) | (0U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state)))) {
        __Vdly__SimTop__DOT__u_axi_rw__DOT__len = 0U;
    } else if (vlSelf->SimTop__DOT__u_axi_rw__DOT__len_incr_en) {
        __Vdly__SimTop__DOT__u_axi_rw__DOT__len = (0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__len)));
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U] = 0U;
        __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U] = 0U;
    } else if (((2U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state)) 
                & (IData)(vlSelf->io_memAXI_0_r_valid))) {
        VL_EXTEND_WQ(65,64, __Vtemp8, vlSelf->SimTop__DOT__if_addr);
        VL_EXTEND_WQ(65,64, __Vtemp9, vlSelf->SimTop__DOT__if_addr);
        if ((1U & ((0U != (7U & __Vtemp8[0U])) & (((IData)(3U) 
                                                   + 
                                                   (7U 
                                                    & __Vtemp9[0U])) 
                                                  >> 3U)))) {
            __Vtemp10[0U] = 0xffffffffU;
            __Vtemp10[1U] = 0U;
            __Vtemp10[2U] = 0U;
            __Vtemp10[3U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp11, vlSelf->SimTop__DOT__if_addr);
            VL_SHIFTL_WWI(128,128,6, __Vtemp12, __Vtemp10, 
                          (0x38U & (__Vtemp11[0U] << 3U)));
            VL_EXTEND_WQ(65,64, __Vtemp13, vlSelf->SimTop__DOT__if_addr);
            __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U] 
                = (IData)(((1U & (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__len))
                            ? ((((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U]))) 
                               | ((vlSelf->io_memAXI_0_r_bits_data
                                   [0U] & (((QData)((IData)(
                                                            __Vtemp12[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __Vtemp12[2U])))) 
                                  << (0x3fU & (- (0x38U 
                                                  & (__Vtemp13[0U] 
                                                     << 3U))))))
                            : vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_r_data_l));
            __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U] 
                = (IData)((((1U & (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__len))
                             ? ((((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U]))) 
                                | ((vlSelf->io_memAXI_0_r_bits_data
                                    [0U] & (((QData)((IData)(
                                                             __Vtemp12[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp12[2U])))) 
                                   << (0x3fU & (- (0x38U 
                                                   & (__Vtemp13[0U] 
                                                      << 3U))))))
                             : vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_r_data_l) 
                           >> 0x20U));
        } else if ((0U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__len))) {
            __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U] 
                = (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_r_data_l);
            __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U] 
                = (IData)((vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_r_data_l 
                           >> 0x20U));
        }
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pc = 0x80000000ULL;
        __Vdly__SimTop__DOT__if_addr = 0x80000000ULL;
    } else if (vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pc = vlSelf->SimTop__DOT__if_addr;
        __Vdly__SimTop__DOT__if_addr = (4ULL + vlSelf->SimTop__DOT__if_addr);
    }
    __Vtableidx1 = (2U | (((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_done) 
                           << 5U) | (((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__ar_hs) 
                                      << 4U) | (((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state) 
                                                 << 2U) 
                                                | (IData)(vlSelf->reset)))));
    if (VSimTop__ConstPool__TABLE_9fe1c362_0[__Vtableidx1]) {
        vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state 
            = VSimTop__ConstPool__TABLE_3bca007f_0[__Vtableidx1];
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__fetched = ((~ (IData)(vlSelf->reset)) 
                                                & (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready));
    if (vlSelf->reset) {
        __Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v0 = 1U;
    } else if (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
                & (0U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))) {
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32 
            = vlSelf->SimTop__DOT__u_cpu__DOT__rd_data;
        __Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32 
            = vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr;
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready) {
            vlSelf->SimTop__DOT__u_cpu__DOT__inst = 
                vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U];
        }
    }
    vlSelf->SimTop__DOT__u_axi_rw__DOT__len = __Vdly__SimTop__DOT__u_axi_rw__DOT__len;
    vlSelf->SimTop__DOT__if_addr = __Vdly__SimTop__DOT__if_addr;
    if (__Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[1U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[2U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[3U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[4U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[5U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[6U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[7U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[8U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[9U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0xaU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0xbU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0xcU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0xdU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0xeU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0xfU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x10U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x11U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x12U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x13U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x14U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x15U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x16U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x17U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x18U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x19U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x1aU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x1bU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x1cU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x1dU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x1eU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32) {
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[__Vdlyvdim0__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32;
    }
    vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U] 
        = __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U];
    vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U] 
        = __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U];
    vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[2U] 
        = __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[2U];
    VL_EXTEND_WQ(65,64, __Vtemp14, vlSelf->SimTop__DOT__if_addr);
    vlSelf->io_memAXI_0_ar_bits_addr = (0xfffffffffffffff8ULL 
                                        & (((QData)((IData)(
                                                            __Vtemp14[1U])) 
                                            << 0x20U) 
                                           | (0xfffffffffffffff8ULL 
                                              & (QData)((IData)(
                                                                __Vtemp14[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp15, vlSelf->SimTop__DOT__if_addr);
    VL_EXTEND_WQ(65,64, __Vtemp16, vlSelf->SimTop__DOT__if_addr);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_len = (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp15[0U]))
                                                    ? 0U
                                                    : 
                                                   (1U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        (7U 
                                                         & __Vtemp16[0U])) 
                                                       >> 3U)));
    vlSelf->io_memAXI_0_ar_valid = (1U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state));
    vlSelf->io_memAXI_0_r_ready = (2U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state));
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
        [0U];
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready = 0U;
    } else if (vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready_en) {
        vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready 
            = vlSelf->SimTop__DOT__u_axi_rw__DOT__r_done;
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__Id_stage__DOT__inst_addi 
        = (IData)((0x10U == (0x703cU & vlSelf->SimTop__DOT__u_cpu__DOT__inst)));
    vlSelf->io_memAXI_0_ar_bits_len = vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_len;
}

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__3(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__trap;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v1;
    QData/*63:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__cycleCnt;
    QData/*63:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__instrCnt;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v0;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v1;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v2;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v3;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v4;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v5;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v6;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v7;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v8;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v9;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v10;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v11;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v12;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v13;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v14;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v15;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v16;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v17;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v18;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v19;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v20;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v21;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v22;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v23;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v24;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v25;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v26;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v27;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v28;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v29;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v30;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v31;
    // Body
    __Vdly__SimTop__DOT__u_cpu__DOT__instrCnt = vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt;
    __Vdly__SimTop__DOT__u_cpu__DOT__cycleCnt = vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt;
    __Vdly__SimTop__DOT__u_cpu__DOT__trap = vlSelf->SimTop__DOT__u_cpu__DOT__trap;
    __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v1 = 0U;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__trap = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__trap_code = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__cycleCnt = 0ULL;
        __Vdly__SimTop__DOT__u_cpu__DOT__instrCnt = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap)))) {
        __Vdly__SimTop__DOT__u_cpu__DOT__cycleCnt = 
            (1ULL + vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt);
        __Vdly__SimTop__DOT__u_cpu__DOT__instrCnt = 
            (vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt 
             + (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__fetched)));
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen = vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_ena;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest 
            = vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata 
            = vlSelf->SimTop__DOT__u_cpu__DOT__rd_data;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc = vlSelf->SimTop__DOT__u_cpu__DOT__pc;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst = vlSelf->SimTop__DOT__u_cpu__DOT__inst;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid 
            = vlSelf->SimTop__DOT__u_cpu__DOT__fetched;
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v0 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0U];
        __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v0 = 1U;
        __Vdly__SimTop__DOT__u_cpu__DOT__trap = (0x6bU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__inst));
        vlSelf->SimTop__DOT__u_cpu__DOT__trap_code 
            = (0xffU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__regs
                               [0xaU]));
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v1 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [1U];
        __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v1 = 1U;
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v2 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [2U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v3 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [3U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v4 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [4U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v5 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [5U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v6 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [6U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v7 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [7U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v8 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [8U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v9 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [9U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v10 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0xaU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v11 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0xbU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v12 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0xcU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v13 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0xdU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v14 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0xeU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v15 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0xfU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v16 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x10U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v17 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x11U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v18 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x12U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v19 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x13U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v20 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x14U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v21 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x15U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v22 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x16U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v23 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x17U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v24 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x18U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v25 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x19U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v26 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x1aU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v27 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x1bU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v28 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x1cU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v29 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x1dU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v30 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x1eU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v31 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs
            [0x1fU];
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__trap = __Vdly__SimTop__DOT__u_cpu__DOT__trap;
    vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt = __Vdly__SimTop__DOT__u_cpu__DOT__cycleCnt;
    vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt = __Vdly__SimTop__DOT__u_cpu__DOT__instrCnt;
    if (__Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v1) {
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[1U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v1;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[2U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v2;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[3U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v3;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[4U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v4;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[5U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v5;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[6U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v6;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[7U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v7;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[8U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v8;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[9U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v9;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xaU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v10;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xbU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v11;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xcU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v12;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xdU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v13;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xeU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v14;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xfU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v15;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x10U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v16;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x11U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v17;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x12U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v18;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x13U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v19;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x14U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v20;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x15U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v21;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x16U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v22;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x17U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v23;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x18U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v24;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x19U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v25;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1aU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v26;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1bU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v27;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1cU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v28;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1dU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v29;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1eU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v30;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1fU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v31;
    }
}

VL_INLINE_OPT void VSimTop___024root___combo__TOP__4(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___combo__TOP__4\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp17;
    VlWide<3>/*95:0*/ __Vtemp18;
    VlWide<4>/*127:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp20;
    // Body
    __Vtemp17[0U] = 0xffffffffU;
    __Vtemp17[1U] = 0U;
    __Vtemp17[2U] = 0U;
    __Vtemp17[3U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp18, vlSelf->SimTop__DOT__if_addr);
    VL_SHIFTL_WWI(128,128,6, __Vtemp19, __Vtemp17, 
                  (0x38U & (__Vtemp18[0U] << 3U)));
    VL_EXTEND_WQ(65,64, __Vtemp20, vlSelf->SimTop__DOT__if_addr);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_r_data_l 
        = ((vlSelf->io_memAXI_0_r_bits_data[0U] & (
                                                   ((QData)((IData)(
                                                                    __Vtemp19[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     __Vtemp19[0U])))) 
           >> (0x38U & (__Vtemp20[0U] << 3U)));
    vlSelf->SimTop__DOT__u_axi_rw__DOT__ar_hs = ((IData)(vlSelf->io_memAXI_0_ar_ready) 
                                                 & (1U 
                                                    == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state)));
    vlSelf->SimTop__DOT__u_axi_rw__DOT__r_hs = ((2U 
                                                 == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state)) 
                                                & (IData)(vlSelf->io_memAXI_0_r_valid));
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_opcode = 
        ((0xfeU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_opcode)) 
         | ((IData)(vlSelf->reset) ? 0U : (1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Id_stage__DOT__inst_addi))));
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_opcode = 
        ((0xefU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_opcode)) 
         | (((IData)(vlSelf->reset) ? 0U : (1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Id_stage__DOT__inst_addi))) 
            << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_type = ((0xfU 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type)) 
                                                  | (((IData)(vlSelf->reset)
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Id_stage__DOT__inst_addi))) 
                                                     << 4U));
    vlSelf->SimTop__DOT__u_axi_rw__DOT__len_incr_en 
        = (((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__len) 
            != (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_len)) 
           & ((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_hs) 
              | (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_hs)));
    vlSelf->SimTop__DOT__u_axi_rw__DOT__r_done = ((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_hs) 
                                                  & (IData)(vlSelf->io_memAXI_0_r_bits_last));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__rd_data = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_ena = 0U;
    } else {
        vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr 
            = ((0x10U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type))
                ? (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                            >> 7U)) : 0U);
        vlSelf->SimTop__DOT__u_cpu__DOT__rd_data = 
            ((0x11U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_opcode))
              ? (((IData)(vlSelf->reset) ? 0ULL : (
                                                   (0x10U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type))
                                                    ? 
                                                   ((IData)(vlSelf->reset)
                                                     ? 0ULL
                                                     : 
                                                    (((IData)(vlSelf->reset)
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type) 
                                                          >> 4U)))
                                                      ? 
                                                     vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
                                                     [
                                                     ((IData)(vlSelf->reset)
                                                       ? 0U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type))
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                                           >> 0xfU))
                                                        : 0U))]
                                                      : 0ULL))
                                                    : 0ULL)) 
                 + ((IData)(vlSelf->reset) ? 0ULL : 
                    ((0x10U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type))
                      ? (((- (QData)((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                              >> 0x1fU)))) 
                          << 0xcU) | (QData)((IData)(
                                                     (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                                      >> 0x14U))))
                      : 0ULL))) : 0ULL);
        vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_ena = 
            (1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type) 
                   >> 4U));
    }
    vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready_en 
        = ((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_done) 
           | (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready));
    vlSelf->SimTop__DOT__u_cpu__DOT__w_ena = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_ena) 
                                              & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__fetched));
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[1U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (1U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [1U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[2U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (2U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[3U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (3U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [3U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[4U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (4U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [4U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[5U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (5U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [5U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[6U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (6U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [6U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[7U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (7U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [7U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[8U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (8U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [8U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[9U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (9U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [9U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0xaU] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0xaU]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0xbU] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0xbU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0xbU]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0xcU] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0xcU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0xcU]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0xdU] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0xdU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0xdU]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0xeU] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0xeU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0xeU]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0xfU] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0xfU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0xfU]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x10U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x10U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x10U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x11U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x11U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x11U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x12U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x12U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x12U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x13U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x13U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x13U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x14U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x14U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x14U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x15U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x15U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x15U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x16U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x16U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x16U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x17U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x17U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x17U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x18U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x18U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x18U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x19U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x19U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x19U]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x1aU] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x1aU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x1aU]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x1bU] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x1bU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x1bU]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x1cU] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x1cU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x1cU]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x1dU] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x1dU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x1dU]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x1eU] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x1eU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x1eU]);
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0x1fU] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__w_ena) 
            & (0x1fU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rd_data
            : vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
           [0x1fU]);
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0U] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[1U] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[2U] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [2U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[3U] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [3U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[4U] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [4U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[5U] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [5U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[6U] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [6U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[7U] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [7U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[8U] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [8U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[9U] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [9U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0xaU] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0xaU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0xbU] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0xbU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0xcU] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0xcU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0xdU] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0xdU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0xeU] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0xeU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0xfU] = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0xfU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x10U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x10U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x11U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x11U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x12U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x12U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x13U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x13U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x14U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x14U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x15U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x15U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x16U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x16U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x17U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x17U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x18U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x18U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x19U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x19U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x1aU] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x1aU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x1bU] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x1bU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x1cU] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x1cU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x1dU] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x1dU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x1eU] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x1eU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs[0x1fU] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o
        [0x1fU];
}

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlSelf->clock)) & (IData)(vlSelf->__Vclklast__TOP__clock))) {
        VSimTop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VSimTop___024root___combo__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf);

VL_INLINE_OPT QData VSimTop___024root___change_request(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request\n"); );
    // Body
    return (VSimTop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_clean & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_clean");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_dump & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_dump");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_aw_ready & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_aw_ready");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_w_ready & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_w_ready");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_b_valid & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_b_valid");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_b_bits_resp 
                     & 0xfcU))) {
        Verilated::overWidthError("io_memAXI_0_b_bits_resp");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_b_bits_id 
                     & 0xf0U))) {
        Verilated::overWidthError("io_memAXI_0_b_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_b_bits_user 
                     & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_b_bits_user");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_ar_ready & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_ar_ready");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_valid & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_r_valid");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_bits_resp 
                     & 0xfcU))) {
        Verilated::overWidthError("io_memAXI_0_r_bits_resp");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_bits_last 
                     & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_r_bits_last");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_bits_id 
                     & 0xf0U))) {
        Verilated::overWidthError("io_memAXI_0_r_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_bits_user 
                     & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_r_bits_user");}
}
#endif  // VL_DEBUG
