// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvcpu.h for the primary calling header

#include "Vrvcpu___024root.h"
#include "Vrvcpu__Syms.h"

//==========


void Vrvcpu___024root___ctor_var_reset(Vrvcpu___024root* vlSelf);

Vrvcpu___024root::Vrvcpu___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vrvcpu___024root___ctor_var_reset(this);
}

void Vrvcpu___024root::__Vconfigure(Vrvcpu__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vrvcpu___024root::~Vrvcpu___024root() {
}

void Vrvcpu___024root___settle__TOP__1(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->rvcpu__DOT__inst_opcode = (0xf1U & (IData)(vlSelf->rvcpu__DOT__inst_opcode));
    vlSelf->rvcpu__DOT__inst_opcode = (0x1fU & (IData)(vlSelf->rvcpu__DOT__inst_opcode));
    vlSelf->inst_ena = ((IData)(vlSelf->rst) ? 0U : 1U);
    vlSelf->rvcpu__DOT__Id_stage__DOT__inst_addi = (IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x707cU 
                                                             & vlSelf->inst)));
    vlSelf->inst_addr = vlSelf->rvcpu__DOT__If_stage__DOT__pc;
    vlSelf->rvcpu__DOT__inst_opcode = ((0xfeU & (IData)(vlSelf->rvcpu__DOT__inst_opcode)) 
                                       | ((IData)(vlSelf->rst)
                                           ? 0U : (1U 
                                                   & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__inst_addi))));
    vlSelf->rvcpu__DOT__inst_opcode = ((0xefU & (IData)(vlSelf->rvcpu__DOT__inst_opcode)) 
                                       | (((IData)(vlSelf->rst)
                                            ? 0U : 
                                           (1U & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__inst_addi))) 
                                          << 4U));
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

void Vrvcpu___024root___eval_initial(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vrvcpu___024root___eval_settle(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___eval_settle\n"); );
    // Body
    Vrvcpu___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vrvcpu___024root___final(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___final\n"); );
}

void Vrvcpu___024root___ctor_var_reset(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->inst_addr = VL_RAND_RESET_Q(64);
    vlSelf->inst_ena = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__rd_w_addr = VL_RAND_RESET_I(5);
    vlSelf->rvcpu__DOT__inst_type = VL_RAND_RESET_I(5);
    vlSelf->rvcpu__DOT__inst_opcode = VL_RAND_RESET_I(8);
    vlSelf->rvcpu__DOT__rd_data = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__If_stage__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__Id_stage__DOT__inst_addi = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
