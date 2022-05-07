// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore___024root.h"
#include "VCore__Syms.h"

#include "verilated_dpi.h"

void VCore___024root___initial__TOP__1(VCore___024root* vlSelf) VL_ATTR_COLD;

void VCore___024root___eval_initial(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_initial\n"); );
    // Body
    VCore___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VCore___024root___settle__TOP__4(VCore___024root* vlSelf) VL_ATTR_COLD;

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
    vlSelf->Core__DOT__fetch__DOT__reg_pnpc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__npc_s = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__fetch__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__decode__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__decode__DOT__inst_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT__reg_pnpc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__decode__DOT__io_rs1_data_o_REG = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_356 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_505 = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_566 = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_703 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_718 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_787 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_793 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_825 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_865 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__decode__DOT__c0_1 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__decode__DOT___ctrl_T_904 = VL_RAND_RESET_I(3);
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
    vlSelf->Core__DOT__execute__DOT__mdu_io_in1 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu_io_in2 = VL_RAND_RESET_Q(64);
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
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__completed = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_mul = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_6 = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__execute__DOT__mdu__DOT___GEN_8 = VL_RAND_RESET_Q(64);
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
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_2);
    VL_RAND_RESET_W(128, vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_14);
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
