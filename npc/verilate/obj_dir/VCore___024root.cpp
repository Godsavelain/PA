// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore___024root.h"
#include "VCore__Syms.h"

//==========

VL_INLINE_OPT void VCore___024root___sequent__TOP__2(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_265;
    CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_280;
    CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_568;
    CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_742;
    QData/*63:0*/ Core__DOT__regfile__DOT___GEN_13;
    QData/*63:0*/ Core__DOT__regfile__DOT___GEN_45;
    // Body
    if (vlSelf->reset) {
        vlSelf->Core__DOT__fetch__DOT__pc = 0x80000000U;
    } else if (vlSelf->io_imem_read_ok) {
        vlSelf->Core__DOT__fetch__DOT__pc = vlSelf->Core__DOT__fetch__DOT__npc;
    }
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code 
        = ((IData)(vlSelf->reset) ? 0U : ((0x37U == 
                                           (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                                           ? 1U : (
                                                   (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
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
                                                         : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_295)))))))));
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_26 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x1aU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_26 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_25 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x19U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_25 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_24 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x18U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_24 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_14 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0xeU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_14 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_15 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0xfU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_15 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_16 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x10U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_16 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_17 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x11U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_17 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_18 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x12U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_18 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_19 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x13U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_19 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_20 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x14U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_20 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_21 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x15U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_21 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_22 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x16U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_22 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_23 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x17U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_23 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_11 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0xbU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_11 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_10 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0xaU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_10 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_9 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((9U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_9 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_8 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((8U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_8 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_7 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((7U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_7 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_1 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_1 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_0 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_0 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_2 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((2U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_2 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_6 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((6U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_6 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_3 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((3U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_3 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_4 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((4U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_4 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_5 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((5U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_5 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_12 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0xcU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_12 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_13 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0xdU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_13 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__execute__DOT__rs2 = 0ULL;
        vlSelf->Core__DOT__execute__DOT__rs1 = 0ULL;
    } else {
        vlSelf->Core__DOT__execute__DOT__rs2 = vlSelf->Core__DOT__execute_io_ex_rs2_i_REG;
        vlSelf->Core__DOT__execute__DOT__rs1 = vlSelf->Core__DOT__execute_io_ex_rs1_i_REG;
    }
    vlSelf->io_imem_raddr = (0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc);
    vlSelf->Core__DOT__fetch__DOT__npc = ((IData)(4U) 
                                          + (0xfffffffcU 
                                             & vlSelf->Core__DOT__fetch__DOT__pc));
    vlSelf->io_regs_26 = vlSelf->Core__DOT__regfile__DOT__rf_26;
    vlSelf->io_regs_25 = vlSelf->Core__DOT__regfile__DOT__rf_25;
    vlSelf->io_regs_24 = vlSelf->Core__DOT__regfile__DOT__rf_24;
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
    vlSelf->io_regs_11 = vlSelf->Core__DOT__regfile__DOT__rf_11;
    vlSelf->io_regs_10 = vlSelf->Core__DOT__regfile__DOT__rf_10;
    vlSelf->io_regs_9 = vlSelf->Core__DOT__regfile__DOT__rf_9;
    vlSelf->io_regs_8 = vlSelf->Core__DOT__regfile__DOT__rf_8;
    vlSelf->io_regs_7 = vlSelf->Core__DOT__regfile__DOT__rf_7;
    vlSelf->io_regs_1 = vlSelf->Core__DOT__regfile__DOT__rf_1;
    vlSelf->io_regs_0 = vlSelf->Core__DOT__regfile__DOT__rf_0;
    vlSelf->io_regs_2 = vlSelf->Core__DOT__regfile__DOT__rf_2;
    vlSelf->io_regs_6 = vlSelf->Core__DOT__regfile__DOT__rf_6;
    vlSelf->io_regs_3 = vlSelf->Core__DOT__regfile__DOT__rf_3;
    vlSelf->io_regs_4 = vlSelf->Core__DOT__regfile__DOT__rf_4;
    vlSelf->io_regs_5 = vlSelf->Core__DOT__regfile__DOT__rf_5;
    vlSelf->io_regs_12 = vlSelf->Core__DOT__regfile__DOT__rf_12;
    vlSelf->io_regs_13 = vlSelf->Core__DOT__regfile__DOT__rf_13;
    vlSelf->Core__DOT__execute_io_ex_rs2_i_REG = ((0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->Core__DOT__decode__DOT__inst 
                                                       >> 0x14U)))
                                                   ? 
                                                  ((0x1fU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Core__DOT__decode__DOT__inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->Core__DOT__regfile__DOT__rf_31
                                                    : 
                                                   ((0x1eU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Core__DOT__decode__DOT__inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->Core__DOT__regfile__DOT__rf_30
                                                     : 
                                                    ((0x1dU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Core__DOT__decode__DOT__inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->Core__DOT__regfile__DOT__rf_29
                                                      : 
                                                     ((0x1cU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Core__DOT__decode__DOT__inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->Core__DOT__regfile__DOT__rf_28
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Core__DOT__decode__DOT__inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->Core__DOT__regfile__DOT__rf_27
                                                        : vlSelf->Core__DOT__regfile__DOT___GEN_58)))))
                                                   : 0ULL);
    vlSelf->Core__DOT__execute_io_ex_rs1_i_REG = ((0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->Core__DOT__decode__DOT__inst 
                                                       >> 0xfU)))
                                                   ? 
                                                  ((0x1fU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Core__DOT__decode__DOT__inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->Core__DOT__regfile__DOT__rf_31
                                                    : 
                                                   ((0x1eU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Core__DOT__decode__DOT__inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->Core__DOT__regfile__DOT__rf_30
                                                     : 
                                                    ((0x1dU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Core__DOT__decode__DOT__inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->Core__DOT__regfile__DOT__rf_29
                                                      : 
                                                     ((0x1cU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Core__DOT__decode__DOT__inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->Core__DOT__regfile__DOT__rf_28
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Core__DOT__decode__DOT__inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->Core__DOT__regfile__DOT__rf_27
                                                        : vlSelf->Core__DOT__regfile__DOT___GEN_26)))))
                                                   : 0ULL);
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_31 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x1fU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_31 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_30 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x1eU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_30 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_29 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x1dU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_29 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_28 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x1cU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_28 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_27 = 0ULL;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x1bU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_27 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    vlSelf->io_regs_31 = vlSelf->Core__DOT__regfile__DOT__rf_31;
    vlSelf->io_regs_30 = vlSelf->Core__DOT__regfile__DOT__rf_30;
    vlSelf->io_regs_29 = vlSelf->Core__DOT__regfile__DOT__rf_29;
    vlSelf->io_regs_28 = vlSelf->Core__DOT__regfile__DOT__rf_28;
    vlSelf->io_regs_27 = vlSelf->Core__DOT__regfile__DOT__rf_27;
    vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG = vlSelf->Core__DOT__mem__DOT__waddr;
    vlSelf->Core__DOT__mem__DOT__io_wen_o_REG = vlSelf->Core__DOT__mem__DOT__wen;
    vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG = vlSelf->Core__DOT__mem__DOT__wdata;
    vlSelf->Core__DOT__mem__DOT__waddr = ((IData)(vlSelf->reset)
                                           ? 0U : (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr));
    vlSelf->Core__DOT__mem__DOT__wen = ((~ (IData)(vlSelf->reset)) 
                                        & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en));
    vlSelf->Core__DOT__mem__DOT__wdata = ((IData)(vlSelf->reset)
                                           ? 0ULL : 
                                          ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type)
                                            ? (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                                             >> 0x1fU)))
                                                                  ? 0xffffffffU
                                                                  : 0U))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)))
                                            : vlSelf->Core__DOT__execute__DOT__alu__DOT__out0));
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
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr 
        = ((IData)(vlSelf->reset) ? 0U : (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                   >> 7U)));
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en 
        = ((~ (IData)(vlSelf->reset)) & ((0x37U == 
                                          (0x7fU & vlSelf->Core__DOT__decode__DOT__inst)) 
                                         | ((0x17U 
                                             == (0x7fU 
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
                                                                                & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_765)))))))))))))))))));
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type 
        = ((~ (IData)(vlSelf->reset)) & ((0x37U != 
                                          (0x7fU & vlSelf->Core__DOT__decode__DOT__inst)) 
                                         & ((0x17U 
                                             != (0x7fU 
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
                                                                                & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_585)))))))))))))))))));
    vlSelf->Core__DOT__decode__DOT__inst = ((IData)(vlSelf->reset)
                                             ? 0U : (IData)(vlSelf->io_imem_rdata));
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

void VCore___024root___eval(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VCore___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VCore___024root___change_request_1(VCore___024root* vlSelf);

VL_INLINE_OPT QData VCore___024root___change_request(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___change_request\n"); );
    // Body
    return (VCore___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VCore___024root___change_request_1(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCore___024root___eval_debug_assertions(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_imem_read_ok & 0xfeU))) {
        Verilated::overWidthError("io_imem_read_ok");}
    if (VL_UNLIKELY((vlSelf->io_imem_write_ok & 0xfeU))) {
        Verilated::overWidthError("io_imem_write_ok");}
    if (VL_UNLIKELY((vlSelf->io_dmem_read_ok & 0xfeU))) {
        Verilated::overWidthError("io_dmem_read_ok");}
    if (VL_UNLIKELY((vlSelf->io_dmem_write_ok & 0xfeU))) {
        Verilated::overWidthError("io_dmem_write_ok");}
}
#endif  // VL_DEBUG
