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
    vlSelf->io_imem_waddr = 0U;
    vlSelf->io_imem_wdata = 0ULL;
    vlSelf->io_imem_ren = 1U;
    vlSelf->io_imem_wen = 0U;
    vlSelf->io_imem_wmask = 0U;
}

void VCore___024root___settle__TOP__3(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___settle__TOP__3\n"); );
    // Variables
    CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_326;
    CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_341;
    CData/*1:0*/ Core__DOT__decode__DOT___ctrl_T_479;
    CData/*1:0*/ Core__DOT__decode__DOT___ctrl_T_494;
    CData/*1:0*/ Core__DOT__decode__DOT___ctrl_T_551;
    CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_752;
    CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_770;
    CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_787;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_810;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_825;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_841;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_856;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_888;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_904;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_919;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_934;
    CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_968;
    CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_993;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_1026;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_1041;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_1057;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_1072;
    CData/*0:0*/ Core__DOT__execute__DOT__alu__DOT___out0_T_11;
    CData/*0:0*/ Core__DOT__execute__DOT__alu__DOT___out0_T_12;
    VlWide<4>/*127:0*/ __Vtemp10;
    VlWide<4>/*127:0*/ __Vtemp11;
    VlWide<4>/*127:0*/ __Vtemp14;
    VlWide<4>/*127:0*/ __Vtemp15;
    QData/*63:0*/ Core__DOT__regfile__DOT___GEN_13;
    QData/*63:0*/ Core__DOT__regfile__DOT___GEN_45;
    QData/*63:0*/ Core__DOT__execute__DOT___rs1_temp_T_2;
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
    vlSelf->Core__DOT__mem__DOT__ld_data_raw = (vlSelf->io_dmem_rdata 
                                                >> 
                                                (0x38U 
                                                 & (vlSelf->Core__DOT__mem__DOT__reg_mem_addr 
                                                    << 3U)));
    vlSelf->Core__DOT__mem_io_mem_rd_en = ((~ (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid)) 
                                           & (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en));
    vlSelf->Core__DOT__mem__DOT__is_load = ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                            | (2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)));
    vlSelf->io_imem_raddr = (0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc);
    vlSelf->Core__DOT__fetch__DOT__npc_s = ((IData)(4U) 
                                            + (0xfffffffcU 
                                               & vlSelf->Core__DOT__fetch__DOT__pc));
    vlSelf->Core__DOT__execute_io_ex_rd_en = ((~ (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
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
    vlSelf->Core__DOT__execute__DOT__alu_io_in1 = (
                                                   (5U 
                                                    == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src))
                                                    ? (QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src))
                                                     ? (QData)((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src))
                                                      ? Core__DOT__execute__DOT___rs1_temp_T_2
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src))
                                                       ? vlSelf->Core__DOT__decode__DOT__io_rs1_data_o_REG
                                                       : 0ULL))));
    vlSelf->Core__DOT__execute__DOT__alu_io_in2 = (
                                                   (5U 
                                                    == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src))
                                                    ? (QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src))
                                                     ? (QData)((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src))
                                                      ? Core__DOT__execute__DOT___rs1_temp_T_2
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src))
                                                       ? vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG
                                                       : 0ULL))));
    vlSelf->Core__DOT__mem__DOT___ld_data_T_15 = ((3U 
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
                                                                        & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))))))));
    vlSelf->Core__DOT__mem__DOT___ld_data_u_T_7 = (
                                                   (2U 
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
                                                                        & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))))));
    vlSelf->Core__DOT__mem__DOT__req_wait = ((((IData)(vlSelf->Core__DOT__mem__DOT__is_load) 
                                               & (~ (IData)(vlSelf->io_dmem_read_ok))) 
                                              | ((3U 
                                                  == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                                 & (~ (IData)(vlSelf->io_dmem_write_ok)))) 
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
    vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc 
        = (((2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code))
             ? (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_in1)
             : vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc) 
           + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm);
    vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt 
        = (0x3fU & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type)
                     ? (0x1fU & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_in2))
                     : (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_in2)));
    Core__DOT__execute__DOT__alu__DOT___out0_T_11 = 
        VL_LTS_IQQ(1,64,64, vlSelf->Core__DOT__execute__DOT__alu_io_in1, vlSelf->Core__DOT__execute__DOT__alu_io_in2);
    Core__DOT__execute__DOT__alu__DOT___out0_T_12 = 
        (vlSelf->Core__DOT__execute__DOT__alu_io_in1 
         < vlSelf->Core__DOT__execute__DOT__alu_io_in2);
    vlSelf->Core__DOT__mem_io_mem_rd_data = ((IData)(vlSelf->Core__DOT__mem__DOT__is_load)
                                              ? ((2U 
                                                  == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                                  ? 
                                                 ((2U 
                                                   == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                                   ? 
                                                  ((3U 
                                                    == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                    ? vlSelf->Core__DOT__mem__DOT__ld_data_raw
                                                    : vlSelf->Core__DOT__mem__DOT___ld_data_u_T_7)
                                                   : 0ULL)
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                                   ? 
                                                  ((1U 
                                                    == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                                    ? vlSelf->Core__DOT__mem__DOT___ld_data_T_15
                                                    : 0ULL)
                                                   : 0ULL))
                                              : vlSelf->Core__DOT__mem__DOT__wdata);
    vlSelf->io_dmem_ren = ((~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)) 
                           & (((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                               | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                              & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)));
    vlSelf->io_dmem_wen = ((~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)) 
                           & ((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                              & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)));
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
    Core__DOT__decode__DOT___ctrl_T_787 = ((0x5063U 
                                            != (0x707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                           & ((0x6063U 
                                               != (0x707fU 
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
    Core__DOT__decode__DOT___ctrl_T_1057 = ((0x5013U 
                                             == (0xfc00707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 6U : 
                                            ((0x40005013U 
                                              == (0xfc00707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 6U : 
                                             ((0x33U 
                                               == (0xfe00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 0U
                                               : ((0x40000033U 
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
    Core__DOT__decode__DOT___ctrl_T_841 = ((0x5013U 
                                            == (0xfc00707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 1U : 
                                           ((0x40005013U 
                                             == (0xfc00707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 1U : 
                                            ((0x33U 
                                              == (0xfe00707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 1U : 
                                             ((0x40000033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 1U
                                               : ((0x1033U 
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
    Core__DOT__decode__DOT___ctrl_T_919 = ((0x2013U 
                                            == (0x707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 2U : 
                                           ((0x3013U 
                                             == (0x707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 2U : 
                                            ((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 2U : 
                                             ((0x6013U 
                                               == (0x707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 2U
                                               : ((0x7013U 
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
    VL_EXTEND_WQ(127,64, __Vtemp10, vlSelf->Core__DOT__execute__DOT__alu_io_in1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp11, __Vtemp10, (IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt));
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
                        ? (((QData)((IData)(__Vtemp11[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        __Vtemp11[0U])))
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
                                                                  & (IData)(Core__DOT__decode__DOT___ctrl_T_787)))))));
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
                                                              : (IData)(Core__DOT__decode__DOT___ctrl_T_1057)))))))))))))));
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
                                                                : (IData)(Core__DOT__decode__DOT___ctrl_T_841)))))))))))))));
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
                                                             : (IData)(Core__DOT__decode__DOT___ctrl_T_919))))))))))))))));
    vlSelf->Core__DOT__execute_io_jmp_packet_o_mis 
        = ((((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_jmp)
              ? vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc
              : ((IData)(4U) + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)) 
            != vlSelf->Core__DOT__decode__DOT__io_p_npc_o_REG) 
           & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid));
    vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
        = ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type)
            ? (((QData)((IData)(((1U & (IData)((vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)))
            : vlSelf->Core__DOT__execute__DOT__alu__DOT__out0);
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
    vlSelf->io_dmem_raddr = ((IData)((vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                      >> 3U)) << 3U);
    vlSelf->io_dmem_waddr = ((IData)((vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                      >> 3U)) << 3U);
    VL_EXTEND_WQ(127,64, __Vtemp14, vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG);
    VL_SHIFTL_WWI(127,127,6, __Vtemp15, __Vtemp14, 
                  (0x38U & ((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out) 
                            << 3U)));
    vlSelf->io_dmem_wdata = (((QData)((IData)(__Vtemp15[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          __Vtemp15[0U])));
    vlSelf->io_dmem_wmask = (0x7fffU & (((7U == (7U 
                                                 & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                          ? 0x80U : 
                                         ((6U == (7U 
                                                  & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                           ? 0xc0U : 
                                          ((5U == (7U 
                                                   & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                            ? 0xe0U
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                ? 0xf0U
                                                : (
                                                   (3U 
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
                                        & (((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                             ? 0xffU
                                             : ((2U 
                                                 == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                 ? 0xfU
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                  ? 3U
                                                  : 1U))) 
                                           << (7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))));
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
    vlSelf->Core__DOT__decode__DOT__stall = ((IData)(vlSelf->Core__DOT__mem__DOT__req_wait) 
                                             | ((((1U 
                                                   == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                                  | (2U 
                                                     == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                                 & ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard) 
                                                    | (IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard))) 
                                                | (((1U 
                                                     == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                                    | (2U 
                                                       == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))) 
                                                   & ((IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard) 
                                                      | (IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard)))));
    vlSelf->Core__DOT__fetch__DOT__stall = (1U & ((~ (IData)(vlSelf->io_imem_read_ok)) 
                                                  | (IData)(vlSelf->Core__DOT__decode__DOT__stall)));
    vlSelf->Core__DOT__fetch__DOT___T_1 = (1U & ((~ (IData)(vlSelf->Core__DOT__fetch__DOT__stall)) 
                                                 | (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)));
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
    VCore___024root___settle__TOP__3(vlSelf);
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
    vlSelf->io_imem_raddr = VL_RAND_RESET_I(32);
    vlSelf->io_imem_waddr = VL_RAND_RESET_I(32);
    vlSelf->io_imem_wdata = VL_RAND_RESET_Q(64);
    vlSelf->io_imem_ren = VL_RAND_RESET_I(1);
    vlSelf->io_imem_wen = VL_RAND_RESET_I(1);
    vlSelf->io_imem_wmask = VL_RAND_RESET_I(8);
    vlSelf->io_imem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->io_imem_read_ok = VL_RAND_RESET_I(1);
    vlSelf->io_imem_write_ok = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_raddr = VL_RAND_RESET_I(32);
    vlSelf->io_dmem_waddr = VL_RAND_RESET_I(32);
    vlSelf->io_dmem_wdata = VL_RAND_RESET_Q(64);
    vlSelf->io_dmem_ren = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_wen = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_wmask = VL_RAND_RESET_I(8);
    vlSelf->io_dmem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->io_dmem_read_ok = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_write_ok = VL_RAND_RESET_I(1);
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
    vlSelf->io_regs_in_0 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_1 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_2 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_3 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_4 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_5 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_6 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_7 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_8 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_9 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_10 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_11 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_12 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_13 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_14 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_15 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_16 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_17 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_18 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_19 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_20 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_21 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_22 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_23 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_24 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_25 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_26 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_27 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_28 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_29 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_30 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_in_31 = VL_RAND_RESET_Q(64);
    vlSelf->io_pc_in = VL_RAND_RESET_I(32);
    vlSelf->io_write_regs = VL_RAND_RESET_I(1);
    vlSelf->io_commit = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode_io_ren2 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute_io_ex_rd_en = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute_io_jmp_packet_o_mis = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem_io_mem_rd_en = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem_io_mem_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__io_commit_pc_REG = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__io_commit_REG = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__fetch__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__inst_out = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__valid_out = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__npc_s = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__fetch__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__fetch__DOT__io_p_npc_REG = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__io_out_bits_pc_REG = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__io_out_bits_inst_REG = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__io_out_bits_inst_valid_REG = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__decode__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__decode__DOT__inst_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT__io_rs1_data_o_REG = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_356 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_505 = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_566 = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_793 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_865 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__decode__DOT__c0_1 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_937 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__decode__DOT__c0_3 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT__c0_4 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__decode__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT__io_p_npc_o_REG = VL_RAND_RESET_I(32);
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
    vlSelf->Core__DOT__execute__DOT__io_is_ebreak_o_REG = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__waddr = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__mem__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__wdata = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__mem__DOT__reg_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__mem__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__req_wait = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__ld_data_raw = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__mem__DOT___ld_data_T_15 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__mem__DOT___ld_data_u_T_7 = VL_RAND_RESET_Q(64);
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
