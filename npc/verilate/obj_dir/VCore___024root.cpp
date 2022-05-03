// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore___024root.h"
#include "VCore__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void wb_info(const svBitVecVal* inst, const svBitVecVal* pc, svBit ebreak);

VL_INLINE_OPT void VCore___024root____Vdpiimwrap_Core__DOT__wb_dpi__DOT__wb_info_TOP(IData/*31:0*/ inst, IData/*31:0*/ pc, CData/*0:0*/ ebreak) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root____Vdpiimwrap_Core__DOT__wb_dpi__DOT__wb_info_TOP\n"); );
    // Body
    svBitVecVal inst__Vcvt[1];
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) VL_SET_SVBV_I(32, inst__Vcvt + 1 * inst__Vidx, inst);
    svBitVecVal pc__Vcvt[1];
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) VL_SET_SVBV_I(32, pc__Vcvt + 1 * pc__Vidx, pc);
    svBit ebreak__Vcvt;
    for (size_t ebreak__Vidx = 0; ebreak__Vidx < 1; ++ebreak__Vidx) ebreak__Vcvt = ebreak;
    wb_info(inst__Vcvt, pc__Vcvt, ebreak__Vcvt);
}

VL_INLINE_OPT void VCore___024root___sequent__TOP__2(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___sequent__TOP__2\n"); );
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
    IData/*31:0*/ __Vdly__Core__DOT__execute__DOT__ex_reg_decodeop_pc;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp3;
    VlWide<4>/*127:0*/ __Vtemp6;
    VlWide<4>/*127:0*/ __Vtemp7;
    QData/*63:0*/ Core__DOT__regfile__DOT___GEN_13;
    QData/*63:0*/ Core__DOT__regfile__DOT___GEN_45;
    QData/*63:0*/ Core__DOT__execute__DOT___rs1_temp_T_2;
    // Body
    __Vdly__Core__DOT__execute__DOT__ex_reg_decodeop_pc 
        = vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc;
    vlSelf->Core__DOT__wb_dpi__DOT__inst1 = vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_inst;
    vlSelf->Core__DOT__wb_dpi__DOT__pc1 = vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc;
    VCore___024root____Vdpiimwrap_Core__DOT__wb_dpi__DOT__wb_info_TOP(vlSelf->Core__DOT__wb_dpi__DOT__inst1, vlSelf->Core__DOT__wb_dpi__DOT__pc1, (IData)(vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG));
    if (vlSelf->reset) {
        vlSelf->Core__DOT__mem__DOT__reg_mem_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__mem__DOT__reg_mem_addr = (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out);
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en 
            = vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en;
    }
    vlSelf->Core__DOT__io_commit_pc_REG = vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc;
    vlSelf->Core__DOT__decode__DOT__io_p_npc_o_REG 
        = vlSelf->Core__DOT__decode__DOT__reg_pnpc;
    if (vlSelf->reset) {
        __Vdly__Core__DOT__execute__DOT__ex_reg_decodeop_pc = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        __Vdly__Core__DOT__execute__DOT__ex_reg_decodeop_pc 
            = vlSelf->Core__DOT__decode__DOT__pc;
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code 
            = ((0x37U == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                ? 1U : ((0x17U == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                         ? 1U : ((0x6fU == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                                  ? 0U : ((0x67U == 
                                           (0x707fU 
                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                           ? 0U : (
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
                                                     : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_356)))))));
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code 
            = ((0x37U == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                ? 0U : ((0x17U == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                         ? 0U : ((0x6fU == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                                  ? 1U : ((0x67U == 
                                           (0x707fU 
                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                           ? 2U : (
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 3U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 4U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 5U
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 6U
                                                       : 
                                                      ((0x6063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 7U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 8U
                                                         : 0U))))))))));
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type 
            = ((0x37U != (0x7fU & vlSelf->Core__DOT__decode__DOT__inst)) 
               & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793));
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr 
            = vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr;
    }
    vlSelf->Core__DOT__io_commit_REG = vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_valid;
    if (vlSelf->reset) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src 
            = ((0x37U == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                ? 3U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_865));
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src 
            = ((0x37U == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                ? 2U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_937));
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm 
            = ((7U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                ? (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                            >> 0xfU)) : ((6U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                                          ? (((0x37U 
                                               != (0x7fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst)) 
                                              & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793))
                                              ? (0x1fU 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 0x14U))
                                              : (0x3fU 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 0x14U)))
                                          : vlSelf->Core__DOT__decode__DOT___io_out_bits_imm_T_9));
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_26 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_26 = vlSelf->io_regs_in_26;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x1aU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_26 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_25 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_25 = vlSelf->io_regs_in_25;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x19U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_25 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_24 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_24 = vlSelf->io_regs_in_24;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x18U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_24 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_23 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_23 = vlSelf->io_regs_in_23;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x17U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_23 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_22 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_22 = vlSelf->io_regs_in_22;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x16U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_22 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_21 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_21 = vlSelf->io_regs_in_21;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x15U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_21 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_20 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_20 = vlSelf->io_regs_in_20;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x14U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_20 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_18 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_18 = vlSelf->io_regs_in_18;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x12U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_18 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_15 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_15 = vlSelf->io_regs_in_15;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0xfU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_15 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_16 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_16 = vlSelf->io_regs_in_16;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x10U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_16 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_17 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_17 = vlSelf->io_regs_in_17;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x11U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_17 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_19 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_19 = vlSelf->io_regs_in_19;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x13U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_19 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_14 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_14 = vlSelf->io_regs_in_14;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0xeU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_14 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_6 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_6 = vlSelf->io_regs_in_6;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((6U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_6 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_11 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_11 = vlSelf->io_regs_in_11;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0xbU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_11 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_4 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_4 = vlSelf->io_regs_in_4;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((4U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_4 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_1 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_1 = vlSelf->io_regs_in_1;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_1 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_8 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_8 = vlSelf->io_regs_in_8;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((8U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_8 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_13 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_13 = vlSelf->io_regs_in_13;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0xdU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_13 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_5 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_5 = vlSelf->io_regs_in_5;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((5U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_5 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_10 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_10 = vlSelf->io_regs_in_10;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0xaU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_10 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_2 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_2 = vlSelf->io_regs_in_2;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((2U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_2 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_9 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_9 = vlSelf->io_regs_in_9;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((9U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_9 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_0 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_0 = vlSelf->io_regs_in_0;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_0 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_7 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_7 = vlSelf->io_regs_in_7;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((7U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_7 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_12 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_12 = vlSelf->io_regs_in_12;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0xcU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_12 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_3 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_3 = vlSelf->io_regs_in_3;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((3U == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_3 = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    vlSelf->Core__DOT__decode__DOT__io_rs1_data_o_REG 
        = ((0U != (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                            >> 0xfU))) ? ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard)
                                           ? vlSelf->Core__DOT__execute__DOT__alu_io_alu_out
                                           : ((IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard)
                                               ? vlSelf->Core__DOT__mem_io_mem_rd_data
                                               : ((
                                                   ((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Core__DOT__decode__DOT__inst 
                                                           >> 0xfU)))) 
                                                   & (1U 
                                                      == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))
                                                   ? vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG
                                                   : 
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
                                                        : vlSelf->Core__DOT__regfile__DOT___GEN_26))))))))
            : 0ULL);
    vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG 
        = ((0U != (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                            >> 0x14U))) ? ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard)
                                            ? vlSelf->Core__DOT__execute__DOT__alu_io_alu_out
                                            : ((IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard)
                                                ? vlSelf->Core__DOT__mem_io_mem_rd_data
                                                : (
                                                   (((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                                     & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Core__DOT__decode__DOT__inst 
                                                            >> 0x14U)))) 
                                                    & (IData)(vlSelf->Core__DOT__decode_io_ren2))
                                                    ? vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG
                                                    : 
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
                                                         : vlSelf->Core__DOT__regfile__DOT___GEN_58))))))))
            : 0ULL);
    vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_inst 
        = vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_inst;
    vlSelf->io_commit_pc = vlSelf->Core__DOT__io_commit_pc_REG;
    vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc 
        = vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_pc;
    if (vlSelf->reset) {
        vlSelf->Core__DOT__decode__DOT__reg_pnpc = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->Core__DOT__decode__DOT__stall)) 
                      | (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)))) {
        vlSelf->Core__DOT__decode__DOT__reg_pnpc = 
            ((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)
              ? 0U : vlSelf->Core__DOT__fetch__DOT__io_p_npc_REG);
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__decode__DOT__pc = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->Core__DOT__decode__DOT__stall)) 
                      | (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)))) {
        vlSelf->Core__DOT__decode__DOT__pc = ((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)
                                               ? 0U
                                               : vlSelf->Core__DOT__fetch__DOT__pc_out);
    }
    vlSelf->io_commit = vlSelf->Core__DOT__io_commit_REG;
    vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG 
        = ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid) 
           & (IData)(vlSelf->Core__DOT__execute__DOT__io_is_ebreak_o_REG));
    vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_valid 
        = vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid;
    Core__DOT__execute__DOT___rs1_temp_T_2 = (((QData)((IData)(
                                                               ((vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm 
                                                                 >> 0x1fU)
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm)));
    vlSelf->io_regs_out_26 = vlSelf->Core__DOT__regfile__DOT__rf_26;
    vlSelf->io_regs_out_25 = vlSelf->Core__DOT__regfile__DOT__rf_25;
    vlSelf->io_regs_out_24 = vlSelf->Core__DOT__regfile__DOT__rf_24;
    vlSelf->io_regs_out_23 = vlSelf->Core__DOT__regfile__DOT__rf_23;
    vlSelf->io_regs_out_22 = vlSelf->Core__DOT__regfile__DOT__rf_22;
    vlSelf->io_regs_out_21 = vlSelf->Core__DOT__regfile__DOT__rf_21;
    vlSelf->io_regs_out_20 = vlSelf->Core__DOT__regfile__DOT__rf_20;
    vlSelf->io_regs_out_18 = vlSelf->Core__DOT__regfile__DOT__rf_18;
    vlSelf->io_regs_out_15 = vlSelf->Core__DOT__regfile__DOT__rf_15;
    vlSelf->io_regs_out_16 = vlSelf->Core__DOT__regfile__DOT__rf_16;
    vlSelf->io_regs_out_17 = vlSelf->Core__DOT__regfile__DOT__rf_17;
    vlSelf->io_regs_out_19 = vlSelf->Core__DOT__regfile__DOT__rf_19;
    vlSelf->io_regs_out_14 = vlSelf->Core__DOT__regfile__DOT__rf_14;
    vlSelf->io_regs_out_6 = vlSelf->Core__DOT__regfile__DOT__rf_6;
    vlSelf->io_regs_out_11 = vlSelf->Core__DOT__regfile__DOT__rf_11;
    vlSelf->io_regs_out_4 = vlSelf->Core__DOT__regfile__DOT__rf_4;
    vlSelf->io_regs_out_1 = vlSelf->Core__DOT__regfile__DOT__rf_1;
    vlSelf->io_regs_out_8 = vlSelf->Core__DOT__regfile__DOT__rf_8;
    vlSelf->io_regs_out_13 = vlSelf->Core__DOT__regfile__DOT__rf_13;
    vlSelf->io_regs_out_5 = vlSelf->Core__DOT__regfile__DOT__rf_5;
    vlSelf->io_regs_out_10 = vlSelf->Core__DOT__regfile__DOT__rf_10;
    vlSelf->io_regs_out_2 = vlSelf->Core__DOT__regfile__DOT__rf_2;
    vlSelf->io_regs_out_9 = vlSelf->Core__DOT__regfile__DOT__rf_9;
    vlSelf->io_regs_out_0 = vlSelf->Core__DOT__regfile__DOT__rf_0;
    vlSelf->io_regs_out_7 = vlSelf->Core__DOT__regfile__DOT__rf_7;
    vlSelf->io_regs_out_12 = vlSelf->Core__DOT__regfile__DOT__rf_12;
    vlSelf->io_regs_out_3 = vlSelf->Core__DOT__regfile__DOT__rf_3;
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_31 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_31 = vlSelf->io_regs_in_31;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x1fU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_31 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_30 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_30 = vlSelf->io_regs_in_30;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x1eU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_30 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_29 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_29 = vlSelf->io_regs_in_29;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x1dU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_29 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_28 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_28 = vlSelf->io_regs_in_28;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x1cU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_28 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__regfile__DOT__rf_27 = 0ULL;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__regfile__DOT__rf_27 = vlSelf->io_regs_in_27;
    } else if (((0U != (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG)) 
                & (IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG))) {
        if ((0x1bU == (IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG))) {
            vlSelf->Core__DOT__regfile__DOT__rf_27 
                = vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG;
        }
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_inst 
            = vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst;
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_pc = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_pc 
            = vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc;
    }
    vlSelf->Core__DOT__fetch__DOT__io_p_npc_REG = (0xfffffffcU 
                                                   & vlSelf->Core__DOT__fetch__DOT__pc);
    if (vlSelf->reset) {
        vlSelf->Core__DOT__fetch__DOT__pc_out = 0U;
    } else if (vlSelf->Core__DOT__fetch__DOT___T_1) {
        vlSelf->Core__DOT__fetch__DOT__pc_out = ((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)
                                                  ? 0U
                                                  : 
                                                 (0xfffffffcU 
                                                  & vlSelf->Core__DOT__fetch__DOT__pc));
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid 
            = vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid;
    }
    vlSelf->Core__DOT__execute__DOT__io_is_ebreak_o_REG 
        = vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG;
    vlSelf->io_regs_out_31 = vlSelf->Core__DOT__regfile__DOT__rf_31;
    vlSelf->io_regs_out_30 = vlSelf->Core__DOT__regfile__DOT__rf_30;
    vlSelf->io_regs_out_29 = vlSelf->Core__DOT__regfile__DOT__rf_29;
    vlSelf->io_regs_out_28 = vlSelf->Core__DOT__regfile__DOT__rf_28;
    vlSelf->io_regs_out_27 = vlSelf->Core__DOT__regfile__DOT__rf_27;
    vlSelf->Core__DOT__mem__DOT__io_wen_o_REG = ((~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)) 
                                                 & (IData)(vlSelf->Core__DOT__mem__DOT__wen));
    vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG = vlSelf->Core__DOT__mem__DOT__waddr;
    vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG = ((IData)(vlSelf->Core__DOT__mem__DOT__is_load)
                                                    ? 
                                                   ((2U 
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
    if (vlSelf->reset) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst 
            = vlSelf->Core__DOT__decode__DOT__inst;
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__fetch__DOT__pc = 0x80000000U;
    } else if (vlSelf->io_write_regs) {
        vlSelf->Core__DOT__fetch__DOT__pc = vlSelf->io_pc_in;
    } else if ((1U & ((~ (IData)(vlSelf->Core__DOT__fetch__DOT__stall)) 
                      | (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)))) {
        vlSelf->Core__DOT__fetch__DOT__pc = ((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)
                                              ? ((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_jmp)
                                                  ? vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc))
                                              : vlSelf->Core__DOT__fetch__DOT__npc_s);
    }
    vlSelf->Core__DOT__mem_io_mem_rd_en = ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid) 
                                           & (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en));
    if (vlSelf->reset) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid 
            = ((~ ((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis) 
                   | (IData)(vlSelf->Core__DOT__decode__DOT__stall))) 
               & (IData)(vlSelf->Core__DOT__decode__DOT__inst_valid));
    }
    vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG 
        = ((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
           & ((IData)(vlSelf->Core__DOT__decode__DOT__inst_valid) 
              & (0x100073U == vlSelf->Core__DOT__decode__DOT__inst)));
    if (vlSelf->reset) {
        vlSelf->Core__DOT__mem__DOT__wen = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__mem__DOT__wen = vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en;
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__mem__DOT__waddr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__mem__DOT__waddr = vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr;
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__mem__DOT__wdata = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__mem__DOT__wdata = vlSelf->Core__DOT__execute__DOT__alu_io_alu_out;
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size 
            = vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size;
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code 
            = vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code;
    }
    vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc 
        = __Vdly__Core__DOT__execute__DOT__ex_reg_decodeop_pc;
    vlSelf->io_imem_raddr = (0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc);
    vlSelf->Core__DOT__fetch__DOT__npc_s = ((IData)(4U) 
                                            + (0xfffffffcU 
                                               & vlSelf->Core__DOT__fetch__DOT__pc));
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
    if (vlSelf->reset) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en 
            = ((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
               & ((IData)(vlSelf->Core__DOT__decode__DOT__inst_valid) 
                  & (IData)(vlSelf->Core__DOT__decode__DOT__c0_3)));
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr 
            = (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                        >> 7U));
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size 
            = ((0x37U == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                ? 0U : ((0x17U == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                         ? 0U : ((0x6fU == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                                  ? 0U : ((0x67U == 
                                           (0x707fU 
                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                           ? 0U : (
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
                                                           ? 1U
                                                           : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_566)))))))))))));
    }
    vlSelf->Core__DOT__mem__DOT__is_load = ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                            | (2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)));
    if (vlSelf->reset) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))) {
        vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code 
            = ((0x37U == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                ? 0U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_505));
    }
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
    VL_EXTEND_WQ(127,64, __Vtemp2, vlSelf->Core__DOT__execute__DOT__alu_io_in1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp3, __Vtemp2, (IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt));
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
                        ? (((QData)((IData)(__Vtemp3[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        __Vtemp3[0U])))
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
    if (vlSelf->reset) {
        vlSelf->Core__DOT__decode__DOT__inst_valid = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->Core__DOT__decode__DOT__stall)) 
                      | (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)))) {
        vlSelf->Core__DOT__decode__DOT__inst_valid 
            = ((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
               & ((IData)(vlSelf->io_imem_read_ok) 
                  & (IData)(vlSelf->Core__DOT__fetch__DOT__valid_out)));
    }
    vlSelf->Core__DOT__execute_io_ex_rd_en = ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid) 
                                              & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en));
    if (vlSelf->reset) {
        vlSelf->Core__DOT__decode__DOT__inst = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->Core__DOT__decode__DOT__stall)) 
                      | (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)))) {
        vlSelf->Core__DOT__decode__DOT__inst = ((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->io_imem_read_ok)
                                                  ? vlSelf->Core__DOT__fetch__DOT__inst_out
                                                  : 0U));
    }
    vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
        = ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type)
            ? (((QData)((IData)(((1U & (IData)((vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)))
            : vlSelf->Core__DOT__execute__DOT__alu__DOT__out0);
    vlSelf->io_dmem_raddr = ((IData)((vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                      >> 3U)) << 3U);
    vlSelf->io_dmem_waddr = ((IData)((vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                      >> 3U)) << 3U);
    VL_EXTEND_WQ(127,64, __Vtemp6, vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG);
    VL_SHIFTL_WWI(127,127,6, __Vtemp7, __Vtemp6, (0x38U 
                                                  & ((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out) 
                                                     << 3U)));
    vlSelf->io_dmem_wdata = (((QData)((IData)(__Vtemp7[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          __Vtemp7[0U])));
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
    if (vlSelf->reset) {
        vlSelf->Core__DOT__fetch__DOT__valid_out = 0U;
    } else if (vlSelf->Core__DOT__fetch__DOT___T_1) {
        vlSelf->Core__DOT__fetch__DOT__valid_out = 
            ((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
             & (IData)(vlSelf->io_imem_read_ok));
    }
    if (vlSelf->reset) {
        vlSelf->Core__DOT__fetch__DOT__inst_out = 0U;
    } else if (vlSelf->Core__DOT__fetch__DOT___T_1) {
        vlSelf->Core__DOT__fetch__DOT__inst_out = ((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)
                                                    ? 0U
                                                    : (IData)(vlSelf->io_imem_rdata));
    }
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
    vlSelf->Core__DOT__execute_io_jmp_packet_o_mis 
        = ((((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_jmp)
              ? vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc
              : ((IData)(4U) + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)) 
            != vlSelf->Core__DOT__decode__DOT__io_p_npc_o_REG) 
           & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid));
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
}

VL_INLINE_OPT void VCore___024root___combo__TOP__4(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->Core__DOT__mem__DOT__ld_data_raw = (vlSelf->io_dmem_rdata 
                                                >> 
                                                (0x38U 
                                                 & (vlSelf->Core__DOT__mem__DOT__reg_mem_addr 
                                                    << 3U)));
    vlSelf->Core__DOT__mem__DOT__req_wait = ((((IData)(vlSelf->Core__DOT__mem__DOT__is_load) 
                                               & (~ (IData)(vlSelf->io_dmem_read_ok))) 
                                              | ((3U 
                                                  == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                                 & (~ (IData)(vlSelf->io_dmem_write_ok)))) 
                                             & (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid));
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
    vlSelf->io_dmem_ren = ((~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)) 
                           & (((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                               | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                              & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)));
    vlSelf->io_dmem_wen = ((~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)) 
                           & ((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                              & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)));
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
    vlSelf->Core__DOT__fetch__DOT__stall = (1U & ((~ (IData)(vlSelf->io_imem_read_ok)) 
                                                  | (IData)(vlSelf->Core__DOT__decode__DOT__stall)));
    vlSelf->Core__DOT__fetch__DOT___T_1 = (1U & ((~ (IData)(vlSelf->Core__DOT__fetch__DOT__stall)) 
                                                 | (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)));
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
    VCore___024root___combo__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
    if (VL_UNLIKELY((vlSelf->io_write_regs & 0xfeU))) {
        Verilated::overWidthError("io_write_regs");}
}
#endif  // VL_DEBUG
