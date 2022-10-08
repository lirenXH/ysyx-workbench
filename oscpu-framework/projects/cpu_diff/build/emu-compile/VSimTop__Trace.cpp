// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VSimTop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<5>/*159:0*/ __Vtemp63;
    VlWide<4>/*127:0*/ __Vtemp64;
    VlWide<11>/*351:0*/ __Vtemp68;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(vlSelf->SimTop__DOT__es_allowin));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+1,(vlSelf->SimTop__DOT__regs_ds_o[0]),64);
            tracep->chgQData(oldp+3,(vlSelf->SimTop__DOT__regs_ds_o[1]),64);
            tracep->chgQData(oldp+5,(vlSelf->SimTop__DOT__regs_ds_o[2]),64);
            tracep->chgQData(oldp+7,(vlSelf->SimTop__DOT__regs_ds_o[3]),64);
            tracep->chgQData(oldp+9,(vlSelf->SimTop__DOT__regs_ds_o[4]),64);
            tracep->chgQData(oldp+11,(vlSelf->SimTop__DOT__regs_ds_o[5]),64);
            tracep->chgQData(oldp+13,(vlSelf->SimTop__DOT__regs_ds_o[6]),64);
            tracep->chgQData(oldp+15,(vlSelf->SimTop__DOT__regs_ds_o[7]),64);
            tracep->chgQData(oldp+17,(vlSelf->SimTop__DOT__regs_ds_o[8]),64);
            tracep->chgQData(oldp+19,(vlSelf->SimTop__DOT__regs_ds_o[9]),64);
            tracep->chgQData(oldp+21,(vlSelf->SimTop__DOT__regs_ds_o[10]),64);
            tracep->chgQData(oldp+23,(vlSelf->SimTop__DOT__regs_ds_o[11]),64);
            tracep->chgQData(oldp+25,(vlSelf->SimTop__DOT__regs_ds_o[12]),64);
            tracep->chgQData(oldp+27,(vlSelf->SimTop__DOT__regs_ds_o[13]),64);
            tracep->chgQData(oldp+29,(vlSelf->SimTop__DOT__regs_ds_o[14]),64);
            tracep->chgQData(oldp+31,(vlSelf->SimTop__DOT__regs_ds_o[15]),64);
            tracep->chgQData(oldp+33,(vlSelf->SimTop__DOT__regs_ds_o[16]),64);
            tracep->chgQData(oldp+35,(vlSelf->SimTop__DOT__regs_ds_o[17]),64);
            tracep->chgQData(oldp+37,(vlSelf->SimTop__DOT__regs_ds_o[18]),64);
            tracep->chgQData(oldp+39,(vlSelf->SimTop__DOT__regs_ds_o[19]),64);
            tracep->chgQData(oldp+41,(vlSelf->SimTop__DOT__regs_ds_o[20]),64);
            tracep->chgQData(oldp+43,(vlSelf->SimTop__DOT__regs_ds_o[21]),64);
            tracep->chgQData(oldp+45,(vlSelf->SimTop__DOT__regs_ds_o[22]),64);
            tracep->chgQData(oldp+47,(vlSelf->SimTop__DOT__regs_ds_o[23]),64);
            tracep->chgQData(oldp+49,(vlSelf->SimTop__DOT__regs_ds_o[24]),64);
            tracep->chgQData(oldp+51,(vlSelf->SimTop__DOT__regs_ds_o[25]),64);
            tracep->chgQData(oldp+53,(vlSelf->SimTop__DOT__regs_ds_o[26]),64);
            tracep->chgQData(oldp+55,(vlSelf->SimTop__DOT__regs_ds_o[27]),64);
            tracep->chgQData(oldp+57,(vlSelf->SimTop__DOT__regs_ds_o[28]),64);
            tracep->chgQData(oldp+59,(vlSelf->SimTop__DOT__regs_ds_o[29]),64);
            tracep->chgQData(oldp+61,(vlSelf->SimTop__DOT__regs_ds_o[30]),64);
            tracep->chgQData(oldp+63,(vlSelf->SimTop__DOT__regs_ds_o[31]),64);
            tracep->chgBit(oldp+65,(vlSelf->SimTop__DOT__fetched));
            tracep->chgBit(oldp+66,(vlSelf->SimTop__DOT__IF__DOT__fs_valid));
            tracep->chgBit(oldp+67,(vlSelf->SimTop__DOT__ID__DOT__ds_valid));
            tracep->chgBit(oldp+68,(vlSelf->SimTop__DOT__EXE__DOT__es_valid));
            tracep->chgBit(oldp+69,(vlSelf->SimTop__DOT__MEM__DOT__ms_valid));
            tracep->chgWData(oldp+70,(vlSelf->SimTop__DOT__bru_to_fs_bus),131);
            if (vlSelf->SimTop__DOT__IF__DOT__fs_valid) {
                __Vtemp60[0U] = (IData)(((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                                          ? 0ULL : vlSelf->SimTop__DOT__IF__DOT__fs_pc));
                __Vtemp60[1U] = (IData)((((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                                           ? 0ULL : vlSelf->SimTop__DOT__IF__DOT__fs_pc) 
                                         >> 0x20U));
                __Vtemp60[2U] = ((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                                  ? 0x13U : vlSelf->SimTop__DOT__inst);
            } else {
                __Vtemp60[0U] = 0U;
                __Vtemp60[1U] = 0U;
                __Vtemp60[2U] = 0x13U;
            }
            tracep->chgWData(oldp+75,(__Vtemp60),96);
            tracep->chgWData(oldp+78,(vlSelf->SimTop__DOT__ws_to_rf_bus),70);
            tracep->chgWData(oldp+81,(vlSelf->SimTop__DOT__es_to_ms_bus),173);
            tracep->chgWData(oldp+87,(vlSelf->SimTop__DOT__ms_to_ws_bus),232);
            tracep->chgQData(oldp+95,(vlSelf->SimTop__DOT__es_alu_result),64);
            tracep->chgIData(oldp+97,(vlSelf->SimTop__DOT__inst),32);
            tracep->chgCData(oldp+98,(vlSelf->SimTop__DOT__ForwardA),2);
            tracep->chgCData(oldp+99,(vlSelf->SimTop__DOT__ForwardB),2);
            tracep->chgCData(oldp+100,((0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+101,((0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+102,((0x1fU & ((vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[9U] 
                                                  << 2U) 
                                                 | (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                    >> 0x1eU)))),5);
            tracep->chgCData(oldp+103,((0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                 >> 0x19U))),5);
            tracep->chgBit(oldp+104,(vlSelf->SimTop__DOT__inst_valid));
            tracep->chgQData(oldp+105,((4ULL + vlSelf->SimTop__DOT__IF__DOT__fs_pc)),64);
            tracep->chgQData(oldp+107,(((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                                         ? (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__bru_to_fs_bus[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__bru_to_fs_bus[0U])))
                                         : (4ULL + vlSelf->SimTop__DOT__IF__DOT__fs_pc))),64);
            tracep->chgQData(oldp+109,(((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                                         ? 0ULL : vlSelf->SimTop__DOT__IF__DOT__fs_pc)),64);
            tracep->chgBit(oldp+111,((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])));
            tracep->chgQData(oldp+112,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__bru_to_fs_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__bru_to_fs_bus[0U])))),64);
            tracep->chgQData(oldp+114,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__bru_to_fs_bus[4U])) 
                                         << 0x3dU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__bru_to_fs_bus[3U])) 
                                            << 0x1dU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__bru_to_fs_bus[2U])) 
                                              >> 3U)))),64);
            tracep->chgCData(oldp+116,((3U & (vlSelf->SimTop__DOT__bru_to_fs_bus[2U] 
                                              >> 1U))),2);
            tracep->chgIData(oldp+117,(((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                                         ? 0x13U : vlSelf->SimTop__DOT__inst)),32);
            tracep->chgQData(oldp+118,(vlSelf->SimTop__DOT__IF__DOT__fs_pc),64);
            tracep->chgCData(oldp+120,((0x1fU & vlSelf->SimTop__DOT__es_to_ms_bus[2U])),5);
            tracep->chgBit(oldp+121,((1U & (vlSelf->SimTop__DOT__es_to_ms_bus[2U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+122,((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])));
            tracep->chgQData(oldp+123,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0]),64);
            tracep->chgQData(oldp+125,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[1]),64);
            tracep->chgQData(oldp+127,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[2]),64);
            tracep->chgQData(oldp+129,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[3]),64);
            tracep->chgQData(oldp+131,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[4]),64);
            tracep->chgQData(oldp+133,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[5]),64);
            tracep->chgQData(oldp+135,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[6]),64);
            tracep->chgQData(oldp+137,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[7]),64);
            tracep->chgQData(oldp+139,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[8]),64);
            tracep->chgQData(oldp+141,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[9]),64);
            tracep->chgQData(oldp+143,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[10]),64);
            tracep->chgQData(oldp+145,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[11]),64);
            tracep->chgQData(oldp+147,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[12]),64);
            tracep->chgQData(oldp+149,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[13]),64);
            tracep->chgQData(oldp+151,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[14]),64);
            tracep->chgQData(oldp+153,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[15]),64);
            tracep->chgQData(oldp+155,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[16]),64);
            tracep->chgQData(oldp+157,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[17]),64);
            tracep->chgQData(oldp+159,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[18]),64);
            tracep->chgQData(oldp+161,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[19]),64);
            tracep->chgQData(oldp+163,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[20]),64);
            tracep->chgQData(oldp+165,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[21]),64);
            tracep->chgQData(oldp+167,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[22]),64);
            tracep->chgQData(oldp+169,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[23]),64);
            tracep->chgQData(oldp+171,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[24]),64);
            tracep->chgQData(oldp+173,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[25]),64);
            tracep->chgQData(oldp+175,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[26]),64);
            tracep->chgQData(oldp+177,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[27]),64);
            tracep->chgQData(oldp+179,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[28]),64);
            tracep->chgQData(oldp+181,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[29]),64);
            tracep->chgQData(oldp+183,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[30]),64);
            tracep->chgQData(oldp+185,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[31]),64);
            tracep->chgIData(oldp+187,(vlSelf->SimTop__DOT__ID__DOT__inst),32);
            tracep->chgQData(oldp+188,(((0U == (0x1fU 
                                                & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                   >> 0xfU)))
                                         ? 0ULL : (
                                                   (((0x1fU 
                                                      & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                         >> 0xfU))) 
                                                    & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                                       >> 5U))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
                                                    : 
                                                   vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                       >> 0xfU))]))),64);
            tracep->chgQData(oldp+190,(((0U == (0x1fU 
                                                & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                   >> 0x14U)))
                                         ? 0ULL : (
                                                   (((0x1fU 
                                                      & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                         >> 0x14U))) 
                                                    & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                                       >> 5U))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
                                                    : 
                                                   vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                       >> 0x14U))]))),64);
            tracep->chgCData(oldp+192,((0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+193,((7U & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                              >> 0xcU))),3);
            tracep->chgWData(oldp+194,(vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r),96);
            tracep->chgIData(oldp+197,(vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[2U]),32);
            tracep->chgQData(oldp+198,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[0U])))),64);
            tracep->chgBit(oldp+200,((1U & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+201,((0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])),5);
            tracep->chgQData(oldp+202,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))),64);
            tracep->chgQData(oldp+204,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->SimTop__DOT__ID__DOT__inst))))),64);
            tracep->chgQData(oldp+206,((((- (QData)((IData)(
                                                            (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+208,((((- (QData)((IData)(
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
                                                                    >> 0x14U)))))))),64);
            tracep->chgQData(oldp+210,((((- (QData)((IData)(
                                                            (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+212,((((- (QData)((IData)(
                                                            (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                              >> 7U)))))))),64);
            tracep->chgQData(oldp+214,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0]),64);
            tracep->chgQData(oldp+216,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[1]),64);
            tracep->chgQData(oldp+218,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[2]),64);
            tracep->chgQData(oldp+220,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[3]),64);
            tracep->chgQData(oldp+222,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[4]),64);
            tracep->chgQData(oldp+224,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[5]),64);
            tracep->chgQData(oldp+226,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[6]),64);
            tracep->chgQData(oldp+228,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[7]),64);
            tracep->chgQData(oldp+230,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[8]),64);
            tracep->chgQData(oldp+232,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[9]),64);
            tracep->chgQData(oldp+234,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[10]),64);
            tracep->chgQData(oldp+236,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[11]),64);
            tracep->chgQData(oldp+238,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[12]),64);
            tracep->chgQData(oldp+240,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[13]),64);
            tracep->chgQData(oldp+242,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[14]),64);
            tracep->chgQData(oldp+244,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[15]),64);
            tracep->chgQData(oldp+246,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[16]),64);
            tracep->chgQData(oldp+248,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[17]),64);
            tracep->chgQData(oldp+250,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[18]),64);
            tracep->chgQData(oldp+252,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[19]),64);
            tracep->chgQData(oldp+254,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[20]),64);
            tracep->chgQData(oldp+256,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[21]),64);
            tracep->chgQData(oldp+258,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[22]),64);
            tracep->chgQData(oldp+260,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[23]),64);
            tracep->chgQData(oldp+262,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[24]),64);
            tracep->chgQData(oldp+264,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[25]),64);
            tracep->chgQData(oldp+266,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[26]),64);
            tracep->chgQData(oldp+268,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[27]),64);
            tracep->chgQData(oldp+270,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[28]),64);
            tracep->chgQData(oldp+272,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[29]),64);
            tracep->chgQData(oldp+274,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[30]),64);
            tracep->chgQData(oldp+276,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[31]),64);
            tracep->chgQData(oldp+278,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0]),64);
            tracep->chgQData(oldp+280,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[1]),64);
            tracep->chgQData(oldp+282,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[2]),64);
            tracep->chgQData(oldp+284,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[3]),64);
            tracep->chgQData(oldp+286,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[4]),64);
            tracep->chgQData(oldp+288,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[5]),64);
            tracep->chgQData(oldp+290,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[6]),64);
            tracep->chgQData(oldp+292,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[7]),64);
            tracep->chgQData(oldp+294,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[8]),64);
            tracep->chgQData(oldp+296,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[9]),64);
            tracep->chgQData(oldp+298,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[10]),64);
            tracep->chgQData(oldp+300,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[11]),64);
            tracep->chgQData(oldp+302,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[12]),64);
            tracep->chgQData(oldp+304,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[13]),64);
            tracep->chgQData(oldp+306,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[14]),64);
            tracep->chgQData(oldp+308,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[15]),64);
            tracep->chgQData(oldp+310,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[16]),64);
            tracep->chgQData(oldp+312,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[17]),64);
            tracep->chgQData(oldp+314,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[18]),64);
            tracep->chgQData(oldp+316,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[19]),64);
            tracep->chgQData(oldp+318,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[20]),64);
            tracep->chgQData(oldp+320,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[21]),64);
            tracep->chgQData(oldp+322,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[22]),64);
            tracep->chgQData(oldp+324,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[23]),64);
            tracep->chgQData(oldp+326,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[24]),64);
            tracep->chgQData(oldp+328,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[25]),64);
            tracep->chgQData(oldp+330,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[26]),64);
            tracep->chgQData(oldp+332,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[27]),64);
            tracep->chgQData(oldp+334,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[28]),64);
            tracep->chgQData(oldp+336,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[29]),64);
            tracep->chgQData(oldp+338,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[30]),64);
            tracep->chgQData(oldp+340,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[31]),64);
            tracep->chgQData(oldp+342,(((((0x1fU & 
                                           vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
                                          == (0x1fU 
                                              & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                 >> 0xfU))) 
                                         & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                            >> 5U))
                                         ? (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
                                         : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
                                        [(0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                   >> 0xfU))])),64);
            tracep->chgQData(oldp+344,(((((0x1fU & 
                                           vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
                                          == (0x1fU 
                                              & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                 >> 0x14U))) 
                                         & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                            >> 5U))
                                         ? (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
                                         : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
                                        [(0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                   >> 0x14U))])),64);
            tracep->chgIData(oldp+346,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__i),32);
            tracep->chgCData(oldp+347,((0x1fU & (vlSelf->SimTop__DOT__ms_to_ws_bus[6U] 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+348,((0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])),5);
            tracep->chgBit(oldp+349,((1U & (vlSelf->SimTop__DOT__ms_to_ws_bus[6U] 
                                            >> 7U))));
            tracep->chgBit(oldp+350,((1U & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                            >> 5U))));
            tracep->chgQData(oldp+351,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ms_to_ws_bus[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__ms_to_ws_bus[2U])))),64);
            tracep->chgQData(oldp+353,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))),64);
            tracep->chgWData(oldp+355,(vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r),323);
            tracep->chgCData(oldp+366,((0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+367,((3U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                              >> 0xdU))),2);
            tracep->chgQData(oldp+368,(vlSelf->SimTop__DOT__EXE__DOT__es_alu_a),64);
            tracep->chgCData(oldp+370,((3U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                              >> 0xbU))),2);
            tracep->chgQData(oldp+371,(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b),64);
            tracep->chgBit(oldp+373,((1U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+374,((3U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                              >> 8U))),2);
            tracep->chgCData(oldp+375,((0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                 >> 3U))),5);
            tracep->chgQData(oldp+376,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U])) 
                                         << 0x3dU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[7U])) 
                                            << 0x1dU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[6U])) 
                                              >> 3U)))),64);
            tracep->chgCData(oldp+378,((7U & vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[6U])),3);
            tracep->chgQData(oldp+379,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[4U])))),64);
            tracep->chgQData(oldp+381,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[2U])))),64);
            tracep->chgQData(oldp+383,(vlSelf->SimTop__DOT__EXE__DOT__es_for_src1),64);
            tracep->chgQData(oldp+385,(vlSelf->SimTop__DOT__EXE__DOT__es_for_src2),64);
            tracep->chgQData(oldp+387,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[0U])))),64);
            tracep->chgIData(oldp+389,(((vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[0xaU] 
                                         << 0x1dU) 
                                        | (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[9U] 
                                           >> 3U))),32);
            tracep->chgQData(oldp+390,(((((7U == (0x1fU 
                                                  & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                     >> 0xfU)))
                                           ? vlSelf->SimTop__DOT__EXE__DOT__es_for_src1
                                           : (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[0U])))) 
                                         + (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U])) 
                                             << 0x3dU) 
                                            | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[7U])) 
                                                << 0x1dU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[6U])) 
                                                  >> 3U)))) 
                                        & (~ ((7U == 
                                               (0x1fU 
                                                & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                   >> 0xfU)))
                                               ? 1ULL
                                               : 0ULL)))),64);
            tracep->chgBit(oldp+392,((1U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+393,((1U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+394,((1U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+395,((3U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+396,(((((((((((0U == 
                                               (0x1fU 
                                                & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                   >> 0xfU))) 
                                              & (1U 
                                                 == 
                                                 (3U 
                                                  & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                     >> 8U)))) 
                                             | ((7U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                     >> 0xfU))) 
                                                & (1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                       >> 8U))))) 
                                            | ((6U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                    >> 0xfU))) 
                                               & (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__equ))) 
                                           | ((1U == 
                                               (0x1fU 
                                                & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                   >> 0xfU))) 
                                              & (~ (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__equ)))) 
                                          | ((3U == 
                                              (0x1fU 
                                               & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                  >> 0xfU))) 
                                             & (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__lt))) 
                                         | ((2U == 
                                             (0x1fU 
                                              & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                 >> 0xfU))) 
                                            & (~ (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__lt)))) 
                                        | ((5U == (0x1fU 
                                                   & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                      >> 0xfU))) 
                                           & (~ (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__ltu)))) 
                                       | ((4U == (0x1fU 
                                                  & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                     >> 0xfU))) 
                                          & (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__ltu))) 
                                      & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                         >> 0x16U))));
            tracep->chgCData(oldp+397,((0x3fU & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b))),6);
            tracep->chgQData(oldp+398,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sel_result),64);
            tracep->chgQData(oldp+400,((vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                        + vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)),64);
            tracep->chgQData(oldp+402,((vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                        ^ vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)),64);
            tracep->chgQData(oldp+404,((vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                        & vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)),64);
            tracep->chgQData(oldp+406,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sub_result),64);
            tracep->chgQData(oldp+408,((QData)((IData)(
                                                       VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__EXE__DOT__es_alu_a, vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),64);
            tracep->chgQData(oldp+410,((vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                        | vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)),64);
            tracep->chgQData(oldp+412,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__div_result),64);
            tracep->chgQData(oldp+414,(VL_DIV_QQQ(64, vlSelf->SimTop__DOT__EXE__DOT__es_alu_a, vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)),64);
            tracep->chgQData(oldp+416,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__mul_result),64);
            tracep->chgQData(oldp+418,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__rem_result),64);
            tracep->chgQData(oldp+420,(VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__EXE__DOT__es_alu_a, vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)),64);
            tracep->chgQData(oldp+422,((QData)((IData)(
                                                       (vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                                        < vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),64);
            tracep->chgBit(oldp+424,((1U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                            >> 0x13U))));
            tracep->chgIData(oldp+425,(((IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_a) 
                                        >> (0x1fU & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),32);
            tracep->chgIData(oldp+426,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_a), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),32);
            tracep->chgIData(oldp+427,(((IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_a) 
                                        << (0x1fU & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),32);
            tracep->chgQData(oldp+428,((vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                        << (0x3fU & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),64);
            tracep->chgQData(oldp+430,(VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__EXE__DOT__es_alu_a, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),64);
            tracep->chgQData(oldp+432,((vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                        >> (0x3fU & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),64);
            tracep->chgQData(oldp+434,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sll_result),64);
            tracep->chgQData(oldp+436,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__srl_result),64);
            tracep->chgQData(oldp+438,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sra_result),64);
            tracep->chgBit(oldp+440,(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__equ));
            tracep->chgBit(oldp+441,(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__lt));
            tracep->chgBit(oldp+442,(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__ltu));
            tracep->chgBit(oldp+443,((((((((((0U == 
                                              (0x1fU 
                                               & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                  >> 0xfU))) 
                                             & (1U 
                                                == 
                                                (3U 
                                                 & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                    >> 8U)))) 
                                            | ((7U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                    >> 0xfU))) 
                                               & (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                      >> 8U))))) 
                                           | ((6U == 
                                               (0x1fU 
                                                & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                   >> 0xfU))) 
                                              & (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__equ))) 
                                          | ((1U == 
                                              (0x1fU 
                                               & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                  >> 0xfU))) 
                                             & (~ (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__equ)))) 
                                         | ((3U == 
                                             (0x1fU 
                                              & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                 >> 0xfU))) 
                                            & (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__lt))) 
                                        | ((2U == (0x1fU 
                                                   & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                      >> 0xfU))) 
                                           & (~ (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__lt)))) 
                                       | ((5U == (0x1fU 
                                                  & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                     >> 0xfU))) 
                                          & (~ (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__ltu)))) 
                                      | ((4U == (0x1fU 
                                                 & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                    >> 0xfU))) 
                                         & (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__ltu)))));
            __Vtemp63[0U] = vlSelf->SimTop__DOT__es_to_ms_bus[0U];
            __Vtemp63[1U] = vlSelf->SimTop__DOT__es_to_ms_bus[1U];
            __Vtemp63[2U] = vlSelf->SimTop__DOT__es_to_ms_bus[2U];
            __Vtemp63[3U] = vlSelf->SimTop__DOT__es_to_ms_bus[3U];
            __Vtemp63[4U] = (0x1fffU & vlSelf->SimTop__DOT__es_to_ms_bus[4U]);
            tracep->chgWData(oldp+444,(__Vtemp63),141);
            tracep->chgIData(oldp+449,(((vlSelf->SimTop__DOT__es_to_ms_bus[5U] 
                                         << 0x13U) 
                                        | (vlSelf->SimTop__DOT__es_to_ms_bus[4U] 
                                           >> 0xdU))),32);
            tracep->chgWData(oldp+450,(vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r),173);
            tracep->chgQData(oldp+456,(vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r),64);
            tracep->chgQData(oldp+458,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[0U])))),64);
            tracep->chgCData(oldp+460,((0x1fU & vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U])),5);
            tracep->chgBit(oldp+461,((1U & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+462,((3U & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                              >> 6U))),2);
            tracep->chgCData(oldp+463,((7U & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+464,((1U & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+465,((1U & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                            >> 0xcU))));
            tracep->chgQData(oldp+466,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[4U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[3U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U])) 
                                              >> 0xdU)))),64);
            tracep->chgQData(oldp+468,(vlSelf->SimTop__DOT__MEM__DOT__ms_rdata),64);
            tracep->chgIData(oldp+470,(((vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[5U] 
                                         << 0x13U) 
                                        | (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[4U] 
                                           >> 0xdU))),32);
            tracep->chgCData(oldp+471,((7U & (IData)(vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r))),3);
            tracep->chgQData(oldp+472,(vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata_RAMHelper),64);
            tracep->chgQData(oldp+474,(((0x3fU >= (0x38U 
                                                   & ((IData)(vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r) 
                                                      << 3U)))
                                         ? ((((QData)((IData)(
                                                              vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[4U])) 
                                              << 0x33U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[3U])) 
                                                 << 0x13U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U])) 
                                                   >> 0xdU))) 
                                            << (0x38U 
                                                & ((IData)(vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r) 
                                                   << 3U)))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+476,(vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata),64);
            tracep->chgQData(oldp+478,(vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__wmask),64);
            tracep->chgQData(oldp+480,(((vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r 
                                         - 0x80000000ULL) 
                                        >> 3U)),64);
            tracep->chgBit(oldp+482,(vlSelf->SimTop__DOT__WB__DOT__ws_valid));
            tracep->chgWData(oldp+483,(vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r),232);
            tracep->chgBit(oldp+491,((1U & (vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U] 
                                            >> 7U))));
            tracep->chgCData(oldp+492,((0x1fU & (vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U] 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+493,((3U & vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U])),2);
            tracep->chgQData(oldp+494,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[4U])))),64);
            tracep->chgQData(oldp+496,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[2U])))),64);
            tracep->chgBit(oldp+498,(((vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U] 
                                       >> 7U) & (IData)(vlSelf->SimTop__DOT__WB__DOT__ws_valid))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            __Vtemp64[2U] = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__ID__DOT__inst)) 
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
            __Vtemp64[3U] = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__ID__DOT__inst)) 
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
            __Vtemp68[0U] = (IData)(((1U & (vlSelf->SimTop__DOT__bru_to_fs_bus[2U] 
                                            | (IData)(vlSelf->SimTop__DOT__IF_ID_write)))
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[0U])))));
            __Vtemp68[1U] = (IData)((((1U & (vlSelf->SimTop__DOT__bru_to_fs_bus[2U] 
                                             | (IData)(vlSelf->SimTop__DOT__IF_ID_write)))
                                       ? 0ULL : (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[0U])))) 
                                     >> 0x20U));
            __Vtemp68[2U] = (IData)(((0U == (0x1fU 
                                             & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                >> 0x14U)))
                                      ? 0ULL : ((((0x1fU 
                                                   & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                      >> 0x14U))) 
                                                 & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                                    >> 5U))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
                                                 : 
                                                vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
                                                [(0x1fU 
                                                  & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                     >> 0x14U))])));
            __Vtemp68[3U] = (IData)((((0U == (0x1fU 
                                              & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                 >> 0x14U)))
                                       ? 0ULL : (((
                                                   (0x1fU 
                                                    & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                       >> 0x14U))) 
                                                  & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                                     >> 5U))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
                                                  : 
                                                 vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
                                                 [(0x1fU 
                                                   & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                      >> 0x14U))])) 
                                     >> 0x20U));
            __Vtemp68[4U] = (IData)(((0U == (0x1fU 
                                             & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                >> 0xfU)))
                                      ? 0ULL : ((((0x1fU 
                                                   & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                      >> 0xfU))) 
                                                 & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                                    >> 5U))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
                                                 : 
                                                vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
                                                [(0x1fU 
                                                  & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                     >> 0xfU))])));
            __Vtemp68[5U] = (IData)((((0U == (0x1fU 
                                              & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                 >> 0xfU)))
                                       ? 0ULL : (((
                                                   (0x1fU 
                                                    & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                       >> 0xfU))) 
                                                  & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                                     >> 5U))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
                                                  : 
                                                 vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
                                                 [(0x1fU 
                                                   & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                      >> 0xfU))])) 
                                     >> 0x20U));
            __Vtemp68[6U] = (((IData)(vlSelf->SimTop__DOT__ID__DOT__imme_o) 
                              << 3U) | (7U & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                              >> 0xcU)));
            __Vtemp68[7U] = (((IData)(vlSelf->SimTop__DOT__ID__DOT__imme_o) 
                              >> 0x1dU) | ((IData)(
                                                   (vlSelf->SimTop__DOT__ID__DOT__imme_o 
                                                    >> 0x20U)) 
                                           << 3U));
            __Vtemp68[8U] = (((IData)((vlSelf->SimTop__DOT__ID__DOT__imme_o 
                                       >> 0x20U)) >> 0x1dU) 
                             | (__Vtemp64[2U] << 3U));
            __Vtemp68[9U] = ((__Vtemp64[2U] >> 0x1dU) 
                             | (__Vtemp64[3U] << 3U));
            __Vtemp68[0xaU] = (__Vtemp64[3U] >> 0x1dU);
            tracep->chgWData(oldp+499,(__Vtemp68),323);
            tracep->chgQData(oldp+510,(((1U & (vlSelf->SimTop__DOT__bru_to_fs_bus[2U] 
                                               | (IData)(vlSelf->SimTop__DOT__IF_ID_write)))
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[0U]))))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+512,(vlSelf->SimTop__DOT__cmt_wen));
            tracep->chgCData(oldp+513,(vlSelf->SimTop__DOT__cmt_wdest),8);
            tracep->chgQData(oldp+514,(vlSelf->SimTop__DOT__cmt_wdata),64);
            tracep->chgQData(oldp+516,(vlSelf->SimTop__DOT__cmt_pc),64);
            tracep->chgIData(oldp+518,(vlSelf->SimTop__DOT__cmt_inst),32);
            tracep->chgBit(oldp+519,(vlSelf->SimTop__DOT__cmt_valid));
            tracep->chgBit(oldp+520,(vlSelf->SimTop__DOT__trap));
            tracep->chgCData(oldp+521,(vlSelf->SimTop__DOT__trap_code),8);
            tracep->chgQData(oldp+522,(vlSelf->SimTop__DOT__cycleCnt),64);
            tracep->chgQData(oldp+524,(vlSelf->SimTop__DOT__instrCnt),64);
            tracep->chgQData(oldp+526,(vlSelf->SimTop__DOT__regs_diff[0]),64);
            tracep->chgQData(oldp+528,(vlSelf->SimTop__DOT__regs_diff[1]),64);
            tracep->chgQData(oldp+530,(vlSelf->SimTop__DOT__regs_diff[2]),64);
            tracep->chgQData(oldp+532,(vlSelf->SimTop__DOT__regs_diff[3]),64);
            tracep->chgQData(oldp+534,(vlSelf->SimTop__DOT__regs_diff[4]),64);
            tracep->chgQData(oldp+536,(vlSelf->SimTop__DOT__regs_diff[5]),64);
            tracep->chgQData(oldp+538,(vlSelf->SimTop__DOT__regs_diff[6]),64);
            tracep->chgQData(oldp+540,(vlSelf->SimTop__DOT__regs_diff[7]),64);
            tracep->chgQData(oldp+542,(vlSelf->SimTop__DOT__regs_diff[8]),64);
            tracep->chgQData(oldp+544,(vlSelf->SimTop__DOT__regs_diff[9]),64);
            tracep->chgQData(oldp+546,(vlSelf->SimTop__DOT__regs_diff[10]),64);
            tracep->chgQData(oldp+548,(vlSelf->SimTop__DOT__regs_diff[11]),64);
            tracep->chgQData(oldp+550,(vlSelf->SimTop__DOT__regs_diff[12]),64);
            tracep->chgQData(oldp+552,(vlSelf->SimTop__DOT__regs_diff[13]),64);
            tracep->chgQData(oldp+554,(vlSelf->SimTop__DOT__regs_diff[14]),64);
            tracep->chgQData(oldp+556,(vlSelf->SimTop__DOT__regs_diff[15]),64);
            tracep->chgQData(oldp+558,(vlSelf->SimTop__DOT__regs_diff[16]),64);
            tracep->chgQData(oldp+560,(vlSelf->SimTop__DOT__regs_diff[17]),64);
            tracep->chgQData(oldp+562,(vlSelf->SimTop__DOT__regs_diff[18]),64);
            tracep->chgQData(oldp+564,(vlSelf->SimTop__DOT__regs_diff[19]),64);
            tracep->chgQData(oldp+566,(vlSelf->SimTop__DOT__regs_diff[20]),64);
            tracep->chgQData(oldp+568,(vlSelf->SimTop__DOT__regs_diff[21]),64);
            tracep->chgQData(oldp+570,(vlSelf->SimTop__DOT__regs_diff[22]),64);
            tracep->chgQData(oldp+572,(vlSelf->SimTop__DOT__regs_diff[23]),64);
            tracep->chgQData(oldp+574,(vlSelf->SimTop__DOT__regs_diff[24]),64);
            tracep->chgQData(oldp+576,(vlSelf->SimTop__DOT__regs_diff[25]),64);
            tracep->chgQData(oldp+578,(vlSelf->SimTop__DOT__regs_diff[26]),64);
            tracep->chgQData(oldp+580,(vlSelf->SimTop__DOT__regs_diff[27]),64);
            tracep->chgQData(oldp+582,(vlSelf->SimTop__DOT__regs_diff[28]),64);
            tracep->chgQData(oldp+584,(vlSelf->SimTop__DOT__regs_diff[29]),64);
            tracep->chgQData(oldp+586,(vlSelf->SimTop__DOT__regs_diff[30]),64);
            tracep->chgQData(oldp+588,(vlSelf->SimTop__DOT__regs_diff[31]),64);
            tracep->chgQData(oldp+590,(vlSelf->SimTop__DOT__regs_diff
                                       [0U]),64);
            tracep->chgQData(oldp+592,(vlSelf->SimTop__DOT__regs_diff
                                       [1U]),64);
            tracep->chgQData(oldp+594,(vlSelf->SimTop__DOT__regs_diff
                                       [2U]),64);
            tracep->chgQData(oldp+596,(vlSelf->SimTop__DOT__regs_diff
                                       [3U]),64);
            tracep->chgQData(oldp+598,(vlSelf->SimTop__DOT__regs_diff
                                       [4U]),64);
            tracep->chgQData(oldp+600,(vlSelf->SimTop__DOT__regs_diff
                                       [5U]),64);
            tracep->chgQData(oldp+602,(vlSelf->SimTop__DOT__regs_diff
                                       [6U]),64);
            tracep->chgQData(oldp+604,(vlSelf->SimTop__DOT__regs_diff
                                       [7U]),64);
            tracep->chgQData(oldp+606,(vlSelf->SimTop__DOT__regs_diff
                                       [8U]),64);
            tracep->chgQData(oldp+608,(vlSelf->SimTop__DOT__regs_diff
                                       [9U]),64);
            tracep->chgQData(oldp+610,(vlSelf->SimTop__DOT__regs_diff
                                       [0xaU]),64);
            tracep->chgQData(oldp+612,(vlSelf->SimTop__DOT__regs_diff
                                       [0xbU]),64);
            tracep->chgQData(oldp+614,(vlSelf->SimTop__DOT__regs_diff
                                       [0xcU]),64);
            tracep->chgQData(oldp+616,(vlSelf->SimTop__DOT__regs_diff
                                       [0xdU]),64);
            tracep->chgQData(oldp+618,(vlSelf->SimTop__DOT__regs_diff
                                       [0xeU]),64);
            tracep->chgQData(oldp+620,(vlSelf->SimTop__DOT__regs_diff
                                       [0xfU]),64);
            tracep->chgQData(oldp+622,(vlSelf->SimTop__DOT__regs_diff
                                       [0x10U]),64);
            tracep->chgQData(oldp+624,(vlSelf->SimTop__DOT__regs_diff
                                       [0x11U]),64);
            tracep->chgQData(oldp+626,(vlSelf->SimTop__DOT__regs_diff
                                       [0x12U]),64);
            tracep->chgQData(oldp+628,(vlSelf->SimTop__DOT__regs_diff
                                       [0x13U]),64);
            tracep->chgQData(oldp+630,(vlSelf->SimTop__DOT__regs_diff
                                       [0x14U]),64);
            tracep->chgQData(oldp+632,(vlSelf->SimTop__DOT__regs_diff
                                       [0x15U]),64);
            tracep->chgQData(oldp+634,(vlSelf->SimTop__DOT__regs_diff
                                       [0x16U]),64);
            tracep->chgQData(oldp+636,(vlSelf->SimTop__DOT__regs_diff
                                       [0x17U]),64);
            tracep->chgQData(oldp+638,(vlSelf->SimTop__DOT__regs_diff
                                       [0x18U]),64);
            tracep->chgQData(oldp+640,(vlSelf->SimTop__DOT__regs_diff
                                       [0x19U]),64);
            tracep->chgQData(oldp+642,(vlSelf->SimTop__DOT__regs_diff
                                       [0x1aU]),64);
            tracep->chgQData(oldp+644,(vlSelf->SimTop__DOT__regs_diff
                                       [0x1bU]),64);
            tracep->chgQData(oldp+646,(vlSelf->SimTop__DOT__regs_diff
                                       [0x1cU]),64);
            tracep->chgQData(oldp+648,(vlSelf->SimTop__DOT__regs_diff
                                       [0x1dU]),64);
            tracep->chgQData(oldp+650,(vlSelf->SimTop__DOT__regs_diff
                                       [0x1eU]),64);
            tracep->chgQData(oldp+652,(vlSelf->SimTop__DOT__regs_diff
                                       [0x1fU]),64);
            tracep->chgCData(oldp+654,((7U & (IData)(vlSelf->SimTop__DOT__trap_code))),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+655,(vlSelf->SimTop__DOT__ds_allowin));
            tracep->chgQData(oldp+656,(vlSelf->SimTop__DOT__IF__DOT__nextpc),64);
            tracep->chgBit(oldp+658,(vlSelf->SimTop__DOT__IF_ID_write));
            tracep->chgBit(oldp+659,(vlSelf->SimTop__DOT__IF__DOT__fs_allowin));
            tracep->chgQData(oldp+660,(vlSelf->SimTop__DOT__inst_ram__DOT__inst_ext),64);
            tracep->chgQData(oldp+662,(((vlSelf->SimTop__DOT__IF__DOT__nextpc 
                                         - 0x80000000ULL) 
                                        >> 3U)),64);
            tracep->chgQData(oldp+664,(vlSelf->SimTop__DOT__ID__DOT__imme_o),64);
            tracep->chgCData(oldp+666,((3U & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                              >> 0xaU))),2);
            tracep->chgCData(oldp+667,((3U & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                              >> 8U))),2);
            tracep->chgCData(oldp+668,((0x1fU & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                                 >> 0xcU))),5);
            tracep->chgCData(oldp+669,((3U & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                              >> 5U))),2);
            tracep->chgBit(oldp+670,((1U & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                            >> 7U))));
            tracep->chgBit(oldp+671,((1U & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                            >> 2U))));
            tracep->chgBit(oldp+672,((1U & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                            >> 1U))));
            tracep->chgCData(oldp+673,((3U & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                              >> 3U))),2);
            tracep->chgBit(oldp+674,((1U & vlSelf->SimTop__DOT__ID__DOT__con_signal)));
            tracep->chgIData(oldp+675,(vlSelf->SimTop__DOT__ID__DOT__con_signal),20);
        }
        tracep->chgBit(oldp+676,(vlSelf->clock));
        tracep->chgBit(oldp+677,(vlSelf->reset));
        tracep->chgQData(oldp+678,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+680,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+682,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+684,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+685,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+686,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+687,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+688,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+689,(vlSelf->io_uart_in_ch),8);
        tracep->chgIData(oldp+690,(vlSelf->ws_inst),32);
        tracep->chgQData(oldp+691,(vlSelf->pc_out),64);
        tracep->chgBit(oldp+693,(((~ (IData)(vlSelf->reset)) 
                                  & ((vlSelf->SimTop__DOT__es_to_ms_bus[2U] 
                                      >> 0xbU) & ((
                                                   (0x1fU 
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
                                                         >> 0x14U))))))));
        tracep->chgBit(oldp+694,((1U & (~ (IData)(vlSelf->reset)))));
        tracep->chgQData(oldp+695,(((((- (QData)((IData)(
                                                         (1U 
                                                          == 
                                                          (3U 
                                                           & vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U]))))) 
                                      & (4ULL + vlSelf->pc_out)) 
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
                                                            vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[4U])))))),64);
    }
}

void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    }
}
