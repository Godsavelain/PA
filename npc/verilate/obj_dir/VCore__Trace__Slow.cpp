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
        tracep->declBit(c+156,"clock", false,-1);
        tracep->declBit(c+157,"reset", false,-1);
        tracep->declBus(c+158,"io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+159,"io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+160,"io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+162,"io_imem_ren", false,-1);
        tracep->declBit(c+163,"io_imem_wen", false,-1);
        tracep->declBus(c+164,"io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+165,"io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+167,"io_imem_read_ok", false,-1);
        tracep->declBit(c+168,"io_imem_write_ok", false,-1);
        tracep->declBus(c+169,"io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+170,"io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+171,"io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+173,"io_dmem_ren", false,-1);
        tracep->declBit(c+174,"io_dmem_wen", false,-1);
        tracep->declBus(c+175,"io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+176,"io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+178,"io_dmem_read_ok", false,-1);
        tracep->declBit(c+179,"io_dmem_write_ok", false,-1);
        tracep->declQuad(c+180,"io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+182,"io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+184,"io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+186,"io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+188,"io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+190,"io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+192,"io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+194,"io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+196,"io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+198,"io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+200,"io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+202,"io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+204,"io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+206,"io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+208,"io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+210,"io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+212,"io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+214,"io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+216,"io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+218,"io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+220,"io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+222,"io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+224,"io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+226,"io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+228,"io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+230,"io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+232,"io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+234,"io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+236,"io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+238,"io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+240,"io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+242,"io_regs_31", false,-1, 63,0);
        tracep->declBit(c+156,"Core clock", false,-1);
        tracep->declBit(c+157,"Core reset", false,-1);
        tracep->declBus(c+158,"Core io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+159,"Core io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+160,"Core io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+162,"Core io_imem_ren", false,-1);
        tracep->declBit(c+163,"Core io_imem_wen", false,-1);
        tracep->declBus(c+164,"Core io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+165,"Core io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+167,"Core io_imem_read_ok", false,-1);
        tracep->declBit(c+168,"Core io_imem_write_ok", false,-1);
        tracep->declBus(c+169,"Core io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+170,"Core io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+171,"Core io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+173,"Core io_dmem_ren", false,-1);
        tracep->declBit(c+174,"Core io_dmem_wen", false,-1);
        tracep->declBus(c+175,"Core io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+176,"Core io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+178,"Core io_dmem_read_ok", false,-1);
        tracep->declBit(c+179,"Core io_dmem_write_ok", false,-1);
        tracep->declQuad(c+180,"Core io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+182,"Core io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+184,"Core io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+186,"Core io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+188,"Core io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+190,"Core io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+192,"Core io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+194,"Core io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+196,"Core io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+198,"Core io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+200,"Core io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+202,"Core io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+204,"Core io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+206,"Core io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+208,"Core io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+210,"Core io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+212,"Core io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+214,"Core io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+216,"Core io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+218,"Core io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+220,"Core io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+222,"Core io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+224,"Core io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+226,"Core io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+228,"Core io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+230,"Core io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+232,"Core io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+234,"Core io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+236,"Core io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+238,"Core io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+240,"Core io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+242,"Core io_regs_31", false,-1, 63,0);
        tracep->declBit(c+156,"Core fetch_clock", false,-1);
        tracep->declBit(c+157,"Core fetch_reset", false,-1);
        tracep->declBus(c+1,"Core fetch_io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+244,"Core fetch_io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+167,"Core fetch_io_imem_resp_bits_rvalid", false,-1);
        tracep->declBus(c+2,"Core fetch_io_imem_resp_bits_old_pc", false,-1, 31,0);
        tracep->declBit(c+247,"Core fetch_io_out_ready", false,-1);
        tracep->declBit(c+247,"Core fetch_io_out_valid", false,-1);
        tracep->declBus(c+2,"Core fetch_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+244,"Core fetch_io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+167,"Core fetch_io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+156,"Core decode_clock", false,-1);
        tracep->declBit(c+157,"Core decode_reset", false,-1);
        tracep->declBit(c+247,"Core decode_io_in_ready", false,-1);
        tracep->declBus(c+2,"Core decode_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+244,"Core decode_io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+167,"Core decode_io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+247,"Core decode_io_out_ready", false,-1);
        tracep->declBit(c+247,"Core decode_io_out_valid", false,-1);
        tracep->declBus(c+2,"Core decode_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+244,"Core decode_io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+3,"Core decode_io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBit(c+4,"Core decode_io_out_bits_w_type", false,-1);
        tracep->declBus(c+5,"Core decode_io_out_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+6,"Core decode_io_out_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+7,"Core decode_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+245,"Core decode_io_out_bits_rd_en", false,-1);
        tracep->declBus(c+8,"Core decode_io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+9,"Core decode_io_ren1", false,-1);
        tracep->declBus(c+10,"Core decode_io_raddr1", false,-1, 4,0);
        tracep->declBit(c+11,"Core decode_io_ren2", false,-1);
        tracep->declBus(c+12,"Core decode_io_raddr2", false,-1, 4,0);
        tracep->declBit(c+13,"Core decode_io_is_ebreak", false,-1);
        tracep->declQuad(c+14,"Core decode_io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+16,"Core decode_io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+18,"Core decode_io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+20,"Core decode_io_rs2_data_o", false,-1, 63,0);
        tracep->declBit(c+156,"Core regfile_clock", false,-1);
        tracep->declBit(c+157,"Core regfile_reset", false,-1);
        tracep->declBit(c+9,"Core regfile_io_ren1", false,-1);
        tracep->declBus(c+10,"Core regfile_io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+14,"Core regfile_io_rdata1", false,-1, 63,0);
        tracep->declBit(c+11,"Core regfile_io_ren2", false,-1);
        tracep->declBus(c+12,"Core regfile_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+16,"Core regfile_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+22,"Core regfile_io_wen", false,-1);
        tracep->declBus(c+23,"Core regfile_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+24,"Core regfile_io_wdata", false,-1, 63,0);
        tracep->declQuad(c+26,"Core regfile_io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+28,"Core regfile_io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+30,"Core regfile_io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+32,"Core regfile_io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+34,"Core regfile_io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+36,"Core regfile_io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+38,"Core regfile_io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+40,"Core regfile_io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+42,"Core regfile_io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+44,"Core regfile_io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+46,"Core regfile_io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+48,"Core regfile_io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+50,"Core regfile_io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+52,"Core regfile_io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+54,"Core regfile_io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+56,"Core regfile_io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+58,"Core regfile_io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+60,"Core regfile_io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+62,"Core regfile_io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+64,"Core regfile_io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+66,"Core regfile_io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+68,"Core regfile_io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+70,"Core regfile_io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+72,"Core regfile_io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+74,"Core regfile_io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+76,"Core regfile_io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+78,"Core regfile_io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+80,"Core regfile_io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+82,"Core regfile_io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+84,"Core regfile_io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+86,"Core regfile_io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+88,"Core regfile_io_regs_31", false,-1, 63,0);
        tracep->declBit(c+90,"Core regfile_io_ex_rd_en", false,-1);
        tracep->declBus(c+91,"Core regfile_io_ex_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+92,"Core regfile_io_ex_rd_data", false,-1, 63,0);
        tracep->declBit(c+94,"Core regfile_io_mem_rd_en", false,-1);
        tracep->declBus(c+95,"Core regfile_io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+96,"Core regfile_io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+156,"Core execute_clock", false,-1);
        tracep->declBit(c+157,"Core execute_reset", false,-1);
        tracep->declBit(c+247,"Core execute_io_in_ready", false,-1);
        tracep->declBus(c+2,"Core execute_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+244,"Core execute_io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+3,"Core execute_io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBit(c+4,"Core execute_io_in_bits_w_type", false,-1);
        tracep->declBus(c+5,"Core execute_io_in_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+6,"Core execute_io_in_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+7,"Core execute_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+245,"Core execute_io_in_bits_rd_en", false,-1);
        tracep->declBus(c+8,"Core execute_io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+247,"Core execute_io_out_valid", false,-1);
        tracep->declBus(c+98,"Core execute_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+99,"Core execute_io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+100,"Core execute_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+90,"Core execute_io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+18,"Core execute_io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+20,"Core execute_io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+92,"Core execute_io_ex_data_o", false,-1, 63,0);
        tracep->declBit(c+13,"Core execute_io_is_ebreak_i", false,-1);
        tracep->declBit(c+101,"Core execute_io_is_ebreak_o", false,-1);
        tracep->declBit(c+90,"Core execute_io_ex_rd_en", false,-1);
        tracep->declBus(c+91,"Core execute_io_ex_rd_addr", false,-1, 31,0);
        tracep->declBit(c+156,"Core mem_clock", false,-1);
        tracep->declBit(c+157,"Core mem_reset", false,-1);
        tracep->declBit(c+247,"Core mem_io_in_ready", false,-1);
        tracep->declBus(c+98,"Core mem_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+99,"Core mem_io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+100,"Core mem_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+90,"Core mem_io_in_bits_rd_en", false,-1);
        tracep->declBus(c+102,"Core mem_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+103,"Core mem_io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+92,"Core mem_io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+23,"Core mem_io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+22,"Core mem_io_wen_o", false,-1);
        tracep->declQuad(c+24,"Core mem_io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+101,"Core mem_io_is_ebreak_i", false,-1);
        tracep->declBit(c+104,"Core mem_io_is_ebreak_o", false,-1);
        tracep->declBit(c+94,"Core mem_io_mem_rd_en", false,-1);
        tracep->declBus(c+95,"Core mem_io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+96,"Core mem_io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+156,"Core wb_dpi_clk", false,-1);
        tracep->declBus(c+103,"Core wb_dpi_inst", false,-1, 31,0);
        tracep->declBus(c+102,"Core wb_dpi_pc", false,-1, 31,0);
        tracep->declBit(c+104,"Core wb_dpi_ebreak", false,-1);
        tracep->declBus(c+2,"Core fetch_io_imem_resp_bits_old_pc_REG", false,-1, 31,0);
        tracep->declBit(c+156,"Core fetch clock", false,-1);
        tracep->declBit(c+157,"Core fetch reset", false,-1);
        tracep->declBus(c+1,"Core fetch io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+244,"Core fetch io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+167,"Core fetch io_imem_resp_bits_rvalid", false,-1);
        tracep->declBus(c+2,"Core fetch io_imem_resp_bits_old_pc", false,-1, 31,0);
        tracep->declBit(c+247,"Core fetch io_out_ready", false,-1);
        tracep->declBit(c+247,"Core fetch io_out_valid", false,-1);
        tracep->declBus(c+2,"Core fetch io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+244,"Core fetch io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+167,"Core fetch io_out_bits_inst_valid", false,-1);
        tracep->declBus(c+105,"Core fetch pc", false,-1, 31,0);
        tracep->declBus(c+106,"Core fetch pc_base_hi", false,-1, 29,0);
        tracep->declBus(c+1,"Core fetch pc_base", false,-1, 31,0);
        tracep->declBus(c+107,"Core fetch npc", false,-1, 31,0);
        tracep->declBit(c+246,"Core fetch stall", false,-1);
        tracep->declBit(c+156,"Core decode clock", false,-1);
        tracep->declBit(c+157,"Core decode reset", false,-1);
        tracep->declBit(c+247,"Core decode io_in_ready", false,-1);
        tracep->declBus(c+2,"Core decode io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+244,"Core decode io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+167,"Core decode io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+247,"Core decode io_out_ready", false,-1);
        tracep->declBit(c+247,"Core decode io_out_valid", false,-1);
        tracep->declBus(c+2,"Core decode io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+244,"Core decode io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+3,"Core decode io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBit(c+4,"Core decode io_out_bits_w_type", false,-1);
        tracep->declBus(c+5,"Core decode io_out_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+6,"Core decode io_out_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+7,"Core decode io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+245,"Core decode io_out_bits_rd_en", false,-1);
        tracep->declBus(c+8,"Core decode io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+9,"Core decode io_ren1", false,-1);
        tracep->declBus(c+10,"Core decode io_raddr1", false,-1, 4,0);
        tracep->declBit(c+11,"Core decode io_ren2", false,-1);
        tracep->declBus(c+12,"Core decode io_raddr2", false,-1, 4,0);
        tracep->declBit(c+13,"Core decode io_is_ebreak", false,-1);
        tracep->declQuad(c+14,"Core decode io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+16,"Core decode io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+18,"Core decode io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+20,"Core decode io_rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+108,"Core decode inst", false,-1, 31,0);
        tracep->declQuad(c+18,"Core decode io_rs1_data_o_REG", false,-1, 63,0);
        tracep->declQuad(c+20,"Core decode io_rs2_data_o_REG", false,-1, 63,0);
        tracep->declBit(c+4,"Core decode c0_0", false,-1);
        tracep->declBus(c+109,"Core decode c0_1", false,-1, 2,0);
        tracep->declBus(c+110,"Core decode c0_2", false,-1, 2,0);
        tracep->declBit(c+111,"Core decode c0_3", false,-1);
        tracep->declBus(c+112,"Core decode c0_4", false,-1, 2,0);
        tracep->declBit(c+13,"Core decode io_is_ebreak_REG", false,-1);
        tracep->declBus(c+113,"Core decode imm_i_hi", false,-1, 20,0);
        tracep->declBus(c+114,"Core decode imm_i_lo", false,-1, 10,0);
        tracep->declBus(c+115,"Core decode imm_i", false,-1, 31,0);
        tracep->declBus(c+116,"Core decode imm_s_hi_lo", false,-1, 5,0);
        tracep->declBus(c+117,"Core decode imm_s", false,-1, 31,0);
        tracep->declBus(c+118,"Core decode imm_b_hi_hi_hi", false,-1, 19,0);
        tracep->declBit(c+119,"Core decode imm_b_hi_hi_lo", false,-1);
        tracep->declBus(c+120,"Core decode imm_b_lo_hi", false,-1, 3,0);
        tracep->declBus(c+121,"Core decode imm_b", false,-1, 31,0);
        tracep->declBus(c+122,"Core decode imm_u_hi", false,-1, 19,0);
        tracep->declBus(c+123,"Core decode imm_u", false,-1, 31,0);
        tracep->declBus(c+124,"Core decode imm_j_hi_hi_hi", false,-1, 11,0);
        tracep->declBus(c+125,"Core decode imm_j_hi_hi_lo", false,-1, 7,0);
        tracep->declBit(c+126,"Core decode imm_j_hi_lo", false,-1);
        tracep->declBus(c+127,"Core decode imm_j_lo_hi", false,-1, 9,0);
        tracep->declBus(c+128,"Core decode imm_j", false,-1, 31,0);
        tracep->declBus(c+129,"Core decode imm_shamt_lo_1", false,-1, 5,0);
        tracep->declBus(c+130,"Core decode imm_shamt", false,-1, 31,0);
        tracep->declBus(c+131,"Core decode imm_csr", false,-1, 31,0);
        tracep->declBit(c+248,"Core decode stall", false,-1);
        tracep->declBit(c+156,"Core regfile clock", false,-1);
        tracep->declBit(c+157,"Core regfile reset", false,-1);
        tracep->declBit(c+9,"Core regfile io_ren1", false,-1);
        tracep->declBus(c+10,"Core regfile io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+14,"Core regfile io_rdata1", false,-1, 63,0);
        tracep->declBit(c+11,"Core regfile io_ren2", false,-1);
        tracep->declBus(c+12,"Core regfile io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+16,"Core regfile io_rdata2", false,-1, 63,0);
        tracep->declBit(c+22,"Core regfile io_wen", false,-1);
        tracep->declBus(c+23,"Core regfile io_waddr", false,-1, 4,0);
        tracep->declQuad(c+24,"Core regfile io_wdata", false,-1, 63,0);
        tracep->declQuad(c+26,"Core regfile io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+28,"Core regfile io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+30,"Core regfile io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+32,"Core regfile io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+34,"Core regfile io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+36,"Core regfile io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+38,"Core regfile io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+40,"Core regfile io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+42,"Core regfile io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+44,"Core regfile io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+46,"Core regfile io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+48,"Core regfile io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+50,"Core regfile io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+52,"Core regfile io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+54,"Core regfile io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+56,"Core regfile io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+58,"Core regfile io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+60,"Core regfile io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+62,"Core regfile io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+64,"Core regfile io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+66,"Core regfile io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+68,"Core regfile io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+70,"Core regfile io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+72,"Core regfile io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+74,"Core regfile io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+76,"Core regfile io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+78,"Core regfile io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+80,"Core regfile io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+82,"Core regfile io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+84,"Core regfile io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+86,"Core regfile io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+88,"Core regfile io_regs_31", false,-1, 63,0);
        tracep->declBit(c+90,"Core regfile io_ex_rd_en", false,-1);
        tracep->declBus(c+91,"Core regfile io_ex_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+92,"Core regfile io_ex_rd_data", false,-1, 63,0);
        tracep->declBit(c+94,"Core regfile io_mem_rd_en", false,-1);
        tracep->declBus(c+95,"Core regfile io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+96,"Core regfile io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+132,"Core regfile ex_rs1_hazard", false,-1);
        tracep->declBit(c+133,"Core regfile ex_rs2_hazard", false,-1);
        tracep->declBit(c+134,"Core regfile mem_rs1_hazard", false,-1);
        tracep->declBit(c+135,"Core regfile mem_rs2_hazard", false,-1);
        tracep->declBit(c+136,"Core regfile wb_rs1_hazard", false,-1);
        tracep->declBit(c+137,"Core regfile wb_rs2_hazard", false,-1);
        tracep->declQuad(c+26,"Core regfile rf_0", false,-1, 63,0);
        tracep->declQuad(c+28,"Core regfile rf_1", false,-1, 63,0);
        tracep->declQuad(c+30,"Core regfile rf_2", false,-1, 63,0);
        tracep->declQuad(c+32,"Core regfile rf_3", false,-1, 63,0);
        tracep->declQuad(c+34,"Core regfile rf_4", false,-1, 63,0);
        tracep->declQuad(c+36,"Core regfile rf_5", false,-1, 63,0);
        tracep->declQuad(c+38,"Core regfile rf_6", false,-1, 63,0);
        tracep->declQuad(c+40,"Core regfile rf_7", false,-1, 63,0);
        tracep->declQuad(c+42,"Core regfile rf_8", false,-1, 63,0);
        tracep->declQuad(c+44,"Core regfile rf_9", false,-1, 63,0);
        tracep->declQuad(c+46,"Core regfile rf_10", false,-1, 63,0);
        tracep->declQuad(c+48,"Core regfile rf_11", false,-1, 63,0);
        tracep->declQuad(c+50,"Core regfile rf_12", false,-1, 63,0);
        tracep->declQuad(c+52,"Core regfile rf_13", false,-1, 63,0);
        tracep->declQuad(c+54,"Core regfile rf_14", false,-1, 63,0);
        tracep->declQuad(c+56,"Core regfile rf_15", false,-1, 63,0);
        tracep->declQuad(c+58,"Core regfile rf_16", false,-1, 63,0);
        tracep->declQuad(c+60,"Core regfile rf_17", false,-1, 63,0);
        tracep->declQuad(c+62,"Core regfile rf_18", false,-1, 63,0);
        tracep->declQuad(c+64,"Core regfile rf_19", false,-1, 63,0);
        tracep->declQuad(c+66,"Core regfile rf_20", false,-1, 63,0);
        tracep->declQuad(c+68,"Core regfile rf_21", false,-1, 63,0);
        tracep->declQuad(c+70,"Core regfile rf_22", false,-1, 63,0);
        tracep->declQuad(c+72,"Core regfile rf_23", false,-1, 63,0);
        tracep->declQuad(c+74,"Core regfile rf_24", false,-1, 63,0);
        tracep->declQuad(c+76,"Core regfile rf_25", false,-1, 63,0);
        tracep->declQuad(c+78,"Core regfile rf_26", false,-1, 63,0);
        tracep->declQuad(c+80,"Core regfile rf_27", false,-1, 63,0);
        tracep->declQuad(c+82,"Core regfile rf_28", false,-1, 63,0);
        tracep->declQuad(c+84,"Core regfile rf_29", false,-1, 63,0);
        tracep->declQuad(c+86,"Core regfile rf_30", false,-1, 63,0);
        tracep->declQuad(c+88,"Core regfile rf_31", false,-1, 63,0);
        tracep->declBit(c+156,"Core execute clock", false,-1);
        tracep->declBit(c+157,"Core execute reset", false,-1);
        tracep->declBit(c+247,"Core execute io_in_ready", false,-1);
        tracep->declBus(c+2,"Core execute io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+244,"Core execute io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+3,"Core execute io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBit(c+4,"Core execute io_in_bits_w_type", false,-1);
        tracep->declBus(c+5,"Core execute io_in_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+6,"Core execute io_in_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+7,"Core execute io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+245,"Core execute io_in_bits_rd_en", false,-1);
        tracep->declBus(c+8,"Core execute io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+247,"Core execute io_out_valid", false,-1);
        tracep->declBus(c+98,"Core execute io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+99,"Core execute io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+100,"Core execute io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+90,"Core execute io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+18,"Core execute io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+20,"Core execute io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+92,"Core execute io_ex_data_o", false,-1, 63,0);
        tracep->declBit(c+13,"Core execute io_is_ebreak_i", false,-1);
        tracep->declBit(c+101,"Core execute io_is_ebreak_o", false,-1);
        tracep->declBit(c+90,"Core execute io_ex_rd_en", false,-1);
        tracep->declBus(c+91,"Core execute io_ex_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+138,"Core execute alu_io_in1", false,-1, 63,0);
        tracep->declQuad(c+140,"Core execute alu_io_in2", false,-1, 63,0);
        tracep->declBus(c+142,"Core execute alu_io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+143,"Core execute alu_io_wtype_i", false,-1);
        tracep->declQuad(c+92,"Core execute alu_io_alu_out", false,-1, 63,0);
        tracep->declBit(c+248,"Core execute stall", false,-1);
        tracep->declBit(c+101,"Core execute io_is_ebreak_o_REG", false,-1);
        tracep->declBus(c+98,"Core execute ex_reg_decodeop_pc", false,-1, 31,0);
        tracep->declBus(c+99,"Core execute ex_reg_decodeop_inst", false,-1, 31,0);
        tracep->declBus(c+142,"Core execute ex_reg_decodeop_alu_code", false,-1, 3,0);
        tracep->declBit(c+143,"Core execute ex_reg_decodeop_w_type", false,-1);
        tracep->declBus(c+144,"Core execute ex_reg_decodeop_rs1_src", false,-1, 2,0);
        tracep->declBus(c+145,"Core execute ex_reg_decodeop_rs2_src", false,-1, 2,0);
        tracep->declBus(c+100,"Core execute ex_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+90,"Core execute ex_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+146,"Core execute ex_reg_decodeop_imm", false,-1, 31,0);
        tracep->declBus(c+147,"Core execute rs1_temp_hi", false,-1, 31,0);
        tracep->declBus(c+148,"Core execute rs1_temp_lo", false,-1, 31,0);
        tracep->declQuad(c+138,"Core execute alu io_in1", false,-1, 63,0);
        tracep->declQuad(c+140,"Core execute alu io_in2", false,-1, 63,0);
        tracep->declBus(c+142,"Core execute alu io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+143,"Core execute alu io_wtype_i", false,-1);
        tracep->declQuad(c+92,"Core execute alu io_alu_out", false,-1, 63,0);
        tracep->declQuad(c+149,"Core execute alu out0", false,-1, 63,0);
        tracep->declBus(c+151,"Core execute alu out1_lo", false,-1, 31,0);
        tracep->declBus(c+152,"Core execute alu out1_hi", false,-1, 31,0);
        tracep->declBit(c+156,"Core mem clock", false,-1);
        tracep->declBit(c+157,"Core mem reset", false,-1);
        tracep->declBit(c+247,"Core mem io_in_ready", false,-1);
        tracep->declBus(c+98,"Core mem io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+99,"Core mem io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+100,"Core mem io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+90,"Core mem io_in_bits_rd_en", false,-1);
        tracep->declBus(c+102,"Core mem io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+103,"Core mem io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+92,"Core mem io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+23,"Core mem io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+22,"Core mem io_wen_o", false,-1);
        tracep->declQuad(c+24,"Core mem io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+101,"Core mem io_is_ebreak_i", false,-1);
        tracep->declBit(c+104,"Core mem io_is_ebreak_o", false,-1);
        tracep->declBit(c+94,"Core mem io_mem_rd_en", false,-1);
        tracep->declBus(c+95,"Core mem io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+96,"Core mem io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+104,"Core mem io_is_ebreak_o_REG", false,-1);
        tracep->declBus(c+102,"Core mem io_out_bits_REG_pc", false,-1, 31,0);
        tracep->declBus(c+103,"Core mem io_out_bits_REG_inst", false,-1, 31,0);
        tracep->declBus(c+153,"Core mem mem_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+94,"Core mem mem_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+153,"Core mem waddr", false,-1, 4,0);
        tracep->declBit(c+94,"Core mem wen", false,-1);
        tracep->declQuad(c+96,"Core mem wdata", false,-1, 63,0);
        tracep->declBus(c+23,"Core mem io_waddr_o_REG", false,-1, 4,0);
        tracep->declBit(c+22,"Core mem io_wen_o_REG", false,-1);
        tracep->declQuad(c+24,"Core mem io_wdata_o_REG", false,-1, 63,0);
        tracep->declBit(c+156,"Core wb_dpi clk", false,-1);
        tracep->declBus(c+103,"Core wb_dpi inst", false,-1, 31,0);
        tracep->declBus(c+102,"Core wb_dpi pc", false,-1, 31,0);
        tracep->declBit(c+104,"Core wb_dpi ebreak", false,-1);
        tracep->declBus(c+154,"Core wb_dpi inst1", false,-1, 31,0);
        tracep->declBus(c+155,"Core wb_dpi pc1", false,-1, 31,0);
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
        tracep->fullCData(oldp+3,(((0x37U == (0x7fU 
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
        tracep->fullBit(oldp+4,(((0x37U != (0x7fU & vlSelf->Core__DOT__decode__DOT__inst)) 
                                 & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_601))));
        tracep->fullCData(oldp+5,(((0x37U == (0x7fU 
                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                    ? 3U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_661))),3);
        tracep->fullCData(oldp+6,(((0x37U == (0x7fU 
                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                    ? 2U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_721))),3);
        tracep->fullCData(oldp+7,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 7U))),5);
        tracep->fullIData(oldp+8,(((7U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
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
        tracep->fullBit(oldp+9,((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1))));
        tracep->fullCData(oldp+10,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0xfU))),5);
        tracep->fullBit(oldp+11,((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2))));
        tracep->fullCData(oldp+12,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+13,(vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG));
        tracep->fullQData(oldp+14,(((0U != (0x1fU & 
                                            (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0xfU)))
                                     ? ((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                          & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                             == (0x1fU 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 0xfU)))) 
                                         & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))
                                         ? vlSelf->Core__DOT__execute__DOT__alu_io_alu_out
                                         : ((((IData)(vlSelf->Core__DOT__mem__DOT__wen) 
                                              & ((IData)(vlSelf->Core__DOT__mem__DOT__waddr) 
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
        tracep->fullQData(oldp+16,(((0U != (0x1fU & 
                                            (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U)))
                                     ? ((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                          & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                             == (0x1fU 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 0x14U)))) 
                                         & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))
                                         ? vlSelf->Core__DOT__execute__DOT__alu_io_alu_out
                                         : ((((IData)(vlSelf->Core__DOT__mem__DOT__wen) 
                                              & ((IData)(vlSelf->Core__DOT__mem__DOT__waddr) 
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
        tracep->fullQData(oldp+18,(vlSelf->Core__DOT__decode__DOT__io_rs1_data_o_REG),64);
        tracep->fullQData(oldp+20,(vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG),64);
        tracep->fullBit(oldp+22,(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG));
        tracep->fullCData(oldp+23,(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG),5);
        tracep->fullQData(oldp+24,(vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG),64);
        tracep->fullQData(oldp+26,(vlSelf->Core__DOT__regfile__DOT__rf_0),64);
        tracep->fullQData(oldp+28,(vlSelf->Core__DOT__regfile__DOT__rf_1),64);
        tracep->fullQData(oldp+30,(vlSelf->Core__DOT__regfile__DOT__rf_2),64);
        tracep->fullQData(oldp+32,(vlSelf->Core__DOT__regfile__DOT__rf_3),64);
        tracep->fullQData(oldp+34,(vlSelf->Core__DOT__regfile__DOT__rf_4),64);
        tracep->fullQData(oldp+36,(vlSelf->Core__DOT__regfile__DOT__rf_5),64);
        tracep->fullQData(oldp+38,(vlSelf->Core__DOT__regfile__DOT__rf_6),64);
        tracep->fullQData(oldp+40,(vlSelf->Core__DOT__regfile__DOT__rf_7),64);
        tracep->fullQData(oldp+42,(vlSelf->Core__DOT__regfile__DOT__rf_8),64);
        tracep->fullQData(oldp+44,(vlSelf->Core__DOT__regfile__DOT__rf_9),64);
        tracep->fullQData(oldp+46,(vlSelf->Core__DOT__regfile__DOT__rf_10),64);
        tracep->fullQData(oldp+48,(vlSelf->Core__DOT__regfile__DOT__rf_11),64);
        tracep->fullQData(oldp+50,(vlSelf->Core__DOT__regfile__DOT__rf_12),64);
        tracep->fullQData(oldp+52,(vlSelf->Core__DOT__regfile__DOT__rf_13),64);
        tracep->fullQData(oldp+54,(vlSelf->Core__DOT__regfile__DOT__rf_14),64);
        tracep->fullQData(oldp+56,(vlSelf->Core__DOT__regfile__DOT__rf_15),64);
        tracep->fullQData(oldp+58,(vlSelf->Core__DOT__regfile__DOT__rf_16),64);
        tracep->fullQData(oldp+60,(vlSelf->Core__DOT__regfile__DOT__rf_17),64);
        tracep->fullQData(oldp+62,(vlSelf->Core__DOT__regfile__DOT__rf_18),64);
        tracep->fullQData(oldp+64,(vlSelf->Core__DOT__regfile__DOT__rf_19),64);
        tracep->fullQData(oldp+66,(vlSelf->Core__DOT__regfile__DOT__rf_20),64);
        tracep->fullQData(oldp+68,(vlSelf->Core__DOT__regfile__DOT__rf_21),64);
        tracep->fullQData(oldp+70,(vlSelf->Core__DOT__regfile__DOT__rf_22),64);
        tracep->fullQData(oldp+72,(vlSelf->Core__DOT__regfile__DOT__rf_23),64);
        tracep->fullQData(oldp+74,(vlSelf->Core__DOT__regfile__DOT__rf_24),64);
        tracep->fullQData(oldp+76,(vlSelf->Core__DOT__regfile__DOT__rf_25),64);
        tracep->fullQData(oldp+78,(vlSelf->Core__DOT__regfile__DOT__rf_26),64);
        tracep->fullQData(oldp+80,(vlSelf->Core__DOT__regfile__DOT__rf_27),64);
        tracep->fullQData(oldp+82,(vlSelf->Core__DOT__regfile__DOT__rf_28),64);
        tracep->fullQData(oldp+84,(vlSelf->Core__DOT__regfile__DOT__rf_29),64);
        tracep->fullQData(oldp+86,(vlSelf->Core__DOT__regfile__DOT__rf_30),64);
        tracep->fullQData(oldp+88,(vlSelf->Core__DOT__regfile__DOT__rf_31),64);
        tracep->fullBit(oldp+90,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en));
        tracep->fullIData(oldp+91,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),32);
        tracep->fullQData(oldp+92,(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out),64);
        tracep->fullBit(oldp+94,(vlSelf->Core__DOT__mem__DOT__wen));
        tracep->fullIData(oldp+95,(vlSelf->Core__DOT__mem__DOT__waddr),32);
        tracep->fullQData(oldp+96,(vlSelf->Core__DOT__mem__DOT__wdata),64);
        tracep->fullIData(oldp+98,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc),32);
        tracep->fullIData(oldp+99,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst),32);
        tracep->fullCData(oldp+100,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),5);
        tracep->fullBit(oldp+101,(vlSelf->Core__DOT__execute__DOT__io_is_ebreak_o_REG));
        tracep->fullIData(oldp+102,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc),32);
        tracep->fullIData(oldp+103,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_inst),32);
        tracep->fullBit(oldp+104,(vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG));
        tracep->fullIData(oldp+105,(vlSelf->Core__DOT__fetch__DOT__pc),32);
        tracep->fullIData(oldp+106,((vlSelf->Core__DOT__fetch__DOT__pc 
                                     >> 2U)),30);
        tracep->fullIData(oldp+107,(((IData)(4U) + 
                                     (0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc))),32);
        tracep->fullIData(oldp+108,(vlSelf->Core__DOT__decode__DOT__inst),32);
        tracep->fullCData(oldp+109,(vlSelf->Core__DOT__decode__DOT__c0_1),3);
        tracep->fullCData(oldp+110,(vlSelf->Core__DOT__decode__DOT__c0_2),3);
        tracep->fullBit(oldp+111,(vlSelf->Core__DOT__decode__DOT__c0_3));
        tracep->fullCData(oldp+112,(vlSelf->Core__DOT__decode__DOT__c0_4),3);
        tracep->fullIData(oldp+113,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0x1fffffU
                                      : 0U)),21);
        tracep->fullSData(oldp+114,((0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x14U))),11);
        tracep->fullIData(oldp+115,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0x1fffffU
                                        : 0U) << 0xbU) 
                                     | (0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))),32);
        tracep->fullCData(oldp+116,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0x19U))),6);
        tracep->fullIData(oldp+117,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0x1fffffU
                                        : 0U) << 0xbU) 
                                     | ((0x7e0U & (vlSelf->Core__DOT__decode__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 7U))))),32);
        tracep->fullIData(oldp+118,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0xfffffU
                                      : 0U)),20);
        tracep->fullBit(oldp+119,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 7U))));
        tracep->fullCData(oldp+120,((0xfU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 8U))),4);
        tracep->fullIData(oldp+121,(((((vlSelf->Core__DOT__decode__DOT__inst 
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
        tracep->fullIData(oldp+122,((vlSelf->Core__DOT__decode__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullIData(oldp+123,((0xfffff000U & vlSelf->Core__DOT__decode__DOT__inst)),32);
        tracep->fullSData(oldp+124,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0xfffU
                                      : 0U)),12);
        tracep->fullCData(oldp+125,((0xffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0xcU))),8);
        tracep->fullBit(oldp+126,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x14U))));
        tracep->fullSData(oldp+127,((0x3ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x15U))),10);
        tracep->fullIData(oldp+128,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0xfffU
                                        : 0U) << 0x14U) 
                                     | ((0xff000U & vlSelf->Core__DOT__decode__DOT__inst) 
                                        | ((0x800U 
                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))))),32);
        tracep->fullCData(oldp+129,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0x14U))),6);
        tracep->fullIData(oldp+130,((((0x37U != (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst)) 
                                      & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_601))
                                      ? (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U))
                                      : (0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))),32);
        tracep->fullIData(oldp+131,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0xfU))),32);
        tracep->fullBit(oldp+132,((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                    & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
        tracep->fullBit(oldp+133,((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                    & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
        tracep->fullBit(oldp+134,((((IData)(vlSelf->Core__DOT__mem__DOT__wen) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__waddr) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
        tracep->fullBit(oldp+135,((((IData)(vlSelf->Core__DOT__mem__DOT__wen) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__waddr) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
        tracep->fullBit(oldp+136,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
        tracep->fullBit(oldp+137,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
        tracep->fullQData(oldp+138,(vlSelf->Core__DOT__execute__DOT__alu_io_in1),64);
        tracep->fullQData(oldp+140,(vlSelf->Core__DOT__execute__DOT__alu_io_in2),64);
        tracep->fullCData(oldp+142,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code),4);
        tracep->fullBit(oldp+143,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type));
        tracep->fullCData(oldp+144,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src),3);
        tracep->fullCData(oldp+145,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src),3);
        tracep->fullIData(oldp+146,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm),32);
        tracep->fullIData(oldp+147,(((vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+148,(((IData)(4U) + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)),32);
        tracep->fullQData(oldp+149,(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0),64);
        tracep->fullIData(oldp+151,((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)),32);
        tracep->fullIData(oldp+152,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullCData(oldp+153,(vlSelf->Core__DOT__mem__DOT__waddr),5);
        tracep->fullIData(oldp+154,(vlSelf->Core__DOT__wb_dpi__DOT__inst1),32);
        tracep->fullIData(oldp+155,(vlSelf->Core__DOT__wb_dpi__DOT__pc1),32);
        tracep->fullBit(oldp+156,(vlSelf->clock));
        tracep->fullBit(oldp+157,(vlSelf->reset));
        tracep->fullIData(oldp+158,(vlSelf->io_imem_raddr),32);
        tracep->fullIData(oldp+159,(vlSelf->io_imem_waddr),32);
        tracep->fullQData(oldp+160,(vlSelf->io_imem_wdata),64);
        tracep->fullBit(oldp+162,(vlSelf->io_imem_ren));
        tracep->fullBit(oldp+163,(vlSelf->io_imem_wen));
        tracep->fullCData(oldp+164,(vlSelf->io_imem_wmask),8);
        tracep->fullQData(oldp+165,(vlSelf->io_imem_rdata),64);
        tracep->fullBit(oldp+167,(vlSelf->io_imem_read_ok));
        tracep->fullBit(oldp+168,(vlSelf->io_imem_write_ok));
        tracep->fullIData(oldp+169,(vlSelf->io_dmem_raddr),32);
        tracep->fullIData(oldp+170,(vlSelf->io_dmem_waddr),32);
        tracep->fullQData(oldp+171,(vlSelf->io_dmem_wdata),64);
        tracep->fullBit(oldp+173,(vlSelf->io_dmem_ren));
        tracep->fullBit(oldp+174,(vlSelf->io_dmem_wen));
        tracep->fullCData(oldp+175,(vlSelf->io_dmem_wmask),8);
        tracep->fullQData(oldp+176,(vlSelf->io_dmem_rdata),64);
        tracep->fullBit(oldp+178,(vlSelf->io_dmem_read_ok));
        tracep->fullBit(oldp+179,(vlSelf->io_dmem_write_ok));
        tracep->fullQData(oldp+180,(vlSelf->io_regs_0),64);
        tracep->fullQData(oldp+182,(vlSelf->io_regs_1),64);
        tracep->fullQData(oldp+184,(vlSelf->io_regs_2),64);
        tracep->fullQData(oldp+186,(vlSelf->io_regs_3),64);
        tracep->fullQData(oldp+188,(vlSelf->io_regs_4),64);
        tracep->fullQData(oldp+190,(vlSelf->io_regs_5),64);
        tracep->fullQData(oldp+192,(vlSelf->io_regs_6),64);
        tracep->fullQData(oldp+194,(vlSelf->io_regs_7),64);
        tracep->fullQData(oldp+196,(vlSelf->io_regs_8),64);
        tracep->fullQData(oldp+198,(vlSelf->io_regs_9),64);
        tracep->fullQData(oldp+200,(vlSelf->io_regs_10),64);
        tracep->fullQData(oldp+202,(vlSelf->io_regs_11),64);
        tracep->fullQData(oldp+204,(vlSelf->io_regs_12),64);
        tracep->fullQData(oldp+206,(vlSelf->io_regs_13),64);
        tracep->fullQData(oldp+208,(vlSelf->io_regs_14),64);
        tracep->fullQData(oldp+210,(vlSelf->io_regs_15),64);
        tracep->fullQData(oldp+212,(vlSelf->io_regs_16),64);
        tracep->fullQData(oldp+214,(vlSelf->io_regs_17),64);
        tracep->fullQData(oldp+216,(vlSelf->io_regs_18),64);
        tracep->fullQData(oldp+218,(vlSelf->io_regs_19),64);
        tracep->fullQData(oldp+220,(vlSelf->io_regs_20),64);
        tracep->fullQData(oldp+222,(vlSelf->io_regs_21),64);
        tracep->fullQData(oldp+224,(vlSelf->io_regs_22),64);
        tracep->fullQData(oldp+226,(vlSelf->io_regs_23),64);
        tracep->fullQData(oldp+228,(vlSelf->io_regs_24),64);
        tracep->fullQData(oldp+230,(vlSelf->io_regs_25),64);
        tracep->fullQData(oldp+232,(vlSelf->io_regs_26),64);
        tracep->fullQData(oldp+234,(vlSelf->io_regs_27),64);
        tracep->fullQData(oldp+236,(vlSelf->io_regs_28),64);
        tracep->fullQData(oldp+238,(vlSelf->io_regs_29),64);
        tracep->fullQData(oldp+240,(vlSelf->io_regs_30),64);
        tracep->fullQData(oldp+242,(vlSelf->io_regs_31),64);
        tracep->fullIData(oldp+244,((IData)(vlSelf->io_imem_rdata)),32);
        tracep->fullBit(oldp+245,(((IData)(vlSelf->io_imem_read_ok) 
                                   & (IData)(vlSelf->Core__DOT__decode__DOT__c0_3))));
        tracep->fullBit(oldp+246,((1U & (~ (IData)(vlSelf->io_imem_read_ok)))));
        tracep->fullBit(oldp+247,(1U));
        tracep->fullBit(oldp+248,(0U));
    }
}
