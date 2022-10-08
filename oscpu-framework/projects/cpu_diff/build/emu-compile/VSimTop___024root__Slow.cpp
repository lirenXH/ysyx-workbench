// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024root.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========


void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf);

VSimTop___024root::VSimTop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSimTop___024root___ctor_var_reset(this);
}

void VSimTop___024root::__Vconfigure(VSimTop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSimTop___024root::~VSimTop___024root() {
}

void VSimTop___024root___initial__TOP__3(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___initial__TOP__3\n"); );
    // Body
    vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__wmask = 0ULL;
}

extern const VlUnpacked<QData/*63:0*/, 64> VSimTop__ConstPool__TABLE_8a885cad_0;
void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);

void VSimTop___024root___settle__TOP__4(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__4\n"); );
    // Variables
    CData/*5:0*/ __Vtableidx1;
    VlWide<3>/*95:0*/ __Vtemp44;
    // Body
    vlSelf->ws_inst = ((vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[7U] 
                        << 0x18U) | (vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U] 
                                     >> 8U));
    vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0U] 
        = vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
        [0U];
    vlSelf->pc_out = (((QData)((IData)(vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[0U])));
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
    vlSelf->SimTop__DOT__es_allowin = 1U;
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
    vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata 
        = ((0x3fU >= (0x38U & ((IData)(vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r) 
                               << 3U))) ? (vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata_RAMHelper 
                                           >> (0x38U 
                                               & ((IData)(vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r) 
                                                  << 3U)))
            : 0ULL);
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
    __Vtemp44[2U] = ((((((((((0U == (0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
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
                                                 | __Vtemp44[2U]));
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
}

void VSimTop___024root___settle__TOP__6(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__6\n"); );
    // Body
    vlSelf->SimTop__DOT__ds_allowin = (1U & (~ (IData)(vlSelf->SimTop__DOT__IF_ID_write)));
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

void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    VSimTop___024root___initial__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_settle\n"); );
    // Body
    VSimTop___024root___settle__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VSimTop___024root___settle__TOP__6(vlSelf);
}

void VSimTop___024root___final(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___final\n"); );
}

void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_logCtrl_log_begin = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_end = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_level = VL_RAND_RESET_Q(64);
    vlSelf->io_perfInfo_clean = VL_RAND_RESET_I(1);
    vlSelf->io_perfInfo_dump = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_ch = VL_RAND_RESET_I(8);
    vlSelf->io_uart_in_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_in_ch = VL_RAND_RESET_I(8);
    vlSelf->ws_inst = VL_RAND_RESET_I(32);
    vlSelf->pc_out = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__regs_ds_o[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__fetched = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__ds_allowin = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__es_allowin = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131, vlSelf->SimTop__DOT__bru_to_fs_bus);
    VL_RAND_RESET_W(70, vlSelf->SimTop__DOT__ws_to_rf_bus);
    VL_RAND_RESET_W(173, vlSelf->SimTop__DOT__es_to_ms_bus);
    VL_RAND_RESET_W(232, vlSelf->SimTop__DOT__ms_to_ws_bus);
    vlSelf->SimTop__DOT__es_alu_result = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__ForwardA = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__ForwardB = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__IF_ID_write = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__cmt_wen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__cmt_wdest = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__cmt_wdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__cmt_pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__cmt_inst = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__cmt_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__trap_code = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__cycleCnt = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__instrCnt = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__regs_diff[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__inst_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__IF__DOT__fs_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__IF__DOT__fs_allowin = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__IF__DOT__nextpc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__IF__DOT__fs_pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__inst_ram__DOT__inst_ext = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ID__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__ID__DOT__imme_o = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ID__DOT__ds_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r);
    vlSelf->SimTop__DOT__ID__DOT__con_signal = VL_RAND_RESET_I(20);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__EXE__DOT__es_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(323, vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r);
    vlSelf->SimTop__DOT__EXE__DOT__es_alu_a = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__EXE__DOT__es_alu_b = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__EXE__DOT__es_for_src1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__EXE__DOT__es_for_src2 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sel_result = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sub_result = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__div_result = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__mul_result = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__rem_result = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sll_result = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__srl_result = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sra_result = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__equ = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__lt = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__ltu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__MEM__DOT__ms_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(173, vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r);
    vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__MEM__DOT__ms_rdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata_RAMHelper = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__wmask = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__WB__DOT__ws_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(232, vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r);
    vlSelf->__Vfunc_ram_read_helper__0__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__2__Vfuncout = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
