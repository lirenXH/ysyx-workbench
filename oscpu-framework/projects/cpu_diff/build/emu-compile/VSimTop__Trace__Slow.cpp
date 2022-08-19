// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceInitTop(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+679,"clock", false,-1);
        tracep->declBit(c+680,"reset", false,-1);
        tracep->declQuad(c+681,"io_logCtrl_log_begin", false,-1, 63,0);
        tracep->declQuad(c+683,"io_logCtrl_log_end", false,-1, 63,0);
        tracep->declQuad(c+685,"io_logCtrl_log_level", false,-1, 63,0);
        tracep->declBit(c+687,"io_perfInfo_clean", false,-1);
        tracep->declBit(c+688,"io_perfInfo_dump", false,-1);
        tracep->declBit(c+689,"io_uart_out_valid", false,-1);
        tracep->declBus(c+690,"io_uart_out_ch", false,-1, 7,0);
        tracep->declBit(c+691,"io_uart_in_valid", false,-1);
        tracep->declBus(c+692,"io_uart_in_ch", false,-1, 7,0);
        tracep->declBus(c+693,"ws_inst", false,-1, 31,0);
        tracep->declQuad(c+694,"pc_out", false,-1, 63,0);
        tracep->declBit(c+679,"SimTop clock", false,-1);
        tracep->declBit(c+680,"SimTop reset", false,-1);
        tracep->declQuad(c+681,"SimTop io_logCtrl_log_begin", false,-1, 63,0);
        tracep->declQuad(c+683,"SimTop io_logCtrl_log_end", false,-1, 63,0);
        tracep->declQuad(c+685,"SimTop io_logCtrl_log_level", false,-1, 63,0);
        tracep->declBit(c+687,"SimTop io_perfInfo_clean", false,-1);
        tracep->declBit(c+688,"SimTop io_perfInfo_dump", false,-1);
        tracep->declBit(c+689,"SimTop io_uart_out_valid", false,-1);
        tracep->declBus(c+690,"SimTop io_uart_out_ch", false,-1, 7,0);
        tracep->declBit(c+691,"SimTop io_uart_in_valid", false,-1);
        tracep->declBus(c+692,"SimTop io_uart_in_ch", false,-1, 7,0);
        tracep->declBus(c+693,"SimTop ws_inst", false,-1, 31,0);
        tracep->declQuad(c+694,"SimTop pc_out", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+2+i*2,"SimTop regs_ds_o", true,(i+0), 63,0);}}
        tracep->declBit(c+66,"SimTop fetched", false,-1);
        tracep->declBit(c+660,"SimTop ds_allowin", false,-1);
        tracep->declBit(c+1,"SimTop es_allowin", false,-1);
        tracep->declBit(c+700,"SimTop ms_allowin", false,-1);
        tracep->declBit(c+700,"SimTop ws_allowin", false,-1);
        tracep->declBit(c+67,"SimTop fs_to_ds_valid", false,-1);
        tracep->declBit(c+68,"SimTop ds_to_es_valid", false,-1);
        tracep->declBit(c+69,"SimTop es_to_ms_valid", false,-1);
        tracep->declBit(c+70,"SimTop ms_to_ws_valid", false,-1);
        tracep->declArray(c+71,"SimTop bru_to_fs_bus", false,-1, 130,0);
        tracep->declArray(c+76,"SimTop fs_to_ds_bus", false,-1, 95,0);
        tracep->declArray(c+504,"SimTop ds_to_es_bus", false,-1, 322,0);
        tracep->declArray(c+79,"SimTop ws_to_rf_bus", false,-1, 69,0);
        tracep->declArray(c+82,"SimTop es_to_ms_bus", false,-1, 172,0);
        tracep->declArray(c+88,"SimTop ms_to_ws_bus", false,-1, 231,0);
        tracep->declQuad(c+96,"SimTop es_alu_result", false,-1, 63,0);
        tracep->declBit(c+661,"SimTop i_ram_en", false,-1);
        tracep->declQuad(c+98,"SimTop inst_raddr", false,-1, 63,0);
        tracep->declBus(c+100,"SimTop inst", false,-1, 31,0);
        tracep->declBus(c+101,"SimTop ForwardA", false,-1, 1,0);
        tracep->declBus(c+102,"SimTop ForwardB", false,-1, 1,0);
        tracep->declBit(c+662,"SimTop pcwrite", false,-1);
        tracep->declBit(c+663,"SimTop IF_ID_write", false,-1);
        tracep->declBit(c+696,"SimTop en_control", false,-1);
        tracep->declBus(c+103,"SimTop ds_rs1_o", false,-1, 4,0);
        tracep->declBus(c+104,"SimTop ds_rs2_o", false,-1, 4,0);
        tracep->declBus(c+105,"SimTop es_rs1", false,-1, 4,0);
        tracep->declBus(c+106,"SimTop es_rs2", false,-1, 4,0);
        tracep->declBit(c+517,"SimTop cmt_wen", false,-1);
        tracep->declBus(c+518,"SimTop cmt_wdest", false,-1, 7,0);
        tracep->declQuad(c+519,"SimTop cmt_wdata", false,-1, 63,0);
        tracep->declQuad(c+521,"SimTop cmt_pc", false,-1, 63,0);
        tracep->declBus(c+523,"SimTop cmt_inst", false,-1, 31,0);
        tracep->declBit(c+524,"SimTop cmt_valid", false,-1);
        tracep->declBit(c+525,"SimTop trap", false,-1);
        tracep->declBus(c+526,"SimTop trap_code", false,-1, 7,0);
        tracep->declQuad(c+527,"SimTop cycleCnt", false,-1, 63,0);
        tracep->declQuad(c+529,"SimTop instrCnt", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+531+i*2,"SimTop regs_diff", true,(i+0), 63,0);}}
        tracep->declBit(c+107,"SimTop inst_valid", false,-1);
        tracep->declBit(c+679,"SimTop IF clk", false,-1);
        tracep->declBit(c+680,"SimTop IF rst", false,-1);
        tracep->declBit(c+660,"SimTop IF ds_allowin", false,-1);
        tracep->declArray(c+71,"SimTop IF bru_to_fs_bus", false,-1, 130,0);
        tracep->declBit(c+662,"SimTop IF pcwrite", false,-1);
        tracep->declBit(c+67,"SimTop IF fs_to_ds_valid", false,-1);
        tracep->declArray(c+76,"SimTop IF fs_to_ds_bus", false,-1, 95,0);
        tracep->declBit(c+661,"SimTop IF i_ram_en", false,-1);
        tracep->declQuad(c+98,"SimTop IF inst_raddr", false,-1, 63,0);
        tracep->declBit(c+66,"SimTop IF fetched", false,-1);
        tracep->declBus(c+100,"SimTop IF inst", false,-1, 31,0);
        tracep->declBit(c+67,"SimTop IF fs_valid", false,-1);
        tracep->declBit(c+700,"SimTop IF fs_ready_go", false,-1);
        tracep->declBit(c+664,"SimTop IF fs_allowin", false,-1);
        tracep->declBit(c+697,"SimTop IF to_fs_valid", false,-1);
        tracep->declQuad(c+108,"SimTop IF seq_pc", false,-1, 63,0);
        tracep->declQuad(c+110,"SimTop IF wait_jump_pc", false,-1, 63,0);
        tracep->declQuad(c+98,"SimTop IF nextpc", false,-1, 63,0);
        tracep->declQuad(c+112,"SimTop IF fs_pc_final", false,-1, 63,0);
        tracep->declBit(c+114,"SimTop IF br_taken", false,-1);
        tracep->declQuad(c+115,"SimTop IF fs_bru_pc", false,-1, 63,0);
        tracep->declQuad(c+117,"SimTop IF fs_alu_result", false,-1, 63,0);
        tracep->declBus(c+119,"SimTop IF fs_pc_sel", false,-1, 1,0);
        tracep->declBus(c+120,"SimTop IF fs_inst", false,-1, 31,0);
        tracep->declQuad(c+121,"SimTop IF fs_pc", false,-1, 63,0);
        tracep->declQuad(c+98,"SimTop inst_ram inst_raddr", false,-1, 63,0);
        tracep->declBit(c+679,"SimTop inst_ram clk", false,-1);
        tracep->declBit(c+661,"SimTop inst_ram i_ram_en", false,-1);
        tracep->declBus(c+100,"SimTop inst_ram inst", false,-1, 31,0);
        tracep->declQuad(c+665,"SimTop inst_ram inst_ext", false,-1, 63,0);
        tracep->declBit(c+679,"SimTop inst_ram inst_RAMHelper clk", false,-1);
        tracep->declBit(c+661,"SimTop inst_ram inst_RAMHelper en", false,-1);
        tracep->declQuad(c+123,"SimTop inst_ram inst_RAMHelper rIdx", false,-1, 63,0);
        tracep->declQuad(c+665,"SimTop inst_ram inst_RAMHelper rdata", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop inst_ram inst_RAMHelper wIdx", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop inst_ram inst_RAMHelper wdata", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop inst_ram inst_RAMHelper wmask", false,-1, 63,0);
        tracep->declBit(c+703,"SimTop inst_ram inst_RAMHelper wen", false,-1);
        tracep->declBit(c+680,"SimTop hazard rst", false,-1);
        tracep->declBus(c+103,"SimTop hazard IF_ID_rs1", false,-1, 4,0);
        tracep->declBus(c+104,"SimTop hazard IF_ID_rs2", false,-1, 4,0);
        tracep->declBus(c+125,"SimTop hazard ID_EX_rd", false,-1, 4,0);
        tracep->declBit(c+126,"SimTop hazard ID_EX_memread", false,-1);
        tracep->declBit(c+662,"SimTop hazard pcwrite", false,-1);
        tracep->declBit(c+663,"SimTop hazard IF_ID_write", false,-1);
        tracep->declBit(c+696,"SimTop hazard en_control", false,-1);
        tracep->declBit(c+679,"SimTop ID clk", false,-1);
        tracep->declBit(c+680,"SimTop ID rst", false,-1);
        tracep->declBit(c+1,"SimTop ID es_allowin", false,-1);
        tracep->declBit(c+660,"SimTop ID ds_allowin", false,-1);
        tracep->declBit(c+67,"SimTop ID fs_to_ds_valid", false,-1);
        tracep->declArray(c+76,"SimTop ID fs_to_ds_bus", false,-1, 95,0);
        tracep->declBit(c+696,"SimTop ID en_control", false,-1);
        tracep->declBit(c+663,"SimTop ID IF_ID_write", false,-1);
        tracep->declBit(c+68,"SimTop ID ds_to_es_valid", false,-1);
        tracep->declArray(c+504,"SimTop ID ds_to_es_bus", false,-1, 322,0);
        tracep->declBus(c+103,"SimTop ID rs1_o", false,-1, 4,0);
        tracep->declBus(c+104,"SimTop ID rs2_o", false,-1, 4,0);
        tracep->declArray(c+79,"SimTop ID ws_to_rf_bus", false,-1, 69,0);
        tracep->declBit(c+127,"SimTop ID ds_br_taken", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+128+i*2,"SimTop ID regs_ds_o", true,(i+0), 63,0);}}
        tracep->declBus(c+192,"SimTop ID inst", false,-1, 31,0);
        tracep->declQuad(c+667,"SimTop ID imme_o", false,-1, 63,0);
        tracep->declQuad(c+193,"SimTop ID src1", false,-1, 63,0);
        tracep->declQuad(c+195,"SimTop ID src2", false,-1, 63,0);
        tracep->declBus(c+197,"SimTop ID rd_o", false,-1, 4,0);
        tracep->declBus(c+669,"SimTop ID alu_a_sel", false,-1, 1,0);
        tracep->declBus(c+670,"SimTop ID alu_b_sel", false,-1, 1,0);
        tracep->declBus(c+671,"SimTop ID alu_sel", false,-1, 4,0);
        tracep->declBus(c+672,"SimTop ID pc_sel", false,-1, 1,0);
        tracep->declBit(c+673,"SimTop ID reg_wen", false,-1);
        tracep->declBit(c+674,"SimTop ID mem_wen", false,-1);
        tracep->declBit(c+675,"SimTop ID mem_ren", false,-1);
        tracep->declBus(c+198,"SimTop ID func3", false,-1, 2,0);
        tracep->declBus(c+676,"SimTop ID wreg_sel", false,-1, 1,0);
        tracep->declBit(c+677,"SimTop ID jump_flag", false,-1);
        tracep->declBit(c+68,"SimTop ID ds_valid", false,-1);
        tracep->declBit(c+700,"SimTop ID ds_ready_go", false,-1);
        tracep->declArray(c+199,"SimTop ID fs_to_ds_bus_r", false,-1, 95,0);
        tracep->declBus(c+202,"SimTop ID ds_inst", false,-1, 31,0);
        tracep->declQuad(c+203,"SimTop ID ds_pc", false,-1, 63,0);
        tracep->declQuad(c+515,"SimTop ID ds_pc_final", false,-1, 63,0);
        tracep->declBit(c+205,"SimTop ID rf_wen", false,-1);
        tracep->declBus(c+206,"SimTop ID rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+207,"SimTop ID rf_wdata", false,-1, 63,0);
        tracep->declQuad(c+209,"SimTop ID imme_u", false,-1, 63,0);
        tracep->declQuad(c+211,"SimTop ID imme_i", false,-1, 63,0);
        tracep->declQuad(c+213,"SimTop ID imme_j", false,-1, 63,0);
        tracep->declQuad(c+215,"SimTop ID imme_s", false,-1, 63,0);
        tracep->declQuad(c+217,"SimTop ID imme_b", false,-1, 63,0);
        tracep->declBus(c+678,"SimTop ID con_signal", false,-1, 19,0);
        tracep->declBit(c+679,"SimTop ID GPR clk", false,-1);
        tracep->declBit(c+680,"SimTop ID GPR rst", false,-1);
        tracep->declQuad(c+207,"SimTop ID GPR wdata", false,-1, 63,0);
        tracep->declBus(c+206,"SimTop ID GPR waddr", false,-1, 4,0);
        tracep->declBus(c+103,"SimTop ID GPR raddr1", false,-1, 4,0);
        tracep->declBus(c+104,"SimTop ID GPR raddr2", false,-1, 4,0);
        tracep->declBit(c+205,"SimTop ID GPR wen", false,-1);
        tracep->declQuad(c+193,"SimTop ID GPR rdata1", false,-1, 63,0);
        tracep->declQuad(c+195,"SimTop ID GPR rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+219+i*2,"SimTop ID GPR regs_o", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+283+i*2,"SimTop ID GPR register", true,(i+0), 63,0);}}
        tracep->declQuad(c+347,"SimTop ID GPR rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+349,"SimTop ID GPR rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+351,"SimTop ID GPR i", false,-1, 31,0);
        tracep->declBus(c+105,"SimTop forward ID_EX_RegisterRs1", false,-1, 4,0);
        tracep->declBus(c+106,"SimTop forward ID_EX_RegisterRs2", false,-1, 4,0);
        tracep->declBus(c+352,"SimTop forward EX_MEM_RegisterRd", false,-1, 4,0);
        tracep->declBus(c+353,"SimTop forward MEM_WB_RegisterRd", false,-1, 4,0);
        tracep->declBit(c+354,"SimTop forward EX_MEM_RegWrite", false,-1);
        tracep->declBit(c+355,"SimTop forward MEM_WB_RegWrite", false,-1);
        tracep->declBus(c+101,"SimTop forward ForwardA", false,-1, 1,0);
        tracep->declBus(c+102,"SimTop forward ForwardB", false,-1, 1,0);
        tracep->declBit(c+679,"SimTop EXE clk", false,-1);
        tracep->declBit(c+680,"SimTop EXE rst", false,-1);
        tracep->declBit(c+700,"SimTop EXE ms_allowin", false,-1);
        tracep->declBit(c+1,"SimTop EXE es_allowin", false,-1);
        tracep->declBit(c+68,"SimTop EXE ds_to_es_valid", false,-1);
        tracep->declArray(c+504,"SimTop EXE ds_to_es_bus", false,-1, 322,0);
        tracep->declBus(c+101,"SimTop EXE ForwardA", false,-1, 1,0);
        tracep->declBus(c+102,"SimTop EXE ForwardB", false,-1, 1,0);
        tracep->declQuad(c+356,"SimTop EXE ms_alu_result", false,-1, 63,0);
        tracep->declQuad(c+358,"SimTop EXE ws_alu_result", false,-1, 63,0);
        tracep->declBus(c+105,"SimTop EXE es_rs1", false,-1, 4,0);
        tracep->declBus(c+106,"SimTop EXE es_rs2", false,-1, 4,0);
        tracep->declBit(c+69,"SimTop EXE es_to_ms_valid", false,-1);
        tracep->declArray(c+82,"SimTop EXE es_to_ms_bus", false,-1, 172,0);
        tracep->declQuad(c+96,"SimTop EXE alu_result", false,-1, 63,0);
        tracep->declArray(c+71,"SimTop EXE bru_to_fs_bus", false,-1, 130,0);
        tracep->declBit(c+69,"SimTop EXE es_valid", false,-1);
        tracep->declArray(c+360,"SimTop EXE ds_to_es_bus_r", false,-1, 322,0);
        tracep->declBit(c+700,"SimTop EXE es_ready_go", false,-1);
        tracep->declBus(c+371,"SimTop EXE es_alu_sel", false,-1, 4,0);
        tracep->declBus(c+372,"SimTop EXE es_alu_a_sel", false,-1, 1,0);
        tracep->declQuad(c+373,"SimTop EXE es_alu_a", false,-1, 63,0);
        tracep->declBus(c+375,"SimTop EXE es_alu_b_sel", false,-1, 1,0);
        tracep->declQuad(c+376,"SimTop EXE es_alu_b", false,-1, 63,0);
        tracep->declBit(c+378,"SimTop EXE es_reg_wen", false,-1);
        tracep->declBus(c+379,"SimTop EXE es_wreg_sel", false,-1, 1,0);
        tracep->declBus(c+380,"SimTop EXE es_rd_o", false,-1, 4,0);
        tracep->declQuad(c+381,"SimTop EXE es_imme", false,-1, 63,0);
        tracep->declBus(c+383,"SimTop EXE es_func3", false,-1, 2,0);
        tracep->declQuad(c+384,"SimTop EXE es_src1", false,-1, 63,0);
        tracep->declQuad(c+386,"SimTop EXE es_src2", false,-1, 63,0);
        tracep->declQuad(c+388,"SimTop EXE es_for_src1", false,-1, 63,0);
        tracep->declQuad(c+390,"SimTop EXE es_for_src2", false,-1, 63,0);
        tracep->declQuad(c+392,"SimTop EXE es_pc", false,-1, 63,0);
        tracep->declBus(c+394,"SimTop EXE es_inst", false,-1, 31,0);
        tracep->declQuad(c+395,"SimTop EXE es_bru_pc", false,-1, 63,0);
        tracep->declBit(c+397,"SimTop EXE es_mem_wen", false,-1);
        tracep->declBit(c+398,"SimTop EXE es_mem_ren", false,-1);
        tracep->declBit(c+399,"SimTop EXE es_jump_flag", false,-1);
        tracep->declBus(c+400,"SimTop EXE es_pc_sel", false,-1, 1,0);
        tracep->declBit(c+401,"SimTop EXE br_taken", false,-1);
        tracep->declQuad(c+373,"SimTop EXE alu alu_a", false,-1, 63,0);
        tracep->declQuad(c+376,"SimTop EXE alu alu_b", false,-1, 63,0);
        tracep->declBus(c+371,"SimTop EXE alu alu_sel", false,-1, 4,0);
        tracep->declQuad(c+96,"SimTop EXE alu alu_result", false,-1, 63,0);
        tracep->declBus(c+402,"SimTop EXE alu shamt", false,-1, 5,0);
        tracep->declQuad(c+403,"SimTop EXE alu sel_result", false,-1, 63,0);
        tracep->declQuad(c+405,"SimTop EXE alu add_result", false,-1, 63,0);
        tracep->declQuad(c+407,"SimTop EXE alu xor_result", false,-1, 63,0);
        tracep->declQuad(c+409,"SimTop EXE alu and_result", false,-1, 63,0);
        tracep->declQuad(c+411,"SimTop EXE alu sub_result", false,-1, 63,0);
        tracep->declQuad(c+413,"SimTop EXE alu slt_result", false,-1, 63,0);
        tracep->declQuad(c+415,"SimTop EXE alu or_result", false,-1, 63,0);
        tracep->declQuad(c+417,"SimTop EXE alu div_result", false,-1, 63,0);
        tracep->declQuad(c+419,"SimTop EXE alu divu_result", false,-1, 63,0);
        tracep->declQuad(c+421,"SimTop EXE alu mul_result", false,-1, 63,0);
        tracep->declQuad(c+423,"SimTop EXE alu rem_result", false,-1, 63,0);
        tracep->declQuad(c+425,"SimTop EXE alu remu_result", false,-1, 63,0);
        tracep->declQuad(c+427,"SimTop EXE alu sltu_result", false,-1, 63,0);
        tracep->declBit(c+429,"SimTop EXE alu risc32_mode", false,-1);
        tracep->declBus(c+430,"SimTop EXE alu srl_32", false,-1, 31,0);
        tracep->declBus(c+431,"SimTop EXE alu sra_32", false,-1, 31,0);
        tracep->declBus(c+432,"SimTop EXE alu sll_32", false,-1, 31,0);
        tracep->declQuad(c+433,"SimTop EXE alu sll_64", false,-1, 63,0);
        tracep->declQuad(c+435,"SimTop EXE alu sra_64", false,-1, 63,0);
        tracep->declQuad(c+437,"SimTop EXE alu srl_64", false,-1, 63,0);
        tracep->declQuad(c+439,"SimTop EXE alu sll_result", false,-1, 63,0);
        tracep->declQuad(c+441,"SimTop EXE alu srl_result", false,-1, 63,0);
        tracep->declQuad(c+443,"SimTop EXE alu sra_result", false,-1, 63,0);
        tracep->declQuad(c+388,"SimTop EXE bru src1", false,-1, 63,0);
        tracep->declQuad(c+390,"SimTop EXE bru src2", false,-1, 63,0);
        tracep->declBus(c+371,"SimTop EXE bru bru_sel", false,-1, 4,0);
        tracep->declQuad(c+381,"SimTop EXE bru imme_b", false,-1, 63,0);
        tracep->declQuad(c+392,"SimTop EXE bru pc_out", false,-1, 63,0);
        tracep->declBit(c+399,"SimTop EXE bru jump_flag", false,-1);
        tracep->declBus(c+379,"SimTop EXE bru bru_wreg_sel", false,-1, 1,0);
        tracep->declQuad(c+395,"SimTop EXE bru bru_pc", false,-1, 63,0);
        tracep->declBit(c+401,"SimTop EXE bru br_taken", false,-1);
        tracep->declBit(c+445,"SimTop EXE bru equ", false,-1);
        tracep->declBit(c+446,"SimTop EXE bru lt", false,-1);
        tracep->declBit(c+447,"SimTop EXE bru ltu", false,-1);
        tracep->declBit(c+448,"SimTop EXE bru br_valid", false,-1);
        tracep->declBit(c+679,"SimTop MEM clk", false,-1);
        tracep->declBit(c+680,"SimTop MEM rst", false,-1);
        tracep->declBit(c+700,"SimTop MEM ws_allowin", false,-1);
        tracep->declBit(c+700,"SimTop MEM ms_allowin", false,-1);
        tracep->declBit(c+69,"SimTop MEM es_to_ms_valid", false,-1);
        tracep->declArray(c+449,"SimTop MEM es_to_ms_bus", false,-1, 140,0);
        tracep->declQuad(c+96,"SimTop MEM es_to_alu_result", false,-1, 63,0);
        tracep->declBus(c+454,"SimTop MEM es_to_ms_inst", false,-1, 31,0);
        tracep->declBit(c+70,"SimTop MEM ms_to_ws_valid", false,-1);
        tracep->declArray(c+88,"SimTop MEM ms_to_ws_bus", false,-1, 231,0);
        tracep->declBit(c+70,"SimTop MEM ms_valid", false,-1);
        tracep->declArray(c+455,"SimTop MEM es_to_ms_bus_r", false,-1, 172,0);
        tracep->declQuad(c+461,"SimTop MEM es_to_alu_result_r", false,-1, 63,0);
        tracep->declBit(c+700,"SimTop MEM ms_ready_go", false,-1);
        tracep->declQuad(c+463,"SimTop MEM ms_pc", false,-1, 63,0);
        tracep->declQuad(c+461,"SimTop MEM ms_alu_result", false,-1, 63,0);
        tracep->declBus(c+465,"SimTop MEM ms_rd_o", false,-1, 4,0);
        tracep->declBit(c+466,"SimTop MEM ms_reg_wen", false,-1);
        tracep->declBus(c+467,"SimTop MEM ms_wreg_sel", false,-1, 1,0);
        tracep->declBus(c+468,"SimTop MEM ms_func3", false,-1, 2,0);
        tracep->declBit(c+469,"SimTop MEM ms_mem_ren", false,-1);
        tracep->declBit(c+470,"SimTop MEM ms_mem_wen", false,-1);
        tracep->declQuad(c+471,"SimTop MEM ms_src2", false,-1, 63,0);
        tracep->declQuad(c+473,"SimTop MEM ms_rdata", false,-1, 63,0);
        tracep->declBus(c+475,"SimTop MEM ms_inst", false,-1, 31,0);
        tracep->declBit(c+470,"SimTop MEM ram mem_wen", false,-1);
        tracep->declBit(c+469,"SimTop MEM ram mem_en", false,-1);
        tracep->declBus(c+468,"SimTop MEM ram func3", false,-1, 2,0);
        tracep->declBit(c+679,"SimTop MEM ram clk", false,-1);
        tracep->declQuad(c+461,"SimTop MEM ram raddr", false,-1, 63,0);
        tracep->declQuad(c+461,"SimTop MEM ram waddr", false,-1, 63,0);
        tracep->declQuad(c+471,"SimTop MEM ram mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+473,"SimTop MEM ram mem_rdata", false,-1, 63,0);
        tracep->declBus(c+476,"SimTop MEM ram data_yu", false,-1, 3,0);
        tracep->declQuad(c+477,"SimTop MEM ram rdata_RAMHelper", false,-1, 63,0);
        tracep->declQuad(c+479,"SimTop MEM ram wdata_RAMHelper", false,-1, 63,0);
        tracep->declQuad(c+481,"SimTop MEM ram rdata", false,-1, 63,0);
        tracep->declQuad(c+483,"SimTop MEM ram wmask", false,-1, 63,0);
        tracep->declBit(c+679,"SimTop MEM ram data_RAMHelper clk", false,-1);
        tracep->declBit(c+469,"SimTop MEM ram data_RAMHelper en", false,-1);
        tracep->declQuad(c+485,"SimTop MEM ram data_RAMHelper rIdx", false,-1, 63,0);
        tracep->declQuad(c+477,"SimTop MEM ram data_RAMHelper rdata", false,-1, 63,0);
        tracep->declQuad(c+485,"SimTop MEM ram data_RAMHelper wIdx", false,-1, 63,0);
        tracep->declQuad(c+479,"SimTop MEM ram data_RAMHelper wdata", false,-1, 63,0);
        tracep->declQuad(c+483,"SimTop MEM ram data_RAMHelper wmask", false,-1, 63,0);
        tracep->declBit(c+470,"SimTop MEM ram data_RAMHelper wen", false,-1);
        tracep->declBit(c+679,"SimTop WB clk", false,-1);
        tracep->declBit(c+680,"SimTop WB rst", false,-1);
        tracep->declBit(c+700,"SimTop WB ws_allowin", false,-1);
        tracep->declBit(c+70,"SimTop WB ms_to_ws_valid", false,-1);
        tracep->declArray(c+88,"SimTop WB ms_to_ws_bus", false,-1, 231,0);
        tracep->declArray(c+79,"SimTop WB ws_to_rf_bus", false,-1, 69,0);
        tracep->declBus(c+693,"SimTop WB ws_inst", false,-1, 31,0);
        tracep->declQuad(c+694,"SimTop WB ws_pc", false,-1, 63,0);
        tracep->declBit(c+487,"SimTop WB ws_valid", false,-1);
        tracep->declBit(c+700,"SimTop WB ws_ready_go", false,-1);
        tracep->declArray(c+488,"SimTop WB ms_to_ws_bus_r", false,-1, 231,0);
        tracep->declBit(c+496,"SimTop WB ws_reg_wen", false,-1);
        tracep->declBus(c+497,"SimTop WB ws_rd_o", false,-1, 4,0);
        tracep->declBus(c+498,"SimTop WB ws_wreg_sel", false,-1, 1,0);
        tracep->declQuad(c+499,"SimTop WB ws_rdata", false,-1, 63,0);
        tracep->declQuad(c+501,"SimTop WB ws_alu_result", false,-1, 63,0);
        tracep->declBit(c+503,"SimTop WB rf_wen", false,-1);
        tracep->declBus(c+497,"SimTop WB rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+698,"SimTop WB rf_wreg_data", false,-1, 63,0);
        tracep->declBit(c+679,"SimTop DifftestInstrCommit clock", false,-1);
        tracep->declBus(c+704,"SimTop DifftestInstrCommit coreid", false,-1, 7,0);
        tracep->declBus(c+704,"SimTop DifftestInstrCommit index", false,-1, 7,0);
        tracep->declBit(c+524,"SimTop DifftestInstrCommit valid", false,-1);
        tracep->declQuad(c+521,"SimTop DifftestInstrCommit pc", false,-1, 63,0);
        tracep->declBus(c+523,"SimTop DifftestInstrCommit instr", false,-1, 31,0);
        tracep->declBit(c+703,"SimTop DifftestInstrCommit skip", false,-1);
        tracep->declBit(c+703,"SimTop DifftestInstrCommit isRVC", false,-1);
        tracep->declBit(c+703,"SimTop DifftestInstrCommit scFailed", false,-1);
        tracep->declBit(c+517,"SimTop DifftestInstrCommit wen", false,-1);
        tracep->declBus(c+518,"SimTop DifftestInstrCommit wdest", false,-1, 7,0);
        tracep->declQuad(c+519,"SimTop DifftestInstrCommit wdata", false,-1, 63,0);
        tracep->declBit(c+679,"SimTop DifftestArchIntRegState clock", false,-1);
        tracep->declBus(c+704,"SimTop DifftestArchIntRegState coreid", false,-1, 7,0);
        tracep->declQuad(c+595,"SimTop DifftestArchIntRegState gpr_0", false,-1, 63,0);
        tracep->declQuad(c+597,"SimTop DifftestArchIntRegState gpr_1", false,-1, 63,0);
        tracep->declQuad(c+599,"SimTop DifftestArchIntRegState gpr_2", false,-1, 63,0);
        tracep->declQuad(c+601,"SimTop DifftestArchIntRegState gpr_3", false,-1, 63,0);
        tracep->declQuad(c+603,"SimTop DifftestArchIntRegState gpr_4", false,-1, 63,0);
        tracep->declQuad(c+605,"SimTop DifftestArchIntRegState gpr_5", false,-1, 63,0);
        tracep->declQuad(c+607,"SimTop DifftestArchIntRegState gpr_6", false,-1, 63,0);
        tracep->declQuad(c+609,"SimTop DifftestArchIntRegState gpr_7", false,-1, 63,0);
        tracep->declQuad(c+611,"SimTop DifftestArchIntRegState gpr_8", false,-1, 63,0);
        tracep->declQuad(c+613,"SimTop DifftestArchIntRegState gpr_9", false,-1, 63,0);
        tracep->declQuad(c+615,"SimTop DifftestArchIntRegState gpr_10", false,-1, 63,0);
        tracep->declQuad(c+617,"SimTop DifftestArchIntRegState gpr_11", false,-1, 63,0);
        tracep->declQuad(c+619,"SimTop DifftestArchIntRegState gpr_12", false,-1, 63,0);
        tracep->declQuad(c+621,"SimTop DifftestArchIntRegState gpr_13", false,-1, 63,0);
        tracep->declQuad(c+623,"SimTop DifftestArchIntRegState gpr_14", false,-1, 63,0);
        tracep->declQuad(c+625,"SimTop DifftestArchIntRegState gpr_15", false,-1, 63,0);
        tracep->declQuad(c+627,"SimTop DifftestArchIntRegState gpr_16", false,-1, 63,0);
        tracep->declQuad(c+629,"SimTop DifftestArchIntRegState gpr_17", false,-1, 63,0);
        tracep->declQuad(c+631,"SimTop DifftestArchIntRegState gpr_18", false,-1, 63,0);
        tracep->declQuad(c+633,"SimTop DifftestArchIntRegState gpr_19", false,-1, 63,0);
        tracep->declQuad(c+635,"SimTop DifftestArchIntRegState gpr_20", false,-1, 63,0);
        tracep->declQuad(c+637,"SimTop DifftestArchIntRegState gpr_21", false,-1, 63,0);
        tracep->declQuad(c+639,"SimTop DifftestArchIntRegState gpr_22", false,-1, 63,0);
        tracep->declQuad(c+641,"SimTop DifftestArchIntRegState gpr_23", false,-1, 63,0);
        tracep->declQuad(c+643,"SimTop DifftestArchIntRegState gpr_24", false,-1, 63,0);
        tracep->declQuad(c+645,"SimTop DifftestArchIntRegState gpr_25", false,-1, 63,0);
        tracep->declQuad(c+647,"SimTop DifftestArchIntRegState gpr_26", false,-1, 63,0);
        tracep->declQuad(c+649,"SimTop DifftestArchIntRegState gpr_27", false,-1, 63,0);
        tracep->declQuad(c+651,"SimTop DifftestArchIntRegState gpr_28", false,-1, 63,0);
        tracep->declQuad(c+653,"SimTop DifftestArchIntRegState gpr_29", false,-1, 63,0);
        tracep->declQuad(c+655,"SimTop DifftestArchIntRegState gpr_30", false,-1, 63,0);
        tracep->declQuad(c+657,"SimTop DifftestArchIntRegState gpr_31", false,-1, 63,0);
        tracep->declBit(c+679,"SimTop DifftestTrapEvent clock", false,-1);
        tracep->declBus(c+704,"SimTop DifftestTrapEvent coreid", false,-1, 7,0);
        tracep->declBit(c+525,"SimTop DifftestTrapEvent valid", false,-1);
        tracep->declBus(c+659,"SimTop DifftestTrapEvent code", false,-1, 2,0);
        tracep->declQuad(c+521,"SimTop DifftestTrapEvent pc", false,-1, 63,0);
        tracep->declQuad(c+527,"SimTop DifftestTrapEvent cycleCnt", false,-1, 63,0);
        tracep->declQuad(c+529,"SimTop DifftestTrapEvent instrCnt", false,-1, 63,0);
        tracep->declBit(c+679,"SimTop DifftestCSRState clock", false,-1);
        tracep->declBus(c+704,"SimTop DifftestCSRState coreid", false,-1, 7,0);
        tracep->declBus(c+705,"SimTop DifftestCSRState priviledgeMode", false,-1, 1,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState mstatus", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState sstatus", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState mepc", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState sepc", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState mtval", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState stval", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState mtvec", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState stvec", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState mcause", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState scause", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState satp", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState mip", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState mie", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState mscratch", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState sscratch", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState mideleg", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestCSRState medeleg", false,-1, 63,0);
        tracep->declBit(c+679,"SimTop DifftestArchFpRegState clock", false,-1);
        tracep->declBus(c+704,"SimTop DifftestArchFpRegState coreid", false,-1, 7,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_0", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_1", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_2", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_3", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_4", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_5", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_6", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_7", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_8", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_9", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_10", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_11", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_12", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_13", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_14", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_15", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_16", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_17", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_18", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_19", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_20", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_21", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_22", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_23", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_24", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_25", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_26", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_27", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_28", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_29", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_30", false,-1, 63,0);
        tracep->declQuad(c+701,"SimTop DifftestArchFpRegState fpr_31", false,-1, 63,0);
    }
}

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VSimTop___024root__traceRegister(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VSimTop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VSimTop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VSimTop___024root__traceCleanup, vlSelf);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp45;
    VlWide<5>/*159:0*/ __Vtemp48;
    VlWide<4>/*127:0*/ __Vtemp49;
    VlWide<11>/*351:0*/ __Vtemp53;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->SimTop__DOT__es_allowin));
        tracep->fullQData(oldp+2,(vlSelf->SimTop__DOT__regs_ds_o[0]),64);
        tracep->fullQData(oldp+4,(vlSelf->SimTop__DOT__regs_ds_o[1]),64);
        tracep->fullQData(oldp+6,(vlSelf->SimTop__DOT__regs_ds_o[2]),64);
        tracep->fullQData(oldp+8,(vlSelf->SimTop__DOT__regs_ds_o[3]),64);
        tracep->fullQData(oldp+10,(vlSelf->SimTop__DOT__regs_ds_o[4]),64);
        tracep->fullQData(oldp+12,(vlSelf->SimTop__DOT__regs_ds_o[5]),64);
        tracep->fullQData(oldp+14,(vlSelf->SimTop__DOT__regs_ds_o[6]),64);
        tracep->fullQData(oldp+16,(vlSelf->SimTop__DOT__regs_ds_o[7]),64);
        tracep->fullQData(oldp+18,(vlSelf->SimTop__DOT__regs_ds_o[8]),64);
        tracep->fullQData(oldp+20,(vlSelf->SimTop__DOT__regs_ds_o[9]),64);
        tracep->fullQData(oldp+22,(vlSelf->SimTop__DOT__regs_ds_o[10]),64);
        tracep->fullQData(oldp+24,(vlSelf->SimTop__DOT__regs_ds_o[11]),64);
        tracep->fullQData(oldp+26,(vlSelf->SimTop__DOT__regs_ds_o[12]),64);
        tracep->fullQData(oldp+28,(vlSelf->SimTop__DOT__regs_ds_o[13]),64);
        tracep->fullQData(oldp+30,(vlSelf->SimTop__DOT__regs_ds_o[14]),64);
        tracep->fullQData(oldp+32,(vlSelf->SimTop__DOT__regs_ds_o[15]),64);
        tracep->fullQData(oldp+34,(vlSelf->SimTop__DOT__regs_ds_o[16]),64);
        tracep->fullQData(oldp+36,(vlSelf->SimTop__DOT__regs_ds_o[17]),64);
        tracep->fullQData(oldp+38,(vlSelf->SimTop__DOT__regs_ds_o[18]),64);
        tracep->fullQData(oldp+40,(vlSelf->SimTop__DOT__regs_ds_o[19]),64);
        tracep->fullQData(oldp+42,(vlSelf->SimTop__DOT__regs_ds_o[20]),64);
        tracep->fullQData(oldp+44,(vlSelf->SimTop__DOT__regs_ds_o[21]),64);
        tracep->fullQData(oldp+46,(vlSelf->SimTop__DOT__regs_ds_o[22]),64);
        tracep->fullQData(oldp+48,(vlSelf->SimTop__DOT__regs_ds_o[23]),64);
        tracep->fullQData(oldp+50,(vlSelf->SimTop__DOT__regs_ds_o[24]),64);
        tracep->fullQData(oldp+52,(vlSelf->SimTop__DOT__regs_ds_o[25]),64);
        tracep->fullQData(oldp+54,(vlSelf->SimTop__DOT__regs_ds_o[26]),64);
        tracep->fullQData(oldp+56,(vlSelf->SimTop__DOT__regs_ds_o[27]),64);
        tracep->fullQData(oldp+58,(vlSelf->SimTop__DOT__regs_ds_o[28]),64);
        tracep->fullQData(oldp+60,(vlSelf->SimTop__DOT__regs_ds_o[29]),64);
        tracep->fullQData(oldp+62,(vlSelf->SimTop__DOT__regs_ds_o[30]),64);
        tracep->fullQData(oldp+64,(vlSelf->SimTop__DOT__regs_ds_o[31]),64);
        tracep->fullBit(oldp+66,(vlSelf->SimTop__DOT__fetched));
        tracep->fullBit(oldp+67,(vlSelf->SimTop__DOT__IF__DOT__fs_valid));
        tracep->fullBit(oldp+68,(vlSelf->SimTop__DOT__ID__DOT__ds_valid));
        tracep->fullBit(oldp+69,(vlSelf->SimTop__DOT__EXE__DOT__es_valid));
        tracep->fullBit(oldp+70,(vlSelf->SimTop__DOT__MEM__DOT__ms_valid));
        tracep->fullWData(oldp+71,(vlSelf->SimTop__DOT__bru_to_fs_bus),131);
        __Vtemp45[0U] = (IData)(((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                                  ? 0ULL : vlSelf->SimTop__DOT__IF__DOT__fs_pc));
        __Vtemp45[1U] = (IData)((((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                                   ? 0ULL : vlSelf->SimTop__DOT__IF__DOT__fs_pc) 
                                 >> 0x20U));
        __Vtemp45[2U] = ((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                          ? 0x13U : vlSelf->SimTop__DOT__inst);
        tracep->fullWData(oldp+76,(__Vtemp45),96);
        tracep->fullWData(oldp+79,(vlSelf->SimTop__DOT__ws_to_rf_bus),70);
        tracep->fullWData(oldp+82,(vlSelf->SimTop__DOT__es_to_ms_bus),173);
        tracep->fullWData(oldp+88,(vlSelf->SimTop__DOT__ms_to_ws_bus),232);
        tracep->fullQData(oldp+96,(vlSelf->SimTop__DOT__es_alu_result),64);
        tracep->fullQData(oldp+98,(vlSelf->SimTop__DOT__IF__DOT__nextpc),64);
        tracep->fullIData(oldp+100,(vlSelf->SimTop__DOT__inst),32);
        tracep->fullCData(oldp+101,(vlSelf->SimTop__DOT__ForwardA),2);
        tracep->fullCData(oldp+102,(vlSelf->SimTop__DOT__ForwardB),2);
        tracep->fullCData(oldp+103,((0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+104,((0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+105,((0x1fU & ((vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[9U] 
                                               << 2U) 
                                              | (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                 >> 0x1eU)))),5);
        tracep->fullCData(oldp+106,((0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                              >> 0x19U))),5);
        tracep->fullBit(oldp+107,(vlSelf->SimTop__DOT__inst_valid));
        tracep->fullQData(oldp+108,((4ULL + vlSelf->SimTop__DOT__IF__DOT__fs_pc)),64);
        tracep->fullQData(oldp+110,(((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                                      ? (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__bru_to_fs_bus[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->SimTop__DOT__bru_to_fs_bus[0U])))
                                      : (4ULL + vlSelf->SimTop__DOT__IF__DOT__fs_pc))),64);
        tracep->fullQData(oldp+112,(((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                                      ? 0ULL : vlSelf->SimTop__DOT__IF__DOT__fs_pc)),64);
        tracep->fullBit(oldp+114,((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])));
        tracep->fullQData(oldp+115,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__bru_to_fs_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__bru_to_fs_bus[0U])))),64);
        tracep->fullQData(oldp+117,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__bru_to_fs_bus[4U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__bru_to_fs_bus[3U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__bru_to_fs_bus[2U])) 
                                                      >> 3U)))),64);
        tracep->fullCData(oldp+119,((3U & (vlSelf->SimTop__DOT__bru_to_fs_bus[2U] 
                                           >> 1U))),2);
        tracep->fullIData(oldp+120,(((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])
                                      ? 0x13U : vlSelf->SimTop__DOT__inst)),32);
        tracep->fullQData(oldp+121,(vlSelf->SimTop__DOT__IF__DOT__fs_pc),64);
        tracep->fullQData(oldp+123,(((vlSelf->SimTop__DOT__IF__DOT__nextpc 
                                      - 0x80000000ULL) 
                                     >> 3U)),64);
        tracep->fullCData(oldp+125,((0x1fU & vlSelf->SimTop__DOT__es_to_ms_bus[2U])),5);
        tracep->fullBit(oldp+126,((1U & (vlSelf->SimTop__DOT__es_to_ms_bus[2U] 
                                         >> 0xbU))));
        tracep->fullBit(oldp+127,((1U & vlSelf->SimTop__DOT__bru_to_fs_bus[2U])));
        tracep->fullQData(oldp+128,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[0]),64);
        tracep->fullQData(oldp+130,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[1]),64);
        tracep->fullQData(oldp+132,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[2]),64);
        tracep->fullQData(oldp+134,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[3]),64);
        tracep->fullQData(oldp+136,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[4]),64);
        tracep->fullQData(oldp+138,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[5]),64);
        tracep->fullQData(oldp+140,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[6]),64);
        tracep->fullQData(oldp+142,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[7]),64);
        tracep->fullQData(oldp+144,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[8]),64);
        tracep->fullQData(oldp+146,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[9]),64);
        tracep->fullQData(oldp+148,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[10]),64);
        tracep->fullQData(oldp+150,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[11]),64);
        tracep->fullQData(oldp+152,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[12]),64);
        tracep->fullQData(oldp+154,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[13]),64);
        tracep->fullQData(oldp+156,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[14]),64);
        tracep->fullQData(oldp+158,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[15]),64);
        tracep->fullQData(oldp+160,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[16]),64);
        tracep->fullQData(oldp+162,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[17]),64);
        tracep->fullQData(oldp+164,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[18]),64);
        tracep->fullQData(oldp+166,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[19]),64);
        tracep->fullQData(oldp+168,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[20]),64);
        tracep->fullQData(oldp+170,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[21]),64);
        tracep->fullQData(oldp+172,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[22]),64);
        tracep->fullQData(oldp+174,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[23]),64);
        tracep->fullQData(oldp+176,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[24]),64);
        tracep->fullQData(oldp+178,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[25]),64);
        tracep->fullQData(oldp+180,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[26]),64);
        tracep->fullQData(oldp+182,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[27]),64);
        tracep->fullQData(oldp+184,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[28]),64);
        tracep->fullQData(oldp+186,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[29]),64);
        tracep->fullQData(oldp+188,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[30]),64);
        tracep->fullQData(oldp+190,(vlSelf->SimTop__DOT____Vcellout__ID__regs_ds_o[31]),64);
        tracep->fullIData(oldp+192,(vlSelf->SimTop__DOT__ID__DOT__inst),32);
        tracep->fullQData(oldp+193,(((0U == (0x1fU 
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
                                                     >> 0xfU))]))),64);
        tracep->fullQData(oldp+195,(((0U == (0x1fU 
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
                                                     >> 0x14U))]))),64);
        tracep->fullCData(oldp+197,((0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+198,((7U & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                           >> 0xcU))),3);
        tracep->fullWData(oldp+199,(vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r),96);
        tracep->fullIData(oldp+202,(vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[2U]),32);
        tracep->fullQData(oldp+203,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[0U])))),64);
        tracep->fullBit(oldp+205,((1U & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+206,((0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])),5);
        tracep->fullQData(oldp+207,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))),64);
        tracep->fullQData(oldp+209,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->SimTop__DOT__ID__DOT__inst))))),64);
        tracep->fullQData(oldp+211,((((- (QData)((IData)(
                                                         (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+213,((((- (QData)((IData)(
                                                         (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                          >> 0x1fU)))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & vlSelf->SimTop__DOT__ID__DOT__inst) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                            >> 0x14U)))))))),64);
        tracep->fullQData(oldp+215,((((- (QData)((IData)(
                                                         (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+217,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+219,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[0]),64);
        tracep->fullQData(oldp+221,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[1]),64);
        tracep->fullQData(oldp+223,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[2]),64);
        tracep->fullQData(oldp+225,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[3]),64);
        tracep->fullQData(oldp+227,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[4]),64);
        tracep->fullQData(oldp+229,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[5]),64);
        tracep->fullQData(oldp+231,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[6]),64);
        tracep->fullQData(oldp+233,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[7]),64);
        tracep->fullQData(oldp+235,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[8]),64);
        tracep->fullQData(oldp+237,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[9]),64);
        tracep->fullQData(oldp+239,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[10]),64);
        tracep->fullQData(oldp+241,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[11]),64);
        tracep->fullQData(oldp+243,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[12]),64);
        tracep->fullQData(oldp+245,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[13]),64);
        tracep->fullQData(oldp+247,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[14]),64);
        tracep->fullQData(oldp+249,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[15]),64);
        tracep->fullQData(oldp+251,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[16]),64);
        tracep->fullQData(oldp+253,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[17]),64);
        tracep->fullQData(oldp+255,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[18]),64);
        tracep->fullQData(oldp+257,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[19]),64);
        tracep->fullQData(oldp+259,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[20]),64);
        tracep->fullQData(oldp+261,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[21]),64);
        tracep->fullQData(oldp+263,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[22]),64);
        tracep->fullQData(oldp+265,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[23]),64);
        tracep->fullQData(oldp+267,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[24]),64);
        tracep->fullQData(oldp+269,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[25]),64);
        tracep->fullQData(oldp+271,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[26]),64);
        tracep->fullQData(oldp+273,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[27]),64);
        tracep->fullQData(oldp+275,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[28]),64);
        tracep->fullQData(oldp+277,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[29]),64);
        tracep->fullQData(oldp+279,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[30]),64);
        tracep->fullQData(oldp+281,(vlSelf->SimTop__DOT__ID__DOT____Vcellout__GPR__regs_o[31]),64);
        tracep->fullQData(oldp+283,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[0]),64);
        tracep->fullQData(oldp+285,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[1]),64);
        tracep->fullQData(oldp+287,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[2]),64);
        tracep->fullQData(oldp+289,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[3]),64);
        tracep->fullQData(oldp+291,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[4]),64);
        tracep->fullQData(oldp+293,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[5]),64);
        tracep->fullQData(oldp+295,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[6]),64);
        tracep->fullQData(oldp+297,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[7]),64);
        tracep->fullQData(oldp+299,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[8]),64);
        tracep->fullQData(oldp+301,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[9]),64);
        tracep->fullQData(oldp+303,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[10]),64);
        tracep->fullQData(oldp+305,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[11]),64);
        tracep->fullQData(oldp+307,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[12]),64);
        tracep->fullQData(oldp+309,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[13]),64);
        tracep->fullQData(oldp+311,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[14]),64);
        tracep->fullQData(oldp+313,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[15]),64);
        tracep->fullQData(oldp+315,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[16]),64);
        tracep->fullQData(oldp+317,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[17]),64);
        tracep->fullQData(oldp+319,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[18]),64);
        tracep->fullQData(oldp+321,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[19]),64);
        tracep->fullQData(oldp+323,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[20]),64);
        tracep->fullQData(oldp+325,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[21]),64);
        tracep->fullQData(oldp+327,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[22]),64);
        tracep->fullQData(oldp+329,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[23]),64);
        tracep->fullQData(oldp+331,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[24]),64);
        tracep->fullQData(oldp+333,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[25]),64);
        tracep->fullQData(oldp+335,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[26]),64);
        tracep->fullQData(oldp+337,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[27]),64);
        tracep->fullQData(oldp+339,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[28]),64);
        tracep->fullQData(oldp+341,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[29]),64);
        tracep->fullQData(oldp+343,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[30]),64);
        tracep->fullQData(oldp+345,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register[31]),64);
        tracep->fullQData(oldp+347,(((((0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
                                       == (0x1fU & 
                                           (vlSelf->SimTop__DOT__ID__DOT__inst 
                                            >> 0xfU))) 
                                      & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                         >> 5U)) ? 
                                     (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
                                      : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
                                     [(0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                >> 0xfU))])),64);
        tracep->fullQData(oldp+349,(((((0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
                                       == (0x1fU & 
                                           (vlSelf->SimTop__DOT__ID__DOT__inst 
                                            >> 0x14U))) 
                                      & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                         >> 5U)) ? 
                                     (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))
                                      : vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__register
                                     [(0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                >> 0x14U))])),64);
        tracep->fullIData(oldp+351,(vlSelf->SimTop__DOT__ID__DOT__GPR__DOT__i),32);
        tracep->fullCData(oldp+352,((0x1fU & (vlSelf->SimTop__DOT__ms_to_ws_bus[6U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+353,((0x1fU & vlSelf->SimTop__DOT__ws_to_rf_bus[2U])),5);
        tracep->fullBit(oldp+354,((1U & (vlSelf->SimTop__DOT__ms_to_ws_bus[6U] 
                                         >> 7U))));
        tracep->fullBit(oldp+355,((1U & (vlSelf->SimTop__DOT__ws_to_rf_bus[2U] 
                                         >> 5U))));
        tracep->fullQData(oldp+356,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ms_to_ws_bus[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ms_to_ws_bus[2U])))),64);
        tracep->fullQData(oldp+358,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ws_to_rf_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ws_to_rf_bus[0U])))),64);
        tracep->fullWData(oldp+360,(vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r),323);
        tracep->fullCData(oldp+371,((0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+372,((3U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                           >> 0xdU))),2);
        tracep->fullQData(oldp+373,(vlSelf->SimTop__DOT__EXE__DOT__es_alu_a),64);
        tracep->fullCData(oldp+375,((3U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                           >> 0xbU))),2);
        tracep->fullQData(oldp+376,(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b),64);
        tracep->fullBit(oldp+378,((1U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                         >> 0xaU))));
        tracep->fullCData(oldp+379,((3U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                           >> 8U))),2);
        tracep->fullCData(oldp+380,((0x1fU & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                              >> 3U))),5);
        tracep->fullQData(oldp+381,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[7U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[6U])) 
                                                      >> 3U)))),64);
        tracep->fullCData(oldp+383,((7U & vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[6U])),3);
        tracep->fullQData(oldp+384,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[4U])))),64);
        tracep->fullQData(oldp+386,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[2U])))),64);
        tracep->fullQData(oldp+388,(vlSelf->SimTop__DOT__EXE__DOT__es_for_src1),64);
        tracep->fullQData(oldp+390,(vlSelf->SimTop__DOT__EXE__DOT__es_for_src2),64);
        tracep->fullQData(oldp+392,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[0U])))),64);
        tracep->fullIData(oldp+394,(((vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[0xaU] 
                                      << 0x1dU) | (
                                                   vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[9U] 
                                                   >> 3U))),32);
        tracep->fullQData(oldp+395,(((((7U == (0x1fU 
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
                                     & (~ ((7U == (0x1fU 
                                                   & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                      >> 0xfU)))
                                            ? 1ULL : 0ULL)))),64);
        tracep->fullBit(oldp+397,((1U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+398,((1U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+399,((1U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                         >> 0x16U))));
        tracep->fullCData(oldp+400,((3U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                           >> 0x17U))),2);
        tracep->fullBit(oldp+401,(((((((((((0U == (0x1fU 
                                                   & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                      >> 0xfU))) 
                                           & (1U == 
                                              (3U & 
                                               (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                >> 8U)))) 
                                          | ((7U == 
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
                                        | ((1U == (0x1fU 
                                                   & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                      >> 0xfU))) 
                                           & (~ (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__equ)))) 
                                       | ((3U == (0x1fU 
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
                                       & (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__ltu))) 
                                   & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                      >> 0x16U))));
        tracep->fullCData(oldp+402,((0x3fU & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b))),6);
        tracep->fullQData(oldp+403,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sel_result),64);
        tracep->fullQData(oldp+405,((vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                     + vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)),64);
        tracep->fullQData(oldp+407,((vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                     ^ vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)),64);
        tracep->fullQData(oldp+409,((vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                     & vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)),64);
        tracep->fullQData(oldp+411,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sub_result),64);
        tracep->fullQData(oldp+413,((QData)((IData)(
                                                    VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__EXE__DOT__es_alu_a, vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),64);
        tracep->fullQData(oldp+415,((vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                     | vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)),64);
        tracep->fullQData(oldp+417,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__div_result),64);
        tracep->fullQData(oldp+419,(VL_DIV_QQQ(64, vlSelf->SimTop__DOT__EXE__DOT__es_alu_a, vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)),64);
        tracep->fullQData(oldp+421,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__mul_result),64);
        tracep->fullQData(oldp+423,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__rem_result),64);
        tracep->fullQData(oldp+425,(VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__EXE__DOT__es_alu_a, vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)),64);
        tracep->fullQData(oldp+427,((QData)((IData)(
                                                    (vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                                     < vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),64);
        tracep->fullBit(oldp+429,((1U & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                         >> 0x13U))));
        tracep->fullIData(oldp+430,(((IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_a) 
                                     >> (0x1fU & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),32);
        tracep->fullIData(oldp+431,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_a), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),32);
        tracep->fullIData(oldp+432,(((IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_a) 
                                     << (0x1fU & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),32);
        tracep->fullQData(oldp+433,((vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                     << (0x3fU & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),64);
        tracep->fullQData(oldp+435,(VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__EXE__DOT__es_alu_a, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),64);
        tracep->fullQData(oldp+437,((vlSelf->SimTop__DOT__EXE__DOT__es_alu_a 
                                     >> (0x3fU & (IData)(vlSelf->SimTop__DOT__EXE__DOT__es_alu_b)))),64);
        tracep->fullQData(oldp+439,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sll_result),64);
        tracep->fullQData(oldp+441,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__srl_result),64);
        tracep->fullQData(oldp+443,(vlSelf->SimTop__DOT__EXE__DOT__alu__DOT__sra_result),64);
        tracep->fullBit(oldp+445,(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__equ));
        tracep->fullBit(oldp+446,(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__lt));
        tracep->fullBit(oldp+447,(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__ltu));
        tracep->fullBit(oldp+448,((((((((((0U == (0x1fU 
                                                  & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                     >> 0xfU))) 
                                          & (1U == 
                                             (3U & 
                                              (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                               >> 8U)))) 
                                         | ((7U == 
                                             (0x1fU 
                                              & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                 >> 0xfU))) 
                                            & (1U == 
                                               (3U 
                                                & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                   >> 8U))))) 
                                        | ((6U == (0x1fU 
                                                   & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                      >> 0xfU))) 
                                           & (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__equ))) 
                                       | ((1U == (0x1fU 
                                                  & (vlSelf->SimTop__DOT__EXE__DOT__ds_to_es_bus_r[8U] 
                                                     >> 0xfU))) 
                                          & (~ (IData)(vlSelf->SimTop__DOT__EXE__DOT__bru__DOT__equ)))) 
                                      | ((3U == (0x1fU 
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
        __Vtemp48[0U] = vlSelf->SimTop__DOT__es_to_ms_bus[0U];
        __Vtemp48[1U] = vlSelf->SimTop__DOT__es_to_ms_bus[1U];
        __Vtemp48[2U] = vlSelf->SimTop__DOT__es_to_ms_bus[2U];
        __Vtemp48[3U] = vlSelf->SimTop__DOT__es_to_ms_bus[3U];
        __Vtemp48[4U] = (0x1fffU & vlSelf->SimTop__DOT__es_to_ms_bus[4U]);
        tracep->fullWData(oldp+449,(__Vtemp48),141);
        tracep->fullIData(oldp+454,(((vlSelf->SimTop__DOT__es_to_ms_bus[5U] 
                                      << 0x13U) | (
                                                   vlSelf->SimTop__DOT__es_to_ms_bus[4U] 
                                                   >> 0xdU))),32);
        tracep->fullWData(oldp+455,(vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r),173);
        tracep->fullQData(oldp+461,(vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r),64);
        tracep->fullQData(oldp+463,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[0U])))),64);
        tracep->fullCData(oldp+465,((0x1fU & vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U])),5);
        tracep->fullBit(oldp+466,((1U & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+467,((3U & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                           >> 6U))),2);
        tracep->fullCData(oldp+468,((7U & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                           >> 8U))),3);
        tracep->fullBit(oldp+469,((1U & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                         >> 0xbU))));
        tracep->fullBit(oldp+470,((1U & (vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U] 
                                         >> 0xcU))));
        tracep->fullQData(oldp+471,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[4U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[3U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[2U])) 
                                                      >> 0xdU)))),64);
        tracep->fullQData(oldp+473,(vlSelf->SimTop__DOT__MEM__DOT__ms_rdata),64);
        tracep->fullIData(oldp+475,(((vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[5U] 
                                      << 0x13U) | (
                                                   vlSelf->SimTop__DOT__MEM__DOT__es_to_ms_bus_r[4U] 
                                                   >> 0xdU))),32);
        tracep->fullCData(oldp+476,((7U & (IData)(vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r))),4);
        tracep->fullQData(oldp+477,(vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata_RAMHelper),64);
        tracep->fullQData(oldp+479,(((0x3fU >= (0x38U 
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
        tracep->fullQData(oldp+481,(vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__rdata),64);
        tracep->fullQData(oldp+483,(vlSelf->SimTop__DOT__MEM__DOT__ram__DOT__wmask),64);
        tracep->fullQData(oldp+485,(((vlSelf->SimTop__DOT__MEM__DOT__es_to_alu_result_r 
                                      - 0x80000000ULL) 
                                     >> 3U)),64);
        tracep->fullBit(oldp+487,(vlSelf->SimTop__DOT__WB__DOT__ws_valid));
        tracep->fullWData(oldp+488,(vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r),232);
        tracep->fullBit(oldp+496,((1U & (vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U] 
                                         >> 7U))));
        tracep->fullCData(oldp+497,((0x1fU & (vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+498,((3U & vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U])),2);
        tracep->fullQData(oldp+499,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[4U])))),64);
        tracep->fullQData(oldp+501,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[2U])))),64);
        tracep->fullBit(oldp+503,(((vlSelf->SimTop__DOT__WB__DOT__ms_to_ws_bus_r[6U] 
                                    >> 7U) & (IData)(vlSelf->SimTop__DOT__WB__DOT__ws_valid))));
        __Vtemp49[2U] = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__ID__DOT__inst)) 
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
        __Vtemp49[3U] = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__ID__DOT__inst)) 
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
        __Vtemp53[0U] = (IData)(((1U & (vlSelf->SimTop__DOT__bru_to_fs_bus[2U] 
                                        | (IData)(vlSelf->SimTop__DOT__IF_ID_write)))
                                  ? 0ULL : (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[0U])))));
        __Vtemp53[1U] = (IData)((((1U & (vlSelf->SimTop__DOT__bru_to_fs_bus[2U] 
                                         | (IData)(vlSelf->SimTop__DOT__IF_ID_write)))
                                   ? 0ULL : (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[0U])))) 
                                 >> 0x20U));
        __Vtemp53[2U] = (IData)(((0U == (0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                  >> 0x14U)))
                                  ? 0ULL : ((((0x1fU 
                                               & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
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
                                            [(0x1fU 
                                              & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                 >> 0x14U))])));
        __Vtemp53[3U] = (IData)((((0U == (0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                   >> 0x14U)))
                                   ? 0ULL : ((((0x1fU 
                                                & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
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
                                             [(0x1fU 
                                               & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                  >> 0x14U))])) 
                                 >> 0x20U));
        __Vtemp53[4U] = (IData)(((0U == (0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                  >> 0xfU)))
                                  ? 0ULL : ((((0x1fU 
                                               & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
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
                                            [(0x1fU 
                                              & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                 >> 0xfU))])));
        __Vtemp53[5U] = (IData)((((0U == (0x1fU & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                   >> 0xfU)))
                                   ? 0ULL : ((((0x1fU 
                                                & vlSelf->SimTop__DOT__ws_to_rf_bus[2U]) 
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
                                             [(0x1fU 
                                               & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                                  >> 0xfU))])) 
                                 >> 0x20U));
        __Vtemp53[6U] = (((IData)(vlSelf->SimTop__DOT__ID__DOT__imme_o) 
                          << 3U) | (7U & (vlSelf->SimTop__DOT__ID__DOT__inst 
                                          >> 0xcU)));
        __Vtemp53[7U] = (((IData)(vlSelf->SimTop__DOT__ID__DOT__imme_o) 
                          >> 0x1dU) | ((IData)((vlSelf->SimTop__DOT__ID__DOT__imme_o 
                                                >> 0x20U)) 
                                       << 3U));
        __Vtemp53[8U] = (((IData)((vlSelf->SimTop__DOT__ID__DOT__imme_o 
                                   >> 0x20U)) >> 0x1dU) 
                         | (__Vtemp49[2U] << 3U));
        __Vtemp53[9U] = ((__Vtemp49[2U] >> 0x1dU) | 
                         (__Vtemp49[3U] << 3U));
        __Vtemp53[0xaU] = (__Vtemp49[3U] >> 0x1dU);
        tracep->fullWData(oldp+504,(__Vtemp53),323);
        tracep->fullQData(oldp+515,(((1U & (vlSelf->SimTop__DOT__bru_to_fs_bus[2U] 
                                            | (IData)(vlSelf->SimTop__DOT__IF_ID_write)))
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ID__DOT__fs_to_ds_bus_r[0U]))))),64);
        tracep->fullBit(oldp+517,(vlSelf->SimTop__DOT__cmt_wen));
        tracep->fullCData(oldp+518,(vlSelf->SimTop__DOT__cmt_wdest),8);
        tracep->fullQData(oldp+519,(vlSelf->SimTop__DOT__cmt_wdata),64);
        tracep->fullQData(oldp+521,(vlSelf->SimTop__DOT__cmt_pc),64);
        tracep->fullIData(oldp+523,(vlSelf->SimTop__DOT__cmt_inst),32);
        tracep->fullBit(oldp+524,(vlSelf->SimTop__DOT__cmt_valid));
        tracep->fullBit(oldp+525,(vlSelf->SimTop__DOT__trap));
        tracep->fullCData(oldp+526,(vlSelf->SimTop__DOT__trap_code),8);
        tracep->fullQData(oldp+527,(vlSelf->SimTop__DOT__cycleCnt),64);
        tracep->fullQData(oldp+529,(vlSelf->SimTop__DOT__instrCnt),64);
        tracep->fullQData(oldp+531,(vlSelf->SimTop__DOT__regs_diff[0]),64);
        tracep->fullQData(oldp+533,(vlSelf->SimTop__DOT__regs_diff[1]),64);
        tracep->fullQData(oldp+535,(vlSelf->SimTop__DOT__regs_diff[2]),64);
        tracep->fullQData(oldp+537,(vlSelf->SimTop__DOT__regs_diff[3]),64);
        tracep->fullQData(oldp+539,(vlSelf->SimTop__DOT__regs_diff[4]),64);
        tracep->fullQData(oldp+541,(vlSelf->SimTop__DOT__regs_diff[5]),64);
        tracep->fullQData(oldp+543,(vlSelf->SimTop__DOT__regs_diff[6]),64);
        tracep->fullQData(oldp+545,(vlSelf->SimTop__DOT__regs_diff[7]),64);
        tracep->fullQData(oldp+547,(vlSelf->SimTop__DOT__regs_diff[8]),64);
        tracep->fullQData(oldp+549,(vlSelf->SimTop__DOT__regs_diff[9]),64);
        tracep->fullQData(oldp+551,(vlSelf->SimTop__DOT__regs_diff[10]),64);
        tracep->fullQData(oldp+553,(vlSelf->SimTop__DOT__regs_diff[11]),64);
        tracep->fullQData(oldp+555,(vlSelf->SimTop__DOT__regs_diff[12]),64);
        tracep->fullQData(oldp+557,(vlSelf->SimTop__DOT__regs_diff[13]),64);
        tracep->fullQData(oldp+559,(vlSelf->SimTop__DOT__regs_diff[14]),64);
        tracep->fullQData(oldp+561,(vlSelf->SimTop__DOT__regs_diff[15]),64);
        tracep->fullQData(oldp+563,(vlSelf->SimTop__DOT__regs_diff[16]),64);
        tracep->fullQData(oldp+565,(vlSelf->SimTop__DOT__regs_diff[17]),64);
        tracep->fullQData(oldp+567,(vlSelf->SimTop__DOT__regs_diff[18]),64);
        tracep->fullQData(oldp+569,(vlSelf->SimTop__DOT__regs_diff[19]),64);
        tracep->fullQData(oldp+571,(vlSelf->SimTop__DOT__regs_diff[20]),64);
        tracep->fullQData(oldp+573,(vlSelf->SimTop__DOT__regs_diff[21]),64);
        tracep->fullQData(oldp+575,(vlSelf->SimTop__DOT__regs_diff[22]),64);
        tracep->fullQData(oldp+577,(vlSelf->SimTop__DOT__regs_diff[23]),64);
        tracep->fullQData(oldp+579,(vlSelf->SimTop__DOT__regs_diff[24]),64);
        tracep->fullQData(oldp+581,(vlSelf->SimTop__DOT__regs_diff[25]),64);
        tracep->fullQData(oldp+583,(vlSelf->SimTop__DOT__regs_diff[26]),64);
        tracep->fullQData(oldp+585,(vlSelf->SimTop__DOT__regs_diff[27]),64);
        tracep->fullQData(oldp+587,(vlSelf->SimTop__DOT__regs_diff[28]),64);
        tracep->fullQData(oldp+589,(vlSelf->SimTop__DOT__regs_diff[29]),64);
        tracep->fullQData(oldp+591,(vlSelf->SimTop__DOT__regs_diff[30]),64);
        tracep->fullQData(oldp+593,(vlSelf->SimTop__DOT__regs_diff[31]),64);
        tracep->fullQData(oldp+595,(vlSelf->SimTop__DOT__regs_diff
                                    [0U]),64);
        tracep->fullQData(oldp+597,(vlSelf->SimTop__DOT__regs_diff
                                    [1U]),64);
        tracep->fullQData(oldp+599,(vlSelf->SimTop__DOT__regs_diff
                                    [2U]),64);
        tracep->fullQData(oldp+601,(vlSelf->SimTop__DOT__regs_diff
                                    [3U]),64);
        tracep->fullQData(oldp+603,(vlSelf->SimTop__DOT__regs_diff
                                    [4U]),64);
        tracep->fullQData(oldp+605,(vlSelf->SimTop__DOT__regs_diff
                                    [5U]),64);
        tracep->fullQData(oldp+607,(vlSelf->SimTop__DOT__regs_diff
                                    [6U]),64);
        tracep->fullQData(oldp+609,(vlSelf->SimTop__DOT__regs_diff
                                    [7U]),64);
        tracep->fullQData(oldp+611,(vlSelf->SimTop__DOT__regs_diff
                                    [8U]),64);
        tracep->fullQData(oldp+613,(vlSelf->SimTop__DOT__regs_diff
                                    [9U]),64);
        tracep->fullQData(oldp+615,(vlSelf->SimTop__DOT__regs_diff
                                    [0xaU]),64);
        tracep->fullQData(oldp+617,(vlSelf->SimTop__DOT__regs_diff
                                    [0xbU]),64);
        tracep->fullQData(oldp+619,(vlSelf->SimTop__DOT__regs_diff
                                    [0xcU]),64);
        tracep->fullQData(oldp+621,(vlSelf->SimTop__DOT__regs_diff
                                    [0xdU]),64);
        tracep->fullQData(oldp+623,(vlSelf->SimTop__DOT__regs_diff
                                    [0xeU]),64);
        tracep->fullQData(oldp+625,(vlSelf->SimTop__DOT__regs_diff
                                    [0xfU]),64);
        tracep->fullQData(oldp+627,(vlSelf->SimTop__DOT__regs_diff
                                    [0x10U]),64);
        tracep->fullQData(oldp+629,(vlSelf->SimTop__DOT__regs_diff
                                    [0x11U]),64);
        tracep->fullQData(oldp+631,(vlSelf->SimTop__DOT__regs_diff
                                    [0x12U]),64);
        tracep->fullQData(oldp+633,(vlSelf->SimTop__DOT__regs_diff
                                    [0x13U]),64);
        tracep->fullQData(oldp+635,(vlSelf->SimTop__DOT__regs_diff
                                    [0x14U]),64);
        tracep->fullQData(oldp+637,(vlSelf->SimTop__DOT__regs_diff
                                    [0x15U]),64);
        tracep->fullQData(oldp+639,(vlSelf->SimTop__DOT__regs_diff
                                    [0x16U]),64);
        tracep->fullQData(oldp+641,(vlSelf->SimTop__DOT__regs_diff
                                    [0x17U]),64);
        tracep->fullQData(oldp+643,(vlSelf->SimTop__DOT__regs_diff
                                    [0x18U]),64);
        tracep->fullQData(oldp+645,(vlSelf->SimTop__DOT__regs_diff
                                    [0x19U]),64);
        tracep->fullQData(oldp+647,(vlSelf->SimTop__DOT__regs_diff
                                    [0x1aU]),64);
        tracep->fullQData(oldp+649,(vlSelf->SimTop__DOT__regs_diff
                                    [0x1bU]),64);
        tracep->fullQData(oldp+651,(vlSelf->SimTop__DOT__regs_diff
                                    [0x1cU]),64);
        tracep->fullQData(oldp+653,(vlSelf->SimTop__DOT__regs_diff
                                    [0x1dU]),64);
        tracep->fullQData(oldp+655,(vlSelf->SimTop__DOT__regs_diff
                                    [0x1eU]),64);
        tracep->fullQData(oldp+657,(vlSelf->SimTop__DOT__regs_diff
                                    [0x1fU]),64);
        tracep->fullCData(oldp+659,((7U & (IData)(vlSelf->SimTop__DOT__trap_code))),3);
        tracep->fullBit(oldp+660,(vlSelf->SimTop__DOT__ds_allowin));
        tracep->fullBit(oldp+661,(vlSelf->SimTop__DOT__i_ram_en));
        tracep->fullBit(oldp+662,(vlSelf->SimTop__DOT__pcwrite));
        tracep->fullBit(oldp+663,(vlSelf->SimTop__DOT__IF_ID_write));
        tracep->fullBit(oldp+664,(vlSelf->SimTop__DOT__IF__DOT__fs_allowin));
        tracep->fullQData(oldp+665,(vlSelf->SimTop__DOT__inst_ram__DOT__inst_ext),64);
        tracep->fullQData(oldp+667,(vlSelf->SimTop__DOT__ID__DOT__imme_o),64);
        tracep->fullCData(oldp+669,((3U & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                           >> 0xaU))),2);
        tracep->fullCData(oldp+670,((3U & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                           >> 8U))),2);
        tracep->fullCData(oldp+671,((0x1fU & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                              >> 0xcU))),5);
        tracep->fullCData(oldp+672,((3U & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                           >> 5U))),2);
        tracep->fullBit(oldp+673,((1U & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                         >> 7U))));
        tracep->fullBit(oldp+674,((1U & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                         >> 2U))));
        tracep->fullBit(oldp+675,((1U & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                         >> 1U))));
        tracep->fullCData(oldp+676,((3U & (vlSelf->SimTop__DOT__ID__DOT__con_signal 
                                           >> 3U))),2);
        tracep->fullBit(oldp+677,((1U & vlSelf->SimTop__DOT__ID__DOT__con_signal)));
        tracep->fullIData(oldp+678,(vlSelf->SimTop__DOT__ID__DOT__con_signal),20);
        tracep->fullBit(oldp+679,(vlSelf->clock));
        tracep->fullBit(oldp+680,(vlSelf->reset));
        tracep->fullQData(oldp+681,(vlSelf->io_logCtrl_log_begin),64);
        tracep->fullQData(oldp+683,(vlSelf->io_logCtrl_log_end),64);
        tracep->fullQData(oldp+685,(vlSelf->io_logCtrl_log_level),64);
        tracep->fullBit(oldp+687,(vlSelf->io_perfInfo_clean));
        tracep->fullBit(oldp+688,(vlSelf->io_perfInfo_dump));
        tracep->fullBit(oldp+689,(vlSelf->io_uart_out_valid));
        tracep->fullCData(oldp+690,(vlSelf->io_uart_out_ch),8);
        tracep->fullBit(oldp+691,(vlSelf->io_uart_in_valid));
        tracep->fullCData(oldp+692,(vlSelf->io_uart_in_ch),8);
        tracep->fullIData(oldp+693,(vlSelf->ws_inst),32);
        tracep->fullQData(oldp+694,(vlSelf->pc_out),64);
        tracep->fullBit(oldp+696,(((~ (IData)(vlSelf->reset)) 
                                   & ((vlSelf->SimTop__DOT__es_to_ms_bus[2U] 
                                       >> 0xbU) & (
                                                   ((0x1fU 
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
        tracep->fullBit(oldp+697,((1U & (~ (IData)(vlSelf->reset)))));
        tracep->fullQData(oldp+698,(((((- (QData)((IData)(
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
        tracep->fullBit(oldp+700,(1U));
        tracep->fullQData(oldp+701,(0ULL),64);
        tracep->fullBit(oldp+703,(0U));
        tracep->fullCData(oldp+704,(0U),8);
        tracep->fullCData(oldp+705,(3U),2);
    }
}
