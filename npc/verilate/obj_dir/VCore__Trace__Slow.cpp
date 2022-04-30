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
        tracep->declBit(c+223,"clock", false,-1);
        tracep->declBit(c+224,"reset", false,-1);
        tracep->declBus(c+225,"io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+226,"io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+227,"io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+229,"io_imem_ren", false,-1);
        tracep->declBit(c+230,"io_imem_wen", false,-1);
        tracep->declBus(c+231,"io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+232,"io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+234,"io_imem_read_ok", false,-1);
        tracep->declBit(c+235,"io_imem_write_ok", false,-1);
        tracep->declBus(c+236,"io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+237,"io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+238,"io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+240,"io_dmem_ren", false,-1);
        tracep->declBit(c+241,"io_dmem_wen", false,-1);
        tracep->declBus(c+242,"io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+243,"io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+245,"io_dmem_read_ok", false,-1);
        tracep->declBit(c+246,"io_dmem_write_ok", false,-1);
        tracep->declBus(c+247,"io_commit_pc", false,-1, 31,0);
        tracep->declQuad(c+248,"io_regs_out_0", false,-1, 63,0);
        tracep->declQuad(c+250,"io_regs_out_1", false,-1, 63,0);
        tracep->declQuad(c+252,"io_regs_out_2", false,-1, 63,0);
        tracep->declQuad(c+254,"io_regs_out_3", false,-1, 63,0);
        tracep->declQuad(c+256,"io_regs_out_4", false,-1, 63,0);
        tracep->declQuad(c+258,"io_regs_out_5", false,-1, 63,0);
        tracep->declQuad(c+260,"io_regs_out_6", false,-1, 63,0);
        tracep->declQuad(c+262,"io_regs_out_7", false,-1, 63,0);
        tracep->declQuad(c+264,"io_regs_out_8", false,-1, 63,0);
        tracep->declQuad(c+266,"io_regs_out_9", false,-1, 63,0);
        tracep->declQuad(c+268,"io_regs_out_10", false,-1, 63,0);
        tracep->declQuad(c+270,"io_regs_out_11", false,-1, 63,0);
        tracep->declQuad(c+272,"io_regs_out_12", false,-1, 63,0);
        tracep->declQuad(c+274,"io_regs_out_13", false,-1, 63,0);
        tracep->declQuad(c+276,"io_regs_out_14", false,-1, 63,0);
        tracep->declQuad(c+278,"io_regs_out_15", false,-1, 63,0);
        tracep->declQuad(c+280,"io_regs_out_16", false,-1, 63,0);
        tracep->declQuad(c+282,"io_regs_out_17", false,-1, 63,0);
        tracep->declQuad(c+284,"io_regs_out_18", false,-1, 63,0);
        tracep->declQuad(c+286,"io_regs_out_19", false,-1, 63,0);
        tracep->declQuad(c+288,"io_regs_out_20", false,-1, 63,0);
        tracep->declQuad(c+290,"io_regs_out_21", false,-1, 63,0);
        tracep->declQuad(c+292,"io_regs_out_22", false,-1, 63,0);
        tracep->declQuad(c+294,"io_regs_out_23", false,-1, 63,0);
        tracep->declQuad(c+296,"io_regs_out_24", false,-1, 63,0);
        tracep->declQuad(c+298,"io_regs_out_25", false,-1, 63,0);
        tracep->declQuad(c+300,"io_regs_out_26", false,-1, 63,0);
        tracep->declQuad(c+302,"io_regs_out_27", false,-1, 63,0);
        tracep->declQuad(c+304,"io_regs_out_28", false,-1, 63,0);
        tracep->declQuad(c+306,"io_regs_out_29", false,-1, 63,0);
        tracep->declQuad(c+308,"io_regs_out_30", false,-1, 63,0);
        tracep->declQuad(c+310,"io_regs_out_31", false,-1, 63,0);
        tracep->declQuad(c+312,"io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+314,"io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+316,"io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+318,"io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+320,"io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+322,"io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+324,"io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+326,"io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+328,"io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+330,"io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+332,"io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+334,"io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+336,"io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+338,"io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+340,"io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+342,"io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+344,"io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+346,"io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+348,"io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+350,"io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+352,"io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+354,"io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+356,"io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+358,"io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+360,"io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+362,"io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+364,"io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+366,"io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+368,"io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+370,"io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+372,"io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+374,"io_regs_in_31", false,-1, 63,0);
        tracep->declBus(c+376,"io_pc_in", false,-1, 31,0);
        tracep->declBit(c+377,"io_write_regs", false,-1);
        tracep->declBit(c+378,"io_commit", false,-1);
        tracep->declBit(c+223,"Core clock", false,-1);
        tracep->declBit(c+224,"Core reset", false,-1);
        tracep->declBus(c+225,"Core io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+226,"Core io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+227,"Core io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+229,"Core io_imem_ren", false,-1);
        tracep->declBit(c+230,"Core io_imem_wen", false,-1);
        tracep->declBus(c+231,"Core io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+232,"Core io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+234,"Core io_imem_read_ok", false,-1);
        tracep->declBit(c+235,"Core io_imem_write_ok", false,-1);
        tracep->declBus(c+236,"Core io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+237,"Core io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+238,"Core io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+240,"Core io_dmem_ren", false,-1);
        tracep->declBit(c+241,"Core io_dmem_wen", false,-1);
        tracep->declBus(c+242,"Core io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+243,"Core io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+245,"Core io_dmem_read_ok", false,-1);
        tracep->declBit(c+246,"Core io_dmem_write_ok", false,-1);
        tracep->declBus(c+247,"Core io_commit_pc", false,-1, 31,0);
        tracep->declQuad(c+248,"Core io_regs_out_0", false,-1, 63,0);
        tracep->declQuad(c+250,"Core io_regs_out_1", false,-1, 63,0);
        tracep->declQuad(c+252,"Core io_regs_out_2", false,-1, 63,0);
        tracep->declQuad(c+254,"Core io_regs_out_3", false,-1, 63,0);
        tracep->declQuad(c+256,"Core io_regs_out_4", false,-1, 63,0);
        tracep->declQuad(c+258,"Core io_regs_out_5", false,-1, 63,0);
        tracep->declQuad(c+260,"Core io_regs_out_6", false,-1, 63,0);
        tracep->declQuad(c+262,"Core io_regs_out_7", false,-1, 63,0);
        tracep->declQuad(c+264,"Core io_regs_out_8", false,-1, 63,0);
        tracep->declQuad(c+266,"Core io_regs_out_9", false,-1, 63,0);
        tracep->declQuad(c+268,"Core io_regs_out_10", false,-1, 63,0);
        tracep->declQuad(c+270,"Core io_regs_out_11", false,-1, 63,0);
        tracep->declQuad(c+272,"Core io_regs_out_12", false,-1, 63,0);
        tracep->declQuad(c+274,"Core io_regs_out_13", false,-1, 63,0);
        tracep->declQuad(c+276,"Core io_regs_out_14", false,-1, 63,0);
        tracep->declQuad(c+278,"Core io_regs_out_15", false,-1, 63,0);
        tracep->declQuad(c+280,"Core io_regs_out_16", false,-1, 63,0);
        tracep->declQuad(c+282,"Core io_regs_out_17", false,-1, 63,0);
        tracep->declQuad(c+284,"Core io_regs_out_18", false,-1, 63,0);
        tracep->declQuad(c+286,"Core io_regs_out_19", false,-1, 63,0);
        tracep->declQuad(c+288,"Core io_regs_out_20", false,-1, 63,0);
        tracep->declQuad(c+290,"Core io_regs_out_21", false,-1, 63,0);
        tracep->declQuad(c+292,"Core io_regs_out_22", false,-1, 63,0);
        tracep->declQuad(c+294,"Core io_regs_out_23", false,-1, 63,0);
        tracep->declQuad(c+296,"Core io_regs_out_24", false,-1, 63,0);
        tracep->declQuad(c+298,"Core io_regs_out_25", false,-1, 63,0);
        tracep->declQuad(c+300,"Core io_regs_out_26", false,-1, 63,0);
        tracep->declQuad(c+302,"Core io_regs_out_27", false,-1, 63,0);
        tracep->declQuad(c+304,"Core io_regs_out_28", false,-1, 63,0);
        tracep->declQuad(c+306,"Core io_regs_out_29", false,-1, 63,0);
        tracep->declQuad(c+308,"Core io_regs_out_30", false,-1, 63,0);
        tracep->declQuad(c+310,"Core io_regs_out_31", false,-1, 63,0);
        tracep->declQuad(c+312,"Core io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+314,"Core io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+316,"Core io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+318,"Core io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+320,"Core io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+322,"Core io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+324,"Core io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+326,"Core io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+328,"Core io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+330,"Core io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+332,"Core io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+334,"Core io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+336,"Core io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+338,"Core io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+340,"Core io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+342,"Core io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+344,"Core io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+346,"Core io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+348,"Core io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+350,"Core io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+352,"Core io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+354,"Core io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+356,"Core io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+358,"Core io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+360,"Core io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+362,"Core io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+364,"Core io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+366,"Core io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+368,"Core io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+370,"Core io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+372,"Core io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+374,"Core io_regs_in_31", false,-1, 63,0);
        tracep->declBus(c+376,"Core io_pc_in", false,-1, 31,0);
        tracep->declBit(c+377,"Core io_write_regs", false,-1);
        tracep->declBit(c+378,"Core io_commit", false,-1);
        tracep->declBit(c+223,"Core fetch_clock", false,-1);
        tracep->declBit(c+224,"Core fetch_reset", false,-1);
        tracep->declBus(c+1,"Core fetch_io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+379,"Core fetch_io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+234,"Core fetch_io_imem_resp_bits_rvalid", false,-1);
        tracep->declBus(c+2,"Core fetch_io_imem_resp_bits_old_pc", false,-1, 31,0);
        tracep->declBit(c+209,"Core fetch_io_out_ready", false,-1);
        tracep->declBit(c+381,"Core fetch_io_out_valid", false,-1);
        tracep->declBus(c+2,"Core fetch_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+3,"Core fetch_io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+4,"Core fetch_io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+5,"Core fetch_io_if_flush", false,-1);
        tracep->declBus(c+6,"Core fetch_io_p_npc", false,-1, 31,0);
        tracep->declBus(c+7,"Core fetch_io_jmp_packet_i_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+5,"Core fetch_io_jmp_packet_i_mis", false,-1);
        tracep->declBit(c+377,"Core fetch_io_write_regs", false,-1);
        tracep->declBus(c+376,"Core fetch_io_input_pc", false,-1, 31,0);
        tracep->declBit(c+223,"Core decode_clock", false,-1);
        tracep->declBit(c+224,"Core decode_reset", false,-1);
        tracep->declBit(c+209,"Core decode_io_in_ready", false,-1);
        tracep->declBus(c+2,"Core decode_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+3,"Core decode_io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+4,"Core decode_io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+209,"Core decode_io_out_ready", false,-1);
        tracep->declBit(c+381,"Core decode_io_out_valid", false,-1);
        tracep->declBit(c+8,"Core decode_io_out_bits_valid", false,-1);
        tracep->declBus(c+9,"Core decode_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+10,"Core decode_io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+11,"Core decode_io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+12,"Core decode_io_out_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+13,"Core decode_io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+14,"Core decode_io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBit(c+15,"Core decode_io_out_bits_w_type", false,-1);
        tracep->declBus(c+16,"Core decode_io_out_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+17,"Core decode_io_out_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+18,"Core decode_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+19,"Core decode_io_out_bits_rd_en", false,-1);
        tracep->declBus(c+20,"Core decode_io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+5,"Core decode_io_id_flush", false,-1);
        tracep->declBit(c+21,"Core decode_io_ren1", false,-1);
        tracep->declBus(c+22,"Core decode_io_raddr1", false,-1, 4,0);
        tracep->declBit(c+23,"Core decode_io_ren2", false,-1);
        tracep->declBus(c+24,"Core decode_io_raddr2", false,-1, 4,0);
        tracep->declBit(c+25,"Core decode_io_is_ebreak", false,-1);
        tracep->declQuad(c+199,"Core decode_io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+201,"Core decode_io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+26,"Core decode_io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+28,"Core decode_io_rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+6,"Core decode_io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+30,"Core decode_io_p_npc_o", false,-1, 31,0);
        tracep->declBit(c+223,"Core regfile_clock", false,-1);
        tracep->declBit(c+224,"Core regfile_reset", false,-1);
        tracep->declBit(c+21,"Core regfile_io_ren1", false,-1);
        tracep->declBus(c+22,"Core regfile_io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+199,"Core regfile_io_rdata1", false,-1, 63,0);
        tracep->declBit(c+23,"Core regfile_io_ren2", false,-1);
        tracep->declBus(c+24,"Core regfile_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+201,"Core regfile_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+31,"Core regfile_io_wen", false,-1);
        tracep->declBus(c+32,"Core regfile_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+210,"Core regfile_io_wdata", false,-1, 63,0);
        tracep->declQuad(c+33,"Core regfile_io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+35,"Core regfile_io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+37,"Core regfile_io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+39,"Core regfile_io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+41,"Core regfile_io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+43,"Core regfile_io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+45,"Core regfile_io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+47,"Core regfile_io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+49,"Core regfile_io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+51,"Core regfile_io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+53,"Core regfile_io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+55,"Core regfile_io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+57,"Core regfile_io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+59,"Core regfile_io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+61,"Core regfile_io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+63,"Core regfile_io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+65,"Core regfile_io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+67,"Core regfile_io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+69,"Core regfile_io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+71,"Core regfile_io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+73,"Core regfile_io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+75,"Core regfile_io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+77,"Core regfile_io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+79,"Core regfile_io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+81,"Core regfile_io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+83,"Core regfile_io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+85,"Core regfile_io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+87,"Core regfile_io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+89,"Core regfile_io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+91,"Core regfile_io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+93,"Core regfile_io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+95,"Core regfile_io_regs_31", false,-1, 63,0);
        tracep->declBit(c+97,"Core regfile_io_ex_rd_en", false,-1);
        tracep->declBus(c+98,"Core regfile_io_ex_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+99,"Core regfile_io_ex_rd_data", false,-1, 63,0);
        tracep->declBit(c+101,"Core regfile_io_mem_rd_en", false,-1);
        tracep->declBus(c+102,"Core regfile_io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+103,"Core regfile_io_mem_rd_data", false,-1, 63,0);
        tracep->declQuad(c+312,"Core regfile_io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+314,"Core regfile_io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+316,"Core regfile_io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+318,"Core regfile_io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+320,"Core regfile_io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+322,"Core regfile_io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+324,"Core regfile_io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+326,"Core regfile_io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+328,"Core regfile_io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+330,"Core regfile_io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+332,"Core regfile_io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+334,"Core regfile_io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+336,"Core regfile_io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+338,"Core regfile_io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+340,"Core regfile_io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+342,"Core regfile_io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+344,"Core regfile_io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+346,"Core regfile_io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+348,"Core regfile_io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+350,"Core regfile_io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+352,"Core regfile_io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+354,"Core regfile_io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+356,"Core regfile_io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+358,"Core regfile_io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+360,"Core regfile_io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+362,"Core regfile_io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+364,"Core regfile_io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+366,"Core regfile_io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+368,"Core regfile_io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+370,"Core regfile_io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+372,"Core regfile_io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+374,"Core regfile_io_regs_in_31", false,-1, 63,0);
        tracep->declBit(c+377,"Core regfile_io_write_regs", false,-1);
        tracep->declBit(c+223,"Core execute_clock", false,-1);
        tracep->declBit(c+224,"Core execute_reset", false,-1);
        tracep->declBit(c+209,"Core execute_io_in_ready", false,-1);
        tracep->declBit(c+8,"Core execute_io_in_bits_valid", false,-1);
        tracep->declBus(c+9,"Core execute_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+10,"Core execute_io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+11,"Core execute_io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+12,"Core execute_io_in_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+13,"Core execute_io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+14,"Core execute_io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBit(c+15,"Core execute_io_in_bits_w_type", false,-1);
        tracep->declBus(c+16,"Core execute_io_in_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+17,"Core execute_io_in_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+18,"Core execute_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+19,"Core execute_io_in_bits_rd_en", false,-1);
        tracep->declBus(c+20,"Core execute_io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+209,"Core execute_io_out_ready", false,-1);
        tracep->declBit(c+381,"Core execute_io_out_valid", false,-1);
        tracep->declBit(c+105,"Core execute_io_out_bits_valid", false,-1);
        tracep->declBus(c+106,"Core execute_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+107,"Core execute_io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+108,"Core execute_io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+109,"Core execute_io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+110,"Core execute_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+97,"Core execute_io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+26,"Core execute_io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+28,"Core execute_io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+99,"Core execute_io_ex_data_o", false,-1, 63,0);
        tracep->declBit(c+25,"Core execute_io_is_ebreak_i", false,-1);
        tracep->declBit(c+111,"Core execute_io_is_ebreak_o", false,-1);
        tracep->declBus(c+112,"Core execute_io_ex_rwaddr_o", false,-1, 31,0);
        tracep->declBit(c+113,"Core execute_io_ex_rvalid_o", false,-1);
        tracep->declBit(c+114,"Core execute_io_ex_wvalid_o", false,-1);
        tracep->declQuad(c+28,"Core execute_io_ex_wdata_o", false,-1, 63,0);
        tracep->declBit(c+97,"Core execute_io_ex_rd_en", false,-1);
        tracep->declBus(c+98,"Core execute_io_ex_rd_addr", false,-1, 31,0);
        tracep->declBus(c+30,"Core execute_io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+7,"Core execute_io_jmp_packet_o_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+5,"Core execute_io_jmp_packet_o_mis", false,-1);
        tracep->declBit(c+223,"Core mem_clock", false,-1);
        tracep->declBit(c+224,"Core mem_reset", false,-1);
        tracep->declBit(c+209,"Core mem_io_in_ready", false,-1);
        tracep->declBit(c+105,"Core mem_io_in_bits_valid", false,-1);
        tracep->declBus(c+106,"Core mem_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+107,"Core mem_io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+108,"Core mem_io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+109,"Core mem_io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+110,"Core mem_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+97,"Core mem_io_in_bits_rd_en", false,-1);
        tracep->declBit(c+115,"Core mem_io_out_bits_valid", false,-1);
        tracep->declBus(c+116,"Core mem_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+117,"Core mem_io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+99,"Core mem_io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+32,"Core mem_io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+31,"Core mem_io_wen_o", false,-1);
        tracep->declQuad(c+210,"Core mem_io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+111,"Core mem_io_is_ebreak_i", false,-1);
        tracep->declBit(c+118,"Core mem_io_is_ebreak_o", false,-1);
        tracep->declBus(c+119,"Core mem_io_dmem_req_bits_arwaddr", false,-1, 31,0);
        tracep->declBit(c+113,"Core mem_io_dmem_req_bits_rvalid", false,-1);
        tracep->declBit(c+114,"Core mem_io_dmem_req_bits_wvalid", false,-1);
        tracep->declQuad(c+120,"Core mem_io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+122,"Core mem_io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declQuad(c+243,"Core mem_io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+245,"Core mem_io_dmem_resp_bits_rready", false,-1);
        tracep->declBit(c+246,"Core mem_io_dmem_resp_bits_wready", false,-1);
        tracep->declBus(c+112,"Core mem_io_mem_rwaddr_i", false,-1, 31,0);
        tracep->declBit(c+113,"Core mem_io_mem_rvalid_i", false,-1);
        tracep->declBit(c+114,"Core mem_io_mem_wvalid_i", false,-1);
        tracep->declQuad(c+28,"Core mem_io_mem_wdata_i", false,-1, 63,0);
        tracep->declBus(c+123,"Core mem_io_reg_mem_addr_i", false,-1, 31,0);
        tracep->declBit(c+101,"Core mem_io_mem_rd_en", false,-1);
        tracep->declBus(c+102,"Core mem_io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+103,"Core mem_io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+223,"Core wb_dpi_clk", false,-1);
        tracep->declBus(c+117,"Core wb_dpi_inst", false,-1, 31,0);
        tracep->declBus(c+116,"Core wb_dpi_pc", false,-1, 31,0);
        tracep->declBit(c+118,"Core wb_dpi_ebreak", false,-1);
        tracep->declBus(c+2,"Core fetch_io_imem_resp_bits_old_pc_REG", false,-1, 31,0);
        tracep->declBus(c+123,"Core mem_io_reg_mem_addr_i_REG", false,-1, 31,0);
        tracep->declBus(c+124,"Core io_commit_pc_REG", false,-1, 31,0);
        tracep->declBit(c+125,"Core io_commit_REG", false,-1);
        tracep->declBit(c+223,"Core fetch clock", false,-1);
        tracep->declBit(c+224,"Core fetch reset", false,-1);
        tracep->declBus(c+1,"Core fetch io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+379,"Core fetch io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+234,"Core fetch io_imem_resp_bits_rvalid", false,-1);
        tracep->declBus(c+2,"Core fetch io_imem_resp_bits_old_pc", false,-1, 31,0);
        tracep->declBit(c+209,"Core fetch io_out_ready", false,-1);
        tracep->declBit(c+381,"Core fetch io_out_valid", false,-1);
        tracep->declBus(c+2,"Core fetch io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+3,"Core fetch io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+4,"Core fetch io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+5,"Core fetch io_if_flush", false,-1);
        tracep->declBus(c+6,"Core fetch io_p_npc", false,-1, 31,0);
        tracep->declBus(c+7,"Core fetch io_jmp_packet_i_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+5,"Core fetch io_jmp_packet_i_mis", false,-1);
        tracep->declBit(c+377,"Core fetch io_write_regs", false,-1);
        tracep->declBus(c+376,"Core fetch io_input_pc", false,-1, 31,0);
        tracep->declBus(c+126,"Core fetch pc", false,-1, 31,0);
        tracep->declBus(c+127,"Core fetch pc_base_hi", false,-1, 29,0);
        tracep->declBus(c+1,"Core fetch pc_base", false,-1, 31,0);
        tracep->declBus(c+128,"Core fetch npc_s", false,-1, 31,0);
        tracep->declBit(c+380,"Core fetch stall", false,-1);
        tracep->declBus(c+6,"Core fetch io_p_npc_REG", false,-1, 31,0);
        tracep->declBus(c+3,"Core fetch io_out_bits_inst_REG", false,-1, 31,0);
        tracep->declBit(c+4,"Core fetch io_out_bits_inst_valid_REG", false,-1);
        tracep->declBit(c+223,"Core decode clock", false,-1);
        tracep->declBit(c+224,"Core decode reset", false,-1);
        tracep->declBit(c+209,"Core decode io_in_ready", false,-1);
        tracep->declBus(c+2,"Core decode io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+3,"Core decode io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+4,"Core decode io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+209,"Core decode io_out_ready", false,-1);
        tracep->declBit(c+381,"Core decode io_out_valid", false,-1);
        tracep->declBit(c+8,"Core decode io_out_bits_valid", false,-1);
        tracep->declBus(c+9,"Core decode io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+10,"Core decode io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+11,"Core decode io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+12,"Core decode io_out_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+13,"Core decode io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+14,"Core decode io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBit(c+15,"Core decode io_out_bits_w_type", false,-1);
        tracep->declBus(c+16,"Core decode io_out_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+17,"Core decode io_out_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+18,"Core decode io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+19,"Core decode io_out_bits_rd_en", false,-1);
        tracep->declBus(c+20,"Core decode io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+5,"Core decode io_id_flush", false,-1);
        tracep->declBit(c+21,"Core decode io_ren1", false,-1);
        tracep->declBus(c+22,"Core decode io_raddr1", false,-1, 4,0);
        tracep->declBit(c+23,"Core decode io_ren2", false,-1);
        tracep->declBus(c+24,"Core decode io_raddr2", false,-1, 4,0);
        tracep->declBit(c+25,"Core decode io_is_ebreak", false,-1);
        tracep->declQuad(c+199,"Core decode io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+201,"Core decode io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+26,"Core decode io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+28,"Core decode io_rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+6,"Core decode io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+30,"Core decode io_p_npc_o", false,-1, 31,0);
        tracep->declBus(c+9,"Core decode pc", false,-1, 31,0);
        tracep->declBus(c+10,"Core decode inst", false,-1, 31,0);
        tracep->declBit(c+129,"Core decode inst_valid", false,-1);
        tracep->declQuad(c+26,"Core decode io_rs1_data_o_REG", false,-1, 63,0);
        tracep->declQuad(c+28,"Core decode io_rs2_data_o_REG", false,-1, 63,0);
        tracep->declBit(c+15,"Core decode c0_0", false,-1);
        tracep->declBus(c+130,"Core decode c0_1", false,-1, 2,0);
        tracep->declBus(c+131,"Core decode c0_2", false,-1, 2,0);
        tracep->declBit(c+132,"Core decode c0_3", false,-1);
        tracep->declBus(c+133,"Core decode c0_4", false,-1, 2,0);
        tracep->declBit(c+134,"Core decode io_is_ebreak_REG", false,-1);
        tracep->declBus(c+30,"Core decode io_p_npc_o_REG", false,-1, 31,0);
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
        tracep->declBit(c+212,"Core decode stall", false,-1);
        tracep->declBit(c+223,"Core regfile clock", false,-1);
        tracep->declBit(c+224,"Core regfile reset", false,-1);
        tracep->declBit(c+21,"Core regfile io_ren1", false,-1);
        tracep->declBus(c+22,"Core regfile io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+199,"Core regfile io_rdata1", false,-1, 63,0);
        tracep->declBit(c+23,"Core regfile io_ren2", false,-1);
        tracep->declBus(c+24,"Core regfile io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+201,"Core regfile io_rdata2", false,-1, 63,0);
        tracep->declBit(c+31,"Core regfile io_wen", false,-1);
        tracep->declBus(c+32,"Core regfile io_waddr", false,-1, 4,0);
        tracep->declQuad(c+210,"Core regfile io_wdata", false,-1, 63,0);
        tracep->declQuad(c+33,"Core regfile io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+35,"Core regfile io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+37,"Core regfile io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+39,"Core regfile io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+41,"Core regfile io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+43,"Core regfile io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+45,"Core regfile io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+47,"Core regfile io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+49,"Core regfile io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+51,"Core regfile io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+53,"Core regfile io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+55,"Core regfile io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+57,"Core regfile io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+59,"Core regfile io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+61,"Core regfile io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+63,"Core regfile io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+65,"Core regfile io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+67,"Core regfile io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+69,"Core regfile io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+71,"Core regfile io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+73,"Core regfile io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+75,"Core regfile io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+77,"Core regfile io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+79,"Core regfile io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+81,"Core regfile io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+83,"Core regfile io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+85,"Core regfile io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+87,"Core regfile io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+89,"Core regfile io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+91,"Core regfile io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+93,"Core regfile io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+95,"Core regfile io_regs_31", false,-1, 63,0);
        tracep->declBit(c+97,"Core regfile io_ex_rd_en", false,-1);
        tracep->declBus(c+98,"Core regfile io_ex_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+99,"Core regfile io_ex_rd_data", false,-1, 63,0);
        tracep->declBit(c+101,"Core regfile io_mem_rd_en", false,-1);
        tracep->declBus(c+102,"Core regfile io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+103,"Core regfile io_mem_rd_data", false,-1, 63,0);
        tracep->declQuad(c+312,"Core regfile io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+314,"Core regfile io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+316,"Core regfile io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+318,"Core regfile io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+320,"Core regfile io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+322,"Core regfile io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+324,"Core regfile io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+326,"Core regfile io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+328,"Core regfile io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+330,"Core regfile io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+332,"Core regfile io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+334,"Core regfile io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+336,"Core regfile io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+338,"Core regfile io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+340,"Core regfile io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+342,"Core regfile io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+344,"Core regfile io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+346,"Core regfile io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+348,"Core regfile io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+350,"Core regfile io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+352,"Core regfile io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+354,"Core regfile io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+356,"Core regfile io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+358,"Core regfile io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+360,"Core regfile io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+362,"Core regfile io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+364,"Core regfile io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+366,"Core regfile io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+368,"Core regfile io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+370,"Core regfile io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+372,"Core regfile io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+374,"Core regfile io_regs_in_31", false,-1, 63,0);
        tracep->declBit(c+377,"Core regfile io_write_regs", false,-1);
        tracep->declBit(c+154,"Core regfile ex_rs1_hazard", false,-1);
        tracep->declBit(c+155,"Core regfile ex_rs2_hazard", false,-1);
        tracep->declBit(c+156,"Core regfile mem_rs1_hazard", false,-1);
        tracep->declBit(c+157,"Core regfile mem_rs2_hazard", false,-1);
        tracep->declBit(c+158,"Core regfile wb_rs1_hazard", false,-1);
        tracep->declBit(c+159,"Core regfile wb_rs2_hazard", false,-1);
        tracep->declQuad(c+33,"Core regfile rf_0", false,-1, 63,0);
        tracep->declQuad(c+35,"Core regfile rf_1", false,-1, 63,0);
        tracep->declQuad(c+37,"Core regfile rf_2", false,-1, 63,0);
        tracep->declQuad(c+39,"Core regfile rf_3", false,-1, 63,0);
        tracep->declQuad(c+41,"Core regfile rf_4", false,-1, 63,0);
        tracep->declQuad(c+43,"Core regfile rf_5", false,-1, 63,0);
        tracep->declQuad(c+45,"Core regfile rf_6", false,-1, 63,0);
        tracep->declQuad(c+47,"Core regfile rf_7", false,-1, 63,0);
        tracep->declQuad(c+49,"Core regfile rf_8", false,-1, 63,0);
        tracep->declQuad(c+51,"Core regfile rf_9", false,-1, 63,0);
        tracep->declQuad(c+53,"Core regfile rf_10", false,-1, 63,0);
        tracep->declQuad(c+55,"Core regfile rf_11", false,-1, 63,0);
        tracep->declQuad(c+57,"Core regfile rf_12", false,-1, 63,0);
        tracep->declQuad(c+59,"Core regfile rf_13", false,-1, 63,0);
        tracep->declQuad(c+61,"Core regfile rf_14", false,-1, 63,0);
        tracep->declQuad(c+63,"Core regfile rf_15", false,-1, 63,0);
        tracep->declQuad(c+65,"Core regfile rf_16", false,-1, 63,0);
        tracep->declQuad(c+67,"Core regfile rf_17", false,-1, 63,0);
        tracep->declQuad(c+69,"Core regfile rf_18", false,-1, 63,0);
        tracep->declQuad(c+71,"Core regfile rf_19", false,-1, 63,0);
        tracep->declQuad(c+73,"Core regfile rf_20", false,-1, 63,0);
        tracep->declQuad(c+75,"Core regfile rf_21", false,-1, 63,0);
        tracep->declQuad(c+77,"Core regfile rf_22", false,-1, 63,0);
        tracep->declQuad(c+79,"Core regfile rf_23", false,-1, 63,0);
        tracep->declQuad(c+81,"Core regfile rf_24", false,-1, 63,0);
        tracep->declQuad(c+83,"Core regfile rf_25", false,-1, 63,0);
        tracep->declQuad(c+85,"Core regfile rf_26", false,-1, 63,0);
        tracep->declQuad(c+87,"Core regfile rf_27", false,-1, 63,0);
        tracep->declQuad(c+89,"Core regfile rf_28", false,-1, 63,0);
        tracep->declQuad(c+91,"Core regfile rf_29", false,-1, 63,0);
        tracep->declQuad(c+93,"Core regfile rf_30", false,-1, 63,0);
        tracep->declQuad(c+95,"Core regfile rf_31", false,-1, 63,0);
        tracep->declBit(c+223,"Core execute clock", false,-1);
        tracep->declBit(c+224,"Core execute reset", false,-1);
        tracep->declBit(c+209,"Core execute io_in_ready", false,-1);
        tracep->declBit(c+8,"Core execute io_in_bits_valid", false,-1);
        tracep->declBus(c+9,"Core execute io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+10,"Core execute io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+11,"Core execute io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+12,"Core execute io_in_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+13,"Core execute io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+14,"Core execute io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBit(c+15,"Core execute io_in_bits_w_type", false,-1);
        tracep->declBus(c+16,"Core execute io_in_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+17,"Core execute io_in_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+18,"Core execute io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+19,"Core execute io_in_bits_rd_en", false,-1);
        tracep->declBus(c+20,"Core execute io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+209,"Core execute io_out_ready", false,-1);
        tracep->declBit(c+381,"Core execute io_out_valid", false,-1);
        tracep->declBit(c+105,"Core execute io_out_bits_valid", false,-1);
        tracep->declBus(c+106,"Core execute io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+107,"Core execute io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+108,"Core execute io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+109,"Core execute io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+110,"Core execute io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+97,"Core execute io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+26,"Core execute io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+28,"Core execute io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+99,"Core execute io_ex_data_o", false,-1, 63,0);
        tracep->declBit(c+25,"Core execute io_is_ebreak_i", false,-1);
        tracep->declBit(c+111,"Core execute io_is_ebreak_o", false,-1);
        tracep->declBus(c+112,"Core execute io_ex_rwaddr_o", false,-1, 31,0);
        tracep->declBit(c+113,"Core execute io_ex_rvalid_o", false,-1);
        tracep->declBit(c+114,"Core execute io_ex_wvalid_o", false,-1);
        tracep->declQuad(c+28,"Core execute io_ex_wdata_o", false,-1, 63,0);
        tracep->declBit(c+97,"Core execute io_ex_rd_en", false,-1);
        tracep->declBus(c+98,"Core execute io_ex_rd_addr", false,-1, 31,0);
        tracep->declBus(c+30,"Core execute io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+7,"Core execute io_jmp_packet_o_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+5,"Core execute io_jmp_packet_o_mis", false,-1);
        tracep->declQuad(c+160,"Core execute alu_io_in1", false,-1, 63,0);
        tracep->declQuad(c+162,"Core execute alu_io_in2", false,-1, 63,0);
        tracep->declBus(c+164,"Core execute alu_io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+165,"Core execute alu_io_wtype_i", false,-1);
        tracep->declQuad(c+99,"Core execute alu_io_alu_out", false,-1, 63,0);
        tracep->declBit(c+166,"Core execute alu_io_jmp", false,-1);
        tracep->declBus(c+167,"Core execute alu_io_jmp_code", false,-1, 3,0);
        tracep->declBus(c+168,"Core execute alu_io_imm", false,-1, 31,0);
        tracep->declBus(c+106,"Core execute alu_io_pc_i", false,-1, 31,0);
        tracep->declBus(c+169,"Core execute alu_io_jmp_pc", false,-1, 31,0);
        tracep->declBit(c+212,"Core execute stall", false,-1);
        tracep->declBit(c+111,"Core execute io_is_ebreak_o_REG", false,-1);
        tracep->declBit(c+105,"Core execute ex_reg_decodeop_valid", false,-1);
        tracep->declBus(c+106,"Core execute ex_reg_decodeop_pc", false,-1, 31,0);
        tracep->declBus(c+107,"Core execute ex_reg_decodeop_inst", false,-1, 31,0);
        tracep->declBus(c+164,"Core execute ex_reg_decodeop_alu_code", false,-1, 3,0);
        tracep->declBus(c+167,"Core execute ex_reg_decodeop_jmp_code", false,-1, 3,0);
        tracep->declBus(c+108,"Core execute ex_reg_decodeop_mem_code", false,-1, 1,0);
        tracep->declBus(c+109,"Core execute ex_reg_decodeop_mem_size", false,-1, 1,0);
        tracep->declBit(c+165,"Core execute ex_reg_decodeop_w_type", false,-1);
        tracep->declBus(c+170,"Core execute ex_reg_decodeop_rs1_src", false,-1, 2,0);
        tracep->declBus(c+171,"Core execute ex_reg_decodeop_rs2_src", false,-1, 2,0);
        tracep->declBus(c+110,"Core execute ex_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+97,"Core execute ex_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+168,"Core execute ex_reg_decodeop_imm", false,-1, 31,0);
        tracep->declBus(c+172,"Core execute rs1_temp_hi", false,-1, 31,0);
        tracep->declBus(c+173,"Core execute rs1_temp_lo", false,-1, 31,0);
        tracep->declBus(c+7,"Core execute real_npc", false,-1, 31,0);
        tracep->declQuad(c+160,"Core execute alu io_in1", false,-1, 63,0);
        tracep->declQuad(c+162,"Core execute alu io_in2", false,-1, 63,0);
        tracep->declBus(c+164,"Core execute alu io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+165,"Core execute alu io_wtype_i", false,-1);
        tracep->declQuad(c+99,"Core execute alu io_alu_out", false,-1, 63,0);
        tracep->declBit(c+166,"Core execute alu io_jmp", false,-1);
        tracep->declBus(c+167,"Core execute alu io_jmp_code", false,-1, 3,0);
        tracep->declBus(c+168,"Core execute alu io_imm", false,-1, 31,0);
        tracep->declBus(c+106,"Core execute alu io_pc_i", false,-1, 31,0);
        tracep->declBus(c+169,"Core execute alu io_jmp_pc", false,-1, 31,0);
        tracep->declBus(c+174,"Core execute alu shamt", false,-1, 5,0);
        tracep->declQuad(c+175,"Core execute alu out0", false,-1, 63,0);
        tracep->declBus(c+177,"Core execute alu out1_lo", false,-1, 31,0);
        tracep->declBus(c+178,"Core execute alu out1_hi", false,-1, 31,0);
        tracep->declBit(c+223,"Core mem clock", false,-1);
        tracep->declBit(c+224,"Core mem reset", false,-1);
        tracep->declBit(c+209,"Core mem io_in_ready", false,-1);
        tracep->declBit(c+105,"Core mem io_in_bits_valid", false,-1);
        tracep->declBus(c+106,"Core mem io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+107,"Core mem io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+108,"Core mem io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+109,"Core mem io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+110,"Core mem io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+97,"Core mem io_in_bits_rd_en", false,-1);
        tracep->declBit(c+115,"Core mem io_out_bits_valid", false,-1);
        tracep->declBus(c+116,"Core mem io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+117,"Core mem io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+99,"Core mem io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+32,"Core mem io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+31,"Core mem io_wen_o", false,-1);
        tracep->declQuad(c+210,"Core mem io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+111,"Core mem io_is_ebreak_i", false,-1);
        tracep->declBit(c+118,"Core mem io_is_ebreak_o", false,-1);
        tracep->declBus(c+119,"Core mem io_dmem_req_bits_arwaddr", false,-1, 31,0);
        tracep->declBit(c+113,"Core mem io_dmem_req_bits_rvalid", false,-1);
        tracep->declBit(c+114,"Core mem io_dmem_req_bits_wvalid", false,-1);
        tracep->declQuad(c+120,"Core mem io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+122,"Core mem io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declQuad(c+243,"Core mem io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+245,"Core mem io_dmem_resp_bits_rready", false,-1);
        tracep->declBit(c+246,"Core mem io_dmem_resp_bits_wready", false,-1);
        tracep->declBus(c+112,"Core mem io_mem_rwaddr_i", false,-1, 31,0);
        tracep->declBit(c+113,"Core mem io_mem_rvalid_i", false,-1);
        tracep->declBit(c+114,"Core mem io_mem_wvalid_i", false,-1);
        tracep->declQuad(c+28,"Core mem io_mem_wdata_i", false,-1, 63,0);
        tracep->declBus(c+123,"Core mem io_reg_mem_addr_i", false,-1, 31,0);
        tracep->declBit(c+101,"Core mem io_mem_rd_en", false,-1);
        tracep->declBus(c+102,"Core mem io_mem_rd_addr", false,-1, 31,0);
        tracep->declQuad(c+103,"Core mem io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+118,"Core mem io_is_ebreak_o_REG", false,-1);
        tracep->declBit(c+179,"Core mem mem_reg_decodeop_valid", false,-1);
        tracep->declBus(c+180,"Core mem mem_reg_decodeop_pc", false,-1, 31,0);
        tracep->declBus(c+181,"Core mem mem_reg_decodeop_inst", false,-1, 31,0);
        tracep->declBus(c+182,"Core mem mem_reg_decodeop_mem_code", false,-1, 1,0);
        tracep->declBus(c+183,"Core mem mem_reg_decodeop_mem_size", false,-1, 1,0);
        tracep->declBus(c+184,"Core mem mem_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+101,"Core mem mem_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+185,"Core mem waddr", false,-1, 4,0);
        tracep->declBit(c+186,"Core mem wen", false,-1);
        tracep->declQuad(c+103,"Core mem wdata", false,-1, 63,0);
        tracep->declBus(c+187,"Core mem reg_mem_addr", false,-1, 31,0);
        tracep->declBit(c+188,"Core mem is_load", false,-1);
        tracep->declBit(c+189,"Core mem is_store", false,-1);
        tracep->declBus(c+190,"Core mem addr_offset", false,-1, 2,0);
        tracep->declBus(c+191,"Core mem reg_addr_offset", false,-1, 2,0);
        tracep->declBus(c+192,"Core mem mask", false,-1, 7,0);
        tracep->declBus(c+193,"Core mem wmask", false,-1, 7,0);
        tracep->declBus(c+194,"Core mem io_dmem_req_bits_arwaddr_hi", false,-1, 28,0);
        tracep->declQuad(c+213,"Core mem ld_data_raw", false,-1, 63,0);
        tracep->declQuad(c+215,"Core mem ld_data_hi", false,-1, 55,0);
        tracep->declBus(c+217,"Core mem ld_data_lo", false,-1, 7,0);
        tracep->declQuad(c+218,"Core mem ld_data_hi_1", false,-1, 47,0);
        tracep->declBus(c+220,"Core mem ld_data_lo_1", false,-1, 15,0);
        tracep->declBus(c+221,"Core mem ld_data_hi_2", false,-1, 31,0);
        tracep->declBus(c+222,"Core mem ld_data_lo_2", false,-1, 31,0);
        tracep->declQuad(c+203,"Core mem ld_data", false,-1, 63,0);
        tracep->declQuad(c+205,"Core mem ld_data_u", false,-1, 63,0);
        tracep->declQuad(c+207,"Core mem load_data", false,-1, 63,0);
        tracep->declBit(c+212,"Core mem req_wait", false,-1);
        tracep->declBit(c+115,"Core mem io_out_bits_REG_valid", false,-1);
        tracep->declBus(c+116,"Core mem io_out_bits_REG_pc", false,-1, 31,0);
        tracep->declBus(c+117,"Core mem io_out_bits_REG_inst", false,-1, 31,0);
        tracep->declBus(c+32,"Core mem io_waddr_o_REG", false,-1, 4,0);
        tracep->declBit(c+31,"Core mem io_wen_o_REG", false,-1);
        tracep->declQuad(c+195,"Core mem io_wdata_o_REG", false,-1, 63,0);
        tracep->declBit(c+223,"Core wb_dpi clk", false,-1);
        tracep->declBus(c+117,"Core wb_dpi inst", false,-1, 31,0);
        tracep->declBus(c+116,"Core wb_dpi pc", false,-1, 31,0);
        tracep->declBit(c+118,"Core wb_dpi ebreak", false,-1);
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
        tracep->fullBit(oldp+8,(((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
                                 & (IData)(vlSelf->Core__DOT__decode__DOT__inst_valid))));
        tracep->fullIData(oldp+9,(vlSelf->Core__DOT__decode__DOT__pc),32);
        tracep->fullIData(oldp+10,(vlSelf->Core__DOT__decode__DOT__inst),32);
        tracep->fullCData(oldp+11,(((0x37U == (0x7fU 
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
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 0U
                                                      : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_295))))))))),4);
        tracep->fullCData(oldp+12,(((0x37U == (0x7fU 
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
        tracep->fullCData(oldp+13,(vlSelf->Core__DOT__decode_io_out_bits_mem_code),2);
        tracep->fullCData(oldp+14,(((0x37U == (0x7fU 
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
                                                           : 
                                                          ((0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 2U
                                                            : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_469))))))))))))))),2);
        tracep->fullBit(oldp+15,(((0x37U != (0x7fU 
                                             & vlSelf->Core__DOT__decode__DOT__inst)) 
                                  & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_601))));
        tracep->fullCData(oldp+16,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 3U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_661))),3);
        tracep->fullCData(oldp+17,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 2U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_721))),3);
        tracep->fullCData(oldp+18,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 7U))),5);
        tracep->fullBit(oldp+19,(((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
                                  & ((IData)(vlSelf->Core__DOT__decode__DOT__inst_valid) 
                                     & (IData)(vlSelf->Core__DOT__decode__DOT__c0_3)))));
        tracep->fullIData(oldp+20,(((7U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
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
        tracep->fullBit(oldp+21,((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1))));
        tracep->fullCData(oldp+22,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0xfU))),5);
        tracep->fullBit(oldp+23,((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2))));
        tracep->fullCData(oldp+24,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+25,(((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
                                  & ((IData)(vlSelf->Core__DOT__decode__DOT__inst_valid) 
                                     & (IData)(vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG)))));
        tracep->fullQData(oldp+26,(vlSelf->Core__DOT__decode__DOT__io_rs1_data_o_REG),64);
        tracep->fullQData(oldp+28,(vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG),64);
        tracep->fullIData(oldp+30,(vlSelf->Core__DOT__decode__DOT__io_p_npc_o_REG),32);
        tracep->fullBit(oldp+31,(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG));
        tracep->fullCData(oldp+32,(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG),5);
        tracep->fullQData(oldp+33,(vlSelf->Core__DOT__regfile__DOT__rf_0),64);
        tracep->fullQData(oldp+35,(vlSelf->Core__DOT__regfile__DOT__rf_1),64);
        tracep->fullQData(oldp+37,(vlSelf->Core__DOT__regfile__DOT__rf_2),64);
        tracep->fullQData(oldp+39,(vlSelf->Core__DOT__regfile__DOT__rf_3),64);
        tracep->fullQData(oldp+41,(vlSelf->Core__DOT__regfile__DOT__rf_4),64);
        tracep->fullQData(oldp+43,(vlSelf->Core__DOT__regfile__DOT__rf_5),64);
        tracep->fullQData(oldp+45,(vlSelf->Core__DOT__regfile__DOT__rf_6),64);
        tracep->fullQData(oldp+47,(vlSelf->Core__DOT__regfile__DOT__rf_7),64);
        tracep->fullQData(oldp+49,(vlSelf->Core__DOT__regfile__DOT__rf_8),64);
        tracep->fullQData(oldp+51,(vlSelf->Core__DOT__regfile__DOT__rf_9),64);
        tracep->fullQData(oldp+53,(vlSelf->Core__DOT__regfile__DOT__rf_10),64);
        tracep->fullQData(oldp+55,(vlSelf->Core__DOT__regfile__DOT__rf_11),64);
        tracep->fullQData(oldp+57,(vlSelf->Core__DOT__regfile__DOT__rf_12),64);
        tracep->fullQData(oldp+59,(vlSelf->Core__DOT__regfile__DOT__rf_13),64);
        tracep->fullQData(oldp+61,(vlSelf->Core__DOT__regfile__DOT__rf_14),64);
        tracep->fullQData(oldp+63,(vlSelf->Core__DOT__regfile__DOT__rf_15),64);
        tracep->fullQData(oldp+65,(vlSelf->Core__DOT__regfile__DOT__rf_16),64);
        tracep->fullQData(oldp+67,(vlSelf->Core__DOT__regfile__DOT__rf_17),64);
        tracep->fullQData(oldp+69,(vlSelf->Core__DOT__regfile__DOT__rf_18),64);
        tracep->fullQData(oldp+71,(vlSelf->Core__DOT__regfile__DOT__rf_19),64);
        tracep->fullQData(oldp+73,(vlSelf->Core__DOT__regfile__DOT__rf_20),64);
        tracep->fullQData(oldp+75,(vlSelf->Core__DOT__regfile__DOT__rf_21),64);
        tracep->fullQData(oldp+77,(vlSelf->Core__DOT__regfile__DOT__rf_22),64);
        tracep->fullQData(oldp+79,(vlSelf->Core__DOT__regfile__DOT__rf_23),64);
        tracep->fullQData(oldp+81,(vlSelf->Core__DOT__regfile__DOT__rf_24),64);
        tracep->fullQData(oldp+83,(vlSelf->Core__DOT__regfile__DOT__rf_25),64);
        tracep->fullQData(oldp+85,(vlSelf->Core__DOT__regfile__DOT__rf_26),64);
        tracep->fullQData(oldp+87,(vlSelf->Core__DOT__regfile__DOT__rf_27),64);
        tracep->fullQData(oldp+89,(vlSelf->Core__DOT__regfile__DOT__rf_28),64);
        tracep->fullQData(oldp+91,(vlSelf->Core__DOT__regfile__DOT__rf_29),64);
        tracep->fullQData(oldp+93,(vlSelf->Core__DOT__regfile__DOT__rf_30),64);
        tracep->fullQData(oldp+95,(vlSelf->Core__DOT__regfile__DOT__rf_31),64);
        tracep->fullBit(oldp+97,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en));
        tracep->fullIData(oldp+98,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),32);
        tracep->fullQData(oldp+99,(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out),64);
        tracep->fullBit(oldp+101,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en));
        tracep->fullIData(oldp+102,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr),32);
        tracep->fullQData(oldp+103,(vlSelf->Core__DOT__mem__DOT__wdata),64);
        tracep->fullBit(oldp+105,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid));
        tracep->fullIData(oldp+106,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc),32);
        tracep->fullIData(oldp+107,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst),32);
        tracep->fullCData(oldp+108,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code),2);
        tracep->fullCData(oldp+109,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size),2);
        tracep->fullCData(oldp+110,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),5);
        tracep->fullBit(oldp+111,(vlSelf->Core__DOT__execute__DOT__io_is_ebreak_o_REG));
        tracep->fullIData(oldp+112,((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)),32);
        tracep->fullBit(oldp+113,(((1U == (IData)(vlSelf->Core__DOT__decode_io_out_bits_mem_code)) 
                                   | (2U == (IData)(vlSelf->Core__DOT__decode_io_out_bits_mem_code)))));
        tracep->fullBit(oldp+114,((3U == (IData)(vlSelf->Core__DOT__decode_io_out_bits_mem_code))));
        tracep->fullBit(oldp+115,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_valid));
        tracep->fullIData(oldp+116,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc),32);
        tracep->fullIData(oldp+117,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_inst),32);
        tracep->fullBit(oldp+118,(vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG));
        tracep->fullIData(oldp+119,(((IData)((vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                              >> 3U)) 
                                     << 3U)),32);
        VL_EXTEND_WQ(127,64, __Vtemp18, vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG);
        VL_SHIFTL_WWI(127,127,6, __Vtemp19, __Vtemp18, 
                      (0x38U & ((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out) 
                                << 3U)));
        tracep->fullQData(oldp+120,((((QData)((IData)(
                                                      __Vtemp19[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp19[0U])))),64);
        tracep->fullCData(oldp+122,((0x7fffU & (((7U 
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
                                                     == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                     ? 0xffU
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                      ? 0xfU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                       ? 3U
                                                       : 1U))) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))))),8);
        tracep->fullIData(oldp+123,(vlSelf->Core__DOT__mem_io_reg_mem_addr_i_REG),32);
        tracep->fullIData(oldp+124,(vlSelf->Core__DOT__io_commit_pc_REG),32);
        tracep->fullBit(oldp+125,(vlSelf->Core__DOT__io_commit_REG));
        tracep->fullIData(oldp+126,(vlSelf->Core__DOT__fetch__DOT__pc),32);
        tracep->fullIData(oldp+127,((vlSelf->Core__DOT__fetch__DOT__pc 
                                     >> 2U)),30);
        tracep->fullIData(oldp+128,(((IData)(4U) + 
                                     (0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc))),32);
        tracep->fullBit(oldp+129,(vlSelf->Core__DOT__decode__DOT__inst_valid));
        tracep->fullCData(oldp+130,(vlSelf->Core__DOT__decode__DOT__c0_1),3);
        tracep->fullCData(oldp+131,(vlSelf->Core__DOT__decode__DOT__c0_2),3);
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
                                      & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_601))
                                      ? (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U))
                                      : (0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))),32);
        tracep->fullIData(oldp+153,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0xfU))),32);
        tracep->fullBit(oldp+154,((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                    & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
        tracep->fullBit(oldp+155,((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                    & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
        tracep->fullBit(oldp+156,((((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
        tracep->fullBit(oldp+157,((((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
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
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
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
        tracep->fullQData(oldp+175,(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0),64);
        tracep->fullIData(oldp+177,((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)),32);
        tracep->fullIData(oldp+178,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullBit(oldp+179,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid));
        tracep->fullIData(oldp+180,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_pc),32);
        tracep->fullIData(oldp+181,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_inst),32);
        tracep->fullCData(oldp+182,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code),2);
        tracep->fullCData(oldp+183,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size),2);
        tracep->fullCData(oldp+184,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr),5);
        tracep->fullCData(oldp+185,(vlSelf->Core__DOT__mem__DOT__waddr),5);
        tracep->fullBit(oldp+186,(vlSelf->Core__DOT__mem__DOT__wen));
        tracep->fullIData(oldp+187,(vlSelf->Core__DOT__mem__DOT__reg_mem_addr),32);
        tracep->fullBit(oldp+188,(vlSelf->Core__DOT__mem__DOT__is_load));
        tracep->fullBit(oldp+189,((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))));
        tracep->fullCData(oldp+190,((7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out))),3);
        tracep->fullCData(oldp+191,((7U & vlSelf->Core__DOT__mem__DOT__reg_mem_addr)),3);
        tracep->fullCData(oldp+192,(((7U == (7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
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
        tracep->fullCData(oldp+193,(((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                      ? 0xffU : ((2U 
                                                  == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                  ? 0xfU
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                   ? 3U
                                                   : 1U)))),8);
        tracep->fullIData(oldp+194,((0x1fffffffU & (IData)(
                                                           (vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                                            >> 3U)))),29);
        tracep->fullQData(oldp+195,(vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG),64);
        tracep->fullIData(oldp+197,(vlSelf->Core__DOT__wb_dpi__DOT__inst1),32);
        tracep->fullIData(oldp+198,(vlSelf->Core__DOT__wb_dpi__DOT__pc1),32);
        tracep->fullQData(oldp+199,(((0U != (0x1fU 
                                             & (vlSelf->Core__DOT__decode__DOT__inst 
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
                                                  ? vlSelf->Core__DOT__mem_io_wdata_o
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
        tracep->fullQData(oldp+201,(((0U != (0x1fU 
                                             & (vlSelf->Core__DOT__decode__DOT__inst 
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
                                                  ? vlSelf->Core__DOT__mem_io_wdata_o
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
        tracep->fullQData(oldp+203,(((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                      ? ((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                          ? vlSelf->Core__DOT__mem__DOT__ld_data_raw
                                          : ((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                              ? (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                                               >> 0x1fU)))
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)))
                                              : ((1U 
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
                                                                     & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))))))))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+205,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                      ? ((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                          ? vlSelf->Core__DOT__mem__DOT__ld_data_raw
                                          : ((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                              ? (QData)((IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))
                                              : ((1U 
                                                  == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                  ? (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))))
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)))))))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+207,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                      ? ((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                          ? ((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                              ? vlSelf->Core__DOT__mem__DOT__ld_data_raw
                                              : ((2U 
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
                                                                      & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)))))))
                                          : 0ULL) : 
                                     ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                       ? ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                           ? ((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                               ? vlSelf->Core__DOT__mem__DOT__ld_data_raw
                                               : ((2U 
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
                                                                       & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))))))))
                                           : 0ULL) : 0ULL))),64);
        tracep->fullBit(oldp+209,((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))));
        tracep->fullQData(oldp+210,(vlSelf->Core__DOT__mem_io_wdata_o),64);
        tracep->fullBit(oldp+212,(vlSelf->Core__DOT__mem__DOT__req_wait));
        tracep->fullQData(oldp+213,(vlSelf->Core__DOT__mem__DOT__ld_data_raw),64);
        tracep->fullQData(oldp+215,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                    >> 7U)))
                                      ? 0xffffffffffffffULL
                                      : 0ULL)),56);
        tracep->fullCData(oldp+217,((0xffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),8);
        tracep->fullQData(oldp+218,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                    >> 0xfU)))
                                      ? 0xffffffffffffULL
                                      : 0ULL)),48);
        tracep->fullSData(oldp+220,((0xffffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),16);
        tracep->fullIData(oldp+221,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+222,((IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)),32);
        tracep->fullBit(oldp+223,(vlSelf->clock));
        tracep->fullBit(oldp+224,(vlSelf->reset));
        tracep->fullIData(oldp+225,(vlSelf->io_imem_raddr),32);
        tracep->fullIData(oldp+226,(vlSelf->io_imem_waddr),32);
        tracep->fullQData(oldp+227,(vlSelf->io_imem_wdata),64);
        tracep->fullBit(oldp+229,(vlSelf->io_imem_ren));
        tracep->fullBit(oldp+230,(vlSelf->io_imem_wen));
        tracep->fullCData(oldp+231,(vlSelf->io_imem_wmask),8);
        tracep->fullQData(oldp+232,(vlSelf->io_imem_rdata),64);
        tracep->fullBit(oldp+234,(vlSelf->io_imem_read_ok));
        tracep->fullBit(oldp+235,(vlSelf->io_imem_write_ok));
        tracep->fullIData(oldp+236,(vlSelf->io_dmem_raddr),32);
        tracep->fullIData(oldp+237,(vlSelf->io_dmem_waddr),32);
        tracep->fullQData(oldp+238,(vlSelf->io_dmem_wdata),64);
        tracep->fullBit(oldp+240,(vlSelf->io_dmem_ren));
        tracep->fullBit(oldp+241,(vlSelf->io_dmem_wen));
        tracep->fullCData(oldp+242,(vlSelf->io_dmem_wmask),8);
        tracep->fullQData(oldp+243,(vlSelf->io_dmem_rdata),64);
        tracep->fullBit(oldp+245,(vlSelf->io_dmem_read_ok));
        tracep->fullBit(oldp+246,(vlSelf->io_dmem_write_ok));
        tracep->fullIData(oldp+247,(vlSelf->io_commit_pc),32);
        tracep->fullQData(oldp+248,(vlSelf->io_regs_out_0),64);
        tracep->fullQData(oldp+250,(vlSelf->io_regs_out_1),64);
        tracep->fullQData(oldp+252,(vlSelf->io_regs_out_2),64);
        tracep->fullQData(oldp+254,(vlSelf->io_regs_out_3),64);
        tracep->fullQData(oldp+256,(vlSelf->io_regs_out_4),64);
        tracep->fullQData(oldp+258,(vlSelf->io_regs_out_5),64);
        tracep->fullQData(oldp+260,(vlSelf->io_regs_out_6),64);
        tracep->fullQData(oldp+262,(vlSelf->io_regs_out_7),64);
        tracep->fullQData(oldp+264,(vlSelf->io_regs_out_8),64);
        tracep->fullQData(oldp+266,(vlSelf->io_regs_out_9),64);
        tracep->fullQData(oldp+268,(vlSelf->io_regs_out_10),64);
        tracep->fullQData(oldp+270,(vlSelf->io_regs_out_11),64);
        tracep->fullQData(oldp+272,(vlSelf->io_regs_out_12),64);
        tracep->fullQData(oldp+274,(vlSelf->io_regs_out_13),64);
        tracep->fullQData(oldp+276,(vlSelf->io_regs_out_14),64);
        tracep->fullQData(oldp+278,(vlSelf->io_regs_out_15),64);
        tracep->fullQData(oldp+280,(vlSelf->io_regs_out_16),64);
        tracep->fullQData(oldp+282,(vlSelf->io_regs_out_17),64);
        tracep->fullQData(oldp+284,(vlSelf->io_regs_out_18),64);
        tracep->fullQData(oldp+286,(vlSelf->io_regs_out_19),64);
        tracep->fullQData(oldp+288,(vlSelf->io_regs_out_20),64);
        tracep->fullQData(oldp+290,(vlSelf->io_regs_out_21),64);
        tracep->fullQData(oldp+292,(vlSelf->io_regs_out_22),64);
        tracep->fullQData(oldp+294,(vlSelf->io_regs_out_23),64);
        tracep->fullQData(oldp+296,(vlSelf->io_regs_out_24),64);
        tracep->fullQData(oldp+298,(vlSelf->io_regs_out_25),64);
        tracep->fullQData(oldp+300,(vlSelf->io_regs_out_26),64);
        tracep->fullQData(oldp+302,(vlSelf->io_regs_out_27),64);
        tracep->fullQData(oldp+304,(vlSelf->io_regs_out_28),64);
        tracep->fullQData(oldp+306,(vlSelf->io_regs_out_29),64);
        tracep->fullQData(oldp+308,(vlSelf->io_regs_out_30),64);
        tracep->fullQData(oldp+310,(vlSelf->io_regs_out_31),64);
        tracep->fullQData(oldp+312,(vlSelf->io_regs_in_0),64);
        tracep->fullQData(oldp+314,(vlSelf->io_regs_in_1),64);
        tracep->fullQData(oldp+316,(vlSelf->io_regs_in_2),64);
        tracep->fullQData(oldp+318,(vlSelf->io_regs_in_3),64);
        tracep->fullQData(oldp+320,(vlSelf->io_regs_in_4),64);
        tracep->fullQData(oldp+322,(vlSelf->io_regs_in_5),64);
        tracep->fullQData(oldp+324,(vlSelf->io_regs_in_6),64);
        tracep->fullQData(oldp+326,(vlSelf->io_regs_in_7),64);
        tracep->fullQData(oldp+328,(vlSelf->io_regs_in_8),64);
        tracep->fullQData(oldp+330,(vlSelf->io_regs_in_9),64);
        tracep->fullQData(oldp+332,(vlSelf->io_regs_in_10),64);
        tracep->fullQData(oldp+334,(vlSelf->io_regs_in_11),64);
        tracep->fullQData(oldp+336,(vlSelf->io_regs_in_12),64);
        tracep->fullQData(oldp+338,(vlSelf->io_regs_in_13),64);
        tracep->fullQData(oldp+340,(vlSelf->io_regs_in_14),64);
        tracep->fullQData(oldp+342,(vlSelf->io_regs_in_15),64);
        tracep->fullQData(oldp+344,(vlSelf->io_regs_in_16),64);
        tracep->fullQData(oldp+346,(vlSelf->io_regs_in_17),64);
        tracep->fullQData(oldp+348,(vlSelf->io_regs_in_18),64);
        tracep->fullQData(oldp+350,(vlSelf->io_regs_in_19),64);
        tracep->fullQData(oldp+352,(vlSelf->io_regs_in_20),64);
        tracep->fullQData(oldp+354,(vlSelf->io_regs_in_21),64);
        tracep->fullQData(oldp+356,(vlSelf->io_regs_in_22),64);
        tracep->fullQData(oldp+358,(vlSelf->io_regs_in_23),64);
        tracep->fullQData(oldp+360,(vlSelf->io_regs_in_24),64);
        tracep->fullQData(oldp+362,(vlSelf->io_regs_in_25),64);
        tracep->fullQData(oldp+364,(vlSelf->io_regs_in_26),64);
        tracep->fullQData(oldp+366,(vlSelf->io_regs_in_27),64);
        tracep->fullQData(oldp+368,(vlSelf->io_regs_in_28),64);
        tracep->fullQData(oldp+370,(vlSelf->io_regs_in_29),64);
        tracep->fullQData(oldp+372,(vlSelf->io_regs_in_30),64);
        tracep->fullQData(oldp+374,(vlSelf->io_regs_in_31),64);
        tracep->fullIData(oldp+376,(vlSelf->io_pc_in),32);
        tracep->fullBit(oldp+377,(vlSelf->io_write_regs));
        tracep->fullBit(oldp+378,(vlSelf->io_commit));
        tracep->fullIData(oldp+379,((IData)(vlSelf->io_imem_rdata)),32);
        tracep->fullBit(oldp+380,((1U & ((~ (IData)(vlSelf->io_imem_read_ok)) 
                                         | (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))));
        tracep->fullBit(oldp+381,(1U));
    }
}
