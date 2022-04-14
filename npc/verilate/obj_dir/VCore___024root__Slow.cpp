// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore___024root.h"
#include "VCore__Syms.h"

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
    vlSelf->io_dmem_raddr = 0U;
    vlSelf->io_dmem_waddr = 0U;
    vlSelf->io_dmem_wdata = 0ULL;
    vlSelf->io_dmem_ren = 0U;
    vlSelf->io_dmem_wen = 0U;
    vlSelf->io_dmem_wmask = 0U;
}

void VCore___024root___settle__TOP__3(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___settle__TOP__3\n"); );
    // Variables
    CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_265;
    CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_280;
    CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_568;
    CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_742;
    QData/*63:0*/ Core__DOT__regfile__DOT___GEN_13;
    QData/*63:0*/ Core__DOT__regfile__DOT___GEN_45;
    // Body
    vlSelf->io_imem_raddr = (0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc);
    vlSelf->io_regs_0 = vlSelf->Core__DOT__regfile__DOT__rf_0;
    vlSelf->io_regs_1 = vlSelf->Core__DOT__regfile__DOT__rf_1;
    vlSelf->io_regs_2 = vlSelf->Core__DOT__regfile__DOT__rf_2;
    vlSelf->io_regs_3 = vlSelf->Core__DOT__regfile__DOT__rf_3;
    vlSelf->io_regs_4 = vlSelf->Core__DOT__regfile__DOT__rf_4;
    vlSelf->io_regs_5 = vlSelf->Core__DOT__regfile__DOT__rf_5;
    vlSelf->io_regs_6 = vlSelf->Core__DOT__regfile__DOT__rf_6;
    vlSelf->io_regs_7 = vlSelf->Core__DOT__regfile__DOT__rf_7;
    vlSelf->io_regs_8 = vlSelf->Core__DOT__regfile__DOT__rf_8;
    vlSelf->io_regs_9 = vlSelf->Core__DOT__regfile__DOT__rf_9;
    vlSelf->io_regs_10 = vlSelf->Core__DOT__regfile__DOT__rf_10;
    vlSelf->io_regs_11 = vlSelf->Core__DOT__regfile__DOT__rf_11;
    vlSelf->io_regs_12 = vlSelf->Core__DOT__regfile__DOT__rf_12;
    vlSelf->io_regs_13 = vlSelf->Core__DOT__regfile__DOT__rf_13;
    vlSelf->io_regs_14 = vlSelf->Core__DOT__regfile__DOT__rf_14;
    vlSelf->io_regs_15 = vlSelf->Core__DOT__regfile__DOT__rf_15;
    vlSelf->io_regs_16 = vlSelf->Core__DOT__regfile__DOT__rf_16;
    vlSelf->io_regs_17 = vlSelf->Core__DOT__regfile__DOT__rf_17;
    vlSelf->io_regs_18 = vlSelf->Core__DOT__regfile__DOT__rf_18;
    vlSelf->io_regs_19 = vlSelf->Core__DOT__regfile__DOT__rf_19;
    vlSelf->io_regs_20 = vlSelf->Core__DOT__regfile__DOT__rf_20;
    vlSelf->io_regs_21 = vlSelf->Core__DOT__regfile__DOT__rf_21;
    vlSelf->io_regs_22 = vlSelf->Core__DOT__regfile__DOT__rf_22;
    vlSelf->io_regs_23 = vlSelf->Core__DOT__regfile__DOT__rf_23;
    vlSelf->io_regs_24 = vlSelf->Core__DOT__regfile__DOT__rf_24;
    vlSelf->io_regs_25 = vlSelf->Core__DOT__regfile__DOT__rf_25;
    vlSelf->io_regs_26 = vlSelf->Core__DOT__regfile__DOT__rf_26;
    vlSelf->Core__DOT__fetch__DOT__npc = ((IData)(4U) 
                                          + (0xfffffffcU 
                                             & vlSelf->Core__DOT__fetch__DOT__pc));
    vlSelf->io_regs_27 = vlSelf->Core__DOT__regfile__DOT__rf_27;
    vlSelf->io_regs_28 = vlSelf->Core__DOT__regfile__DOT__rf_28;
    vlSelf->io_regs_29 = vlSelf->Core__DOT__regfile__DOT__rf_29;
    vlSelf->io_regs_30 = vlSelf->Core__DOT__regfile__DOT__rf_30;
    vlSelf->io_regs_31 = vlSelf->Core__DOT__regfile__DOT__rf_31;
    vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
        = ((7U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
            ? (vlSelf->Core__DOT__execute__DOT__rs1 
               & vlSelf->Core__DOT__execute__DOT__rs2)
            : ((6U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                ? (vlSelf->Core__DOT__execute__DOT__rs1 
                   | vlSelf->Core__DOT__execute__DOT__rs2)
                : ((5U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                    ? (vlSelf->Core__DOT__execute__DOT__rs1 
                       ^ vlSelf->Core__DOT__execute__DOT__rs2)
                    : ((4U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                        ? (QData)((IData)((vlSelf->Core__DOT__execute__DOT__rs1 
                                           < vlSelf->Core__DOT__execute__DOT__rs2)))
                        : ((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                            ? (QData)((IData)(VL_LTS_IQQ(1,64,64, vlSelf->Core__DOT__execute__DOT__rs1, vlSelf->Core__DOT__execute__DOT__rs2)))
                            : ((2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                                ? (vlSelf->Core__DOT__execute__DOT__rs1 
                                   - vlSelf->Core__DOT__execute__DOT__rs2)
                                : ((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code))
                                    ? (vlSelf->Core__DOT__execute__DOT__rs1 
                                       + vlSelf->Core__DOT__execute__DOT__rs2)
                                    : 0ULL)))))));
    Core__DOT__decode__DOT___ctrl_T_568 = ((0x40005033U 
                                            != (0xfe00707fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                           & ((0x6033U 
                                               != (0xfe00707fU 
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
                                                          & ((0x10500073U 
                                                              != vlSelf->Core__DOT__decode__DOT__inst) 
                                                             & ((0x6003U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                & ((0x3003U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                   & ((0x3023U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                      & ((0x1bU 
                                                                          == 
                                                                          (0x707fU 
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
                                                                                | (0x4000503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__decode__DOT__inst))))))))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_742 = ((0x10500073U 
                                            != vlSelf->Core__DOT__decode__DOT__inst) 
                                           & ((0x6003U 
                                               == (0x707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst)) 
                                              | ((0x3003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                 | ((0x3023U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                    & ((0x1bU 
                                                        == 
                                                        (0x707fU 
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
                                                                                & vlSelf->Core__DOT__decode__DOT__inst))))))))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_265 = ((0x73U == vlSelf->Core__DOT__decode__DOT__inst)
                                            ? 0U : 
                                           ((0x100073U 
                                             == vlSelf->Core__DOT__decode__DOT__inst)
                                             ? 0U : 
                                            ((0x30200073U 
                                              == vlSelf->Core__DOT__decode__DOT__inst)
                                              ? 0U : 
                                             ((0x10500073U 
                                               == vlSelf->Core__DOT__decode__DOT__inst)
                                               ? 0U
                                               : ((0x6003U 
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
    vlSelf->Core__DOT__decode__DOT___ctrl_T_585 = (
                                                   (0x2023U 
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
                                                                     & ((0x1013U 
                                                                         != 
                                                                         (0xfc00707fU 
                                                                          & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                                        & ((0x5013U 
                                                                            != 
                                                                            (0xfc00707fU 
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
                                                                                & (IData)(Core__DOT__decode__DOT___ctrl_T_568))))))))))))))))));
    vlSelf->Core__DOT__decode__DOT___ctrl_T_765 = (
                                                   (0x2023U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                   & ((0x13U 
                                                       == 
                                                       (0x707fU 
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
                                                                                & (IData)(Core__DOT__decode__DOT___ctrl_T_742))))))))))))))))))))))));
    Core__DOT__decode__DOT___ctrl_T_280 = ((0x6013U 
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
                                              ? 8U : 
                                             ((0x5013U 
                                               == (0xfc00707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 9U
                                               : ((0x40005013U 
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
                                                            : 
                                                           ((0x7033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 7U
                                                             : (IData)(Core__DOT__decode__DOT___ctrl_T_265))))))))))))))));
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
    vlSelf->Core__DOT__decode__DOT___ctrl_T_295 = (
                                                   (0x5063U 
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
                                                                 : 
                                                                ((0x4013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                                                  ? 5U
                                                                  : (IData)(Core__DOT__decode__DOT___ctrl_T_280))))))))))))))));
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
    vlSelf->io_regs_0 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_1 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_2 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_3 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_4 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_5 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_6 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_7 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_8 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_9 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_10 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_11 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_12 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_13 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_14 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_15 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_16 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_17 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_18 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_19 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_20 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_21 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_22 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_23 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_24 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_25 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_26 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_27 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_28 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_29 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_30 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_31 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute_io_ex_rs1_i_REG = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute_io_ex_rs2_i_REG = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__npc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__decode__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_295 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_585 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_765 = VL_RAND_RESET_I(1);
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
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__rs1 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__rs2 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__mem__DOT__waddr = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__mem__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__wdata = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__mem__DOT__io_wen_o_REG = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
