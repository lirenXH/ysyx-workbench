// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrvcpu__Syms.h"


void Vrvcpu___024root__traceChgSub0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep);

void Vrvcpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vrvcpu___024root* const __restrict vlSelf = static_cast<Vrvcpu___024root*>(voidSelf);
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vrvcpu___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vrvcpu___024root__traceChgSub0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->rvcpu__DOT__rd_w_addr),5);
            tracep->chgCData(oldp+1,(vlSelf->rvcpu__DOT__inst_type),5);
            tracep->chgCData(oldp+2,(vlSelf->rvcpu__DOT__inst_opcode),8);
            tracep->chgBit(oldp+3,(vlSelf->rvcpu__DOT__Id_stage__DOT__inst_addi));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+4,(vlSelf->rvcpu__DOT__If_stage__DOT__pc),64);
            tracep->chgQData(oldp+6,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[0]),64);
            tracep->chgQData(oldp+8,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[1]),64);
            tracep->chgQData(oldp+10,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[2]),64);
            tracep->chgQData(oldp+12,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[3]),64);
            tracep->chgQData(oldp+14,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[4]),64);
            tracep->chgQData(oldp+16,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[5]),64);
            tracep->chgQData(oldp+18,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[6]),64);
            tracep->chgQData(oldp+20,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[7]),64);
            tracep->chgQData(oldp+22,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[8]),64);
            tracep->chgQData(oldp+24,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[9]),64);
            tracep->chgQData(oldp+26,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[10]),64);
            tracep->chgQData(oldp+28,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[11]),64);
            tracep->chgQData(oldp+30,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[12]),64);
            tracep->chgQData(oldp+32,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[13]),64);
            tracep->chgQData(oldp+34,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[14]),64);
            tracep->chgQData(oldp+36,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[15]),64);
            tracep->chgQData(oldp+38,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[16]),64);
            tracep->chgQData(oldp+40,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[17]),64);
            tracep->chgQData(oldp+42,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[18]),64);
            tracep->chgQData(oldp+44,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[19]),64);
            tracep->chgQData(oldp+46,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[20]),64);
            tracep->chgQData(oldp+48,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[21]),64);
            tracep->chgQData(oldp+50,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[22]),64);
            tracep->chgQData(oldp+52,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[23]),64);
            tracep->chgQData(oldp+54,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[24]),64);
            tracep->chgQData(oldp+56,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[25]),64);
            tracep->chgQData(oldp+58,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[26]),64);
            tracep->chgQData(oldp+60,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[27]),64);
            tracep->chgQData(oldp+62,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[28]),64);
            tracep->chgQData(oldp+64,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[29]),64);
            tracep->chgQData(oldp+66,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[30]),64);
            tracep->chgQData(oldp+68,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[31]),64);
        }
        tracep->chgBit(oldp+70,(vlSelf->clk));
        tracep->chgBit(oldp+71,(vlSelf->rst));
        tracep->chgIData(oldp+72,(vlSelf->inst),32);
        tracep->chgQData(oldp+73,(vlSelf->inst_addr),64);
        tracep->chgBit(oldp+75,(vlSelf->inst_ena));
        tracep->chgBit(oldp+76,(((IData)(vlSelf->rst)
                                  ? 0U : (1U & ((IData)(vlSelf->rvcpu__DOT__inst_type) 
                                                >> 4U)))));
        tracep->chgCData(oldp+77,(((IData)(vlSelf->rst)
                                    ? 0U : ((0x10U 
                                             & (IData)(vlSelf->rvcpu__DOT__inst_type))
                                             ? (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 0xfU))
                                             : 0U))),5);
        tracep->chgQData(oldp+78,(((IData)(vlSelf->rst)
                                    ? 0ULL : ((0x10U 
                                               & (IData)(vlSelf->rvcpu__DOT__inst_type))
                                               ? ((IData)(vlSelf->rst)
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
                                               : 0ULL))),64);
        tracep->chgQData(oldp+80,(((IData)(vlSelf->rst)
                                    ? 0ULL : ((0x10U 
                                               & (IData)(vlSelf->rvcpu__DOT__inst_type))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (vlSelf->inst 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x14U))))
                                               : 0ULL))),64);
        tracep->chgQData(oldp+82,(((IData)(vlSelf->rst)
                                    ? 0ULL : (((IData)(vlSelf->rst)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->rvcpu__DOT__inst_type) 
                                                      >> 4U)))
                                               ? vlSelf->rvcpu__DOT__Regfile__DOT__regs
                                              [((IData)(vlSelf->rst)
                                                 ? 0U
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__inst_type))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 0xfU))
                                                  : 0U))]
                                               : 0ULL))),64);
        tracep->chgQData(oldp+84,(((IData)(vlSelf->rst)
                                    ? 0ULL : ((0x11U 
                                               == (IData)(vlSelf->rvcpu__DOT__inst_opcode))
                                               ? (((IData)(vlSelf->rst)
                                                    ? 0ULL
                                                    : 
                                                   ((0x10U 
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
                                                  + 
                                                  ((IData)(vlSelf->rst)
                                                    ? 0ULL
                                                    : 
                                                   ((0x10U 
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
                                               : 0ULL))),64);
        tracep->chgCData(oldp+86,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+87,((0x1fU & (vlSelf->inst 
                                            >> 7U))),5);
        tracep->chgCData(oldp+88,((7U & (vlSelf->inst 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+89,((0x1fU & (vlSelf->inst 
                                            >> 0xfU))),5);
        tracep->chgSData(oldp+90,((vlSelf->inst >> 0x14U)),12);
    }
}

void Vrvcpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vrvcpu___024root* const __restrict vlSelf = static_cast<Vrvcpu___024root*>(voidSelf);
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
