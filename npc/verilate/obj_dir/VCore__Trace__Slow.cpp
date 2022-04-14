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
        tracep->declBit(c+106,"clock", false,-1);
        tracep->declBit(c+107,"reset", false,-1);
        tracep->declBus(c+108,"io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+109,"io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+110,"io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+112,"io_imem_ren", false,-1);
        tracep->declBit(c+113,"io_imem_wen", false,-1);
        tracep->declBus(c+114,"io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+115,"io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+117,"io_imem_read_ok", false,-1);
        tracep->declBit(c+118,"io_imem_write_ok", false,-1);
        tracep->declBus(c+119,"io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+120,"io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+121,"io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+123,"io_dmem_ren", false,-1);
        tracep->declBit(c+124,"io_dmem_wen", false,-1);
        tracep->declBus(c+125,"io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+126,"io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+128,"io_dmem_read_ok", false,-1);
        tracep->declBit(c+129,"io_dmem_write_ok", false,-1);
        tracep->declQuad(c+130,"io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+132,"io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+134,"io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+136,"io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+138,"io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+140,"io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+142,"io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+144,"io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+146,"io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+148,"io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+150,"io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+152,"io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+154,"io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+156,"io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+158,"io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+160,"io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+162,"io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+164,"io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+166,"io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+168,"io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+170,"io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+172,"io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+174,"io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+176,"io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+178,"io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+180,"io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+182,"io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+184,"io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+186,"io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+188,"io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+190,"io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+192,"io_regs_31", false,-1, 63,0);
        tracep->declBit(c+106,"Core clock", false,-1);
        tracep->declBit(c+107,"Core reset", false,-1);
        tracep->declBus(c+108,"Core io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+109,"Core io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+110,"Core io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+112,"Core io_imem_ren", false,-1);
        tracep->declBit(c+113,"Core io_imem_wen", false,-1);
        tracep->declBus(c+114,"Core io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+115,"Core io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+117,"Core io_imem_read_ok", false,-1);
        tracep->declBit(c+118,"Core io_imem_write_ok", false,-1);
        tracep->declBus(c+119,"Core io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+120,"Core io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+121,"Core io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+123,"Core io_dmem_ren", false,-1);
        tracep->declBit(c+124,"Core io_dmem_wen", false,-1);
        tracep->declBus(c+125,"Core io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+126,"Core io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+128,"Core io_dmem_read_ok", false,-1);
        tracep->declBit(c+129,"Core io_dmem_write_ok", false,-1);
        tracep->declQuad(c+130,"Core io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+132,"Core io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+134,"Core io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+136,"Core io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+138,"Core io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+140,"Core io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+142,"Core io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+144,"Core io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+146,"Core io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+148,"Core io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+150,"Core io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+152,"Core io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+154,"Core io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+156,"Core io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+158,"Core io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+160,"Core io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+162,"Core io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+164,"Core io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+166,"Core io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+168,"Core io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+170,"Core io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+172,"Core io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+174,"Core io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+176,"Core io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+178,"Core io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+180,"Core io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+182,"Core io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+184,"Core io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+186,"Core io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+188,"Core io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+190,"Core io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+192,"Core io_regs_31", false,-1, 63,0);
        tracep->declBit(c+106,"Core fetch_clock", false,-1);
        tracep->declBit(c+107,"Core fetch_reset", false,-1);
        tracep->declBus(c+1,"Core fetch_io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+194,"Core fetch_io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+117,"Core fetch_io_imem_resp_bits_rvalid", false,-1);
        tracep->declBit(c+196,"Core fetch_io_out_ready", false,-1);
        tracep->declBit(c+196,"Core fetch_io_out_valid", false,-1);
        tracep->declBus(c+194,"Core fetch_io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+106,"Core decode_clock", false,-1);
        tracep->declBit(c+107,"Core decode_reset", false,-1);
        tracep->declBit(c+196,"Core decode_io_in_ready", false,-1);
        tracep->declBus(c+194,"Core decode_io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+196,"Core decode_io_out_ready", false,-1);
        tracep->declBit(c+196,"Core decode_io_out_valid", false,-1);
        tracep->declBus(c+2,"Core decode_io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBit(c+3,"Core decode_io_out_bits_w_type", false,-1);
        tracep->declBus(c+4,"Core decode_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+5,"Core decode_io_out_bits_rd_en", false,-1);
        tracep->declBus(c+6,"Core decode_io_raddr1", false,-1, 4,0);
        tracep->declBus(c+7,"Core decode_io_raddr2", false,-1, 4,0);
        tracep->declBit(c+106,"Core regfile_clock", false,-1);
        tracep->declBit(c+107,"Core regfile_reset", false,-1);
        tracep->declBus(c+6,"Core regfile_io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+8,"Core regfile_io_rdata1", false,-1, 63,0);
        tracep->declBus(c+7,"Core regfile_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+10,"Core regfile_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+12,"Core regfile_io_wen", false,-1);
        tracep->declBus(c+13,"Core regfile_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+14,"Core regfile_io_wdata", false,-1, 63,0);
        tracep->declQuad(c+16,"Core regfile_io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+18,"Core regfile_io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+20,"Core regfile_io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+22,"Core regfile_io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+24,"Core regfile_io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+26,"Core regfile_io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+28,"Core regfile_io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+30,"Core regfile_io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+32,"Core regfile_io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+34,"Core regfile_io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+36,"Core regfile_io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+38,"Core regfile_io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+40,"Core regfile_io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+42,"Core regfile_io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+44,"Core regfile_io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+46,"Core regfile_io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+48,"Core regfile_io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+50,"Core regfile_io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+52,"Core regfile_io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+54,"Core regfile_io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+56,"Core regfile_io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+58,"Core regfile_io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+60,"Core regfile_io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+62,"Core regfile_io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+64,"Core regfile_io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+66,"Core regfile_io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+68,"Core regfile_io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+70,"Core regfile_io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+72,"Core regfile_io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+74,"Core regfile_io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+76,"Core regfile_io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+78,"Core regfile_io_regs_31", false,-1, 63,0);
        tracep->declBit(c+106,"Core execute_clock", false,-1);
        tracep->declBit(c+107,"Core execute_reset", false,-1);
        tracep->declBit(c+196,"Core execute_io_in_ready", false,-1);
        tracep->declBus(c+2,"Core execute_io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBit(c+3,"Core execute_io_in_bits_w_type", false,-1);
        tracep->declBus(c+4,"Core execute_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+5,"Core execute_io_in_bits_rd_en", false,-1);
        tracep->declBit(c+196,"Core execute_io_out_valid", false,-1);
        tracep->declBus(c+80,"Core execute_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+81,"Core execute_io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+82,"Core execute_io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+84,"Core execute_io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+86,"Core execute_io_ex_data_o", false,-1, 63,0);
        tracep->declBit(c+106,"Core mem_clock", false,-1);
        tracep->declBit(c+107,"Core mem_reset", false,-1);
        tracep->declBit(c+196,"Core mem_io_in_ready", false,-1);
        tracep->declBus(c+80,"Core mem_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+81,"Core mem_io_in_bits_rd_en", false,-1);
        tracep->declQuad(c+86,"Core mem_io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+13,"Core mem_io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+12,"Core mem_io_wen_o", false,-1);
        tracep->declQuad(c+14,"Core mem_io_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+82,"Core execute_io_ex_rs1_i_REG", false,-1, 63,0);
        tracep->declQuad(c+84,"Core execute_io_ex_rs2_i_REG", false,-1, 63,0);
        tracep->declBit(c+106,"Core fetch clock", false,-1);
        tracep->declBit(c+107,"Core fetch reset", false,-1);
        tracep->declBus(c+1,"Core fetch io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+194,"Core fetch io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+117,"Core fetch io_imem_resp_bits_rvalid", false,-1);
        tracep->declBit(c+196,"Core fetch io_out_ready", false,-1);
        tracep->declBit(c+196,"Core fetch io_out_valid", false,-1);
        tracep->declBus(c+194,"Core fetch io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+88,"Core fetch pc", false,-1, 31,0);
        tracep->declBus(c+89,"Core fetch pc_base_hi", false,-1, 29,0);
        tracep->declBus(c+1,"Core fetch pc_base", false,-1, 31,0);
        tracep->declBus(c+90,"Core fetch npc", false,-1, 31,0);
        tracep->declBit(c+195,"Core fetch stall", false,-1);
        tracep->declBit(c+106,"Core decode clock", false,-1);
        tracep->declBit(c+107,"Core decode reset", false,-1);
        tracep->declBit(c+196,"Core decode io_in_ready", false,-1);
        tracep->declBus(c+194,"Core decode io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+196,"Core decode io_out_ready", false,-1);
        tracep->declBit(c+196,"Core decode io_out_valid", false,-1);
        tracep->declBus(c+2,"Core decode io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBit(c+3,"Core decode io_out_bits_w_type", false,-1);
        tracep->declBus(c+4,"Core decode io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+5,"Core decode io_out_bits_rd_en", false,-1);
        tracep->declBus(c+6,"Core decode io_raddr1", false,-1, 4,0);
        tracep->declBus(c+7,"Core decode io_raddr2", false,-1, 4,0);
        tracep->declBus(c+91,"Core decode inst", false,-1, 31,0);
        tracep->declBit(c+197,"Core decode stall", false,-1);
        tracep->declBit(c+106,"Core regfile clock", false,-1);
        tracep->declBit(c+107,"Core regfile reset", false,-1);
        tracep->declBus(c+6,"Core regfile io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+8,"Core regfile io_rdata1", false,-1, 63,0);
        tracep->declBus(c+7,"Core regfile io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+10,"Core regfile io_rdata2", false,-1, 63,0);
        tracep->declBit(c+12,"Core regfile io_wen", false,-1);
        tracep->declBus(c+13,"Core regfile io_waddr", false,-1, 4,0);
        tracep->declQuad(c+14,"Core regfile io_wdata", false,-1, 63,0);
        tracep->declQuad(c+16,"Core regfile io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+18,"Core regfile io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+20,"Core regfile io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+22,"Core regfile io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+24,"Core regfile io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+26,"Core regfile io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+28,"Core regfile io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+30,"Core regfile io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+32,"Core regfile io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+34,"Core regfile io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+36,"Core regfile io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+38,"Core regfile io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+40,"Core regfile io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+42,"Core regfile io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+44,"Core regfile io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+46,"Core regfile io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+48,"Core regfile io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+50,"Core regfile io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+52,"Core regfile io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+54,"Core regfile io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+56,"Core regfile io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+58,"Core regfile io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+60,"Core regfile io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+62,"Core regfile io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+64,"Core regfile io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+66,"Core regfile io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+68,"Core regfile io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+70,"Core regfile io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+72,"Core regfile io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+74,"Core regfile io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+76,"Core regfile io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+78,"Core regfile io_regs_31", false,-1, 63,0);
        tracep->declQuad(c+16,"Core regfile rf_0", false,-1, 63,0);
        tracep->declQuad(c+18,"Core regfile rf_1", false,-1, 63,0);
        tracep->declQuad(c+20,"Core regfile rf_2", false,-1, 63,0);
        tracep->declQuad(c+22,"Core regfile rf_3", false,-1, 63,0);
        tracep->declQuad(c+24,"Core regfile rf_4", false,-1, 63,0);
        tracep->declQuad(c+26,"Core regfile rf_5", false,-1, 63,0);
        tracep->declQuad(c+28,"Core regfile rf_6", false,-1, 63,0);
        tracep->declQuad(c+30,"Core regfile rf_7", false,-1, 63,0);
        tracep->declQuad(c+32,"Core regfile rf_8", false,-1, 63,0);
        tracep->declQuad(c+34,"Core regfile rf_9", false,-1, 63,0);
        tracep->declQuad(c+36,"Core regfile rf_10", false,-1, 63,0);
        tracep->declQuad(c+38,"Core regfile rf_11", false,-1, 63,0);
        tracep->declQuad(c+40,"Core regfile rf_12", false,-1, 63,0);
        tracep->declQuad(c+42,"Core regfile rf_13", false,-1, 63,0);
        tracep->declQuad(c+44,"Core regfile rf_14", false,-1, 63,0);
        tracep->declQuad(c+46,"Core regfile rf_15", false,-1, 63,0);
        tracep->declQuad(c+48,"Core regfile rf_16", false,-1, 63,0);
        tracep->declQuad(c+50,"Core regfile rf_17", false,-1, 63,0);
        tracep->declQuad(c+52,"Core regfile rf_18", false,-1, 63,0);
        tracep->declQuad(c+54,"Core regfile rf_19", false,-1, 63,0);
        tracep->declQuad(c+56,"Core regfile rf_20", false,-1, 63,0);
        tracep->declQuad(c+58,"Core regfile rf_21", false,-1, 63,0);
        tracep->declQuad(c+60,"Core regfile rf_22", false,-1, 63,0);
        tracep->declQuad(c+62,"Core regfile rf_23", false,-1, 63,0);
        tracep->declQuad(c+64,"Core regfile rf_24", false,-1, 63,0);
        tracep->declQuad(c+66,"Core regfile rf_25", false,-1, 63,0);
        tracep->declQuad(c+68,"Core regfile rf_26", false,-1, 63,0);
        tracep->declQuad(c+70,"Core regfile rf_27", false,-1, 63,0);
        tracep->declQuad(c+72,"Core regfile rf_28", false,-1, 63,0);
        tracep->declQuad(c+74,"Core regfile rf_29", false,-1, 63,0);
        tracep->declQuad(c+76,"Core regfile rf_30", false,-1, 63,0);
        tracep->declQuad(c+78,"Core regfile rf_31", false,-1, 63,0);
        tracep->declBit(c+106,"Core execute clock", false,-1);
        tracep->declBit(c+107,"Core execute reset", false,-1);
        tracep->declBit(c+196,"Core execute io_in_ready", false,-1);
        tracep->declBus(c+2,"Core execute io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBit(c+3,"Core execute io_in_bits_w_type", false,-1);
        tracep->declBus(c+4,"Core execute io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+5,"Core execute io_in_bits_rd_en", false,-1);
        tracep->declBit(c+196,"Core execute io_out_valid", false,-1);
        tracep->declBus(c+80,"Core execute io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+81,"Core execute io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+82,"Core execute io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+84,"Core execute io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+86,"Core execute io_ex_data_o", false,-1, 63,0);
        tracep->declQuad(c+92,"Core execute alu_io_in1", false,-1, 63,0);
        tracep->declQuad(c+94,"Core execute alu_io_in2", false,-1, 63,0);
        tracep->declBus(c+96,"Core execute alu_io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+97,"Core execute alu_io_wtype_i", false,-1);
        tracep->declQuad(c+86,"Core execute alu_io_alu_out", false,-1, 63,0);
        tracep->declBit(c+197,"Core execute stall", false,-1);
        tracep->declBus(c+96,"Core execute ex_reg_decodeop_alu_code", false,-1, 3,0);
        tracep->declBit(c+97,"Core execute ex_reg_decodeop_w_type", false,-1);
        tracep->declBus(c+80,"Core execute ex_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+81,"Core execute ex_reg_decodeop_rd_en", false,-1);
        tracep->declQuad(c+92,"Core execute rs1", false,-1, 63,0);
        tracep->declQuad(c+94,"Core execute rs2", false,-1, 63,0);
        tracep->declQuad(c+92,"Core execute alu io_in1", false,-1, 63,0);
        tracep->declQuad(c+94,"Core execute alu io_in2", false,-1, 63,0);
        tracep->declBus(c+96,"Core execute alu io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+97,"Core execute alu io_wtype_i", false,-1);
        tracep->declQuad(c+86,"Core execute alu io_alu_out", false,-1, 63,0);
        tracep->declQuad(c+98,"Core execute alu out0", false,-1, 63,0);
        tracep->declBus(c+100,"Core execute alu out1_lo", false,-1, 31,0);
        tracep->declBus(c+101,"Core execute alu out1_hi", false,-1, 31,0);
        tracep->declBit(c+106,"Core mem clock", false,-1);
        tracep->declBit(c+107,"Core mem reset", false,-1);
        tracep->declBit(c+196,"Core mem io_in_ready", false,-1);
        tracep->declBus(c+80,"Core mem io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+81,"Core mem io_in_bits_rd_en", false,-1);
        tracep->declQuad(c+86,"Core mem io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+13,"Core mem io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+12,"Core mem io_wen_o", false,-1);
        tracep->declQuad(c+14,"Core mem io_wdata_o", false,-1, 63,0);
        tracep->declBus(c+102,"Core mem waddr", false,-1, 4,0);
        tracep->declBit(c+103,"Core mem wen", false,-1);
        tracep->declQuad(c+104,"Core mem wdata", false,-1, 63,0);
        tracep->declBus(c+13,"Core mem io_waddr_o_REG", false,-1, 4,0);
        tracep->declBit(c+12,"Core mem io_wen_o_REG", false,-1);
        tracep->declQuad(c+14,"Core mem io_wdata_o_REG", false,-1, 63,0);
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
        tracep->fullCData(oldp+2,(((0x37U == (0x7fU 
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
        tracep->fullBit(oldp+3,(((0x37U != (0x7fU & vlSelf->Core__DOT__decode__DOT__inst)) 
                                 & ((0x17U != (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst)) 
                                    & ((0x6fU != (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst)) 
                                       & ((0x67U != 
                                           (0x707fU 
                                            & vlSelf->Core__DOT__decode__DOT__inst)) 
                                          & ((0x63U 
                                              != (0x707fU 
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
                                                                                & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_585))))))))))))))))))));
        tracep->fullCData(oldp+4,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 7U))),5);
        tracep->fullBit(oldp+5,(((0x37U == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst)) 
                                 | ((0x17U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst)) 
                                    | ((0x6fU == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst)) 
                                       | ((0x67U == 
                                           (0x707fU 
                                            & vlSelf->Core__DOT__decode__DOT__inst)) 
                                          | ((0x63U 
                                              != (0x707fU 
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
                                                                                & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_765))))))))))))))))))));
        tracep->fullCData(oldp+6,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU))),5);
        tracep->fullCData(oldp+7,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U))),5);
        tracep->fullQData(oldp+8,(((0U != (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU)))
                                    ? ((0x1fU == (0x1fU 
                                                  & (vlSelf->Core__DOT__decode__DOT__inst 
                                                     >> 0xfU)))
                                        ? vlSelf->Core__DOT__regfile__DOT__rf_31
                                        : ((0x1eU == 
                                            (0x1fU 
                                             & (vlSelf->Core__DOT__decode__DOT__inst 
                                                >> 0xfU)))
                                            ? vlSelf->Core__DOT__regfile__DOT__rf_30
                                            : ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 0xfU)))
                                                ? vlSelf->Core__DOT__regfile__DOT__rf_29
                                                : (
                                                   (0x1cU 
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
                                    : 0ULL)),64);
        tracep->fullQData(oldp+10,(((0U != (0x1fU & 
                                            (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U)))
                                     ? ((0x1fU == (0x1fU 
                                                   & (vlSelf->Core__DOT__decode__DOT__inst 
                                                      >> 0x14U)))
                                         ? vlSelf->Core__DOT__regfile__DOT__rf_31
                                         : ((0x1eU 
                                             == (0x1fU 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 0x14U)))
                                             ? vlSelf->Core__DOT__regfile__DOT__rf_30
                                             : ((0x1dU 
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
                                     : 0ULL)),64);
        tracep->fullBit(oldp+12,(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG));
        tracep->fullCData(oldp+13,(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG),5);
        tracep->fullQData(oldp+14,(vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG),64);
        tracep->fullQData(oldp+16,(vlSelf->Core__DOT__regfile__DOT__rf_0),64);
        tracep->fullQData(oldp+18,(vlSelf->Core__DOT__regfile__DOT__rf_1),64);
        tracep->fullQData(oldp+20,(vlSelf->Core__DOT__regfile__DOT__rf_2),64);
        tracep->fullQData(oldp+22,(vlSelf->Core__DOT__regfile__DOT__rf_3),64);
        tracep->fullQData(oldp+24,(vlSelf->Core__DOT__regfile__DOT__rf_4),64);
        tracep->fullQData(oldp+26,(vlSelf->Core__DOT__regfile__DOT__rf_5),64);
        tracep->fullQData(oldp+28,(vlSelf->Core__DOT__regfile__DOT__rf_6),64);
        tracep->fullQData(oldp+30,(vlSelf->Core__DOT__regfile__DOT__rf_7),64);
        tracep->fullQData(oldp+32,(vlSelf->Core__DOT__regfile__DOT__rf_8),64);
        tracep->fullQData(oldp+34,(vlSelf->Core__DOT__regfile__DOT__rf_9),64);
        tracep->fullQData(oldp+36,(vlSelf->Core__DOT__regfile__DOT__rf_10),64);
        tracep->fullQData(oldp+38,(vlSelf->Core__DOT__regfile__DOT__rf_11),64);
        tracep->fullQData(oldp+40,(vlSelf->Core__DOT__regfile__DOT__rf_12),64);
        tracep->fullQData(oldp+42,(vlSelf->Core__DOT__regfile__DOT__rf_13),64);
        tracep->fullQData(oldp+44,(vlSelf->Core__DOT__regfile__DOT__rf_14),64);
        tracep->fullQData(oldp+46,(vlSelf->Core__DOT__regfile__DOT__rf_15),64);
        tracep->fullQData(oldp+48,(vlSelf->Core__DOT__regfile__DOT__rf_16),64);
        tracep->fullQData(oldp+50,(vlSelf->Core__DOT__regfile__DOT__rf_17),64);
        tracep->fullQData(oldp+52,(vlSelf->Core__DOT__regfile__DOT__rf_18),64);
        tracep->fullQData(oldp+54,(vlSelf->Core__DOT__regfile__DOT__rf_19),64);
        tracep->fullQData(oldp+56,(vlSelf->Core__DOT__regfile__DOT__rf_20),64);
        tracep->fullQData(oldp+58,(vlSelf->Core__DOT__regfile__DOT__rf_21),64);
        tracep->fullQData(oldp+60,(vlSelf->Core__DOT__regfile__DOT__rf_22),64);
        tracep->fullQData(oldp+62,(vlSelf->Core__DOT__regfile__DOT__rf_23),64);
        tracep->fullQData(oldp+64,(vlSelf->Core__DOT__regfile__DOT__rf_24),64);
        tracep->fullQData(oldp+66,(vlSelf->Core__DOT__regfile__DOT__rf_25),64);
        tracep->fullQData(oldp+68,(vlSelf->Core__DOT__regfile__DOT__rf_26),64);
        tracep->fullQData(oldp+70,(vlSelf->Core__DOT__regfile__DOT__rf_27),64);
        tracep->fullQData(oldp+72,(vlSelf->Core__DOT__regfile__DOT__rf_28),64);
        tracep->fullQData(oldp+74,(vlSelf->Core__DOT__regfile__DOT__rf_29),64);
        tracep->fullQData(oldp+76,(vlSelf->Core__DOT__regfile__DOT__rf_30),64);
        tracep->fullQData(oldp+78,(vlSelf->Core__DOT__regfile__DOT__rf_31),64);
        tracep->fullCData(oldp+80,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),5);
        tracep->fullBit(oldp+81,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en));
        tracep->fullQData(oldp+82,(vlSelf->Core__DOT__execute_io_ex_rs1_i_REG),64);
        tracep->fullQData(oldp+84,(vlSelf->Core__DOT__execute_io_ex_rs2_i_REG),64);
        tracep->fullQData(oldp+86,(((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type)
                                     ? (((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                                      >> 0x1fU)))
                                                           ? 0xffffffffU
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)))
                                     : vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)),64);
        tracep->fullIData(oldp+88,(vlSelf->Core__DOT__fetch__DOT__pc),32);
        tracep->fullIData(oldp+89,((vlSelf->Core__DOT__fetch__DOT__pc 
                                    >> 2U)),30);
        tracep->fullIData(oldp+90,(((IData)(4U) + (0xfffffffcU 
                                                   & vlSelf->Core__DOT__fetch__DOT__pc))),32);
        tracep->fullIData(oldp+91,(vlSelf->Core__DOT__decode__DOT__inst),32);
        tracep->fullQData(oldp+92,(vlSelf->Core__DOT__execute__DOT__rs1),64);
        tracep->fullQData(oldp+94,(vlSelf->Core__DOT__execute__DOT__rs2),64);
        tracep->fullCData(oldp+96,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code),4);
        tracep->fullBit(oldp+97,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type));
        tracep->fullQData(oldp+98,(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0),64);
        tracep->fullIData(oldp+100,((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)),32);
        tracep->fullIData(oldp+101,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullCData(oldp+102,(vlSelf->Core__DOT__mem__DOT__waddr),5);
        tracep->fullBit(oldp+103,(vlSelf->Core__DOT__mem__DOT__wen));
        tracep->fullQData(oldp+104,(vlSelf->Core__DOT__mem__DOT__wdata),64);
        tracep->fullBit(oldp+106,(vlSelf->clock));
        tracep->fullBit(oldp+107,(vlSelf->reset));
        tracep->fullIData(oldp+108,(vlSelf->io_imem_raddr),32);
        tracep->fullIData(oldp+109,(vlSelf->io_imem_waddr),32);
        tracep->fullQData(oldp+110,(vlSelf->io_imem_wdata),64);
        tracep->fullBit(oldp+112,(vlSelf->io_imem_ren));
        tracep->fullBit(oldp+113,(vlSelf->io_imem_wen));
        tracep->fullCData(oldp+114,(vlSelf->io_imem_wmask),8);
        tracep->fullQData(oldp+115,(vlSelf->io_imem_rdata),64);
        tracep->fullBit(oldp+117,(vlSelf->io_imem_read_ok));
        tracep->fullBit(oldp+118,(vlSelf->io_imem_write_ok));
        tracep->fullIData(oldp+119,(vlSelf->io_dmem_raddr),32);
        tracep->fullIData(oldp+120,(vlSelf->io_dmem_waddr),32);
        tracep->fullQData(oldp+121,(vlSelf->io_dmem_wdata),64);
        tracep->fullBit(oldp+123,(vlSelf->io_dmem_ren));
        tracep->fullBit(oldp+124,(vlSelf->io_dmem_wen));
        tracep->fullCData(oldp+125,(vlSelf->io_dmem_wmask),8);
        tracep->fullQData(oldp+126,(vlSelf->io_dmem_rdata),64);
        tracep->fullBit(oldp+128,(vlSelf->io_dmem_read_ok));
        tracep->fullBit(oldp+129,(vlSelf->io_dmem_write_ok));
        tracep->fullQData(oldp+130,(vlSelf->io_regs_0),64);
        tracep->fullQData(oldp+132,(vlSelf->io_regs_1),64);
        tracep->fullQData(oldp+134,(vlSelf->io_regs_2),64);
        tracep->fullQData(oldp+136,(vlSelf->io_regs_3),64);
        tracep->fullQData(oldp+138,(vlSelf->io_regs_4),64);
        tracep->fullQData(oldp+140,(vlSelf->io_regs_5),64);
        tracep->fullQData(oldp+142,(vlSelf->io_regs_6),64);
        tracep->fullQData(oldp+144,(vlSelf->io_regs_7),64);
        tracep->fullQData(oldp+146,(vlSelf->io_regs_8),64);
        tracep->fullQData(oldp+148,(vlSelf->io_regs_9),64);
        tracep->fullQData(oldp+150,(vlSelf->io_regs_10),64);
        tracep->fullQData(oldp+152,(vlSelf->io_regs_11),64);
        tracep->fullQData(oldp+154,(vlSelf->io_regs_12),64);
        tracep->fullQData(oldp+156,(vlSelf->io_regs_13),64);
        tracep->fullQData(oldp+158,(vlSelf->io_regs_14),64);
        tracep->fullQData(oldp+160,(vlSelf->io_regs_15),64);
        tracep->fullQData(oldp+162,(vlSelf->io_regs_16),64);
        tracep->fullQData(oldp+164,(vlSelf->io_regs_17),64);
        tracep->fullQData(oldp+166,(vlSelf->io_regs_18),64);
        tracep->fullQData(oldp+168,(vlSelf->io_regs_19),64);
        tracep->fullQData(oldp+170,(vlSelf->io_regs_20),64);
        tracep->fullQData(oldp+172,(vlSelf->io_regs_21),64);
        tracep->fullQData(oldp+174,(vlSelf->io_regs_22),64);
        tracep->fullQData(oldp+176,(vlSelf->io_regs_23),64);
        tracep->fullQData(oldp+178,(vlSelf->io_regs_24),64);
        tracep->fullQData(oldp+180,(vlSelf->io_regs_25),64);
        tracep->fullQData(oldp+182,(vlSelf->io_regs_26),64);
        tracep->fullQData(oldp+184,(vlSelf->io_regs_27),64);
        tracep->fullQData(oldp+186,(vlSelf->io_regs_28),64);
        tracep->fullQData(oldp+188,(vlSelf->io_regs_29),64);
        tracep->fullQData(oldp+190,(vlSelf->io_regs_30),64);
        tracep->fullQData(oldp+192,(vlSelf->io_regs_31),64);
        tracep->fullIData(oldp+194,((IData)(vlSelf->io_imem_rdata)),32);
        tracep->fullBit(oldp+195,((1U & (~ (IData)(vlSelf->io_imem_read_ok)))));
        tracep->fullBit(oldp+196,(1U));
        tracep->fullBit(oldp+197,(0U));
    }
}
