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

void VSimTop___024root___settle__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<4>/*127:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    // Body
    vlSelf->io_memAXI_0_ar_bits_prot = 0U;
    vlSelf->io_memAXI_0_ar_bits_id = 0U;
    vlSelf->io_memAXI_0_ar_bits_user = 0U;
    vlSelf->io_memAXI_0_ar_bits_size = 3U;
    vlSelf->io_memAXI_0_ar_bits_burst = 1U;
    vlSelf->io_memAXI_0_ar_bits_lock = 0U;
    vlSelf->io_memAXI_0_ar_bits_cache = 2U;
    vlSelf->io_memAXI_0_ar_bits_qos = 0U;
    vlSelf->SimTop__DOT__u_axi_rw__DOT__w_hs = ((IData)(vlSelf->SimTop__DOT__w_ready) 
                                                & (IData)(vlSelf->SimTop__DOT__w_valid));
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_opcode = 
        (0xf1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_opcode));
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_opcode = 
        (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_opcode));
    vlSelf->io_memAXI_0_ar_valid = (1U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state));
    vlSelf->io_memAXI_0_r_ready = (2U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state));
    vlSelf->SimTop__DOT__u_axi_rw__DOT__ar_hs = ((IData)(vlSelf->io_memAXI_0_ar_ready) 
                                                 & (1U 
                                                    == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state)));
    vlSelf->SimTop__DOT__u_axi_rw__DOT__r_hs = ((2U 
                                                 == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state)) 
                                                & (IData)(vlSelf->io_memAXI_0_r_valid));
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
        [0U];
    VL_EXTEND_WQ(65,64, __Vtemp1, vlSelf->SimTop__DOT__if_addr);
    vlSelf->io_memAXI_0_ar_bits_addr = (0xfffffffffffffff8ULL 
                                        & (((QData)((IData)(
                                                            __Vtemp1[1U])) 
                                            << 0x20U) 
                                           | (0xfffffffffffffff8ULL 
                                              & (QData)((IData)(
                                                                __Vtemp1[0U])))));
    __Vtemp2[0U] = 0xffffffffU;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 0U;
    __Vtemp2[3U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->SimTop__DOT__if_addr);
    VL_SHIFTL_WWI(128,128,6, __Vtemp4, __Vtemp2, (0x38U 
                                                  & (__Vtemp3[0U] 
                                                     << 3U)));
    VL_EXTEND_WQ(65,64, __Vtemp5, vlSelf->SimTop__DOT__if_addr);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_r_data_l 
        = ((vlSelf->io_memAXI_0_r_bits_data[0U] & (
                                                   ((QData)((IData)(
                                                                    __Vtemp4[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     __Vtemp4[0U])))) 
           >> (0x38U & (__Vtemp5[0U] << 3U)));
    VL_EXTEND_WQ(65,64, __Vtemp6, vlSelf->SimTop__DOT__if_addr);
    VL_EXTEND_WQ(65,64, __Vtemp7, vlSelf->SimTop__DOT__if_addr);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_len = (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp6[0U]))
                                                    ? 0U
                                                    : 
                                                   (1U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        (7U 
                                                         & __Vtemp7[0U])) 
                                                       >> 3U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__Id_stage__DOT__inst_addi 
        = (IData)((0x10U == (0x703cU & vlSelf->SimTop__DOT__u_cpu__DOT__inst)));
    vlSelf->SimTop__DOT__u_axi_rw__DOT__r_done = ((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_hs) 
                                                  & (IData)(vlSelf->io_memAXI_0_r_bits_last));
    vlSelf->io_memAXI_0_ar_bits_len = vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_len;
    vlSelf->SimTop__DOT__u_axi_rw__DOT__len_incr_en 
        = (((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__len) 
            != (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_len)) 
           & ((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_hs) 
              | (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_hs)));
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
    vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready_en 
        = ((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_done) 
           | (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready));
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

void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_settle\n"); );
    // Body
    VSimTop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->io_memAXI_0_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_aw_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->io_memAXI_0_aw_bits_prot = VL_RAND_RESET_I(3);
    vlSelf->io_memAXI_0_aw_bits_id = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_aw_bits_user = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_aw_bits_len = VL_RAND_RESET_I(8);
    vlSelf->io_memAXI_0_aw_bits_size = VL_RAND_RESET_I(3);
    vlSelf->io_memAXI_0_aw_bits_burst = VL_RAND_RESET_I(2);
    vlSelf->io_memAXI_0_aw_bits_lock = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_aw_bits_cache = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_aw_bits_qos = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_w_ready = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_w_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->io_memAXI_0_w_bits_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->io_memAXI_0_w_bits_strb = VL_RAND_RESET_I(8);
    vlSelf->io_memAXI_0_w_bits_last = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_b_ready = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_b_valid = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_b_bits_resp = VL_RAND_RESET_I(2);
    vlSelf->io_memAXI_0_b_bits_id = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_b_bits_user = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_ar_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->io_memAXI_0_ar_bits_prot = VL_RAND_RESET_I(3);
    vlSelf->io_memAXI_0_ar_bits_id = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_ar_bits_user = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_ar_bits_len = VL_RAND_RESET_I(8);
    vlSelf->io_memAXI_0_ar_bits_size = VL_RAND_RESET_I(3);
    vlSelf->io_memAXI_0_ar_bits_burst = VL_RAND_RESET_I(2);
    vlSelf->io_memAXI_0_ar_bits_lock = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_ar_bits_cache = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_ar_bits_qos = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_r_ready = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_r_valid = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_r_bits_resp = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->io_memAXI_0_r_bits_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->io_memAXI_0_r_bits_last = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_r_bits_id = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_r_bits_user = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__aw_ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__aw_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__aw_addr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__aw_prot = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__aw_id = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__aw_user = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__aw_len = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__aw_size = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__aw_burst = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__aw_lock = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__aw_cache = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__aw_qos = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__aw_region = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__w_ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__w_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__w_data = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__w_strb = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__w_last = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__w_user = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__b_ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__b_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__b_resp = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__b_id = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__b_user = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__ar_region = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(65, vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o);
    vlSelf->SimTop__DOT__data_write = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__if_addr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__w_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__ar_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__r_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__r_done = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__w_state = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__len = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__len_incr_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_len = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_resp = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_r_data_l = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_ena = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_type = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_opcode = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__rd_data = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__fetched = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__w_ena = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__trap_code = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__If_stage__DOT__addr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__Id_stage__DOT__inst_addi = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
