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
    VL_IN8(io_write_regs,0,0);
    VL_OUT8(io_commit,0,0);
    VL_OUT(io_imem_raddr,31,0);
    VL_OUT(io_imem_waddr,31,0);
    VL_OUT(io_dmem_raddr,31,0);
    VL_OUT(io_dmem_waddr,31,0);
    VL_OUT(io_commit_pc,31,0);
    VL_IN(io_pc_in,31,0);
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
    VL_IN64(io_regs_in_0,63,0);
    VL_IN64(io_regs_in_1,63,0);
    VL_IN64(io_regs_in_2,63,0);
    VL_IN64(io_regs_in_3,63,0);
    VL_IN64(io_regs_in_4,63,0);
    VL_IN64(io_regs_in_5,63,0);
    VL_IN64(io_regs_in_6,63,0);
    VL_IN64(io_regs_in_7,63,0);
    VL_IN64(io_regs_in_8,63,0);
    VL_IN64(io_regs_in_9,63,0);
    VL_IN64(io_regs_in_10,63,0);
    VL_IN64(io_regs_in_11,63,0);
    VL_IN64(io_regs_in_12,63,0);
    VL_IN64(io_regs_in_13,63,0);
    VL_IN64(io_regs_in_14,63,0);
    VL_IN64(io_regs_in_15,63,0);
    VL_IN64(io_regs_in_16,63,0);
    VL_IN64(io_regs_in_17,63,0);
    VL_IN64(io_regs_in_18,63,0);
    VL_IN64(io_regs_in_19,63,0);
    VL_IN64(io_regs_in_20,63,0);
    VL_IN64(io_regs_in_21,63,0);
    VL_IN64(io_regs_in_22,63,0);
    VL_IN64(io_regs_in_23,63,0);
    VL_IN64(io_regs_in_24,63,0);
    VL_IN64(io_regs_in_25,63,0);
    VL_IN64(io_regs_in_26,63,0);
    VL_IN64(io_regs_in_27,63,0);
    VL_IN64(io_regs_in_28,63,0);
    VL_IN64(io_regs_in_29,63,0);
    VL_IN64(io_regs_in_30,63,0);
    VL_IN64(io_regs_in_31,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ Core__DOT__decode_io_ren2;
        CData/*0:0*/ Core__DOT__execute_io_jmp_packet_o_mis;
        CData/*0:0*/ Core__DOT__io_commit_REG;
        CData/*0:0*/ Core__DOT__fetch__DOT__io_out_bits_inst_valid_REG;
        CData/*0:0*/ Core__DOT__decode__DOT__inst_valid;
        CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_356;
        CData/*1:0*/ Core__DOT__decode__DOT___ctrl_T_505;
        CData/*1:0*/ Core__DOT__decode__DOT___ctrl_T_566;
        CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_793;
        CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_865;
        CData/*2:0*/ Core__DOT__decode__DOT__c0_1;
        CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_937;
        CData/*0:0*/ Core__DOT__decode__DOT__c0_3;
        CData/*2:0*/ Core__DOT__decode__DOT__c0_4;
        CData/*0:0*/ Core__DOT__decode__DOT__stall;
        CData/*0:0*/ Core__DOT__decode__DOT__io_is_ebreak_REG;
        CData/*0:0*/ Core__DOT__regfile__DOT__ex_rs1_hazard;
        CData/*0:0*/ Core__DOT__regfile__DOT__ex_rs2_hazard;
        CData/*0:0*/ Core__DOT__regfile__DOT__mem_rs1_hazard;
        CData/*0:0*/ Core__DOT__regfile__DOT__mem_rs2_hazard;
        CData/*0:0*/ Core__DOT__execute__DOT__alu_io_jmp;
        CData/*0:0*/ Core__DOT__execute__DOT__io_is_ebreak_o_REG;
        CData/*0:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_valid;
        CData/*3:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_alu_code;
        CData/*3:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code;
        CData/*1:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_mem_code;
        CData/*1:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_mem_size;
        CData/*0:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_w_type;
        CData/*2:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src;
        CData/*2:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src;
        CData/*4:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr;
        CData/*0:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_rd_en;
        CData/*5:0*/ Core__DOT__execute__DOT__alu__DOT__shamt;
        CData/*0:0*/ Core__DOT__mem__DOT__io_is_ebreak_o_REG;
        CData/*0:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_valid;
        CData/*1:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_mem_code;
        CData/*1:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_mem_size;
        CData/*4:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr;
        CData/*0:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_rd_en;
        CData/*4:0*/ Core__DOT__mem__DOT__waddr;
        CData/*0:0*/ Core__DOT__mem__DOT__wen;
        CData/*0:0*/ Core__DOT__mem__DOT__is_load;
        CData/*0:0*/ Core__DOT__mem__DOT__req_wait;
        CData/*0:0*/ Core__DOT__mem__DOT__io_out_bits_REG_valid;
        CData/*4:0*/ Core__DOT__mem__DOT__io_waddr_o_REG;
        CData/*0:0*/ Core__DOT__mem__DOT__io_wen_o_REG;
        IData/*31:0*/ Core__DOT__fetch_io_imem_resp_bits_old_pc_REG;
        IData/*31:0*/ Core__DOT__io_commit_pc_REG;
        IData/*31:0*/ Core__DOT__fetch__DOT__pc;
        IData/*31:0*/ Core__DOT__fetch__DOT__npc_s;
        IData/*31:0*/ Core__DOT__fetch__DOT__io_p_npc_REG;
        IData/*31:0*/ Core__DOT__fetch__DOT__io_out_bits_inst_REG;
        IData/*31:0*/ Core__DOT__decode__DOT__pc;
        IData/*31:0*/ Core__DOT__decode__DOT__inst;
        IData/*31:0*/ Core__DOT__decode__DOT__io_p_npc_o_REG;
        IData/*31:0*/ Core__DOT__decode__DOT___io_out_bits_imm_T_9;
        IData/*31:0*/ Core__DOT__execute__DOT__alu_io_jmp_pc;
        IData/*31:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_pc;
        IData/*31:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_inst;
        IData/*31:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_imm;
        IData/*31:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_pc;
        IData/*31:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_inst;
        IData/*31:0*/ Core__DOT__mem__DOT__reg_mem_addr;
        IData/*31:0*/ Core__DOT__mem__DOT__io_out_bits_REG_pc;
    };
    struct {
        IData/*31:0*/ Core__DOT__mem__DOT__io_out_bits_REG_inst;
        IData/*31:0*/ Core__DOT__wb_dpi__DOT__inst1;
        IData/*31:0*/ Core__DOT__wb_dpi__DOT__pc1;
        QData/*63:0*/ Core__DOT__mem_io_mem_rd_data;
        QData/*63:0*/ Core__DOT__decode__DOT__io_rs1_data_o_REG;
        QData/*63:0*/ Core__DOT__decode__DOT__io_rs2_data_o_REG;
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
        QData/*63:0*/ Core__DOT__mem__DOT__wdata;
        QData/*63:0*/ Core__DOT__mem__DOT__ld_data_raw;
        QData/*63:0*/ Core__DOT__mem__DOT___ld_data_T_15;
        QData/*63:0*/ Core__DOT__mem__DOT___ld_data_u_T_7;
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
