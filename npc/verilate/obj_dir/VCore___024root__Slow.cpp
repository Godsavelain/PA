// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore___024root.h"
#include "VCore__Syms.h"

#include "verilated_dpi.h"

//==========


void VCore___024root___ctor_var_reset(VCore___024root* vlSelf);

VCore___024root::VCore___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VCore___024root___ctor_var_reset(this);
}

void VCore___024root::__Vconfigure(VCore__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VCore___024root::~VCore___024root() {
}

void VCore___024root___initial__TOP__1(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->io_imem_req_valid = 1U;
    vlSelf->io_imem_req_bits_waddr = 0U;
    vlSelf->io_imem_req_bits_wdata = 0ULL;
    vlSelf->io_imem_req_bits_wen = 0U;
    vlSelf->io_imem_req_bits_wmask = 0U;
    vlSelf->io_imem_resp_ready = 1U;
    vlSelf->io_dmem_req_valid = 1U;
    vlSelf->io_dmem_resp_ready = 1U;
}

void VCore___024root___settle__TOP__4(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___settle__TOP__4\n"); );
    // Variables
    CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_326;
    CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_341;
    CData/*1:0*/ Core__DOT__decode__DOT___ctrl_T_479;
    CData/*1:0*/ Core__DOT__decode__DOT___ctrl_T_494;
    CData/*1:0*/ Core__DOT__decode__DOT___ctrl_T_551;
    CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_672;
    CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_688;
    CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_703;
    CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_752;
    CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_770;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_810;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_825;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_856;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_888;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_904;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_934;
    CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_968;
    CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_993;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_1026;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_1041;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_1072;
    CData/*0:0*/ Core__DOT__execute__DOT__alu__DOT___out0_T_11;
    CData/*0:0*/ Core__DOT__execute__DOT__alu__DOT___out0_T_12;
    VlWide<4>/*127:0*/ __Vtemp1801;
    VlWide<4>/*127:0*/ __Vtemp1844;
    VlWide<4>/*127:0*/ __Vtemp1881;
    VlWide<4>/*127:0*/ __Vtemp1952;
    VlWide<4>/*127:0*/ __Vtemp1995;
    VlWide<4>/*127:0*/ __Vtemp2038;
    VlWide<4>/*127:0*/ __Vtemp2081;
    VlWide<4>/*127:0*/ __Vtemp2161;
    VlWide<4>/*127:0*/ __Vtemp2204;
    VlWide<3>/*95:0*/ __Vtemp2225;
    VlWide<3>/*95:0*/ __Vtemp2226;
    VlWide<3>/*95:0*/ __Vtemp2442;
    VlWide<3>/*95:0*/ __Vtemp2443;
    VlWide<3>/*95:0*/ __Vtemp2444;
    VlWide<3>/*95:0*/ __Vtemp2446;
    VlWide<3>/*95:0*/ __Vtemp2448;
    VlWide<3>/*95:0*/ __Vtemp2451;
    VlWide<4>/*127:0*/ __Vtemp2588;
    VlWide<4>/*127:0*/ __Vtemp2612;
    VlWide<4>/*127:0*/ __Vtemp2613;
    VlWide<3>/*95:0*/ __Vtemp2617;
    VlWide<4>/*127:0*/ __Vtemp2621;
    VlWide<4>/*127:0*/ __Vtemp2622;
    VlWide<4>/*127:0*/ __Vtemp2625;
    VlWide<4>/*127:0*/ __Vtemp2626;
    QData/*63:0*/ Core__DOT__regfile__DOT___GEN_13;
    QData/*63:0*/ Core__DOT__regfile__DOT___GEN_45;
    QData/*63:0*/ Core__DOT__execute__DOT___rs1_temp_T_2;
    QData/*63:0*/ Core__DOT__execute__DOT___rs1_temp_T_11;
    QData/*63:0*/ Core__DOT__execute__DOT___rs2_temp_T_11;
    QData/*63:0*/ Core__DOT__execute__DOT__mdu__DOT___temp_x_T_2;
    QData/*63:0*/ Core__DOT__execute__DOT__mdu__DOT___temp_y_T_2;
    // Body
    vlSelf->io_commit_pc = vlSelf->Core__DOT__io_commit_pc_REG;
    vlSelf->io_regs_out_0 = vlSelf->Core__DOT__regfile__DOT__rf_0;
    vlSelf->io_regs_out_1 = vlSelf->Core__DOT__regfile__DOT__rf_1;
    vlSelf->io_regs_out_2 = vlSelf->Core__DOT__regfile__DOT__rf_2;
    vlSelf->io_regs_out_3 = vlSelf->Core__DOT__regfile__DOT__rf_3;
    vlSelf->io_regs_out_4 = vlSelf->Core__DOT__regfile__DOT__rf_4;
    vlSelf->io_regs_out_5 = vlSelf->Core__DOT__regfile__DOT__rf_5;
    vlSelf->io_regs_out_6 = vlSelf->Core__DOT__regfile__DOT__rf_6;
    vlSelf->io_regs_out_7 = vlSelf->Core__DOT__regfile__DOT__rf_7;
    vlSelf->io_regs_out_8 = vlSelf->Core__DOT__regfile__DOT__rf_8;
    vlSelf->io_regs_out_9 = vlSelf->Core__DOT__regfile__DOT__rf_9;
    vlSelf->io_regs_out_10 = vlSelf->Core__DOT__regfile__DOT__rf_10;
    vlSelf->io_regs_out_11 = vlSelf->Core__DOT__regfile__DOT__rf_11;
    vlSelf->io_regs_out_12 = vlSelf->Core__DOT__regfile__DOT__rf_12;
    vlSelf->io_regs_out_13 = vlSelf->Core__DOT__regfile__DOT__rf_13;
    vlSelf->io_regs_out_14 = vlSelf->Core__DOT__regfile__DOT__rf_14;
    vlSelf->io_regs_out_15 = vlSelf->Core__DOT__regfile__DOT__rf_15;
    vlSelf->io_regs_out_16 = vlSelf->Core__DOT__regfile__DOT__rf_16;
    vlSelf->io_regs_out_17 = vlSelf->Core__DOT__regfile__DOT__rf_17;
    vlSelf->io_regs_out_18 = vlSelf->Core__DOT__regfile__DOT__rf_18;
    vlSelf->io_regs_out_19 = vlSelf->Core__DOT__regfile__DOT__rf_19;
    vlSelf->io_regs_out_20 = vlSelf->Core__DOT__regfile__DOT__rf_20;
    vlSelf->io_regs_out_21 = vlSelf->Core__DOT__regfile__DOT__rf_21;
    vlSelf->io_regs_out_22 = vlSelf->Core__DOT__regfile__DOT__rf_22;
    vlSelf->io_regs_out_23 = vlSelf->Core__DOT__regfile__DOT__rf_23;
    vlSelf->io_regs_out_24 = vlSelf->Core__DOT__regfile__DOT__rf_24;
    vlSelf->io_regs_out_25 = vlSelf->Core__DOT__regfile__DOT__rf_25;
    vlSelf->io_regs_out_26 = vlSelf->Core__DOT__regfile__DOT__rf_26;
    vlSelf->io_commit = vlSelf->Core__DOT__io_commit_REG;
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___quo_out_T_11 
        = ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_neg)
            ? (1ULL + (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_out))
            : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_out);
    Core__DOT__execute__DOT__mdu__DOT___temp_x_T_2 
        = (((QData)((IData)(((1U & (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[0U] = 0U;
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
             << 0xaU) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                         << 0xcU)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
                                      << 0xeU));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[2U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
              >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
                           << 0xaU)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                                         >> 0x14U) 
                                        | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                                           << 0xcU))) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
               >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
                            << 0xeU)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[3U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
              >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[2U] 
                           << 0xaU)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                                         >> 0x14U) 
                                        | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[2U] 
                                           << 0xcU))) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
               >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[2U] 
                            << 0xeU)));
    __Vtemp1801[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
                           >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
                                        << 0x10U)) 
                         & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                             >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                                         << 0x12U))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                             >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                                         << 0x12U)) 
                           & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
                               >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
                                           << 0x14U)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
                                        << 0x14U)) 
                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
                              >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
                                           << 0x10U))));
    __Vtemp1801[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
                           >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[2U] 
                                        << 0x10U)) 
                         & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                             >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[2U] 
                                         << 0x12U))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                             >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[2U] 
                                         << 0x12U)) 
                           & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
                               >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[2U] 
                                           << 0x14U)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[2U] 
                                        << 0x14U)) 
                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
                              >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[2U] 
                                           << 0x10U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U] = 0U;
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
              << 0x10U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                           << 0x12U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                                          << 0x12U) 
                                         & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
                                            << 0x14U))) 
           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
               << 0x14U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
                            << 0x10U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U] 
        = __Vtemp1801[2U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[3U] 
        = __Vtemp1801[3U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[0U] = 0U;
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
             << 0x10U) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                          << 0x12U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
                                        << 0x14U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[2U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
              >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
                           << 0x10U)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                                          >> 0xeU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                                            << 0x12U))) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
               >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
                           << 0x14U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[3U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
              >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[2U] 
                           << 0x10U)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                                          >> 0xeU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[2U] 
                                            << 0x12U))) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
               >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[2U] 
                           << 0x14U)));
    __Vtemp1844[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
                           >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
                                       << 0x16U)) & 
                         ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                           >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                                     << 0x18U))) | 
                        (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                           >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                                     << 0x18U)) & (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
                                                    >> 6U) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
                                                      << 0x1aU)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
                                      << 0x1aU)) & 
                          ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
                                        << 0x16U))));
    __Vtemp1844[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
                           >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[2U] 
                                       << 0x16U)) & 
                         ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                           >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[2U] 
                                     << 0x18U))) | 
                        (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                           >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[2U] 
                                     << 0x18U)) & (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
                                                    >> 6U) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[2U] 
                                                      << 0x1aU)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[2U] 
                                      << 0x1aU)) & 
                          ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[2U] 
                                        << 0x16U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U] = 0U;
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
              << 0x16U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                           << 0x18U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                                          << 0x18U) 
                                         & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
                                            << 0x1aU))) 
           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
               << 0x1aU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
                            << 0x16U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U] 
        = __Vtemp1844[2U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[3U] 
        = __Vtemp1844[3U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[0U] = 0U;
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
             << 0x16U) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                          << 0x18U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
                                        << 0x1aU));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[2U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
              >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
                          << 0x16U)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                                         >> 8U) | (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                                                   << 0x18U))) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
               >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
                         << 0x1aU)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[3U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
              >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[2U] 
                          << 0x16U)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                                         >> 8U) | (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[2U] 
                                                   << 0x18U))) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
               >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[2U] 
                         << 0x1aU)));
    __Vtemp1881[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U] 
                           >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
                                     << 0x1cU)) & (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U] 
                                                    >> 2U) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                                                      << 0x1eU))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U] 
                             >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                                       << 0x1eU)) & (IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U])))))) 
                       | ((IData)((((QData)((IData)(
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U])))) 
                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U] 
                              >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
                                        << 0x1cU))));
    __Vtemp1881[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
                           >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[2U] 
                                     << 0x1cU)) & (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                                                    >> 2U) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[2U] 
                                                      << 0x1eU))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                             >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[2U] 
                                       << 0x1eU)) & (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U]))) 
                                                             >> 0x20U)))) 
                       | ((IData)(((((QData)((IData)(
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U]))) 
                                   >> 0x20U)) & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
                                                  >> 4U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[2U] 
                                                    << 0x1cU))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U] = 0U;
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U] 
            << 0x1cU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U] 
                         << 0x1eU));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U] 
        = __Vtemp1881[2U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[3U] 
        = __Vtemp1881[3U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[0U] = 0U;
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U] 
            << 0x1cU) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U] 
                         << 0x1eU));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[2U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U] 
              >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
                        << 0x1cU)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U] 
                                       >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                                                 << 0x1eU))) 
           ^ (IData)((((QData)((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U])))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[3U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
              >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[2U] 
                        << 0x1cU)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                                       >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[2U] 
                                                 << 0x1eU))) 
           ^ (IData)(((((QData)((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U]))) 
                      >> 0x20U)));
    Core__DOT__execute__DOT__mdu__DOT___temp_y_T_2 
        = (((QData)((IData)(((1U & (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y)));
    vlSelf->Core__DOT__mem__DOT__ld_data_raw = (vlSelf->io_dmem_resp_bits_rdata 
                                                >> 
                                                (0x38U 
                                                 & (vlSelf->Core__DOT__mem__DOT__reg_mem_addr 
                                                    << 3U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0[0U] 
             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U] 
                << 2U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U] 
                            << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U] 
                                      << 4U))) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U] 
                                                   << 4U) 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0[0U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0[1U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U] 
                 >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U] 
                              << 2U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U] 
                                            >> 0x1eU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U] 
                                              << 2U)) 
                                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U] 
                                              >> 0x1cU) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U] 
                                                << 4U)))) 
           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U] 
                >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U] 
                             << 4U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0[1U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0[2U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U] 
                 >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U] 
                              << 2U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U] 
                                            >> 0x1eU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U] 
                                              << 2U)) 
                                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U] 
                                              >> 0x1cU) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U] 
                                                << 4U)))) 
           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U] 
                >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U] 
                             << 4U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0[2U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[3U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0[3U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U] 
                 >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[3U] 
                              << 2U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U] 
                                            >> 0x1eU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[3U] 
                                              << 2U)) 
                                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U] 
                                              >> 0x1cU) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[3U] 
                                                << 4U)))) 
           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U] 
                >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[3U] 
                             << 4U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0[3U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[0U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0[0U] 
            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U] 
               << 2U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U] 
                          << 4U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0[1U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U] 
                >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U] 
                             << 2U))) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U] 
                                          >> 0x1cU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U] 
                                            << 4U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[2U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0[2U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U] 
                >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U] 
                             << 2U))) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U] 
                                          >> 0x1cU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U] 
                                            << 4U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[3U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0[3U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U] 
                >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[3U] 
                             << 2U))) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U] 
                                          >> 0x1cU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[3U] 
                                            << 4U)));
    __Vtemp1952[1U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U] 
                           >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U] 
                                        << 6U)) & (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U] 
                                                    >> 0x18U) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U] 
                                                      << 8U))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U] 
                             >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U] 
                                          << 8U)) & 
                           ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U] 
                             >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U] 
                                          << 0xaU)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U] 
                                         << 0xaU)) 
                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U] 
                              >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U] 
                                           << 6U))));
    __Vtemp1952[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U] 
                           >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U] 
                                        << 6U)) & (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U] 
                                                    >> 0x18U) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U] 
                                                      << 8U))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U] 
                             >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U] 
                                          << 8U)) & 
                           ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U] 
                             >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U] 
                                          << 0xaU)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U] 
                                         << 0xaU)) 
                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U] 
                              >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U] 
                                           << 6U))));
    __Vtemp1952[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U] 
                           >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[3U] 
                                        << 6U)) & (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U] 
                                                    >> 0x18U) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[3U] 
                                                      << 8U))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U] 
                             >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[3U] 
                                          << 8U)) & 
                           ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U] 
                             >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[3U] 
                                          << 0xaU)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[3U] 
                                         << 0xaU)) 
                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U] 
                              >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[3U] 
                                           << 6U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U] 
              << 6U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U] 
                        << 8U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U] 
                                    << 8U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U] 
                                              << 0xaU))) 
           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U] 
               << 0xaU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U] 
                           << 6U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U] 
        = __Vtemp1952[1U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U] 
        = __Vtemp1952[2U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[3U] 
        = __Vtemp1952[3U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U] 
             << 6U) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U] 
                       << 8U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U] 
                                  << 0xaU));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[1U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U] 
              >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U] 
                           << 6U)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U] 
                                       >> 0x18U) | 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U] 
                                       << 8U))) ^ (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U] 
                                                    >> 0x16U) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U] 
                                                      << 0xaU)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[2U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U] 
              >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U] 
                           << 6U)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U] 
                                       >> 0x18U) | 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U] 
                                       << 8U))) ^ (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U] 
                                                    >> 0x16U) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U] 
                                                      << 0xaU)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[3U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U] 
              >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[3U] 
                           << 6U)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U] 
                                       >> 0x18U) | 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[3U] 
                                       << 8U))) ^ (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U] 
                                                    >> 0x16U) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[3U] 
                                                      << 0xaU)));
    __Vtemp1995[1U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U] 
                           >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U] 
                                        << 0xcU)) & 
                         ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U] 
                           >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U] 
                                        << 0xeU))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U] 
                             >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U] 
                                          << 0xeU)) 
                           & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U] 
                               >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U] 
                                            << 0x10U)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U] 
                                         << 0x10U)) 
                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U] 
                              >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U] 
                                           << 0xcU))));
    __Vtemp1995[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U] 
                           >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U] 
                                        << 0xcU)) & 
                         ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U] 
                           >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U] 
                                        << 0xeU))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U] 
                             >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U] 
                                          << 0xeU)) 
                           & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U] 
                               >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U] 
                                            << 0x10U)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U] 
                                         << 0x10U)) 
                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U] 
                              >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U] 
                                           << 0xcU))));
    __Vtemp1995[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U] 
                           >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[3U] 
                                        << 0xcU)) & 
                         ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U] 
                           >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[3U] 
                                        << 0xeU))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U] 
                             >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[3U] 
                                          << 0xeU)) 
                           & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U] 
                               >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[3U] 
                                            << 0x10U)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[3U] 
                                         << 0x10U)) 
                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U] 
                              >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[3U] 
                                           << 0xcU))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U] 
              << 0xcU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U] 
                          << 0xeU)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U] 
                                        << 0xeU) & 
                                       (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U] 
                                        << 0x10U))) 
           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U] 
               << 0x10U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U] 
                            << 0xcU)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U] 
        = __Vtemp1995[1U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U] 
        = __Vtemp1995[2U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[3U] 
        = __Vtemp1995[3U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U] 
             << 0xcU) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U] 
                         << 0xeU)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U] 
                                      << 0x10U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[1U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U] 
              >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U] 
                           << 0xcU)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U] 
                                         >> 0x12U) 
                                        | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U] 
                                           << 0xeU))) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U] 
               >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U] 
                            << 0x10U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[2U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U] 
              >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U] 
                           << 0xcU)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U] 
                                         >> 0x12U) 
                                        | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U] 
                                           << 0xeU))) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U] 
               >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U] 
                            << 0x10U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[3U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U] 
              >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[3U] 
                           << 0xcU)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U] 
                                         >> 0x12U) 
                                        | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[3U] 
                                           << 0xeU))) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U] 
               >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[3U] 
                            << 0x10U)));
    __Vtemp2038[1U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U] 
                           >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U] 
                                       << 0x12U)) & 
                         ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U] 
                           >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U] 
                                       << 0x14U))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U] 
                             >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U] 
                                         << 0x14U)) 
                           & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U] 
                               >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U] 
                                           << 0x16U)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U] 
                                        << 0x16U)) 
                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U] 
                              >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U] 
                                          << 0x12U))));
    __Vtemp2038[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U] 
                           >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U] 
                                       << 0x12U)) & 
                         ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U] 
                           >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U] 
                                       << 0x14U))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U] 
                             >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U] 
                                         << 0x14U)) 
                           & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U] 
                               >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U] 
                                           << 0x16U)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U] 
                                        << 0x16U)) 
                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U] 
                              >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U] 
                                          << 0x12U))));
    __Vtemp2038[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U] 
                           >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[3U] 
                                       << 0x12U)) & 
                         ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U] 
                           >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[3U] 
                                       << 0x14U))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U] 
                             >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[3U] 
                                         << 0x14U)) 
                           & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U] 
                               >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[3U] 
                                           << 0x16U)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[3U] 
                                        << 0x16U)) 
                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U] 
                              >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[3U] 
                                          << 0x12U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U] 
              << 0x12U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U] 
                           << 0x14U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U] 
                                          << 0x14U) 
                                         & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U] 
                                            << 0x16U))) 
           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U] 
               << 0x16U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U] 
                            << 0x12U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U] 
        = __Vtemp2038[1U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U] 
        = __Vtemp2038[2U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[3U] 
        = __Vtemp2038[3U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U] 
             << 0x12U) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U] 
                          << 0x14U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U] 
                                        << 0x16U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[1U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U] 
              >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U] 
                          << 0x12U)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U] 
                                         >> 0xcU) | 
                                        (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U] 
                                         << 0x14U))) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U] 
               >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U] 
                           << 0x16U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[2U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U] 
              >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U] 
                          << 0x12U)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U] 
                                         >> 0xcU) | 
                                        (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U] 
                                         << 0x14U))) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U] 
               >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U] 
                           << 0x16U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[3U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U] 
              >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[3U] 
                          << 0x12U)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U] 
                                         >> 0xcU) | 
                                        (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[3U] 
                                         << 0x14U))) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U] 
               >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[3U] 
                           << 0x16U)));
    __Vtemp2081[1U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U] 
                           >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U] 
                                     << 0x18U)) & (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U] 
                                                    >> 6U) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U] 
                                                      << 0x1aU))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U] 
                             >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U] 
                                       << 0x1aU)) & 
                           ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U] 
                             >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U] 
                                       << 0x1cU)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U] 
                                      << 0x1cU)) & 
                          ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U] 
                                      << 0x18U))));
    __Vtemp2081[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U] 
                           >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U] 
                                     << 0x18U)) & (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U] 
                                                    >> 6U) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U] 
                                                      << 0x1aU))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U] 
                             >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U] 
                                       << 0x1aU)) & 
                           ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U] 
                             >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U] 
                                       << 0x1cU)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U] 
                                      << 0x1cU)) & 
                          ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U] 
                                      << 0x18U))));
    __Vtemp2081[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U] 
                           >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[3U] 
                                     << 0x18U)) & (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U] 
                                                    >> 6U) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[3U] 
                                                      << 0x1aU))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U] 
                             >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[3U] 
                                       << 0x1aU)) & 
                           ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U] 
                             >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[3U] 
                                       << 0x1cU)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[3U] 
                                      << 0x1cU)) & 
                          ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[3U] 
                                      << 0x18U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U] 
              << 0x18U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U] 
                           << 0x1aU)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U] 
                                          << 0x1aU) 
                                         & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U] 
                                            << 0x1cU))) 
           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U] 
               << 0x1cU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U] 
                            << 0x18U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U] 
        = __Vtemp2081[1U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U] 
        = __Vtemp2081[2U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[3U] 
        = __Vtemp2081[3U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U] 
             << 0x18U) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U] 
                          << 0x1aU)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U] 
                                        << 0x1cU));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[1U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U] 
              >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U] 
                        << 0x18U)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U] 
                                       >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U] 
                                                 << 0x1aU))) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U] 
               >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U] 
                         << 0x1cU)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[2U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U] 
              >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U] 
                        << 0x18U)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U] 
                                       >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U] 
                                                 << 0x1aU))) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U] 
               >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U] 
                         << 0x1cU)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[3U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U] 
              >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[3U] 
                        << 0x18U)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U] 
                                       >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[3U] 
                                                 << 0x1aU))) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U] 
               >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[3U] 
                         << 0x1cU)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U] = 0U;
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U] 
        = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U] 
               >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U] 
                         << 0x1eU)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[0U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[0U] 
               & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
                  << 2U))) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
                               << 2U) & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U] 
                                          >> 2U) | 
                                         (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U] 
                                          << 0x1eU))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U] 
        = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U] 
               >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U] 
                         << 0x1eU)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[1U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[1U] 
               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
                   >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
                                << 2U)))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
                                               >> 0x1eU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
                                                 << 2U)) 
                                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U] 
                                                 >> 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U] 
                                                   << 0x1eU))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[3U] 
        = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U] 
               >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[3U] 
                         << 0x1eU)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[2U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[2U] 
               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
                   >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[2U] 
                                << 2U)))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
                                               >> 0x1eU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[2U] 
                                                 << 2U)) 
                                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U] 
                                                 >> 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[3U] 
                                                   << 0x1eU))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[0U] 
        = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U] 
           << 0x1eU);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[1U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U] 
              >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U] 
                        << 0x1eU)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[0U]) 
           ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
              << 2U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[2U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U] 
              >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U] 
                        << 0x1eU)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[1U]) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
               >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
                            << 2U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[3U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U] 
              >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[3U] 
                        << 0x1eU)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[2U]) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
               >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[2U] 
                            << 2U)));
    __Vtemp2161[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
                           >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
                                        << 4U)) & (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                                                    >> 0x1aU) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                                                      << 6U))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                             >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                                          << 6U)) & 
                           ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
                             >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                                          << 8U)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                                         << 8U)) & 
                          ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
                                         << 4U))));
    __Vtemp2161[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
                           >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[2U] 
                                        << 4U)) & (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                                                    >> 0x1aU) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[2U] 
                                                      << 6U))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                             >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[2U] 
                                          << 6U)) & 
                           ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                             >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[2U] 
                                          << 8U)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[2U] 
                                         << 8U)) & 
                          ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[2U] 
                                         << 4U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U] = 0U;
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
              << 4U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                        << 6U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                                    << 6U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
                                              << 8U))) 
           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
               << 8U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
                         << 4U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U] 
        = __Vtemp2161[2U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[3U] 
        = __Vtemp2161[3U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[0U] = 0U;
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
             << 4U) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                       << 6U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
                                  << 8U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[2U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
              >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
                           << 4U)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                                       >> 0x1aU) | 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                                       << 6U))) ^ (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
                                                    >> 0x18U) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                                                      << 8U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[3U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
              >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[2U] 
                           << 4U)) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                                       >> 0x1aU) | 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[2U] 
                                       << 6U))) ^ (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                                                    >> 0x18U) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[2U] 
                                                      << 8U)));
    __Vtemp2204[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
                           >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
                                        << 0xaU)) & 
                         ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                           >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                                        << 0xcU))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                             >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                                          << 0xcU)) 
                           & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
                               >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
                                            << 0xeU)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
                                         << 0xeU)) 
                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
                              >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
                                           << 0xaU))));
    __Vtemp2204[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
                           >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[2U] 
                                        << 0xaU)) & 
                         ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                           >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[2U] 
                                        << 0xcU))) 
                        | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                             >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[2U] 
                                          << 0xcU)) 
                           & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
                               >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[2U] 
                                            << 0xeU)))) 
                       | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[2U] 
                                         << 0xeU)) 
                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
                              >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[2U] 
                                           << 0xaU))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U] = 0U;
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
              << 0xaU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                          << 0xcU)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                                        << 0xcU) & 
                                       (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
                                        << 0xeU))) 
           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
               << 0xeU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
                           << 0xaU)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U] 
        = __Vtemp2204[2U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[3U] 
        = __Vtemp2204[3U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0[0U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1[0U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1[0U] 
               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2[0U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2[0U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0[0U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0[1U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1[1U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1[1U] 
               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2[1U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2[1U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0[1U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0[2U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1[2U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1[2U] 
               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2[2U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2[2U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0[2U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[3U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0[3U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1[3U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1[3U] 
               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2[3U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2[3U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0[3U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3[0U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4[0U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4[0U] 
               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5[0U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5[0U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3[0U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3[1U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4[1U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4[1U] 
               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5[1U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5[1U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3[1U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3[2U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4[2U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4[2U] 
               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5[2U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5[2U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3[2U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[3U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3[3U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4[3U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4[3U] 
               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5[3U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5[3U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3[3U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[0U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3[0U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4[0U]) 
           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5[0U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3[1U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4[1U]) 
           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5[1U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[2U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3[2U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4[2U]) 
           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5[2U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[3U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3[3U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4[3U]) 
           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5[3U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[0U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0[0U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1[0U]) 
           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2[0U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0[1U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1[1U]) 
           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2[1U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[2U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0[2U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1[2U]) 
           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2[2U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[3U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0[3U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1[3U]) 
           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2[3U]);
    Core__DOT__execute__DOT___rs1_temp_T_2 = (((QData)((IData)(
                                                               ((vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm 
                                                                 >> 0x1fU)
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm)));
    vlSelf->io_regs_out_27 = vlSelf->Core__DOT__regfile__DOT__rf_27;
    vlSelf->io_regs_out_28 = vlSelf->Core__DOT__regfile__DOT__rf_28;
    vlSelf->io_regs_out_29 = vlSelf->Core__DOT__regfile__DOT__rf_29;
    vlSelf->io_regs_out_30 = vlSelf->Core__DOT__regfile__DOT__rf_30;
    vlSelf->io_regs_out_31 = vlSelf->Core__DOT__regfile__DOT__rf_31;
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U] 
        = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U] 
        = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U] 
        = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                      ? 0x7fffffffffffffffULL : 0ULL)) 
            << 1U) | vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U] 
        = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                      ? 0x7fffffffffffffffULL : 0ULL)) 
            >> 0x1fU) | ((IData)((((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                    ? 0x7fffffffffffffffULL
                                    : 0ULL) >> 0x20U)) 
                         << 1U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U] 
        = (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U] 
        = (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U] 
        = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                      ? 0ULL : 0x7fffffffffffffffULL)) 
            << 1U) | (1U & (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U] 
        = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                      ? 0ULL : 0x7fffffffffffffffULL)) 
            >> 0x1fU) | ((IData)((((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                    ? 0ULL : 0x7fffffffffffffffULL) 
                                  >> 0x20U)) << 1U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___T 
        = (0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___T_1 
        = (1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___cnt_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__cnt)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___T_3 
        = (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___GEN_13 
        = ((3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state))
            ? 0U : (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___rem_out_T_7 
        = ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_neg)
            ? (1ULL + (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_out))
            : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_out);
    __Vtemp2225[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U] 
                        << 1U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U] 
                                  >> 0x1fU));
    __Vtemp2225[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U] 
                        << 1U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U] 
                                  >> 0x1fU));
    __Vtemp2225[2U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U] 
                       >> 0x1fU);
    VL_SUB_W(3, __Vtemp2226, __Vtemp2225, vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[0U] 
        = __Vtemp2226[0U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[1U] 
        = __Vtemp2226[1U];
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[2U] 
        = (1U & __Vtemp2226[2U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c 
        = ((7U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
            ? 0U : ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                     ? 1U : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                              ? 1U : ((4U == (7U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                       ? 2U : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                         >> 2U))) ? 0U : ((6U == (7U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                     >> 2U)))
                                           ? 1U : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 2U)))
                                                     ? 2U
                                                     : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                         >> 4U))) ? 0U : ((6U == (7U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                     >> 4U)))
                                           ? 1U : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 4U)))
                                                     ? 2U
                                                     : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                         >> 6U))) ? 0U : ((6U == (7U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                     >> 6U)))
                                           ? 1U : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 6U)))
                                                     ? 2U
                                                     : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                         >> 8U))) ? 0U : ((6U == (7U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                     >> 8U)))
                                           ? 1U : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 8U)))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 8U)))
                                                     ? 2U
                                                     : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                         >> 0xaU))) ? 0U : ((6U == 
                                             (7U & 
                                              (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                               >> 0xaU)))
                                             ? 1U : 
                                            ((5U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xaU)))
                                              ? 1U : 
                                             ((4U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0xaU)))
                                               ? 2U
                                               : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                         >> 0xcU))) ? 0U : ((6U == 
                                             (7U & 
                                              (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                               >> 0xcU)))
                                             ? 1U : 
                                            ((5U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xcU)))
                                              ? 1U : 
                                             ((4U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0xcU)))
                                               ? 2U
                                               : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                         >> 0xeU))) ? 0U : ((6U == 
                                             (7U & 
                                              (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                               >> 0xeU)))
                                             ? 1U : 
                                            ((5U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xeU)))
                                              ? 1U : 
                                             ((4U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0xeU)))
                                               ? 2U
                                               : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                         >> 0x10U))) ? 0U : ((6U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x10U)))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x10U)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                         >> 0x12U))) ? 0U : ((6U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x12U)))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x12U)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                       >> 0x12U)))
                                                   ? 2U
                                                   : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                         >> 0x14U))) ? 0U : ((6U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x14U)))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x14U)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                       >> 0x14U)))
                                                   ? 2U
                                                   : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                         >> 0x16U))) ? 0U : ((6U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x16U)))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x16U)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                       >> 0x16U)))
                                                   ? 2U
                                                   : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                         >> 0x18U))) ? 0U : ((6U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x18U)))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x18U)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                       >> 0x18U)))
                                                   ? 2U
                                                   : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                         >> 0x1aU))) ? 0U : ((6U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1aU)))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x1aU)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                       >> 0x1aU)))
                                                   ? 2U
                                                   : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                         >> 0x1cU))) ? 0U : ((6U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1cU)))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x1cU)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                       >> 0x1cU)))
                                                   ? 2U
                                                   : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c 
        = ((7U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                    >> 0x1eU)))) ? 0U
            : ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                        >> 0x1eU))))
                ? 1U : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                       << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1eU))))
                         ? 1U : ((4U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                << 2U) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                  >> 0x1eU))))
                                  ? 2U : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                         >> 2U))) ? 0U : ((6U == (7U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                     >> 2U)))
                                           ? 1U : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 2U)))
                                                     ? 2U
                                                     : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                         >> 4U))) ? 0U : ((6U == (7U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                     >> 4U)))
                                           ? 1U : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 4U)))
                                                     ? 2U
                                                     : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                         >> 6U))) ? 0U : ((6U == (7U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                     >> 6U)))
                                           ? 1U : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 6U)))
                                                     ? 2U
                                                     : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                         >> 8U))) ? 0U : ((6U == (7U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                     >> 8U)))
                                           ? 1U : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 8U)))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 8U)))
                                                     ? 2U
                                                     : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                         >> 0xaU))) ? 0U : ((6U == 
                                             (7U & 
                                              (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                               >> 0xaU)))
                                             ? 1U : 
                                            ((5U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xaU)))
                                              ? 1U : 
                                             ((4U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0xaU)))
                                               ? 2U
                                               : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                         >> 0xcU))) ? 0U : ((6U == 
                                             (7U & 
                                              (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                               >> 0xcU)))
                                             ? 1U : 
                                            ((5U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xcU)))
                                              ? 1U : 
                                             ((4U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0xcU)))
                                               ? 2U
                                               : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                         >> 0xeU))) ? 0U : ((6U == 
                                             (7U & 
                                              (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                               >> 0xeU)))
                                             ? 1U : 
                                            ((5U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xeU)))
                                              ? 1U : 
                                             ((4U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0xeU)))
                                               ? 2U
                                               : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                         >> 0x10U))) ? 0U : ((6U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x10U)))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x10U)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                         >> 0x12U))) ? 0U : ((6U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x12U)))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x12U)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                       >> 0x12U)))
                                                   ? 2U
                                                   : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                         >> 0x14U))) ? 0U : ((6U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x14U)))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x14U)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                       >> 0x14U)))
                                                   ? 2U
                                                   : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                         >> 0x16U))) ? 0U : ((6U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x16U)))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x16U)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                       >> 0x16U)))
                                                   ? 2U
                                                   : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                         >> 0x18U))) ? 0U : ((6U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x18U)))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x18U)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                       >> 0x18U)))
                                                   ? 2U
                                                   : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                         >> 0x1aU))) ? 0U : ((6U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1aU)))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x1aU)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                       >> 0x1aU)))
                                                   ? 2U
                                                   : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c 
        = ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                         >> 0x1cU))) ? 0U : ((6U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1cU)))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x1cU)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                       >> 0x1cU)))
                                                   ? 2U
                                                   : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c 
        = ((7U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                          << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                    >> 0x1eU)))) ? 0U
            : ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                              << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                        >> 0x1eU))))
                ? 1U : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                       << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1eU))))
                         ? 1U : ((4U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                << 2U) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  >> 0x1eU))))
                                  ? 2U : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c 
        = ((7U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
            ? 0U : ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                     ? 1U : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                              ? 1U : ((4U == (7U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                       ? 2U : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c 
        = ((7U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
            ? 0U : ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                     ? 1U : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                              ? 1U : ((4U == (7U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                       ? 2U : 0U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___T 
        = (0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___T_1 
        = (1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___T_2 
        = (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___GEN_49 
        = ((3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state))
            ? 0U : (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_7 
        = ((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state)) 
           | (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__completed));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out_lo_1 
        = (((((5U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
              | (6U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
             | (0xaU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
            | (0xbU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)))
            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_out
            : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_out);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div 
        = ((((5U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
             | (7U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
            | (0xaU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
           | (0xcU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_divu 
        = ((((6U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
             | (8U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
            | (0xbU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
           | (0xdU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_word 
        = (((((9U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
              | (0xaU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
             | (0xbU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
            | (0xcU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
           | (0xdU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)));
    vlSelf->Core__DOT__mem_io_mem_rd_en = ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid) 
                                           & (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en));
    vlSelf->Core__DOT__mem__DOT__mdu_valid = ((0U != (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mdu_code)) 
                                              & (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___T = 
        (0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___T_1 
        = (1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___T_2 
        = (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_6 
        = ((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state))
            ? 0U : (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state));
    if ((3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state))) {
        vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_12 
            = ((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state))
                ? 0U : (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state));
        vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_13 
            = ((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state)) 
               | (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__completed));
    } else {
        vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_12 
            = vlSelf->Core__DOT__execute__DOT__mdu__DOT__state;
        vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_13 
            = vlSelf->Core__DOT__execute__DOT__mdu__DOT__completed;
    }
    vlSelf->Core__DOT__mem__DOT__is_load = ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                            | (2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)));
    vlSelf->Core__DOT__execute_io_ex_rd_en = ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid) 
                                              & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en));
    Core__DOT__decode__DOT___ctrl_T_551 = ((0x33U == 
                                            (0xfe00707fU 
                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 0U : 
                                           ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 0U : 
                                            ((0x1033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 0U : 
                                             ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 0U
                                               : ((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x73U 
                                                         == vlSelf->Core__DOT__decode__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((0x100073U 
                                                          == vlSelf->Core__DOT__decode__DOT__inst)
                                                          ? 0U
                                                          : 
                                                         ((0x30200073U 
                                                           == vlSelf->Core__DOT__decode__DOT__inst)
                                                           ? 0U
                                                           : 
                                                          ((0x6003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 2U
                                                            : 
                                                           ((0x3003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 3U
                                                             : 
                                                            ((0x3023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 3U
                                                              : 0U))))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_326 = ((0x7033U 
                                            == (0xfe00707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 7U : 
                                           ((0x73U 
                                             == vlSelf->Core__DOT__decode__DOT__inst)
                                             ? 0U : 
                                            ((0x100073U 
                                              == vlSelf->Core__DOT__decode__DOT__inst)
                                              ? 0U : 
                                             ((0x30200073U 
                                               == vlSelf->Core__DOT__decode__DOT__inst)
                                               ? 0U
                                               : ((0x6003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 1U
                                                   : 
                                                  ((0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 1U
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 1U
                                                      : 
                                                     ((0x101bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 8U
                                                       : 
                                                      ((0x501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 9U
                                                        : 
                                                       ((0x4000501bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 0xaU
                                                         : 
                                                        ((0x3bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 1U
                                                          : 
                                                         ((0x4000003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 2U
                                                           : 
                                                          ((0x103bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 8U
                                                            : 
                                                           ((0x503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 9U
                                                             : 
                                                            ((0x4000503bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 0xaU
                                                              : 0U))))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_968 = ((0x3023U 
                                            != (0x707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                           & ((0x1bU 
                                               == (0x707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst)) 
                                              | ((0x101bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                 | ((0x501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                    | ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                       | ((0x3bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                          | ((0x4000003bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                             | ((0x103bU 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                | ((0x503bU 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                   | ((0x4000503bU 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                      | ((0x2000033U 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                         | ((0x2001033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                            | ((0x2002033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                               | ((0x2003033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x200003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x200403bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x200503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x200603bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x200703bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x6073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | (0x7073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst))))))))))))))))))))))))))))));
    Core__DOT__regfile__DOT___GEN_13 = ((0xdU == (0x1fU 
                                                  & (vlSelf->Core__DOT__decode__DOT__inst 
                                                     >> 0xfU)))
                                         ? vlSelf->Core__DOT__regfile__DOT__rf_13
                                         : ((0xcU == 
                                             (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU)))
                                             ? vlSelf->Core__DOT__regfile__DOT__rf_12
                                             : ((0xbU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Core__DOT__decode__DOT__inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->Core__DOT__regfile__DOT__rf_11
                                                 : 
                                                ((0xaU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Core__DOT__decode__DOT__inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->Core__DOT__regfile__DOT__rf_10
                                                  : 
                                                 ((9U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Core__DOT__decode__DOT__inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->Core__DOT__regfile__DOT__rf_9
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Core__DOT__decode__DOT__inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->Core__DOT__regfile__DOT__rf_8
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Core__DOT__decode__DOT__inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->Core__DOT__regfile__DOT__rf_7
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Core__DOT__decode__DOT__inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->Core__DOT__regfile__DOT__rf_6
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Core__DOT__decode__DOT__inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->Core__DOT__regfile__DOT__rf_5
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Core__DOT__decode__DOT__inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->Core__DOT__regfile__DOT__rf_4
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Core__DOT__decode__DOT__inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->Core__DOT__regfile__DOT__rf_3
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Core__DOT__decode__DOT__inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->Core__DOT__regfile__DOT__rf_2
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->Core__DOT__regfile__DOT__rf_1
                                                           : vlSelf->Core__DOT__regfile__DOT__rf_0)))))))))))));
    Core__DOT__regfile__DOT___GEN_45 = ((0xdU == (0x1fU 
                                                  & (vlSelf->Core__DOT__decode__DOT__inst 
                                                     >> 0x14U)))
                                         ? vlSelf->Core__DOT__regfile__DOT__rf_13
                                         : ((0xcU == 
                                             (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))
                                             ? vlSelf->Core__DOT__regfile__DOT__rf_12
                                             : ((0xbU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Core__DOT__decode__DOT__inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->Core__DOT__regfile__DOT__rf_11
                                                 : 
                                                ((0xaU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Core__DOT__decode__DOT__inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->Core__DOT__regfile__DOT__rf_10
                                                  : 
                                                 ((9U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Core__DOT__decode__DOT__inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->Core__DOT__regfile__DOT__rf_9
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Core__DOT__decode__DOT__inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->Core__DOT__regfile__DOT__rf_8
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Core__DOT__decode__DOT__inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->Core__DOT__regfile__DOT__rf_7
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Core__DOT__decode__DOT__inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->Core__DOT__regfile__DOT__rf_6
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Core__DOT__decode__DOT__inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->Core__DOT__regfile__DOT__rf_5
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Core__DOT__decode__DOT__inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->Core__DOT__regfile__DOT__rf_4
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Core__DOT__decode__DOT__inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->Core__DOT__regfile__DOT__rf_3
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Core__DOT__decode__DOT__inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->Core__DOT__regfile__DOT__rf_2
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->Core__DOT__regfile__DOT__rf_1
                                                           : vlSelf->Core__DOT__regfile__DOT__rf_0)))))))))))));
    Core__DOT__decode__DOT___ctrl_T_672 = ((0x503bU 
                                            == (0xfe00707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 0U : 
                                           ((0x4000503bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 0U : 
                                            ((0x2000033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 1U : 
                                             ((0x2001033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 2U
                                               : ((0x2002033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 3U
                                                   : 
                                                  ((0x2003033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 4U
                                                    : 
                                                   ((0x2004033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 5U
                                                     : 
                                                    ((0x2005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 6U
                                                      : 
                                                     ((0x2006033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 7U
                                                       : 
                                                      ((0x2007033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 8U
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 9U
                                                         : 
                                                        ((0x200403bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 0xaU
                                                          : 
                                                         ((0x200503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 0xbU
                                                           : 
                                                          ((0x200603bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 0xcU
                                                            : 
                                                           ((0x200703bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 0xdU
                                                             : 0U)))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_752 = ((0x3023U 
                                            != (0x707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                           & ((0x1bU 
                                               == (0x707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst)) 
                                              | ((0x101bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                 | ((0x501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                    | ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                       | ((0x3bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                          | ((0x4000003bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                             | ((0x103bU 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                | ((0x503bU 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                   | ((0x4000503bU 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                      | ((0x2000033U 
                                                                          != 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                         & ((0x2001033U 
                                                                             != 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                            & ((0x2002033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                               & ((0x2003033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & ((0x2004033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & ((0x2005033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & ((0x2006033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & ((0x2007033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & ((0x200003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x200403bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x200503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x200603bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | (0x200703bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst))))))))))))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_1026 = ((0x2004033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 0U : 
                                            ((0x2005033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 0U : 
                                             ((0x2006033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 0U
                                               : ((0x2007033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x200003bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x200403bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x200503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x200603bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x200703bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x1073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x2073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x3073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 7U
                                                            : 
                                                           ((0x6073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 7U
                                                             : 
                                                            ((0x7073U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 7U
                                                              : 0U)))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_479 = ((0x33U == 
                                            (0xfe00707fU 
                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 0U : 
                                           ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 0U : 
                                            ((0x1033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 0U : 
                                             ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 0U
                                               : ((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x73U 
                                                         == vlSelf->Core__DOT__decode__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((0x100073U 
                                                          == vlSelf->Core__DOT__decode__DOT__inst)
                                                          ? 0U
                                                          : 
                                                         ((0x30200073U 
                                                           == vlSelf->Core__DOT__decode__DOT__inst)
                                                           ? 0U
                                                           : 
                                                          ((0x6003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 2U
                                                            : 
                                                           ((0x3003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 2U
                                                             : 
                                                            ((0x3023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 3U
                                                              : 0U))))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_810 = ((0x2004033U 
                                            == (0xfe00707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 1U : 
                                           ((0x2005033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 1U : 
                                            ((0x2006033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 1U : 
                                             ((0x2007033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 1U
                                               : ((0x200003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 1U
                                                   : 
                                                  ((0x200403bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x200503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 1U
                                                     : 
                                                    ((0x200603bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 1U
                                                      : 
                                                     ((0x200703bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 1U
                                                       : 
                                                      ((0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 1U
                                                        : 
                                                       ((0x2073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 1U
                                                         : 
                                                        ((0x3073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 1U
                                                          : 
                                                         ((0x5073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 2U
                                                           : 
                                                          ((0x6073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 2U
                                                            : 
                                                           ((0x7073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 2U
                                                             : 0U)))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_888 = ((0x503bU 
                                            == (0xfe00707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 1U : 
                                           ((0x4000503bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 1U : 
                                            ((0x2000033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 1U : 
                                             ((0x2001033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 1U
                                               : ((0x2002033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 1U
                                                   : 
                                                  ((0x2003033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x2004033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 1U
                                                     : 
                                                    ((0x2005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 1U
                                                      : 
                                                     ((0x2006033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 1U
                                                       : 
                                                      ((0x2007033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 1U
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 1U
                                                         : 
                                                        ((0x200403bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 1U
                                                          : 
                                                         ((0x200503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 1U
                                                           : 
                                                          ((0x200603bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 1U
                                                            : 
                                                           ((0x200703bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 1U
                                                             : 0U)))))))))))))));
    vlSelf->Core__DOT__fetch__DOT___npc_s_T_5 = ((IData)(4U) 
                                                 + 
                                                 (0xfffffffcU 
                                                  & vlSelf->Core__DOT__fetch__DOT__pc));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[0U] 
             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U] 
                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U] 
                            << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[0U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[0U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[0U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[1U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[1U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[1U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[1U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[2U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[2U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[2U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[2U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[3U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[3U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[3U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[3U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[3U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[3U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[0U] 
            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U] 
               << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[0U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[1U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[1U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[2U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[2U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[3U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s[3U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[3U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s[3U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[0U] 
             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U] 
                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U] 
                            << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33[0U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33[0U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[0U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[1U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33[1U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33[1U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[1U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[2U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33[2U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33[2U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[2U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[3U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[3U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[3U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33[3U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33[3U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[3U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[0U] 
            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U] 
               << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33[0U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[1U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33[1U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[2U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33[2U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[3U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s[3U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[3U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33[3U]);
    vlSelf->Core__DOT__mem__DOT___ld_data_u_T_9 = (
                                                   (3U 
                                                    == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                    ? vlSelf->Core__DOT__mem__DOT__ld_data_raw
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                     ? (QData)((IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                      ? (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))))
                                                      : (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)))))));
    vlSelf->Core__DOT__mem__DOT__ld_data = ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                             ? ((3U 
                                                 == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                 ? vlSelf->Core__DOT__mem__DOT__ld_data_raw
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                                                >> 0x1fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                   ? 
                                                  ((((1U 
                                                      & (IData)(
                                                                (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                                 >> 0xfU)))
                                                      ? 0xffffffffffffULL
                                                      : 0ULL) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)))))
                                                   : 
                                                  ((((1U 
                                                      & (IData)(
                                                                (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                                 >> 7U)))
                                                      ? 0xffffffffffffffULL
                                                      : 0ULL) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))))))))
                                             : 0ULL);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[0U] 
             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U] 
                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U] 
                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U]) 
                           << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U] 
                                       << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[0U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[1U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U] 
                                              >> 0x1fU) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U] 
                                                << 1U)))) 
           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U] 
                             << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[1U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[2U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U] 
                                              >> 0x1fU) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U] 
                                                << 1U)))) 
           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U] 
                             << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[2U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[3U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[3U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[3U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[3U] 
                                              << 1U)) 
                                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U] 
                                              >> 0x1fU) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[3U] 
                                                << 1U)))) 
           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[3U] 
                             << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[3U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[0U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[0U] 
            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U] 
               << 1U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U] 
                          << 1U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[1U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U] 
                             << 1U))) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U] 
                                          >> 0x1fU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U] 
                                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[2U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[2U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U] 
                             << 1U))) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U] 
                                          >> 0x1fU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U] 
                                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[3U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s[3U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[3U] 
                             << 1U))) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U] 
                                          >> 0x1fU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[3U] 
                                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[0U] 
             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U] 
                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U] 
                            << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[0U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[0U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[0U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[1U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[1U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[1U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[1U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[2U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[2U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[2U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[2U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[3U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[3U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[3U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[3U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[3U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[3U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[3U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[0U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[0U] 
            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U] 
               << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[0U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[1U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[1U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[2U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[2U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[2U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[3U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s[3U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[3U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s[3U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[0U] 
             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U] 
                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U] 
                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U]) 
                           << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U] 
                                       << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[0U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[1U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U] 
                                              >> 0x1fU) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U] 
                                                << 1U)))) 
           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U] 
                             << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[1U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[2U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U] 
                                              >> 0x1fU) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U] 
                                                << 1U)))) 
           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U] 
                             << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[2U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[3U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[3U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[3U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[3U] 
                                              << 1U)) 
                                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U] 
                                              >> 0x1fU) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[3U] 
                                                << 1U)))) 
           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[3U] 
                             << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[3U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[0U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[0U] 
            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U] 
               << 1U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U] 
                          << 1U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[1U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U] 
                             << 1U))) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U] 
                                          >> 0x1fU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U] 
                                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[2U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[2U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U] 
                             << 1U))) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U] 
                                          >> 0x1fU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U] 
                                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[3U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s[3U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[3U] 
                             << 1U))) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U] 
                                          >> 0x1fU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[3U] 
                                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[0U] 
             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U] 
                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U] 
                            << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[0U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[0U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[0U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[1U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[1U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[1U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[1U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[2U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[2U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[2U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[2U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[3U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[3U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[3U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[3U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[3U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[3U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[3U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[0U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[0U] 
            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U] 
               << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[0U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[1U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[1U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[2U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[2U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[2U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[3U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s[3U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[3U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s[3U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[0U] 
             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U] 
                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U] 
                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U]) 
                           << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U] 
                                       << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[0U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[1U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U] 
                                              >> 0x1fU) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U] 
                                                << 1U)))) 
           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U] 
                             << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[1U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[2U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U] 
                                              >> 0x1fU) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U] 
                                                << 1U)))) 
           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U] 
                             << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[2U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[3U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[3U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[3U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[3U] 
                                              << 1U)) 
                                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U] 
                                              >> 0x1fU) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[3U] 
                                                << 1U)))) 
           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[3U] 
                             << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[3U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[0U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[0U] 
            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U] 
               << 1U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U] 
                          << 1U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[1U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U] 
                             << 1U))) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U] 
                                          >> 0x1fU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U] 
                                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[2U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[2U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U] 
                             << 1U))) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U] 
                                          >> 0x1fU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U] 
                                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[3U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s[3U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[3U] 
                             << 1U))) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U] 
                                          >> 0x1fU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[3U] 
                                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[0U] 
             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U] 
                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U] 
                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U]) 
                           << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U] 
                                       << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[0U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[1U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U] 
                                              >> 0x1fU) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U] 
                                                << 1U)))) 
           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U] 
                             << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[1U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[2U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U] 
                                              >> 0x1fU) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U] 
                                                << 1U)))) 
           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U] 
                             << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[2U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[3U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[3U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[3U] 
                                              << 1U)) 
                                          & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U] 
                                              >> 0x1fU) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[3U] 
                                                << 1U)))) 
           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[3U] 
                             << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[3U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[0U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[0U] 
            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U] 
               << 1U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U] 
                          << 1U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[1U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U] 
                             << 1U))) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U] 
                                          >> 0x1fU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U] 
                                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[2U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[2U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U] 
                             << 1U))) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U] 
                                          >> 0x1fU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U] 
                                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[3U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s[3U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[3U] 
                             << 1U))) ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U] 
                                          >> 0x1fU) 
                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[3U] 
                                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6[0U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7[0U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7[0U] 
               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[0U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[0U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6[0U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6[1U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7[1U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7[1U] 
               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[1U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[1U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6[1U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6[2U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7[2U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7[2U] 
               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[2U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[2U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6[2U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[3U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6[3U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7[3U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7[3U] 
               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[3U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[3U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6[3U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[0U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6[0U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7[0U]) 
           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[0U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6[1U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7[1U]) 
           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[1U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[2U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6[2U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7[2U]) 
           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[2U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[3U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6[3U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7[3U]) 
           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s[3U]);
    Core__DOT__execute__DOT___rs1_temp_T_11 = ((4U 
                                                == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src))
                                                ? (QData)((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src))
                                                    ? Core__DOT__execute__DOT___rs1_temp_T_2
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src))
                                                     ? vlSelf->Core__DOT__decode__DOT__rs1_reg
                                                     : 0ULL)));
    Core__DOT__execute__DOT___rs2_temp_T_11 = ((4U 
                                                == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src))
                                                ? (QData)((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src))
                                                    ? Core__DOT__execute__DOT___rs1_temp_T_2
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src))
                                                     ? vlSelf->Core__DOT__decode__DOT__rs2_reg
                                                     : 0ULL)));
    if ((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[2U])) {
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___rem_out_T_3 
            = (((QData)((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U])) 
                << 0x21U) | (((QData)((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U])) 
                              << 1U) | ((QData)((IData)(
                                                        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U])) 
                                        >> 0x1fU)));
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___quo_out_T_3 
            = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_out 
               << 1U);
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___reg_in1_T_5[0U] 
            = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U] 
               << 1U);
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___reg_in1_T_5[1U] 
            = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U] 
                             << 1U));
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___reg_in1_T_5[2U] 
            = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U] 
                             << 1U));
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___reg_in1_T_5[3U] 
            = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U] 
                             << 1U));
    } else {
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___rem_out_T_3 
            = (((QData)((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[0U])));
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___quo_out_T_3 
            = (1ULL | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_out 
                       << 1U));
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___reg_in1_T_5[0U] 
            = (IData)((0xfffffffffffffffeULL & (((QData)((IData)(
                                                                 vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U])) 
                                                 << 0x21U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U])) 
                                                   << 1U))));
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___reg_in1_T_5[1U] 
            = (IData)(((0xfffffffffffffffeULL & (((QData)((IData)(
                                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U])) 
                                                  << 0x21U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U])) 
                                                    << 1U))) 
                       >> 0x20U));
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___reg_in1_T_5[2U] 
            = (IData)((((QData)((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[0U]))));
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___reg_in1_T_5[3U] 
            = (IData)(((((QData)((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[0U]))) 
                       >> 0x20U));
    }
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_lo 
        = (((QData)((IData)(((0x10000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c) 
                                          << 0x10U)) 
                             | ((0x8000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c) 
                                            << 0xeU)) 
                                | ((0x4000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c) 
                                               << 0xeU)) 
                                   | ((0x2000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c) 
                                                  << 0xcU)) 
                                      | ((0x1000U & 
                                          ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c) 
                                           << 0xcU)) 
                                         | ((0x800U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c) 
                                                << 0xaU)) 
                                            | ((0x400U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c) 
                                                   << 0xaU)) 
                                               | ((0x200U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c) 
                                                      << 8U)) 
                                                  | ((0x100U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c) 
                                                         << 8U)) 
                                                     | ((0x80U 
                                                         & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
                                                            << 6U)) 
                                                        | ((0x40U 
                                                            & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
                                                               << 6U)) 
                                                           | ((0x20U 
                                                               & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c) 
                                                                  << 4U)) 
                                                              | ((0x10U 
                                                                  & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c) 
                                                                     << 4U)) 
                                                                 | ((8U 
                                                                     & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c) 
                                                                        << 2U)) 
                                                                    | ((4U 
                                                                        & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c) 
                                                                           << 2U)) 
                                                                       | (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c)))))))))))))))))) 
            << 0x10U) | (QData)((IData)(((0x8000U & 
                                          ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c) 
                                           << 0xeU)) 
                                         | ((0x4000U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c) 
                                                << 0xeU)) 
                                            | ((0x2000U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c) 
                                                   << 0xcU)) 
                                               | ((0x1000U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c) 
                                                      << 0xcU)) 
                                                  | ((0x800U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c) 
                                                         << 0xaU)) 
                                                     | ((0x400U 
                                                         & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c) 
                                                            << 0xaU)) 
                                                        | ((0x200U 
                                                            & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c) 
                                                               << 8U)) 
                                                           | ((0x100U 
                                                               & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c) 
                                                                  << 8U)) 
                                                              | ((0x80U 
                                                                  & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c) 
                                                                     << 6U)) 
                                                                 | ((0x40U 
                                                                     & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c) 
                                                                        << 6U)) 
                                                                    | ((0x20U 
                                                                        & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c) 
                                                                           << 4U)) 
                                                                       | ((0x10U 
                                                                           & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c) 
                                                                              << 4U)) 
                                                                          | ((8U 
                                                                              & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c) 
                                                                                << 2U)) 
                                                                             | ((4U 
                                                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c) 
                                                                                << 2U)) 
                                                                                | (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c))))))))))))))))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_hi_1 
        = (((QData)((IData)(((0x10000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c) 
                                          << 0xfU)) 
                             | ((0x8000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c) 
                                            << 0xfU)) 
                                | ((0x4000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c) 
                                               << 0xdU)) 
                                   | ((0x2000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c) 
                                                  << 0xdU)) 
                                      | ((0x1000U & 
                                          ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c) 
                                           << 0xbU)) 
                                         | ((0x800U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c) 
                                                << 0xbU)) 
                                            | ((0x400U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c) 
                                                   << 9U)) 
                                               | ((0x200U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
                                                         << 7U)) 
                                                     | ((0x80U 
                                                         & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
                                                            << 7U)) 
                                                        | ((0x40U 
                                                            & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c) 
                                                               << 5U)) 
                                                           | ((0x20U 
                                                               & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c) 
                                                                  << 5U)) 
                                                              | ((0x10U 
                                                                  & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c) 
                                                                     << 3U)) 
                                                                 | ((8U 
                                                                     & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c) 
                                                                        << 3U)) 
                                                                    | ((4U 
                                                                        & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c) 
                                                                           << 1U)) 
                                                                       | ((2U 
                                                                           & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c) 
                                                                                >> 1U)))))))))))))))))))) 
            << 0x10U) | (QData)((IData)(((0x8000U & 
                                          ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c) 
                                           << 0xfU)) 
                                         | ((0x4000U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c) 
                                                << 0xdU)) 
                                            | ((0x2000U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c) 
                                                   << 0xdU)) 
                                               | ((0x1000U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c) 
                                                      << 0xbU)) 
                                                  | ((0x800U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c) 
                                                         << 0xbU)) 
                                                     | ((0x400U 
                                                         & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c) 
                                                            << 9U)) 
                                                        | ((0x200U 
                                                            & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c) 
                                                               << 9U)) 
                                                           | ((0x100U 
                                                               & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c) 
                                                                  << 7U)) 
                                                              | ((0x80U 
                                                                  & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c) 
                                                                     << 7U)) 
                                                                 | ((0x40U 
                                                                     & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c) 
                                                                        << 5U)) 
                                                                    | ((0x20U 
                                                                        & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c) 
                                                                           << 5U)) 
                                                                       | ((0x10U 
                                                                           & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c) 
                                                                              << 3U)) 
                                                                          | ((8U 
                                                                              & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c) 
                                                                                << 3U)) 
                                                                             | ((4U 
                                                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c) 
                                                                                >> 1U))))))))))))))))))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_mul 
        = (1U & (~ (((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div) 
                     | (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_divu)) 
                    | (0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_div_valid 
        = ((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state)) 
           & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div) 
              | (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_divu)));
    if (vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_word) {
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1 
            = Core__DOT__execute__DOT__mdu__DOT___temp_x_T_2;
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2 
            = Core__DOT__execute__DOT__mdu__DOT___temp_y_T_2;
    } else {
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1 
            = vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x;
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2 
            = vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y;
    }
    VL_EXTEND_WQ(96,64, __Vtemp2442, vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out);
    VL_EXTEND_WQ(96,64, __Vtemp2443, vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out);
    VL_EXTEND_WQ(96,64, __Vtemp2444, ((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state))
                                       ? ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_word)
                                           ? (((QData)((IData)(
                                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U] 
                                                                 >> 0x1fU)
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U])))
                                           : ((((2U 
                                                 == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                                | (3U 
                                                   == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                               | (4U 
                                                  == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)))
                                               ? (((QData)((IData)(
                                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[2U])))
                                               : (((QData)((IData)(
                                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U])))))
                                       : vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out));
    VL_EXTEND_WQ(96,64, __Vtemp2446, vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out_lo_1);
    VL_EXTEND_WQ(96,64, __Vtemp2448, vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out);
    VL_EXTEND_WQ(96,64, __Vtemp2451, vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out);
    if ((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state))) {
        vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_26[0U] 
            = __Vtemp2442[0U];
        vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_26[1U] 
            = __Vtemp2442[1U];
        vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_26[2U] 
            = __Vtemp2442[2U];
    } else {
        vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_26[0U] 
            = ((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state))
                ? __Vtemp2443[0U] : ((2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state))
                                      ? __Vtemp2444[0U]
                                      : ((3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state))
                                          ? ((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state))
                                              ? ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_word)
                                                  ? (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out_lo_1)
                                                  : 
                                                 __Vtemp2446[0U])
                                              : __Vtemp2448[0U])
                                          : __Vtemp2451[0U])));
        vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_26[1U] 
            = ((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state))
                ? __Vtemp2443[1U] : ((2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state))
                                      ? __Vtemp2444[1U]
                                      : ((3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state))
                                          ? ((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state))
                                              ? ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_word)
                                                  ? (IData)(
                                                            (vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out_lo_1 
                                                             >> 0x20U))
                                                  : 
                                                 __Vtemp2446[1U])
                                              : __Vtemp2448[1U])
                                          : __Vtemp2451[1U])));
        vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_26[2U] 
            = ((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state))
                ? __Vtemp2443[2U] : ((2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state))
                                      ? __Vtemp2444[2U]
                                      : ((3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state))
                                          ? ((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state))
                                              ? ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_word)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out_lo_1 
                                                              >> 0x1fU)))
                                                   ? 0xffffffffU
                                                   : 0U)
                                                  : 
                                                 __Vtemp2446[2U])
                                              : __Vtemp2448[2U])
                                          : __Vtemp2451[2U])));
    }
    vlSelf->Core__DOT__mem__DOT__req_wait = ((((IData)(vlSelf->Core__DOT__mem__DOT__is_load) 
                                               & (~ (IData)(vlSelf->io_dmem_resp_bits_read_ok))) 
                                              | ((3U 
                                                  == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                                 & (~ (IData)(vlSelf->io_dmem_resp_bits_write_ok)))) 
                                             & (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid));
    vlSelf->Core__DOT__decode__DOT___ctrl_T_566 = (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 2U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 1U
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x1023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 1U
                                                        : 
                                                       ((0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 2U
                                                         : 
                                                        ((0x13U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 0U
                                                            : 
                                                           ((0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 0U
                                                             : 
                                                            ((0x6013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 0U
                                                              : 
                                                             ((0x7013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                                               ? 0U
                                                               : 
                                                              ((0x1013U 
                                                                == 
                                                                (0xfc00707fU 
                                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                                                ? 0U
                                                                : 
                                                               ((0x5013U 
                                                                 == 
                                                                 (0xfc00707fU 
                                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                                                 ? 0U
                                                                 : 
                                                                ((0x40005013U 
                                                                  == 
                                                                  (0xfc00707fU 
                                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                                                  ? 0U
                                                                  : (IData)(Core__DOT__decode__DOT___ctrl_T_551))))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_341 = ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 5U : 
                                           ((0x6013U 
                                             == (0x707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 6U : 
                                            ((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 7U : 
                                             ((0x1013U 
                                               == (0xfc00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 8U
                                               : ((0x5013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 9U
                                                   : 
                                                  ((0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 0xaU
                                                    : 
                                                   ((0x33U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 1U
                                                     : 
                                                    ((0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 2U
                                                      : 
                                                     ((0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 8U
                                                       : 
                                                      ((0x2033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 3U
                                                        : 
                                                       ((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 4U
                                                         : 
                                                        ((0x4033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 5U
                                                          : 
                                                         ((0x5033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 9U
                                                           : 
                                                          ((0x40005033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 0xaU
                                                            : 
                                                           ((0x6033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 6U
                                                             : (IData)(Core__DOT__decode__DOT___ctrl_T_326))))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_993 = ((0x2023U 
                                            != (0x707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                           & ((0x13U 
                                               == (0x707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst)) 
                                              | ((0x2013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                 | ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                    | ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                       | ((0x6013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                          | ((0x7013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                             | ((0x1013U 
                                                                 == 
                                                                 (0xfc00707fU 
                                                                  & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                | ((0x5013U 
                                                                    == 
                                                                    (0xfc00707fU 
                                                                     & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                   | ((0x40005013U 
                                                                       == 
                                                                       (0xfc00707fU 
                                                                        & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                      | ((0x33U 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                         | ((0x40000033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                            | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                               | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x73U 
                                                                                != vlSelf->Core__DOT__decode__DOT__inst) 
                                                                                & ((0x100073U 
                                                                                != vlSelf->Core__DOT__decode__DOT__inst) 
                                                                                & ((0x30200073U 
                                                                                != vlSelf->Core__DOT__decode__DOT__inst) 
                                                                                & ((0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x3003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | (IData)(Core__DOT__decode__DOT___ctrl_T_968))))))))))))))))))))))))));
    vlSelf->Core__DOT__regfile__DOT___GEN_26 = ((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Core__DOT__decode__DOT__inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->Core__DOT__regfile__DOT__rf_26
                                                 : 
                                                ((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Core__DOT__decode__DOT__inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->Core__DOT__regfile__DOT__rf_25
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Core__DOT__decode__DOT__inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->Core__DOT__regfile__DOT__rf_24
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Core__DOT__decode__DOT__inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->Core__DOT__regfile__DOT__rf_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Core__DOT__decode__DOT__inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->Core__DOT__regfile__DOT__rf_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Core__DOT__decode__DOT__inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->Core__DOT__regfile__DOT__rf_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Core__DOT__decode__DOT__inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->Core__DOT__regfile__DOT__rf_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Core__DOT__decode__DOT__inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->Core__DOT__regfile__DOT__rf_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Core__DOT__decode__DOT__inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->Core__DOT__regfile__DOT__rf_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Core__DOT__decode__DOT__inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->Core__DOT__regfile__DOT__rf_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->Core__DOT__regfile__DOT__rf_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Core__DOT__decode__DOT__inst 
                                                                >> 0xfU)))
                                                            ? vlSelf->Core__DOT__regfile__DOT__rf_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                                 >> 0xfU)))
                                                             ? vlSelf->Core__DOT__regfile__DOT__rf_14
                                                             : Core__DOT__regfile__DOT___GEN_13)))))))))))));
    vlSelf->Core__DOT__regfile__DOT___GEN_58 = ((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Core__DOT__decode__DOT__inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->Core__DOT__regfile__DOT__rf_26
                                                 : 
                                                ((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Core__DOT__decode__DOT__inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->Core__DOT__regfile__DOT__rf_25
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Core__DOT__decode__DOT__inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->Core__DOT__regfile__DOT__rf_24
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Core__DOT__decode__DOT__inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->Core__DOT__regfile__DOT__rf_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Core__DOT__decode__DOT__inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->Core__DOT__regfile__DOT__rf_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Core__DOT__decode__DOT__inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->Core__DOT__regfile__DOT__rf_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Core__DOT__decode__DOT__inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->Core__DOT__regfile__DOT__rf_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Core__DOT__decode__DOT__inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->Core__DOT__regfile__DOT__rf_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Core__DOT__decode__DOT__inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->Core__DOT__regfile__DOT__rf_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Core__DOT__decode__DOT__inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->Core__DOT__regfile__DOT__rf_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->Core__DOT__regfile__DOT__rf_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Core__DOT__decode__DOT__inst 
                                                                >> 0x14U)))
                                                            ? vlSelf->Core__DOT__regfile__DOT__rf_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                                 >> 0x14U)))
                                                             ? vlSelf->Core__DOT__regfile__DOT__rf_14
                                                             : Core__DOT__regfile__DOT___GEN_45)))))))))))));
    Core__DOT__decode__DOT___ctrl_T_688 = ((0x40005033U 
                                            == (0xfe00707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 0U : 
                                           ((0x6033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 0U : 
                                            ((0x7033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 0U : 
                                             ((0x73U 
                                               == vlSelf->Core__DOT__decode__DOT__inst)
                                               ? 0U
                                               : ((0x100073U 
                                                   == vlSelf->Core__DOT__decode__DOT__inst)
                                                   ? 0U
                                                   : 
                                                  ((0x30200073U 
                                                    == vlSelf->Core__DOT__decode__DOT__inst)
                                                    ? 0U
                                                    : 
                                                   ((0x6003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x101bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x4000501bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((0x3bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 0U
                                                            : 
                                                           ((0x4000003bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 0U
                                                             : 
                                                            ((0x103bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 0U
                                                              : (IData)(Core__DOT__decode__DOT___ctrl_T_672)))))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_770 = ((0x1013U 
                                            != (0xfc00707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                           & ((0x5013U 
                                               != (0xfc00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst)) 
                                              & ((0x40005013U 
                                                  != 
                                                  (0xfc00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                 & ((0x33U 
                                                     != 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                    & ((0x40000033U 
                                                        != 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                       & ((0x1033U 
                                                           != 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                          & ((0x2033U 
                                                              != 
                                                              (0xfe00707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                             & ((0x3033U 
                                                                 != 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                & ((0x4033U 
                                                                    != 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                   & ((0x5033U 
                                                                       != 
                                                                       (0xfe00707fU 
                                                                        & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                      & ((0x40005033U 
                                                                          != 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                         & ((0x6033U 
                                                                             != 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                            & ((0x7033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                               & ((0x73U 
                                                                                != vlSelf->Core__DOT__decode__DOT__inst) 
                                                                                & ((0x100073U 
                                                                                != vlSelf->Core__DOT__decode__DOT__inst) 
                                                                                & ((0x30200073U 
                                                                                != vlSelf->Core__DOT__decode__DOT__inst) 
                                                                                & ((0x6003U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & ((0x3003U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & (IData)(Core__DOT__decode__DOT___ctrl_T_752)))))))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_1041 = ((0x3003U 
                                             == (0x707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 1U : 
                                            ((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 2U : 
                                             ((0x1bU 
                                               == (0x707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 1U
                                               : ((0x101bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 1U
                                                   : 
                                                  ((0x501bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x4000501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 1U
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x2000033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((0x2001033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2002033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 0U
                                                             : 
                                                            ((0x2003033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 0U
                                                              : (IData)(Core__DOT__decode__DOT___ctrl_T_1026))))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_494 = ((0x2003U 
                                            == (0x707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 1U : 
                                           ((0x4003U 
                                             == (0x707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 2U : 
                                            ((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 2U : 
                                             ((0x23U 
                                               == (0x707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 3U
                                               : ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 3U
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 3U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x6013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x7013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x1013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 0U
                                                            : 
                                                           ((0x40005013U 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 0U
                                                             : (IData)(Core__DOT__decode__DOT___ctrl_T_479))))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_825 = ((0x3003U 
                                            == (0x707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 1U : 
                                           ((0x3023U 
                                             == (0x707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 1U : 
                                            ((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 1U : 
                                             ((0x101bU 
                                               == (0xfe00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 1U
                                               : ((0x501bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 1U
                                                   : 
                                                  ((0x4000501bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 1U
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 1U
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 1U
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 1U
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 1U
                                                         : 
                                                        ((0x2000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 1U
                                                          : 
                                                         ((0x2001033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 1U
                                                           : 
                                                          ((0x2002033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 1U
                                                            : 
                                                           ((0x2003033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 1U
                                                             : (IData)(Core__DOT__decode__DOT___ctrl_T_810))))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_904 = ((0x40005033U 
                                            == (0xfe00707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 1U : 
                                           ((0x6033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 1U : 
                                            ((0x7033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 1U : 
                                             ((0x73U 
                                               == vlSelf->Core__DOT__decode__DOT__inst)
                                               ? 0U
                                               : ((0x100073U 
                                                   == vlSelf->Core__DOT__decode__DOT__inst)
                                                   ? 0U
                                                   : 
                                                  ((0x30200073U 
                                                    == vlSelf->Core__DOT__decode__DOT__inst)
                                                    ? 0U
                                                    : 
                                                   ((0x6003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 2U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 2U
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 2U
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 2U
                                                        : 
                                                       ((0x101bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 2U
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 2U
                                                          : 
                                                         ((0x4000501bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 2U
                                                           : 
                                                          ((0x3bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 1U
                                                            : 
                                                           ((0x4000003bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 1U
                                                             : 
                                                            ((0x103bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 1U
                                                              : (IData)(Core__DOT__decode__DOT___ctrl_T_888)))))))))))))))));
    vlSelf->Core__DOT__mem_io_mem_rd_data = ((IData)(vlSelf->Core__DOT__mem__DOT__mdu_valid)
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out
                                              : ((IData)(vlSelf->Core__DOT__mem__DOT__is_load)
                                                  ? 
                                                 ((2U 
                                                   == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                                   ? 
                                                  ((2U 
                                                    == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                                    ? vlSelf->Core__DOT__mem__DOT___ld_data_u_T_9
                                                    : 0ULL)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                                    ? vlSelf->Core__DOT__mem__DOT__ld_data
                                                    : 0ULL))
                                                  : vlSelf->Core__DOT__mem__DOT__wdata));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[0U] 
             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U] 
                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U] 
                            << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[0U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[0U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[0U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[1U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[1U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[1U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[1U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[2U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[2U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[2U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[2U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[3U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[3U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[3U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[3U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[3U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[3U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[0U] 
            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U] 
               << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[0U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[1U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[1U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[2U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[2U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[3U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s[3U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[3U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s[3U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U] 
              << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[0U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[0U] 
               & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U] 
                  << 1U))) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U] 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U]) 
                              << 1U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
        = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U] 
               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U] 
                            << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[1U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[1U] 
               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U] 
                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U] 
                                << 1U)))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U] 
                                                 << 1U)) 
                                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U] 
                                                   << 1U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
        = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U] 
               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U] 
                            << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[2U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[2U] 
               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U] 
                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U] 
                                << 1U)))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U] 
                                                 << 1U)) 
                                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U] 
                                                   << 1U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
        = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U] 
               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[3U] 
                            << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[3U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[3U] 
               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U] 
                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[3U] 
                                << 1U)))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[3U] 
                                                 << 1U)) 
                                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[3U] 
                                                   << 1U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U] 
             << 1U) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[0U]) 
           ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U] 
              << 1U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U] 
              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U] 
                           << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[1U]) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U] 
               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U] 
                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U] 
              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U] 
                           << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[2U]) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U] 
               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U] 
                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[3U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U] 
              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[3U] 
                           << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s[3U]) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U] 
               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[3U] 
                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[0U] 
             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U] 
                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U] 
                            << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[0U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[0U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[0U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[1U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[1U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[1U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[1U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[2U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[2U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[2U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[2U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[3U] 
             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U] 
                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[3U] 
                              << 1U))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U] 
                                            >> 0x1fU) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[3U] 
                                              << 1U)) 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[3U])) 
           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[3U] 
              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[3U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[0U] 
            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U] 
               << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[0U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[1U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[1U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[2U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[2U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[3U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s[3U] 
            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U] 
                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[3U] 
                             << 1U))) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s[3U]);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U] 
              << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[0U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[0U] 
               & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U] 
                  << 1U))) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U] 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U]) 
                              << 1U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
        = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U] 
               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U] 
                            << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[1U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[1U] 
               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U] 
                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U] 
                                << 1U)))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U] 
                                                 << 1U)) 
                                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U] 
                                                   << 1U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
        = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U] 
               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U] 
                            << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[2U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[2U] 
               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U] 
                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U] 
                                << 1U)))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U] 
                                                 << 1U)) 
                                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U] 
                                                   << 1U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
        = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U] 
               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[3U] 
                            << 1U)) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[3U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[3U] 
               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U] 
                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[3U] 
                                << 1U)))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[3U] 
                                                 << 1U)) 
                                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[3U] 
                                                   << 1U))));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U] 
             << 1U) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[0U]) 
           ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U] 
              << 1U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U] 
              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U] 
                           << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[1U]) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U] 
               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U] 
                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U] 
              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U] 
                           << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[2U]) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U] 
               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U] 
                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[3U] 
        = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U] 
              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[3U] 
                           << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s[3U]) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U] 
               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[3U] 
                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[0U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[0U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[0U] 
               & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U] 
                  << 1U))) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U] 
                               << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[0U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[1U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[1U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[1U] 
               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U] 
                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U] 
                                << 1U)))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U] 
                                                 << 1U)) 
                                             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[1U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[2U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[2U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[2U] 
               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U] 
                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U] 
                                << 1U)))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U] 
                                                 << 1U)) 
                                             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[2U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
        = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[3U] 
             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[3U]) 
            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[3U] 
               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U] 
                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[3U] 
                                << 1U)))) | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[3U] 
                                                 << 1U)) 
                                             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[3U]));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[0U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[0U]) 
           ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U] 
              << 1U));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[1U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[1U]) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U] 
               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U] 
                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[2U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[2U]) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U] 
               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U] 
                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
        = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s[3U] 
            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s[3U]) 
           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U] 
               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[3U] 
                            << 1U)));
    vlSelf->Core__DOT__execute__DOT__alu_io_in1 = (
                                                   (5U 
                                                    == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src))
                                                    ? (QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)))
                                                    : Core__DOT__execute__DOT___rs1_temp_T_11);
    vlSelf->Core__DOT__execute__DOT__alu_io_in2 = (
                                                   (5U 
                                                    == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src))
                                                    ? (QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)))
                                                    : Core__DOT__execute__DOT___rs2_temp_T_11);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_mul_valid 
        = ((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state)) 
           & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_mul));
    vlSelf->Core__DOT__mem__DOT__stall = ((IData)(vlSelf->Core__DOT__mem__DOT__req_wait) 
                                          | ((~ (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__completed)) 
                                             & (IData)(vlSelf->Core__DOT__mem__DOT__mdu_valid)));
    vlSelf->Core__DOT__decode__DOT___ctrl_T_356 = (
                                                   (0x4063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 1U
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 1U
                                                         : 
                                                        ((0x2003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 1U
                                                          : 
                                                         ((0x4003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 1U
                                                           : 
                                                          ((0x5003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 1U
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 1U
                                                             : 
                                                            ((0x1023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 1U
                                                              : 
                                                             ((0x2023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                                               ? 1U
                                                               : 
                                                              ((0x13U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                                                ? 1U
                                                                : 
                                                               ((0x2013U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                                                 ? 3U
                                                                 : 
                                                                ((0x3013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                                                  ? 4U
                                                                  : (IData)(Core__DOT__decode__DOT___ctrl_T_341))))))))))))))));
    vlSelf->Core__DOT__decode__DOT__c0_3 = ((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst)) 
                                            | ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst)) 
                                               | ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                  | ((0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                     | ((0x63U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                        & ((0x1063U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                           & ((0x4063U 
                                                               != 
                                                               (0x707fU 
                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                              & ((0x5063U 
                                                                  != 
                                                                  (0x707fU 
                                                                   & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                 & ((0x6063U 
                                                                     != 
                                                                     (0x707fU 
                                                                      & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                    & ((0x7063U 
                                                                        != 
                                                                        (0x707fU 
                                                                         & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                       & ((3U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                          | ((0x1003U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                             | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                | ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & (IData)(Core__DOT__decode__DOT___ctrl_T_993))))))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_703 = ((0x2013U 
                                            == (0x707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 0U : 
                                           ((0x3013U 
                                             == (0x707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 0U : 
                                            ((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 0U : 
                                             ((0x6013U 
                                               == (0x707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 0U
                                               : ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x1013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x5013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x33U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x40000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x1033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x3033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((0x4033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 0U
                                                            : 
                                                           ((0x5033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 0U
                                                             : (IData)(Core__DOT__decode__DOT___ctrl_T_688))))))))))))))));
    vlSelf->Core__DOT__decode__DOT___ctrl_T_787 = (
                                                   (0x5063U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                   & ((0x6063U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                      & ((0x7063U 
                                                          != 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                         & ((3U 
                                                             != 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                            & ((0x1003U 
                                                                != 
                                                                (0x707fU 
                                                                 & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                               & ((0x2003U 
                                                                   != 
                                                                   (0x707fU 
                                                                    & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                  & ((0x4003U 
                                                                      != 
                                                                      (0x707fU 
                                                                       & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                     & ((0x5003U 
                                                                         != 
                                                                         (0x707fU 
                                                                          & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                        & ((0x23U 
                                                                            != 
                                                                            (0x707fU 
                                                                             & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                           & ((0x1023U 
                                                                               != 
                                                                               (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                              & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & ((0x13U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & ((0x2013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & ((0x3013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & ((0x4013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & ((0x6013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & ((0x7013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                                & (IData)(Core__DOT__decode__DOT___ctrl_T_770))))))))))))))))));
    vlSelf->Core__DOT__decode__DOT___ctrl_T_1057 = 
        ((0x5013U == (0xfc00707fU & vlSelf->Core__DOT__decode__DOT__inst))
          ? 6U : ((0x40005013U == (0xfc00707fU & vlSelf->Core__DOT__decode__DOT__inst))
                   ? 6U : ((0x33U == (0xfe00707fU & vlSelf->Core__DOT__decode__DOT__inst))
                            ? 0U : ((0x40000033U == 
                                     (0xfe00707fU & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 0U : ((0x1033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 0U : 
                                             ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 0U
                                               : ((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x73U 
                                                         == vlSelf->Core__DOT__decode__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((0x100073U 
                                                          == vlSelf->Core__DOT__decode__DOT__inst)
                                                          ? 0U
                                                          : 
                                                         ((0x30200073U 
                                                           == vlSelf->Core__DOT__decode__DOT__inst)
                                                           ? 0U
                                                           : 
                                                          ((0x6003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 1U
                                                            : (IData)(Core__DOT__decode__DOT___ctrl_T_1041)))))))))))))))));
    vlSelf->Core__DOT__decode__DOT___ctrl_T_505 = (
                                                   (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 0U
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 1U
                                                             : 
                                                            ((0x1003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 1U
                                                              : (IData)(Core__DOT__decode__DOT___ctrl_T_494))))))))))));
    vlSelf->Core__DOT__decode__DOT___ctrl_T_841 = (
                                                   (0x5013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 1U
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 1U
                                                      : 
                                                     ((0x40000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 1U
                                                       : 
                                                      ((0x1033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 1U
                                                        : 
                                                       ((0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 1U
                                                         : 
                                                        ((0x3033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 1U
                                                          : 
                                                         ((0x4033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 1U
                                                           : 
                                                          ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 1U
                                                            : 
                                                           ((0x40005033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 1U
                                                             : 
                                                            ((0x6033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 1U
                                                              : 
                                                             ((0x7033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                                               ? 1U
                                                               : 
                                                              ((0x73U 
                                                                == vlSelf->Core__DOT__decode__DOT__inst)
                                                                ? 0U
                                                                : 
                                                               ((0x100073U 
                                                                 == vlSelf->Core__DOT__decode__DOT__inst)
                                                                 ? 0U
                                                                 : 
                                                                ((0x30200073U 
                                                                  == vlSelf->Core__DOT__decode__DOT__inst)
                                                                  ? 0U
                                                                  : 
                                                                 ((0x6003U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                                   ? 1U
                                                                   : (IData)(Core__DOT__decode__DOT___ctrl_T_825)))))))))))))))));
    vlSelf->Core__DOT__decode__DOT___ctrl_T_919 = (
                                                   (0x2013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 2U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 2U
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 2U
                                                      : 
                                                     ((0x6013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 2U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 2U
                                                        : 
                                                       ((0x1013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 2U
                                                         : 
                                                        ((0x5013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 2U
                                                          : 
                                                         ((0x40005013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 2U
                                                           : 
                                                          ((0x33U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 1U
                                                            : 
                                                           ((0x40000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 1U
                                                             : 
                                                            ((0x1033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 1U
                                                              : 
                                                             ((0x2033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                                               ? 1U
                                                               : 
                                                              ((0x3033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                                                ? 1U
                                                                : 
                                                               ((0x4033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                                                 ? 1U
                                                                 : 
                                                                ((0x5033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                                                  ? 1U
                                                                  : (IData)(Core__DOT__decode__DOT___ctrl_T_904))))))))))))))));
    __Vtemp2588[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                        ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                           << 1U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                      << 1U));
    __Vtemp2588[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                        ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                         << 1U))) ^ 
                       ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                         >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                      << 1U)));
    __Vtemp2588[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                        ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                         << 1U))) ^ 
                       ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                         >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                      << 1U)));
    __Vtemp2588[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                        ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                         << 1U))) ^ 
                       ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                         >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                      << 1U)));
    __Vtemp2612[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                          << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                    << 2U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                                & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                               << 2U)) 
                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                           << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                     << 1U)));
    __Vtemp2612[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                 >> 0x1fU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                              >> 0x1eU)) 
                               | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                  >> 0x1eU)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                                   >> 0x1fU)))) 
                       | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                             << 1U) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                          << 2U))) 
                           | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                      >> 0x1eU)) | 
                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                << 2U)) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                              << 2U)))) 
                          | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                     >> 0x1eU)) | (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                                   << 2U)) 
                             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                << 1U))));
    __Vtemp2612[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                 >> 0x1fU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                              >> 0x1eU)) 
                               | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U]) 
                                  >> 0x1eU)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                                   >> 0x1fU)))) 
                       | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                             << 1U) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                          << 2U))) 
                           | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                      >> 0x1eU)) | 
                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                << 2U)) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                              << 2U)))) 
                          | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                     >> 0x1eU)) | (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                                   << 2U)) 
                             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                << 1U))));
    __Vtemp2612[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                 >> 0x1fU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                              >> 0x1eU)) 
                               | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U]) 
                                  >> 0x1eU)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                                   >> 0x1fU)))) 
                       | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                             << 1U) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                          << 2U))) 
                           | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                      >> 0x1eU)) | 
                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                << 2U)) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                              << 2U)))) 
                          | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                     >> 0x1eU)) | (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                                   << 2U)) 
                             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                                << 1U))));
    VL_ADD_W(4, __Vtemp2613, __Vtemp2588, __Vtemp2612);
    if ((3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state))) {
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___GEN_50[0U] 
            = __Vtemp2613[0U];
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___GEN_50[1U] 
            = __Vtemp2613[1U];
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___GEN_50[2U] 
            = __Vtemp2613[2U];
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___GEN_50[3U] 
            = __Vtemp2613[3U];
    } else {
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___GEN_50[0U] 
            = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U];
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___GEN_50[1U] 
            = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[1U];
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___GEN_50[2U] 
            = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[2U];
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___GEN_50[3U] 
            = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[3U];
    }
    vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc 
        = (((2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code))
             ? (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_in1)
             : vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc) 
           + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm);
    VL_EXTEND_WQ(65,64, __Vtemp2617, vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2);
    if ((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
          | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
         & (IData)((vlSelf->Core__DOT__execute__DOT__alu_io_in2 
                    >> 0x3fU)))) {
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2[0U] 
            = (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2);
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2[1U] 
            = (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2 
                       >> 0x20U));
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2[2U] 
            = (1U & (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2 
                             >> 0x3fU)));
    } else {
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2[0U] 
            = __Vtemp2617[0U];
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2[1U] 
            = __Vtemp2617[1U];
        vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2[2U] 
            = __Vtemp2617[2U];
    }
    vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt 
        = (0x3fU & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type)
                     ? (0x1fU & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_in2))
                     : (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_in2)));
    Core__DOT__execute__DOT__alu__DOT___out0_T_11 = 
        VL_LTS_IQQ(1,64,64, vlSelf->Core__DOT__execute__DOT__alu_io_in1, vlSelf->Core__DOT__execute__DOT__alu_io_in2);
    Core__DOT__execute__DOT__alu__DOT___out0_T_12 = 
        (vlSelf->Core__DOT__execute__DOT__alu_io_in1 
         < vlSelf->Core__DOT__execute__DOT__alu_io_in2);
    vlSelf->io_dmem_req_bits_ren = ((~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)) 
                                    & ((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                         | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                        & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                                       & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall))));
    vlSelf->io_dmem_req_bits_wen = ((~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)) 
                                    & (((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                        & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                                       & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall))));
    vlSelf->Core__DOT__execute__DOT__mdu_io_mdu_valid 
        = (((0U != (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code)) 
            & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
           & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)));
    vlSelf->Core__DOT__decode__DOT___ctrl_T_718 = (
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x6063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 0U
                                                            : 
                                                           ((0x4003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 0U
                                                             : 
                                                            ((0x5003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 0U
                                                              : 
                                                             ((0x23U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                                               ? 0U
                                                               : 
                                                              ((0x1023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                                                ? 0U
                                                                : 
                                                               ((0x2023U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                                                 ? 0U
                                                                 : 
                                                                ((0x13U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                                                  ? 0U
                                                                  : (IData)(Core__DOT__decode__DOT___ctrl_T_703))))))))))))))));
    vlSelf->Core__DOT__decode__DOT___ctrl_T_793 = (
                                                   (0x17U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                   & ((0x6fU 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                      & ((0x67U 
                                                          != 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                         & ((0x63U 
                                                             != 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                            & ((0x1063U 
                                                                != 
                                                                (0x707fU 
                                                                 & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                               & ((0x4063U 
                                                                   != 
                                                                   (0x707fU 
                                                                    & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                  & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_787)))))));
    if ((3U == (0x707fU & vlSelf->Core__DOT__decode__DOT__inst))) {
        Core__DOT__decode__DOT___ctrl_T_1072 = 1U;
        Core__DOT__decode__DOT___ctrl_T_856 = 1U;
    } else {
        Core__DOT__decode__DOT___ctrl_T_1072 = ((0x1003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                                 ? 1U
                                                 : 
                                                ((0x2003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                                  ? 1U
                                                  : 
                                                 ((0x4003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 1U
                                                   : 
                                                  ((0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 2U
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 2U
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 2U
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 1U
                                                        : 
                                                       ((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 1U
                                                         : 
                                                        ((0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 1U
                                                          : 
                                                         ((0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 1U
                                                           : 
                                                          ((0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 1U
                                                            : 
                                                           ((0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 1U
                                                             : 
                                                            ((0x1013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 6U
                                                              : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_1057)))))))))))))));
        Core__DOT__decode__DOT___ctrl_T_856 = ((0x1003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                                ? 1U
                                                : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 1U
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 1U
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 1U
                                                       : 
                                                      ((0x1023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 1U
                                                        : 
                                                       ((0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 1U
                                                         : 
                                                        ((0x13U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 1U
                                                          : 
                                                         ((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 1U
                                                           : 
                                                          ((0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 1U
                                                            : 
                                                           ((0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 1U
                                                             : 
                                                            ((0x6013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 1U
                                                              : 
                                                             ((0x7013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                                               ? 1U
                                                               : 
                                                              ((0x1013U 
                                                                == 
                                                                (0xfc00707fU 
                                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                                                ? 1U
                                                                : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_841)))))))))))))));
    }
    Core__DOT__decode__DOT___ctrl_T_934 = ((0x63U == 
                                            (0x707fU 
                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 1U : 
                                           ((0x1063U 
                                             == (0x707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 1U : 
                                            ((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 1U : 
                                             ((0x5063U 
                                               == (0x707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 1U
                                               : ((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 1U
                                                   : 
                                                  ((0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 2U
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 2U
                                                      : 
                                                     ((0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 2U
                                                       : 
                                                      ((0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 2U
                                                        : 
                                                       ((0x5003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 2U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 2U
                                                          : 
                                                         ((0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 2U
                                                           : 
                                                          ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 2U
                                                            : 
                                                           ((0x13U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 2U
                                                             : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_919))))))))))))))));
    VL_EXTEND_WQ(127,64, __Vtemp2621, vlSelf->Core__DOT__execute__DOT__alu_io_in1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp2622, __Vtemp2621, (IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt));
    vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
        = (((2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code)) 
            | (1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code)))
            ? (QData)((IData)(((IData)(4U) + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)))
            : ((0xaU == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                ? VL_SHIFTRS_QQI(64,64,6, vlSelf->Core__DOT__execute__DOT__alu_io_in1, (IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt))
                : ((9U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                    ? ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type)
                        ? ((QData)((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_in1)) 
                           >> (IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt))
                        : (vlSelf->Core__DOT__execute__DOT__alu_io_in1 
                           >> (IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt)))
                    : ((8U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                        ? (((QData)((IData)(__Vtemp2622[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        __Vtemp2622[0U])))
                        : ((7U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                            ? (vlSelf->Core__DOT__execute__DOT__alu_io_in1 
                               & vlSelf->Core__DOT__execute__DOT__alu_io_in2)
                            : ((6U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                                ? (vlSelf->Core__DOT__execute__DOT__alu_io_in1 
                                   | vlSelf->Core__DOT__execute__DOT__alu_io_in2)
                                : ((5U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                                    ? (vlSelf->Core__DOT__execute__DOT__alu_io_in1 
                                       ^ vlSelf->Core__DOT__execute__DOT__alu_io_in2)
                                    : ((4U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                                        ? (QData)((IData)(Core__DOT__execute__DOT__alu__DOT___out0_T_12))
                                        : ((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                                            ? (QData)((IData)(Core__DOT__execute__DOT__alu__DOT___out0_T_11))
                                            : ((2U 
                                                == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                                                ? (vlSelf->Core__DOT__execute__DOT__alu_io_in1 
                                                   - vlSelf->Core__DOT__execute__DOT__alu_io_in2)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                                                    ? 
                                                   (vlSelf->Core__DOT__execute__DOT__alu_io_in1 
                                                    + vlSelf->Core__DOT__execute__DOT__alu_io_in2)
                                                    : 0ULL)))))))))));
    vlSelf->Core__DOT__execute__DOT__alu_io_jmp = (
                                                   (8U 
                                                    == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code))
                                                    ? 
                                                   (vlSelf->Core__DOT__execute__DOT__alu_io_in1 
                                                    >= vlSelf->Core__DOT__execute__DOT__alu_io_in2)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code))
                                                     ? (IData)(Core__DOT__execute__DOT__alu__DOT___out0_T_12)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code))
                                                      ? 
                                                     VL_GTES_IQQ(1,64,64, vlSelf->Core__DOT__execute__DOT__alu_io_in1, vlSelf->Core__DOT__execute__DOT__alu_io_in2)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code))
                                                       ? (IData)(Core__DOT__execute__DOT__alu__DOT___out0_T_11)
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code))
                                                        ? 
                                                       (vlSelf->Core__DOT__execute__DOT__alu_io_in1 
                                                        != vlSelf->Core__DOT__execute__DOT__alu_io_in2)
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code))
                                                         ? 
                                                        (vlSelf->Core__DOT__execute__DOT__alu_io_in1 
                                                         == vlSelf->Core__DOT__execute__DOT__alu_io_in2)
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code)) 
                                                         | (1U 
                                                            == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code)))))))));
    vlSelf->Core__DOT__decode__DOT__c0_4 = ((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 4U : 
                                            ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 4U : 
                                             ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 5U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 1U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 3U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 3U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 3U
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 3U
                                                       : 
                                                      ((0x6063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 3U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 3U
                                                         : (IData)(Core__DOT__decode__DOT___ctrl_T_1072)))))))))));
    if ((0x17U == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))) {
        vlSelf->Core__DOT__decode__DOT___ctrl_T_865 = 4U;
        vlSelf->Core__DOT__decode__DOT___ctrl_T_937 = 2U;
    } else {
        vlSelf->Core__DOT__decode__DOT___ctrl_T_865 
            = ((0x6fU == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                ? 4U : ((0x67U == (0x707fU & vlSelf->Core__DOT__decode__DOT__inst))
                         ? 1U : ((0x63U == (0x707fU 
                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                  ? 1U : ((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                           ? 1U : (
                                                   (0x4063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 1U
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 1U
                                                      : 
                                                     ((0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 1U
                                                       : (IData)(Core__DOT__decode__DOT___ctrl_T_856)))))))));
        vlSelf->Core__DOT__decode__DOT___ctrl_T_937 
            = ((0x6fU == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                ? 2U : ((0x67U == (0x707fU & vlSelf->Core__DOT__decode__DOT__inst))
                         ? 1U : (IData)(Core__DOT__decode__DOT___ctrl_T_934)));
    }
    vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
        = ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type)
            ? (((QData)((IData)(((1U & (IData)((vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)))
            : vlSelf->Core__DOT__execute__DOT__alu__DOT__out0);
    vlSelf->Core__DOT__execute_io_jmp_packet_o_jmp_npc 
        = ((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_jmp)
            ? vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc
            : ((IData)(4U) + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc));
    vlSelf->Core__DOT__execute_io_jmp_packet_o_mis 
        = (((((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_jmp)
               ? vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc
               : ((IData)(4U) + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)) 
             != vlSelf->Core__DOT__decode__DOT__reg_pnpc) 
            & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
           & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)));
    vlSelf->Core__DOT__decode__DOT___io_out_bits_imm_T_9 
        = ((5U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
            ? ((((vlSelf->Core__DOT__decode__DOT__inst 
                  >> 0x1fU) ? 0xfffU : 0U) << 0x14U) 
               | ((0xff000U & vlSelf->Core__DOT__decode__DOT__inst) 
                  | ((0x800U & (vlSelf->Core__DOT__decode__DOT__inst 
                                >> 9U)) | (0x7feU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))))
            : ((4U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                ? (0xfffff000U & vlSelf->Core__DOT__decode__DOT__inst)
                : ((3U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                    ? ((((vlSelf->Core__DOT__decode__DOT__inst 
                          >> 0x1fU) ? 0xfffffU : 0U) 
                        << 0xcU) | ((0x800U & (vlSelf->Core__DOT__decode__DOT__inst 
                                               << 4U)) 
                                    | ((0x7e0U & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)) 
                                       | (0x1eU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                   >> 7U)))))
                    : ((2U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                        ? ((((vlSelf->Core__DOT__decode__DOT__inst 
                              >> 0x1fU) ? 0x1fffffU
                              : 0U) << 0xbU) | ((0x7e0U 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->Core__DOT__decode__DOT__inst 
                                                      >> 7U))))
                        : ((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                            ? ((((vlSelf->Core__DOT__decode__DOT__inst 
                                  >> 0x1fU) ? 0x1fffffU
                                  : 0U) << 0xbU) | 
                               (0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                          >> 0x14U)))
                            : 0U)))));
    vlSelf->Core__DOT__decode__DOT__c0_1 = ((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 3U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_865));
    vlSelf->Core__DOT__decode_io_ren2 = ((1U == ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                                  ? 2U
                                                  : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_937))) 
                                         | (3U == (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 0U
                                                    : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_505))));
    vlSelf->io_dmem_req_bits_raddr = ((IData)((vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                               >> 3U)) 
                                      << 3U);
    vlSelf->io_dmem_req_bits_waddr = ((IData)((vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                               >> 3U)) 
                                      << 3U);
    VL_EXTEND_WQ(127,64, __Vtemp2625, vlSelf->Core__DOT__decode__DOT__rs2_reg);
    VL_SHIFTL_WWI(127,127,6, __Vtemp2626, __Vtemp2625, 
                  (0x38U & ((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out) 
                            << 3U)));
    vlSelf->io_dmem_req_bits_wdata = (((QData)((IData)(
                                                       __Vtemp2626[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vtemp2626[0U])));
    vlSelf->io_dmem_req_bits_wmask = (0x7fffU & (((7U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                   ? 0x80U
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                    ? 0xc0U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                     ? 0xe0U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                      ? 0xf0U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                       ? 0xf8U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                        ? 0xfcU
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                         ? 0xfeU
                                                         : 0xffU))))))) 
                                                 & (((3U 
                                                      == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                      ? 0xffU
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                       ? 0xfU
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                        ? 3U
                                                        : 1U))) 
                                                    << 
                                                    (7U 
                                                     & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))));
    vlSelf->Core__DOT__fetch_io_imem_req_bits_araddr 
        = ((IData)(vlSelf->Core__DOT__fetch__DOT__use_reg_npc)
            ? vlSelf->Core__DOT__fetch__DOT__reg_npc
            : ((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)
                ? ((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)
                    ? vlSelf->Core__DOT__execute_io_jmp_packet_o_jmp_npc
                    : 0U) : (0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc)));
    vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard 
        = (((IData)(vlSelf->Core__DOT__execute_io_ex_rd_en) 
            & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
               == (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                            >> 0xfU)))) & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)));
    vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard 
        = (((IData)(vlSelf->Core__DOT__mem_io_mem_rd_en) 
            & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
               == (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                            >> 0xfU)))) & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)));
    vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard 
        = (((IData)(vlSelf->Core__DOT__execute_io_ex_rd_en) 
            & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
               == (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                            >> 0x14U)))) & (IData)(vlSelf->Core__DOT__decode_io_ren2));
    vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard 
        = (((IData)(vlSelf->Core__DOT__mem_io_mem_rd_en) 
            & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
               == (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                            >> 0x14U)))) & (IData)(vlSelf->Core__DOT__decode_io_ren2));
    vlSelf->io_imem_req_bits_raddr = vlSelf->Core__DOT__fetch_io_imem_req_bits_araddr;
    vlSelf->Core__DOT__decode__DOT__stall = ((IData)(vlSelf->Core__DOT__mem__DOT__stall) 
                                             | (((((1U 
                                                    == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                                   | (2U 
                                                      == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code)) 
                                                     & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))) 
                                                 & ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard) 
                                                    | (IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard))) 
                                                | (((1U 
                                                     == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                                    | (2U 
                                                       == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))) 
                                                   & ((IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard) 
                                                      | (IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard)))));
    vlSelf->Core__DOT__fetch__DOT__stall = (1U & ((~ (IData)(vlSelf->io_imem_resp_bits_read_ok)) 
                                                  | (IData)(vlSelf->Core__DOT__decode__DOT__stall)));
    vlSelf->io_imem_req_bits_ren = (1U & (~ (IData)(vlSelf->Core__DOT__fetch__DOT__stall)));
    vlSelf->Core__DOT__fetch__DOT___GEN_0 = (((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis) 
                                              & (IData)(vlSelf->Core__DOT__fetch__DOT__stall)) 
                                             | (IData)(vlSelf->Core__DOT__fetch__DOT__use_reg_npc));
}

