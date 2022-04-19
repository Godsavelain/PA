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
    VL_OUT(io_imem_raddr,31,0);
    VL_OUT(io_imem_waddr,31,0);
    VL_OUT(io_dmem_raddr,31,0);
    VL_OUT(io_dmem_waddr,31,0);
    VL_OUT64(io_imem_wdata,63,0);
    VL_IN64(io_imem_rdata,63,0);
    VL_OUT64(io_dmem_wdata,63,0);
    VL_IN64(io_dmem_rdata,63,0);
    VL_OUT64(io_regs_0,63,0);
    VL_OUT64(io_regs_1,63,0);
    VL_OUT64(io_regs_2,63,0);
    VL_OUT64(io_regs_3,63,0);
    VL_OUT64(io_regs_4,63,0);
    VL_OUT64(io_regs_5,63,0);
    VL_OUT64(io_regs_6,63,0);
    VL_OUT64(io_regs_7,63,0);
    VL_OUT64(io_regs_8,63,0);
    VL_OUT64(io_regs_9,63,0);
    VL_OUT64(io_regs_10,63,0);
    VL_OUT64(io_regs_11,63,0);
    VL_OUT64(io_regs_12,63,0);
    VL_OUT64(io_regs_13,63,0);
    VL_OUT64(io_regs_14,63,0);
    VL_OUT64(io_regs_15,63,0);
    VL_OUT64(io_regs_16,63,0);
    VL_OUT64(io_regs_17,63,0);
    VL_OUT64(io_regs_18,63,0);
    VL_OUT64(io_regs_19,63,0);
    VL_OUT64(io_regs_20,63,0);
    VL_OUT64(io_regs_21,63,0);
    VL_OUT64(io_regs_22,63,0);
    VL_OUT64(io_regs_23,63,0);
    VL_OUT64(io_regs_24,63,0);
    VL_OUT64(io_regs_25,63,0);
    VL_OUT64(io_regs_26,63,0);
    VL_OUT64(io_regs_27,63,0);
    VL_OUT64(io_regs_28,63,0);
    VL_OUT64(io_regs_29,63,0);
    VL_OUT64(io_regs_30,63,0);
    VL_OUT64(io_regs_31,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ Core__DOT__execute_io_jmp_packet_o_mis;
        CData/*0:0*/ Core__DOT__fetch__DOT__io_out_bits_inst_valid_REG;
        CData/*0:0*/ Core__DOT__decode__DOT__inst_valid;
        CData/*3:0*/ Core__DOT__decode__DOT___ctrl_T_295;
        CData/*0:0*/ Core__DOT__decode__DOT___ctrl_T_601;
        CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_661;
        CData/*2:0*/ Core__DOT__decode__DOT__c0_1;
        CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_721;
        CData/*2:0*/ Core__DOT__decode__DOT__c0_2;
        CData/*0:0*/ Core__DOT__decode__DOT__c0_3;
        CData/*2:0*/ Core__DOT__decode__DOT__c0_4;
        CData/*0:0*/ Core__DOT__decode__DOT__io_is_ebreak_REG;
        CData/*0:0*/ Core__DOT__execute__DOT__alu_io_jmp;
        CData/*0:0*/ Core__DOT__execute__DOT__io_is_ebreak_o_REG;
        CData/*0:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_valid;
        CData/*3:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_alu_code;
        CData/*3:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code;
        CData/*0:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_w_type;
        CData/*2:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src;
        CData/*2:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src;
        CData/*4:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr;
        CData/*0:0*/ Core__DOT__execute__DOT__ex_reg_decodeop_rd_en;
        CData/*0:0*/ Core__DOT__mem__DOT__io_is_ebreak_o_REG;
        CData/*4:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr;
        CData/*0:0*/ Core__DOT__mem__DOT__mem_reg_decodeop_rd_en;
        CData/*4:0*/ Core__DOT__mem__DOT__io_waddr_o_REG;
        CData/*0:0*/ Core__DOT__mem__DOT__io_wen_o_REG;
        IData/*31:0*/ Core__DOT__execute_io_jmp_packet_o_jmp_npc;
        IData/*31:0*/ Core__DOT__fetch_io_imem_resp_bits_old_pc_REG;
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
        IData/*31:0*/ Core__DOT__mem__DOT__io_out_bits_REG_pc;
        IData/*31:0*/ Core__DOT__mem__DOT__io_out_bits_REG_inst;
        IData/*31:0*/ Core__DOT__wb_dpi__DOT__inst1;
        IData/*31:0*/ Core__DOT__wb_dpi__DOT__pc1;
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
    };
    struct {
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
        QData/*63:0*/ Core__DOT__mem__DOT__io_wdata_o_REG;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

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
