// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024root.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========

void VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(QData/*63:0*/ wIdx, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);
void VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ priviledgeMode, QData/*63:0*/ mstatus, QData/*63:0*/ sstatus, QData/*63:0*/ mepc, QData/*63:0*/ sepc, QData/*63:0*/ mtval, QData/*63:0*/ stval, QData/*63:0*/ mtvec, QData/*63:0*/ stvec, QData/*63:0*/ mcause, QData/*63:0*/ scause, QData/*63:0*/ satp, QData/*63:0*/ mip, QData/*63:0*/ mie, QData/*63:0*/ mscratch, QData/*63:0*/ sscratch, QData/*63:0*/ mideleg, QData/*63:0*/ medeleg);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ fpr_0, QData/*63:0*/ fpr_1, QData/*63:0*/ fpr_2, QData/*63:0*/ fpr_3, QData/*63:0*/ fpr_4, QData/*63:0*/ fpr_5, QData/*63:0*/ fpr_6, QData/*63:0*/ fpr_7, QData/*63:0*/ fpr_8, QData/*63:0*/ fpr_9, QData/*63:0*/ fpr_10, QData/*63:0*/ fpr_11, QData/*63:0*/ fpr_12, QData/*63:0*/ fpr_13, QData/*63:0*/ fpr_14, QData/*63:0*/ fpr_15, QData/*63:0*/ fpr_16, QData/*63:0*/ fpr_17, QData/*63:0*/ fpr_18, QData/*63:0*/ fpr_19, QData/*63:0*/ fpr_20, QData/*63:0*/ fpr_21, QData/*63:0*/ fpr_22, QData/*63:0*/ fpr_23, QData/*63:0*/ fpr_24, QData/*63:0*/ fpr_25, QData/*63:0*/ fpr_26, QData/*63:0*/ fpr_27, QData/*63:0*/ fpr_28, QData/*63:0*/ fpr_29, QData/*63:0*/ fpr_30, QData/*63:0*/ fpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, CData/*7:0*/ code, QData/*63:0*/ pc, QData/*63:0*/ cycleCnt, QData/*63:0*/ instrCnt);
void VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*0:0*/ skip, CData/*0:0*/ isRVC, CData/*0:0*/ scFailed, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata);
extern const VlUnpacked<QData/*63:0*/, 64> VSimTop__ConstPool__TABLE_8a885cad_0;
void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*5:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__ID__DOT__GPR__DOT__register__v0;
    CData/*4:0*/ __Vdlyvdim0__SimTop__DOT__ID__DOT__GPR__DOT__register__v64;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__ID__DOT__GPR__DOT__register__v64;
    VlWide<4>/*127:0*/ __Vtemp1;
    VlWide<3>/*95:0*/ __Vtemp25;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__ID__DOT__GPR__DOT__register__v64;
    // Body
    __Vdlyvset__SimTop__DOT__ID__DOT__GPR__DOT__register__v0 = 0U;
    __Vdlyvset__SimTop__DOT__ID__DOT__GPR__DOT__register__v64 = 0U;
    VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(0ULL, 0ULL, 0ULL, 0U);
    VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(0U, 3U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(0U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__i = 0x40U;
    }
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(0U, 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [1U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [2U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [3U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [4U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [5U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [6U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [7U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [8U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [9U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0xaU], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0xbU], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0xcU], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0xdU], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0xeU], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0xfU], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x10U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x11U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x12U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x13U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x14U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x15U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x16U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x17U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x18U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x19U], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x1aU], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x1bU], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x1cU], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x1dU], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x1eU], 
                                                                              vlSelf->SimTop__DOT__regs_diff
                                                                              [0x1fU]);
    VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(0U, (IData)(vlSelf->SimTop__DOT__trap), 
                                                                        (7U 
                                                                         & (IData)(vlSelf->SimTop__DOT__trap_code)), vlSelf->SimTop__DOT__cmt_pc, vlSelf->SimTop__DOT__cycleCnt, vlSelf->SimTop__DOT__instrCnt);
    VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                    ((vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r 
                                                                      - 0x80000000ULL) 
                                                                     >> 3U), 
                                                                    ((0x3fU 
                                                                      >= 
                                                                      (0x38U 
                                                                       & ((IData)(vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r) 
                                                                          << 3U)))
                                                                      ? 
                                                                     ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[4U])) 
                                                                        << 0x33U) 
                                                                       | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[3U])) 
                                                                           << 0x13U) 
                                                                          | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U])) 
                                                                             >> 0xdU))) 
                                                                      << 
                                                                      (0x38U 
                                                                       & ((IData)(vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r) 
                                                                          << 3U)))
                                                                      : 0ULL), vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__wmask, 
                                                                    (1U 
                                                                     & ((vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                                                         >> 0xcU) 
                                                                        & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                                                           >> 0xbU))));
    if (vlSelf->SimTop__DOT__cmt_valid) {
        VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, (IData)(vlSelf->SimTop__DOT__cmt_valid), vlSelf->SimTop__DOT__cmt_pc, vlSelf->SimTop__DOT__cmt_inst, 0U, 0U, 0U, (IData)(vlSelf->SimTop__DOT__cmt_wen), vlSelf->SimTop__DOT__cmt_wdest, vlSelf->SimTop__DOT__cmt_wdata);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->SimTop__DOT__IF__DOT__fs_allowin))) {
            vlSelf->SimTop__DOT__fetched = 1U;
        }
    }
    if (((IData)(vlSelf->SimTop__DOT__ID__DOT__ds_valid) 
         & (IData)(vlSelf->SimTop__DOT__es_allowin))) {
        __Vtemp1[2U] = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__ID__DOT__inst)) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0xf8000000U 
                                                               & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                  << 0xcU)) 
                                                              | ((0x7c00000U 
                                                                  & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                     << 2U)) 
                                                                 | ((0x300000U 
                                                                     & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                                        << 0xfU)) 
                                                                    | ((0x80000U 
                                                                        & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                                           << 0x13U)) 
                                                                       | ((0x40000U 
                                                                           & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                                              << 0x10U)) 
                                                                          | ((0x20000U 
                                                                              & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                                                << 0x10U)) 
                                                                             | ((0x1f000U 
                                                                                & vlSelf->SimTop__DOT__ID__DOT__con_signal) 
                                                                                | ((0xc00U 
                                                                                & vlSelf->SimTop__DOT__ID__DOT__con_signal) 
                                                                                | ((0x300U 
                                                                                & vlSelf->SimTop__DOT__ID__DOT__con_signal) 
                                                                                | ((0x80U 
                                                                                & vlSelf->SimTop__DOT__ID__DOT__con_signal) 
                                                                                | ((0x60U 
                                                                                & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                                                << 2U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                                >> 7U)))))))))))))))));
        __Vtemp1[3U] = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__ID__DOT__inst)) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((0xf8000000U 
                                                                & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                   << 0xcU)) 
                                                               | ((0x7c00000U 
                                                                   & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                      << 2U)) 
                                                                  | ((0x300000U 
                                                                      & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                                         << 0xfU)) 
                                                                     | ((0x80000U 
                                                                         & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                                            << 0x13U)) 
                                                                        | ((0x40000U 
                                                                            & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                                               << 0x10U)) 
                                                                           | ((0x20000U 
                                                                               & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                                                << 0x10U)) 
                                                                              | ((0x1f000U 
                                                                                & vlSelf->SimTop__DOT__ID__DOT__con_signal) 
                                                                                | ((0xc00U 
                                                                                & vlSelf->SimTop__DOT__ID__DOT__con_signal) 
                                                                                | ((0x300U 
                                                                                & vlSelf->SimTop__DOT__ID__DOT__con_signal) 
                                                                                | ((0x80U 
                                                                                & vlSelf->SimTop__DOT__ID__DOT__con_signal) 
                                                                                | ((0x60U 
                                                                                & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                                                << 2U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                                >> 7U)))))))))))))))) 
                                >> 0x20U));
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[0U] 
            = (IData)(((1U & (vlSelf->SimTop__DOT__bru_to_fs_bus[2U] 
                              | (IData)(vlSelf->SimTop__DOT__IF_ID_write)))
                        ? 0ULL : (((QData)((IData)(
                                                   vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[0U])))));
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[1U] 
            = (IData)((((1U & (vlSelf->SimTop__DOT__bru_to_fs_bus[2U] 
                               | (IData)(vlSelf->SimTop__DOT__IF_ID_write)))
                         ? 0ULL : (((QData)((IData)(
                                                    vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[0U])))) 
                       >> 0x20U));
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[2U] 
            = (IData)(((0U == (0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                        >> 0x14U)))
                        ? 0ULL : ((((0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
                                    == (0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                 >> 0x14U))) 
                                   & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                      >> 5U)) ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
                                   : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
                                  [(0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                             >> 0x14U))])));
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[3U] 
            = (IData)((((0U == (0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                         >> 0x14U)))
                         ? 0ULL : ((((0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
                                     == (0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                  >> 0x14U))) 
                                    & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                       >> 5U)) ? (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
                                    : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
                                   [(0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                              >> 0x14U))])) 
                       >> 0x20U));
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[4U] 
            = (IData)(((0U == (0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                        >> 0xfU))) ? 0ULL
                        : ((((0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
                             == (0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                          >> 0xfU))) 
                            & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                               >> 5U)) ? (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
                            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
                           [(0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                      >> 0xfU))])));
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[5U] 
            = (IData)((((0U == (0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                         >> 0xfU)))
                         ? 0ULL : ((((0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
                                     == (0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                  >> 0xfU))) 
                                    & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                       >> 5U)) ? (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
                                    : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
                                   [(0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                              >> 0xfU))])) 
                       >> 0x20U));
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[6U] 
            = (((IData)(vlSelf->SimTop__DOT__ID__DOT__imme_o) 
                << 3U) | (7U & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                >> 0xcU)));
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[7U] 
            = (((IData)(vlSelf->SimTop__DOT__ID__DOT__imme_o) 
                >> 0x1dU) | ((IData)((vlSelf->SimTop__DOT__ID__DOT__imme_o 
                                      >> 0x20U)) << 3U));
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
            = (((IData)((vlSelf->SimTop__DOT__ID__DOT__imme_o 
                         >> 0x20U)) >> 0x1dU) | (__Vtemp1[2U] 
                                                 << 3U));
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[9U] 
            = ((__Vtemp1[2U] >> 0x1dU) | (__Vtemp1[3U] 
                                          << 3U));
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[0xaU] 
            = (__Vtemp1[3U] >> 0x1dU);
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__ID__DOT__ds_valid)))) {
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[0U] = 0U;
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[1U] = 0U;
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[2U] = 0U;
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[3U] = 0U;
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[4U] = 0U;
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[5U] = 0U;
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[6U] = 0U;
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[7U] = 0U;
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] = 0U;
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[9U] = 0x98U;
        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[0xaU] = 0U;
    }
    vlSelf->SimTop__DOT__WB__DOT__ws_valid = ((~ (IData)(vlSelf->reset)) 
                                              & (IData)(vlSelf->SimTop__DOT__MEM__DOT__ms_valid));
    if (vlSelf->reset) {
        __Vdlyvset__SimTop__DOT__ID__DOT__GPR__DOT__register__v0 = 1U;
    } else if (((0U != (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])) 
                & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                   >> 5U))) {
        __Vdlyvval__SimTop__DOT__ID__DOT__GPR__DOT__register__v64 
            = (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__SimTop__DOT__ID__DOT__GPR__DOT__register__v64 = 1U;
        __Vdlyvdim0__SimTop__DOT__ID__DOT__GPR__DOT__register__v64 
            = (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]);
    }
    if (vlSelf->SimTop__DOT__MEM__DOT__ms_valid) {
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[0U] 
            = vlSelf->SimTop__DOT__ms_to_ws_bus[0U];
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[1U] 
            = vlSelf->SimTop__DOT__ms_to_ws_bus[1U];
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[2U] 
            = vlSelf->SimTop__DOT__ms_to_ws_bus[2U];
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[3U] 
            = vlSelf->SimTop__DOT__ms_to_ws_bus[3U];
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[4U] 
            = vlSelf->SimTop__DOT__ms_to_ws_bus[4U];
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[5U] 
            = vlSelf->SimTop__DOT__ms_to_ws_bus[5U];
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U] 
            = vlSelf->SimTop__DOT__ms_to_ws_bus[6U];
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[7U] 
            = vlSelf->SimTop__DOT__ms_to_ws_bus[7U];
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__MEM__DOT__ms_valid)))) {
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[0U] = 0U;
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[1U] = 0U;
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[2U] = 0U;
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[3U] = 0U;
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[4U] = 0U;
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[5U] = 0U;
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U] = 0x1300U;
        vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[7U] = 0U;
    }
    if (__Vdlyvset__SimTop__DOT__ID__DOT__GPR__DOT__register__v0) {
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[1U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[2U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[3U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[4U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[5U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[6U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[7U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[8U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[9U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0xaU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0xbU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0xcU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0xdU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0xeU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0xfU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x10U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x11U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x12U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x13U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x14U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x15U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x16U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x17U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x18U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x19U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x1aU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x1bU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x1cU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x1dU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x1eU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x1fU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[1U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[2U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[3U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[4U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[5U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[6U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[7U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[8U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[9U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0xaU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0xbU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0xcU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0xdU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0xeU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0xfU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x10U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x11U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x12U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x13U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x14U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x15U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x16U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x17U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x18U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x19U] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x1aU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x1bU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x1cU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x1dU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x1eU] = 0ULL;
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__SimTop__DOT__ID__DOT__GPR__DOT__register__v64) {
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[__Vdlyvdim0__SimTop__DOT__ID__DOT__GPR__DOT__register__v64] 
            = __Vdlyvval__SimTop__DOT__ID__DOT__GPR__DOT__register__v64;
    }
    if (vlSelf->SimTop__DOT__EXE__DOT__es_valid) {
        vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[0U] 
            = vlSelf->SimTop__DOT__es_to_ms_bus[0U];
        vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[1U] 
            = vlSelf->SimTop__DOT__es_to_ms_bus[1U];
        vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
            = vlSelf->SimTop__DOT__es_to_ms_bus[2U];
        vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[3U] 
            = vlSelf->SimTop__DOT__es_to_ms_bus[3U];
        vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[4U] 
            = vlSelf->SimTop__DOT__es_to_ms_bus[4U];
        vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[5U] 
            = vlSelf->SimTop__DOT__es_to_ms_bus[5U];
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_valid)))) {
        vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[0U] = 0U;
        vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[1U] = 0U;
        vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] = 0U;
        vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[3U] = 0U;
        vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[4U] = 0x26000U;
        vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[5U] = 0U;
    }
    if (vlSelf->SimTop__DOT__EXE__DOT__es_valid) {
        vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r 
            = vlSelf->SimTop__DOT__es_alu_result;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_valid)))) {
        vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r = 0ULL;
    }
    if (((IData)(vlSelf->SimTop__DOT__IF__DOT__fs_valid) 
         & (IData)(vlSelf->SimTop__DOT__ds_allowin))) {
        if (vlSelf->SimTop__DOT__IF__DOT__fs_valid) {
            vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[0U] 
                = (IData)(((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                            ? 0ULL : vlSelf->SimTop__DOT__IF__DOT__fs_pc));
            vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[1U] 
                = (IData)((((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                             ? 0ULL : vlSelf->SimTop__DOT__IF__DOT__fs_pc) 
                           >> 0x20U));
            vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[2U] 
                = ((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                    ? 0x13U : vlSelf->SimTop__DOT__inst);
        } else {
            vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[0U] = 0U;
            vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[1U] = 0U;
            vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[2U] = 0x13U;
        }
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__IF__DOT__fs_valid)))) {
        vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[0U] = 0U;
        vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[1U] = 0U;
        vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[2U] = 0x13U;
    }
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0U] 
        = vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
        [0U];
    vlSelf->SimTop__DOT__MEM__DOT__ms_valid = ((~ (IData)(vlSelf->reset)) 
                                               & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_valid));
    vlSelf->ws_inst = ((vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[7U] 
                        << 0x18U) | (vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U] 
                                     >> 8U));
    vlSelf->pc_out = (((QData)((IData)(vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[0U])));
    vlSelf->SimTop__DOT__inst_valid = ((IData)(vlSelf->SimTop__DOT__fetched) 
                                       & (0ULL != vlSelf->pc_out));
    vlSelf->SimTop__DOT__ws_to_rf_bus[0U] = (IData)(
                                                    ((((- (QData)((IData)(
                                                                          (1U 
                                                                           == 
                                                                           (3U 
                                                                            & vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U]))))) 
                                                       & (4ULL 
                                                          + vlSelf->pc_out)) 
                                                      | ((- (QData)((IData)(
                                                                            (0U 
                                                                             == 
                                                                             (3U 
                                                                              & vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U]))))) 
                                                         & (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[2U]))))) 
                                                     | ((- (QData)((IData)(
                                                                           (2U 
                                                                            == 
                                                                            (3U 
                                                                             & vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U]))))) 
                                                        & (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[5U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[4U]))))));
    vlSelf->SimTop__DOT__ws_to_rf_bus[1U] = (IData)(
                                                    (((((- (QData)((IData)(
                                                                           (1U 
                                                                            == 
                                                                            (3U 
                                                                             & vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U]))))) 
                                                        & (4ULL 
                                                           + vlSelf->pc_out)) 
                                                       | ((- (QData)((IData)(
                                                                             (0U 
                                                                              == 
                                                                              (3U 
                                                                               & vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U]))))) 
                                                          & (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[2U]))))) 
                                                      | ((- (QData)((IData)(
                                                                            (2U 
                                                                             == 
                                                                             (3U 
                                                                              & vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U]))))) 
                                                         & (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[4U]))))) 
                                                     >> 0x20U));
    vlSelf->SimTop__DOT__ws_to_rf_bus[2U] = ((0x3fffffe0U 
                                              & ((vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U] 
                                                  >> 2U) 
                                                 & ((IData)(vlSelf->SimTop__DOT__WB__DOT__ws_valid) 
                                                    << 5U))) 
                                             | (0x1fU 
                                                & (vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U] 
                                                   >> 2U)));
    __Vtableidx1 = ((0x38U & ((IData)(vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r) 
                              << 3U)) | (7U & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                               >> 8U)));
    vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__wmask 
        = VSimTop__ConstPool__TABLE_8a885cad_0[__Vtableidx1];
    VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                   (1U 
                                                                    & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                                                       >> 0xbU)), 
                                                                   ((vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r 
                                                                     - 0x80000000ULL) 
                                                                    >> 3U), vlSelf->__Vfunc_ram_read_helper__2__Vfuncout);
    vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata_RAMHelper 
        = vlSelf->__Vfunc_ram_read_helper__2__Vfuncout;
    vlSelf->SimTop__DOT__inst = ((0ULL != vlSelf->SimTop__DOT__IF__DOT__nextpc)
                                  ? ((0ULL == (7ULL 
                                               & vlSelf->SimTop__DOT__IF__DOT__nextpc))
                                      ? (IData)(vlSelf->SimTop__DOT__inst_ram__DOT__inst_ext)
                                      : (IData)((vlSelf->SimTop__DOT__inst_ram__DOT__inst_ext 
                                                 >> 0x20U)))
                                  : 0x13U);
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__IF__DOT__fs_pc = 0x7ffffffcULL;
    } else if (((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->SimTop__DOT__IF__DOT__fs_allowin))) {
        vlSelf->SimTop__DOT__IF__DOT__fs_pc = vlSelf->SimTop__DOT__IF__DOT__nextpc;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__EXE__DOT__es_valid = 0U;
    } else if (vlSelf->SimTop__DOT__es_allowin) {
        vlSelf->SimTop__DOT__EXE__DOT__es_valid = vlSelf->SimTop__DOT__ID__DOT__ds_valid;
    }
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[1U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (1U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [1U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[2U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (2U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [2U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[3U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (3U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [3U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[4U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (4U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [4U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[5U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (5U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [5U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[6U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (6U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [6U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[7U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (7U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [7U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[8U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (8U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [8U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[9U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (9U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [9U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0xaU] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0xaU == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0xaU]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0xbU] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0xbU == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0xbU]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0xcU] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0xcU == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0xcU]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0xdU] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0xdU == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0xdU]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0xeU] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0xeU == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0xeU]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0xfU] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0xfU == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0xfU]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x10U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x10U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x10U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x11U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x11U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x11U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x12U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x12U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x12U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x13U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x13U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x13U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x14U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x14U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x14U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x15U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x15U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x15U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x16U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x16U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x16U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x17U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x17U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x17U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x18U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x18U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x18U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x19U] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x19U == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x19U]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x1aU] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x1aU == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x1aU]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x1bU] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x1bU == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x1bU]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x1cU] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x1cU == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x1cU]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x1dU] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x1dU == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x1dU]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x1eU] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x1eU == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x1eU]);
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0x1fU] 
        = (((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
             >> 5U) & (0x1fU == (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
            : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
           [0x1fU]);
    vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata 
        = ((0x3fU >= (0x38U & ((IData)(vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r) 
                               << 3U))) ? (vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata_RAMHelper 
                                           >> (0x38U 
                                               & ((IData)(vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r) 
                                                  << 3U)))
            : 0ULL);
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x1fU] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x1fU];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x1eU] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x1eU];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x1dU] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x1dU];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x1cU] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x1cU];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x1bU] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x1bU];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x1aU] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x1aU];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x19U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x19U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x18U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x18U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x17U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x17U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x16U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x16U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x15U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x15U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x14U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x14U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x13U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x13U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x12U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x12U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x11U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x11U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0x10U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0x10U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0xfU] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0xfU];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0xeU] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0xeU];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0xdU] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0xdU];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0xcU] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0xcU];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0xbU] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0xbU];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0xaU] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0xaU];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[9U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [9U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[8U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [8U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[7U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [7U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[6U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [6U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[5U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [5U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[4U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [4U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[3U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [3U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[2U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [2U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[1U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [1U];
    vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0U] 
        = vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o
        [0U];
    vlSelf->SimTop__DOT__MEM__DOT__ms_rdata = (((((
                                                   (((- (QData)((IData)(
                                                                        (0U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                                                             >> 8U)))))) 
                                                     & (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata 
                                                                                >> 7U)))))) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata)))))) 
                                                    | ((- (QData)((IData)(
                                                                          (1U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                                                               >> 8U)))))) 
                                                       & (((- (QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata 
                                                                                >> 0xfU)))))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            (0xffffU 
                                                                             & (IData)(vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata))))))) 
                                                   | ((- (QData)((IData)(
                                                                         (2U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                                                              >> 8U)))))) 
                                                      & (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata 
                                                                                >> 0x1fU))))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata))))) 
                                                  | ((- (QData)((IData)(
                                                                        (3U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                                                             >> 8U)))))) 
                                                     & vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata)) 
                                                 | ((- (QData)((IData)(
                                                                       (4U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                                                            >> 8U)))))) 
                                                    & (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata)))))) 
                                                | ((- (QData)((IData)(
                                                                      (5U 
                                                                       == 
                                                                       (7U 
                                                                        & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                                                           >> 8U)))))) 
                                                   & (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata)))))) 
                                               | ((- (QData)((IData)(
                                                                     (6U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                                                          >> 8U)))))) 
                                                  & (QData)((IData)(vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__ID__DOT__ds_valid = 0U;
    } else if (vlSelf->SimTop__DOT__ds_allowin) {
        vlSelf->SimTop__DOT__ID__DOT__ds_valid = vlSelf->SimTop__DOT__IF__DOT__fs_valid;
    }
    vlSelf->SimTop__DOT__regs_ds_o[0x1fU] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x1fU];
    vlSelf->SimTop__DOT__regs_ds_o[0x1eU] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x1eU];
    vlSelf->SimTop__DOT__regs_ds_o[0x1dU] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x1dU];
    vlSelf->SimTop__DOT__regs_ds_o[0x1cU] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x1cU];
    vlSelf->SimTop__DOT__regs_ds_o[0x1bU] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x1bU];
    vlSelf->SimTop__DOT__regs_ds_o[0x1aU] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x1aU];
    vlSelf->SimTop__DOT__regs_ds_o[0x19U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x19U];
    vlSelf->SimTop__DOT__regs_ds_o[0x18U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x18U];
    vlSelf->SimTop__DOT__regs_ds_o[0x17U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x17U];
    vlSelf->SimTop__DOT__regs_ds_o[0x16U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x16U];
    vlSelf->SimTop__DOT__regs_ds_o[0x15U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x15U];
    vlSelf->SimTop__DOT__regs_ds_o[0x14U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x14U];
    vlSelf->SimTop__DOT__regs_ds_o[0x13U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x13U];
    vlSelf->SimTop__DOT__regs_ds_o[0x12U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x12U];
    vlSelf->SimTop__DOT__regs_ds_o[0x11U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x11U];
    vlSelf->SimTop__DOT__regs_ds_o[0x10U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0x10U];
    vlSelf->SimTop__DOT__regs_ds_o[0xfU] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0xfU];
    vlSelf->SimTop__DOT__regs_ds_o[0xeU] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0xeU];
    vlSelf->SimTop__DOT__regs_ds_o[0xdU] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0xdU];
    vlSelf->SimTop__DOT__regs_ds_o[0xcU] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0xcU];
    vlSelf->SimTop__DOT__regs_ds_o[0xbU] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0xbU];
    vlSelf->SimTop__DOT__regs_ds_o[0xaU] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0xaU];
    vlSelf->SimTop__DOT__regs_ds_o[9U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [9U];
    vlSelf->SimTop__DOT__regs_ds_o[8U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [8U];
    vlSelf->SimTop__DOT__regs_ds_o[7U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [7U];
    vlSelf->SimTop__DOT__regs_ds_o[6U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [6U];
    vlSelf->SimTop__DOT__regs_ds_o[5U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [5U];
    vlSelf->SimTop__DOT__regs_ds_o[4U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [4U];
    vlSelf->SimTop__DOT__regs_ds_o[3U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [3U];
    vlSelf->SimTop__DOT__regs_ds_o[2U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [2U];
    vlSelf->SimTop__DOT__regs_ds_o[1U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [1U];
    vlSelf->SimTop__DOT__regs_ds_o[0U] = vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o
        [0U];
    vlSelf->SimTop__DOT__ms_to_ws_bus[0U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[0U]))));
    vlSelf->SimTop__DOT__ms_to_ws_bus[1U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[0U]))) 
                                                     >> 0x20U));
    vlSelf->SimTop__DOT__ms_to_ws_bus[2U] = (IData)(vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r);
    vlSelf->SimTop__DOT__ms_to_ws_bus[3U] = (IData)(
                                                    (vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r 
                                                     >> 0x20U));
    vlSelf->SimTop__DOT__ms_to_ws_bus[4U] = (IData)(vlSelf->SimTop__DOT__MEM__DOT__ms_rdata);
    vlSelf->SimTop__DOT__ms_to_ws_bus[5U] = (IData)(
                                                    (vlSelf->SimTop__DOT__MEM__DOT__ms_rdata 
                                                     >> 0x20U));
    vlSelf->SimTop__DOT__ms_to_ws_bus[6U] = ((0xffffff00U 
                                              & ((vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[5U] 
                                                  << 0x1bU) 
                                                 | (0x7ffff00U 
                                                    & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[4U] 
                                                       >> 5U)))) 
                                             | ((0x80U 
                                                 & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                                    << 2U)) 
                                                | ((0x7cU 
                                                    & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                                         >> 6U)))));
    vlSelf->SimTop__DOT__ms_to_ws_bus[7U] = (0xffU 
                                             & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[5U] 
                                                >> 5U));
    vlSelf->SimTop__DOT__ForwardB = 0U;
    if (((((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] >> 5U) 
           & (0U != (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]))) 
          & ((0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
             == (0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                          >> 0x19U)))) & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_valid))) {
        vlSelf->SimTop__DOT__ForwardB = 1U;
    }
    if (((((vlSelf->SimTop__DOT__ms_to_ws_bus[6U] >> 7U) 
           & (0U != (0x1fU & (vlSelf->SimTop__DOT__ms_to_ws_bus[6U] 
                              >> 2U)))) & ((0x1fU & 
                                            (vlSelf->SimTop__DOT__ms_to_ws_bus[6U] 
                                             >> 2U)) 
                                           == (0x1fU 
                                               & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                  >> 0x19U)))) 
         & (IData)(vlSelf->SimTop__DOT__MEM__DOT__ms_valid))) {
        vlSelf->SimTop__DOT__ForwardB = 2U;
    }
    vlSelf->SimTop__DOT__ForwardA = 0U;
    if (((((vlSelf->SimTop__DOT__ws_to_rf_bus[2U] >> 5U) 
           & (0U != (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]))) 
          & ((0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
             == (0x1fU & ((vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[9U] 
                           << 2U) | (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                     >> 0x1eU))))) 
         & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_valid))) {
        vlSelf->SimTop__DOT__ForwardA = 1U;
    }
    if (((((vlSelf->SimTop__DOT__ms_to_ws_bus[6U] >> 7U) 
           & (0U != (0x1fU & (vlSelf->SimTop__DOT__ms_to_ws_bus[6U] 
                              >> 2U)))) & ((0x1fU & 
                                            (vlSelf->SimTop__DOT__ms_to_ws_bus[6U] 
                                             >> 2U)) 
                                           == (0x1fU 
                                               & ((vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[9U] 
                                                   << 2U) 
                                                  | (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                     >> 0x1eU))))) 
         & (IData)(vlSelf->SimTop__DOT__MEM__DOT__ms_valid))) {
        vlSelf->SimTop__DOT__ForwardA = 2U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__IF__DOT__fs_valid = 0U;
    } else if (vlSelf->SimTop__DOT__IF__DOT__fs_allowin) {
        vlSelf->SimTop__DOT__IF__DOT__fs_valid = (1U 
                                                  & (~ (IData)(vlSelf->reset)));
    }
    vlSelf->SimTop__DOT__EXE__DOT__es_for_src2 = ((
                                                   ((- (QData)((IData)(
                                                                       (2U 
                                                                        == (IData)(vlSelf->SimTop__DOT__ForwardB))))) 
                                                    & (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__ms_to_ws_bus[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->SimTop__DOT__ms_to_ws_bus[2U])))) 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          == (IData)(vlSelf->SimTop__DOT__ForwardB))))) 
                                                      & (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->SimTop__DOT__ws_to_rf_bus[0U]))))) 
                                                  | ((- (QData)((IData)(
                                                                        (0U 
                                                                         == (IData)(vlSelf->SimTop__DOT__ForwardB))))) 
                                                     & (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[2U])))));
    vlSelf->SimTop__DOT__EXE__DOT__es_for_src1 = ((
                                                   ((- (QData)((IData)(
                                                                       (2U 
                                                                        == (IData)(vlSelf->SimTop__DOT__ForwardA))))) 
                                                    & (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__ms_to_ws_bus[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->SimTop__DOT__ms_to_ws_bus[2U])))) 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          == (IData)(vlSelf->SimTop__DOT__ForwardA))))) 
                                                      & (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->SimTop__DOT__ws_to_rf_bus[0U]))))) 
                                                  | ((- (QData)((IData)(
                                                                        (0U 
                                                                         == (IData)(vlSelf->SimTop__DOT__ForwardA))))) 
                                                     & (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[5U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[4U])))));
    vlSelf->SimTop__DOT__es_to_ms_bus[0U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[0U]))));
    vlSelf->SimTop__DOT__es_to_ms_bus[1U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[0U]))) 
                                                     >> 0x20U));
    vlSelf->SimTop__DOT__es_to_ms_bus[2U] = (((IData)(vlSelf->SimTop__DOT__EXE__DOT__es_for_src2) 
                                              << 0xdU) 
                                             | ((0x1000U 
                                                 & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                    >> 9U)) 
                                                | ((0x800U 
                                                    & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                       >> 9U)) 
                                                   | ((0x700U 
                                                       & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[6U] 
                                                          << 8U)) 
                                                      | ((0xc0U 
                                                          & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                             >> 2U)) 
                                                         | ((0x20U 
                                                             & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                                >> 5U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                                  >> 3U))))))));
    vlSelf->SimTop__DOT__es_to_ms_bus[3U] = (((IData)(vlSelf->SimTop__DOT__EXE__DOT__es_for_src2) 
                                              >> 0x13U) 
                                             | ((IData)(
                                                        (vlSelf->SimTop__DOT__EXE__DOT__es_for_src2 
                                                         >> 0x20U)) 
                                                << 0xdU));
    vlSelf->SimTop__DOT__es_to_ms_bus[4U] = (((IData)(
                                                      (vlSelf->SimTop__DOT__EXE__DOT__es_for_src2 
                                                       >> 0x20U)) 
                                              >> 0x13U) 
                                             | (0xffffe000U 
                                                & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[9U] 
                                                   << 0xaU)));
    vlSelf->SimTop__DOT__es_to_ms_bus[5U] = ((0x1c00U 
                                              & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[0xaU] 
                                                 << 0xaU)) 
                                             | (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[9U] 
                                                >> 0x16U));
    vlSelf->SimTop__DOT__EXE__DOT__es_alu_b = (((- (QData)((IData)(
                                                                   (0U 
                                                                    == 
                                                                    (3U 
                                                                     & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                                        >> 0xbU)))))) 
                                                & vlSelf->SimTop__DOT__EXE__DOT__es_for_src2) 
                                               | ((- (QData)((IData)(
                                                                     (1U 
                                                                      == 
                                                                      (3U 
                                                                       & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                                          >> 0xbU)))))) 
                                                  & (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U])) 
                                                      << 0x3dU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[7U])) 
                                                         << 0x1dU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[6U])) 
                                                           >> 3U)))));
    vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__equ = 
        (vlSelf->SimTop__DOT__EXE__DOT__es_for_src1 
         == vlSelf->SimTop__DOT__EXE__DOT__es_for_src2);
    vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__lt = VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__EXE__DOT__es_for_src1, vlSelf->SimTop__DOT__EXE__DOT__es_for_src2);
    vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__ltu = 
        (vlSelf->SimTop__DOT__EXE__DOT__es_for_src1 
         < vlSelf->SimTop__DOT__EXE__DOT__es_for_src2);
    vlSelf->SimTop__DOT__EXE__DOT__es_alu_a = (((- (QData)((IData)(
                                                                   (0U 
                                                                    == 
                                                                    (3U 
                                                                     & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                                        >> 0xdU)))))) 
                                                & vlSelf->SimTop__DOT__EXE__DOT__es_for_src1) 
                                               | ((- (QData)((IData)(
                                                                     (1U 
                                                                      == 
                                                                      (3U 
                                                                       & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                                          >> 0xdU)))))) 
                                                  & (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[0U])))));
    vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sub_result 
        = (vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
           - vlSelf->SimTop__DOT__EXE__DOT__es_alu_b);
    vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__div_result 
        = VL_DIVS_QQQ(64, vlSelf->SimTop__DOT__EXE__DOT__es_alu_a, vlSelf->SimTop__DOT__EXE__DOT__es_alu_b);
    vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__mul_result 
        = (vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
           * vlSelf->SimTop__DOT__EXE__DOT__es_alu_b);
    vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__rem_result 
        = VL_MODDIVS_QQQ(64, vlSelf->SimTop__DOT__EXE__DOT__es_alu_a, vlSelf->SimTop__DOT__EXE__DOT__es_alu_b);
    if ((0x80000U & vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U])) {
        vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sll_result 
            = (QData)((IData)(((IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_a) 
                               << (0x1fU & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))));
        vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__srl_result 
            = (QData)((IData)(((IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_a) 
                               >> (0x1fU & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))));
        vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sra_result 
            = (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_a), 
                                             (0x1fU 
                                              & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))));
    } else {
        vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sll_result 
            = (vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
               << (0x3fU & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)));
        vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__srl_result 
            = (vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
               >> (0x3fU & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)));
        vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sra_result 
            = VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__EXE__DOT__es_alu_a, 
                             (0x3fU & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)));
    }
    vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sel_result 
        = ((((((((((((((((((((((((- (QData)((IData)(
                                                    (0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                         >> 0xfU)))))) 
                                 | (- (QData)((IData)(
                                                      (0x10U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                           >> 0xfU))))))) 
                                & (vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                   + vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)) 
                               | ((- (QData)((IData)(
                                                     (2U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                          >> 0xfU)))))) 
                                  & vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sub_result)) 
                              | ((- (QData)((IData)(
                                                    (0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                         >> 0xfU)))))) 
                                 & vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sub_result)) 
                             | ((- (QData)((IData)(
                                                   (1U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                        >> 0xfU)))))) 
                                & (vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                   | vlSelf->SimTop__DOT__EXE__DOT__es_alu_b))) 
                            | ((- (QData)((IData)((7U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                       >> 0xfU)))))) 
                               & (vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                  & vlSelf->SimTop__DOT__EXE__DOT__es_alu_b))) 
                           | ((- (QData)((IData)((8U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                      >> 0xfU)))))) 
                              & (vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                 ^ vlSelf->SimTop__DOT__EXE__DOT__es_alu_b))) 
                          | ((- (QData)((IData)((0xdU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                     >> 0xfU)))))) 
                             & vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__div_result)) 
                         | ((- (QData)((IData)((0x13U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                    >> 0xfU)))))) 
                            & vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__div_result)) 
                        | ((- (QData)((IData)((0xeU 
                                               == (0x1fU 
                                                   & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                      >> 0xfU)))))) 
                           & VL_DIV_QQQ(64, vlSelf->SimTop__DOT__EXE__DOT__es_alu_a, vlSelf->SimTop__DOT__EXE__DOT__es_alu_b))) 
                       | ((- (QData)((IData)((0xaU 
                                              == (0x1fU 
                                                  & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                     >> 0xfU)))))) 
                          & vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__mul_result)) 
                      | ((- (QData)((IData)((0x12U 
                                             == (0x1fU 
                                                 & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                    >> 0xfU)))))) 
                         & vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__mul_result)) 
                     | ((- (QData)((IData)((0xbU == 
                                            (0x1fU 
                                             & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                >> 0xfU)))))) 
                        & vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__rem_result)) 
                    | ((- (QData)((IData)((0x14U == 
                                           (0x1fU & 
                                            (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                             >> 0xfU)))))) 
                       & vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__rem_result)) 
                   | ((- (QData)((IData)((0xcU == (0x1fU 
                                                   & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                      >> 0xfU)))))) 
                      & VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__EXE__DOT__es_alu_a, vlSelf->SimTop__DOT__EXE__DOT__es_alu_b))) 
                  | ((- (QData)((IData)((9U == (0x1fU 
                                                & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                   >> 0xfU)))))) 
                     & (QData)((IData)((vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                        < vlSelf->SimTop__DOT__EXE__DOT__es_alu_b))))) 
                 | ((- (QData)((IData)((3U == (0x1fU 
                                               & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                  >> 0xfU)))))) 
                    & (QData)((IData)(VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__EXE__DOT__es_alu_a, vlSelf->SimTop__DOT__EXE__DOT__es_alu_b))))) 
                | ((- (QData)((IData)((4U == (0x1fU 
                                              & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                 >> 0xfU)))))) 
                   & vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sra_result)) 
               | ((- (QData)((IData)((0x16U == (0x1fU 
                                                & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                   >> 0xfU)))))) 
                  & vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sra_result)) 
              | ((- (QData)((IData)((5U == (0x1fU & 
                                            (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                             >> 0xfU)))))) 
                 & vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__srl_result)) 
             | ((- (QData)((IData)((0x17U == (0x1fU 
                                              & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                 >> 0xfU)))))) 
                & vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__srl_result)) 
            | ((- (QData)((IData)((6U == (0x1fU & (
                                                   vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                   >> 0xfU)))))) 
               & vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sll_result)) 
           | ((- (QData)((IData)((0x11U == (0x1fU & 
                                            (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                             >> 0xfU)))))) 
              & vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sll_result));
    vlSelf->SimTop__DOT__es_alu_result = ((0x80000U 
                                           & vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U])
                                           ? (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sel_result 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sel_result)))
                                           : vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sel_result);
    __Vtemp25[2U] = ((((((((((0U == (0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                              >> 0xfU))) 
                             & (1U == (3U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                             >> 8U)))) 
                            | ((7U == (0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                >> 0xfU))) 
                               & (1U == (3U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                               >> 8U))))) 
                           | ((6U == (0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                               >> 0xfU))) 
                              & (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__equ))) 
                          | ((1U == (0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                              >> 0xfU))) 
                             & (~ (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__equ)))) 
                         | ((3U == (0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                             >> 0xfU))) 
                            & (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__lt))) 
                        | ((2U == (0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                            >> 0xfU))) 
                           & (~ (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__lt)))) 
                       | ((5U == (0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                           >> 0xfU))) 
                          & (~ (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__ltu)))) 
                      | ((4U == (0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                          >> 0xfU))) 
                         & (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__ltu))) 
                     & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                        >> 0x16U));
    vlSelf->SimTop__DOT__bru_to_fs_bus[0U] = (IData)(
                                                     ((((7U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                             >> 0xfU)))
                                                         ? vlSelf->SimTop__DOT__EXE__DOT__es_for_src1
                                                         : 
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[0U])))) 
                                                       + 
                                                       (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U])) 
                                                         << 0x3dU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[7U])) 
                                                            << 0x1dU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[6U])) 
                                                              >> 3U)))) 
                                                      & (~ 
                                                         ((7U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                               >> 0xfU)))
                                                           ? 1ULL
                                                           : 0ULL))));
    vlSelf->SimTop__DOT__bru_to_fs_bus[1U] = (IData)(
                                                     (((((7U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                              >> 0xfU)))
                                                          ? vlSelf->SimTop__DOT__EXE__DOT__es_for_src1
                                                          : 
                                                         (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[0U])))) 
                                                        + 
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U])) 
                                                          << 0x3dU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[7U])) 
                                                             << 0x1dU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[6U])) 
                                                               >> 3U)))) 
                                                       & (~ 
                                                          ((7U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                                >> 0xfU)))
                                                            ? 1ULL
                                                            : 0ULL))) 
                                                      >> 0x20U));
    vlSelf->SimTop__DOT__bru_to_fs_bus[2U] = (((IData)(vlSelf->SimTop__DOT__es_alu_result) 
                                               << 3U) 
                                              | ((6U 
                                                  & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                     >> 0x16U)) 
                                                 | __Vtemp25[2U]));
    vlSelf->SimTop__DOT__bru_to_fs_bus[3U] = (((IData)(vlSelf->SimTop__DOT__es_alu_result) 
                                               >> 0x1dU) 
                                              | ((IData)(
                                                         (vlSelf->SimTop__DOT__es_alu_result 
                                                          >> 0x20U)) 
                                                 << 3U));
    vlSelf->SimTop__DOT__bru_to_fs_bus[4U] = ((IData)(
                                                      (vlSelf->SimTop__DOT__es_alu_result 
                                                       >> 0x20U)) 
                                              >> 0x1dU);
    vlSelf->SimTop__DOT__ID__DOT__inst = ((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                                           ? 0x13U : 
                                          vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[2U]);
}

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__2(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ __Vdly__SimTop__DOT__trap;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__regs_diff__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__regs_diff__v1;
    QData/*63:0*/ __Vdly__SimTop__DOT__cycleCnt;
    QData/*63:0*/ __Vdly__SimTop__DOT__instrCnt;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v0;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v1;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v2;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v3;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v4;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v5;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v6;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v7;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v8;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v9;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v10;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v11;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v12;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v13;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v14;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v15;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v16;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v17;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v18;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v19;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v20;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v21;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v22;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v23;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v24;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v25;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v26;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v27;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v28;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v29;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v30;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v31;
    // Body
    __Vdly__SimTop__DOT__instrCnt = vlSelf->SimTop__DOT__instrCnt;
    __Vdly__SimTop__DOT__cycleCnt = vlSelf->SimTop__DOT__cycleCnt;
    __Vdly__SimTop__DOT__trap = vlSelf->SimTop__DOT__trap;
    __Vdlyvset__SimTop__DOT__regs_diff__v0 = 0U;
    __Vdlyvset__SimTop__DOT__regs_diff__v1 = 0U;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__cmt_wen = 0U;
        vlSelf->SimTop__DOT__cmt_wdest = 0U;
        vlSelf->SimTop__DOT__cmt_wdata = 0ULL;
        vlSelf->SimTop__DOT__cmt_pc = 0ULL;
        vlSelf->SimTop__DOT__cmt_inst = 0U;
        vlSelf->SimTop__DOT__cmt_valid = 0U;
        __Vdly__SimTop__DOT__trap = 0U;
        vlSelf->SimTop__DOT__trap_code = 0U;
        __Vdly__SimTop__DOT__cycleCnt = 0ULL;
        __Vdly__SimTop__DOT__instrCnt = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__trap)))) {
        __Vdly__SimTop__DOT__cycleCnt = (1ULL + vlSelf->SimTop__DOT__cycleCnt);
        __Vdly__SimTop__DOT__instrCnt = (vlSelf->SimTop__DOT__instrCnt 
                                         + (QData)((IData)(vlSelf->SimTop__DOT__inst_valid)));
        vlSelf->SimTop__DOT__cmt_wen = (1U & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                              >> 5U));
        vlSelf->SimTop__DOT__cmt_wdest = (0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]);
        vlSelf->SimTop__DOT__cmt_wdata = (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__ws_to_rf_bus[0U])));
        vlSelf->SimTop__DOT__cmt_pc = vlSelf->pc_out;
        vlSelf->SimTop__DOT__cmt_inst = vlSelf->ws_inst;
        vlSelf->SimTop__DOT__cmt_valid = vlSelf->SimTop__DOT__inst_valid;
        __Vdlyvval__SimTop__DOT__regs_diff__v0 = vlSelf->SimTop__DOT__regs_ds_o
            [0x1fU];
        __Vdlyvset__SimTop__DOT__regs_diff__v0 = 1U;
        __Vdly__SimTop__DOT__trap = (0x6bU == (0x7fU 
                                               & vlSelf->ws_inst));
        vlSelf->SimTop__DOT__trap_code = (0xffU & (IData)(
                                                          vlSelf->SimTop__DOT__regs_ds_o
                                                          [0xaU]));
        __Vdlyvval__SimTop__DOT__regs_diff__v1 = vlSelf->SimTop__DOT__regs_ds_o
            [0x1eU];
        __Vdlyvset__SimTop__DOT__regs_diff__v1 = 1U;
        __Vdlyvval__SimTop__DOT__regs_diff__v2 = vlSelf->SimTop__DOT__regs_ds_o
            [0x1dU];
        __Vdlyvval__SimTop__DOT__regs_diff__v3 = vlSelf->SimTop__DOT__regs_ds_o
            [0x1cU];
        __Vdlyvval__SimTop__DOT__regs_diff__v4 = vlSelf->SimTop__DOT__regs_ds_o
            [0x1bU];
        __Vdlyvval__SimTop__DOT__regs_diff__v5 = vlSelf->SimTop__DOT__regs_ds_o
            [0x1aU];
        __Vdlyvval__SimTop__DOT__regs_diff__v6 = vlSelf->SimTop__DOT__regs_ds_o
            [0x19U];
        __Vdlyvval__SimTop__DOT__regs_diff__v7 = vlSelf->SimTop__DOT__regs_ds_o
            [0x18U];
        __Vdlyvval__SimTop__DOT__regs_diff__v8 = vlSelf->SimTop__DOT__regs_ds_o
            [0x17U];
        __Vdlyvval__SimTop__DOT__regs_diff__v9 = vlSelf->SimTop__DOT__regs_ds_o
            [0x16U];
        __Vdlyvval__SimTop__DOT__regs_diff__v10 = vlSelf->SimTop__DOT__regs_ds_o
            [0x15U];
        __Vdlyvval__SimTop__DOT__regs_diff__v11 = vlSelf->SimTop__DOT__regs_ds_o
            [0x14U];
        __Vdlyvval__SimTop__DOT__regs_diff__v12 = vlSelf->SimTop__DOT__regs_ds_o
            [0x13U];
        __Vdlyvval__SimTop__DOT__regs_diff__v13 = vlSelf->SimTop__DOT__regs_ds_o
            [0x12U];
        __Vdlyvval__SimTop__DOT__regs_diff__v14 = vlSelf->SimTop__DOT__regs_ds_o
            [0x11U];
        __Vdlyvval__SimTop__DOT__regs_diff__v15 = vlSelf->SimTop__DOT__regs_ds_o
            [0x10U];
        __Vdlyvval__SimTop__DOT__regs_diff__v16 = vlSelf->SimTop__DOT__regs_ds_o
            [0xfU];
        __Vdlyvval__SimTop__DOT__regs_diff__v17 = vlSelf->SimTop__DOT__regs_ds_o
            [0xeU];
        __Vdlyvval__SimTop__DOT__regs_diff__v18 = vlSelf->SimTop__DOT__regs_ds_o
            [0xdU];
        __Vdlyvval__SimTop__DOT__regs_diff__v19 = vlSelf->SimTop__DOT__regs_ds_o
            [0xcU];
        __Vdlyvval__SimTop__DOT__regs_diff__v20 = vlSelf->SimTop__DOT__regs_ds_o
            [0xbU];
        __Vdlyvval__SimTop__DOT__regs_diff__v21 = vlSelf->SimTop__DOT__regs_ds_o
            [0xaU];
        __Vdlyvval__SimTop__DOT__regs_diff__v22 = vlSelf->SimTop__DOT__regs_ds_o
            [9U];
        __Vdlyvval__SimTop__DOT__regs_diff__v23 = vlSelf->SimTop__DOT__regs_ds_o
            [8U];
        __Vdlyvval__SimTop__DOT__regs_diff__v24 = vlSelf->SimTop__DOT__regs_ds_o
            [7U];
        __Vdlyvval__SimTop__DOT__regs_diff__v25 = vlSelf->SimTop__DOT__regs_ds_o
            [6U];
        __Vdlyvval__SimTop__DOT__regs_diff__v26 = vlSelf->SimTop__DOT__regs_ds_o
            [5U];
        __Vdlyvval__SimTop__DOT__regs_diff__v27 = vlSelf->SimTop__DOT__regs_ds_o
            [4U];
        __Vdlyvval__SimTop__DOT__regs_diff__v28 = vlSelf->SimTop__DOT__regs_ds_o
            [3U];
        __Vdlyvval__SimTop__DOT__regs_diff__v29 = vlSelf->SimTop__DOT__regs_ds_o
            [2U];
        __Vdlyvval__SimTop__DOT__regs_diff__v30 = vlSelf->SimTop__DOT__regs_ds_o
            [1U];
        __Vdlyvval__SimTop__DOT__regs_diff__v31 = vlSelf->SimTop__DOT__regs_ds_o
            [0U];
    }
    vlSelf->SimTop__DOT__trap = __Vdly__SimTop__DOT__trap;
    vlSelf->SimTop__DOT__cycleCnt = __Vdly__SimTop__DOT__cycleCnt;
    vlSelf->SimTop__DOT__instrCnt = __Vdly__SimTop__DOT__instrCnt;
    if (__Vdlyvset__SimTop__DOT__regs_diff__v0) {
        vlSelf->SimTop__DOT__regs_diff[0x1fU] = __Vdlyvval__SimTop__DOT__regs_diff__v0;
    }
    if (__Vdlyvset__SimTop__DOT__regs_diff__v1) {
        vlSelf->SimTop__DOT__regs_diff[0x1eU] = __Vdlyvval__SimTop__DOT__regs_diff__v1;
        vlSelf->SimTop__DOT__regs_diff[0x1dU] = __Vdlyvval__SimTop__DOT__regs_diff__v2;
        vlSelf->SimTop__DOT__regs_diff[0x1cU] = __Vdlyvval__SimTop__DOT__regs_diff__v3;
        vlSelf->SimTop__DOT__regs_diff[0x1bU] = __Vdlyvval__SimTop__DOT__regs_diff__v4;
        vlSelf->SimTop__DOT__regs_diff[0x1aU] = __Vdlyvval__SimTop__DOT__regs_diff__v5;
        vlSelf->SimTop__DOT__regs_diff[0x19U] = __Vdlyvval__SimTop__DOT__regs_diff__v6;
        vlSelf->SimTop__DOT__regs_diff[0x18U] = __Vdlyvval__SimTop__DOT__regs_diff__v7;
        vlSelf->SimTop__DOT__regs_diff[0x17U] = __Vdlyvval__SimTop__DOT__regs_diff__v8;
        vlSelf->SimTop__DOT__regs_diff[0x16U] = __Vdlyvval__SimTop__DOT__regs_diff__v9;
        vlSelf->SimTop__DOT__regs_diff[0x15U] = __Vdlyvval__SimTop__DOT__regs_diff__v10;
        vlSelf->SimTop__DOT__regs_diff[0x14U] = __Vdlyvval__SimTop__DOT__regs_diff__v11;
        vlSelf->SimTop__DOT__regs_diff[0x13U] = __Vdlyvval__SimTop__DOT__regs_diff__v12;
        vlSelf->SimTop__DOT__regs_diff[0x12U] = __Vdlyvval__SimTop__DOT__regs_diff__v13;
        vlSelf->SimTop__DOT__regs_diff[0x11U] = __Vdlyvval__SimTop__DOT__regs_diff__v14;
        vlSelf->SimTop__DOT__regs_diff[0x10U] = __Vdlyvval__SimTop__DOT__regs_diff__v15;
        vlSelf->SimTop__DOT__regs_diff[0xfU] = __Vdlyvval__SimTop__DOT__regs_diff__v16;
        vlSelf->SimTop__DOT__regs_diff[0xeU] = __Vdlyvval__SimTop__DOT__regs_diff__v17;
        vlSelf->SimTop__DOT__regs_diff[0xdU] = __Vdlyvval__SimTop__DOT__regs_diff__v18;
        vlSelf->SimTop__DOT__regs_diff[0xcU] = __Vdlyvval__SimTop__DOT__regs_diff__v19;
        vlSelf->SimTop__DOT__regs_diff[0xbU] = __Vdlyvval__SimTop__DOT__regs_diff__v20;
        vlSelf->SimTop__DOT__regs_diff[0xaU] = __Vdlyvval__SimTop__DOT__regs_diff__v21;
        vlSelf->SimTop__DOT__regs_diff[9U] = __Vdlyvval__SimTop__DOT__regs_diff__v22;
        vlSelf->SimTop__DOT__regs_diff[8U] = __Vdlyvval__SimTop__DOT__regs_diff__v23;
        vlSelf->SimTop__DOT__regs_diff[7U] = __Vdlyvval__SimTop__DOT__regs_diff__v24;
        vlSelf->SimTop__DOT__regs_diff[6U] = __Vdlyvval__SimTop__DOT__regs_diff__v25;
        vlSelf->SimTop__DOT__regs_diff[5U] = __Vdlyvval__SimTop__DOT__regs_diff__v26;
        vlSelf->SimTop__DOT__regs_diff[4U] = __Vdlyvval__SimTop__DOT__regs_diff__v27;
        vlSelf->SimTop__DOT__regs_diff[3U] = __Vdlyvval__SimTop__DOT__regs_diff__v28;
        vlSelf->SimTop__DOT__regs_diff[2U] = __Vdlyvval__SimTop__DOT__regs_diff__v29;
        vlSelf->SimTop__DOT__regs_diff[1U] = __Vdlyvval__SimTop__DOT__regs_diff__v30;
        vlSelf->SimTop__DOT__regs_diff[0U] = __Vdlyvval__SimTop__DOT__regs_diff__v31;
    }
}

