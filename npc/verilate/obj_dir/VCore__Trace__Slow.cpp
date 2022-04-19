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
        tracep->declBit(c+169,"clock", false,-1);
        tracep->declBit(c+170,"reset", false,-1);
        tracep->declBus(c+171,"io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+172,"io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+173,"io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+175,"io_imem_ren", false,-1);
        tracep->declBit(c+176,"io_imem_wen", false,-1);
        tracep->declBus(c+177,"io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+178,"io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+180,"io_imem_read_ok", false,-1);
        tracep->declBit(c+181,"io_imem_write_ok", false,-1);
        tracep->declBus(c+182,"io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+183,"io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+184,"io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+186,"io_dmem_ren", false,-1);
        tracep->declBit(c+187,"io_dmem_wen", false,-1);
        tracep->declBus(c+188,"io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+189,"io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+191,"io_dmem_read_ok", false,-1);
        tracep->declBit(c+192,"io_dmem_write_ok", false,-1);
        tracep->declQuad(c+193,"io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+195,"io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+197,"io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+199,"io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+201,"io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+203,"io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+205,"io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+207,"io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+209,"io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+211,"io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+213,"io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+215,"io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+217,"io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+219,"io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+221,"io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+223,"io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+225,"io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+227,"io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+229,"io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+231,"io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+233,"io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+235,"io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+237,"io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+239,"io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+241,"io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+243,"io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+245,"io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+247,"io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+249,"io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+251,"io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+253,"io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+255,"io_regs_31", false,-1, 63,0);
        tracep->declBit(c+169,"Core clock", false,-1);
        tracep->declBit(c+170,"Core reset", false,-1);
        tracep->declBus(c+171,"Core io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+172,"Core io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+173,"Core io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+175,"Core io_imem_ren", false,-1);
        tracep->declBit(c+176,"Core io_imem_wen", false,-1);
        tracep->declBus(c+177,"Core io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+178,"Core io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+180,"Core io_imem_read_ok", false,-1);
        tracep->declBit(c+181,"Core io_imem_write_ok", false,-1);
        tracep->declBus(c+182,"Core io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+183,"Core io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+184,"Core io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+186,"Core io_dmem_ren", false,-1);
        tracep->declBit(c+187,"Core io_dmem_wen", false,-1);
        tracep->declBus(c+188,"Core io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+189,"Core io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+191,"Core io_dmem_read_ok", false,-1);
        tracep->declBit(c+192,"Core io_dmem_write_ok", false,-1);
        tracep->declQuad(c+193,"Core io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+195,"Core io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+197,"Core io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+199,"Core io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+201,"Core io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+203,"Core io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+205,"Core io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+207,"Core io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+209,"Core io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+211,"Core io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+213,"Core io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+215,"Core io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+217,"Core io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+219,"Core io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+221,"Core io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+223,"Core io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+225,"Core io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+227,"Core io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+229,"Core io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+231,"Core io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+233,"Core io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+235,"Core io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+237,"Core io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+239,"Core io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+241,"Core io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+243,"Core io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+245,"Core io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+247,"Core io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+249,"Core io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+251,"Core io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+253,"Core io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+255,"Core io_regs_31", false,-1, 63,0);
        tracep->declBit(c+169,"Core fetch_clock", false,-1);
        tracep->declBit(c+170,"Core fetch_reset", false,-1);
        tracep->declBus(c+1,"Core fetch_io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+257,"Core fetch_io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+180,"Core fetch_io_imem_resp_bits_rvalid", false,-1);
        tracep->declBus(c+2,"Core fetch_io_imem_resp_bits_old_pc", false,-1, 31,0);
        tracep->declBit(c+260,"Core fetch_io_out_ready", false,-1);
        tracep->declBit(c+260,"Core fetch_io_out_valid", false,-1);
        tracep->declBus(c+2,"Core fetch_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+257,"Core fetch_io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+258,"Core fetch_io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+3,"Core fetch_io_if_flush", false,-1);
        tracep->declBus(c+4,"Core fetch_io_p_npc", false,-1, 31,0);
        tracep->declBus(c+5,"Core fetch_io_jmp_packet_i_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+3,"Core fetch_io_jmp_packet_i_mis", false,-1);
        tracep->declBit(c+169,"Core decode_clock", false,-1);
        tracep->declBit(c+170,"Core decode_reset", false,-1);
        tracep->declBit(c+260,"Core decode_io_in_ready", false,-1);
        tracep->declBus(c+2,"Core decode_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+257,"Core decode_io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+258,"Core decode_io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+260,"Core decode_io_out_ready", false,-1);
        tracep->declBit(c+260,"Core decode_io_out_valid", false,-1);
        tracep->declBit(c+6,"Core decode_io_out_bits_valid", false,-1);
        tracep->declBus(c+7,"Core decode_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+8,"Core decode_io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+9,"Core decode_io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+10,"Core decode_io_out_bits_jmp_code", false,-1, 3,0);
        tracep->declBit(c+11,"Core decode_io_out_bits_w_type", false,-1);
        tracep->declBus(c+12,"Core decode_io_out_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+13,"Core decode_io_out_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+14,"Core decode_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+15,"Core decode_io_out_bits_rd_en", false,-1);
        tracep->declBus(c+16,"Core decode_io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+3,"Core decode_io_id_flush", false,-1);
        tracep->declBit(c+17,"Core decode_io_ren1", false,-1);
        tracep->declBus(c+18,"Core decode_io_raddr1", false,-1, 4,0);
        tracep->declBit(c+19,"Core decode_io_ren2", false,-1);
        tracep->declBus(c+20,"Core decode_io_raddr2", false,-1, 4,0);
        tracep->declBit(c+21,"Core decode_io_is_ebreak", false,-1);
        tracep->declQuad(c+22,"Core decode_io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+24,"Core decode_io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+26,"Core decode_io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+28,"Core decode_io_rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+4,"Core decode_io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+30,"Core decode_io_p_npc_o", false,-1, 31,0);
        tracep->declBit(c+169,"Core regfile_clock", false,-1);
        tracep->declBit(c+170,"Core regfile_reset", false,-1);
        tracep->declBit(c+17,"Core regfile_io_ren1", false,-1);
        tracep->declBus(c+18,"Core regfile_io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+22,"Core regfile_io_rdata1", false,-1, 63,0);
        tracep->declBit(c+19,"Core regfile_io_ren2", false,-1);
        tracep->declBus(c+20,"Core regfile_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+24,"Core regfile_io_rdata2", false,-1, 63,0);
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
        tracep->declBit(c+103,"Core regfile_io_mem_rd_en", false,-1);
        tracep->declBus(c+104,"Core regfile_io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+105,"Core regfile_io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+169,"Core execute_clock", false,-1);
        tracep->declBit(c+170,"Core execute_reset", false,-1);
        tracep->declBit(c+260,"Core execute_io_in_ready", false,-1);
        tracep->declBit(c+6,"Core execute_io_in_bits_valid", false,-1);
        tracep->declBus(c+7,"Core execute_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+8,"Core execute_io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+9,"Core execute_io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+10,"Core execute_io_in_bits_jmp_code", false,-1, 3,0);
        tracep->declBit(c+11,"Core execute_io_in_bits_w_type", false,-1);
        tracep->declBus(c+12,"Core execute_io_in_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+13,"Core execute_io_in_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+14,"Core execute_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+15,"Core execute_io_in_bits_rd_en", false,-1);
        tracep->declBus(c+16,"Core execute_io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+260,"Core execute_io_out_valid", false,-1);
        tracep->declBus(c+107,"Core execute_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+108,"Core execute_io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+109,"Core execute_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+99,"Core execute_io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+26,"Core execute_io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+28,"Core execute_io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+101,"Core execute_io_ex_data_o", false,-1, 63,0);
        tracep->declBit(c+21,"Core execute_io_is_ebreak_i", false,-1);
        tracep->declBit(c+110,"Core execute_io_is_ebreak_o", false,-1);
        tracep->declBit(c+99,"Core execute_io_ex_rd_en", false,-1);
        tracep->declBus(c+100,"Core execute_io_ex_rd_addr", false,-1, 31,0);
        tracep->declBus(c+30,"Core execute_io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+5,"Core execute_io_jmp_packet_o_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+3,"Core execute_io_jmp_packet_o_mis", false,-1);
        tracep->declBit(c+169,"Core mem_clock", false,-1);
        tracep->declBit(c+170,"Core mem_reset", false,-1);
        tracep->declBit(c+260,"Core mem_io_in_ready", false,-1);
        tracep->declBus(c+107,"Core mem_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+108,"Core mem_io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+109,"Core mem_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+99,"Core mem_io_in_bits_rd_en", false,-1);
        tracep->declBus(c+111,"Core mem_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+112,"Core mem_io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+101,"Core mem_io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+32,"Core mem_io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+31,"Core mem_io_wen_o", false,-1);
        tracep->declQuad(c+33,"Core mem_io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+110,"Core mem_io_is_ebreak_i", false,-1);
        tracep->declBit(c+113,"Core mem_io_is_ebreak_o", false,-1);
        tracep->declBit(c+103,"Core mem_io_mem_rd_en", false,-1);
        tracep->declBus(c+104,"Core mem_io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+105,"Core mem_io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+169,"Core wb_dpi_clk", false,-1);
        tracep->declBus(c+112,"Core wb_dpi_inst", false,-1, 31,0);
        tracep->declBus(c+111,"Core wb_dpi_pc", false,-1, 31,0);
        tracep->declBit(c+113,"Core wb_dpi_ebreak", false,-1);
        tracep->declBus(c+2,"Core fetch_io_imem_resp_bits_old_pc_REG", false,-1, 31,0);
        tracep->declBit(c+169,"Core fetch clock", false,-1);
        tracep->declBit(c+170,"Core fetch reset", false,-1);
        tracep->declBus(c+1,"Core fetch io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+257,"Core fetch io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+180,"Core fetch io_imem_resp_bits_rvalid", false,-1);
        tracep->declBus(c+2,"Core fetch io_imem_resp_bits_old_pc", false,-1, 31,0);
        tracep->declBit(c+260,"Core fetch io_out_ready", false,-1);
        tracep->declBit(c+260,"Core fetch io_out_valid", false,-1);
        tracep->declBus(c+2,"Core fetch io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+257,"Core fetch io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+258,"Core fetch io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+3,"Core fetch io_if_flush", false,-1);
        tracep->declBus(c+4,"Core fetch io_p_npc", false,-1, 31,0);
        tracep->declBus(c+5,"Core fetch io_jmp_packet_i_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+3,"Core fetch io_jmp_packet_i_mis", false,-1);
        tracep->declBus(c+114,"Core fetch pc", false,-1, 31,0);
        tracep->declBus(c+115,"Core fetch pc_base_hi", false,-1, 29,0);
        tracep->declBus(c+1,"Core fetch pc_base", false,-1, 31,0);
        tracep->declBus(c+116,"Core fetch npc_s", false,-1, 31,0);
        tracep->declBit(c+259,"Core fetch stall", false,-1);
        tracep->declBus(c+4,"Core fetch io_p_npc_REG", false,-1, 31,0);
        tracep->declBit(c+169,"Core decode clock", false,-1);
        tracep->declBit(c+170,"Core decode reset", false,-1);
        tracep->declBit(c+260,"Core decode io_in_ready", false,-1);
        tracep->declBus(c+2,"Core decode io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+257,"Core decode io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+258,"Core decode io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+260,"Core decode io_out_ready", false,-1);
        tracep->declBit(c+260,"Core decode io_out_valid", false,-1);
        tracep->declBit(c+6,"Core decode io_out_bits_valid", false,-1);
        tracep->declBus(c+7,"Core decode io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+8,"Core decode io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+9,"Core decode io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+10,"Core decode io_out_bits_jmp_code", false,-1, 3,0);
        tracep->declBit(c+11,"Core decode io_out_bits_w_type", false,-1);
        tracep->declBus(c+12,"Core decode io_out_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+13,"Core decode io_out_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+14,"Core decode io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+15,"Core decode io_out_bits_rd_en", false,-1);
        tracep->declBus(c+16,"Core decode io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+3,"Core decode io_id_flush", false,-1);
        tracep->declBit(c+17,"Core decode io_ren1", false,-1);
        tracep->declBus(c+18,"Core decode io_raddr1", false,-1, 4,0);
        tracep->declBit(c+19,"Core decode io_ren2", false,-1);
        tracep->declBus(c+20,"Core decode io_raddr2", false,-1, 4,0);
        tracep->declBit(c+21,"Core decode io_is_ebreak", false,-1);
        tracep->declQuad(c+22,"Core decode io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+24,"Core decode io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+26,"Core decode io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+28,"Core decode io_rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+4,"Core decode io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+30,"Core decode io_p_npc_o", false,-1, 31,0);
        tracep->declBus(c+7,"Core decode pc", false,-1, 31,0);
        tracep->declBus(c+8,"Core decode inst", false,-1, 31,0);
        tracep->declBit(c+6,"Core decode inst_valid", false,-1);
        tracep->declQuad(c+26,"Core decode io_rs1_data_o_REG", false,-1, 63,0);
        tracep->declQuad(c+28,"Core decode io_rs2_data_o_REG", false,-1, 63,0);
        tracep->declBit(c+11,"Core decode c0_0", false,-1);
        tracep->declBus(c+117,"Core decode c0_1", false,-1, 2,0);
        tracep->declBus(c+118,"Core decode c0_2", false,-1, 2,0);
        tracep->declBit(c+119,"Core decode c0_3", false,-1);
        tracep->declBus(c+120,"Core decode c0_4", false,-1, 2,0);
        tracep->declBit(c+21,"Core decode io_is_ebreak_REG", false,-1);
        tracep->declBus(c+30,"Core decode io_p_npc_o_REG", false,-1, 31,0);
        tracep->declBus(c+121,"Core decode imm_i_hi", false,-1, 20,0);
        tracep->declBus(c+122,"Core decode imm_i_lo", false,-1, 10,0);
        tracep->declBus(c+123,"Core decode imm_i", false,-1, 31,0);
        tracep->declBus(c+124,"Core decode imm_s_hi_lo", false,-1, 5,0);
        tracep->declBus(c+125,"Core decode imm_s", false,-1, 31,0);
        tracep->declBus(c+126,"Core decode imm_b_hi_hi_hi", false,-1, 19,0);
        tracep->declBit(c+127,"Core decode imm_b_hi_hi_lo", false,-1);
        tracep->declBus(c+128,"Core decode imm_b_lo_hi", false,-1, 3,0);
        tracep->declBus(c+129,"Core decode imm_b", false,-1, 31,0);
        tracep->declBus(c+130,"Core decode imm_u_hi", false,-1, 19,0);
        tracep->declBus(c+131,"Core decode imm_u", false,-1, 31,0);
        tracep->declBus(c+132,"Core decode imm_j_hi_hi_hi", false,-1, 11,0);
        tracep->declBus(c+133,"Core decode imm_j_hi_hi_lo", false,-1, 7,0);
        tracep->declBit(c+134,"Core decode imm_j_hi_lo", false,-1);
        tracep->declBus(c+135,"Core decode imm_j_lo_hi", false,-1, 9,0);
        tracep->declBus(c+136,"Core decode imm_j", false,-1, 31,0);
        tracep->declBus(c+137,"Core decode imm_shamt_lo_1", false,-1, 5,0);
        tracep->declBus(c+138,"Core decode imm_shamt", false,-1, 31,0);
        tracep->declBus(c+139,"Core decode imm_csr", false,-1, 31,0);
        tracep->declBit(c+261,"Core decode stall", false,-1);
        tracep->declBit(c+169,"Core regfile clock", false,-1);
        tracep->declBit(c+170,"Core regfile reset", false,-1);
        tracep->declBit(c+17,"Core regfile io_ren1", false,-1);
        tracep->declBus(c+18,"Core regfile io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+22,"Core regfile io_rdata1", false,-1, 63,0);
        tracep->declBit(c+19,"Core regfile io_ren2", false,-1);
        tracep->declBus(c+20,"Core regfile io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+24,"Core regfile io_rdata2", false,-1, 63,0);
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
        tracep->declBit(c+103,"Core regfile io_mem_rd_en", false,-1);
        tracep->declBus(c+104,"Core regfile io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+105,"Core regfile io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+140,"Core regfile ex_rs1_hazard", false,-1);
        tracep->declBit(c+141,"Core regfile ex_rs2_hazard", false,-1);
        tracep->declBit(c+142,"Core regfile mem_rs1_hazard", false,-1);
        tracep->declBit(c+143,"Core regfile mem_rs2_hazard", false,-1);
        tracep->declBit(c+144,"Core regfile wb_rs1_hazard", false,-1);
        tracep->declBit(c+145,"Core regfile wb_rs2_hazard", false,-1);
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
        tracep->declBit(c+169,"Core execute clock", false,-1);
        tracep->declBit(c+170,"Core execute reset", false,-1);
        tracep->declBit(c+260,"Core execute io_in_ready", false,-1);
        tracep->declBit(c+6,"Core execute io_in_bits_valid", false,-1);
        tracep->declBus(c+7,"Core execute io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+8,"Core execute io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+9,"Core execute io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+10,"Core execute io_in_bits_jmp_code", false,-1, 3,0);
        tracep->declBit(c+11,"Core execute io_in_bits_w_type", false,-1);
        tracep->declBus(c+12,"Core execute io_in_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+13,"Core execute io_in_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+14,"Core execute io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+15,"Core execute io_in_bits_rd_en", false,-1);
        tracep->declBus(c+16,"Core execute io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+260,"Core execute io_out_valid", false,-1);
        tracep->declBus(c+107,"Core execute io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+108,"Core execute io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+109,"Core execute io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+99,"Core execute io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+26,"Core execute io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+28,"Core execute io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+101,"Core execute io_ex_data_o", false,-1, 63,0);
        tracep->declBit(c+21,"Core execute io_is_ebreak_i", false,-1);
        tracep->declBit(c+110,"Core execute io_is_ebreak_o", false,-1);
        tracep->declBit(c+99,"Core execute io_ex_rd_en", false,-1);
        tracep->declBus(c+100,"Core execute io_ex_rd_addr", false,-1, 31,0);
        tracep->declBus(c+30,"Core execute io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+5,"Core execute io_jmp_packet_o_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+3,"Core execute io_jmp_packet_o_mis", false,-1);
        tracep->declQuad(c+146,"Core execute alu_io_in1", false,-1, 63,0);
        tracep->declQuad(c+148,"Core execute alu_io_in2", false,-1, 63,0);
        tracep->declBus(c+150,"Core execute alu_io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+151,"Core execute alu_io_wtype_i", false,-1);
        tracep->declQuad(c+101,"Core execute alu_io_alu_out", false,-1, 63,0);
        tracep->declBit(c+152,"Core execute alu_io_jmp", false,-1);
        tracep->declBus(c+153,"Core execute alu_io_jmp_code", false,-1, 3,0);
        tracep->declBus(c+154,"Core execute alu_io_imm", false,-1, 31,0);
        tracep->declBus(c+107,"Core execute alu_io_pc_i", false,-1, 31,0);
        tracep->declBus(c+155,"Core execute alu_io_jmp_pc", false,-1, 31,0);
        tracep->declBit(c+261,"Core execute stall", false,-1);
        tracep->declBit(c+110,"Core execute io_is_ebreak_o_REG", false,-1);
        tracep->declBit(c+156,"Core execute ex_reg_decodeop_valid", false,-1);
        tracep->declBus(c+107,"Core execute ex_reg_decodeop_pc", false,-1, 31,0);
        tracep->declBus(c+108,"Core execute ex_reg_decodeop_inst", false,-1, 31,0);
        tracep->declBus(c+150,"Core execute ex_reg_decodeop_alu_code", false,-1, 3,0);
        tracep->declBus(c+153,"Core execute ex_reg_decodeop_jmp_code", false,-1, 3,0);
        tracep->declBit(c+151,"Core execute ex_reg_decodeop_w_type", false,-1);
        tracep->declBus(c+157,"Core execute ex_reg_decodeop_rs1_src", false,-1, 2,0);
        tracep->declBus(c+158,"Core execute ex_reg_decodeop_rs2_src", false,-1, 2,0);
        tracep->declBus(c+109,"Core execute ex_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+99,"Core execute ex_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+154,"Core execute ex_reg_decodeop_imm", false,-1, 31,0);
        tracep->declBus(c+159,"Core execute rs1_temp_hi", false,-1, 31,0);
        tracep->declBus(c+160,"Core execute rs1_temp_lo", false,-1, 31,0);
        tracep->declBus(c+161,"Core execute real_npc", false,-1, 31,0);
        tracep->declQuad(c+146,"Core execute alu io_in1", false,-1, 63,0);
        tracep->declQuad(c+148,"Core execute alu io_in2", false,-1, 63,0);
        tracep->declBus(c+150,"Core execute alu io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+151,"Core execute alu io_wtype_i", false,-1);
        tracep->declQuad(c+101,"Core execute alu io_alu_out", false,-1, 63,0);
        tracep->declBit(c+152,"Core execute alu io_jmp", false,-1);
        tracep->declBus(c+153,"Core execute alu io_jmp_code", false,-1, 3,0);
        tracep->declBus(c+154,"Core execute alu io_imm", false,-1, 31,0);
        tracep->declBus(c+107,"Core execute alu io_pc_i", false,-1, 31,0);
        tracep->declBus(c+155,"Core execute alu io_jmp_pc", false,-1, 31,0);
        tracep->declQuad(c+162,"Core execute alu out0", false,-1, 63,0);
        tracep->declBus(c+164,"Core execute alu out1_lo", false,-1, 31,0);
        tracep->declBus(c+165,"Core execute alu out1_hi", false,-1, 31,0);
        tracep->declBit(c+169,"Core mem clock", false,-1);
        tracep->declBit(c+170,"Core mem reset", false,-1);
        tracep->declBit(c+260,"Core mem io_in_ready", false,-1);
        tracep->declBus(c+107,"Core mem io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+108,"Core mem io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+109,"Core mem io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+99,"Core mem io_in_bits_rd_en", false,-1);
        tracep->declBus(c+111,"Core mem io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+112,"Core mem io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+101,"Core mem io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+32,"Core mem io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+31,"Core mem io_wen_o", false,-1);
        tracep->declQuad(c+33,"Core mem io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+110,"Core mem io_is_ebreak_i", false,-1);
        tracep->declBit(c+113,"Core mem io_is_ebreak_o", false,-1);
        tracep->declBit(c+103,"Core mem io_mem_rd_en", false,-1);
        tracep->declBus(c+104,"Core mem io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+105,"Core mem io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+113,"Core mem io_is_ebreak_o_REG", false,-1);
        tracep->declBus(c+111,"Core mem io_out_bits_REG_pc", false,-1, 31,0);
        tracep->declBus(c+112,"Core mem io_out_bits_REG_inst", false,-1, 31,0);
        tracep->declBus(c+166,"Core mem mem_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+103,"Core mem mem_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+166,"Core mem waddr", false,-1, 4,0);
        tracep->declBit(c+103,"Core mem wen", false,-1);
        tracep->declQuad(c+105,"Core mem wdata", false,-1, 63,0);
        tracep->declBus(c+32,"Core mem io_waddr_o_REG", false,-1, 4,0);
        tracep->declBit(c+31,"Core mem io_wen_o_REG", false,-1);
        tracep->declQuad(c+33,"Core mem io_wdata_o_REG", false,-1, 63,0);
        tracep->declBit(c+169,"Core wb_dpi clk", false,-1);
        tracep->declBus(c+112,"Core wb_dpi inst", false,-1, 31,0);
        tracep->declBus(c+111,"Core wb_dpi pc", false,-1, 31,0);
        tracep->declBit(c+113,"Core wb_dpi ebreak", false,-1);
        tracep->declBus(c+167,"Core wb_dpi inst1", false,-1, 31,0);
        tracep->declBus(c+168,"Core wb_dpi pc1", false,-1, 31,0);
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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,((0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc)),32);
        tracep->fullIData(oldp+2,(vlSelf->Core__DOT__fetch_io_imem_resp_bits_old_pc_REG),32);
        tracep->fullBit(oldp+3,(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis));
        tracep->fullIData(oldp+4,(vlSelf->Core__DOT__fetch__DOT__io_p_npc_REG),32);
        tracep->fullIData(oldp+5,(vlSelf->Core__DOT__execute_io_jmp_packet_o_jmp_npc),32);
        tracep->fullBit(oldp+6,(vlSelf->Core__DOT__decode__DOT__inst_valid));
        tracep->fullIData(oldp+7,(vlSelf->Core__DOT__decode__DOT__pc),32);
        tracep->fullIData(oldp+8,(vlSelf->Core__DOT__decode__DOT__inst),32);
        tracep->fullCData(oldp+9,(((0x37U == (0x7fU 
                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                    ? 1U : ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 1U : 
                                            ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 0U : 
                                             ((0x67U 
                                               == (0x707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 0U
                                               : ((0x63U 
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
                                                     : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_295))))))))),4);
        tracep->fullCData(oldp+10,(((0x37U == (0x7fU 
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
        tracep->fullBit(oldp+11,(((0x37U != (0x7fU 
                                             & vlSelf->Core__DOT__decode__DOT__inst)) 
                                  & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_601))));
        tracep->fullCData(oldp+12,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 3U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_661))),3);
        tracep->fullCData(oldp+13,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 2U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_721))),3);
        tracep->fullCData(oldp+14,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 7U))),5);
        tracep->fullBit(oldp+15,(((IData)(vlSelf->Core__DOT__decode__DOT__inst_valid) 
                                  & (IData)(vlSelf->Core__DOT__decode__DOT__c0_3))));
        tracep->fullIData(oldp+16,(((7U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                                     ? (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU))
                                     : ((6U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                                         ? (((0x37U 
                                              != (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst)) 
                                             & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_601))
                                             ? (0x1fU 
                                                & (vlSelf->Core__DOT__decode__DOT__inst 
                                                   >> 0x14U))
                                             : (0x3fU 
                                                & (vlSelf->Core__DOT__decode__DOT__inst 
                                                   >> 0x14U)))
                                         : vlSelf->Core__DOT__decode__DOT___io_out_bits_imm_T_9))),32);
        tracep->fullBit(oldp+17,((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1))));
        tracep->fullCData(oldp+18,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0xfU))),5);
        tracep->fullBit(oldp+19,((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2))));
        tracep->fullCData(oldp+20,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+21,(vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG));
        tracep->fullQData(oldp+22,(((0U != (0x1fU & 
                                            (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0xfU)))
                                     ? ((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                          & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                             == (0x1fU 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 0xfU)))) 
                                         & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))
                                         ? vlSelf->Core__DOT__execute__DOT__alu_io_alu_out
                                         : ((((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en) 
                                              & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Core__DOT__decode__DOT__inst 
                                                     >> 0xfU)))) 
                                             & (1U 
                                                == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))
                                             ? vlSelf->Core__DOT__mem__DOT__wdata
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
        tracep->fullQData(oldp+24,(((0U != (0x1fU & 
                                            (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U)))
                                     ? ((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                          & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                             == (0x1fU 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 0x14U)))) 
                                         & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))
                                         ? vlSelf->Core__DOT__execute__DOT__alu_io_alu_out
                                         : ((((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en) 
                                              & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Core__DOT__decode__DOT__inst 
                                                     >> 0x14U)))) 
                                             & (1U 
                                                == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))
                                             ? vlSelf->Core__DOT__mem__DOT__wdata
                                             : ((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                                  & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Core__DOT__decode__DOT__inst 
                                                         >> 0x14U)))) 
                                                 & (1U 
                                                    == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))
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
        tracep->fullQData(oldp+26,(vlSelf->Core__DOT__decode__DOT__io_rs1_data_o_REG),64);
        tracep->fullQData(oldp+28,(vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG),64);
        tracep->fullIData(oldp+30,(vlSelf->Core__DOT__decode__DOT__io_p_npc_o_REG),32);
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
        tracep->fullBit(oldp+103,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en));
        tracep->fullIData(oldp+104,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr),32);
        tracep->fullQData(oldp+105,(vlSelf->Core__DOT__mem__DOT__wdata),64);
        tracep->fullIData(oldp+107,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc),32);
        tracep->fullIData(oldp+108,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst),32);
        tracep->fullCData(oldp+109,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),5);
        tracep->fullBit(oldp+110,(vlSelf->Core__DOT__execute__DOT__io_is_ebreak_o_REG));
        tracep->fullIData(oldp+111,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc),32);
        tracep->fullIData(oldp+112,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_inst),32);
        tracep->fullBit(oldp+113,(vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG));
        tracep->fullIData(oldp+114,(vlSelf->Core__DOT__fetch__DOT__pc),32);
        tracep->fullIData(oldp+115,((vlSelf->Core__DOT__fetch__DOT__pc 
                                     >> 2U)),30);
        tracep->fullIData(oldp+116,(((IData)(4U) + 
                                     (0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc))),32);
        tracep->fullCData(oldp+117,(vlSelf->Core__DOT__decode__DOT__c0_1),3);
        tracep->fullCData(oldp+118,(vlSelf->Core__DOT__decode__DOT__c0_2),3);
        tracep->fullBit(oldp+119,(vlSelf->Core__DOT__decode__DOT__c0_3));
        tracep->fullCData(oldp+120,(vlSelf->Core__DOT__decode__DOT__c0_4),3);
        tracep->fullIData(oldp+121,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0x1fffffU
                                      : 0U)),21);
        tracep->fullSData(oldp+122,((0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x14U))),11);
        tracep->fullIData(oldp+123,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0x1fffffU
                                        : 0U) << 0xbU) 
                                     | (0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))),32);
        tracep->fullCData(oldp+124,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0x19U))),6);
        tracep->fullIData(oldp+125,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0x1fffffU
                                        : 0U) << 0xbU) 
                                     | ((0x7e0U & (vlSelf->Core__DOT__decode__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 7U))))),32);
        tracep->fullIData(oldp+126,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0xfffffU
                                      : 0U)),20);
        tracep->fullBit(oldp+127,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 7U))));
        tracep->fullCData(oldp+128,((0xfU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 8U))),4);
        tracep->fullIData(oldp+129,(((((vlSelf->Core__DOT__decode__DOT__inst 
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
        tracep->fullIData(oldp+130,((vlSelf->Core__DOT__decode__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullIData(oldp+131,((0xfffff000U & vlSelf->Core__DOT__decode__DOT__inst)),32);
        tracep->fullSData(oldp+132,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0xfffU
                                      : 0U)),12);
        tracep->fullCData(oldp+133,((0xffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0xcU))),8);
        tracep->fullBit(oldp+134,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x14U))));
        tracep->fullSData(oldp+135,((0x3ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x15U))),10);
        tracep->fullIData(oldp+136,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0xfffU
                                        : 0U) << 0x14U) 
                                     | ((0xff000U & vlSelf->Core__DOT__decode__DOT__inst) 
                                        | ((0x800U 
                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))))),32);
        tracep->fullCData(oldp+137,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0x14U))),6);
        tracep->fullIData(oldp+138,((((0x37U != (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst)) 
                                      & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_601))
                                      ? (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U))
                                      : (0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))),32);
        tracep->fullIData(oldp+139,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0xfU))),32);
        tracep->fullBit(oldp+140,((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                    & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
        tracep->fullBit(oldp+141,((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                    & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
        tracep->fullBit(oldp+142,((((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
        tracep->fullBit(oldp+143,((((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
        tracep->fullBit(oldp+144,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
        tracep->fullBit(oldp+145,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
        tracep->fullQData(oldp+146,(vlSelf->Core__DOT__execute__DOT__alu_io_in1),64);
        tracep->fullQData(oldp+148,(vlSelf->Core__DOT__execute__DOT__alu_io_in2),64);
        tracep->fullCData(oldp+150,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code),4);
        tracep->fullBit(oldp+151,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type));
        tracep->fullBit(oldp+152,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp));
        tracep->fullCData(oldp+153,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code),4);
        tracep->fullIData(oldp+154,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm),32);
        tracep->fullIData(oldp+155,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc),32);
        tracep->fullBit(oldp+156,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid));
        tracep->fullCData(oldp+157,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src),3);
        tracep->fullCData(oldp+158,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src),3);
        tracep->fullIData(oldp+159,(((vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+160,(((IData)(4U) + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)),32);
        tracep->fullIData(oldp+161,(((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_jmp)
                                      ? vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc
                                      : ((IData)(4U) 
                                         + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc))),32);
        tracep->fullQData(oldp+162,(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0),64);
        tracep->fullIData(oldp+164,((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)),32);
        tracep->fullIData(oldp+165,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullCData(oldp+166,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr),5);
        tracep->fullIData(oldp+167,(vlSelf->Core__DOT__wb_dpi__DOT__inst1),32);
        tracep->fullIData(oldp+168,(vlSelf->Core__DOT__wb_dpi__DOT__pc1),32);
        tracep->fullBit(oldp+169,(vlSelf->clock));
        tracep->fullBit(oldp+170,(vlSelf->reset));
        tracep->fullIData(oldp+171,(vlSelf->io_imem_raddr),32);
        tracep->fullIData(oldp+172,(vlSelf->io_imem_waddr),32);
        tracep->fullQData(oldp+173,(vlSelf->io_imem_wdata),64);
        tracep->fullBit(oldp+175,(vlSelf->io_imem_ren));
        tracep->fullBit(oldp+176,(vlSelf->io_imem_wen));
        tracep->fullCData(oldp+177,(vlSelf->io_imem_wmask),8);
        tracep->fullQData(oldp+178,(vlSelf->io_imem_rdata),64);
        tracep->fullBit(oldp+180,(vlSelf->io_imem_read_ok));
        tracep->fullBit(oldp+181,(vlSelf->io_imem_write_ok));
        tracep->fullIData(oldp+182,(vlSelf->io_dmem_raddr),32);
        tracep->fullIData(oldp+183,(vlSelf->io_dmem_waddr),32);
        tracep->fullQData(oldp+184,(vlSelf->io_dmem_wdata),64);
        tracep->fullBit(oldp+186,(vlSelf->io_dmem_ren));
        tracep->fullBit(oldp+187,(vlSelf->io_dmem_wen));
        tracep->fullCData(oldp+188,(vlSelf->io_dmem_wmask),8);
        tracep->fullQData(oldp+189,(vlSelf->io_dmem_rdata),64);
        tracep->fullBit(oldp+191,(vlSelf->io_dmem_read_ok));
        tracep->fullBit(oldp+192,(vlSelf->io_dmem_write_ok));
        tracep->fullQData(oldp+193,(vlSelf->io_regs_0),64);
        tracep->fullQData(oldp+195,(vlSelf->io_regs_1),64);
        tracep->fullQData(oldp+197,(vlSelf->io_regs_2),64);
        tracep->fullQData(oldp+199,(vlSelf->io_regs_3),64);
        tracep->fullQData(oldp+201,(vlSelf->io_regs_4),64);
        tracep->fullQData(oldp+203,(vlSelf->io_regs_5),64);
        tracep->fullQData(oldp+205,(vlSelf->io_regs_6),64);
        tracep->fullQData(oldp+207,(vlSelf->io_regs_7),64);
        tracep->fullQData(oldp+209,(vlSelf->io_regs_8),64);
        tracep->fullQData(oldp+211,(vlSelf->io_regs_9),64);
        tracep->fullQData(oldp+213,(vlSelf->io_regs_10),64);
        tracep->fullQData(oldp+215,(vlSelf->io_regs_11),64);
        tracep->fullQData(oldp+217,(vlSelf->io_regs_12),64);
        tracep->fullQData(oldp+219,(vlSelf->io_regs_13),64);
        tracep->fullQData(oldp+221,(vlSelf->io_regs_14),64);
        tracep->fullQData(oldp+223,(vlSelf->io_regs_15),64);
        tracep->fullQData(oldp+225,(vlSelf->io_regs_16),64);
        tracep->fullQData(oldp+227,(vlSelf->io_regs_17),64);
        tracep->fullQData(oldp+229,(vlSelf->io_regs_18),64);
        tracep->fullQData(oldp+231,(vlSelf->io_regs_19),64);
        tracep->fullQData(oldp+233,(vlSelf->io_regs_20),64);
        tracep->fullQData(oldp+235,(vlSelf->io_regs_21),64);
        tracep->fullQData(oldp+237,(vlSelf->io_regs_22),64);
        tracep->fullQData(oldp+239,(vlSelf->io_regs_23),64);
        tracep->fullQData(oldp+241,(vlSelf->io_regs_24),64);
        tracep->fullQData(oldp+243,(vlSelf->io_regs_25),64);
        tracep->fullQData(oldp+245,(vlSelf->io_regs_26),64);
        tracep->fullQData(oldp+247,(vlSelf->io_regs_27),64);
        tracep->fullQData(oldp+249,(vlSelf->io_regs_28),64);
        tracep->fullQData(oldp+251,(vlSelf->io_regs_29),64);
        tracep->fullQData(oldp+253,(vlSelf->io_regs_30),64);
        tracep->fullQData(oldp+255,(vlSelf->io_regs_31),64);
        tracep->fullIData(oldp+257,((IData)(vlSelf->io_imem_rdata)),32);
        tracep->fullBit(oldp+258,(((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
                                   & (IData)(vlSelf->io_imem_read_ok))));
        tracep->fullBit(oldp+259,((1U & (~ (IData)(vlSelf->io_imem_read_ok)))));
        tracep->fullBit(oldp+260,(1U));
        tracep->fullBit(oldp+261,(0U));
    }
}
