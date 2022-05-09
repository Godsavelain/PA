// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCore.h for the primary calling header

#ifndef VERILATED_VCORE___024ROOT_H_
#define VERILATED_VCORE___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VCore__Syms;
class VCore_VerilatedVcd;


//----------

VL_MODULE(VCore___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_imem_ren,0,0);
    VL_OUT8(io_imem_wen,0,0);
    VL_OUT8(io_imem_wmask,7,0);
    VL_IN8(io_imem_read_ok,0,0);
    VL_IN8(io_imem_write_ok,0,0);
    VL_OUT8(io_dmem_ren,0,0);
    VL_OUT8(io_dmem_wen,0,0);
    VL_OUT8(io_dmem_wmask,7,0);
    VL_IN8(io_dmem_read_ok,0,0);
    VL_IN8(io_dmem_write_ok,0,0);
    VL_OUT8(io_commit,0,0);
    VL_OUT(io_imem_raddr,31,0);
    VL_OUT(io_imem_waddr,31,0);
    VL_OUT(io_dmem_raddr,31,0);
    VL_OUT(io_dmem_waddr,31,0);
    VL_OUT(io_commit_pc,31,0);
    VL_OUT64(io_imem_wdata,63,0);
    VL_IN64(io_imem_rdata,63,0);
    VL_OUT64(io_dmem_wdata,63,0);
    VL_IN64(io_dmem_rdata,63,0);
    VL_OUT64(io_regs_out_0,63,0);
    VL_OUT64(io_regs_out_1,63,0);
    VL_OUT64(io_regs_out_2,63,0);
    VL_OUT64(io_regs_out_3,63,0);
    VL_OUT64(io_regs_out_4,63,0);
    VL_OUT64(io_regs_out_5,63,0);
    VL_OUT64(io_regs_out_6,63,0);
    VL_OUT64(io_regs_out_7,63,0);
    VL_OUT64(io_regs_out_8,63,0);
    VL_OUT64(io_regs_out_9,63,0);
    VL_OUT64(io_regs_out_10,63,0);
    VL_OUT64(io_regs_out_11,63,0);
    VL_OUT64(io_regs_out_12,63,0);
    VL_OUT64(io_regs_out_13,63,0);
    VL_OUT64(io_regs_out_14,63,0);
    VL_OUT64(io_regs_out_15,63,0);
    VL_OUT64(io_regs_out_16,63,0);
    VL_OUT64(io_regs_out_17,63,0);
    VL_OUT64(io_regs_out_18,63,0);
    VL_OUT64(io_regs_out_19,63,0);
    VL_OUT64(io_regs_out_20,63,0);
    VL_OUT64(io_regs_out_21,63,0);
    VL_OUT64(io_regs_out_22,63,0);
    VL_OUT64(io_regs_out_23,63,0);
    VL_OUT64(io_regs_out_24,63,0);
    VL_OUT64(io_regs_out_25,63,0);
    VL_OUT64(io_regs_out_26,63,0);
    VL_OUT64(io_regs_out_27,63,0);
    VL_OUT64(io_regs_out_28,63,0);
    VL_OUT64(io_regs_out_29,63,0);
    VL_OUT64(io_regs_out_30,63,0);
    VL_OUT64(io_regs_out_31,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ Core__DOT__decode_io_ren2;
        CData/*0:0*/ Core__DOT__execute_io_ex_rd_en;
        CData/*0:0*/ Core__DOT__execute_io_jmp_packet_o_mis;
        CData/*0:0*/ Core__DOT__mem_io_mem_rd_en;
        CData/*0:0*/ Core__DOT__io_commit_REG;
        CData/*0:0*/ Core__DOT__fetch__DOT__valid_out;
        CData/*0:0*/ Core__DOT__fetch__DOT__stall;
        CData/*0:0*/ Core__DOT__fetch__DOT__use_reg_npc;
        CData/*0:0*/ Core__DOT__fetch__DOT___GEN_0;
        CData/*0:0*/ Core__DOT__decode__DOT__inst_valid;
        CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_356;
        CData/*1:0*/ Core__DOT__decode__DOT___ctrl_T_505;
        CData/*1:0*/ Core__DOT__decode__DOT___ctrl_T_566;
        CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_703;
        CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_718;
        CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_787;
        CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_793;
        CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_841;
        CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_865;
        CData/*2:0*/ Core__DOT__decode__DOT__c0_1;
        CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_919;
        CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_937;
        CData/*0:0*/ Core__DOT__decode__DOT__c0_3;
        CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_1057;
        CData/*2:0*/ Core__DOT__decode__DOT__c0_4;
        CData/*0:0*/ Core__DOT__decode__DOT__stall;
        CData/*0:0*/ Core__DOT__decode__DOT__io_is_ebreak_REG;
        CData/*0:0*/ Core__DOT__regfile__DOT__ex_rs1_hazard;
        CData/*0:0*/ Core__DOT__regfile__DOT__ex_rs2_hazard;
        CData/*0:0*/ Core__DOT__regfile__DOT__mem_rs1_hazard;
        CData/*0:0*/ Core__DOT__regfile__DOT__mem_rs2_hazard;
        CData/*0:0*/ Core__DOT__execute__DOT__alu_io_jmp;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu_io_mdu_valid;
        CData/*0:0*/ Core__DOT__execute__DOT__io_is_ebreak_o_REG;
        CData/*0:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_valid;
        CData/*3:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_alu_code;
        CData/*3:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code;
        CData/*1:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_mem_code;
        CData/*1:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_mem_size;
        CData/*3:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code;
        CData/*0:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_w_type;
        CData/*2:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src;
        CData/*2:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src;
        CData/*4:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr;
        CData/*0:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_rd_en;
        CData/*5:0*/ Core__DOT__execute__DOT__alu__DOT__shamt;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT__mul_io_mul_valid;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT__div_io_div_valid;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__state;
        CData/*3:0*/ Core__DOT__execute__DOT__mdu__DOT__reg_mduop;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT__completed;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT__is_div;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT__is_divu;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT__is_mul;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT__is_word;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT___T;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT___T_1;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT___T_2;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT___GEN_6;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT___GEN_7;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT___GEN_12;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT___GEN_13;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c;
    };
    struct {
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT___T;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT___T_1;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT___T_2;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT___GEN_49;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT__state;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_neg;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_neg;
        CData/*5:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT__cnt;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT___T;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT___T_1;
        CData/*5:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT___cnt_T_1;
        CData/*0:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT___T_3;
        CData/*1:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT___GEN_13;
        CData/*0:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_valid;
        CData/*1:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_mem_code;
        CData/*1:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_mem_size;
        CData/*3:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_mdu_code;
        CData/*4:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr;
        CData/*0:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_rd_en;
        CData/*4:0*/ Core__DOT__mem__DOT__waddr;
        CData/*0:0*/ Core__DOT__mem__DOT__wen;
        CData/*0:0*/ Core__DOT__mem__DOT__io_is_ebreak_o_REG;
        CData/*0:0*/ Core__DOT__mem__DOT__mdu_valid;
        CData/*0:0*/ Core__DOT__mem__DOT__is_load;
        CData/*0:0*/ Core__DOT__mem__DOT__req_wait;
        CData/*0:0*/ Core__DOT__mem__DOT__stall;
        CData/*0:0*/ Core__DOT__mem__DOT__io_out_bits_REG_valid;
        CData/*4:0*/ Core__DOT__mem__DOT__io_waddr_o_REG;
        CData/*0:0*/ Core__DOT__mem__DOT__io_wen_o_REG;
        IData/*31:0*/ Core__DOT__execute_io_jmp_packet_o_jmp_npc;
        IData/*31:0*/ Core__DOT__io_commit_pc_REG;
        IData/*31:0*/ Core__DOT__fetch__DOT__pc_out;
    };
    struct {
        IData/*31:0*/ Core__DOT__fetch__DOT__inst_out;
        IData/*31:0*/ Core__DOT__fetch__DOT__reg_pnpc;
        IData/*31:0*/ Core__DOT__fetch__DOT__pc;
        IData/*31:0*/ Core__DOT__fetch__DOT__pc_base;
        IData/*31:0*/ Core__DOT__fetch__DOT__npc_s;
        IData/*31:0*/ Core__DOT__fetch__DOT__reg_npc;
        IData/*31:0*/ Core__DOT__decode__DOT__pc;
        IData/*31:0*/ Core__DOT__decode__DOT__inst;
        IData/*31:0*/ Core__DOT__decode__DOT__reg_pnpc;
        IData/*31:0*/ Core__DOT__decode__DOT___io_out_bits_imm_T_9;
        IData/*31:0*/ Core__DOT__execute__DOT__alu_io_jmp_pc;
        IData/*31:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_pc;
        IData/*31:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_inst;
        IData/*31:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_imm;
        VlWide<3>/*64:0*/ Core__DOT__execute__DOT__mdu__DOT__mul_io_in2;
        VlWide<3>/*95:0*/ Core__DOT__execute__DOT__mdu__DOT___GEN_26;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s;
        VlWide<3>/*64:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1;
        VlWide<3>/*66:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18;
    };
    struct {
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT___GEN_50;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1;
        VlWide<3>/*64:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in2;
        VlWide<3>/*64:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value;
        VlWide<4>/*127:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT___reg_in1_T_5;
        IData/*31:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_pc;
        IData/*31:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_inst;
        IData/*31:0*/ Core__DOT__mem__DOT__reg_mem_addr;
        IData/*31:0*/ Core__DOT__mem__DOT__io_out_bits_REG_pc;
        IData/*31:0*/ Core__DOT__mem__DOT__io_out_bits_REG_inst;
        IData/*31:0*/ Core__DOT__wb_dpi__DOT__inst1;
    };
    struct {
        IData/*31:0*/ Core__DOT__wb_dpi__DOT__pc1;
        QData/*63:0*/ Core__DOT__mem_io_mem_rd_data;
        QData/*63:0*/ Core__DOT__decode__DOT__rs1_reg;
        QData/*63:0*/ Core__DOT__decode__DOT__rs2_reg;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_0;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_1;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_2;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_3;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_4;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_5;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_6;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_7;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_8;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_9;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_10;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_11;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_12;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_13;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_14;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_15;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_16;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_17;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_18;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_19;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_20;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_21;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_22;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_23;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_24;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_25;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_26;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_27;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_28;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_29;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_30;
        QData/*63:0*/ Core__DOT__regfile__DOT__rf_31;
        QData/*63:0*/ Core__DOT__regfile__DOT___GEN_26;
        QData/*63:0*/ Core__DOT__regfile__DOT___GEN_58;
        QData/*63:0*/ Core__DOT__execute__DOT__alu_io_in1;
        QData/*63:0*/ Core__DOT__execute__DOT__alu_io_in2;
        QData/*63:0*/ Core__DOT__execute__DOT__alu_io_alu_out;
        QData/*63:0*/ Core__DOT__execute__DOT__alu__DOT__out0;
        QData/*63:0*/ Core__DOT__execute__DOT__mdu__DOT__div_io_in1;
        QData/*63:0*/ Core__DOT__execute__DOT__mdu__DOT__div_io_in2;
        QData/*63:0*/ Core__DOT__execute__DOT__mdu__DOT__reg_x;
        QData/*63:0*/ Core__DOT__execute__DOT__mdu__DOT__reg_y;
        QData/*63:0*/ Core__DOT__execute__DOT__mdu__DOT__reg_out;
        QData/*63:0*/ Core__DOT__execute__DOT__mdu__DOT__reg_out_lo_1;
        QData/*32:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_lo;
        QData/*32:0*/ Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_hi_1;
        QData/*63:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_out;
        QData/*63:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_out;
        QData/*63:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT___rem_out_T_3;
        QData/*63:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT___quo_out_T_3;
        QData/*63:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT___rem_out_T_7;
        QData/*63:0*/ Core__DOT__execute__DOT__mdu__DOT__div__DOT___quo_out_T_11;
        QData/*63:0*/ Core__DOT__mem__DOT__wdata;
        QData/*63:0*/ Core__DOT__mem__DOT__ld_data_raw;
        QData/*63:0*/ Core__DOT__mem__DOT__ld_data;
        QData/*63:0*/ Core__DOT__mem__DOT___ld_data_u_T_9;
        QData/*63:0*/ Core__DOT__mem__DOT__io_wdata_o_REG;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VCore__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCore___024root);  ///< Copying not allowed
  public:
    VCore___024root(const char* name);
    ~VCore___024root();

    // INTERNAL METHODS
    void __Vconfigure(VCore__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
