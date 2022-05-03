// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCore__Syms.h"


void VCore___024root__traceInitSub0(VCore___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VCore___024root__traceInitTop(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VCore___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VCore___024root__traceInitSub0(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+228,"clock", false,-1);
        tracep->declBit(c+229,"reset", false,-1);
        tracep->declBus(c+230,"io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+231,"io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+232,"io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+234,"io_imem_ren", false,-1);
        tracep->declBit(c+235,"io_imem_wen", false,-1);
        tracep->declBus(c+236,"io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+237,"io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+239,"io_imem_read_ok", false,-1);
        tracep->declBit(c+240,"io_imem_write_ok", false,-1);
        tracep->declBus(c+241,"io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+242,"io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+243,"io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+245,"io_dmem_ren", false,-1);
        tracep->declBit(c+246,"io_dmem_wen", false,-1);
        tracep->declBus(c+247,"io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+248,"io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+250,"io_dmem_read_ok", false,-1);
        tracep->declBit(c+251,"io_dmem_write_ok", false,-1);
        tracep->declBus(c+252,"io_commit_pc", false,-1, 31,0);
        tracep->declQuad(c+253,"io_regs_out_0", false,-1, 63,0);
        tracep->declQuad(c+255,"io_regs_out_1", false,-1, 63,0);
        tracep->declQuad(c+257,"io_regs_out_2", false,-1, 63,0);
        tracep->declQuad(c+259,"io_regs_out_3", false,-1, 63,0);
        tracep->declQuad(c+261,"io_regs_out_4", false,-1, 63,0);
        tracep->declQuad(c+263,"io_regs_out_5", false,-1, 63,0);
        tracep->declQuad(c+265,"io_regs_out_6", false,-1, 63,0);
        tracep->declQuad(c+267,"io_regs_out_7", false,-1, 63,0);
        tracep->declQuad(c+269,"io_regs_out_8", false,-1, 63,0);
        tracep->declQuad(c+271,"io_regs_out_9", false,-1, 63,0);
        tracep->declQuad(c+273,"io_regs_out_10", false,-1, 63,0);
        tracep->declQuad(c+275,"io_regs_out_11", false,-1, 63,0);
        tracep->declQuad(c+277,"io_regs_out_12", false,-1, 63,0);
        tracep->declQuad(c+279,"io_regs_out_13", false,-1, 63,0);
        tracep->declQuad(c+281,"io_regs_out_14", false,-1, 63,0);
        tracep->declQuad(c+283,"io_regs_out_15", false,-1, 63,0);
        tracep->declQuad(c+285,"io_regs_out_16", false,-1, 63,0);
        tracep->declQuad(c+287,"io_regs_out_17", false,-1, 63,0);
        tracep->declQuad(c+289,"io_regs_out_18", false,-1, 63,0);
        tracep->declQuad(c+291,"io_regs_out_19", false,-1, 63,0);
        tracep->declQuad(c+293,"io_regs_out_20", false,-1, 63,0);
        tracep->declQuad(c+295,"io_regs_out_21", false,-1, 63,0);
        tracep->declQuad(c+297,"io_regs_out_22", false,-1, 63,0);
        tracep->declQuad(c+299,"io_regs_out_23", false,-1, 63,0);
        tracep->declQuad(c+301,"io_regs_out_24", false,-1, 63,0);
        tracep->declQuad(c+303,"io_regs_out_25", false,-1, 63,0);
        tracep->declQuad(c+305,"io_regs_out_26", false,-1, 63,0);
        tracep->declQuad(c+307,"io_regs_out_27", false,-1, 63,0);
        tracep->declQuad(c+309,"io_regs_out_28", false,-1, 63,0);
        tracep->declQuad(c+311,"io_regs_out_29", false,-1, 63,0);
        tracep->declQuad(c+313,"io_regs_out_30", false,-1, 63,0);
        tracep->declQuad(c+315,"io_regs_out_31", false,-1, 63,0);
        tracep->declQuad(c+317,"io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+319,"io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+321,"io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+323,"io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+325,"io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+327,"io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+329,"io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+331,"io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+333,"io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+335,"io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+337,"io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+339,"io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+341,"io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+343,"io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+345,"io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+347,"io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+349,"io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+351,"io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+353,"io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+355,"io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+357,"io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+359,"io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+361,"io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+363,"io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+365,"io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+367,"io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+369,"io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+371,"io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+373,"io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+375,"io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+377,"io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+379,"io_regs_in_31", false,-1, 63,0);
        tracep->declBus(c+381,"io_pc_in", false,-1, 31,0);
        tracep->declBit(c+382,"io_write_regs", false,-1);
        tracep->declBit(c+383,"io_commit", false,-1);
        tracep->declBit(c+228,"Core clock", false,-1);
        tracep->declBit(c+229,"Core reset", false,-1);
        tracep->declBus(c+230,"Core io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+231,"Core io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+232,"Core io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+234,"Core io_imem_ren", false,-1);
        tracep->declBit(c+235,"Core io_imem_wen", false,-1);
        tracep->declBus(c+236,"Core io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+237,"Core io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+239,"Core io_imem_read_ok", false,-1);
        tracep->declBit(c+240,"Core io_imem_write_ok", false,-1);
        tracep->declBus(c+241,"Core io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+242,"Core io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+243,"Core io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+245,"Core io_dmem_ren", false,-1);
        tracep->declBit(c+246,"Core io_dmem_wen", false,-1);
        tracep->declBus(c+247,"Core io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+248,"Core io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+250,"Core io_dmem_read_ok", false,-1);
        tracep->declBit(c+251,"Core io_dmem_write_ok", false,-1);
        tracep->declBus(c+252,"Core io_commit_pc", false,-1, 31,0);
        tracep->declQuad(c+253,"Core io_regs_out_0", false,-1, 63,0);
        tracep->declQuad(c+255,"Core io_regs_out_1", false,-1, 63,0);
        tracep->declQuad(c+257,"Core io_regs_out_2", false,-1, 63,0);
        tracep->declQuad(c+259,"Core io_regs_out_3", false,-1, 63,0);
        tracep->declQuad(c+261,"Core io_regs_out_4", false,-1, 63,0);
        tracep->declQuad(c+263,"Core io_regs_out_5", false,-1, 63,0);
        tracep->declQuad(c+265,"Core io_regs_out_6", false,-1, 63,0);
        tracep->declQuad(c+267,"Core io_regs_out_7", false,-1, 63,0);
        tracep->declQuad(c+269,"Core io_regs_out_8", false,-1, 63,0);
        tracep->declQuad(c+271,"Core io_regs_out_9", false,-1, 63,0);
        tracep->declQuad(c+273,"Core io_regs_out_10", false,-1, 63,0);
        tracep->declQuad(c+275,"Core io_regs_out_11", false,-1, 63,0);
        tracep->declQuad(c+277,"Core io_regs_out_12", false,-1, 63,0);
        tracep->declQuad(c+279,"Core io_regs_out_13", false,-1, 63,0);
        tracep->declQuad(c+281,"Core io_regs_out_14", false,-1, 63,0);
        tracep->declQuad(c+283,"Core io_regs_out_15", false,-1, 63,0);
        tracep->declQuad(c+285,"Core io_regs_out_16", false,-1, 63,0);
        tracep->declQuad(c+287,"Core io_regs_out_17", false,-1, 63,0);
        tracep->declQuad(c+289,"Core io_regs_out_18", false,-1, 63,0);
        tracep->declQuad(c+291,"Core io_regs_out_19", false,-1, 63,0);
        tracep->declQuad(c+293,"Core io_regs_out_20", false,-1, 63,0);
        tracep->declQuad(c+295,"Core io_regs_out_21", false,-1, 63,0);
        tracep->declQuad(c+297,"Core io_regs_out_22", false,-1, 63,0);
        tracep->declQuad(c+299,"Core io_regs_out_23", false,-1, 63,0);
        tracep->declQuad(c+301,"Core io_regs_out_24", false,-1, 63,0);
        tracep->declQuad(c+303,"Core io_regs_out_25", false,-1, 63,0);
        tracep->declQuad(c+305,"Core io_regs_out_26", false,-1, 63,0);
        tracep->declQuad(c+307,"Core io_regs_out_27", false,-1, 63,0);
        tracep->declQuad(c+309,"Core io_regs_out_28", false,-1, 63,0);
        tracep->declQuad(c+311,"Core io_regs_out_29", false,-1, 63,0);
        tracep->declQuad(c+313,"Core io_regs_out_30", false,-1, 63,0);
        tracep->declQuad(c+315,"Core io_regs_out_31", false,-1, 63,0);
        tracep->declQuad(c+317,"Core io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+319,"Core io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+321,"Core io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+323,"Core io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+325,"Core io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+327,"Core io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+329,"Core io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+331,"Core io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+333,"Core io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+335,"Core io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+337,"Core io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+339,"Core io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+341,"Core io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+343,"Core io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+345,"Core io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+347,"Core io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+349,"Core io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+351,"Core io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+353,"Core io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+355,"Core io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+357,"Core io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+359,"Core io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+361,"Core io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+363,"Core io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+365,"Core io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+367,"Core io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+369,"Core io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+371,"Core io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+373,"Core io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+375,"Core io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+377,"Core io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+379,"Core io_regs_in_31", false,-1, 63,0);
        tracep->declBus(c+381,"Core io_pc_in", false,-1, 31,0);
        tracep->declBit(c+382,"Core io_write_regs", false,-1);
        tracep->declBit(c+383,"Core io_commit", false,-1);
        tracep->declBit(c+228,"Core fetch_clock", false,-1);
        tracep->declBit(c+229,"Core fetch_reset", false,-1);
        tracep->declBus(c+1,"Core fetch_io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+384,"Core fetch_io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+239,"Core fetch_io_imem_resp_bits_rvalid", false,-1);
        tracep->declBus(c+2,"Core fetch_io_imem_resp_bits_old_pc", false,-1, 31,0);
        tracep->declBit(c+212,"Core fetch_io_out_ready", false,-1);
        tracep->declBit(c+387,"Core fetch_io_out_valid", false,-1);
        tracep->declBus(c+2,"Core fetch_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+3,"Core fetch_io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+4,"Core fetch_io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+5,"Core fetch_io_if_flush", false,-1);
        tracep->declBus(c+6,"Core fetch_io_p_npc", false,-1, 31,0);
        tracep->declBus(c+7,"Core fetch_io_jmp_packet_i_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+5,"Core fetch_io_jmp_packet_i_mis", false,-1);
        tracep->declBit(c+382,"Core fetch_io_write_regs", false,-1);
        tracep->declBus(c+381,"Core fetch_io_input_pc", false,-1, 31,0);
        tracep->declBit(c+228,"Core decode_clock", false,-1);
        tracep->declBit(c+229,"Core decode_reset", false,-1);
        tracep->declBit(c+212,"Core decode_io_in_ready", false,-1);
        tracep->declBus(c+2,"Core decode_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+3,"Core decode_io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+4,"Core decode_io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+213,"Core decode_io_out_ready", false,-1);
        tracep->declBit(c+387,"Core decode_io_out_valid", false,-1);
        tracep->declBit(c+199,"Core decode_io_out_bits_valid", false,-1);
        tracep->declBus(c+8,"Core decode_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+9,"Core decode_io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+10,"Core decode_io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+11,"Core decode_io_out_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+12,"Core decode_io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+13,"Core decode_io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBit(c+14,"Core decode_io_out_bits_w_type", false,-1);
        tracep->declBus(c+15,"Core decode_io_out_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+16,"Core decode_io_out_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+17,"Core decode_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+18,"Core decode_io_out_bits_rd_en", false,-1);
        tracep->declBus(c+19,"Core decode_io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+5,"Core decode_io_id_flush", false,-1);
        tracep->declBit(c+20,"Core decode_io_ren1", false,-1);
        tracep->declBus(c+21,"Core decode_io_raddr1", false,-1, 4,0);
        tracep->declBit(c+22,"Core decode_io_ren2", false,-1);
        tracep->declBus(c+23,"Core decode_io_raddr2", false,-1, 4,0);
        tracep->declBit(c+24,"Core decode_io_is_ebreak", false,-1);
        tracep->declQuad(c+200,"Core decode_io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+202,"Core decode_io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+25,"Core decode_io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+27,"Core decode_io_rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+6,"Core decode_io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+29,"Core decode_io_p_npc_o", false,-1, 31,0);
        tracep->declBit(c+30,"Core decode_io_decode_rf_stall_i", false,-1);
        tracep->declBit(c+228,"Core regfile_clock", false,-1);
        tracep->declBit(c+229,"Core regfile_reset", false,-1);
        tracep->declBit(c+20,"Core regfile_io_ren1", false,-1);
        tracep->declBus(c+21,"Core regfile_io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+200,"Core regfile_io_rdata1", false,-1, 63,0);
        tracep->declBit(c+22,"Core regfile_io_ren2", false,-1);
        tracep->declBus(c+23,"Core regfile_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+202,"Core regfile_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+31,"Core regfile_io_wen", false,-1);
        tracep->declBus(c+32,"Core regfile_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+33,"Core regfile_io_wdata", false,-1, 63,0);
        tracep->declQuad(c+35,"Core regfile_io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+37,"Core regfile_io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+39,"Core regfile_io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+41,"Core regfile_io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+43,"Core regfile_io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+45,"Core regfile_io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+47,"Core regfile_io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+49,"Core regfile_io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+51,"Core regfile_io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+53,"Core regfile_io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+55,"Core regfile_io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+57,"Core regfile_io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+59,"Core regfile_io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+61,"Core regfile_io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+63,"Core regfile_io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+65,"Core regfile_io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+67,"Core regfile_io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+69,"Core regfile_io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+71,"Core regfile_io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+73,"Core regfile_io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+75,"Core regfile_io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+77,"Core regfile_io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+79,"Core regfile_io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+81,"Core regfile_io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+83,"Core regfile_io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+85,"Core regfile_io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+87,"Core regfile_io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+89,"Core regfile_io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+91,"Core regfile_io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+93,"Core regfile_io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+95,"Core regfile_io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+97,"Core regfile_io_regs_31", false,-1, 63,0);
        tracep->declBit(c+99,"Core regfile_io_ex_rd_en", false,-1);
        tracep->declBus(c+100,"Core regfile_io_ex_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+101,"Core regfile_io_ex_rd_data", false,-1, 63,0);
        tracep->declBit(c+103,"Core regfile_io_ex_is_load_i", false,-1);
        tracep->declBit(c+104,"Core regfile_io_mem_is_load_i", false,-1);
        tracep->declBit(c+105,"Core regfile_io_mem_rd_en", false,-1);
        tracep->declBus(c+106,"Core regfile_io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+214,"Core regfile_io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+30,"Core regfile_io_rf_stall", false,-1);
        tracep->declQuad(c+317,"Core regfile_io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+319,"Core regfile_io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+321,"Core regfile_io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+323,"Core regfile_io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+325,"Core regfile_io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+327,"Core regfile_io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+329,"Core regfile_io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+331,"Core regfile_io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+333,"Core regfile_io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+335,"Core regfile_io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+337,"Core regfile_io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+339,"Core regfile_io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+341,"Core regfile_io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+343,"Core regfile_io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+345,"Core regfile_io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+347,"Core regfile_io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+349,"Core regfile_io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+351,"Core regfile_io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+353,"Core regfile_io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+355,"Core regfile_io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+357,"Core regfile_io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+359,"Core regfile_io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+361,"Core regfile_io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+363,"Core regfile_io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+365,"Core regfile_io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+367,"Core regfile_io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+369,"Core regfile_io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+371,"Core regfile_io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+373,"Core regfile_io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+375,"Core regfile_io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+377,"Core regfile_io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+379,"Core regfile_io_regs_in_31", false,-1, 63,0);
        tracep->declBit(c+382,"Core regfile_io_write_regs", false,-1);
        tracep->declBit(c+228,"Core execute_clock", false,-1);
        tracep->declBit(c+229,"Core execute_reset", false,-1);
        tracep->declBit(c+213,"Core execute_io_in_ready", false,-1);
        tracep->declBit(c+199,"Core execute_io_in_bits_valid", false,-1);
        tracep->declBus(c+8,"Core execute_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+9,"Core execute_io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+10,"Core execute_io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+11,"Core execute_io_in_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+12,"Core execute_io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+13,"Core execute_io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBit(c+14,"Core execute_io_in_bits_w_type", false,-1);
        tracep->declBus(c+15,"Core execute_io_in_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+16,"Core execute_io_in_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+17,"Core execute_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+18,"Core execute_io_in_bits_rd_en", false,-1);
        tracep->declBus(c+19,"Core execute_io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+213,"Core execute_io_out_ready", false,-1);
        tracep->declBit(c+387,"Core execute_io_out_valid", false,-1);
        tracep->declBit(c+107,"Core execute_io_out_bits_valid", false,-1);
        tracep->declBus(c+108,"Core execute_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+109,"Core execute_io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+110,"Core execute_io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+111,"Core execute_io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+112,"Core execute_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+99,"Core execute_io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+25,"Core execute_io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+27,"Core execute_io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+101,"Core execute_io_ex_data_o", false,-1, 63,0);
        tracep->declBit(c+24,"Core execute_io_is_ebreak_i", false,-1);
        tracep->declBit(c+113,"Core execute_io_is_ebreak_o", false,-1);
        tracep->declBus(c+114,"Core execute_io_ex_rwaddr_o", false,-1, 31,0);
        tracep->declBit(c+115,"Core execute_io_ex_rvalid_o", false,-1);
        tracep->declBit(c+116,"Core execute_io_ex_wvalid_o", false,-1);
        tracep->declQuad(c+27,"Core execute_io_ex_wdata_o", false,-1, 63,0);
        tracep->declBus(c+111,"Core execute_io_ex_wsize_o", false,-1, 1,0);
        tracep->declBit(c+99,"Core execute_io_ex_rd_en", false,-1);
        tracep->declBus(c+100,"Core execute_io_ex_rd_addr", false,-1, 31,0);
        tracep->declBit(c+103,"Core execute_io_ex_is_load", false,-1);
        tracep->declBus(c+29,"Core execute_io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+7,"Core execute_io_jmp_packet_o_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+5,"Core execute_io_jmp_packet_o_mis", false,-1);
        tracep->declBit(c+228,"Core mem_clock", false,-1);
        tracep->declBit(c+229,"Core mem_reset", false,-1);
        tracep->declBit(c+213,"Core mem_io_in_ready", false,-1);
        tracep->declBit(c+107,"Core mem_io_in_bits_valid", false,-1);
        tracep->declBus(c+108,"Core mem_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+109,"Core mem_io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+110,"Core mem_io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+111,"Core mem_io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+112,"Core mem_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+99,"Core mem_io_in_bits_rd_en", false,-1);
        tracep->declBit(c+117,"Core mem_io_out_bits_valid", false,-1);
        tracep->declBus(c+118,"Core mem_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+119,"Core mem_io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+101,"Core mem_io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+32,"Core mem_io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+31,"Core mem_io_wen_o", false,-1);
        tracep->declQuad(c+33,"Core mem_io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+113,"Core mem_io_is_ebreak_i", false,-1);
        tracep->declBit(c+120,"Core mem_io_is_ebreak_o", false,-1);
        tracep->declBus(c+114,"Core mem_io_dmem_req_bits_arwaddr", false,-1, 31,0);
        tracep->declBit(c+204,"Core mem_io_dmem_req_bits_rvalid", false,-1);
        tracep->declBit(c+205,"Core mem_io_dmem_req_bits_wvalid", false,-1);
        tracep->declQuad(c+121,"Core mem_io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+123,"Core mem_io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declQuad(c+248,"Core mem_io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+250,"Core mem_io_dmem_resp_bits_rready", false,-1);
        tracep->declBit(c+251,"Core mem_io_dmem_resp_bits_wready", false,-1);
        tracep->declBus(c+114,"Core mem_io_mem_rwaddr_i", false,-1, 31,0);
        tracep->declBit(c+115,"Core mem_io_mem_rvalid_i", false,-1);
        tracep->declBit(c+116,"Core mem_io_mem_wvalid_i", false,-1);
        tracep->declQuad(c+27,"Core mem_io_mem_wdata_i", false,-1, 63,0);
        tracep->declBus(c+111,"Core mem_io_mem_wsize_i", false,-1, 1,0);
        tracep->declBus(c+114,"Core mem_io_reg_mem_addr_i", false,-1, 31,0);
        tracep->declBit(c+105,"Core mem_io_mem_rd_en", false,-1);
        tracep->declBus(c+106,"Core mem_io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+214,"Core mem_io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+104,"Core mem_io_mem_is_load", false,-1);
        tracep->declBit(c+228,"Core wb_dpi_clk", false,-1);
        tracep->declBus(c+119,"Core wb_dpi_inst", false,-1, 31,0);
        tracep->declBus(c+118,"Core wb_dpi_pc", false,-1, 31,0);
        tracep->declBit(c+120,"Core wb_dpi_ebreak", false,-1);
        tracep->declBus(c+2,"Core fetch_io_imem_resp_bits_old_pc_REG", false,-1, 31,0);
        tracep->declBus(c+124,"Core io_commit_pc_REG", false,-1, 31,0);
        tracep->declBit(c+125,"Core io_commit_REG", false,-1);
        tracep->declBus(c+126,"Core io_dmem_raddr_hi", false,-1, 28,0);
        tracep->declBit(c+228,"Core fetch clock", false,-1);
        tracep->declBit(c+229,"Core fetch reset", false,-1);
        tracep->declBus(c+1,"Core fetch io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+384,"Core fetch io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+239,"Core fetch io_imem_resp_bits_rvalid", false,-1);
        tracep->declBus(c+2,"Core fetch io_imem_resp_bits_old_pc", false,-1, 31,0);
        tracep->declBit(c+212,"Core fetch io_out_ready", false,-1);
        tracep->declBit(c+387,"Core fetch io_out_valid", false,-1);
        tracep->declBus(c+2,"Core fetch io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+3,"Core fetch io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+4,"Core fetch io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+5,"Core fetch io_if_flush", false,-1);
        tracep->declBus(c+6,"Core fetch io_p_npc", false,-1, 31,0);
        tracep->declBus(c+7,"Core fetch io_jmp_packet_i_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+5,"Core fetch io_jmp_packet_i_mis", false,-1);
        tracep->declBit(c+382,"Core fetch io_write_regs", false,-1);
        tracep->declBus(c+381,"Core fetch io_input_pc", false,-1, 31,0);
        tracep->declBus(c+127,"Core fetch pc", false,-1, 31,0);
        tracep->declBus(c+128,"Core fetch pc_base_hi", false,-1, 29,0);
        tracep->declBus(c+1,"Core fetch pc_base", false,-1, 31,0);
        tracep->declBus(c+129,"Core fetch npc_s", false,-1, 31,0);
        tracep->declBit(c+385,"Core fetch imem_stall", false,-1);
        tracep->declBit(c+386,"Core fetch stall", false,-1);
        tracep->declBus(c+6,"Core fetch io_p_npc_REG", false,-1, 31,0);
        tracep->declBus(c+3,"Core fetch io_out_bits_inst_REG", false,-1, 31,0);
        tracep->declBit(c+4,"Core fetch io_out_bits_inst_valid_REG", false,-1);
        tracep->declBit(c+228,"Core decode clock", false,-1);
        tracep->declBit(c+229,"Core decode reset", false,-1);
        tracep->declBit(c+212,"Core decode io_in_ready", false,-1);
        tracep->declBus(c+2,"Core decode io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+3,"Core decode io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+4,"Core decode io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+213,"Core decode io_out_ready", false,-1);
        tracep->declBit(c+387,"Core decode io_out_valid", false,-1);
        tracep->declBit(c+199,"Core decode io_out_bits_valid", false,-1);
        tracep->declBus(c+8,"Core decode io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+9,"Core decode io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+10,"Core decode io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+11,"Core decode io_out_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+12,"Core decode io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+13,"Core decode io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBit(c+14,"Core decode io_out_bits_w_type", false,-1);
        tracep->declBus(c+15,"Core decode io_out_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+16,"Core decode io_out_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+17,"Core decode io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+18,"Core decode io_out_bits_rd_en", false,-1);
        tracep->declBus(c+19,"Core decode io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+5,"Core decode io_id_flush", false,-1);
        tracep->declBit(c+20,"Core decode io_ren1", false,-1);
        tracep->declBus(c+21,"Core decode io_raddr1", false,-1, 4,0);
        tracep->declBit(c+22,"Core decode io_ren2", false,-1);
        tracep->declBus(c+23,"Core decode io_raddr2", false,-1, 4,0);
        tracep->declBit(c+24,"Core decode io_is_ebreak", false,-1);
        tracep->declQuad(c+200,"Core decode io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+202,"Core decode io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+25,"Core decode io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+27,"Core decode io_rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+6,"Core decode io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+29,"Core decode io_p_npc_o", false,-1, 31,0);
        tracep->declBit(c+30,"Core decode io_decode_rf_stall_i", false,-1);
        tracep->declBus(c+8,"Core decode pc", false,-1, 31,0);
        tracep->declBus(c+9,"Core decode inst", false,-1, 31,0);
        tracep->declBit(c+130,"Core decode inst_valid", false,-1);
        tracep->declQuad(c+25,"Core decode io_rs1_data_o_REG", false,-1, 63,0);
        tracep->declQuad(c+27,"Core decode io_rs2_data_o_REG", false,-1, 63,0);
        tracep->declBus(c+12,"Core decode ctrl_4", false,-1, 1,0);
        tracep->declBit(c+14,"Core decode c0_0", false,-1);
        tracep->declBus(c+131,"Core decode c0_1", false,-1, 2,0);
        tracep->declBus(c+16,"Core decode c0_2", false,-1, 2,0);
        tracep->declBit(c+132,"Core decode c0_3", false,-1);
        tracep->declBus(c+133,"Core decode c0_4", false,-1, 2,0);
        tracep->declBit(c+216,"Core decode stall", false,-1);
        tracep->declBit(c+134,"Core decode io_is_ebreak_REG", false,-1);
        tracep->declBus(c+29,"Core decode io_p_npc_o_REG", false,-1, 31,0);
        tracep->declBus(c+135,"Core decode imm_i_hi", false,-1, 20,0);
        tracep->declBus(c+136,"Core decode imm_i_lo", false,-1, 10,0);
        tracep->declBus(c+137,"Core decode imm_i", false,-1, 31,0);
        tracep->declBus(c+138,"Core decode imm_s_hi_lo", false,-1, 5,0);
        tracep->declBus(c+139,"Core decode imm_s", false,-1, 31,0);
        tracep->declBus(c+140,"Core decode imm_b_hi_hi_hi", false,-1, 19,0);
        tracep->declBit(c+141,"Core decode imm_b_hi_hi_lo", false,-1);
        tracep->declBus(c+142,"Core decode imm_b_lo_hi", false,-1, 3,0);
        tracep->declBus(c+143,"Core decode imm_b", false,-1, 31,0);
        tracep->declBus(c+144,"Core decode imm_u_hi", false,-1, 19,0);
        tracep->declBus(c+145,"Core decode imm_u", false,-1, 31,0);
        tracep->declBus(c+146,"Core decode imm_j_hi_hi_hi", false,-1, 11,0);
        tracep->declBus(c+147,"Core decode imm_j_hi_hi_lo", false,-1, 7,0);
        tracep->declBit(c+148,"Core decode imm_j_hi_lo", false,-1);
        tracep->declBus(c+149,"Core decode imm_j_lo_hi", false,-1, 9,0);
        tracep->declBus(c+150,"Core decode imm_j", false,-1, 31,0);
        tracep->declBus(c+151,"Core decode imm_shamt_lo_1", false,-1, 5,0);
        tracep->declBus(c+152,"Core decode imm_shamt", false,-1, 31,0);
        tracep->declBus(c+153,"Core decode imm_csr", false,-1, 31,0);
        tracep->declBit(c+228,"Core regfile clock", false,-1);
        tracep->declBit(c+229,"Core regfile reset", false,-1);
        tracep->declBit(c+20,"Core regfile io_ren1", false,-1);
        tracep->declBus(c+21,"Core regfile io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+200,"Core regfile io_rdata1", false,-1, 63,0);
        tracep->declBit(c+22,"Core regfile io_ren2", false,-1);
        tracep->declBus(c+23,"Core regfile io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+202,"Core regfile io_rdata2", false,-1, 63,0);
        tracep->declBit(c+31,"Core regfile io_wen", false,-1);
        tracep->declBus(c+32,"Core regfile io_waddr", false,-1, 4,0);
        tracep->declQuad(c+33,"Core regfile io_wdata", false,-1, 63,0);
        tracep->declQuad(c+35,"Core regfile io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+37,"Core regfile io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+39,"Core regfile io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+41,"Core regfile io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+43,"Core regfile io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+45,"Core regfile io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+47,"Core regfile io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+49,"Core regfile io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+51,"Core regfile io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+53,"Core regfile io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+55,"Core regfile io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+57,"Core regfile io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+59,"Core regfile io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+61,"Core regfile io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+63,"Core regfile io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+65,"Core regfile io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+67,"Core regfile io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+69,"Core regfile io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+71,"Core regfile io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+73,"Core regfile io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+75,"Core regfile io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+77,"Core regfile io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+79,"Core regfile io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+81,"Core regfile io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+83,"Core regfile io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+85,"Core regfile io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+87,"Core regfile io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+89,"Core regfile io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+91,"Core regfile io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+93,"Core regfile io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+95,"Core regfile io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+97,"Core regfile io_regs_31", false,-1, 63,0);
        tracep->declBit(c+99,"Core regfile io_ex_rd_en", false,-1);
        tracep->declBus(c+100,"Core regfile io_ex_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+101,"Core regfile io_ex_rd_data", false,-1, 63,0);
        tracep->declBit(c+103,"Core regfile io_ex_is_load_i", false,-1);
        tracep->declBit(c+104,"Core regfile io_mem_is_load_i", false,-1);
        tracep->declBit(c+105,"Core regfile io_mem_rd_en", false,-1);
        tracep->declBus(c+106,"Core regfile io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+214,"Core regfile io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+30,"Core regfile io_rf_stall", false,-1);
        tracep->declQuad(c+317,"Core regfile io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+319,"Core regfile io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+321,"Core regfile io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+323,"Core regfile io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+325,"Core regfile io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+327,"Core regfile io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+329,"Core regfile io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+331,"Core regfile io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+333,"Core regfile io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+335,"Core regfile io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+337,"Core regfile io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+339,"Core regfile io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+341,"Core regfile io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+343,"Core regfile io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+345,"Core regfile io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+347,"Core regfile io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+349,"Core regfile io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+351,"Core regfile io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+353,"Core regfile io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+355,"Core regfile io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+357,"Core regfile io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+359,"Core regfile io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+361,"Core regfile io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+363,"Core regfile io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+365,"Core regfile io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+367,"Core regfile io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+369,"Core regfile io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+371,"Core regfile io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+373,"Core regfile io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+375,"Core regfile io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+377,"Core regfile io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+379,"Core regfile io_regs_in_31", false,-1, 63,0);
        tracep->declBit(c+382,"Core regfile io_write_regs", false,-1);
        tracep->declBit(c+154,"Core regfile ex_rs1_hazard", false,-1);
        tracep->declBit(c+155,"Core regfile ex_rs2_hazard", false,-1);
        tracep->declBit(c+156,"Core regfile mem_rs1_hazard", false,-1);
        tracep->declBit(c+157,"Core regfile mem_rs2_hazard", false,-1);
        tracep->declBit(c+158,"Core regfile wb_rs1_hazard", false,-1);
        tracep->declBit(c+159,"Core regfile wb_rs2_hazard", false,-1);
        tracep->declQuad(c+35,"Core regfile rf_0", false,-1, 63,0);
        tracep->declQuad(c+37,"Core regfile rf_1", false,-1, 63,0);
        tracep->declQuad(c+39,"Core regfile rf_2", false,-1, 63,0);
        tracep->declQuad(c+41,"Core regfile rf_3", false,-1, 63,0);
        tracep->declQuad(c+43,"Core regfile rf_4", false,-1, 63,0);
        tracep->declQuad(c+45,"Core regfile rf_5", false,-1, 63,0);
        tracep->declQuad(c+47,"Core regfile rf_6", false,-1, 63,0);
        tracep->declQuad(c+49,"Core regfile rf_7", false,-1, 63,0);
        tracep->declQuad(c+51,"Core regfile rf_8", false,-1, 63,0);
        tracep->declQuad(c+53,"Core regfile rf_9", false,-1, 63,0);
        tracep->declQuad(c+55,"Core regfile rf_10", false,-1, 63,0);
        tracep->declQuad(c+57,"Core regfile rf_11", false,-1, 63,0);
        tracep->declQuad(c+59,"Core regfile rf_12", false,-1, 63,0);
        tracep->declQuad(c+61,"Core regfile rf_13", false,-1, 63,0);
        tracep->declQuad(c+63,"Core regfile rf_14", false,-1, 63,0);
        tracep->declQuad(c+65,"Core regfile rf_15", false,-1, 63,0);
        tracep->declQuad(c+67,"Core regfile rf_16", false,-1, 63,0);
        tracep->declQuad(c+69,"Core regfile rf_17", false,-1, 63,0);
        tracep->declQuad(c+71,"Core regfile rf_18", false,-1, 63,0);
        tracep->declQuad(c+73,"Core regfile rf_19", false,-1, 63,0);
        tracep->declQuad(c+75,"Core regfile rf_20", false,-1, 63,0);
        tracep->declQuad(c+77,"Core regfile rf_21", false,-1, 63,0);
        tracep->declQuad(c+79,"Core regfile rf_22", false,-1, 63,0);
        tracep->declQuad(c+81,"Core regfile rf_23", false,-1, 63,0);
        tracep->declQuad(c+83,"Core regfile rf_24", false,-1, 63,0);
        tracep->declQuad(c+85,"Core regfile rf_25", false,-1, 63,0);
        tracep->declQuad(c+87,"Core regfile rf_26", false,-1, 63,0);
        tracep->declQuad(c+89,"Core regfile rf_27", false,-1, 63,0);
        tracep->declQuad(c+91,"Core regfile rf_28", false,-1, 63,0);
        tracep->declQuad(c+93,"Core regfile rf_29", false,-1, 63,0);
        tracep->declQuad(c+95,"Core regfile rf_30", false,-1, 63,0);
        tracep->declQuad(c+97,"Core regfile rf_31", false,-1, 63,0);
        tracep->declBit(c+228,"Core execute clock", false,-1);
        tracep->declBit(c+229,"Core execute reset", false,-1);
        tracep->declBit(c+213,"Core execute io_in_ready", false,-1);
        tracep->declBit(c+199,"Core execute io_in_bits_valid", false,-1);
        tracep->declBus(c+8,"Core execute io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+9,"Core execute io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+10,"Core execute io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+11,"Core execute io_in_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+12,"Core execute io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+13,"Core execute io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBit(c+14,"Core execute io_in_bits_w_type", false,-1);
        tracep->declBus(c+15,"Core execute io_in_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+16,"Core execute io_in_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+17,"Core execute io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+18,"Core execute io_in_bits_rd_en", false,-1);
        tracep->declBus(c+19,"Core execute io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+213,"Core execute io_out_ready", false,-1);
        tracep->declBit(c+387,"Core execute io_out_valid", false,-1);
        tracep->declBit(c+107,"Core execute io_out_bits_valid", false,-1);
        tracep->declBus(c+108,"Core execute io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+109,"Core execute io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+110,"Core execute io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+111,"Core execute io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+112,"Core execute io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+99,"Core execute io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+25,"Core execute io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+27,"Core execute io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+101,"Core execute io_ex_data_o", false,-1, 63,0);
        tracep->declBit(c+24,"Core execute io_is_ebreak_i", false,-1);
        tracep->declBit(c+113,"Core execute io_is_ebreak_o", false,-1);
        tracep->declBus(c+114,"Core execute io_ex_rwaddr_o", false,-1, 31,0);
        tracep->declBit(c+115,"Core execute io_ex_rvalid_o", false,-1);
        tracep->declBit(c+116,"Core execute io_ex_wvalid_o", false,-1);
        tracep->declQuad(c+27,"Core execute io_ex_wdata_o", false,-1, 63,0);
        tracep->declBus(c+111,"Core execute io_ex_wsize_o", false,-1, 1,0);
        tracep->declBit(c+99,"Core execute io_ex_rd_en", false,-1);
        tracep->declBus(c+100,"Core execute io_ex_rd_addr", false,-1, 31,0);
        tracep->declBit(c+103,"Core execute io_ex_is_load", false,-1);
        tracep->declBus(c+29,"Core execute io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+7,"Core execute io_jmp_packet_o_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+5,"Core execute io_jmp_packet_o_mis", false,-1);
        tracep->declQuad(c+160,"Core execute alu_io_in1", false,-1, 63,0);
        tracep->declQuad(c+162,"Core execute alu_io_in2", false,-1, 63,0);
        tracep->declBus(c+164,"Core execute alu_io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+165,"Core execute alu_io_wtype_i", false,-1);
        tracep->declQuad(c+101,"Core execute alu_io_alu_out", false,-1, 63,0);
        tracep->declBit(c+166,"Core execute alu_io_jmp", false,-1);
        tracep->declBus(c+167,"Core execute alu_io_jmp_code", false,-1, 3,0);
        tracep->declBus(c+168,"Core execute alu_io_imm", false,-1, 31,0);
        tracep->declBus(c+108,"Core execute alu_io_pc_i", false,-1, 31,0);
        tracep->declBus(c+169,"Core execute alu_io_jmp_pc", false,-1, 31,0);
        tracep->declBit(c+217,"Core execute stall", false,-1);
        tracep->declBit(c+113,"Core execute io_is_ebreak_o_REG", false,-1);
        tracep->declBit(c+107,"Core execute ex_reg_decodeop_valid", false,-1);
        tracep->declBus(c+108,"Core execute ex_reg_decodeop_pc", false,-1, 31,0);
        tracep->declBus(c+109,"Core execute ex_reg_decodeop_inst", false,-1, 31,0);
        tracep->declBus(c+164,"Core execute ex_reg_decodeop_alu_code", false,-1, 3,0);
        tracep->declBus(c+167,"Core execute ex_reg_decodeop_jmp_code", false,-1, 3,0);
        tracep->declBus(c+110,"Core execute ex_reg_decodeop_mem_code", false,-1, 1,0);
        tracep->declBus(c+111,"Core execute ex_reg_decodeop_mem_size", false,-1, 1,0);
        tracep->declBit(c+165,"Core execute ex_reg_decodeop_w_type", false,-1);
        tracep->declBus(c+170,"Core execute ex_reg_decodeop_rs1_src", false,-1, 2,0);
        tracep->declBus(c+171,"Core execute ex_reg_decodeop_rs2_src", false,-1, 2,0);
        tracep->declBus(c+112,"Core execute ex_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+99,"Core execute ex_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+168,"Core execute ex_reg_decodeop_imm", false,-1, 31,0);
        tracep->declBus(c+172,"Core execute rs1_temp_hi", false,-1, 31,0);
        tracep->declBus(c+173,"Core execute rs1_temp_lo", false,-1, 31,0);
        tracep->declBus(c+7,"Core execute real_npc", false,-1, 31,0);
        tracep->declQuad(c+160,"Core execute alu io_in1", false,-1, 63,0);
        tracep->declQuad(c+162,"Core execute alu io_in2", false,-1, 63,0);
        tracep->declBus(c+164,"Core execute alu io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+165,"Core execute alu io_wtype_i", false,-1);
        tracep->declQuad(c+101,"Core execute alu io_alu_out", false,-1, 63,0);
        tracep->declBit(c+166,"Core execute alu io_jmp", false,-1);
        tracep->declBus(c+167,"Core execute alu io_jmp_code", false,-1, 3,0);
        tracep->declBus(c+168,"Core execute alu io_imm", false,-1, 31,0);
        tracep->declBus(c+108,"Core execute alu io_pc_i", false,-1, 31,0);
        tracep->declBus(c+169,"Core execute alu io_jmp_pc", false,-1, 31,0);
        tracep->declBus(c+174,"Core execute alu shamt", false,-1, 5,0);
        tracep->declBus(c+175,"Core execute alu out0_lo", false,-1, 31,0);
        tracep->declQuad(c+176,"Core execute alu out0", false,-1, 63,0);
        tracep->declBus(c+178,"Core execute alu out1_lo", false,-1, 31,0);
        tracep->declBus(c+179,"Core execute alu out1_hi", false,-1, 31,0);
        tracep->declBit(c+228,"Core mem clock", false,-1);
        tracep->declBit(c+229,"Core mem reset", false,-1);
        tracep->declBit(c+213,"Core mem io_in_ready", false,-1);
        tracep->declBit(c+107,"Core mem io_in_bits_valid", false,-1);
        tracep->declBus(c+108,"Core mem io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+109,"Core mem io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+110,"Core mem io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+111,"Core mem io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+112,"Core mem io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+99,"Core mem io_in_bits_rd_en", false,-1);
        tracep->declBit(c+117,"Core mem io_out_bits_valid", false,-1);
        tracep->declBus(c+118,"Core mem io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+119,"Core mem io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+101,"Core mem io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+32,"Core mem io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+31,"Core mem io_wen_o", false,-1);
        tracep->declQuad(c+33,"Core mem io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+113,"Core mem io_is_ebreak_i", false,-1);
        tracep->declBit(c+120,"Core mem io_is_ebreak_o", false,-1);
        tracep->declBus(c+114,"Core mem io_dmem_req_bits_arwaddr", false,-1, 31,0);
        tracep->declBit(c+204,"Core mem io_dmem_req_bits_rvalid", false,-1);
        tracep->declBit(c+205,"Core mem io_dmem_req_bits_wvalid", false,-1);
        tracep->declQuad(c+121,"Core mem io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+123,"Core mem io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declQuad(c+248,"Core mem io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+250,"Core mem io_dmem_resp_bits_rready", false,-1);
        tracep->declBit(c+251,"Core mem io_dmem_resp_bits_wready", false,-1);
        tracep->declBus(c+114,"Core mem io_mem_rwaddr_i", false,-1, 31,0);
        tracep->declBit(c+115,"Core mem io_mem_rvalid_i", false,-1);
        tracep->declBit(c+116,"Core mem io_mem_wvalid_i", false,-1);
        tracep->declQuad(c+27,"Core mem io_mem_wdata_i", false,-1, 63,0);
        tracep->declBus(c+111,"Core mem io_mem_wsize_i", false,-1, 1,0);
        tracep->declBus(c+114,"Core mem io_reg_mem_addr_i", false,-1, 31,0);
        tracep->declBit(c+105,"Core mem io_mem_rd_en", false,-1);
        tracep->declBus(c+106,"Core mem io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+214,"Core mem io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+104,"Core mem io_mem_is_load", false,-1);
        tracep->declBit(c+120,"Core mem io_is_ebreak_o_REG", false,-1);
        tracep->declBit(c+180,"Core mem mem_reg_decodeop_valid", false,-1);
        tracep->declBus(c+181,"Core mem mem_reg_decodeop_pc", false,-1, 31,0);
        tracep->declBus(c+182,"Core mem mem_reg_decodeop_inst", false,-1, 31,0);
        tracep->declBus(c+183,"Core mem mem_reg_decodeop_mem_code", false,-1, 1,0);
        tracep->declBus(c+184,"Core mem mem_reg_decodeop_mem_size", false,-1, 1,0);
        tracep->declBus(c+185,"Core mem mem_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+105,"Core mem mem_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+186,"Core mem waddr", false,-1, 4,0);
        tracep->declBit(c+187,"Core mem wen", false,-1);
        tracep->declQuad(c+188,"Core mem wdata", false,-1, 63,0);
        tracep->declBus(c+190,"Core mem reg_mem_addr", false,-1, 31,0);
        tracep->declBit(c+191,"Core mem is_load", false,-1);
        tracep->declBit(c+192,"Core mem is_store", false,-1);
        tracep->declBit(c+217,"Core mem req_wait", false,-1);
        tracep->declBus(c+193,"Core mem addr_offset", false,-1, 2,0);
        tracep->declBus(c+194,"Core mem reg_addr_offset", false,-1, 2,0);
        tracep->declBus(c+195,"Core mem mask", false,-1, 7,0);
        tracep->declBus(c+196,"Core mem wmask", false,-1, 7,0);
        tracep->declQuad(c+218,"Core mem ld_data_raw", false,-1, 63,0);
        tracep->declQuad(c+220,"Core mem ld_data_hi", false,-1, 55,0);
        tracep->declBus(c+222,"Core mem ld_data_lo", false,-1, 7,0);
        tracep->declQuad(c+223,"Core mem ld_data_hi_1", false,-1, 47,0);
        tracep->declBus(c+225,"Core mem ld_data_lo_1", false,-1, 15,0);
        tracep->declBus(c+226,"Core mem ld_data_hi_2", false,-1, 31,0);
        tracep->declBus(c+227,"Core mem ld_data_lo_2", false,-1, 31,0);
        tracep->declQuad(c+206,"Core mem ld_data", false,-1, 63,0);
        tracep->declQuad(c+208,"Core mem ld_data_u", false,-1, 63,0);
        tracep->declQuad(c+210,"Core mem load_data", false,-1, 63,0);
        tracep->declBit(c+117,"Core mem io_out_bits_REG_valid", false,-1);
        tracep->declBus(c+118,"Core mem io_out_bits_REG_pc", false,-1, 31,0);
        tracep->declBus(c+119,"Core mem io_out_bits_REG_inst", false,-1, 31,0);
        tracep->declBus(c+32,"Core mem io_waddr_o_REG", false,-1, 4,0);
        tracep->declBit(c+31,"Core mem io_wen_o_REG", false,-1);
        tracep->declQuad(c+33,"Core mem io_wdata_o_REG", false,-1, 63,0);
        tracep->declBit(c+228,"Core wb_dpi clk", false,-1);
        tracep->declBus(c+119,"Core wb_dpi inst", false,-1, 31,0);
        tracep->declBus(c+118,"Core wb_dpi pc", false,-1, 31,0);
        tracep->declBit(c+120,"Core wb_dpi ebreak", false,-1);
        tracep->declBus(c+197,"Core wb_dpi inst1", false,-1, 31,0);
        tracep->declBus(c+198,"Core wb_dpi pc1", false,-1, 31,0);
    }
}

void VCore___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VCore___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VCore___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VCore___024root__traceRegister(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VCore___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VCore___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VCore___024root__traceCleanup, vlSelf);
    }
}

void VCore___024root__traceFullSub0(VCore___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VCore___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VCore___024root* const __restrict vlSelf = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VCore___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VCore___024root__traceFullSub0(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp18;
    VlWide<4>/*127:0*/ __Vtemp19;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,((0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc)),32);
        tracep->fullIData(oldp+2,(vlSelf->Core__DOT__fetch_io_imem_resp_bits_old_pc_REG),32);
        tracep->fullIData(oldp+3,(vlSelf->Core__DOT__fetch__DOT__io_out_bits_inst_REG),32);
        tracep->fullBit(oldp+4,(vlSelf->Core__DOT__fetch__DOT__io_out_bits_inst_valid_REG));
        tracep->fullBit(oldp+5,(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis));
        tracep->fullIData(oldp+6,(vlSelf->Core__DOT__fetch__DOT__io_p_npc_REG),32);
        tracep->fullIData(oldp+7,(((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_jmp)
                                    ? vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc
                                    : ((IData)(4U) 
                                       + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc))),32);
        tracep->fullIData(oldp+8,(vlSelf->Core__DOT__decode__DOT__pc),32);
        tracep->fullIData(oldp+9,(vlSelf->Core__DOT__decode__DOT__inst),32);
        tracep->fullCData(oldp+10,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 1U : ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 1U : 
                                             ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 0U
                                               : ((0x67U 
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
                                                     : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_356)))))))),4);
        tracep->fullCData(oldp+11,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 0U : ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 0U : 
                                             ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 1U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 2U
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
                                                         : 0U))))))))))),4);
        tracep->fullCData(oldp+12,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 0U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_505))),2);
        tracep->fullCData(oldp+13,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 0U : ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 0U : 
                                             ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 0U
                                               : ((0x67U 
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
                                                          ? 0U
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 1U
                                                           : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_566)))))))))))))),2);
        tracep->fullBit(oldp+14,(((0x37U != (0x7fU 
                                             & vlSelf->Core__DOT__decode__DOT__inst)) 
                                  & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793))));
        tracep->fullCData(oldp+15,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 3U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_865))),3);
        tracep->fullCData(oldp+16,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 2U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_937))),3);
        tracep->fullCData(oldp+17,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 7U))),5);
        tracep->fullBit(oldp+18,(((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
                                  & ((IData)(vlSelf->Core__DOT__decode__DOT__inst_valid) 
                                     & (IData)(vlSelf->Core__DOT__decode__DOT__c0_3)))));
        tracep->fullIData(oldp+19,(((7U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                                     ? (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU))
                                     : ((6U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
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
                                         : vlSelf->Core__DOT__decode__DOT___io_out_bits_imm_T_9))),32);
        tracep->fullBit(oldp+20,((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1))));
        tracep->fullCData(oldp+21,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0xfU))),5);
        tracep->fullBit(oldp+22,(vlSelf->Core__DOT__decode_io_ren2));
        tracep->fullCData(oldp+23,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+24,(((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
                                  & ((IData)(vlSelf->Core__DOT__decode__DOT__inst_valid) 
                                     & (IData)(vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG)))));
        tracep->fullQData(oldp+25,(vlSelf->Core__DOT__decode__DOT__io_rs1_data_o_REG),64);
        tracep->fullQData(oldp+27,(vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG),64);
        tracep->fullIData(oldp+29,(vlSelf->Core__DOT__decode__DOT__io_p_npc_o_REG),32);
        tracep->fullBit(oldp+30,(((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                    | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                   & ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard) 
                                      | (IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard))) 
                                  | (((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                      | (2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))) 
                                     & ((IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard) 
                                        | (IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard))))));
        tracep->fullBit(oldp+31,(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG));
        tracep->fullCData(oldp+32,(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG),5);
        tracep->fullQData(oldp+33,(vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG),64);
        tracep->fullQData(oldp+35,(vlSelf->Core__DOT__regfile__DOT__rf_0),64);
        tracep->fullQData(oldp+37,(vlSelf->Core__DOT__regfile__DOT__rf_1),64);
        tracep->fullQData(oldp+39,(vlSelf->Core__DOT__regfile__DOT__rf_2),64);
        tracep->fullQData(oldp+41,(vlSelf->Core__DOT__regfile__DOT__rf_3),64);
        tracep->fullQData(oldp+43,(vlSelf->Core__DOT__regfile__DOT__rf_4),64);
        tracep->fullQData(oldp+45,(vlSelf->Core__DOT__regfile__DOT__rf_5),64);
        tracep->fullQData(oldp+47,(vlSelf->Core__DOT__regfile__DOT__rf_6),64);
        tracep->fullQData(oldp+49,(vlSelf->Core__DOT__regfile__DOT__rf_7),64);
        tracep->fullQData(oldp+51,(vlSelf->Core__DOT__regfile__DOT__rf_8),64);
        tracep->fullQData(oldp+53,(vlSelf->Core__DOT__regfile__DOT__rf_9),64);
        tracep->fullQData(oldp+55,(vlSelf->Core__DOT__regfile__DOT__rf_10),64);
        tracep->fullQData(oldp+57,(vlSelf->Core__DOT__regfile__DOT__rf_11),64);
        tracep->fullQData(oldp+59,(vlSelf->Core__DOT__regfile__DOT__rf_12),64);
        tracep->fullQData(oldp+61,(vlSelf->Core__DOT__regfile__DOT__rf_13),64);
        tracep->fullQData(oldp+63,(vlSelf->Core__DOT__regfile__DOT__rf_14),64);
        tracep->fullQData(oldp+65,(vlSelf->Core__DOT__regfile__DOT__rf_15),64);
        tracep->fullQData(oldp+67,(vlSelf->Core__DOT__regfile__DOT__rf_16),64);
        tracep->fullQData(oldp+69,(vlSelf->Core__DOT__regfile__DOT__rf_17),64);
        tracep->fullQData(oldp+71,(vlSelf->Core__DOT__regfile__DOT__rf_18),64);
        tracep->fullQData(oldp+73,(vlSelf->Core__DOT__regfile__DOT__rf_19),64);
        tracep->fullQData(oldp+75,(vlSelf->Core__DOT__regfile__DOT__rf_20),64);
        tracep->fullQData(oldp+77,(vlSelf->Core__DOT__regfile__DOT__rf_21),64);
        tracep->fullQData(oldp+79,(vlSelf->Core__DOT__regfile__DOT__rf_22),64);
        tracep->fullQData(oldp+81,(vlSelf->Core__DOT__regfile__DOT__rf_23),64);
        tracep->fullQData(oldp+83,(vlSelf->Core__DOT__regfile__DOT__rf_24),64);
        tracep->fullQData(oldp+85,(vlSelf->Core__DOT__regfile__DOT__rf_25),64);
        tracep->fullQData(oldp+87,(vlSelf->Core__DOT__regfile__DOT__rf_26),64);
        tracep->fullQData(oldp+89,(vlSelf->Core__DOT__regfile__DOT__rf_27),64);
        tracep->fullQData(oldp+91,(vlSelf->Core__DOT__regfile__DOT__rf_28),64);
        tracep->fullQData(oldp+93,(vlSelf->Core__DOT__regfile__DOT__rf_29),64);
        tracep->fullQData(oldp+95,(vlSelf->Core__DOT__regfile__DOT__rf_30),64);
        tracep->fullQData(oldp+97,(vlSelf->Core__DOT__regfile__DOT__rf_31),64);
        tracep->fullBit(oldp+99,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en));
        tracep->fullIData(oldp+100,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),32);
        tracep->fullQData(oldp+101,(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out),64);
        tracep->fullBit(oldp+103,(((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                   | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)))));
        tracep->fullBit(oldp+104,(((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                   | (2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)))));
        tracep->fullBit(oldp+105,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en));
        tracep->fullIData(oldp+106,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr),32);
        tracep->fullBit(oldp+107,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid));
        tracep->fullIData(oldp+108,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc),32);
        tracep->fullIData(oldp+109,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst),32);
        tracep->fullCData(oldp+110,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code),2);
        tracep->fullCData(oldp+111,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size),2);
        tracep->fullCData(oldp+112,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),5);
        tracep->fullBit(oldp+113,(vlSelf->Core__DOT__execute__DOT__io_is_ebreak_o_REG));
        tracep->fullIData(oldp+114,((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)),32);
        tracep->fullBit(oldp+115,((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                    | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                   & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
        tracep->fullBit(oldp+116,(((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                   & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
        tracep->fullBit(oldp+117,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_valid));
        tracep->fullIData(oldp+118,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc),32);
        tracep->fullIData(oldp+119,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_inst),32);
        tracep->fullBit(oldp+120,(vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG));
        VL_EXTEND_WQ(127,64, __Vtemp18, vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG);
        VL_SHIFTL_WWI(127,127,6, __Vtemp19, __Vtemp18, 
                      (0x38U & ((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out) 
                                << 3U)));
        tracep->fullQData(oldp+121,((((QData)((IData)(
                                                      __Vtemp19[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp19[0U])))),64);
        tracep->fullCData(oldp+123,((0x7fffU & (((7U 
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
                                                    & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))))),8);
        tracep->fullIData(oldp+124,(vlSelf->Core__DOT__io_commit_pc_REG),32);
        tracep->fullBit(oldp+125,(vlSelf->Core__DOT__io_commit_REG));
        tracep->fullIData(oldp+126,((0x1fffffffU & (IData)(
                                                           (vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                                            >> 3U)))),29);
        tracep->fullIData(oldp+127,(vlSelf->Core__DOT__fetch__DOT__pc),32);
        tracep->fullIData(oldp+128,((vlSelf->Core__DOT__fetch__DOT__pc 
                                     >> 2U)),30);
        tracep->fullIData(oldp+129,(((IData)(4U) + 
                                     (0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc))),32);
        tracep->fullBit(oldp+130,(vlSelf->Core__DOT__decode__DOT__inst_valid));
        tracep->fullCData(oldp+131,(vlSelf->Core__DOT__decode__DOT__c0_1),3);
        tracep->fullBit(oldp+132,(vlSelf->Core__DOT__decode__DOT__c0_3));
        tracep->fullCData(oldp+133,(vlSelf->Core__DOT__decode__DOT__c0_4),3);
        tracep->fullBit(oldp+134,(vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG));
        tracep->fullIData(oldp+135,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0x1fffffU
                                      : 0U)),21);
        tracep->fullSData(oldp+136,((0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x14U))),11);
        tracep->fullIData(oldp+137,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0x1fffffU
                                        : 0U) << 0xbU) 
                                     | (0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))),32);
        tracep->fullCData(oldp+138,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0x19U))),6);
        tracep->fullIData(oldp+139,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0x1fffffU
                                        : 0U) << 0xbU) 
                                     | ((0x7e0U & (vlSelf->Core__DOT__decode__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 7U))))),32);
        tracep->fullIData(oldp+140,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0xfffffU
                                      : 0U)),20);
        tracep->fullBit(oldp+141,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 7U))));
        tracep->fullCData(oldp+142,((0xfU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 8U))),4);
        tracep->fullIData(oldp+143,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0xfffffU
                                        : 0U) << 0xcU) 
                                     | ((0x800U & (vlSelf->Core__DOT__decode__DOT__inst 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 7U)))))),32);
        tracep->fullIData(oldp+144,((vlSelf->Core__DOT__decode__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullIData(oldp+145,((0xfffff000U & vlSelf->Core__DOT__decode__DOT__inst)),32);
        tracep->fullSData(oldp+146,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0xfffU
                                      : 0U)),12);
        tracep->fullCData(oldp+147,((0xffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0xcU))),8);
        tracep->fullBit(oldp+148,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x14U))));
        tracep->fullSData(oldp+149,((0x3ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x15U))),10);
        tracep->fullIData(oldp+150,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0xfffU
                                        : 0U) << 0x14U) 
                                     | ((0xff000U & vlSelf->Core__DOT__decode__DOT__inst) 
                                        | ((0x800U 
                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))))),32);
        tracep->fullCData(oldp+151,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0x14U))),6);
        tracep->fullIData(oldp+152,((((0x37U != (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst)) 
                                      & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793))
                                      ? (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U))
                                      : (0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))),32);
        tracep->fullIData(oldp+153,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0xfU))),32);
        tracep->fullBit(oldp+154,(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard));
        tracep->fullBit(oldp+155,(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard));
        tracep->fullBit(oldp+156,(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard));
        tracep->fullBit(oldp+157,(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard));
        tracep->fullBit(oldp+158,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
        tracep->fullBit(oldp+159,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))) 
                                   & (IData)(vlSelf->Core__DOT__decode_io_ren2))));
        tracep->fullQData(oldp+160,(vlSelf->Core__DOT__execute__DOT__alu_io_in1),64);
        tracep->fullQData(oldp+162,(vlSelf->Core__DOT__execute__DOT__alu_io_in2),64);
        tracep->fullCData(oldp+164,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code),4);
        tracep->fullBit(oldp+165,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type));
        tracep->fullBit(oldp+166,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp));
        tracep->fullCData(oldp+167,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code),4);
        tracep->fullIData(oldp+168,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm),32);
        tracep->fullIData(oldp+169,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc),32);
        tracep->fullCData(oldp+170,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src),3);
        tracep->fullCData(oldp+171,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src),3);
        tracep->fullIData(oldp+172,(((vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+173,(((IData)(4U) + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)),32);
        tracep->fullCData(oldp+174,(vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt),6);
        tracep->fullIData(oldp+175,((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_in1)),32);
        tracep->fullQData(oldp+176,(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0),64);
        tracep->fullIData(oldp+178,((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)),32);
        tracep->fullIData(oldp+179,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullBit(oldp+180,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid));
        tracep->fullIData(oldp+181,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_pc),32);
        tracep->fullIData(oldp+182,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_inst),32);
        tracep->fullCData(oldp+183,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code),2);
        tracep->fullCData(oldp+184,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size),2);
        tracep->fullCData(oldp+185,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr),5);
        tracep->fullCData(oldp+186,(vlSelf->Core__DOT__mem__DOT__waddr),5);
        tracep->fullBit(oldp+187,(vlSelf->Core__DOT__mem__DOT__wen));
        tracep->fullQData(oldp+188,(vlSelf->Core__DOT__mem__DOT__wdata),64);
        tracep->fullIData(oldp+190,(vlSelf->Core__DOT__mem__DOT__reg_mem_addr),32);
        tracep->fullBit(oldp+191,(vlSelf->Core__DOT__mem__DOT__is_load));
        tracep->fullBit(oldp+192,((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))));
        tracep->fullCData(oldp+193,((7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out))),3);
        tracep->fullCData(oldp+194,((7U & vlSelf->Core__DOT__mem__DOT__reg_mem_addr)),3);
        tracep->fullCData(oldp+195,(((7U == (7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                      ? 0x80U : ((6U 
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
                                                       : 0xffU)))))))),8);
        tracep->fullCData(oldp+196,(((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                      ? 0xffU : ((2U 
                                                  == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                  ? 0xfU
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                   ? 3U
                                                   : 1U)))),8);
        tracep->fullIData(oldp+197,(vlSelf->Core__DOT__wb_dpi__DOT__inst1),32);
        tracep->fullIData(oldp+198,(vlSelf->Core__DOT__wb_dpi__DOT__pc1),32);
        tracep->fullBit(oldp+199,(((~ ((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis) 
                                       | (IData)(vlSelf->Core__DOT__decode__DOT__stall))) 
                                   & (IData)(vlSelf->Core__DOT__decode__DOT__inst_valid))));
        tracep->fullQData(oldp+200,(((0U != (0x1fU 
                                             & (vlSelf->Core__DOT__decode__DOT__inst 
                                                >> 0xfU)))
                                      ? ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard)
                                          ? vlSelf->Core__DOT__execute__DOT__alu_io_alu_out
                                          : ((IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard)
                                              ? vlSelf->Core__DOT__mem_io_mem_rd_data
                                              : ((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
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
                                      : 0ULL)),64);
        tracep->fullQData(oldp+202,(((0U != (0x1fU 
                                             & (vlSelf->Core__DOT__decode__DOT__inst 
                                                >> 0x14U)))
                                      ? ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard)
                                          ? vlSelf->Core__DOT__execute__DOT__alu_io_alu_out
                                          : ((IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard)
                                              ? vlSelf->Core__DOT__mem_io_mem_rd_data
                                              : ((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
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
                                      : 0ULL)),64);
        tracep->fullBit(oldp+204,(((~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)) 
                                   & (((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                       | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                      & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)))));
        tracep->fullBit(oldp+205,(((~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)) 
                                   & ((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                      & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)))));
        tracep->fullQData(oldp+206,(((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                      ? vlSelf->Core__DOT__mem__DOT___ld_data_T_15
                                      : 0ULL)),64);
        tracep->fullQData(oldp+208,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                      ? ((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                          ? vlSelf->Core__DOT__mem__DOT__ld_data_raw
                                          : vlSelf->Core__DOT__mem__DOT___ld_data_u_T_7)
                                      : 0ULL)),64);
        tracep->fullQData(oldp+210,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                      ? ((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                          ? ((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                              ? vlSelf->Core__DOT__mem__DOT__ld_data_raw
                                              : vlSelf->Core__DOT__mem__DOT___ld_data_u_T_7)
                                          : 0ULL) : 
                                     ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                       ? ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                           ? vlSelf->Core__DOT__mem__DOT___ld_data_T_15
                                           : 0ULL) : 0ULL))),64);
        tracep->fullBit(oldp+212,((1U & (~ (IData)(vlSelf->Core__DOT__decode__DOT__stall)))));
        tracep->fullBit(oldp+213,((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))));
        tracep->fullQData(oldp+214,(vlSelf->Core__DOT__mem_io_mem_rd_data),64);
        tracep->fullBit(oldp+216,(vlSelf->Core__DOT__decode__DOT__stall));
        tracep->fullBit(oldp+217,(vlSelf->Core__DOT__mem__DOT__req_wait));
        tracep->fullQData(oldp+218,(vlSelf->Core__DOT__mem__DOT__ld_data_raw),64);
        tracep->fullQData(oldp+220,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                    >> 7U)))
                                      ? 0xffffffffffffffULL
                                      : 0ULL)),56);
        tracep->fullCData(oldp+222,((0xffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),8);
        tracep->fullQData(oldp+223,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                    >> 0xfU)))
                                      ? 0xffffffffffffULL
                                      : 0ULL)),48);
        tracep->fullSData(oldp+225,((0xffffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),16);
        tracep->fullIData(oldp+226,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+227,((IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)),32);
        tracep->fullBit(oldp+228,(vlSelf->clock));
        tracep->fullBit(oldp+229,(vlSelf->reset));
        tracep->fullIData(oldp+230,(vlSelf->io_imem_raddr),32);
        tracep->fullIData(oldp+231,(vlSelf->io_imem_waddr),32);
        tracep->fullQData(oldp+232,(vlSelf->io_imem_wdata),64);
        tracep->fullBit(oldp+234,(vlSelf->io_imem_ren));
        tracep->fullBit(oldp+235,(vlSelf->io_imem_wen));
        tracep->fullCData(oldp+236,(vlSelf->io_imem_wmask),8);
        tracep->fullQData(oldp+237,(vlSelf->io_imem_rdata),64);
        tracep->fullBit(oldp+239,(vlSelf->io_imem_read_ok));
        tracep->fullBit(oldp+240,(vlSelf->io_imem_write_ok));
        tracep->fullIData(oldp+241,(vlSelf->io_dmem_raddr),32);
        tracep->fullIData(oldp+242,(vlSelf->io_dmem_waddr),32);
        tracep->fullQData(oldp+243,(vlSelf->io_dmem_wdata),64);
        tracep->fullBit(oldp+245,(vlSelf->io_dmem_ren));
        tracep->fullBit(oldp+246,(vlSelf->io_dmem_wen));
        tracep->fullCData(oldp+247,(vlSelf->io_dmem_wmask),8);
        tracep->fullQData(oldp+248,(vlSelf->io_dmem_rdata),64);
        tracep->fullBit(oldp+250,(vlSelf->io_dmem_read_ok));
        tracep->fullBit(oldp+251,(vlSelf->io_dmem_write_ok));
        tracep->fullIData(oldp+252,(vlSelf->io_commit_pc),32);
        tracep->fullQData(oldp+253,(vlSelf->io_regs_out_0),64);
        tracep->fullQData(oldp+255,(vlSelf->io_regs_out_1),64);
        tracep->fullQData(oldp+257,(vlSelf->io_regs_out_2),64);
        tracep->fullQData(oldp+259,(vlSelf->io_regs_out_3),64);
        tracep->fullQData(oldp+261,(vlSelf->io_regs_out_4),64);
        tracep->fullQData(oldp+263,(vlSelf->io_regs_out_5),64);
        tracep->fullQData(oldp+265,(vlSelf->io_regs_out_6),64);
        tracep->fullQData(oldp+267,(vlSelf->io_regs_out_7),64);
        tracep->fullQData(oldp+269,(vlSelf->io_regs_out_8),64);
        tracep->fullQData(oldp+271,(vlSelf->io_regs_out_9),64);
        tracep->fullQData(oldp+273,(vlSelf->io_regs_out_10),64);
        tracep->fullQData(oldp+275,(vlSelf->io_regs_out_11),64);
        tracep->fullQData(oldp+277,(vlSelf->io_regs_out_12),64);
        tracep->fullQData(oldp+279,(vlSelf->io_regs_out_13),64);
        tracep->fullQData(oldp+281,(vlSelf->io_regs_out_14),64);
        tracep->fullQData(oldp+283,(vlSelf->io_regs_out_15),64);
        tracep->fullQData(oldp+285,(vlSelf->io_regs_out_16),64);
        tracep->fullQData(oldp+287,(vlSelf->io_regs_out_17),64);
        tracep->fullQData(oldp+289,(vlSelf->io_regs_out_18),64);
        tracep->fullQData(oldp+291,(vlSelf->io_regs_out_19),64);
        tracep->fullQData(oldp+293,(vlSelf->io_regs_out_20),64);
        tracep->fullQData(oldp+295,(vlSelf->io_regs_out_21),64);
        tracep->fullQData(oldp+297,(vlSelf->io_regs_out_22),64);
        tracep->fullQData(oldp+299,(vlSelf->io_regs_out_23),64);
        tracep->fullQData(oldp+301,(vlSelf->io_regs_out_24),64);
        tracep->fullQData(oldp+303,(vlSelf->io_regs_out_25),64);
        tracep->fullQData(oldp+305,(vlSelf->io_regs_out_26),64);
        tracep->fullQData(oldp+307,(vlSelf->io_regs_out_27),64);
        tracep->fullQData(oldp+309,(vlSelf->io_regs_out_28),64);
        tracep->fullQData(oldp+311,(vlSelf->io_regs_out_29),64);
        tracep->fullQData(oldp+313,(vlSelf->io_regs_out_30),64);
        tracep->fullQData(oldp+315,(vlSelf->io_regs_out_31),64);
        tracep->fullQData(oldp+317,(vlSelf->io_regs_in_0),64);
        tracep->fullQData(oldp+319,(vlSelf->io_regs_in_1),64);
        tracep->fullQData(oldp+321,(vlSelf->io_regs_in_2),64);
        tracep->fullQData(oldp+323,(vlSelf->io_regs_in_3),64);
        tracep->fullQData(oldp+325,(vlSelf->io_regs_in_4),64);
        tracep->fullQData(oldp+327,(vlSelf->io_regs_in_5),64);
        tracep->fullQData(oldp+329,(vlSelf->io_regs_in_6),64);
        tracep->fullQData(oldp+331,(vlSelf->io_regs_in_7),64);
        tracep->fullQData(oldp+333,(vlSelf->io_regs_in_8),64);
        tracep->fullQData(oldp+335,(vlSelf->io_regs_in_9),64);
        tracep->fullQData(oldp+337,(vlSelf->io_regs_in_10),64);
        tracep->fullQData(oldp+339,(vlSelf->io_regs_in_11),64);
        tracep->fullQData(oldp+341,(vlSelf->io_regs_in_12),64);
        tracep->fullQData(oldp+343,(vlSelf->io_regs_in_13),64);
        tracep->fullQData(oldp+345,(vlSelf->io_regs_in_14),64);
        tracep->fullQData(oldp+347,(vlSelf->io_regs_in_15),64);
        tracep->fullQData(oldp+349,(vlSelf->io_regs_in_16),64);
        tracep->fullQData(oldp+351,(vlSelf->io_regs_in_17),64);
        tracep->fullQData(oldp+353,(vlSelf->io_regs_in_18),64);
        tracep->fullQData(oldp+355,(vlSelf->io_regs_in_19),64);
        tracep->fullQData(oldp+357,(vlSelf->io_regs_in_20),64);
        tracep->fullQData(oldp+359,(vlSelf->io_regs_in_21),64);
        tracep->fullQData(oldp+361,(vlSelf->io_regs_in_22),64);
        tracep->fullQData(oldp+363,(vlSelf->io_regs_in_23),64);
        tracep->fullQData(oldp+365,(vlSelf->io_regs_in_24),64);
        tracep->fullQData(oldp+367,(vlSelf->io_regs_in_25),64);
        tracep->fullQData(oldp+369,(vlSelf->io_regs_in_26),64);
        tracep->fullQData(oldp+371,(vlSelf->io_regs_in_27),64);
        tracep->fullQData(oldp+373,(vlSelf->io_regs_in_28),64);
        tracep->fullQData(oldp+375,(vlSelf->io_regs_in_29),64);
        tracep->fullQData(oldp+377,(vlSelf->io_regs_in_30),64);
        tracep->fullQData(oldp+379,(vlSelf->io_regs_in_31),64);
        tracep->fullIData(oldp+381,(vlSelf->io_pc_in),32);
        tracep->fullBit(oldp+382,(vlSelf->io_write_regs));
        tracep->fullBit(oldp+383,(vlSelf->io_commit));
        tracep->fullIData(oldp+384,((IData)(vlSelf->io_imem_rdata)),32);
        tracep->fullBit(oldp+385,((1U & (~ (IData)(vlSelf->io_imem_read_ok)))));
        tracep->fullBit(oldp+386,((1U & ((~ (IData)(vlSelf->io_imem_read_ok)) 
                                         | (IData)(vlSelf->Core__DOT__decode__DOT__stall)))));
        tracep->fullBit(oldp+387,(1U));
    }
}