VL_INLINE_OPT void VSimTop___024root___combo__TOP__5(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___combo__TOP__5\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (vlSelf->SimTop__DOT__es_to_ms_bus[2U] 
                                                    >> 0xbU) 
                                                   & (((0x1fU 
                                                        & vlSelf->SimTop__DOT__es_to_ms_bus[2U]) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                           >> 0xfU))) 
                                                      | ((0x1fU 
                                                          & vlSelf->SimTop__DOT__es_to_ms_bus[2U]) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                             >> 0x14U)))))))) {
        vlSelf->SimTop__DOT__ID__DOT__con_signal = 0U;
        VL_WRITEF("hazard!\n");
    } else {
        vlSelf->SimTop__DOT__ID__DOT__con_signal = 
            (((((((((0x17U == (0x7fU & vlSelf->SimTop__DOT__ID__DOT__inst)) 
                    | (0x37U == (0x7fU & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                   | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                  | (0x67U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                 | (0x1023U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                | (0x3023U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst))) 
               | (0x2023U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst))) 
              | (0x23U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst)))
              ? ((0x17U == (0x7fU & vlSelf->SimTop__DOT__ID__DOT__inst))
                  ? 0x20580U : ((0x37U == (0x7fU & vlSelf->SimTop__DOT__ID__DOT__inst))
                                 ? 0x20980U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                ? 0x405a9U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                    ? 0x1a9U
                                                    : 0x60106U))))
              : (((((((((3U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst)) 
                        | (0x3003U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                       | (0x2003U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                      | (0x1003U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                     | (0x6003U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                    | (0x5003U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                   | (0x4003U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                  | (0x7033U == (0xfe00707fU & vlSelf->SimTop__DOT__ID__DOT__inst)))
                  ? ((3U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst))
                      ? 0x192U : ((0x3003U == (0x707fU 
                                               & vlSelf->SimTop__DOT__ID__DOT__inst))
                                   ? 0x192U : ((0x2003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                ? 0x192U
                                                : (
                                                   (0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                    ? 0x192U
                                                    : 
                                                   ((0x6003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                     ? 0x192U
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                      ? 0x192U
                                                      : 
                                                     ((0x4003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                       ? 0x192U
                                                       : 0x7080U)))))))
                  : (((((((((0x7013U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst)) 
                            | (0x33U == (0xfe00707fU 
                                         & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                           | (0x6033U == (0xfe00707fU 
                                          & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                          | (0x6013U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                         | (0x4033U == (0xfe00707fU 
                                        & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                        | (0x4013U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                       | (0x2000033U == (0xfe00707fU 
                                         & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                      | (0x200003bU == (0xfe00707fU 
                                        & vlSelf->SimTop__DOT__ID__DOT__inst)))
                      ? ((0x7013U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst))
                          ? 0x7180U : ((0x33U == (0xfe00707fU 
                                                  & vlSelf->SimTop__DOT__ID__DOT__inst))
                                        ? 0x80U : (
                                                   (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                    ? 0x1080U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                     ? 0x1180U
                                                     : 
                                                    ((0x4033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                      ? 0x8080U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                       ? 0x8180U
                                                       : 
                                                      ((0x2000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                        ? 0xa080U
                                                        : 0x12080U)))))))
                      : (((((((((0x2004033U == (0xfe00707fU 
                                                & vlSelf->SimTop__DOT__ID__DOT__inst)) 
                                | (0x2005033U == (0xfe00707fU 
                                                  & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                               | (0x200403bU == (0xfe00707fU 
                                                 & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                              | (0x2006033U == (0xfe00707fU 
                                                & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                             | (0x2007033U == (0xfe00707fU 
                                               & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                            | (0x200603bU == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                           | (0x13U == (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                          | (0x3bU == (0xfe00707fU 
                                       & vlSelf->SimTop__DOT__ID__DOT__inst)))
                          ? ((0x2004033U == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__ID__DOT__inst))
                              ? 0xd080U : ((0x2005033U 
                                            == (0xfe00707fU 
                                                & vlSelf->SimTop__DOT__ID__DOT__inst))
                                            ? 0xe080U
                                            : ((0x200403bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                ? 0x13080U
                                                : (
                                                   (0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                    ? 0xb080U
                                                    : 
                                                   ((0x2007033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                     ? 0xc080U
                                                     : 
                                                    ((0x200603bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                      ? 0x14080U
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                       ? 0x180U
                                                       : 0x10080U)))))))
                          : (((((((((0x1bU == (0x707fU 
                                               & vlSelf->SimTop__DOT__ID__DOT__inst)) 
                                    | (0x40000033U 
                                       == (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                   | (0x4000003bU == 
                                      (0xfe00707fU 
                                       & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                 | (0x3013U == (0x707fU 
                                                & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                | (0x2033U == (0xfe00707fU 
                                               & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                               | (0x3033U == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                              | (0x40005033U == (0xfe00707fU 
                                                 & vlSelf->SimTop__DOT__ID__DOT__inst)))
                              ? ((0x1bU == (0x707fU 
                                            & vlSelf->SimTop__DOT__ID__DOT__inst))
                                  ? 0x10180U : ((0x40000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                 ? 0x2080U
                                                 : 
                                                ((0x4000003bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                  ? 0x15080U
                                                  : 
                                                 ((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                   ? 0x3180U
                                                   : 
                                                  ((0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                    ? 0x9180U
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                     ? 0x3080U
                                                     : 
                                                    ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                      ? 0x9080U
                                                      : 0x4080U)))))))
                              : (((((((((0x40005013U 
                                         == (0xfc00707fU 
                                             & vlSelf->SimTop__DOT__ID__DOT__inst)) 
                                        | (0x4000503bU 
                                           == (0xfe00707fU 
                                               & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                       | (0x4000501bU 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                      | (0x101bU == 
                                         (0xfe00707fU 
                                          & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                     | (0x103bU == 
                                        (0xfe00707fU 
                                         & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                    | (0x1033U == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                   | (0x1013U == (0xfc00707fU 
                                                  & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                  | (0x5033U == (0xfe00707fU 
                                                 & vlSelf->SimTop__DOT__ID__DOT__inst)))
                                  ? ((0x40005013U == 
                                      (0xfc00707fU 
                                       & vlSelf->SimTop__DOT__ID__DOT__inst))
                                      ? 0x4180U : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                    ? 0x16080U
                                                    : 
                                                   ((0x4000501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                     ? 0x16180U
                                                     : 
                                                    ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                      ? 0x11180U
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                       ? 0x11080U
                                                       : 
                                                      ((0x1033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                        ? 0x6080U
                                                        : 
                                                       ((0x1013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                         ? 0x6180U
                                                         : 0x5080U)))))))
                                  : (((((((((0x5013U 
                                             == (0xfc00707fU 
                                                 & vlSelf->SimTop__DOT__ID__DOT__inst)) 
                                            | (0x503bU 
                                               == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                           | (0x501bU 
                                              == (0xfe00707fU 
                                                  & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                          | (0x1063U 
                                             == (0x707fU 
                                                 & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                         | (0x63U == 
                                            (0x707fU 
                                             & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                        | (0x5063U 
                                           == (0x707fU 
                                               & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                       | (0x4063U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__ID__DOT__inst))) 
                                      | (0x6063U == 
                                         (0x707fU & vlSelf->SimTop__DOT__ID__DOT__inst)))
                                      ? ((0x5013U == 
                                          (0xfc00707fU 
                                           & vlSelf->SimTop__DOT__ID__DOT__inst))
                                          ? 0x5180U
                                          : ((0x503bU 
                                              == (0xfe00707fU 
                                                  & vlSelf->SimTop__DOT__ID__DOT__inst))
                                              ? 0x17080U
                                              : ((0x501bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                  ? 0x17180U
                                                  : 
                                                 ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                   ? 0x81041U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                    ? 0x86041U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                     ? 0x82041U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->SimTop__DOT__ID__DOT__inst))
                                                      ? 0x83041U
                                                      : 0x84041U)))))))
                                      : ((0x7063U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__ID__DOT__inst))
                                          ? 0x85041U
                                          : ((0x100073U 
                                              == vlSelf->SimTop__DOT__ID__DOT__inst)
                                              ? 0U : 
                                             ((0x13U 
                                               == vlSelf->SimTop__DOT__ID__DOT__inst)
                                               ? 0xa00U
                                               : 0U))))))))));
    }
    vlSelf->SimTop__DOT__IF_ID_write = ((~ (IData)(vlSelf->reset)) 
                                        & ((vlSelf->SimTop__DOT__es_to_ms_bus[2U] 
                                            >> 0xbU) 
                                           & (((0x1fU 
                                                & vlSelf->SimTop__DOT__es_to_ms_bus[2U]) 
                                               == (0x1fU 
                                                   & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                      >> 0xfU))) 
                                              | ((0x1fU 
                                                  & vlSelf->SimTop__DOT__es_to_ms_bus[2U]) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                     >> 0x14U))))));
    vlSelf->SimTop__DOT__ID__DOT__imme_o = ((((((- (QData)((IData)(
                                                                   (0U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                                        >> 0x11U)))))) 
                                                & (((- (QData)((IData)(
                                                                       (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                      >> 0x14U))))) 
                                               | ((- (QData)((IData)(
                                                                     (1U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                                          >> 0x11U)))))) 
                                                  & (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                                >> 0x1fU))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (0xfffff000U 
                                                                        & vlSelf->SimTop__DOT__ID__DOT__inst)))))) 
                                              | ((- (QData)((IData)(
                                                                    (2U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                                         >> 0x11U)))))) 
                                                 & (((- (QData)((IData)(
                                                                        (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                         >> 0x1fU)))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      ((0xff000U 
                                                                        & vlSelf->SimTop__DOT__ID__DOT__inst) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                              >> 9U)) 
                                                                          | (0x7feU 
                                                                             & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                                >> 0x14U))))))))) 
                                             | ((- (QData)((IData)(
                                                                   (3U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                                        >> 0x11U)))))) 
                                                & (((- (QData)((IData)(
                                                                       (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                            >> 7U)))))))) 
                                            | ((- (QData)((IData)(
                                                                  (4U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                                       >> 0x11U)))))) 
                                               & (((- (QData)((IData)(
                                                                      (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                              >> 7U)))))))));
    vlSelf->SimTop__DOT__ds_allowin = (1U & (((~ (IData)(vlSelf->SimTop__DOT__ID__DOT__ds_valid)) 
                                              | (IData)(vlSelf->SimTop__DOT__es_allowin)) 
                                             & (~ (IData)(vlSelf->SimTop__DOT__IF_ID_write))));
    vlSelf->SimTop__DOT__IF__DOT__fs_allowin = (1U 
                                                & (((~ (IData)(vlSelf->SimTop__DOT__IF__DOT__fs_valid)) 
                                                    | (IData)(vlSelf->SimTop__DOT__ds_allowin)) 
                                                   & (~ 
                                                      ((~ (IData)(vlSelf->reset)) 
                                                       & ((vlSelf->SimTop__DOT__es_to_ms_bus[2U] 
                                                           >> 0xbU) 
                                                          & (((0x1fU 
                                                               & vlSelf->SimTop__DOT__es_to_ms_bus[2U]) 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                  >> 0xfU))) 
                                                             | ((0x1fU 
                                                                 & vlSelf->SimTop__DOT__es_to_ms_bus[2U]) 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                    >> 0x14U)))))))));
    vlSelf->SimTop__DOT__IF__DOT__nextpc = ((IData)(vlSelf->SimTop__DOT__IF__DOT__fs_allowin)
                                             ? ((((- (QData)((IData)(
                                                                     (0U 
                                                                      == 
                                                                      (3U 
                                                                       & (vlSelf->SimTop__DOT__bru_to_fs_bus[2U] 
                                                                          >> 1U)))))) 
                                                  & (4ULL 
                                                     + vlSelf->SimTop__DOT__IF__DOT__fs_pc)) 
                                                 | ((- (QData)((IData)(
                                                                       (1U 
                                                                        == 
                                                                        (3U 
                                                                         & (vlSelf->SimTop__DOT__bru_to_fs_bus[2U] 
                                                                            >> 1U)))))) 
                                                    & (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__bru_to_fs_bus[4U])) 
                                                        << 0x3dU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__bru_to_fs_bus[3U])) 
                                                           << 0x1dU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__bru_to_fs_bus[2U])) 
                                                             >> 3U))))) 
                                                | ((- (QData)((IData)(
                                                                      (2U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSelf->SimTop__DOT__bru_to_fs_bus[2U] 
                                                                           >> 1U)))))) 
                                                   & ((1U 
                                                       & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__bru_to_fs_bus[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->SimTop__DOT__bru_to_fs_bus[0U])))
                                                       : 
                                                      (4ULL 
                                                       + vlSelf->SimTop__DOT__IF__DOT__fs_pc))))
                                             : vlSelf->SimTop__DOT__IF__DOT__fs_pc);
    VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(1U, 
                                                                   ((vlSelf->SimTop__DOT__IF__DOT__nextpc 
                                                                     - 0x80000000ULL) 
                                                                    >> 3U), vlSelf->__Vfunc_ram_read_helper__0__Vfuncout);
    vlSelf->SimTop__DOT__inst_ram__DOT__inst_ext = vlSelf->__Vfunc_ram_read_helper__0__Vfuncout;
}

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlSelf->clock)) & (IData)(vlSelf->__Vclklast__TOP__clock))) {
        VSimTop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VSimTop___024root___combo__TOP__5(vlSelf);
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
}
#endif  // VL_DEBUG
