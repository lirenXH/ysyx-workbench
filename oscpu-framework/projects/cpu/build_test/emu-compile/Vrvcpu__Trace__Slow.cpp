// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrvcpu__Syms.h"


void Vrvcpu___024root__traceInitSub0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vrvcpu___024root__traceInitTop(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vrvcpu___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vrvcpu___024root__traceInitSub0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+71,"clk", false,-1);
        tracep->declBit(c+72,"rst", false,-1);
        tracep->declBus(c+73,"inst", false,-1, 31,0);
        tracep->declQuad(c+74,"inst_addr", false,-1, 63,0);
        tracep->declBit(c+76,"inst_ena", false,-1);
        tracep->declBit(c+71,"rvcpu clk", false,-1);
        tracep->declBit(c+72,"rvcpu rst", false,-1);
        tracep->declBus(c+73,"rvcpu inst", false,-1, 31,0);
        tracep->declQuad(c+74,"rvcpu inst_addr", false,-1, 63,0);
        tracep->declBit(c+76,"rvcpu inst_ena", false,-1);
        tracep->declBit(c+77,"rvcpu rs1_r_ena", false,-1);
        tracep->declBus(c+78,"rvcpu rs1_r_addr", false,-1, 4,0);
        tracep->declBit(c+92,"rvcpu rs2_r_ena", false,-1);
        tracep->declBus(c+93,"rvcpu rs2_r_addr", false,-1, 4,0);
        tracep->declBit(c+77,"rvcpu rd_w_ena", false,-1);
        tracep->declBus(c+1,"rvcpu rd_w_addr", false,-1, 4,0);
        tracep->declBus(c+2,"rvcpu inst_type", false,-1, 4,0);
        tracep->declBus(c+3,"rvcpu inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+79,"rvcpu op1", false,-1, 63,0);
        tracep->declQuad(c+81,"rvcpu op2", false,-1, 63,0);
        tracep->declQuad(c+83,"rvcpu r_data1", false,-1, 63,0);
        tracep->declQuad(c+94,"rvcpu r_data2", false,-1, 63,0);
        tracep->declBus(c+2,"rvcpu inst_type_o", false,-1, 4,0);
        tracep->declQuad(c+85,"rvcpu rd_data", false,-1, 63,0);
        tracep->declBit(c+71,"rvcpu If_stage clk", false,-1);
        tracep->declBit(c+72,"rvcpu If_stage rst", false,-1);
        tracep->declQuad(c+74,"rvcpu If_stage inst_addr", false,-1, 63,0);
        tracep->declBit(c+76,"rvcpu If_stage inst_ena", false,-1);
        tracep->declQuad(c+5,"rvcpu If_stage pc", false,-1, 63,0);
        tracep->declBit(c+72,"rvcpu Id_stage rst", false,-1);
        tracep->declBus(c+73,"rvcpu Id_stage inst", false,-1, 31,0);
        tracep->declQuad(c+83,"rvcpu Id_stage rs1_data", false,-1, 63,0);
        tracep->declQuad(c+94,"rvcpu Id_stage rs2_data", false,-1, 63,0);
        tracep->declBit(c+77,"rvcpu Id_stage rs1_r_ena", false,-1);
        tracep->declBus(c+78,"rvcpu Id_stage rs1_r_addr", false,-1, 4,0);
        tracep->declBit(c+92,"rvcpu Id_stage rs2_r_ena", false,-1);
        tracep->declBus(c+93,"rvcpu Id_stage rs2_r_addr", false,-1, 4,0);
        tracep->declBit(c+77,"rvcpu Id_stage rd_w_ena", false,-1);
        tracep->declBus(c+1,"rvcpu Id_stage rd_w_addr", false,-1, 4,0);
        tracep->declBus(c+2,"rvcpu Id_stage inst_type", false,-1, 4,0);
        tracep->declBus(c+3,"rvcpu Id_stage inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+79,"rvcpu Id_stage op1", false,-1, 63,0);
        tracep->declQuad(c+81,"rvcpu Id_stage op2", false,-1, 63,0);
        tracep->declBus(c+87,"rvcpu Id_stage opcode", false,-1, 6,0);
        tracep->declBus(c+88,"rvcpu Id_stage rd", false,-1, 4,0);
        tracep->declBus(c+89,"rvcpu Id_stage func3", false,-1, 2,0);
        tracep->declBus(c+90,"rvcpu Id_stage rs1", false,-1, 4,0);
        tracep->declBus(c+91,"rvcpu Id_stage imm", false,-1, 11,0);
        tracep->declBit(c+4,"rvcpu Id_stage inst_addi", false,-1);
        tracep->declBit(c+72,"rvcpu Exe_stage rst", false,-1);
        tracep->declBus(c+2,"rvcpu Exe_stage inst_type_i", false,-1, 4,0);
        tracep->declBus(c+3,"rvcpu Exe_stage inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+79,"rvcpu Exe_stage op1", false,-1, 63,0);
        tracep->declQuad(c+81,"rvcpu Exe_stage op2", false,-1, 63,0);
        tracep->declBus(c+2,"rvcpu Exe_stage inst_type_o", false,-1, 4,0);
        tracep->declQuad(c+85,"rvcpu Exe_stage rd_data", false,-1, 63,0);
        tracep->declBit(c+71,"rvcpu Regfile clk", false,-1);
        tracep->declBit(c+72,"rvcpu Regfile rst", false,-1);
        tracep->declBus(c+1,"rvcpu Regfile w_addr", false,-1, 4,0);
        tracep->declQuad(c+85,"rvcpu Regfile w_data", false,-1, 63,0);
        tracep->declBit(c+77,"rvcpu Regfile w_ena", false,-1);
        tracep->declBus(c+78,"rvcpu Regfile r_addr1", false,-1, 4,0);
        tracep->declQuad(c+83,"rvcpu Regfile r_data1", false,-1, 63,0);
        tracep->declBit(c+77,"rvcpu Regfile r_ena1", false,-1);
        tracep->declBus(c+93,"rvcpu Regfile r_addr2", false,-1, 4,0);
        tracep->declQuad(c+94,"rvcpu Regfile r_data2", false,-1, 63,0);
        tracep->declBit(c+92,"rvcpu Regfile r_ena2", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+7+i*2,"rvcpu Regfile regs", true,(i+0), 63,0);}}
    }
}

void Vrvcpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vrvcpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vrvcpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vrvcpu___024root__traceRegister(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vrvcpu___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vrvcpu___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vrvcpu___024root__traceCleanup, vlSelf);
    }
}

void Vrvcpu___024root__traceFullSub0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vrvcpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vrvcpu___024root* const __restrict vlSelf = static_cast<Vrvcpu___024root*>(voidSelf);
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vrvcpu___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vrvcpu___024root__traceFullSub0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->rvcpu__DOT__rd_w_addr),5);
        tracep->fullCData(oldp+2,(vlSelf->rvcpu__DOT__inst_type),5);
        tracep->fullCData(oldp+3,(vlSelf->rvcpu__DOT__inst_opcode),8);
        tracep->fullBit(oldp+4,(vlSelf->rvcpu__DOT__Id_stage__DOT__inst_addi));
        tracep->fullQData(oldp+5,(vlSelf->rvcpu__DOT__If_stage__DOT__pc),64);
        tracep->fullQData(oldp+7,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[0]),64);
        tracep->fullQData(oldp+9,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[1]),64);
        tracep->fullQData(oldp+11,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[2]),64);
        tracep->fullQData(oldp+13,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[3]),64);
        tracep->fullQData(oldp+15,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[4]),64);
        tracep->fullQData(oldp+17,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[5]),64);
        tracep->fullQData(oldp+19,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[6]),64);
        tracep->fullQData(oldp+21,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[7]),64);
        tracep->fullQData(oldp+23,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[8]),64);
        tracep->fullQData(oldp+25,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[9]),64);
        tracep->fullQData(oldp+27,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[10]),64);
        tracep->fullQData(oldp+29,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[11]),64);
        tracep->fullQData(oldp+31,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[12]),64);
        tracep->fullQData(oldp+33,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[13]),64);
        tracep->fullQData(oldp+35,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[14]),64);
        tracep->fullQData(oldp+37,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[15]),64);
        tracep->fullQData(oldp+39,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[16]),64);
        tracep->fullQData(oldp+41,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[17]),64);
        tracep->fullQData(oldp+43,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[18]),64);
        tracep->fullQData(oldp+45,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[19]),64);
        tracep->fullQData(oldp+47,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[20]),64);
        tracep->fullQData(oldp+49,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[21]),64);
        tracep->fullQData(oldp+51,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[22]),64);
        tracep->fullQData(oldp+53,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[23]),64);
        tracep->fullQData(oldp+55,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[24]),64);
        tracep->fullQData(oldp+57,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[25]),64);
        tracep->fullQData(oldp+59,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[26]),64);
        tracep->fullQData(oldp+61,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[27]),64);
        tracep->fullQData(oldp+63,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[28]),64);
        tracep->fullQData(oldp+65,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[29]),64);
        tracep->fullQData(oldp+67,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[30]),64);
        tracep->fullQData(oldp+69,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[31]),64);
        tracep->fullBit(oldp+71,(vlSelf->clk));
        tracep->fullBit(oldp+72,(vlSelf->rst));
        tracep->fullIData(oldp+73,(vlSelf->inst),32);
        tracep->fullQData(oldp+74,(vlSelf->inst_addr),64);
        tracep->fullBit(oldp+76,(vlSelf->inst_ena));
        tracep->fullBit(oldp+77,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & ((IData)(vlSelf->rvcpu__DOT__inst_type) 
                                                 >> 4U)))));
        tracep->fullCData(oldp+78,(((IData)(vlSelf->rst)
                                     ? 0U : ((0x10U 
                                              & (IData)(vlSelf->rvcpu__DOT__inst_type))
                                              ? (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 0xfU))
                                              : 0U))),5);
        tracep->fullQData(oldp+79,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+81,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0x10U 
                                                & (IData)(vlSelf->rvcpu__DOT__inst_type))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                                : 0ULL))),64);
        tracep->fullQData(oldp+83,(((IData)(vlSelf->rst)
                                     ? 0ULL : (((IData)(vlSelf->rst)
                                                 ? 0U
                                                 : 
                                                (1U 
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
        tracep->fullQData(oldp+85,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0x11U 
                                                == (IData)(vlSelf->rvcpu__DOT__inst_opcode))
                                                ? (
                                                   ((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+87,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+88,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+89,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+90,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullSData(oldp+91,((vlSelf->inst >> 0x14U)),12);
        tracep->fullBit(oldp+92,(0U));
        tracep->fullCData(oldp+93,(0U),5);
        tracep->fullQData(oldp+94,(0ULL),64);
    }
}
