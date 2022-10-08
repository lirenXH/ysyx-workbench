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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->SimTop__DOT__pc),64);
            tracep->chgIData(oldp+2,(vlSelf->SimTop__DOT__inst),32);
            tracep->chgBit(oldp+3,(vlSelf->SimTop__DOT__inst_valid));
            tracep->chgQData(oldp+4,(vlSelf->SimTop__DOT__If_stage__DOT__rdata),64);
            tracep->chgQData(oldp+6,(((vlSelf->SimTop__DOT__pc 
                                       - 0x80000000ULL) 
                                      >> 3U)),64);
            tracep->chgBit(oldp+8,(vlSelf->SimTop__DOT__Id_stage__DOT__inst_addi));
            tracep->chgCData(oldp+9,((0x7fU & vlSelf->SimTop__DOT__inst)),7);
            tracep->chgCData(oldp+10,((0x1fU & (vlSelf->SimTop__DOT__inst 
                                                >> 7U))),5);
            tracep->chgCData(oldp+11,((7U & (vlSelf->SimTop__DOT__inst 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+12,((0x1fU & (vlSelf->SimTop__DOT__inst 
                                                >> 0xfU))),5);
            tracep->chgSData(oldp+13,((vlSelf->SimTop__DOT__inst 
                                       >> 0x14U)),12);
            tracep->chgQData(oldp+14,(vlSelf->SimTop__DOT__Regfile__DOT__regs[0]),64);
            tracep->chgQData(oldp+16,(vlSelf->SimTop__DOT__Regfile__DOT__regs[1]),64);
            tracep->chgQData(oldp+18,(vlSelf->SimTop__DOT__Regfile__DOT__regs[2]),64);
            tracep->chgQData(oldp+20,(vlSelf->SimTop__DOT__Regfile__DOT__regs[3]),64);
            tracep->chgQData(oldp+22,(vlSelf->SimTop__DOT__Regfile__DOT__regs[4]),64);
            tracep->chgQData(oldp+24,(vlSelf->SimTop__DOT__Regfile__DOT__regs[5]),64);
            tracep->chgQData(oldp+26,(vlSelf->SimTop__DOT__Regfile__DOT__regs[6]),64);
            tracep->chgQData(oldp+28,(vlSelf->SimTop__DOT__Regfile__DOT__regs[7]),64);
            tracep->chgQData(oldp+30,(vlSelf->SimTop__DOT__Regfile__DOT__regs[8]),64);
            tracep->chgQData(oldp+32,(vlSelf->SimTop__DOT__Regfile__DOT__regs[9]),64);
            tracep->chgQData(oldp+34,(vlSelf->SimTop__DOT__Regfile__DOT__regs[10]),64);
            tracep->chgQData(oldp+36,(vlSelf->SimTop__DOT__Regfile__DOT__regs[11]),64);
            tracep->chgQData(oldp+38,(vlSelf->SimTop__DOT__Regfile__DOT__regs[12]),64);
            tracep->chgQData(oldp+40,(vlSelf->SimTop__DOT__Regfile__DOT__regs[13]),64);
            tracep->chgQData(oldp+42,(vlSelf->SimTop__DOT__Regfile__DOT__regs[14]),64);
            tracep->chgQData(oldp+44,(vlSelf->SimTop__DOT__Regfile__DOT__regs[15]),64);
            tracep->chgQData(oldp+46,(vlSelf->SimTop__DOT__Regfile__DOT__regs[16]),64);
            tracep->chgQData(oldp+48,(vlSelf->SimTop__DOT__Regfile__DOT__regs[17]),64);
            tracep->chgQData(oldp+50,(vlSelf->SimTop__DOT__Regfile__DOT__regs[18]),64);
            tracep->chgQData(oldp+52,(vlSelf->SimTop__DOT__Regfile__DOT__regs[19]),64);
            tracep->chgQData(oldp+54,(vlSelf->SimTop__DOT__Regfile__DOT__regs[20]),64);
            tracep->chgQData(oldp+56,(vlSelf->SimTop__DOT__Regfile__DOT__regs[21]),64);
            tracep->chgQData(oldp+58,(vlSelf->SimTop__DOT__Regfile__DOT__regs[22]),64);
            tracep->chgQData(oldp+60,(vlSelf->SimTop__DOT__Regfile__DOT__regs[23]),64);
            tracep->chgQData(oldp+62,(vlSelf->SimTop__DOT__Regfile__DOT__regs[24]),64);
            tracep->chgQData(oldp+64,(vlSelf->SimTop__DOT__Regfile__DOT__regs[25]),64);
            tracep->chgQData(oldp+66,(vlSelf->SimTop__DOT__Regfile__DOT__regs[26]),64);
            tracep->chgQData(oldp+68,(vlSelf->SimTop__DOT__Regfile__DOT__regs[27]),64);
            tracep->chgQData(oldp+70,(vlSelf->SimTop__DOT__Regfile__DOT__regs[28]),64);
            tracep->chgQData(oldp+72,(vlSelf->SimTop__DOT__Regfile__DOT__regs[29]),64);
            tracep->chgQData(oldp+74,(vlSelf->SimTop__DOT__Regfile__DOT__regs[30]),64);
            tracep->chgQData(oldp+76,(vlSelf->SimTop__DOT__Regfile__DOT__regs[31]),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgQData(oldp+78,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[0]),64);
            tracep->chgQData(oldp+80,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[1]),64);
            tracep->chgQData(oldp+82,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[2]),64);
            tracep->chgQData(oldp+84,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[3]),64);
            tracep->chgQData(oldp+86,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[4]),64);
            tracep->chgQData(oldp+88,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[5]),64);
            tracep->chgQData(oldp+90,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[6]),64);
            tracep->chgQData(oldp+92,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[7]),64);
            tracep->chgQData(oldp+94,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[8]),64);
            tracep->chgQData(oldp+96,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[9]),64);
            tracep->chgQData(oldp+98,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[10]),64);
            tracep->chgQData(oldp+100,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[11]),64);
            tracep->chgQData(oldp+102,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[12]),64);
            tracep->chgQData(oldp+104,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[13]),64);
            tracep->chgQData(oldp+106,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[14]),64);
            tracep->chgQData(oldp+108,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[15]),64);
            tracep->chgQData(oldp+110,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[16]),64);
            tracep->chgQData(oldp+112,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[17]),64);
            tracep->chgQData(oldp+114,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[18]),64);
            tracep->chgQData(oldp+116,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[19]),64);
            tracep->chgQData(oldp+118,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[20]),64);
            tracep->chgQData(oldp+120,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[21]),64);
            tracep->chgQData(oldp+122,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[22]),64);
            tracep->chgQData(oldp+124,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[23]),64);
            tracep->chgQData(oldp+126,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[24]),64);
            tracep->chgQData(oldp+128,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[25]),64);
            tracep->chgQData(oldp+130,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[26]),64);
            tracep->chgQData(oldp+132,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[27]),64);
            tracep->chgQData(oldp+134,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[28]),64);
            tracep->chgQData(oldp+136,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[29]),64);
            tracep->chgQData(oldp+138,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[30]),64);
            tracep->chgQData(oldp+140,(vlSelf->SimTop__DOT____Vcellout__Regfile__regs_o[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+142,(vlSelf->SimTop__DOT__cmt_wen));
            tracep->chgCData(oldp+143,(vlSelf->SimTop__DOT__cmt_wdest),8);
            tracep->chgQData(oldp+144,(vlSelf->SimTop__DOT__cmt_wdata),64);
            tracep->chgQData(oldp+146,(vlSelf->SimTop__DOT__cmt_pc),64);
            tracep->chgIData(oldp+148,(vlSelf->SimTop__DOT__cmt_inst),32);
            tracep->chgBit(oldp+149,(vlSelf->SimTop__DOT__cmt_valid));
            tracep->chgBit(oldp+150,(vlSelf->SimTop__DOT__trap));
            tracep->chgCData(oldp+151,(vlSelf->SimTop__DOT__trap_code),8);
            tracep->chgQData(oldp+152,(vlSelf->SimTop__DOT__cycleCnt),64);
            tracep->chgQData(oldp+154,(vlSelf->SimTop__DOT__instrCnt),64);
            tracep->chgQData(oldp+156,(vlSelf->SimTop__DOT__regs_diff[0]),64);
            tracep->chgQData(oldp+158,(vlSelf->SimTop__DOT__regs_diff[1]),64);
            tracep->chgQData(oldp+160,(vlSelf->SimTop__DOT__regs_diff[2]),64);
            tracep->chgQData(oldp+162,(vlSelf->SimTop__DOT__regs_diff[3]),64);
            tracep->chgQData(oldp+164,(vlSelf->SimTop__DOT__regs_diff[4]),64);
            tracep->chgQData(oldp+166,(vlSelf->SimTop__DOT__regs_diff[5]),64);
            tracep->chgQData(oldp+168,(vlSelf->SimTop__DOT__regs_diff[6]),64);
            tracep->chgQData(oldp+170,(vlSelf->SimTop__DOT__regs_diff[7]),64);
            tracep->chgQData(oldp+172,(vlSelf->SimTop__DOT__regs_diff[8]),64);
            tracep->chgQData(oldp+174,(vlSelf->SimTop__DOT__regs_diff[9]),64);
            tracep->chgQData(oldp+176,(vlSelf->SimTop__DOT__regs_diff[10]),64);
            tracep->chgQData(oldp+178,(vlSelf->SimTop__DOT__regs_diff[11]),64);
            tracep->chgQData(oldp+180,(vlSelf->SimTop__DOT__regs_diff[12]),64);
            tracep->chgQData(oldp+182,(vlSelf->SimTop__DOT__regs_diff[13]),64);
            tracep->chgQData(oldp+184,(vlSelf->SimTop__DOT__regs_diff[14]),64);
            tracep->chgQData(oldp+186,(vlSelf->SimTop__DOT__regs_diff[15]),64);
            tracep->chgQData(oldp+188,(vlSelf->SimTop__DOT__regs_diff[16]),64);
            tracep->chgQData(oldp+190,(vlSelf->SimTop__DOT__regs_diff[17]),64);
            tracep->chgQData(oldp+192,(vlSelf->SimTop__DOT__regs_diff[18]),64);
            tracep->chgQData(oldp+194,(vlSelf->SimTop__DOT__regs_diff[19]),64);
            tracep->chgQData(oldp+196,(vlSelf->SimTop__DOT__regs_diff[20]),64);
            tracep->chgQData(oldp+198,(vlSelf->SimTop__DOT__regs_diff[21]),64);
            tracep->chgQData(oldp+200,(vlSelf->SimTop__DOT__regs_diff[22]),64);
            tracep->chgQData(oldp+202,(vlSelf->SimTop__DOT__regs_diff[23]),64);
            tracep->chgQData(oldp+204,(vlSelf->SimTop__DOT__regs_diff[24]),64);
            tracep->chgQData(oldp+206,(vlSelf->SimTop__DOT__regs_diff[25]),64);
            tracep->chgQData(oldp+208,(vlSelf->SimTop__DOT__regs_diff[26]),64);
            tracep->chgQData(oldp+210,(vlSelf->SimTop__DOT__regs_diff[27]),64);
            tracep->chgQData(oldp+212,(vlSelf->SimTop__DOT__regs_diff[28]),64);
            tracep->chgQData(oldp+214,(vlSelf->SimTop__DOT__regs_diff[29]),64);
            tracep->chgQData(oldp+216,(vlSelf->SimTop__DOT__regs_diff[30]),64);
            tracep->chgQData(oldp+218,(vlSelf->SimTop__DOT__regs_diff[31]),64);
            tracep->chgQData(oldp+220,(vlSelf->SimTop__DOT__regs_diff
                                       [0U]),64);
            tracep->chgQData(oldp+222,(vlSelf->SimTop__DOT__regs_diff
                                       [1U]),64);
            tracep->chgQData(oldp+224,(vlSelf->SimTop__DOT__regs_diff
                                       [2U]),64);
            tracep->chgQData(oldp+226,(vlSelf->SimTop__DOT__regs_diff
                                       [3U]),64);
            tracep->chgQData(oldp+228,(vlSelf->SimTop__DOT__regs_diff
                                       [4U]),64);
            tracep->chgQData(oldp+230,(vlSelf->SimTop__DOT__regs_diff
                                       [5U]),64);
            tracep->chgQData(oldp+232,(vlSelf->SimTop__DOT__regs_diff
                                       [6U]),64);
            tracep->chgQData(oldp+234,(vlSelf->SimTop__DOT__regs_diff
                                       [7U]),64);
            tracep->chgQData(oldp+236,(vlSelf->SimTop__DOT__regs_diff
                                       [8U]),64);
            tracep->chgQData(oldp+238,(vlSelf->SimTop__DOT__regs_diff
                                       [9U]),64);
            tracep->chgQData(oldp+240,(vlSelf->SimTop__DOT__regs_diff
                                       [0xaU]),64);
            tracep->chgQData(oldp+242,(vlSelf->SimTop__DOT__regs_diff
                                       [0xbU]),64);
            tracep->chgQData(oldp+244,(vlSelf->SimTop__DOT__regs_diff
                                       [0xcU]),64);
            tracep->chgQData(oldp+246,(vlSelf->SimTop__DOT__regs_diff
                                       [0xdU]),64);
            tracep->chgQData(oldp+248,(vlSelf->SimTop__DOT__regs_diff
                                       [0xeU]),64);
            tracep->chgQData(oldp+250,(vlSelf->SimTop__DOT__regs_diff
                                       [0xfU]),64);
            tracep->chgQData(oldp+252,(vlSelf->SimTop__DOT__regs_diff
                                       [0x10U]),64);
            tracep->chgQData(oldp+254,(vlSelf->SimTop__DOT__regs_diff
                                       [0x11U]),64);
            tracep->chgQData(oldp+256,(vlSelf->SimTop__DOT__regs_diff
                                       [0x12U]),64);
            tracep->chgQData(oldp+258,(vlSelf->SimTop__DOT__regs_diff
                                       [0x13U]),64);
            tracep->chgQData(oldp+260,(vlSelf->SimTop__DOT__regs_diff
                                       [0x14U]),64);
            tracep->chgQData(oldp+262,(vlSelf->SimTop__DOT__regs_diff
                                       [0x15U]),64);
            tracep->chgQData(oldp+264,(vlSelf->SimTop__DOT__regs_diff
                                       [0x16U]),64);
            tracep->chgQData(oldp+266,(vlSelf->SimTop__DOT__regs_diff
                                       [0x17U]),64);
            tracep->chgQData(oldp+268,(vlSelf->SimTop__DOT__regs_diff
                                       [0x18U]),64);
            tracep->chgQData(oldp+270,(vlSelf->SimTop__DOT__regs_diff
                                       [0x19U]),64);
            tracep->chgQData(oldp+272,(vlSelf->SimTop__DOT__regs_diff
                                       [0x1aU]),64);
            tracep->chgQData(oldp+274,(vlSelf->SimTop__DOT__regs_diff
                                       [0x1bU]),64);
            tracep->chgQData(oldp+276,(vlSelf->SimTop__DOT__regs_diff
                                       [0x1cU]),64);
            tracep->chgQData(oldp+278,(vlSelf->SimTop__DOT__regs_diff
                                       [0x1dU]),64);
            tracep->chgQData(oldp+280,(vlSelf->SimTop__DOT__regs_diff
                                       [0x1eU]),64);
            tracep->chgQData(oldp+282,(vlSelf->SimTop__DOT__regs_diff
                                       [0x1fU]),64);
            tracep->chgCData(oldp+284,((7U & (IData)(vlSelf->SimTop__DOT__trap_code))),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+285,(vlSelf->SimTop__DOT__rd_w_ena));
            tracep->chgCData(oldp+286,(vlSelf->SimTop__DOT__rd_w_addr),5);
            tracep->chgCData(oldp+287,(vlSelf->SimTop__DOT__inst_type),5);
            tracep->chgCData(oldp+288,(vlSelf->SimTop__DOT__inst_opcode),8);
            tracep->chgQData(oldp+289,(vlSelf->SimTop__DOT__regs[0]),64);
            tracep->chgQData(oldp+291,(vlSelf->SimTop__DOT__regs[1]),64);
            tracep->chgQData(oldp+293,(vlSelf->SimTop__DOT__regs[2]),64);
            tracep->chgQData(oldp+295,(vlSelf->SimTop__DOT__regs[3]),64);
            tracep->chgQData(oldp+297,(vlSelf->SimTop__DOT__regs[4]),64);
            tracep->chgQData(oldp+299,(vlSelf->SimTop__DOT__regs[5]),64);
            tracep->chgQData(oldp+301,(vlSelf->SimTop__DOT__regs[6]),64);
            tracep->chgQData(oldp+303,(vlSelf->SimTop__DOT__regs[7]),64);
            tracep->chgQData(oldp+305,(vlSelf->SimTop__DOT__regs[8]),64);
            tracep->chgQData(oldp+307,(vlSelf->SimTop__DOT__regs[9]),64);
            tracep->chgQData(oldp+309,(vlSelf->SimTop__DOT__regs[10]),64);
            tracep->chgQData(oldp+311,(vlSelf->SimTop__DOT__regs[11]),64);
            tracep->chgQData(oldp+313,(vlSelf->SimTop__DOT__regs[12]),64);
            tracep->chgQData(oldp+315,(vlSelf->SimTop__DOT__regs[13]),64);
            tracep->chgQData(oldp+317,(vlSelf->SimTop__DOT__regs[14]),64);
            tracep->chgQData(oldp+319,(vlSelf->SimTop__DOT__regs[15]),64);
            tracep->chgQData(oldp+321,(vlSelf->SimTop__DOT__regs[16]),64);
            tracep->chgQData(oldp+323,(vlSelf->SimTop__DOT__regs[17]),64);
            tracep->chgQData(oldp+325,(vlSelf->SimTop__DOT__regs[18]),64);
            tracep->chgQData(oldp+327,(vlSelf->SimTop__DOT__regs[19]),64);
            tracep->chgQData(oldp+329,(vlSelf->SimTop__DOT__regs[20]),64);
            tracep->chgQData(oldp+331,(vlSelf->SimTop__DOT__regs[21]),64);
            tracep->chgQData(oldp+333,(vlSelf->SimTop__DOT__regs[22]),64);
            tracep->chgQData(oldp+335,(vlSelf->SimTop__DOT__regs[23]),64);
            tracep->chgQData(oldp+337,(vlSelf->SimTop__DOT__regs[24]),64);
            tracep->chgQData(oldp+339,(vlSelf->SimTop__DOT__regs[25]),64);
            tracep->chgQData(oldp+341,(vlSelf->SimTop__DOT__regs[26]),64);
            tracep->chgQData(oldp+343,(vlSelf->SimTop__DOT__regs[27]),64);
            tracep->chgQData(oldp+345,(vlSelf->SimTop__DOT__regs[28]),64);
            tracep->chgQData(oldp+347,(vlSelf->SimTop__DOT__regs[29]),64);
            tracep->chgQData(oldp+349,(vlSelf->SimTop__DOT__regs[30]),64);
            tracep->chgQData(oldp+351,(vlSelf->SimTop__DOT__regs[31]),64);
            tracep->chgQData(oldp+353,(vlSelf->SimTop__DOT__rd_data),64);
        }
        tracep->chgBit(oldp+355,(vlSelf->clock));
        tracep->chgBit(oldp+356,(vlSelf->reset));
        tracep->chgQData(oldp+357,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+359,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+361,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+363,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+364,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+365,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+366,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+367,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+368,(vlSelf->io_uart_in_ch),8);
        tracep->chgBit(oldp+369,(((IData)(vlSelf->reset)
                                   ? 0U : (1U & ((IData)(vlSelf->SimTop__DOT__inst_type) 
                                                 >> 4U)))));
        tracep->chgCData(oldp+370,(((IData)(vlSelf->reset)
                                     ? 0U : ((0x10U 
                                              & (IData)(vlSelf->SimTop__DOT__inst_type))
                                              ? (0x1fU 
                                                 & (vlSelf->SimTop__DOT__inst 
                                                    >> 0xfU))
                                              : 0U))),5);
        tracep->chgQData(oldp+371,(((IData)(vlSelf->reset)
                                     ? 0ULL : ((0x10U 
                                                & (IData)(vlSelf->SimTop__DOT__inst_type))
                                                ? ((IData)(vlSelf->reset)
                                                    ? 0ULL
                                                    : 
                                                   (((IData)(vlSelf->reset)
                                                      ? 0U
                                                      : 
                                                     (1U 
                                                      & ((IData)(vlSelf->SimTop__DOT__inst_type) 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->SimTop__DOT__Regfile__DOT__regs
                                                    [
                                                    ((IData)(vlSelf->reset)
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->SimTop__DOT__inst_type))
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->SimTop__DOT__inst 
                                                          >> 0xfU))
                                                       : 0U))]
                                                     : 0ULL))
                                                : 0ULL))),64);
        tracep->chgQData(oldp+373,(((IData)(vlSelf->reset)
                                     ? 0ULL : ((0x10U 
                                                & (IData)(vlSelf->SimTop__DOT__inst_type))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->SimTop__DOT__inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->SimTop__DOT__inst 
                                                                      >> 0x14U))))
                                                : 0ULL))),64);
        tracep->chgQData(oldp+375,(((IData)(vlSelf->reset)
                                     ? 0ULL : (((IData)(vlSelf->reset)
                                                 ? 0U
                                                 : 
                                                (1U 
                                                 & ((IData)(vlSelf->SimTop__DOT__inst_type) 
                                                    >> 4U)))
                                                ? vlSelf->SimTop__DOT__Regfile__DOT__regs
                                               [((IData)(vlSelf->reset)
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->SimTop__DOT__inst_type))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->SimTop__DOT__inst 
                                                      >> 0xfU))
                                                   : 0U))]
                                                : 0ULL))),64);
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