void VCore___024root___eval_initial(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_initial\n"); );
    // Body
    VCore___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VCore___024root___eval_settle(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_settle\n"); );
    // Body
    VCore___024root___settle__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VCore___024root___final(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___final\n"); );
}

void VCore___024root___ctor_var_reset(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_imem_req_ready = VL_RAND_RESET_I(1);
    vlSelf->io_imem_req_valid = VL_RAND_RESET_I(1);
    vlSelf->io_imem_req_bits_raddr = VL_RAND_RESET_I(32);
    vlSelf->io_imem_req_bits_waddr = VL_RAND_RESET_I(32);
    vlSelf->io_imem_req_bits_wdata = VL_RAND_RESET_Q(64);
    vlSelf->io_imem_req_bits_ren = VL_RAND_RESET_I(1);
    vlSelf->io_imem_req_bits_wen = VL_RAND_RESET_I(1);
    vlSelf->io_imem_req_bits_wmask = VL_RAND_RESET_I(8);
    vlSelf->io_imem_resp_ready = VL_RAND_RESET_I(1);
    vlSelf->io_imem_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->io_imem_resp_bits_rdata = VL_RAND_RESET_Q(64);
    vlSelf->io_imem_resp_bits_read_ok = VL_RAND_RESET_I(1);
    vlSelf->io_imem_resp_bits_write_ok = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_req_ready = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_req_valid = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_req_bits_raddr = VL_RAND_RESET_I(32);
    vlSelf->io_dmem_req_bits_waddr = VL_RAND_RESET_I(32);
    vlSelf->io_dmem_req_bits_wdata = VL_RAND_RESET_Q(64);
    vlSelf->io_dmem_req_bits_ren = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_req_bits_wen = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_req_bits_wmask = VL_RAND_RESET_I(8);
    vlSelf->io_dmem_resp_ready = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_resp_bits_rdata = VL_RAND_RESET_Q(64);
    vlSelf->io_dmem_resp_bits_read_ok = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_resp_bits_write_ok = VL_RAND_RESET_I(1);
    vlSelf->io_commit_pc = VL_RAND_RESET_I(32);
    vlSelf->io_regs_out_0 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_1 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_2 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_3 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_4 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_5 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_6 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_7 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_8 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_9 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_10 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_11 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_12 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_13 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_14 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_15 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_16 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_17 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_18 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_19 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_20 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_21 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_22 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_23 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_24 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_25 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_26 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_27 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_28 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_29 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_30 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_out_31 = VL_RAND_RESET_Q(64);
    vlSelf->io_commit = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__fetch_io_imem_req_bits_araddr = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__decode_io_ren2 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute_io_ex_rd_en = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute_io_jmp_packet_o_jmp_npc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__execute_io_jmp_packet_o_mis = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem_io_mem_rd_en = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem_io_mem_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__io_commit_pc_REG = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__io_commit_REG = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__fetch__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__inst_out = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__valid_out = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__fetch__DOT__reg_pnpc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__fetch__DOT__use_reg_npc = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__fetch__DOT__reg_npc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__fetch__DOT___npc_s_T_5 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__decode__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__decode__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__decode__DOT__inst_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT__reg_pnpc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__decode__DOT__rs1_reg = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__decode__DOT__rs2_reg = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_356 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_505 = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_566 = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_718 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_787 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_793 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_841 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_865 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__decode__DOT__c0_1 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_919 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_937 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__decode__DOT__c0_3 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_1057 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__decode__DOT__c0_4 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__decode__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT___io_out_bits_imm_T_9 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__regfile__DOT__rf_0 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_1 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_2 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_3 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_4 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_5 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_6 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_7 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_8 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_9 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_10 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_11 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_12 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_13 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_14 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_15 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_16 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_17 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_18 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_19 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_20 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_21 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_22 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_23 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_24 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_25 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_26 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_27 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_28 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_29 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_30 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT__rf_31 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT___GEN_26 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__regfile__DOT___GEN_58 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__alu_io_in1 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__alu_io_in2 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__alu_io_alu_out = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__alu_io_jmp = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__execute__DOT__mdu_io_mdu_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__io_is_ebreak_o_REG = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_mul_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_div_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__completed = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_divu = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_mul = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_word = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_6 = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out_lo_1 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_12 = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_13 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_26);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(65, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1);
    VL_RAND_RESET_W(67, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_lo = VL_RAND_RESET_Q(33);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_hi_1 = VL_RAND_RESET_Q(33);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___GEN_49 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT___GEN_50);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1);
    VL_RAND_RESET_W(65, vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_out = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_out = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_neg = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_neg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__cnt = VL_RAND_RESET_I(6);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___rem_out_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___quo_out_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___cnt_T_1 = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___reg_in1_T_5);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___rem_out_T_7 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___quo_out_T_11 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT___GEN_13 = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mdu_code = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__waddr = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__mem__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__wdata = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__mem__DOT__reg_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__mdu_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__req_wait = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__ld_data_raw = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__mem__DOT__ld_data = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__mem__DOT___ld_data_u_T_9 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__mem__DOT__io_wen_o_REG = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__wb_dpi__DOT__inst1 = 0;
    vlSelf->Core__DOT__wb_dpi__DOT__pc1 = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
