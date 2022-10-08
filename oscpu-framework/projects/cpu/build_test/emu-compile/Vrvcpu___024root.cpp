// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvcpu.h for the primary calling header

#include "Vrvcpu___024root.h"
#include "Vrvcpu__Syms.h"

//==========

VL_INLINE_OPT void Vrvcpu___024root___combo__TOP__2(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->inst_ena = ((IData)(vlSelf->rst) ? 0U : 1U);
    vlSelf->rvcpu__DOT__Id_stage__DOT__inst_addi = (IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x707cU 
                                                             & vlSelf->inst)));
    vlSelf->rvcpu__DOT__inst_opcode = ((0xfeU & (IData)(vlSelf->rvcpu__DOT__inst_opcode)) 
                                       | ((IData)(vlSelf->rst)
                                           ? 0U : (1U 
                                                   & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__inst_addi))));
    vlSelf->rvcpu__DOT__inst_opcode = ((0xefU & (IData)(vlSelf->rvcpu__DOT__inst_opcode)) 
                                       | (((IData)(vlSelf->rst)
                                            ? 0U : 
                                           (1U & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__inst_addi))) 
                                          << 4U));
}

VL_INLINE_OPT void Vrvcpu___024root___sequent__TOP__3(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__rvcpu__DOT__Regfile__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v32;
    QData/*63:0*/ __Vdlyvval__rvcpu__DOT__Regfile__DOT__regs__v32;
    // Body
    __Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v32 = 0U;
    vlSelf->rvcpu__DOT__If_stage__DOT__pc = ((IData)(vlSelf->rst)
                                              ? 0ULL
                                              : (4ULL 
                                                 + vlSelf->rvcpu__DOT__If_stage__DOT__pc));
    if (vlSelf->rst) {
        __Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v0 = 1U;
    } else if ((((IData)(vlSelf->rst) ? 0U : (1U & 
                                              ((IData)(vlSelf->rvcpu__DOT__inst_type) 
                                               >> 4U))) 
                & (0U != (IData)(vlSelf->rvcpu__DOT__rd_w_addr)))) {
        __Vdlyvval__rvcpu__DOT__Regfile__DOT__regs__v32 
            = vlSelf->rvcpu__DOT__rd_data;
        __Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v32 = 1U;
        __Vdlyvdim0__rvcpu__DOT__Regfile__DOT__regs__v32 
            = vlSelf->rvcpu__DOT__rd_w_addr;
    }
    if (__Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v0) {
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[1U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[2U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[3U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[4U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[5U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[6U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[7U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[8U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[9U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0xaU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0xbU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0xcU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0xdU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0xeU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0xfU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x10U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x11U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x12U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x13U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x14U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x15U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x16U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x17U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x18U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x19U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x1aU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x1bU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x1cU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x1dU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x1eU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v32) {
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[__Vdlyvdim0__rvcpu__DOT__Regfile__DOT__regs__v32] 
            = __Vdlyvval__rvcpu__DOT__Regfile__DOT__regs__v32;
    }
    vlSelf->inst_addr = vlSelf->rvcpu__DOT__If_stage__DOT__pc;
}

VL_INLINE_OPT void Vrvcpu___024root___combo__TOP__4(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->rvcpu__DOT__inst_type = ((0xfU & (IData)(vlSelf->rvcpu__DOT__inst_type)) 
                                     | (((IData)(vlSelf->rst)
                                          ? 0U : (1U 
                                                  & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__inst_addi))) 
                                        << 4U));
    if (vlSelf->rst) {
        vlSelf->rvcpu__DOT__rd_w_addr = 0U;
        vlSelf->rvcpu__DOT__rd_data = 0ULL;
    } else {
        vlSelf->rvcpu__DOT__rd_w_addr = ((0x10U & (IData)(vlSelf->rvcpu__DOT__inst_type))
                                          ? (0x1fU 
                                             & (vlSelf->inst 
                                                >> 7U))
                                          : 0U);
        vlSelf->rvcpu__DOT__rd_data = ((0x11U == (IData)(vlSelf->rvcpu__DOT__inst_opcode))
                                        ? (((IData)(vlSelf->rst)
                                             ? 0ULL
                                             : ((0x10U 
                                                 & (IData)(vlSelf->rvcpu__DOT__inst_type))
                                                 ? 
                                                ((IData)(vlSelf->rst)
                                                  ? 0ULL
                                                  : 
                                                 (((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : 
                                                   (1U 
                                                    & ((IData)(vlSelf->rvcpu__DOT__inst_type) 
                                                       >> 4U)))
                                                   ? 
                                                  vlSelf->rvcpu__DOT__Regfile__DOT__regs
                                                  [
                                                  ((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__inst_type))
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSelf->inst 
                                                        >> 0xfU))
                                                     : 0U))]
                                                   : 0ULL))
                                                 : 0ULL)) 
                                           + ((IData)(vlSelf->rst)
                                               ? 0ULL
                                               : ((0x10U 
                                                   & (IData)(vlSelf->rvcpu__DOT__inst_type))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                                   : 0ULL)))
                                        : 0ULL);
    }
}

void Vrvcpu___024root___eval(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___eval\n"); );
    // Body
    Vrvcpu___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vrvcpu___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vrvcpu___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vrvcpu___024root___change_request_1(Vrvcpu___024root* vlSelf);

VL_INLINE_OPT QData Vrvcpu___024root___change_request(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___change_request\n"); );
    // Body
    return (Vrvcpu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vrvcpu___024root___change_request_1(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vrvcpu___024root___eval_debug_assertions(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
