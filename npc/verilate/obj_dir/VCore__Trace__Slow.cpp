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
        tracep->declBit(c+1415,"clock", false,-1);
        tracep->declBit(c+1416,"reset", false,-1);
        tracep->declBit(c+1417,"io_imem_req_ready", false,-1);
        tracep->declBit(c+1418,"io_imem_req_valid", false,-1);
        tracep->declBus(c+1419,"io_imem_req_bits_raddr", false,-1, 31,0);
        tracep->declBus(c+1420,"io_imem_req_bits_waddr", false,-1, 31,0);
        tracep->declQuad(c+1421,"io_imem_req_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+1423,"io_imem_req_bits_ren", false,-1);
        tracep->declBit(c+1424,"io_imem_req_bits_wen", false,-1);
        tracep->declBus(c+1425,"io_imem_req_bits_wmask", false,-1, 7,0);
        tracep->declBit(c+1426,"io_imem_resp_ready", false,-1);
        tracep->declBit(c+1427,"io_imem_resp_valid", false,-1);
        tracep->declQuad(c+1428,"io_imem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1430,"io_imem_resp_bits_read_ok", false,-1);
        tracep->declBit(c+1431,"io_imem_resp_bits_write_ok", false,-1);
        tracep->declBit(c+1432,"io_dmem_req_ready", false,-1);
        tracep->declBit(c+1433,"io_dmem_req_valid", false,-1);
        tracep->declBus(c+1434,"io_dmem_req_bits_raddr", false,-1, 31,0);
        tracep->declBus(c+1435,"io_dmem_req_bits_waddr", false,-1, 31,0);
        tracep->declQuad(c+1436,"io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+1438,"io_dmem_req_bits_ren", false,-1);
        tracep->declBit(c+1439,"io_dmem_req_bits_wen", false,-1);
        tracep->declBus(c+1440,"io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declBit(c+1441,"io_dmem_resp_ready", false,-1);
        tracep->declBit(c+1442,"io_dmem_resp_valid", false,-1);
        tracep->declQuad(c+1443,"io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1445,"io_dmem_resp_bits_read_ok", false,-1);
        tracep->declBit(c+1446,"io_dmem_resp_bits_write_ok", false,-1);
        tracep->declBus(c+1447,"io_commit_pc", false,-1, 31,0);
        tracep->declQuad(c+1448,"io_regs_out_0", false,-1, 63,0);
        tracep->declQuad(c+1450,"io_regs_out_1", false,-1, 63,0);
        tracep->declQuad(c+1452,"io_regs_out_2", false,-1, 63,0);
        tracep->declQuad(c+1454,"io_regs_out_3", false,-1, 63,0);
        tracep->declQuad(c+1456,"io_regs_out_4", false,-1, 63,0);
        tracep->declQuad(c+1458,"io_regs_out_5", false,-1, 63,0);
        tracep->declQuad(c+1460,"io_regs_out_6", false,-1, 63,0);
        tracep->declQuad(c+1462,"io_regs_out_7", false,-1, 63,0);
        tracep->declQuad(c+1464,"io_regs_out_8", false,-1, 63,0);
        tracep->declQuad(c+1466,"io_regs_out_9", false,-1, 63,0);
        tracep->declQuad(c+1468,"io_regs_out_10", false,-1, 63,0);
        tracep->declQuad(c+1470,"io_regs_out_11", false,-1, 63,0);
        tracep->declQuad(c+1472,"io_regs_out_12", false,-1, 63,0);
        tracep->declQuad(c+1474,"io_regs_out_13", false,-1, 63,0);
        tracep->declQuad(c+1476,"io_regs_out_14", false,-1, 63,0);
        tracep->declQuad(c+1478,"io_regs_out_15", false,-1, 63,0);
        tracep->declQuad(c+1480,"io_regs_out_16", false,-1, 63,0);
        tracep->declQuad(c+1482,"io_regs_out_17", false,-1, 63,0);
        tracep->declQuad(c+1484,"io_regs_out_18", false,-1, 63,0);
        tracep->declQuad(c+1486,"io_regs_out_19", false,-1, 63,0);
        tracep->declQuad(c+1488,"io_regs_out_20", false,-1, 63,0);
        tracep->declQuad(c+1490,"io_regs_out_21", false,-1, 63,0);
        tracep->declQuad(c+1492,"io_regs_out_22", false,-1, 63,0);
        tracep->declQuad(c+1494,"io_regs_out_23", false,-1, 63,0);
        tracep->declQuad(c+1496,"io_regs_out_24", false,-1, 63,0);
        tracep->declQuad(c+1498,"io_regs_out_25", false,-1, 63,0);
        tracep->declQuad(c+1500,"io_regs_out_26", false,-1, 63,0);
        tracep->declQuad(c+1502,"io_regs_out_27", false,-1, 63,0);
        tracep->declQuad(c+1504,"io_regs_out_28", false,-1, 63,0);
        tracep->declQuad(c+1506,"io_regs_out_29", false,-1, 63,0);
        tracep->declQuad(c+1508,"io_regs_out_30", false,-1, 63,0);
        tracep->declQuad(c+1510,"io_regs_out_31", false,-1, 63,0);
        tracep->declBit(c+1512,"io_commit", false,-1);
        tracep->declBit(c+1415,"Core clock", false,-1);
        tracep->declBit(c+1416,"Core reset", false,-1);
        tracep->declBit(c+1417,"Core io_imem_req_ready", false,-1);
        tracep->declBit(c+1418,"Core io_imem_req_valid", false,-1);
        tracep->declBus(c+1419,"Core io_imem_req_bits_raddr", false,-1, 31,0);
        tracep->declBus(c+1420,"Core io_imem_req_bits_waddr", false,-1, 31,0);
        tracep->declQuad(c+1421,"Core io_imem_req_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+1423,"Core io_imem_req_bits_ren", false,-1);
        tracep->declBit(c+1424,"Core io_imem_req_bits_wen", false,-1);
        tracep->declBus(c+1425,"Core io_imem_req_bits_wmask", false,-1, 7,0);
        tracep->declBit(c+1426,"Core io_imem_resp_ready", false,-1);
        tracep->declBit(c+1427,"Core io_imem_resp_valid", false,-1);
        tracep->declQuad(c+1428,"Core io_imem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1430,"Core io_imem_resp_bits_read_ok", false,-1);
        tracep->declBit(c+1431,"Core io_imem_resp_bits_write_ok", false,-1);
        tracep->declBit(c+1432,"Core io_dmem_req_ready", false,-1);
        tracep->declBit(c+1433,"Core io_dmem_req_valid", false,-1);
        tracep->declBus(c+1434,"Core io_dmem_req_bits_raddr", false,-1, 31,0);
        tracep->declBus(c+1435,"Core io_dmem_req_bits_waddr", false,-1, 31,0);
        tracep->declQuad(c+1436,"Core io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+1438,"Core io_dmem_req_bits_ren", false,-1);
        tracep->declBit(c+1439,"Core io_dmem_req_bits_wen", false,-1);
        tracep->declBus(c+1440,"Core io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declBit(c+1441,"Core io_dmem_resp_ready", false,-1);
        tracep->declBit(c+1442,"Core io_dmem_resp_valid", false,-1);
        tracep->declQuad(c+1443,"Core io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1445,"Core io_dmem_resp_bits_read_ok", false,-1);
        tracep->declBit(c+1446,"Core io_dmem_resp_bits_write_ok", false,-1);
        tracep->declBus(c+1447,"Core io_commit_pc", false,-1, 31,0);
        tracep->declQuad(c+1448,"Core io_regs_out_0", false,-1, 63,0);
        tracep->declQuad(c+1450,"Core io_regs_out_1", false,-1, 63,0);
        tracep->declQuad(c+1452,"Core io_regs_out_2", false,-1, 63,0);
        tracep->declQuad(c+1454,"Core io_regs_out_3", false,-1, 63,0);
        tracep->declQuad(c+1456,"Core io_regs_out_4", false,-1, 63,0);
        tracep->declQuad(c+1458,"Core io_regs_out_5", false,-1, 63,0);
        tracep->declQuad(c+1460,"Core io_regs_out_6", false,-1, 63,0);
        tracep->declQuad(c+1462,"Core io_regs_out_7", false,-1, 63,0);
        tracep->declQuad(c+1464,"Core io_regs_out_8", false,-1, 63,0);
        tracep->declQuad(c+1466,"Core io_regs_out_9", false,-1, 63,0);
        tracep->declQuad(c+1468,"Core io_regs_out_10", false,-1, 63,0);
        tracep->declQuad(c+1470,"Core io_regs_out_11", false,-1, 63,0);
        tracep->declQuad(c+1472,"Core io_regs_out_12", false,-1, 63,0);
        tracep->declQuad(c+1474,"Core io_regs_out_13", false,-1, 63,0);
        tracep->declQuad(c+1476,"Core io_regs_out_14", false,-1, 63,0);
        tracep->declQuad(c+1478,"Core io_regs_out_15", false,-1, 63,0);
        tracep->declQuad(c+1480,"Core io_regs_out_16", false,-1, 63,0);
        tracep->declQuad(c+1482,"Core io_regs_out_17", false,-1, 63,0);
        tracep->declQuad(c+1484,"Core io_regs_out_18", false,-1, 63,0);
        tracep->declQuad(c+1486,"Core io_regs_out_19", false,-1, 63,0);
        tracep->declQuad(c+1488,"Core io_regs_out_20", false,-1, 63,0);
        tracep->declQuad(c+1490,"Core io_regs_out_21", false,-1, 63,0);
        tracep->declQuad(c+1492,"Core io_regs_out_22", false,-1, 63,0);
        tracep->declQuad(c+1494,"Core io_regs_out_23", false,-1, 63,0);
        tracep->declQuad(c+1496,"Core io_regs_out_24", false,-1, 63,0);
        tracep->declQuad(c+1498,"Core io_regs_out_25", false,-1, 63,0);
        tracep->declQuad(c+1500,"Core io_regs_out_26", false,-1, 63,0);
        tracep->declQuad(c+1502,"Core io_regs_out_27", false,-1, 63,0);
        tracep->declQuad(c+1504,"Core io_regs_out_28", false,-1, 63,0);
        tracep->declQuad(c+1506,"Core io_regs_out_29", false,-1, 63,0);
        tracep->declQuad(c+1508,"Core io_regs_out_30", false,-1, 63,0);
        tracep->declQuad(c+1510,"Core io_regs_out_31", false,-1, 63,0);
        tracep->declBit(c+1512,"Core io_commit", false,-1);
        tracep->declBit(c+1415,"Core fetch_clock", false,-1);
        tracep->declBit(c+1416,"Core fetch_reset", false,-1);
        tracep->declBus(c+1392,"Core fetch_io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+1513,"Core fetch_io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+1430,"Core fetch_io_imem_resp_bits_rvalid", false,-1);
        tracep->declBit(c+1393,"Core fetch_io_out_ready", false,-1);
        tracep->declBit(c+1517,"Core fetch_io_out_valid", false,-1);
        tracep->declBus(c+1,"Core fetch_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1514,"Core fetch_io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1515,"Core fetch_io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+1394,"Core fetch_io_if_flush", false,-1);
        tracep->declBus(c+2,"Core fetch_io_p_npc", false,-1, 31,0);
        tracep->declBus(c+3,"Core fetch_io_jmp_packet_i_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+1394,"Core fetch_io_jmp_packet_i_mis", false,-1);
        tracep->declBit(c+1415,"Core decode_clock", false,-1);
        tracep->declBit(c+1416,"Core decode_reset", false,-1);
        tracep->declBit(c+1393,"Core decode_io_in_ready", false,-1);
        tracep->declBus(c+1,"Core decode_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1514,"Core decode_io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1515,"Core decode_io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+1395,"Core decode_io_out_ready", false,-1);
        tracep->declBit(c+1517,"Core decode_io_out_valid", false,-1);
        tracep->declBit(c+1377,"Core decode_io_out_bits_valid", false,-1);
        tracep->declBus(c+4,"Core decode_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+5,"Core decode_io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+6,"Core decode_io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+7,"Core decode_io_out_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+8,"Core decode_io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+9,"Core decode_io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+10,"Core decode_io_out_bits_mdu_code", false,-1, 3,0);
        tracep->declBit(c+11,"Core decode_io_out_bits_w_type", false,-1);
        tracep->declBus(c+12,"Core decode_io_out_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+13,"Core decode_io_out_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+14,"Core decode_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+1378,"Core decode_io_out_bits_rd_en", false,-1);
        tracep->declBus(c+15,"Core decode_io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+1394,"Core decode_io_id_flush", false,-1);
        tracep->declBit(c+16,"Core decode_io_ren1", false,-1);
        tracep->declBus(c+17,"Core decode_io_raddr1", false,-1, 4,0);
        tracep->declBit(c+18,"Core decode_io_ren2", false,-1);
        tracep->declBus(c+19,"Core decode_io_raddr2", false,-1, 4,0);
        tracep->declBit(c+20,"Core decode_io_is_ebreak", false,-1);
        tracep->declQuad(c+1379,"Core decode_io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+1381,"Core decode_io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+21,"Core decode_io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+23,"Core decode_io_rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+2,"Core decode_io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+25,"Core decode_io_p_npc_o", false,-1, 31,0);
        tracep->declBit(c+26,"Core decode_io_decode_rf_stall_i", false,-1);
        tracep->declBit(c+1415,"Core regfile_clock", false,-1);
        tracep->declBit(c+1416,"Core regfile_reset", false,-1);
        tracep->declBit(c+16,"Core regfile_io_ren1", false,-1);
        tracep->declBus(c+17,"Core regfile_io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+1379,"Core regfile_io_rdata1", false,-1, 63,0);
        tracep->declBit(c+18,"Core regfile_io_ren2", false,-1);
        tracep->declBus(c+19,"Core regfile_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+1381,"Core regfile_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+27,"Core regfile_io_wen", false,-1);
        tracep->declBus(c+28,"Core regfile_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+29,"Core regfile_io_wdata", false,-1, 63,0);
        tracep->declQuad(c+31,"Core regfile_io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+33,"Core regfile_io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+35,"Core regfile_io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+37,"Core regfile_io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+39,"Core regfile_io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+41,"Core regfile_io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+43,"Core regfile_io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+45,"Core regfile_io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+47,"Core regfile_io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+49,"Core regfile_io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+51,"Core regfile_io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+53,"Core regfile_io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+55,"Core regfile_io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+57,"Core regfile_io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+59,"Core regfile_io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+61,"Core regfile_io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+63,"Core regfile_io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+65,"Core regfile_io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+67,"Core regfile_io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+69,"Core regfile_io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+71,"Core regfile_io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+73,"Core regfile_io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+75,"Core regfile_io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+77,"Core regfile_io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+79,"Core regfile_io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+81,"Core regfile_io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+83,"Core regfile_io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+85,"Core regfile_io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+87,"Core regfile_io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+89,"Core regfile_io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+91,"Core regfile_io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+93,"Core regfile_io_regs_31", false,-1, 63,0);
        tracep->declBit(c+95,"Core regfile_io_ex_rd_en", false,-1);
        tracep->declBus(c+96,"Core regfile_io_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+97,"Core regfile_io_ex_rd_data", false,-1, 63,0);
        tracep->declBit(c+99,"Core regfile_io_ex_is_load_i", false,-1);
        tracep->declBit(c+100,"Core regfile_io_ex_is_mdu_i", false,-1);
        tracep->declBit(c+101,"Core regfile_io_mem_is_load_i", false,-1);
        tracep->declBit(c+102,"Core regfile_io_mem_rd_en", false,-1);
        tracep->declBus(c+103,"Core regfile_io_mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1396,"Core regfile_io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+26,"Core regfile_io_rf_stall", false,-1);
        tracep->declBit(c+1415,"Core execute_clock", false,-1);
        tracep->declBit(c+1416,"Core execute_reset", false,-1);
        tracep->declBit(c+1395,"Core execute_io_in_ready", false,-1);
        tracep->declBit(c+1377,"Core execute_io_in_bits_valid", false,-1);
        tracep->declBus(c+4,"Core execute_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+5,"Core execute_io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+6,"Core execute_io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+7,"Core execute_io_in_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+8,"Core execute_io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+9,"Core execute_io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+10,"Core execute_io_in_bits_mdu_code", false,-1, 3,0);
        tracep->declBit(c+11,"Core execute_io_in_bits_w_type", false,-1);
        tracep->declBus(c+12,"Core execute_io_in_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+13,"Core execute_io_in_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+14,"Core execute_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+1378,"Core execute_io_in_bits_rd_en", false,-1);
        tracep->declBus(c+15,"Core execute_io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+1395,"Core execute_io_out_ready", false,-1);
        tracep->declBit(c+1517,"Core execute_io_out_valid", false,-1);
        tracep->declBit(c+104,"Core execute_io_out_bits_valid", false,-1);
        tracep->declBus(c+105,"Core execute_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+106,"Core execute_io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+107,"Core execute_io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+108,"Core execute_io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+109,"Core execute_io_out_bits_mdu_code", false,-1, 3,0);
        tracep->declBus(c+96,"Core execute_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+110,"Core execute_io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+21,"Core execute_io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+23,"Core execute_io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+97,"Core execute_io_ex_data_o", false,-1, 63,0);
        tracep->declBit(c+20,"Core execute_io_is_ebreak_i", false,-1);
        tracep->declBit(c+111,"Core execute_io_is_ebreak_o", false,-1);
        tracep->declBus(c+112,"Core execute_io_ex_rwaddr_o", false,-1, 31,0);
        tracep->declBit(c+1383,"Core execute_io_ex_rvalid_o", false,-1);
        tracep->declBit(c+1384,"Core execute_io_ex_wvalid_o", false,-1);
        tracep->declQuad(c+23,"Core execute_io_ex_wdata_o", false,-1, 63,0);
        tracep->declBus(c+108,"Core execute_io_ex_wsize_o", false,-1, 1,0);
        tracep->declQuad(c+113,"Core execute_io_ex_mduout_o", false,-1, 63,0);
        tracep->declBit(c+115,"Core execute_io_ex_mduready_o", false,-1);
        tracep->declBit(c+95,"Core execute_io_ex_rd_en", false,-1);
        tracep->declBus(c+96,"Core execute_io_ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+99,"Core execute_io_ex_is_load", false,-1);
        tracep->declBit(c+100,"Core execute_io_ex_is_mdu", false,-1);
        tracep->declBus(c+25,"Core execute_io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+3,"Core execute_io_jmp_packet_o_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+1394,"Core execute_io_jmp_packet_o_mis", false,-1);
        tracep->declBit(c+1415,"Core mem_clock", false,-1);
        tracep->declBit(c+1416,"Core mem_reset", false,-1);
        tracep->declBit(c+1395,"Core mem_io_in_ready", false,-1);
        tracep->declBit(c+104,"Core mem_io_in_bits_valid", false,-1);
        tracep->declBus(c+105,"Core mem_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+106,"Core mem_io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+107,"Core mem_io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+108,"Core mem_io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+109,"Core mem_io_in_bits_mdu_code", false,-1, 3,0);
        tracep->declBus(c+96,"Core mem_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+110,"Core mem_io_in_bits_rd_en", false,-1);
        tracep->declBit(c+116,"Core mem_io_out_bits_valid", false,-1);
        tracep->declBus(c+117,"Core mem_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+118,"Core mem_io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+97,"Core mem_io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+28,"Core mem_io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+27,"Core mem_io_wen_o", false,-1);
        tracep->declQuad(c+29,"Core mem_io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+111,"Core mem_io_is_ebreak_i", false,-1);
        tracep->declBit(c+119,"Core mem_io_is_ebreak_o", false,-1);
        tracep->declBus(c+112,"Core mem_io_dmem_req_bits_arwaddr", false,-1, 31,0);
        tracep->declBit(c+1385,"Core mem_io_dmem_req_bits_rvalid", false,-1);
        tracep->declBit(c+1386,"Core mem_io_dmem_req_bits_wvalid", false,-1);
        tracep->declQuad(c+120,"Core mem_io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+122,"Core mem_io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declQuad(c+1443,"Core mem_io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1445,"Core mem_io_dmem_resp_bits_rready", false,-1);
        tracep->declBit(c+1446,"Core mem_io_dmem_resp_bits_wready", false,-1);
        tracep->declBus(c+112,"Core mem_io_mem_rwaddr_i", false,-1, 31,0);
        tracep->declBit(c+1383,"Core mem_io_mem_rvalid_i", false,-1);
        tracep->declBit(c+1384,"Core mem_io_mem_wvalid_i", false,-1);
        tracep->declQuad(c+23,"Core mem_io_mem_wdata_i", false,-1, 63,0);
        tracep->declBus(c+108,"Core mem_io_mem_wsize_i", false,-1, 1,0);
        tracep->declBus(c+112,"Core mem_io_reg_mem_addr_i", false,-1, 31,0);
        tracep->declQuad(c+113,"Core mem_io_mem_mduout_i", false,-1, 63,0);
        tracep->declBit(c+115,"Core mem_io_mem_mduready_i", false,-1);
        tracep->declBit(c+102,"Core mem_io_mem_rd_en", false,-1);
        tracep->declBus(c+103,"Core mem_io_mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1396,"Core mem_io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+101,"Core mem_io_mem_is_load", false,-1);
        tracep->declBit(c+1415,"Core wb_dpi_clk", false,-1);
        tracep->declBus(c+118,"Core wb_dpi_inst", false,-1, 31,0);
        tracep->declBus(c+117,"Core wb_dpi_pc", false,-1, 31,0);
        tracep->declBit(c+119,"Core wb_dpi_ebreak", false,-1);
        tracep->declBus(c+123,"Core io_commit_pc_REG", false,-1, 31,0);
        tracep->declBit(c+124,"Core io_commit_REG", false,-1);
        tracep->declBus(c+125,"Core io_dmem_req_bits_raddr_hi", false,-1, 28,0);
        tracep->declBit(c+1415,"Core fetch clock", false,-1);
        tracep->declBit(c+1416,"Core fetch reset", false,-1);
        tracep->declBus(c+1392,"Core fetch io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+1513,"Core fetch io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+1430,"Core fetch io_imem_resp_bits_rvalid", false,-1);
        tracep->declBit(c+1393,"Core fetch io_out_ready", false,-1);
        tracep->declBit(c+1517,"Core fetch io_out_valid", false,-1);
        tracep->declBus(c+1,"Core fetch io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1514,"Core fetch io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1515,"Core fetch io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+1394,"Core fetch io_if_flush", false,-1);
        tracep->declBus(c+2,"Core fetch io_p_npc", false,-1, 31,0);
        tracep->declBus(c+3,"Core fetch io_jmp_packet_i_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+1394,"Core fetch io_jmp_packet_i_mis", false,-1);
        tracep->declBus(c+1,"Core fetch pc_out", false,-1, 31,0);
        tracep->declBus(c+126,"Core fetch inst_out", false,-1, 31,0);
        tracep->declBit(c+127,"Core fetch valid_out", false,-1);
        tracep->declBus(c+2,"Core fetch reg_pnpc", false,-1, 31,0);
        tracep->declBus(c+128,"Core fetch pc", false,-1, 31,0);
        tracep->declBus(c+129,"Core fetch pc_base_hi", false,-1, 29,0);
        tracep->declBus(c+130,"Core fetch pc_base", false,-1, 31,0);
        tracep->declBit(c+1516,"Core fetch imem_stall", false,-1);
        tracep->declBit(c+1398,"Core fetch stall", false,-1);
        tracep->declBus(c+1387,"Core fetch flush_pc", false,-1, 31,0);
        tracep->declBit(c+131,"Core fetch use_reg_npc", false,-1);
        tracep->declBus(c+132,"Core fetch reg_npc", false,-1, 31,0);
        tracep->declBit(c+1415,"Core decode clock", false,-1);
        tracep->declBit(c+1416,"Core decode reset", false,-1);
        tracep->declBit(c+1393,"Core decode io_in_ready", false,-1);
        tracep->declBus(c+1,"Core decode io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1514,"Core decode io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1515,"Core decode io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+1395,"Core decode io_out_ready", false,-1);
        tracep->declBit(c+1517,"Core decode io_out_valid", false,-1);
        tracep->declBit(c+1377,"Core decode io_out_bits_valid", false,-1);
        tracep->declBus(c+4,"Core decode io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+5,"Core decode io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+6,"Core decode io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+7,"Core decode io_out_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+8,"Core decode io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+9,"Core decode io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+10,"Core decode io_out_bits_mdu_code", false,-1, 3,0);
        tracep->declBit(c+11,"Core decode io_out_bits_w_type", false,-1);
        tracep->declBus(c+12,"Core decode io_out_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+13,"Core decode io_out_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+14,"Core decode io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+1378,"Core decode io_out_bits_rd_en", false,-1);
        tracep->declBus(c+15,"Core decode io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+1394,"Core decode io_id_flush", false,-1);
        tracep->declBit(c+16,"Core decode io_ren1", false,-1);
        tracep->declBus(c+17,"Core decode io_raddr1", false,-1, 4,0);
        tracep->declBit(c+18,"Core decode io_ren2", false,-1);
        tracep->declBus(c+19,"Core decode io_raddr2", false,-1, 4,0);
        tracep->declBit(c+20,"Core decode io_is_ebreak", false,-1);
        tracep->declQuad(c+1379,"Core decode io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+1381,"Core decode io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+21,"Core decode io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+23,"Core decode io_rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+2,"Core decode io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+25,"Core decode io_p_npc_o", false,-1, 31,0);
        tracep->declBit(c+26,"Core decode io_decode_rf_stall_i", false,-1);
        tracep->declBus(c+4,"Core decode pc", false,-1, 31,0);
        tracep->declBus(c+5,"Core decode inst", false,-1, 31,0);
        tracep->declBit(c+133,"Core decode inst_valid", false,-1);
        tracep->declBus(c+25,"Core decode reg_pnpc", false,-1, 31,0);
        tracep->declQuad(c+21,"Core decode rs1_reg", false,-1, 63,0);
        tracep->declQuad(c+23,"Core decode rs2_reg", false,-1, 63,0);
        tracep->declBus(c+8,"Core decode ctrl_4", false,-1, 1,0);
        tracep->declBit(c+11,"Core decode c0_0", false,-1);
        tracep->declBus(c+134,"Core decode c0_1", false,-1, 2,0);
        tracep->declBus(c+13,"Core decode c0_2", false,-1, 2,0);
        tracep->declBit(c+135,"Core decode c0_3", false,-1);
        tracep->declBus(c+136,"Core decode c0_4", false,-1, 2,0);
        tracep->declBit(c+1399,"Core decode stall", false,-1);
        tracep->declBit(c+20,"Core decode io_is_ebreak_REG", false,-1);
        tracep->declBus(c+137,"Core decode imm_i_hi", false,-1, 20,0);
        tracep->declBus(c+138,"Core decode imm_i_lo", false,-1, 10,0);
        tracep->declBus(c+139,"Core decode imm_i", false,-1, 31,0);
        tracep->declBus(c+140,"Core decode imm_s_hi_lo", false,-1, 5,0);
        tracep->declBus(c+141,"Core decode imm_s", false,-1, 31,0);
        tracep->declBus(c+142,"Core decode imm_b_hi_hi_hi", false,-1, 19,0);
        tracep->declBit(c+143,"Core decode imm_b_hi_hi_lo", false,-1);
        tracep->declBus(c+144,"Core decode imm_b_lo_hi", false,-1, 3,0);
        tracep->declBus(c+145,"Core decode imm_b", false,-1, 31,0);
        tracep->declBus(c+146,"Core decode imm_u_hi", false,-1, 19,0);
        tracep->declBus(c+147,"Core decode imm_u", false,-1, 31,0);
        tracep->declBus(c+148,"Core decode imm_j_hi_hi_hi", false,-1, 11,0);
        tracep->declBus(c+149,"Core decode imm_j_hi_hi_lo", false,-1, 7,0);
        tracep->declBit(c+150,"Core decode imm_j_hi_lo", false,-1);
        tracep->declBus(c+151,"Core decode imm_j_lo_hi", false,-1, 9,0);
        tracep->declBus(c+152,"Core decode imm_j", false,-1, 31,0);
        tracep->declBus(c+153,"Core decode imm_shamt_lo_1", false,-1, 5,0);
        tracep->declBus(c+154,"Core decode imm_shamt", false,-1, 31,0);
        tracep->declBus(c+155,"Core decode imm_csr", false,-1, 31,0);
        tracep->declBit(c+1415,"Core regfile clock", false,-1);
        tracep->declBit(c+1416,"Core regfile reset", false,-1);
        tracep->declBit(c+16,"Core regfile io_ren1", false,-1);
        tracep->declBus(c+17,"Core regfile io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+1379,"Core regfile io_rdata1", false,-1, 63,0);
        tracep->declBit(c+18,"Core regfile io_ren2", false,-1);
        tracep->declBus(c+19,"Core regfile io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+1381,"Core regfile io_rdata2", false,-1, 63,0);
        tracep->declBit(c+27,"Core regfile io_wen", false,-1);
        tracep->declBus(c+28,"Core regfile io_waddr", false,-1, 4,0);
        tracep->declQuad(c+29,"Core regfile io_wdata", false,-1, 63,0);
        tracep->declQuad(c+31,"Core regfile io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+33,"Core regfile io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+35,"Core regfile io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+37,"Core regfile io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+39,"Core regfile io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+41,"Core regfile io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+43,"Core regfile io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+45,"Core regfile io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+47,"Core regfile io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+49,"Core regfile io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+51,"Core regfile io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+53,"Core regfile io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+55,"Core regfile io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+57,"Core regfile io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+59,"Core regfile io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+61,"Core regfile io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+63,"Core regfile io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+65,"Core regfile io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+67,"Core regfile io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+69,"Core regfile io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+71,"Core regfile io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+73,"Core regfile io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+75,"Core regfile io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+77,"Core regfile io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+79,"Core regfile io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+81,"Core regfile io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+83,"Core regfile io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+85,"Core regfile io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+87,"Core regfile io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+89,"Core regfile io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+91,"Core regfile io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+93,"Core regfile io_regs_31", false,-1, 63,0);
        tracep->declBit(c+95,"Core regfile io_ex_rd_en", false,-1);
        tracep->declBus(c+96,"Core regfile io_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+97,"Core regfile io_ex_rd_data", false,-1, 63,0);
        tracep->declBit(c+99,"Core regfile io_ex_is_load_i", false,-1);
        tracep->declBit(c+100,"Core regfile io_ex_is_mdu_i", false,-1);
        tracep->declBit(c+101,"Core regfile io_mem_is_load_i", false,-1);
        tracep->declBit(c+102,"Core regfile io_mem_rd_en", false,-1);
        tracep->declBus(c+103,"Core regfile io_mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1396,"Core regfile io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+26,"Core regfile io_rf_stall", false,-1);
        tracep->declBit(c+156,"Core regfile ex_rs1_hazard", false,-1);
        tracep->declBit(c+157,"Core regfile ex_rs2_hazard", false,-1);
        tracep->declBit(c+158,"Core regfile mem_rs1_hazard", false,-1);
        tracep->declBit(c+159,"Core regfile mem_rs2_hazard", false,-1);
        tracep->declBit(c+160,"Core regfile wb_rs1_hazard", false,-1);
        tracep->declBit(c+161,"Core regfile wb_rs2_hazard", false,-1);
        tracep->declQuad(c+31,"Core regfile rf_0", false,-1, 63,0);
        tracep->declQuad(c+33,"Core regfile rf_1", false,-1, 63,0);
        tracep->declQuad(c+35,"Core regfile rf_2", false,-1, 63,0);
        tracep->declQuad(c+37,"Core regfile rf_3", false,-1, 63,0);
        tracep->declQuad(c+39,"Core regfile rf_4", false,-1, 63,0);
        tracep->declQuad(c+41,"Core regfile rf_5", false,-1, 63,0);
        tracep->declQuad(c+43,"Core regfile rf_6", false,-1, 63,0);
        tracep->declQuad(c+45,"Core regfile rf_7", false,-1, 63,0);
        tracep->declQuad(c+47,"Core regfile rf_8", false,-1, 63,0);
        tracep->declQuad(c+49,"Core regfile rf_9", false,-1, 63,0);
        tracep->declQuad(c+51,"Core regfile rf_10", false,-1, 63,0);
        tracep->declQuad(c+53,"Core regfile rf_11", false,-1, 63,0);
        tracep->declQuad(c+55,"Core regfile rf_12", false,-1, 63,0);
        tracep->declQuad(c+57,"Core regfile rf_13", false,-1, 63,0);
        tracep->declQuad(c+59,"Core regfile rf_14", false,-1, 63,0);
        tracep->declQuad(c+61,"Core regfile rf_15", false,-1, 63,0);
        tracep->declQuad(c+63,"Core regfile rf_16", false,-1, 63,0);
        tracep->declQuad(c+65,"Core regfile rf_17", false,-1, 63,0);
        tracep->declQuad(c+67,"Core regfile rf_18", false,-1, 63,0);
        tracep->declQuad(c+69,"Core regfile rf_19", false,-1, 63,0);
        tracep->declQuad(c+71,"Core regfile rf_20", false,-1, 63,0);
        tracep->declQuad(c+73,"Core regfile rf_21", false,-1, 63,0);
        tracep->declQuad(c+75,"Core regfile rf_22", false,-1, 63,0);
        tracep->declQuad(c+77,"Core regfile rf_23", false,-1, 63,0);
        tracep->declQuad(c+79,"Core regfile rf_24", false,-1, 63,0);
        tracep->declQuad(c+81,"Core regfile rf_25", false,-1, 63,0);
        tracep->declQuad(c+83,"Core regfile rf_26", false,-1, 63,0);
        tracep->declQuad(c+85,"Core regfile rf_27", false,-1, 63,0);
        tracep->declQuad(c+87,"Core regfile rf_28", false,-1, 63,0);
        tracep->declQuad(c+89,"Core regfile rf_29", false,-1, 63,0);
        tracep->declQuad(c+91,"Core regfile rf_30", false,-1, 63,0);
        tracep->declQuad(c+93,"Core regfile rf_31", false,-1, 63,0);
        tracep->declBit(c+1415,"Core execute clock", false,-1);
        tracep->declBit(c+1416,"Core execute reset", false,-1);
        tracep->declBit(c+1395,"Core execute io_in_ready", false,-1);
        tracep->declBit(c+1377,"Core execute io_in_bits_valid", false,-1);
        tracep->declBus(c+4,"Core execute io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+5,"Core execute io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+6,"Core execute io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+7,"Core execute io_in_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+8,"Core execute io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+9,"Core execute io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+10,"Core execute io_in_bits_mdu_code", false,-1, 3,0);
        tracep->declBit(c+11,"Core execute io_in_bits_w_type", false,-1);
        tracep->declBus(c+12,"Core execute io_in_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+13,"Core execute io_in_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+14,"Core execute io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+1378,"Core execute io_in_bits_rd_en", false,-1);
        tracep->declBus(c+15,"Core execute io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+1395,"Core execute io_out_ready", false,-1);
        tracep->declBit(c+1517,"Core execute io_out_valid", false,-1);
        tracep->declBit(c+104,"Core execute io_out_bits_valid", false,-1);
        tracep->declBus(c+105,"Core execute io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+106,"Core execute io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+107,"Core execute io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+108,"Core execute io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+109,"Core execute io_out_bits_mdu_code", false,-1, 3,0);
        tracep->declBus(c+96,"Core execute io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+110,"Core execute io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+21,"Core execute io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+23,"Core execute io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+97,"Core execute io_ex_data_o", false,-1, 63,0);
        tracep->declBit(c+20,"Core execute io_is_ebreak_i", false,-1);
        tracep->declBit(c+111,"Core execute io_is_ebreak_o", false,-1);
        tracep->declBus(c+112,"Core execute io_ex_rwaddr_o", false,-1, 31,0);
        tracep->declBit(c+1383,"Core execute io_ex_rvalid_o", false,-1);
        tracep->declBit(c+1384,"Core execute io_ex_wvalid_o", false,-1);
        tracep->declQuad(c+23,"Core execute io_ex_wdata_o", false,-1, 63,0);
        tracep->declBus(c+108,"Core execute io_ex_wsize_o", false,-1, 1,0);
        tracep->declQuad(c+113,"Core execute io_ex_mduout_o", false,-1, 63,0);
        tracep->declBit(c+115,"Core execute io_ex_mduready_o", false,-1);
        tracep->declBit(c+95,"Core execute io_ex_rd_en", false,-1);
        tracep->declBus(c+96,"Core execute io_ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+99,"Core execute io_ex_is_load", false,-1);
        tracep->declBit(c+100,"Core execute io_ex_is_mdu", false,-1);
        tracep->declBus(c+25,"Core execute io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+3,"Core execute io_jmp_packet_o_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+1394,"Core execute io_jmp_packet_o_mis", false,-1);
        tracep->declQuad(c+162,"Core execute alu_io_in1", false,-1, 63,0);
        tracep->declQuad(c+164,"Core execute alu_io_in2", false,-1, 63,0);
        tracep->declBus(c+166,"Core execute alu_io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+167,"Core execute alu_io_wtype_i", false,-1);
        tracep->declQuad(c+97,"Core execute alu_io_alu_out", false,-1, 63,0);
        tracep->declBit(c+168,"Core execute alu_io_jmp", false,-1);
        tracep->declBus(c+169,"Core execute alu_io_jmp_code", false,-1, 3,0);
        tracep->declBus(c+170,"Core execute alu_io_imm", false,-1, 31,0);
        tracep->declBus(c+105,"Core execute alu_io_pc_i", false,-1, 31,0);
        tracep->declBus(c+171,"Core execute alu_io_jmp_pc", false,-1, 31,0);
        tracep->declBit(c+1415,"Core execute mdu_clock", false,-1);
        tracep->declBit(c+1416,"Core execute mdu_reset", false,-1);
        tracep->declQuad(c+162,"Core execute mdu_io_in1", false,-1, 63,0);
        tracep->declQuad(c+164,"Core execute mdu_io_in2", false,-1, 63,0);
        tracep->declQuad(c+113,"Core execute mdu_io_out", false,-1, 63,0);
        tracep->declBus(c+109,"Core execute mdu_io_mduop_i", false,-1, 3,0);
        tracep->declBit(c+1400,"Core execute mdu_io_mdu_valid", false,-1);
        tracep->declBit(c+115,"Core execute mdu_io_mdu_ready", false,-1);
        tracep->declBit(c+1401,"Core execute stall", false,-1);
        tracep->declBit(c+111,"Core execute io_is_ebreak_o_REG", false,-1);
        tracep->declBit(c+104,"Core execute ex_reg_decodeop_valid", false,-1);
        tracep->declBus(c+105,"Core execute ex_reg_decodeop_pc", false,-1, 31,0);
        tracep->declBus(c+106,"Core execute ex_reg_decodeop_inst", false,-1, 31,0);
        tracep->declBus(c+166,"Core execute ex_reg_decodeop_alu_code", false,-1, 3,0);
        tracep->declBus(c+169,"Core execute ex_reg_decodeop_jmp_code", false,-1, 3,0);
        tracep->declBus(c+107,"Core execute ex_reg_decodeop_mem_code", false,-1, 1,0);
        tracep->declBus(c+108,"Core execute ex_reg_decodeop_mem_size", false,-1, 1,0);
        tracep->declBus(c+109,"Core execute ex_reg_decodeop_mdu_code", false,-1, 3,0);
        tracep->declBit(c+167,"Core execute ex_reg_decodeop_w_type", false,-1);
        tracep->declBus(c+172,"Core execute ex_reg_decodeop_rs1_src", false,-1, 2,0);
        tracep->declBus(c+173,"Core execute ex_reg_decodeop_rs2_src", false,-1, 2,0);
        tracep->declBus(c+96,"Core execute ex_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+110,"Core execute ex_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+170,"Core execute ex_reg_decodeop_imm", false,-1, 31,0);
        tracep->declBus(c+174,"Core execute rs1_temp_hi", false,-1, 31,0);
        tracep->declBus(c+175,"Core execute rs1_temp_lo", false,-1, 31,0);
        tracep->declBus(c+176,"Core execute real_npc", false,-1, 31,0);
        tracep->declBit(c+177,"Core execute is_load", false,-1);
        tracep->declBit(c+178,"Core execute is_store", false,-1);
        tracep->declQuad(c+162,"Core execute alu io_in1", false,-1, 63,0);
        tracep->declQuad(c+164,"Core execute alu io_in2", false,-1, 63,0);
        tracep->declBus(c+166,"Core execute alu io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+167,"Core execute alu io_wtype_i", false,-1);
        tracep->declQuad(c+97,"Core execute alu io_alu_out", false,-1, 63,0);
        tracep->declBit(c+168,"Core execute alu io_jmp", false,-1);
        tracep->declBus(c+169,"Core execute alu io_jmp_code", false,-1, 3,0);
        tracep->declBus(c+170,"Core execute alu io_imm", false,-1, 31,0);
        tracep->declBus(c+105,"Core execute alu io_pc_i", false,-1, 31,0);
        tracep->declBus(c+171,"Core execute alu io_jmp_pc", false,-1, 31,0);
        tracep->declBus(c+179,"Core execute alu shamt", false,-1, 5,0);
        tracep->declBus(c+180,"Core execute alu out0_lo", false,-1, 31,0);
        tracep->declQuad(c+181,"Core execute alu out0", false,-1, 63,0);
        tracep->declBus(c+183,"Core execute alu out1_lo", false,-1, 31,0);
        tracep->declBus(c+184,"Core execute alu out1_hi", false,-1, 31,0);
        tracep->declBit(c+1415,"Core execute mdu clock", false,-1);
        tracep->declBit(c+1416,"Core execute mdu reset", false,-1);
        tracep->declQuad(c+162,"Core execute mdu io_in1", false,-1, 63,0);
        tracep->declQuad(c+164,"Core execute mdu io_in2", false,-1, 63,0);
        tracep->declQuad(c+113,"Core execute mdu io_out", false,-1, 63,0);
        tracep->declBus(c+109,"Core execute mdu io_mduop_i", false,-1, 3,0);
        tracep->declBit(c+1400,"Core execute mdu io_mdu_valid", false,-1);
        tracep->declBit(c+115,"Core execute mdu io_mdu_ready", false,-1);
        tracep->declBit(c+1415,"Core execute mdu mul_clock", false,-1);
        tracep->declBit(c+1416,"Core execute mdu mul_reset", false,-1);
        tracep->declArray(c+185,"Core execute mdu mul_io_in1", false,-1, 64,0);
        tracep->declArray(c+188,"Core execute mdu mul_io_in2", false,-1, 64,0);
        tracep->declQuad(c+191,"Core execute mdu mul_io_out1", false,-1, 63,0);
        tracep->declQuad(c+193,"Core execute mdu mul_io_out2", false,-1, 63,0);
        tracep->declBit(c+195,"Core execute mdu mul_io_mul_valid", false,-1);
        tracep->declBit(c+196,"Core execute mdu mul_io_mul_ready", false,-1);
        tracep->declBit(c+1415,"Core execute mdu div_clock", false,-1);
        tracep->declBit(c+1416,"Core execute mdu div_reset", false,-1);
        tracep->declQuad(c+197,"Core execute mdu div_io_in1", false,-1, 63,0);
        tracep->declQuad(c+199,"Core execute mdu div_io_in2", false,-1, 63,0);
        tracep->declQuad(c+201,"Core execute mdu div_io_out_div", false,-1, 63,0);
        tracep->declQuad(c+203,"Core execute mdu div_io_out_rem", false,-1, 63,0);
        tracep->declBit(c+205,"Core execute mdu div_io_is_signed", false,-1);
        tracep->declBit(c+206,"Core execute mdu div_io_div_valid", false,-1);
        tracep->declBit(c+207,"Core execute mdu div_io_div_ready", false,-1);
        tracep->declBus(c+208,"Core execute mdu state", false,-1, 1,0);
        tracep->declBus(c+209,"Core execute mdu reg_mduop", false,-1, 3,0);
        tracep->declQuad(c+210,"Core execute mdu reg_x", false,-1, 63,0);
        tracep->declQuad(c+212,"Core execute mdu reg_y", false,-1, 63,0);
        tracep->declQuad(c+113,"Core execute mdu reg_out", false,-1, 63,0);
        tracep->declBit(c+115,"Core execute mdu completed", false,-1);
        tracep->declBit(c+205,"Core execute mdu is_div", false,-1);
        tracep->declBit(c+214,"Core execute mdu is_divu", false,-1);
        tracep->declBit(c+215,"Core execute mdu is_mul", false,-1);
        tracep->declBit(c+216,"Core execute mdu in1_sign", false,-1);
        tracep->declBit(c+217,"Core execute mdu in2_sign", false,-1);
        tracep->declBit(c+218,"Core execute mdu mul_high", false,-1);
        tracep->declBit(c+219,"Core execute mdu is_word", false,-1);
        tracep->declBit(c+220,"Core execute mdu want_div", false,-1);
        tracep->declBus(c+221,"Core execute mdu temp_x_lo", false,-1, 31,0);
        tracep->declBus(c+222,"Core execute mdu temp_x_hi", false,-1, 31,0);
        tracep->declQuad(c+197,"Core execute mdu temp_x", false,-1, 63,0);
        tracep->declBus(c+223,"Core execute mdu temp_y_lo", false,-1, 31,0);
        tracep->declBus(c+224,"Core execute mdu temp_y_hi", false,-1, 31,0);
        tracep->declQuad(c+199,"Core execute mdu temp_y", false,-1, 63,0);
        tracep->declBit(c+225,"Core execute mdu mul_io_in1_hi", false,-1);
        tracep->declBit(c+226,"Core execute mdu mul_io_in2_hi", false,-1);
        tracep->declBus(c+227,"Core execute mdu reg_out_lo", false,-1, 31,0);
        tracep->declBus(c+228,"Core execute mdu reg_out_hi", false,-1, 31,0);
        tracep->declQuad(c+229,"Core execute mdu reg_out_lo_1", false,-1, 63,0);
        tracep->declBus(c+231,"Core execute mdu reg_out_hi_1", false,-1, 31,0);
        tracep->declBit(c+1415,"Core execute mdu mul clock", false,-1);
        tracep->declBit(c+1416,"Core execute mdu mul reset", false,-1);
        tracep->declArray(c+185,"Core execute mdu mul io_in1", false,-1, 64,0);
        tracep->declArray(c+188,"Core execute mdu mul io_in2", false,-1, 64,0);
        tracep->declQuad(c+191,"Core execute mdu mul io_out1", false,-1, 63,0);
        tracep->declQuad(c+193,"Core execute mdu mul io_out2", false,-1, 63,0);
        tracep->declBit(c+195,"Core execute mdu mul io_mul_valid", false,-1);
        tracep->declBit(c+196,"Core execute mdu mul io_mul_ready", false,-1);
        tracep->declArray(c+232,"Core execute mdu mul booth_0_io_x", false,-1, 64,0);
        tracep->declBus(c+235,"Core execute mdu mul booth_0_io_y", false,-1, 2,0);
        tracep->declArray(c+236,"Core execute mdu mul booth_0_io_z", false,-1, 127,0);
        tracep->declBus(c+240,"Core execute mdu mul booth_0_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_1_io_x", false,-1, 64,0);
        tracep->declBus(c+241,"Core execute mdu mul booth_1_io_y", false,-1, 2,0);
        tracep->declArray(c+242,"Core execute mdu mul booth_1_io_z", false,-1, 127,0);
        tracep->declBus(c+246,"Core execute mdu mul booth_1_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_2_io_x", false,-1, 64,0);
        tracep->declBus(c+247,"Core execute mdu mul booth_2_io_y", false,-1, 2,0);
        tracep->declArray(c+248,"Core execute mdu mul booth_2_io_z", false,-1, 127,0);
        tracep->declBus(c+252,"Core execute mdu mul booth_2_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_3_io_x", false,-1, 64,0);
        tracep->declBus(c+253,"Core execute mdu mul booth_3_io_y", false,-1, 2,0);
        tracep->declArray(c+254,"Core execute mdu mul booth_3_io_z", false,-1, 127,0);
        tracep->declBus(c+258,"Core execute mdu mul booth_3_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_4_io_x", false,-1, 64,0);
        tracep->declBus(c+259,"Core execute mdu mul booth_4_io_y", false,-1, 2,0);
        tracep->declArray(c+260,"Core execute mdu mul booth_4_io_z", false,-1, 127,0);
        tracep->declBus(c+264,"Core execute mdu mul booth_4_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_5_io_x", false,-1, 64,0);
        tracep->declBus(c+265,"Core execute mdu mul booth_5_io_y", false,-1, 2,0);
        tracep->declArray(c+266,"Core execute mdu mul booth_5_io_z", false,-1, 127,0);
        tracep->declBus(c+270,"Core execute mdu mul booth_5_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_6_io_x", false,-1, 64,0);
        tracep->declBus(c+271,"Core execute mdu mul booth_6_io_y", false,-1, 2,0);
        tracep->declArray(c+272,"Core execute mdu mul booth_6_io_z", false,-1, 127,0);
        tracep->declBus(c+276,"Core execute mdu mul booth_6_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_7_io_x", false,-1, 64,0);
        tracep->declBus(c+277,"Core execute mdu mul booth_7_io_y", false,-1, 2,0);
        tracep->declArray(c+278,"Core execute mdu mul booth_7_io_z", false,-1, 127,0);
        tracep->declBus(c+282,"Core execute mdu mul booth_7_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_8_io_x", false,-1, 64,0);
        tracep->declBus(c+283,"Core execute mdu mul booth_8_io_y", false,-1, 2,0);
        tracep->declArray(c+284,"Core execute mdu mul booth_8_io_z", false,-1, 127,0);
        tracep->declBus(c+288,"Core execute mdu mul booth_8_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_9_io_x", false,-1, 64,0);
        tracep->declBus(c+289,"Core execute mdu mul booth_9_io_y", false,-1, 2,0);
        tracep->declArray(c+290,"Core execute mdu mul booth_9_io_z", false,-1, 127,0);
        tracep->declBus(c+294,"Core execute mdu mul booth_9_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_10_io_x", false,-1, 64,0);
        tracep->declBus(c+295,"Core execute mdu mul booth_10_io_y", false,-1, 2,0);
        tracep->declArray(c+296,"Core execute mdu mul booth_10_io_z", false,-1, 127,0);
        tracep->declBus(c+300,"Core execute mdu mul booth_10_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_11_io_x", false,-1, 64,0);
        tracep->declBus(c+301,"Core execute mdu mul booth_11_io_y", false,-1, 2,0);
        tracep->declArray(c+302,"Core execute mdu mul booth_11_io_z", false,-1, 127,0);
        tracep->declBus(c+306,"Core execute mdu mul booth_11_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_12_io_x", false,-1, 64,0);
        tracep->declBus(c+307,"Core execute mdu mul booth_12_io_y", false,-1, 2,0);
        tracep->declArray(c+308,"Core execute mdu mul booth_12_io_z", false,-1, 127,0);
        tracep->declBus(c+312,"Core execute mdu mul booth_12_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_13_io_x", false,-1, 64,0);
        tracep->declBus(c+313,"Core execute mdu mul booth_13_io_y", false,-1, 2,0);
        tracep->declArray(c+314,"Core execute mdu mul booth_13_io_z", false,-1, 127,0);
        tracep->declBus(c+318,"Core execute mdu mul booth_13_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_14_io_x", false,-1, 64,0);
        tracep->declBus(c+319,"Core execute mdu mul booth_14_io_y", false,-1, 2,0);
        tracep->declArray(c+320,"Core execute mdu mul booth_14_io_z", false,-1, 127,0);
        tracep->declBus(c+324,"Core execute mdu mul booth_14_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_15_io_x", false,-1, 64,0);
        tracep->declBus(c+325,"Core execute mdu mul booth_15_io_y", false,-1, 2,0);
        tracep->declArray(c+326,"Core execute mdu mul booth_15_io_z", false,-1, 127,0);
        tracep->declBus(c+330,"Core execute mdu mul booth_15_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_16_io_x", false,-1, 64,0);
        tracep->declBus(c+331,"Core execute mdu mul booth_16_io_y", false,-1, 2,0);
        tracep->declArray(c+332,"Core execute mdu mul booth_16_io_z", false,-1, 127,0);
        tracep->declBus(c+336,"Core execute mdu mul booth_16_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_17_io_x", false,-1, 64,0);
        tracep->declBus(c+337,"Core execute mdu mul booth_17_io_y", false,-1, 2,0);
        tracep->declArray(c+338,"Core execute mdu mul booth_17_io_z", false,-1, 127,0);
        tracep->declBus(c+342,"Core execute mdu mul booth_17_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_18_io_x", false,-1, 64,0);
        tracep->declBus(c+343,"Core execute mdu mul booth_18_io_y", false,-1, 2,0);
        tracep->declArray(c+344,"Core execute mdu mul booth_18_io_z", false,-1, 127,0);
        tracep->declBus(c+348,"Core execute mdu mul booth_18_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_19_io_x", false,-1, 64,0);
        tracep->declBus(c+349,"Core execute mdu mul booth_19_io_y", false,-1, 2,0);
        tracep->declArray(c+350,"Core execute mdu mul booth_19_io_z", false,-1, 127,0);
        tracep->declBus(c+354,"Core execute mdu mul booth_19_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_20_io_x", false,-1, 64,0);
        tracep->declBus(c+355,"Core execute mdu mul booth_20_io_y", false,-1, 2,0);
        tracep->declArray(c+356,"Core execute mdu mul booth_20_io_z", false,-1, 127,0);
        tracep->declBus(c+360,"Core execute mdu mul booth_20_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_21_io_x", false,-1, 64,0);
        tracep->declBus(c+361,"Core execute mdu mul booth_21_io_y", false,-1, 2,0);
        tracep->declArray(c+362,"Core execute mdu mul booth_21_io_z", false,-1, 127,0);
        tracep->declBus(c+366,"Core execute mdu mul booth_21_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_22_io_x", false,-1, 64,0);
        tracep->declBus(c+367,"Core execute mdu mul booth_22_io_y", false,-1, 2,0);
        tracep->declArray(c+368,"Core execute mdu mul booth_22_io_z", false,-1, 127,0);
        tracep->declBus(c+372,"Core execute mdu mul booth_22_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_23_io_x", false,-1, 64,0);
        tracep->declBus(c+373,"Core execute mdu mul booth_23_io_y", false,-1, 2,0);
        tracep->declArray(c+374,"Core execute mdu mul booth_23_io_z", false,-1, 127,0);
        tracep->declBus(c+378,"Core execute mdu mul booth_23_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_24_io_x", false,-1, 64,0);
        tracep->declBus(c+379,"Core execute mdu mul booth_24_io_y", false,-1, 2,0);
        tracep->declArray(c+380,"Core execute mdu mul booth_24_io_z", false,-1, 127,0);
        tracep->declBus(c+384,"Core execute mdu mul booth_24_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_25_io_x", false,-1, 64,0);
        tracep->declBus(c+385,"Core execute mdu mul booth_25_io_y", false,-1, 2,0);
        tracep->declArray(c+386,"Core execute mdu mul booth_25_io_z", false,-1, 127,0);
        tracep->declBus(c+390,"Core execute mdu mul booth_25_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_26_io_x", false,-1, 64,0);
        tracep->declBus(c+391,"Core execute mdu mul booth_26_io_y", false,-1, 2,0);
        tracep->declArray(c+392,"Core execute mdu mul booth_26_io_z", false,-1, 127,0);
        tracep->declBus(c+396,"Core execute mdu mul booth_26_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_27_io_x", false,-1, 64,0);
        tracep->declBus(c+397,"Core execute mdu mul booth_27_io_y", false,-1, 2,0);
        tracep->declArray(c+398,"Core execute mdu mul booth_27_io_z", false,-1, 127,0);
        tracep->declBus(c+402,"Core execute mdu mul booth_27_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_28_io_x", false,-1, 64,0);
        tracep->declBus(c+403,"Core execute mdu mul booth_28_io_y", false,-1, 2,0);
        tracep->declArray(c+404,"Core execute mdu mul booth_28_io_z", false,-1, 127,0);
        tracep->declBus(c+408,"Core execute mdu mul booth_28_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_29_io_x", false,-1, 64,0);
        tracep->declBus(c+409,"Core execute mdu mul booth_29_io_y", false,-1, 2,0);
        tracep->declArray(c+410,"Core execute mdu mul booth_29_io_z", false,-1, 127,0);
        tracep->declBus(c+414,"Core execute mdu mul booth_29_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_30_io_x", false,-1, 64,0);
        tracep->declBus(c+415,"Core execute mdu mul booth_30_io_y", false,-1, 2,0);
        tracep->declArray(c+416,"Core execute mdu mul booth_30_io_z", false,-1, 127,0);
        tracep->declBus(c+420,"Core execute mdu mul booth_30_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_31_io_x", false,-1, 64,0);
        tracep->declBus(c+421,"Core execute mdu mul booth_31_io_y", false,-1, 2,0);
        tracep->declArray(c+422,"Core execute mdu mul booth_31_io_z", false,-1, 127,0);
        tracep->declBus(c+426,"Core execute mdu mul booth_31_io_c", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_32_io_x", false,-1, 64,0);
        tracep->declBus(c+427,"Core execute mdu mul booth_32_io_y", false,-1, 2,0);
        tracep->declArray(c+428,"Core execute mdu mul booth_32_io_z", false,-1, 127,0);
        tracep->declBus(c+432,"Core execute mdu mul booth_32_io_c", false,-1, 1,0);
        tracep->declArray(c+433,"Core execute mdu mul csa_0_io_x", false,-1, 127,0);
        tracep->declArray(c+437,"Core execute mdu mul csa_0_io_y", false,-1, 127,0);
        tracep->declArray(c+441,"Core execute mdu mul csa_0_io_z", false,-1, 127,0);
        tracep->declArray(c+445,"Core execute mdu mul csa_0_io_s", false,-1, 127,0);
        tracep->declArray(c+449,"Core execute mdu mul csa_0_io_c", false,-1, 127,0);
        tracep->declArray(c+453,"Core execute mdu mul csa_1_io_x", false,-1, 127,0);
        tracep->declArray(c+457,"Core execute mdu mul csa_1_io_y", false,-1, 127,0);
        tracep->declArray(c+461,"Core execute mdu mul csa_1_io_z", false,-1, 127,0);
        tracep->declArray(c+465,"Core execute mdu mul csa_1_io_s", false,-1, 127,0);
        tracep->declArray(c+469,"Core execute mdu mul csa_1_io_c", false,-1, 127,0);
        tracep->declArray(c+473,"Core execute mdu mul csa_2_io_x", false,-1, 127,0);
        tracep->declArray(c+477,"Core execute mdu mul csa_2_io_y", false,-1, 127,0);
        tracep->declArray(c+481,"Core execute mdu mul csa_2_io_z", false,-1, 127,0);
        tracep->declArray(c+485,"Core execute mdu mul csa_2_io_s", false,-1, 127,0);
        tracep->declArray(c+489,"Core execute mdu mul csa_2_io_c", false,-1, 127,0);
        tracep->declArray(c+493,"Core execute mdu mul csa_3_io_x", false,-1, 127,0);
        tracep->declArray(c+497,"Core execute mdu mul csa_3_io_y", false,-1, 127,0);
        tracep->declArray(c+501,"Core execute mdu mul csa_3_io_z", false,-1, 127,0);
        tracep->declArray(c+505,"Core execute mdu mul csa_3_io_s", false,-1, 127,0);
        tracep->declArray(c+509,"Core execute mdu mul csa_3_io_c", false,-1, 127,0);
        tracep->declArray(c+513,"Core execute mdu mul csa_4_io_x", false,-1, 127,0);
        tracep->declArray(c+517,"Core execute mdu mul csa_4_io_y", false,-1, 127,0);
        tracep->declArray(c+521,"Core execute mdu mul csa_4_io_z", false,-1, 127,0);
        tracep->declArray(c+525,"Core execute mdu mul csa_4_io_s", false,-1, 127,0);
        tracep->declArray(c+529,"Core execute mdu mul csa_4_io_c", false,-1, 127,0);
        tracep->declArray(c+533,"Core execute mdu mul csa_5_io_x", false,-1, 127,0);
        tracep->declArray(c+537,"Core execute mdu mul csa_5_io_y", false,-1, 127,0);
        tracep->declArray(c+541,"Core execute mdu mul csa_5_io_z", false,-1, 127,0);
        tracep->declArray(c+545,"Core execute mdu mul csa_5_io_s", false,-1, 127,0);
        tracep->declArray(c+549,"Core execute mdu mul csa_5_io_c", false,-1, 127,0);
        tracep->declArray(c+553,"Core execute mdu mul csa_6_io_x", false,-1, 127,0);
        tracep->declArray(c+557,"Core execute mdu mul csa_6_io_y", false,-1, 127,0);
        tracep->declArray(c+561,"Core execute mdu mul csa_6_io_z", false,-1, 127,0);
        tracep->declArray(c+565,"Core execute mdu mul csa_6_io_s", false,-1, 127,0);
        tracep->declArray(c+569,"Core execute mdu mul csa_6_io_c", false,-1, 127,0);
        tracep->declArray(c+573,"Core execute mdu mul csa_7_io_x", false,-1, 127,0);
        tracep->declArray(c+577,"Core execute mdu mul csa_7_io_y", false,-1, 127,0);
        tracep->declArray(c+581,"Core execute mdu mul csa_7_io_z", false,-1, 127,0);
        tracep->declArray(c+585,"Core execute mdu mul csa_7_io_s", false,-1, 127,0);
        tracep->declArray(c+589,"Core execute mdu mul csa_7_io_c", false,-1, 127,0);
        tracep->declArray(c+593,"Core execute mdu mul csa_8_io_x", false,-1, 127,0);
        tracep->declArray(c+597,"Core execute mdu mul csa_8_io_y", false,-1, 127,0);
        tracep->declArray(c+601,"Core execute mdu mul csa_8_io_z", false,-1, 127,0);
        tracep->declArray(c+605,"Core execute mdu mul csa_8_io_s", false,-1, 127,0);
        tracep->declArray(c+609,"Core execute mdu mul csa_8_io_c", false,-1, 127,0);
        tracep->declArray(c+613,"Core execute mdu mul csa_9_io_x", false,-1, 127,0);
        tracep->declArray(c+617,"Core execute mdu mul csa_9_io_y", false,-1, 127,0);
        tracep->declArray(c+621,"Core execute mdu mul csa_9_io_z", false,-1, 127,0);
        tracep->declArray(c+625,"Core execute mdu mul csa_9_io_s", false,-1, 127,0);
        tracep->declArray(c+629,"Core execute mdu mul csa_9_io_c", false,-1, 127,0);
        tracep->declArray(c+633,"Core execute mdu mul csa_10_io_x", false,-1, 127,0);
        tracep->declArray(c+637,"Core execute mdu mul csa_10_io_y", false,-1, 127,0);
        tracep->declArray(c+641,"Core execute mdu mul csa_10_io_z", false,-1, 127,0);
        tracep->declArray(c+645,"Core execute mdu mul csa_10_io_s", false,-1, 127,0);
        tracep->declArray(c+649,"Core execute mdu mul csa_10_io_c", false,-1, 127,0);
        tracep->declArray(c+445,"Core execute mdu mul csa_11_io_x", false,-1, 127,0);
        tracep->declArray(c+449,"Core execute mdu mul csa_11_io_y", false,-1, 127,0);
        tracep->declArray(c+469,"Core execute mdu mul csa_11_io_z", false,-1, 127,0);
        tracep->declArray(c+653,"Core execute mdu mul csa_11_io_s", false,-1, 127,0);
        tracep->declArray(c+657,"Core execute mdu mul csa_11_io_c", false,-1, 127,0);
        tracep->declArray(c+465,"Core execute mdu mul csa_12_io_x", false,-1, 127,0);
        tracep->declArray(c+489,"Core execute mdu mul csa_12_io_y", false,-1, 127,0);
        tracep->declArray(c+485,"Core execute mdu mul csa_12_io_z", false,-1, 127,0);
        tracep->declArray(c+661,"Core execute mdu mul csa_12_io_s", false,-1, 127,0);
        tracep->declArray(c+665,"Core execute mdu mul csa_12_io_c", false,-1, 127,0);
        tracep->declArray(c+505,"Core execute mdu mul csa_13_io_x", false,-1, 127,0);
        tracep->declArray(c+509,"Core execute mdu mul csa_13_io_y", false,-1, 127,0);
        tracep->declArray(c+529,"Core execute mdu mul csa_13_io_z", false,-1, 127,0);
        tracep->declArray(c+669,"Core execute mdu mul csa_13_io_s", false,-1, 127,0);
        tracep->declArray(c+673,"Core execute mdu mul csa_13_io_c", false,-1, 127,0);
        tracep->declArray(c+525,"Core execute mdu mul csa_14_io_x", false,-1, 127,0);
        tracep->declArray(c+549,"Core execute mdu mul csa_14_io_y", false,-1, 127,0);
        tracep->declArray(c+545,"Core execute mdu mul csa_14_io_z", false,-1, 127,0);
        tracep->declArray(c+677,"Core execute mdu mul csa_14_io_s", false,-1, 127,0);
        tracep->declArray(c+681,"Core execute mdu mul csa_14_io_c", false,-1, 127,0);
        tracep->declArray(c+565,"Core execute mdu mul csa_15_io_x", false,-1, 127,0);
        tracep->declArray(c+569,"Core execute mdu mul csa_15_io_y", false,-1, 127,0);
        tracep->declArray(c+589,"Core execute mdu mul csa_15_io_z", false,-1, 127,0);
        tracep->declArray(c+685,"Core execute mdu mul csa_15_io_s", false,-1, 127,0);
        tracep->declArray(c+689,"Core execute mdu mul csa_15_io_c", false,-1, 127,0);
        tracep->declArray(c+585,"Core execute mdu mul csa_16_io_x", false,-1, 127,0);
        tracep->declArray(c+609,"Core execute mdu mul csa_16_io_y", false,-1, 127,0);
        tracep->declArray(c+605,"Core execute mdu mul csa_16_io_z", false,-1, 127,0);
        tracep->declArray(c+693,"Core execute mdu mul csa_16_io_s", false,-1, 127,0);
        tracep->declArray(c+697,"Core execute mdu mul csa_16_io_c", false,-1, 127,0);
        tracep->declArray(c+625,"Core execute mdu mul csa_17_io_x", false,-1, 127,0);
        tracep->declArray(c+629,"Core execute mdu mul csa_17_io_y", false,-1, 127,0);
        tracep->declArray(c+701,"Core execute mdu mul csa_17_io_z", false,-1, 127,0);
        tracep->declArray(c+705,"Core execute mdu mul csa_17_io_s", false,-1, 127,0);
        tracep->declArray(c+709,"Core execute mdu mul csa_17_io_c", false,-1, 127,0);
        tracep->declArray(c+645,"Core execute mdu mul csa_18_io_x", false,-1, 127,0);
        tracep->declArray(c+649,"Core execute mdu mul csa_18_io_y", false,-1, 127,0);
        tracep->declArray(c+653,"Core execute mdu mul csa_18_io_z", false,-1, 127,0);
        tracep->declArray(c+713,"Core execute mdu mul csa_18_io_s", false,-1, 127,0);
        tracep->declArray(c+717,"Core execute mdu mul csa_18_io_c", false,-1, 127,0);
        tracep->declArray(c+657,"Core execute mdu mul csa_19_io_x", false,-1, 127,0);
        tracep->declArray(c+661,"Core execute mdu mul csa_19_io_y", false,-1, 127,0);
        tracep->declArray(c+665,"Core execute mdu mul csa_19_io_z", false,-1, 127,0);
        tracep->declArray(c+721,"Core execute mdu mul csa_19_io_s", false,-1, 127,0);
        tracep->declArray(c+725,"Core execute mdu mul csa_19_io_c", false,-1, 127,0);
        tracep->declArray(c+669,"Core execute mdu mul csa_20_io_x", false,-1, 127,0);
        tracep->declArray(c+673,"Core execute mdu mul csa_20_io_y", false,-1, 127,0);
        tracep->declArray(c+677,"Core execute mdu mul csa_20_io_z", false,-1, 127,0);
        tracep->declArray(c+729,"Core execute mdu mul csa_20_io_s", false,-1, 127,0);
        tracep->declArray(c+733,"Core execute mdu mul csa_20_io_c", false,-1, 127,0);
        tracep->declArray(c+681,"Core execute mdu mul csa_21_io_x", false,-1, 127,0);
        tracep->declArray(c+685,"Core execute mdu mul csa_21_io_y", false,-1, 127,0);
        tracep->declArray(c+689,"Core execute mdu mul csa_21_io_z", false,-1, 127,0);
        tracep->declArray(c+737,"Core execute mdu mul csa_21_io_s", false,-1, 127,0);
        tracep->declArray(c+741,"Core execute mdu mul csa_21_io_c", false,-1, 127,0);
        tracep->declArray(c+693,"Core execute mdu mul csa_22_io_x", false,-1, 127,0);
        tracep->declArray(c+697,"Core execute mdu mul csa_22_io_y", false,-1, 127,0);
        tracep->declArray(c+705,"Core execute mdu mul csa_22_io_z", false,-1, 127,0);
        tracep->declArray(c+745,"Core execute mdu mul csa_22_io_s", false,-1, 127,0);
        tracep->declArray(c+749,"Core execute mdu mul csa_22_io_c", false,-1, 127,0);
        tracep->declArray(c+709,"Core execute mdu mul csa_23_io_x", false,-1, 127,0);
        tracep->declArray(c+713,"Core execute mdu mul csa_23_io_y", false,-1, 127,0);
        tracep->declArray(c+717,"Core execute mdu mul csa_23_io_z", false,-1, 127,0);
        tracep->declArray(c+753,"Core execute mdu mul csa_23_io_s", false,-1, 127,0);
        tracep->declArray(c+757,"Core execute mdu mul csa_23_io_c", false,-1, 127,0);
        tracep->declArray(c+721,"Core execute mdu mul csa_24_io_x", false,-1, 127,0);
        tracep->declArray(c+725,"Core execute mdu mul csa_24_io_y", false,-1, 127,0);
        tracep->declArray(c+729,"Core execute mdu mul csa_24_io_z", false,-1, 127,0);
        tracep->declArray(c+761,"Core execute mdu mul csa_24_io_s", false,-1, 127,0);
        tracep->declArray(c+765,"Core execute mdu mul csa_24_io_c", false,-1, 127,0);
        tracep->declArray(c+733,"Core execute mdu mul csa_25_io_x", false,-1, 127,0);
        tracep->declArray(c+737,"Core execute mdu mul csa_25_io_y", false,-1, 127,0);
        tracep->declArray(c+741,"Core execute mdu mul csa_25_io_z", false,-1, 127,0);
        tracep->declArray(c+769,"Core execute mdu mul csa_25_io_s", false,-1, 127,0);
        tracep->declArray(c+773,"Core execute mdu mul csa_25_io_c", false,-1, 127,0);
        tracep->declArray(c+777,"Core execute mdu mul csa_26_io_x", false,-1, 127,0);
        tracep->declArray(c+781,"Core execute mdu mul csa_26_io_y", false,-1, 127,0);
        tracep->declArray(c+785,"Core execute mdu mul csa_26_io_z", false,-1, 127,0);
        tracep->declArray(c+789,"Core execute mdu mul csa_26_io_s", false,-1, 127,0);
        tracep->declArray(c+793,"Core execute mdu mul csa_26_io_c", false,-1, 127,0);
        tracep->declArray(c+797,"Core execute mdu mul csa_27_io_x", false,-1, 127,0);
        tracep->declArray(c+801,"Core execute mdu mul csa_27_io_y", false,-1, 127,0);
        tracep->declArray(c+805,"Core execute mdu mul csa_27_io_z", false,-1, 127,0);
        tracep->declArray(c+809,"Core execute mdu mul csa_27_io_s", false,-1, 127,0);
        tracep->declArray(c+813,"Core execute mdu mul csa_27_io_c", false,-1, 127,0);
        tracep->declArray(c+817,"Core execute mdu mul csa_28_io_x", false,-1, 127,0);
        tracep->declArray(c+821,"Core execute mdu mul csa_28_io_y", false,-1, 127,0);
        tracep->declArray(c+789,"Core execute mdu mul csa_28_io_z", false,-1, 127,0);
        tracep->declArray(c+825,"Core execute mdu mul csa_28_io_s", false,-1, 127,0);
        tracep->declArray(c+829,"Core execute mdu mul csa_28_io_c", false,-1, 127,0);
        tracep->declArray(c+809,"Core execute mdu mul csa_29_io_x", false,-1, 127,0);
        tracep->declArray(c+793,"Core execute mdu mul csa_29_io_y", false,-1, 127,0);
        tracep->declArray(c+813,"Core execute mdu mul csa_29_io_z", false,-1, 127,0);
        tracep->declArray(c+833,"Core execute mdu mul csa_29_io_s", false,-1, 127,0);
        tracep->declArray(c+837,"Core execute mdu mul csa_29_io_c", false,-1, 127,0);
        tracep->declArray(c+825,"Core execute mdu mul csa_30_io_x", false,-1, 127,0);
        tracep->declArray(c+833,"Core execute mdu mul csa_30_io_y", false,-1, 127,0);
        tracep->declArray(c+829,"Core execute mdu mul csa_30_io_z", false,-1, 127,0);
        tracep->declArray(c+841,"Core execute mdu mul csa_30_io_s", false,-1, 127,0);
        tracep->declArray(c+845,"Core execute mdu mul csa_30_io_c", false,-1, 127,0);
        tracep->declArray(c+841,"Core execute mdu mul csa_31_io_x", false,-1, 127,0);
        tracep->declArray(c+845,"Core execute mdu mul csa_31_io_y", false,-1, 127,0);
        tracep->declArray(c+837,"Core execute mdu mul csa_31_io_z", false,-1, 127,0);
        tracep->declArray(c+849,"Core execute mdu mul csa_31_io_s", false,-1, 127,0);
        tracep->declArray(c+853,"Core execute mdu mul csa_31_io_c", false,-1, 127,0);
        tracep->declBus(c+857,"Core execute mdu mul state", false,-1, 1,0);
        tracep->declArray(c+232,"Core execute mdu mul reg_in1", false,-1, 64,0);
        tracep->declArray(c+858,"Core execute mdu mul reg_in2", false,-1, 66,0);
        tracep->declArray(c+433,"Core execute mdu mul pp_0", false,-1, 127,0);
        tracep->declArray(c+861,"Core execute mdu mul pp_1", false,-1, 127,0);
        tracep->declArray(c+865,"Core execute mdu mul pp_2", false,-1, 127,0);
        tracep->declArray(c+869,"Core execute mdu mul pp_3", false,-1, 127,0);
        tracep->declArray(c+873,"Core execute mdu mul pp_4", false,-1, 127,0);
        tracep->declArray(c+877,"Core execute mdu mul pp_5", false,-1, 127,0);
        tracep->declArray(c+881,"Core execute mdu mul pp_6", false,-1, 127,0);
        tracep->declArray(c+885,"Core execute mdu mul pp_7", false,-1, 127,0);
        tracep->declArray(c+889,"Core execute mdu mul pp_8", false,-1, 127,0);
        tracep->declArray(c+893,"Core execute mdu mul pp_9", false,-1, 127,0);
        tracep->declArray(c+897,"Core execute mdu mul pp_10", false,-1, 127,0);
        tracep->declArray(c+901,"Core execute mdu mul pp_11", false,-1, 127,0);
        tracep->declArray(c+905,"Core execute mdu mul pp_12", false,-1, 127,0);
        tracep->declArray(c+909,"Core execute mdu mul pp_13", false,-1, 127,0);
        tracep->declArray(c+913,"Core execute mdu mul pp_14", false,-1, 127,0);
        tracep->declArray(c+917,"Core execute mdu mul pp_15", false,-1, 127,0);
        tracep->declArray(c+921,"Core execute mdu mul pp_16", false,-1, 127,0);
        tracep->declArray(c+925,"Core execute mdu mul pp_17", false,-1, 127,0);
        tracep->declArray(c+929,"Core execute mdu mul pp_18", false,-1, 127,0);
        tracep->declArray(c+933,"Core execute mdu mul pp_19", false,-1, 127,0);
        tracep->declArray(c+937,"Core execute mdu mul pp_20", false,-1, 127,0);
        tracep->declArray(c+941,"Core execute mdu mul pp_21", false,-1, 127,0);
        tracep->declArray(c+945,"Core execute mdu mul pp_22", false,-1, 127,0);
        tracep->declArray(c+949,"Core execute mdu mul pp_23", false,-1, 127,0);
        tracep->declArray(c+953,"Core execute mdu mul pp_24", false,-1, 127,0);
        tracep->declArray(c+957,"Core execute mdu mul pp_25", false,-1, 127,0);
        tracep->declArray(c+961,"Core execute mdu mul pp_26", false,-1, 127,0);
        tracep->declArray(c+965,"Core execute mdu mul pp_27", false,-1, 127,0);
        tracep->declArray(c+969,"Core execute mdu mul pp_28", false,-1, 127,0);
        tracep->declArray(c+973,"Core execute mdu mul pp_29", false,-1, 127,0);
        tracep->declArray(c+977,"Core execute mdu mul pp_30", false,-1, 127,0);
        tracep->declArray(c+981,"Core execute mdu mul pp_31", false,-1, 127,0);
        tracep->declArray(c+985,"Core execute mdu mul pp_32", false,-1, 127,0);
        tracep->declArray(c+777,"Core execute mdu mul pp_l2_0", false,-1, 127,0);
        tracep->declArray(c+781,"Core execute mdu mul pp_l2_1", false,-1, 127,0);
        tracep->declArray(c+785,"Core execute mdu mul pp_l2_2", false,-1, 127,0);
        tracep->declArray(c+797,"Core execute mdu mul pp_l2_3", false,-1, 127,0);
        tracep->declArray(c+801,"Core execute mdu mul pp_l2_4", false,-1, 127,0);
        tracep->declArray(c+805,"Core execute mdu mul pp_l2_5", false,-1, 127,0);
        tracep->declArray(c+817,"Core execute mdu mul pp_l2_6", false,-1, 127,0);
        tracep->declArray(c+821,"Core execute mdu mul pp_l2_7", false,-1, 127,0);
        tracep->declBit(c+989,"Core execute mdu mul c_1", false,-1);
        tracep->declBit(c+990,"Core execute mdu mul c_0", false,-1);
        tracep->declBit(c+991,"Core execute mdu mul c_3", false,-1);
        tracep->declBit(c+992,"Core execute mdu mul c_2", false,-1);
        tracep->declBit(c+993,"Core execute mdu mul c_5", false,-1);
        tracep->declBit(c+994,"Core execute mdu mul c_4", false,-1);
        tracep->declBit(c+995,"Core execute mdu mul c_7", false,-1);
        tracep->declBit(c+996,"Core execute mdu mul c_6", false,-1);
        tracep->declBit(c+997,"Core execute mdu mul c_9", false,-1);
        tracep->declBit(c+998,"Core execute mdu mul c_8", false,-1);
        tracep->declBit(c+999,"Core execute mdu mul c_11", false,-1);
        tracep->declBit(c+1000,"Core execute mdu mul c_10", false,-1);
        tracep->declBit(c+1001,"Core execute mdu mul c_13", false,-1);
        tracep->declBit(c+1002,"Core execute mdu mul c_12", false,-1);
        tracep->declBit(c+1003,"Core execute mdu mul c_15", false,-1);
        tracep->declBit(c+1004,"Core execute mdu mul c_14", false,-1);
        tracep->declBit(c+1005,"Core execute mdu mul c_17", false,-1);
        tracep->declBit(c+1006,"Core execute mdu mul c_16", false,-1);
        tracep->declBit(c+1007,"Core execute mdu mul c_19", false,-1);
        tracep->declBit(c+1008,"Core execute mdu mul c_18", false,-1);
        tracep->declBit(c+1009,"Core execute mdu mul c_21", false,-1);
        tracep->declBit(c+1010,"Core execute mdu mul c_20", false,-1);
        tracep->declBit(c+1011,"Core execute mdu mul c_23", false,-1);
        tracep->declBit(c+1012,"Core execute mdu mul c_22", false,-1);
        tracep->declBit(c+1013,"Core execute mdu mul c_25", false,-1);
        tracep->declBit(c+1014,"Core execute mdu mul c_24", false,-1);
        tracep->declBit(c+1015,"Core execute mdu mul c_27", false,-1);
        tracep->declBit(c+1016,"Core execute mdu mul c_26", false,-1);
        tracep->declBit(c+1017,"Core execute mdu mul c_29", false,-1);
        tracep->declBit(c+1018,"Core execute mdu mul c_28", false,-1);
        tracep->declBit(c+1019,"Core execute mdu mul c_31", false,-1);
        tracep->declBit(c+1020,"Core execute mdu mul c_30", false,-1);
        tracep->declBit(c+1021,"Core execute mdu mul c_33", false,-1);
        tracep->declBit(c+1022,"Core execute mdu mul c_32", false,-1);
        tracep->declBit(c+1023,"Core execute mdu mul c_35", false,-1);
        tracep->declBit(c+1024,"Core execute mdu mul c_34", false,-1);
        tracep->declBit(c+1025,"Core execute mdu mul c_37", false,-1);
        tracep->declBit(c+1026,"Core execute mdu mul c_36", false,-1);
        tracep->declBit(c+1027,"Core execute mdu mul c_39", false,-1);
        tracep->declBit(c+1028,"Core execute mdu mul c_38", false,-1);
        tracep->declBit(c+1029,"Core execute mdu mul c_41", false,-1);
        tracep->declBit(c+1030,"Core execute mdu mul c_40", false,-1);
        tracep->declBit(c+1031,"Core execute mdu mul c_43", false,-1);
        tracep->declBit(c+1032,"Core execute mdu mul c_42", false,-1);
        tracep->declBit(c+1033,"Core execute mdu mul c_45", false,-1);
        tracep->declBit(c+1034,"Core execute mdu mul c_44", false,-1);
        tracep->declBit(c+1035,"Core execute mdu mul c_47", false,-1);
        tracep->declBit(c+1036,"Core execute mdu mul c_46", false,-1);
        tracep->declBit(c+1037,"Core execute mdu mul c_49", false,-1);
        tracep->declBit(c+1038,"Core execute mdu mul c_48", false,-1);
        tracep->declBit(c+1039,"Core execute mdu mul c_51", false,-1);
        tracep->declBit(c+1040,"Core execute mdu mul c_50", false,-1);
        tracep->declBit(c+1041,"Core execute mdu mul c_53", false,-1);
        tracep->declBit(c+1042,"Core execute mdu mul c_52", false,-1);
        tracep->declBit(c+1043,"Core execute mdu mul c_55", false,-1);
        tracep->declBit(c+1044,"Core execute mdu mul c_54", false,-1);
        tracep->declBit(c+1045,"Core execute mdu mul c_57", false,-1);
        tracep->declBit(c+1046,"Core execute mdu mul c_56", false,-1);
        tracep->declBit(c+1047,"Core execute mdu mul c_59", false,-1);
        tracep->declBit(c+1048,"Core execute mdu mul c_58", false,-1);
        tracep->declBit(c+1049,"Core execute mdu mul c_61", false,-1);
        tracep->declBit(c+1050,"Core execute mdu mul c_60", false,-1);
        tracep->declBit(c+1051,"Core execute mdu mul c_63", false,-1);
        tracep->declBit(c+1052,"Core execute mdu mul c_62", false,-1);
        tracep->declBit(c+1053,"Core execute mdu mul c_65", false,-1);
        tracep->declBit(c+1054,"Core execute mdu mul c_64", false,-1);
        tracep->declArray(c+701,"Core execute mdu mul pp33", false,-1, 127,0);
        tracep->declArray(c+1055,"Core execute mdu mul reg_out", false,-1, 127,0);
        tracep->declArray(c+1059,"Core execute mdu mul csa_0_io_y_hi", false,-1, 125,0);
        tracep->declArray(c+1063,"Core execute mdu mul csa_0_io_z_hi", false,-1, 123,0);
        tracep->declArray(c+1067,"Core execute mdu mul csa_1_io_x_hi", false,-1, 121,0);
        tracep->declArray(c+1071,"Core execute mdu mul csa_1_io_y_hi", false,-1, 119,0);
        tracep->declArray(c+1075,"Core execute mdu mul csa_1_io_z_hi", false,-1, 117,0);
        tracep->declArray(c+1079,"Core execute mdu mul csa_2_io_x_hi", false,-1, 115,0);
        tracep->declArray(c+1083,"Core execute mdu mul csa_2_io_y_hi", false,-1, 113,0);
        tracep->declArray(c+1087,"Core execute mdu mul csa_2_io_z_hi", false,-1, 111,0);
        tracep->declArray(c+1091,"Core execute mdu mul csa_3_io_x_hi", false,-1, 109,0);
        tracep->declArray(c+1095,"Core execute mdu mul csa_3_io_y_hi", false,-1, 107,0);
        tracep->declArray(c+1099,"Core execute mdu mul csa_3_io_z_hi", false,-1, 105,0);
        tracep->declArray(c+1103,"Core execute mdu mul csa_4_io_x_hi", false,-1, 103,0);
        tracep->declArray(c+1107,"Core execute mdu mul csa_4_io_y_hi", false,-1, 101,0);
        tracep->declArray(c+1111,"Core execute mdu mul csa_4_io_z_hi", false,-1, 99,0);
        tracep->declArray(c+1115,"Core execute mdu mul csa_5_io_x_hi", false,-1, 97,0);
        tracep->declArray(c+1119,"Core execute mdu mul csa_5_io_y_hi", false,-1, 95,0);
        tracep->declArray(c+1122,"Core execute mdu mul csa_5_io_z_hi", false,-1, 93,0);
        tracep->declArray(c+1125,"Core execute mdu mul csa_6_io_x_hi", false,-1, 91,0);
        tracep->declArray(c+1128,"Core execute mdu mul csa_6_io_y_hi", false,-1, 89,0);
        tracep->declArray(c+1131,"Core execute mdu mul csa_6_io_z_hi", false,-1, 87,0);
        tracep->declArray(c+1134,"Core execute mdu mul csa_7_io_x_hi", false,-1, 85,0);
        tracep->declArray(c+1137,"Core execute mdu mul csa_7_io_y_hi", false,-1, 83,0);
        tracep->declArray(c+1140,"Core execute mdu mul csa_7_io_z_hi", false,-1, 81,0);
        tracep->declArray(c+1143,"Core execute mdu mul csa_8_io_x_hi", false,-1, 79,0);
        tracep->declArray(c+1146,"Core execute mdu mul csa_8_io_y_hi", false,-1, 77,0);
        tracep->declArray(c+1149,"Core execute mdu mul csa_8_io_z_hi", false,-1, 75,0);
        tracep->declArray(c+1152,"Core execute mdu mul csa_9_io_x_hi", false,-1, 73,0);
        tracep->declArray(c+1155,"Core execute mdu mul csa_9_io_y_hi", false,-1, 71,0);
        tracep->declArray(c+1158,"Core execute mdu mul csa_9_io_z_hi", false,-1, 69,0);
        tracep->declArray(c+1161,"Core execute mdu mul csa_10_io_x_hi", false,-1, 67,0);
        tracep->declArray(c+1164,"Core execute mdu mul csa_10_io_y_hi", false,-1, 65,0);
        tracep->declQuad(c+1167,"Core execute mdu mul csa_10_io_z_hi", false,-1, 63,0);
        tracep->declArray(c+849,"Core execute mdu mul s_l8", false,-1, 127,0);
        tracep->declArray(c+853,"Core execute mdu mul c_l8", false,-1, 127,0);
        tracep->declArray(c+1169,"Core execute mdu mul temp_out", false,-1, 127,0);
        tracep->declBit(c+1173,"Core execute mdu mul reg_in2_hi_hi", false,-1);
        tracep->declBus(c+1174,"Core execute mdu mul pp33_lo_lo_lo", false,-1, 7,0);
        tracep->declBus(c+1175,"Core execute mdu mul pp33_lo_hi_lo", false,-1, 7,0);
        tracep->declBus(c+1176,"Core execute mdu mul pp33_lo_hi", false,-1, 16,0);
        tracep->declQuad(c+1177,"Core execute mdu mul pp33_lo", false,-1, 32,0);
        tracep->declBus(c+1179,"Core execute mdu mul pp33_hi_lo_lo", false,-1, 7,0);
        tracep->declBus(c+1180,"Core execute mdu mul pp33_hi_hi_lo", false,-1, 7,0);
        tracep->declBus(c+1181,"Core execute mdu mul pp33_hi_hi", false,-1, 16,0);
        tracep->declQuad(c+1182,"Core execute mdu mul pp33_hi_1", false,-1, 32,0);
        tracep->declArray(c+753,"Core execute mdu mul s_l4_0", false,-1, 127,0);
        tracep->declArray(c+761,"Core execute mdu mul s_l4_1", false,-1, 127,0);
        tracep->declArray(c+769,"Core execute mdu mul s_l4_2", false,-1, 127,0);
        tracep->declArray(c+757,"Core execute mdu mul c_l4_0", false,-1, 127,0);
        tracep->declArray(c+765,"Core execute mdu mul c_l4_1", false,-1, 127,0);
        tracep->declArray(c+773,"Core execute mdu mul c_l4_2", false,-1, 127,0);
        tracep->declArray(c+745,"Core execute mdu mul s_l3_4", false,-1, 127,0);
        tracep->declArray(c+749,"Core execute mdu mul c_l3_4", false,-1, 127,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_0 io_x", false,-1, 64,0);
        tracep->declBus(c+235,"Core execute mdu mul booth_0 io_y", false,-1, 2,0);
        tracep->declArray(c+236,"Core execute mdu mul booth_0 io_z", false,-1, 127,0);
        tracep->declBus(c+240,"Core execute mdu mul booth_0 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_0 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_0 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_0 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_0 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_0 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_1 io_x", false,-1, 64,0);
        tracep->declBus(c+241,"Core execute mdu mul booth_1 io_y", false,-1, 2,0);
        tracep->declArray(c+242,"Core execute mdu mul booth_1 io_z", false,-1, 127,0);
        tracep->declBus(c+246,"Core execute mdu mul booth_1 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_1 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_1 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_1 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_1 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_1 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_2 io_x", false,-1, 64,0);
        tracep->declBus(c+247,"Core execute mdu mul booth_2 io_y", false,-1, 2,0);
        tracep->declArray(c+248,"Core execute mdu mul booth_2 io_z", false,-1, 127,0);
        tracep->declBus(c+252,"Core execute mdu mul booth_2 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_2 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_2 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_2 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_2 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_2 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_3 io_x", false,-1, 64,0);
        tracep->declBus(c+253,"Core execute mdu mul booth_3 io_y", false,-1, 2,0);
        tracep->declArray(c+254,"Core execute mdu mul booth_3 io_z", false,-1, 127,0);
        tracep->declBus(c+258,"Core execute mdu mul booth_3 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_3 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_3 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_3 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_3 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_3 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_4 io_x", false,-1, 64,0);
        tracep->declBus(c+259,"Core execute mdu mul booth_4 io_y", false,-1, 2,0);
        tracep->declArray(c+260,"Core execute mdu mul booth_4 io_z", false,-1, 127,0);
        tracep->declBus(c+264,"Core execute mdu mul booth_4 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_4 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_4 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_4 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_4 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_4 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_5 io_x", false,-1, 64,0);
        tracep->declBus(c+265,"Core execute mdu mul booth_5 io_y", false,-1, 2,0);
        tracep->declArray(c+266,"Core execute mdu mul booth_5 io_z", false,-1, 127,0);
        tracep->declBus(c+270,"Core execute mdu mul booth_5 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_5 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_5 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_5 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_5 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_5 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_6 io_x", false,-1, 64,0);
        tracep->declBus(c+271,"Core execute mdu mul booth_6 io_y", false,-1, 2,0);
        tracep->declArray(c+272,"Core execute mdu mul booth_6 io_z", false,-1, 127,0);
        tracep->declBus(c+276,"Core execute mdu mul booth_6 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_6 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_6 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_6 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_6 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_6 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_7 io_x", false,-1, 64,0);
        tracep->declBus(c+277,"Core execute mdu mul booth_7 io_y", false,-1, 2,0);
        tracep->declArray(c+278,"Core execute mdu mul booth_7 io_z", false,-1, 127,0);
        tracep->declBus(c+282,"Core execute mdu mul booth_7 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_7 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_7 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_7 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_7 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_7 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_8 io_x", false,-1, 64,0);
        tracep->declBus(c+283,"Core execute mdu mul booth_8 io_y", false,-1, 2,0);
        tracep->declArray(c+284,"Core execute mdu mul booth_8 io_z", false,-1, 127,0);
        tracep->declBus(c+288,"Core execute mdu mul booth_8 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_8 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_8 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_8 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_8 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_8 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_9 io_x", false,-1, 64,0);
        tracep->declBus(c+289,"Core execute mdu mul booth_9 io_y", false,-1, 2,0);
        tracep->declArray(c+290,"Core execute mdu mul booth_9 io_z", false,-1, 127,0);
        tracep->declBus(c+294,"Core execute mdu mul booth_9 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_9 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_9 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_9 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_9 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_9 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_10 io_x", false,-1, 64,0);
        tracep->declBus(c+295,"Core execute mdu mul booth_10 io_y", false,-1, 2,0);
        tracep->declArray(c+296,"Core execute mdu mul booth_10 io_z", false,-1, 127,0);
        tracep->declBus(c+300,"Core execute mdu mul booth_10 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_10 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_10 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_10 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_10 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_10 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_11 io_x", false,-1, 64,0);
        tracep->declBus(c+301,"Core execute mdu mul booth_11 io_y", false,-1, 2,0);
        tracep->declArray(c+302,"Core execute mdu mul booth_11 io_z", false,-1, 127,0);
        tracep->declBus(c+306,"Core execute mdu mul booth_11 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_11 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_11 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_11 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_11 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_11 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_12 io_x", false,-1, 64,0);
        tracep->declBus(c+307,"Core execute mdu mul booth_12 io_y", false,-1, 2,0);
        tracep->declArray(c+308,"Core execute mdu mul booth_12 io_z", false,-1, 127,0);
        tracep->declBus(c+312,"Core execute mdu mul booth_12 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_12 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_12 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_12 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_12 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_12 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_13 io_x", false,-1, 64,0);
        tracep->declBus(c+313,"Core execute mdu mul booth_13 io_y", false,-1, 2,0);
        tracep->declArray(c+314,"Core execute mdu mul booth_13 io_z", false,-1, 127,0);
        tracep->declBus(c+318,"Core execute mdu mul booth_13 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_13 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_13 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_13 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_13 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_13 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_14 io_x", false,-1, 64,0);
        tracep->declBus(c+319,"Core execute mdu mul booth_14 io_y", false,-1, 2,0);
        tracep->declArray(c+320,"Core execute mdu mul booth_14 io_z", false,-1, 127,0);
        tracep->declBus(c+324,"Core execute mdu mul booth_14 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_14 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_14 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_14 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_14 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_14 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_15 io_x", false,-1, 64,0);
        tracep->declBus(c+325,"Core execute mdu mul booth_15 io_y", false,-1, 2,0);
        tracep->declArray(c+326,"Core execute mdu mul booth_15 io_z", false,-1, 127,0);
        tracep->declBus(c+330,"Core execute mdu mul booth_15 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_15 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_15 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_15 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_15 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_15 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_16 io_x", false,-1, 64,0);
        tracep->declBus(c+331,"Core execute mdu mul booth_16 io_y", false,-1, 2,0);
        tracep->declArray(c+332,"Core execute mdu mul booth_16 io_z", false,-1, 127,0);
        tracep->declBus(c+336,"Core execute mdu mul booth_16 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_16 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_16 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_16 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_16 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_16 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_17 io_x", false,-1, 64,0);
        tracep->declBus(c+337,"Core execute mdu mul booth_17 io_y", false,-1, 2,0);
        tracep->declArray(c+338,"Core execute mdu mul booth_17 io_z", false,-1, 127,0);
        tracep->declBus(c+342,"Core execute mdu mul booth_17 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_17 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_17 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_17 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_17 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_17 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_18 io_x", false,-1, 64,0);
        tracep->declBus(c+343,"Core execute mdu mul booth_18 io_y", false,-1, 2,0);
        tracep->declArray(c+344,"Core execute mdu mul booth_18 io_z", false,-1, 127,0);
        tracep->declBus(c+348,"Core execute mdu mul booth_18 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_18 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_18 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_18 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_18 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_18 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_19 io_x", false,-1, 64,0);
        tracep->declBus(c+349,"Core execute mdu mul booth_19 io_y", false,-1, 2,0);
        tracep->declArray(c+350,"Core execute mdu mul booth_19 io_z", false,-1, 127,0);
        tracep->declBus(c+354,"Core execute mdu mul booth_19 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_19 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_19 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_19 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_19 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_19 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_20 io_x", false,-1, 64,0);
        tracep->declBus(c+355,"Core execute mdu mul booth_20 io_y", false,-1, 2,0);
        tracep->declArray(c+356,"Core execute mdu mul booth_20 io_z", false,-1, 127,0);
        tracep->declBus(c+360,"Core execute mdu mul booth_20 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_20 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_20 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_20 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_20 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_20 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_21 io_x", false,-1, 64,0);
        tracep->declBus(c+361,"Core execute mdu mul booth_21 io_y", false,-1, 2,0);
        tracep->declArray(c+362,"Core execute mdu mul booth_21 io_z", false,-1, 127,0);
        tracep->declBus(c+366,"Core execute mdu mul booth_21 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_21 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_21 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_21 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_21 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_21 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_22 io_x", false,-1, 64,0);
        tracep->declBus(c+367,"Core execute mdu mul booth_22 io_y", false,-1, 2,0);
        tracep->declArray(c+368,"Core execute mdu mul booth_22 io_z", false,-1, 127,0);
        tracep->declBus(c+372,"Core execute mdu mul booth_22 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_22 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_22 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_22 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_22 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_22 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_23 io_x", false,-1, 64,0);
        tracep->declBus(c+373,"Core execute mdu mul booth_23 io_y", false,-1, 2,0);
        tracep->declArray(c+374,"Core execute mdu mul booth_23 io_z", false,-1, 127,0);
        tracep->declBus(c+378,"Core execute mdu mul booth_23 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_23 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_23 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_23 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_23 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_23 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_24 io_x", false,-1, 64,0);
        tracep->declBus(c+379,"Core execute mdu mul booth_24 io_y", false,-1, 2,0);
        tracep->declArray(c+380,"Core execute mdu mul booth_24 io_z", false,-1, 127,0);
        tracep->declBus(c+384,"Core execute mdu mul booth_24 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_24 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_24 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_24 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_24 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_24 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_25 io_x", false,-1, 64,0);
        tracep->declBus(c+385,"Core execute mdu mul booth_25 io_y", false,-1, 2,0);
        tracep->declArray(c+386,"Core execute mdu mul booth_25 io_z", false,-1, 127,0);
        tracep->declBus(c+390,"Core execute mdu mul booth_25 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_25 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_25 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_25 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_25 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_25 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_26 io_x", false,-1, 64,0);
        tracep->declBus(c+391,"Core execute mdu mul booth_26 io_y", false,-1, 2,0);
        tracep->declArray(c+392,"Core execute mdu mul booth_26 io_z", false,-1, 127,0);
        tracep->declBus(c+396,"Core execute mdu mul booth_26 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_26 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_26 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_26 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_26 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_26 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_27 io_x", false,-1, 64,0);
        tracep->declBus(c+397,"Core execute mdu mul booth_27 io_y", false,-1, 2,0);
        tracep->declArray(c+398,"Core execute mdu mul booth_27 io_z", false,-1, 127,0);
        tracep->declBus(c+402,"Core execute mdu mul booth_27 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_27 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_27 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_27 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_27 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_27 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_28 io_x", false,-1, 64,0);
        tracep->declBus(c+403,"Core execute mdu mul booth_28 io_y", false,-1, 2,0);
        tracep->declArray(c+404,"Core execute mdu mul booth_28 io_z", false,-1, 127,0);
        tracep->declBus(c+408,"Core execute mdu mul booth_28 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_28 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_28 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_28 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_28 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_28 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_29 io_x", false,-1, 64,0);
        tracep->declBus(c+409,"Core execute mdu mul booth_29 io_y", false,-1, 2,0);
        tracep->declArray(c+410,"Core execute mdu mul booth_29 io_z", false,-1, 127,0);
        tracep->declBus(c+414,"Core execute mdu mul booth_29 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_29 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_29 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_29 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_29 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_29 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_30 io_x", false,-1, 64,0);
        tracep->declBus(c+415,"Core execute mdu mul booth_30 io_y", false,-1, 2,0);
        tracep->declArray(c+416,"Core execute mdu mul booth_30 io_z", false,-1, 127,0);
        tracep->declBus(c+420,"Core execute mdu mul booth_30 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_30 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_30 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_30 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_30 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_30 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_31 io_x", false,-1, 64,0);
        tracep->declBus(c+421,"Core execute mdu mul booth_31 io_y", false,-1, 2,0);
        tracep->declArray(c+422,"Core execute mdu mul booth_31 io_z", false,-1, 127,0);
        tracep->declBus(c+426,"Core execute mdu mul booth_31 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_31 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_31 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_31 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_31 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_31 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+232,"Core execute mdu mul booth_32 io_x", false,-1, 64,0);
        tracep->declBus(c+427,"Core execute mdu mul booth_32 io_y", false,-1, 2,0);
        tracep->declArray(c+428,"Core execute mdu mul booth_32 io_z", false,-1, 127,0);
        tracep->declBus(c+432,"Core execute mdu mul booth_32 io_c", false,-1, 1,0);
        tracep->declArray(c+1184,"Core execute mdu mul booth_32 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1187,"Core execute mdu mul booth_32 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1189,"Core execute mdu mul booth_32 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1191,"Core execute mdu mul booth_32 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_32 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+433,"Core execute mdu mul csa_0 io_x", false,-1, 127,0);
        tracep->declArray(c+437,"Core execute mdu mul csa_0 io_y", false,-1, 127,0);
        tracep->declArray(c+441,"Core execute mdu mul csa_0 io_z", false,-1, 127,0);
        tracep->declArray(c+445,"Core execute mdu mul csa_0 io_s", false,-1, 127,0);
        tracep->declArray(c+449,"Core execute mdu mul csa_0 io_c", false,-1, 127,0);
        tracep->declArray(c+1195,"Core execute mdu mul csa_0 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+453,"Core execute mdu mul csa_1 io_x", false,-1, 127,0);
        tracep->declArray(c+457,"Core execute mdu mul csa_1 io_y", false,-1, 127,0);
        tracep->declArray(c+461,"Core execute mdu mul csa_1 io_z", false,-1, 127,0);
        tracep->declArray(c+465,"Core execute mdu mul csa_1 io_s", false,-1, 127,0);
        tracep->declArray(c+469,"Core execute mdu mul csa_1 io_c", false,-1, 127,0);
        tracep->declArray(c+1199,"Core execute mdu mul csa_1 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+473,"Core execute mdu mul csa_2 io_x", false,-1, 127,0);
        tracep->declArray(c+477,"Core execute mdu mul csa_2 io_y", false,-1, 127,0);
        tracep->declArray(c+481,"Core execute mdu mul csa_2 io_z", false,-1, 127,0);
        tracep->declArray(c+485,"Core execute mdu mul csa_2 io_s", false,-1, 127,0);
        tracep->declArray(c+489,"Core execute mdu mul csa_2 io_c", false,-1, 127,0);
        tracep->declArray(c+1203,"Core execute mdu mul csa_2 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+493,"Core execute mdu mul csa_3 io_x", false,-1, 127,0);
        tracep->declArray(c+497,"Core execute mdu mul csa_3 io_y", false,-1, 127,0);
        tracep->declArray(c+501,"Core execute mdu mul csa_3 io_z", false,-1, 127,0);
        tracep->declArray(c+505,"Core execute mdu mul csa_3 io_s", false,-1, 127,0);
        tracep->declArray(c+509,"Core execute mdu mul csa_3 io_c", false,-1, 127,0);
        tracep->declArray(c+1207,"Core execute mdu mul csa_3 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+513,"Core execute mdu mul csa_4 io_x", false,-1, 127,0);
        tracep->declArray(c+517,"Core execute mdu mul csa_4 io_y", false,-1, 127,0);
        tracep->declArray(c+521,"Core execute mdu mul csa_4 io_z", false,-1, 127,0);
        tracep->declArray(c+525,"Core execute mdu mul csa_4 io_s", false,-1, 127,0);
        tracep->declArray(c+529,"Core execute mdu mul csa_4 io_c", false,-1, 127,0);
        tracep->declArray(c+1211,"Core execute mdu mul csa_4 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+533,"Core execute mdu mul csa_5 io_x", false,-1, 127,0);
        tracep->declArray(c+537,"Core execute mdu mul csa_5 io_y", false,-1, 127,0);
        tracep->declArray(c+541,"Core execute mdu mul csa_5 io_z", false,-1, 127,0);
        tracep->declArray(c+545,"Core execute mdu mul csa_5 io_s", false,-1, 127,0);
        tracep->declArray(c+549,"Core execute mdu mul csa_5 io_c", false,-1, 127,0);
        tracep->declArray(c+1215,"Core execute mdu mul csa_5 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+553,"Core execute mdu mul csa_6 io_x", false,-1, 127,0);
        tracep->declArray(c+557,"Core execute mdu mul csa_6 io_y", false,-1, 127,0);
        tracep->declArray(c+561,"Core execute mdu mul csa_6 io_z", false,-1, 127,0);
        tracep->declArray(c+565,"Core execute mdu mul csa_6 io_s", false,-1, 127,0);
        tracep->declArray(c+569,"Core execute mdu mul csa_6 io_c", false,-1, 127,0);
        tracep->declArray(c+1219,"Core execute mdu mul csa_6 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+573,"Core execute mdu mul csa_7 io_x", false,-1, 127,0);
        tracep->declArray(c+577,"Core execute mdu mul csa_7 io_y", false,-1, 127,0);
        tracep->declArray(c+581,"Core execute mdu mul csa_7 io_z", false,-1, 127,0);
        tracep->declArray(c+585,"Core execute mdu mul csa_7 io_s", false,-1, 127,0);
        tracep->declArray(c+589,"Core execute mdu mul csa_7 io_c", false,-1, 127,0);
        tracep->declArray(c+1223,"Core execute mdu mul csa_7 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+593,"Core execute mdu mul csa_8 io_x", false,-1, 127,0);
        tracep->declArray(c+597,"Core execute mdu mul csa_8 io_y", false,-1, 127,0);
        tracep->declArray(c+601,"Core execute mdu mul csa_8 io_z", false,-1, 127,0);
        tracep->declArray(c+605,"Core execute mdu mul csa_8 io_s", false,-1, 127,0);
        tracep->declArray(c+609,"Core execute mdu mul csa_8 io_c", false,-1, 127,0);
        tracep->declArray(c+1227,"Core execute mdu mul csa_8 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+613,"Core execute mdu mul csa_9 io_x", false,-1, 127,0);
        tracep->declArray(c+617,"Core execute mdu mul csa_9 io_y", false,-1, 127,0);
        tracep->declArray(c+621,"Core execute mdu mul csa_9 io_z", false,-1, 127,0);
        tracep->declArray(c+625,"Core execute mdu mul csa_9 io_s", false,-1, 127,0);
        tracep->declArray(c+629,"Core execute mdu mul csa_9 io_c", false,-1, 127,0);
        tracep->declArray(c+1231,"Core execute mdu mul csa_9 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+633,"Core execute mdu mul csa_10 io_x", false,-1, 127,0);
        tracep->declArray(c+637,"Core execute mdu mul csa_10 io_y", false,-1, 127,0);
        tracep->declArray(c+641,"Core execute mdu mul csa_10 io_z", false,-1, 127,0);
        tracep->declArray(c+645,"Core execute mdu mul csa_10 io_s", false,-1, 127,0);
        tracep->declArray(c+649,"Core execute mdu mul csa_10 io_c", false,-1, 127,0);
        tracep->declArray(c+1235,"Core execute mdu mul csa_10 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+445,"Core execute mdu mul csa_11 io_x", false,-1, 127,0);
        tracep->declArray(c+449,"Core execute mdu mul csa_11 io_y", false,-1, 127,0);
        tracep->declArray(c+469,"Core execute mdu mul csa_11 io_z", false,-1, 127,0);
        tracep->declArray(c+653,"Core execute mdu mul csa_11 io_s", false,-1, 127,0);
        tracep->declArray(c+657,"Core execute mdu mul csa_11 io_c", false,-1, 127,0);
        tracep->declArray(c+1239,"Core execute mdu mul csa_11 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+465,"Core execute mdu mul csa_12 io_x", false,-1, 127,0);
        tracep->declArray(c+489,"Core execute mdu mul csa_12 io_y", false,-1, 127,0);
        tracep->declArray(c+485,"Core execute mdu mul csa_12 io_z", false,-1, 127,0);
        tracep->declArray(c+661,"Core execute mdu mul csa_12 io_s", false,-1, 127,0);
        tracep->declArray(c+665,"Core execute mdu mul csa_12 io_c", false,-1, 127,0);
        tracep->declArray(c+1243,"Core execute mdu mul csa_12 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+505,"Core execute mdu mul csa_13 io_x", false,-1, 127,0);
        tracep->declArray(c+509,"Core execute mdu mul csa_13 io_y", false,-1, 127,0);
        tracep->declArray(c+529,"Core execute mdu mul csa_13 io_z", false,-1, 127,0);
        tracep->declArray(c+669,"Core execute mdu mul csa_13 io_s", false,-1, 127,0);
        tracep->declArray(c+673,"Core execute mdu mul csa_13 io_c", false,-1, 127,0);
        tracep->declArray(c+1247,"Core execute mdu mul csa_13 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+525,"Core execute mdu mul csa_14 io_x", false,-1, 127,0);
        tracep->declArray(c+549,"Core execute mdu mul csa_14 io_y", false,-1, 127,0);
        tracep->declArray(c+545,"Core execute mdu mul csa_14 io_z", false,-1, 127,0);
        tracep->declArray(c+677,"Core execute mdu mul csa_14 io_s", false,-1, 127,0);
        tracep->declArray(c+681,"Core execute mdu mul csa_14 io_c", false,-1, 127,0);
        tracep->declArray(c+1251,"Core execute mdu mul csa_14 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+565,"Core execute mdu mul csa_15 io_x", false,-1, 127,0);
        tracep->declArray(c+569,"Core execute mdu mul csa_15 io_y", false,-1, 127,0);
        tracep->declArray(c+589,"Core execute mdu mul csa_15 io_z", false,-1, 127,0);
        tracep->declArray(c+685,"Core execute mdu mul csa_15 io_s", false,-1, 127,0);
        tracep->declArray(c+689,"Core execute mdu mul csa_15 io_c", false,-1, 127,0);
        tracep->declArray(c+1255,"Core execute mdu mul csa_15 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+585,"Core execute mdu mul csa_16 io_x", false,-1, 127,0);
        tracep->declArray(c+609,"Core execute mdu mul csa_16 io_y", false,-1, 127,0);
        tracep->declArray(c+605,"Core execute mdu mul csa_16 io_z", false,-1, 127,0);
        tracep->declArray(c+693,"Core execute mdu mul csa_16 io_s", false,-1, 127,0);
        tracep->declArray(c+697,"Core execute mdu mul csa_16 io_c", false,-1, 127,0);
        tracep->declArray(c+1259,"Core execute mdu mul csa_16 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+625,"Core execute mdu mul csa_17 io_x", false,-1, 127,0);
        tracep->declArray(c+629,"Core execute mdu mul csa_17 io_y", false,-1, 127,0);
        tracep->declArray(c+701,"Core execute mdu mul csa_17 io_z", false,-1, 127,0);
        tracep->declArray(c+705,"Core execute mdu mul csa_17 io_s", false,-1, 127,0);
        tracep->declArray(c+709,"Core execute mdu mul csa_17 io_c", false,-1, 127,0);
        tracep->declArray(c+1263,"Core execute mdu mul csa_17 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+645,"Core execute mdu mul csa_18 io_x", false,-1, 127,0);
        tracep->declArray(c+649,"Core execute mdu mul csa_18 io_y", false,-1, 127,0);
        tracep->declArray(c+653,"Core execute mdu mul csa_18 io_z", false,-1, 127,0);
        tracep->declArray(c+713,"Core execute mdu mul csa_18 io_s", false,-1, 127,0);
        tracep->declArray(c+717,"Core execute mdu mul csa_18 io_c", false,-1, 127,0);
        tracep->declArray(c+1267,"Core execute mdu mul csa_18 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+657,"Core execute mdu mul csa_19 io_x", false,-1, 127,0);
        tracep->declArray(c+661,"Core execute mdu mul csa_19 io_y", false,-1, 127,0);
        tracep->declArray(c+665,"Core execute mdu mul csa_19 io_z", false,-1, 127,0);
        tracep->declArray(c+721,"Core execute mdu mul csa_19 io_s", false,-1, 127,0);
        tracep->declArray(c+725,"Core execute mdu mul csa_19 io_c", false,-1, 127,0);
        tracep->declArray(c+1271,"Core execute mdu mul csa_19 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+669,"Core execute mdu mul csa_20 io_x", false,-1, 127,0);
        tracep->declArray(c+673,"Core execute mdu mul csa_20 io_y", false,-1, 127,0);
        tracep->declArray(c+677,"Core execute mdu mul csa_20 io_z", false,-1, 127,0);
        tracep->declArray(c+729,"Core execute mdu mul csa_20 io_s", false,-1, 127,0);
        tracep->declArray(c+733,"Core execute mdu mul csa_20 io_c", false,-1, 127,0);
        tracep->declArray(c+1275,"Core execute mdu mul csa_20 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+681,"Core execute mdu mul csa_21 io_x", false,-1, 127,0);
        tracep->declArray(c+685,"Core execute mdu mul csa_21 io_y", false,-1, 127,0);
        tracep->declArray(c+689,"Core execute mdu mul csa_21 io_z", false,-1, 127,0);
        tracep->declArray(c+737,"Core execute mdu mul csa_21 io_s", false,-1, 127,0);
        tracep->declArray(c+741,"Core execute mdu mul csa_21 io_c", false,-1, 127,0);
        tracep->declArray(c+1279,"Core execute mdu mul csa_21 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+693,"Core execute mdu mul csa_22 io_x", false,-1, 127,0);
        tracep->declArray(c+697,"Core execute mdu mul csa_22 io_y", false,-1, 127,0);
        tracep->declArray(c+705,"Core execute mdu mul csa_22 io_z", false,-1, 127,0);
        tracep->declArray(c+745,"Core execute mdu mul csa_22 io_s", false,-1, 127,0);
        tracep->declArray(c+749,"Core execute mdu mul csa_22 io_c", false,-1, 127,0);
        tracep->declArray(c+1283,"Core execute mdu mul csa_22 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+709,"Core execute mdu mul csa_23 io_x", false,-1, 127,0);
        tracep->declArray(c+713,"Core execute mdu mul csa_23 io_y", false,-1, 127,0);
        tracep->declArray(c+717,"Core execute mdu mul csa_23 io_z", false,-1, 127,0);
        tracep->declArray(c+753,"Core execute mdu mul csa_23 io_s", false,-1, 127,0);
        tracep->declArray(c+757,"Core execute mdu mul csa_23 io_c", false,-1, 127,0);
        tracep->declArray(c+1287,"Core execute mdu mul csa_23 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+721,"Core execute mdu mul csa_24 io_x", false,-1, 127,0);
        tracep->declArray(c+725,"Core execute mdu mul csa_24 io_y", false,-1, 127,0);
        tracep->declArray(c+729,"Core execute mdu mul csa_24 io_z", false,-1, 127,0);
        tracep->declArray(c+761,"Core execute mdu mul csa_24 io_s", false,-1, 127,0);
        tracep->declArray(c+765,"Core execute mdu mul csa_24 io_c", false,-1, 127,0);
        tracep->declArray(c+1291,"Core execute mdu mul csa_24 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+733,"Core execute mdu mul csa_25 io_x", false,-1, 127,0);
        tracep->declArray(c+737,"Core execute mdu mul csa_25 io_y", false,-1, 127,0);
        tracep->declArray(c+741,"Core execute mdu mul csa_25 io_z", false,-1, 127,0);
        tracep->declArray(c+769,"Core execute mdu mul csa_25 io_s", false,-1, 127,0);
        tracep->declArray(c+773,"Core execute mdu mul csa_25 io_c", false,-1, 127,0);
        tracep->declArray(c+1295,"Core execute mdu mul csa_25 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+777,"Core execute mdu mul csa_26 io_x", false,-1, 127,0);
        tracep->declArray(c+781,"Core execute mdu mul csa_26 io_y", false,-1, 127,0);
        tracep->declArray(c+785,"Core execute mdu mul csa_26 io_z", false,-1, 127,0);
        tracep->declArray(c+789,"Core execute mdu mul csa_26 io_s", false,-1, 127,0);
        tracep->declArray(c+793,"Core execute mdu mul csa_26 io_c", false,-1, 127,0);
        tracep->declArray(c+1299,"Core execute mdu mul csa_26 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+797,"Core execute mdu mul csa_27 io_x", false,-1, 127,0);
        tracep->declArray(c+801,"Core execute mdu mul csa_27 io_y", false,-1, 127,0);
        tracep->declArray(c+805,"Core execute mdu mul csa_27 io_z", false,-1, 127,0);
        tracep->declArray(c+809,"Core execute mdu mul csa_27 io_s", false,-1, 127,0);
        tracep->declArray(c+813,"Core execute mdu mul csa_27 io_c", false,-1, 127,0);
        tracep->declArray(c+1303,"Core execute mdu mul csa_27 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+817,"Core execute mdu mul csa_28 io_x", false,-1, 127,0);
        tracep->declArray(c+821,"Core execute mdu mul csa_28 io_y", false,-1, 127,0);
        tracep->declArray(c+789,"Core execute mdu mul csa_28 io_z", false,-1, 127,0);
        tracep->declArray(c+825,"Core execute mdu mul csa_28 io_s", false,-1, 127,0);
        tracep->declArray(c+829,"Core execute mdu mul csa_28 io_c", false,-1, 127,0);
        tracep->declArray(c+1307,"Core execute mdu mul csa_28 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+809,"Core execute mdu mul csa_29 io_x", false,-1, 127,0);
        tracep->declArray(c+793,"Core execute mdu mul csa_29 io_y", false,-1, 127,0);
        tracep->declArray(c+813,"Core execute mdu mul csa_29 io_z", false,-1, 127,0);
        tracep->declArray(c+833,"Core execute mdu mul csa_29 io_s", false,-1, 127,0);
        tracep->declArray(c+837,"Core execute mdu mul csa_29 io_c", false,-1, 127,0);
        tracep->declArray(c+1311,"Core execute mdu mul csa_29 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+825,"Core execute mdu mul csa_30 io_x", false,-1, 127,0);
        tracep->declArray(c+833,"Core execute mdu mul csa_30 io_y", false,-1, 127,0);
        tracep->declArray(c+829,"Core execute mdu mul csa_30 io_z", false,-1, 127,0);
        tracep->declArray(c+841,"Core execute mdu mul csa_30 io_s", false,-1, 127,0);
        tracep->declArray(c+845,"Core execute mdu mul csa_30 io_c", false,-1, 127,0);
        tracep->declArray(c+1315,"Core execute mdu mul csa_30 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+841,"Core execute mdu mul csa_31 io_x", false,-1, 127,0);
        tracep->declArray(c+845,"Core execute mdu mul csa_31 io_y", false,-1, 127,0);
        tracep->declArray(c+837,"Core execute mdu mul csa_31 io_z", false,-1, 127,0);
        tracep->declArray(c+849,"Core execute mdu mul csa_31 io_s", false,-1, 127,0);
        tracep->declArray(c+853,"Core execute mdu mul csa_31 io_c", false,-1, 127,0);
        tracep->declArray(c+1319,"Core execute mdu mul csa_31 io_c_hi", false,-1, 126,0);
        tracep->declBit(c+1415,"Core execute mdu div clock", false,-1);
        tracep->declBit(c+1416,"Core execute mdu div reset", false,-1);
        tracep->declQuad(c+197,"Core execute mdu div io_in1", false,-1, 63,0);
        tracep->declQuad(c+199,"Core execute mdu div io_in2", false,-1, 63,0);
        tracep->declQuad(c+201,"Core execute mdu div io_out_div", false,-1, 63,0);
        tracep->declQuad(c+203,"Core execute mdu div io_out_rem", false,-1, 63,0);
        tracep->declBit(c+205,"Core execute mdu div io_is_signed", false,-1);
        tracep->declBit(c+206,"Core execute mdu div io_div_valid", false,-1);
        tracep->declBit(c+207,"Core execute mdu div io_div_ready", false,-1);
        tracep->declBus(c+1323,"Core execute mdu div state", false,-1, 1,0);
        tracep->declArray(c+1324,"Core execute mdu div reg_in1", false,-1, 127,0);
        tracep->declArray(c+1328,"Core execute mdu div reg_in2", false,-1, 64,0);
        tracep->declQuad(c+201,"Core execute mdu div quo_out", false,-1, 63,0);
        tracep->declQuad(c+203,"Core execute mdu div rem_out", false,-1, 63,0);
        tracep->declBit(c+1331,"Core execute mdu div quo_neg", false,-1);
        tracep->declBit(c+1332,"Core execute mdu div rem_neg", false,-1);
        tracep->declArray(c+1333,"Core execute mdu div temp_minus1", false,-1, 64,0);
        tracep->declArray(c+1336,"Core execute mdu div minus_value", false,-1, 64,0);
        tracep->declBus(c+1339,"Core execute mdu div cnt", false,-1, 5,0);
        tracep->declQuad(c+1340,"Core execute mdu div in1_num", false,-1, 63,0);
        tracep->declQuad(c+1342,"Core execute mdu div in2_num", false,-1, 63,0);
        tracep->declQuad(c+1344,"Core execute mdu div quo_out_hi", false,-1, 62,0);
        tracep->declArray(c+1346,"Core execute mdu div reg_in1_hi_1", false,-1, 126,0);
        tracep->declQuad(c+1350,"Core execute mdu div reg_in1_lo", false,-1, 62,0);
        tracep->declArray(c+1352,"Core execute mdu div reg_in1_hi_2", false,-1, 126,0);
        tracep->declBit(c+1415,"Core mem clock", false,-1);
        tracep->declBit(c+1416,"Core mem reset", false,-1);
        tracep->declBit(c+1395,"Core mem io_in_ready", false,-1);
        tracep->declBit(c+104,"Core mem io_in_bits_valid", false,-1);
        tracep->declBus(c+105,"Core mem io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+106,"Core mem io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+107,"Core mem io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+108,"Core mem io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+109,"Core mem io_in_bits_mdu_code", false,-1, 3,0);
        tracep->declBus(c+96,"Core mem io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+110,"Core mem io_in_bits_rd_en", false,-1);
        tracep->declBit(c+116,"Core mem io_out_bits_valid", false,-1);
        tracep->declBus(c+117,"Core mem io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+118,"Core mem io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+97,"Core mem io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+28,"Core mem io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+27,"Core mem io_wen_o", false,-1);
        tracep->declQuad(c+29,"Core mem io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+111,"Core mem io_is_ebreak_i", false,-1);
        tracep->declBit(c+119,"Core mem io_is_ebreak_o", false,-1);
        tracep->declBus(c+112,"Core mem io_dmem_req_bits_arwaddr", false,-1, 31,0);
        tracep->declBit(c+1385,"Core mem io_dmem_req_bits_rvalid", false,-1);
        tracep->declBit(c+1386,"Core mem io_dmem_req_bits_wvalid", false,-1);
        tracep->declQuad(c+120,"Core mem io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+122,"Core mem io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declQuad(c+1443,"Core mem io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1445,"Core mem io_dmem_resp_bits_rready", false,-1);
        tracep->declBit(c+1446,"Core mem io_dmem_resp_bits_wready", false,-1);
        tracep->declBus(c+112,"Core mem io_mem_rwaddr_i", false,-1, 31,0);
        tracep->declBit(c+1383,"Core mem io_mem_rvalid_i", false,-1);
        tracep->declBit(c+1384,"Core mem io_mem_wvalid_i", false,-1);
        tracep->declQuad(c+23,"Core mem io_mem_wdata_i", false,-1, 63,0);
        tracep->declBus(c+108,"Core mem io_mem_wsize_i", false,-1, 1,0);
        tracep->declBus(c+112,"Core mem io_reg_mem_addr_i", false,-1, 31,0);
        tracep->declQuad(c+113,"Core mem io_mem_mduout_i", false,-1, 63,0);
        tracep->declBit(c+115,"Core mem io_mem_mduready_i", false,-1);
        tracep->declBit(c+102,"Core mem io_mem_rd_en", false,-1);
        tracep->declBus(c+103,"Core mem io_mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1396,"Core mem io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+101,"Core mem io_mem_is_load", false,-1);
        tracep->declBit(c+1356,"Core mem mem_reg_decodeop_valid", false,-1);
        tracep->declBus(c+1357,"Core mem mem_reg_decodeop_pc", false,-1, 31,0);
        tracep->declBus(c+1358,"Core mem mem_reg_decodeop_inst", false,-1, 31,0);
        tracep->declBus(c+1359,"Core mem mem_reg_decodeop_mem_code", false,-1, 1,0);
        tracep->declBus(c+1360,"Core mem mem_reg_decodeop_mem_size", false,-1, 1,0);
        tracep->declBus(c+1361,"Core mem mem_reg_decodeop_mdu_code", false,-1, 3,0);
        tracep->declBus(c+103,"Core mem mem_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+1362,"Core mem mem_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+1363,"Core mem waddr", false,-1, 4,0);
        tracep->declBit(c+1364,"Core mem wen", false,-1);
        tracep->declQuad(c+1365,"Core mem wdata", false,-1, 63,0);
        tracep->declBus(c+1367,"Core mem reg_mem_addr", false,-1, 31,0);
        tracep->declBit(c+119,"Core mem io_is_ebreak_o_REG", false,-1);
        tracep->declBit(c+1368,"Core mem mdu_valid", false,-1);
        tracep->declBit(c+1369,"Core mem is_load", false,-1);
        tracep->declBit(c+1370,"Core mem is_store", false,-1);
        tracep->declBit(c+1402,"Core mem req_wait", false,-1);
        tracep->declBit(c+1401,"Core mem stall", false,-1);
        tracep->declBus(c+1371,"Core mem addr_offset", false,-1, 2,0);
        tracep->declBus(c+1372,"Core mem reg_addr_offset", false,-1, 2,0);
        tracep->declBus(c+1373,"Core mem mask", false,-1, 7,0);
        tracep->declBus(c+1374,"Core mem wmask", false,-1, 7,0);
        tracep->declQuad(c+1403,"Core mem ld_data_raw", false,-1, 63,0);
        tracep->declQuad(c+1405,"Core mem ld_data_hi", false,-1, 55,0);
        tracep->declBus(c+1407,"Core mem ld_data_lo", false,-1, 7,0);
        tracep->declQuad(c+1408,"Core mem ld_data_hi_1", false,-1, 47,0);
        tracep->declBus(c+1410,"Core mem ld_data_lo_1", false,-1, 15,0);
        tracep->declBus(c+1411,"Core mem ld_data_hi_2", false,-1, 31,0);
        tracep->declBus(c+1412,"Core mem ld_data_lo_2", false,-1, 31,0);
        tracep->declQuad(c+1413,"Core mem ld_data", false,-1, 63,0);
        tracep->declQuad(c+1388,"Core mem ld_data_u", false,-1, 63,0);
        tracep->declQuad(c+1390,"Core mem load_data", false,-1, 63,0);
        tracep->declBit(c+116,"Core mem io_out_bits_REG_valid", false,-1);
        tracep->declBus(c+117,"Core mem io_out_bits_REG_pc", false,-1, 31,0);
        tracep->declBus(c+118,"Core mem io_out_bits_REG_inst", false,-1, 31,0);
        tracep->declBus(c+28,"Core mem io_waddr_o_REG", false,-1, 4,0);
        tracep->declBit(c+27,"Core mem io_wen_o_REG", false,-1);
        tracep->declQuad(c+29,"Core mem io_wdata_o_REG", false,-1, 63,0);
        tracep->declBit(c+1415,"Core wb_dpi clk", false,-1);
        tracep->declBus(c+118,"Core wb_dpi inst", false,-1, 31,0);
        tracep->declBus(c+117,"Core wb_dpi pc", false,-1, 31,0);
        tracep->declBit(c+119,"Core wb_dpi ebreak", false,-1);
        tracep->declBus(c+1375,"Core wb_dpi inst1", false,-1, 31,0);
        tracep->declBus(c+1376,"Core wb_dpi pc1", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp2629;
    VlWide<4>/*127:0*/ __Vtemp2630;
    VlWide<3>/*95:0*/ __Vtemp2633;
    VlWide<3>/*95:0*/ __Vtemp2635;
    VlWide<4>/*127:0*/ __Vtemp2652;
    VlWide<4>/*127:0*/ __Vtemp2658;
    VlWide<4>/*127:0*/ __Vtemp2675;
    VlWide<4>/*127:0*/ __Vtemp2679;
    VlWide<4>/*127:0*/ __Vtemp2681;
    VlWide<4>/*127:0*/ __Vtemp2698;
    VlWide<4>/*127:0*/ __Vtemp2702;
    VlWide<4>/*127:0*/ __Vtemp2704;
    VlWide<4>/*127:0*/ __Vtemp2721;
    VlWide<4>/*127:0*/ __Vtemp2725;
    VlWide<4>/*127:0*/ __Vtemp2727;
    VlWide<4>/*127:0*/ __Vtemp2744;
    VlWide<4>/*127:0*/ __Vtemp2748;
    VlWide<4>/*127:0*/ __Vtemp2750;
    VlWide<4>/*127:0*/ __Vtemp2767;
    VlWide<4>/*127:0*/ __Vtemp2771;
    VlWide<4>/*127:0*/ __Vtemp2773;
    VlWide<4>/*127:0*/ __Vtemp2790;
    VlWide<4>/*127:0*/ __Vtemp2794;
    VlWide<4>/*127:0*/ __Vtemp2796;
    VlWide<4>/*127:0*/ __Vtemp2813;
    VlWide<4>/*127:0*/ __Vtemp2817;
    VlWide<4>/*127:0*/ __Vtemp2819;
    VlWide<4>/*127:0*/ __Vtemp2836;
    VlWide<4>/*127:0*/ __Vtemp2840;
    VlWide<4>/*127:0*/ __Vtemp2842;
    VlWide<4>/*127:0*/ __Vtemp2859;
    VlWide<4>/*127:0*/ __Vtemp2863;
    VlWide<4>/*127:0*/ __Vtemp2865;
    VlWide<4>/*127:0*/ __Vtemp2882;
    VlWide<4>/*127:0*/ __Vtemp2886;
    VlWide<4>/*127:0*/ __Vtemp2888;
    VlWide<4>/*127:0*/ __Vtemp2905;
    VlWide<4>/*127:0*/ __Vtemp2909;
    VlWide<4>/*127:0*/ __Vtemp2911;
    VlWide<4>/*127:0*/ __Vtemp2928;
    VlWide<4>/*127:0*/ __Vtemp2932;
    VlWide<4>/*127:0*/ __Vtemp2934;
    VlWide<4>/*127:0*/ __Vtemp2951;
    VlWide<4>/*127:0*/ __Vtemp2955;
    VlWide<4>/*127:0*/ __Vtemp2957;
    VlWide<4>/*127:0*/ __Vtemp2974;
    VlWide<4>/*127:0*/ __Vtemp2978;
    VlWide<4>/*127:0*/ __Vtemp2980;
    VlWide<4>/*127:0*/ __Vtemp2997;
    VlWide<4>/*127:0*/ __Vtemp2999;
    VlWide<4>/*127:0*/ __Vtemp3003;
    VlWide<4>/*127:0*/ __Vtemp3020;
    VlWide<4>/*127:0*/ __Vtemp3026;
    VlWide<4>/*127:0*/ __Vtemp3043;
    VlWide<4>/*127:0*/ __Vtemp3047;
    VlWide<4>/*127:0*/ __Vtemp3049;
    VlWide<4>/*127:0*/ __Vtemp3066;
    VlWide<4>/*127:0*/ __Vtemp3070;
    VlWide<4>/*127:0*/ __Vtemp3072;
    VlWide<4>/*127:0*/ __Vtemp3089;
    VlWide<4>/*127:0*/ __Vtemp3093;
    VlWide<4>/*127:0*/ __Vtemp3095;
    VlWide<4>/*127:0*/ __Vtemp3112;
    VlWide<4>/*127:0*/ __Vtemp3116;
    VlWide<4>/*127:0*/ __Vtemp3118;
    VlWide<4>/*127:0*/ __Vtemp3135;
    VlWide<4>/*127:0*/ __Vtemp3139;
    VlWide<4>/*127:0*/ __Vtemp3141;
    VlWide<4>/*127:0*/ __Vtemp3158;
    VlWide<4>/*127:0*/ __Vtemp3162;
    VlWide<4>/*127:0*/ __Vtemp3164;
    VlWide<4>/*127:0*/ __Vtemp3181;
    VlWide<4>/*127:0*/ __Vtemp3185;
    VlWide<4>/*127:0*/ __Vtemp3187;
    VlWide<4>/*127:0*/ __Vtemp3204;
    VlWide<4>/*127:0*/ __Vtemp3208;
    VlWide<4>/*127:0*/ __Vtemp3210;
    VlWide<4>/*127:0*/ __Vtemp3227;
    VlWide<4>/*127:0*/ __Vtemp3231;
    VlWide<4>/*127:0*/ __Vtemp3233;
    VlWide<4>/*127:0*/ __Vtemp3250;
    VlWide<4>/*127:0*/ __Vtemp3254;
    VlWide<4>/*127:0*/ __Vtemp3256;
    VlWide<4>/*127:0*/ __Vtemp3273;
    VlWide<4>/*127:0*/ __Vtemp3277;
    VlWide<4>/*127:0*/ __Vtemp3279;
    VlWide<4>/*127:0*/ __Vtemp3296;
    VlWide<4>/*127:0*/ __Vtemp3300;
    VlWide<4>/*127:0*/ __Vtemp3302;
    VlWide<4>/*127:0*/ __Vtemp3319;
    VlWide<4>/*127:0*/ __Vtemp3323;
    VlWide<4>/*127:0*/ __Vtemp3325;
    VlWide<4>/*127:0*/ __Vtemp3342;
    VlWide<4>/*127:0*/ __Vtemp3346;
    VlWide<4>/*127:0*/ __Vtemp3348;
    VlWide<4>/*127:0*/ __Vtemp3365;
    VlWide<4>/*127:0*/ __Vtemp3367;
    VlWide<4>/*127:0*/ __Vtemp3371;
    VlWide<4>/*127:0*/ __Vtemp3388;
    VlWide<4>/*127:0*/ __Vtemp3394;
    VlWide<4>/*127:0*/ __Vtemp3398;
    VlWide<4>/*127:0*/ __Vtemp3402;
    VlWide<4>/*127:0*/ __Vtemp3406;
    VlWide<4>/*127:0*/ __Vtemp3410;
    VlWide<4>/*127:0*/ __Vtemp3414;
    VlWide<4>/*127:0*/ __Vtemp3418;
    VlWide<4>/*127:0*/ __Vtemp3422;
    VlWide<4>/*127:0*/ __Vtemp3426;
    VlWide<4>/*127:0*/ __Vtemp3430;
    VlWide<4>/*127:0*/ __Vtemp3434;
    VlWide<4>/*127:0*/ __Vtemp3438;
    VlWide<4>/*127:0*/ __Vtemp3442;
    VlWide<4>/*127:0*/ __Vtemp3446;
    VlWide<4>/*127:0*/ __Vtemp3450;
    VlWide<4>/*127:0*/ __Vtemp3454;
    VlWide<4>/*127:0*/ __Vtemp3458;
    VlWide<4>/*127:0*/ __Vtemp3462;
    VlWide<4>/*127:0*/ __Vtemp3466;
    VlWide<4>/*127:0*/ __Vtemp3470;
    VlWide<4>/*127:0*/ __Vtemp3474;
    VlWide<4>/*127:0*/ __Vtemp3476;
    VlWide<4>/*127:0*/ __Vtemp3480;
    VlWide<4>/*127:0*/ __Vtemp3484;
    VlWide<4>/*127:0*/ __Vtemp3488;
    VlWide<4>/*127:0*/ __Vtemp3492;
    VlWide<4>/*127:0*/ __Vtemp3496;
    VlWide<4>/*127:0*/ __Vtemp3500;
    VlWide<4>/*127:0*/ __Vtemp3504;
    VlWide<4>/*127:0*/ __Vtemp3508;
    VlWide<4>/*127:0*/ __Vtemp3512;
    VlWide<4>/*127:0*/ __Vtemp3516;
    VlWide<4>/*127:0*/ __Vtemp3520;
    VlWide<4>/*127:0*/ __Vtemp3524;
    VlWide<4>/*127:0*/ __Vtemp3528;
    VlWide<4>/*127:0*/ __Vtemp3532;
    VlWide<4>/*127:0*/ __Vtemp3536;
    VlWide<4>/*127:0*/ __Vtemp3540;
    VlWide<4>/*127:0*/ __Vtemp3544;
    VlWide<4>/*127:0*/ __Vtemp3548;
    VlWide<4>/*127:0*/ __Vtemp3552;
    VlWide<4>/*127:0*/ __Vtemp3556;
    VlWide<4>/*127:0*/ __Vtemp3557;
    VlWide<4>/*127:0*/ __Vtemp3561;
    VlWide<4>/*127:0*/ __Vtemp3565;
    VlWide<4>/*127:0*/ __Vtemp3569;
    VlWide<4>/*127:0*/ __Vtemp3573;
    VlWide<4>/*127:0*/ __Vtemp3577;
    VlWide<4>/*127:0*/ __Vtemp3581;
    VlWide<4>/*127:0*/ __Vtemp3585;
    VlWide<4>/*127:0*/ __Vtemp3589;
    VlWide<4>/*127:0*/ __Vtemp3593;
    VlWide<4>/*127:0*/ __Vtemp3597;
    VlWide<4>/*127:0*/ __Vtemp3601;
    VlWide<4>/*127:0*/ __Vtemp3605;
    VlWide<4>/*127:0*/ __Vtemp3611;
    VlWide<4>/*127:0*/ __Vtemp3631;
    VlWide<4>/*127:0*/ __Vtemp3641;
    VlWide<4>/*127:0*/ __Vtemp3665;
    VlWide<4>/*127:0*/ __Vtemp3671;
    VlWide<4>/*127:0*/ __Vtemp3691;
    VlWide<4>/*127:0*/ __Vtemp3701;
    VlWide<4>/*127:0*/ __Vtemp3725;
    VlWide<4>/*127:0*/ __Vtemp3729;
    VlWide<4>/*127:0*/ __Vtemp3733;
    VlWide<4>/*127:0*/ __Vtemp3737;
    VlWide<4>/*127:0*/ __Vtemp3741;
    VlWide<4>/*127:0*/ __Vtemp3745;
    VlWide<4>/*127:0*/ __Vtemp3755;
    VlWide<4>/*127:0*/ __Vtemp3779;
    VlWide<4>/*127:0*/ __Vtemp3782;
    VlWide<4>/*127:0*/ __Vtemp3785;
    VlWide<4>/*127:0*/ __Vtemp3788;
    VlWide<4>/*127:0*/ __Vtemp3791;
    VlWide<4>/*127:0*/ __Vtemp3794;
    VlWide<4>/*127:0*/ __Vtemp3797;
    VlWide<4>/*127:0*/ __Vtemp3800;
    VlWide<4>/*127:0*/ __Vtemp3803;
    VlWide<4>/*127:0*/ __Vtemp3806;
    VlWide<4>/*127:0*/ __Vtemp3809;
    VlWide<4>/*127:0*/ __Vtemp3812;
    VlWide<4>/*127:0*/ __Vtemp3815;
    VlWide<4>/*127:0*/ __Vtemp3818;
    VlWide<4>/*127:0*/ __Vtemp3821;
    VlWide<4>/*127:0*/ __Vtemp3824;
    VlWide<3>/*95:0*/ __Vtemp3825;
    VlWide<3>/*95:0*/ __Vtemp3828;
    VlWide<3>/*95:0*/ __Vtemp3831;
    VlWide<3>/*95:0*/ __Vtemp3834;
    VlWide<3>/*95:0*/ __Vtemp3837;
    VlWide<3>/*95:0*/ __Vtemp3840;
    VlWide<3>/*95:0*/ __Vtemp3843;
    VlWide<3>/*95:0*/ __Vtemp3846;
    VlWide<3>/*95:0*/ __Vtemp3849;
    VlWide<3>/*95:0*/ __Vtemp3852;
    VlWide<3>/*95:0*/ __Vtemp3855;
    VlWide<3>/*95:0*/ __Vtemp3858;
    VlWide<3>/*95:0*/ __Vtemp3861;
    VlWide<3>/*95:0*/ __Vtemp3864;
    VlWide<3>/*95:0*/ __Vtemp3867;
    VlWide<3>/*95:0*/ __Vtemp3870;
    VlWide<4>/*127:0*/ __Vtemp3880;
    VlWide<4>/*127:0*/ __Vtemp3904;
    VlWide<4>/*127:0*/ __Vtemp3905;
    VlWide<3>/*95:0*/ __Vtemp3908;
    VlWide<4>/*127:0*/ __Vtemp3911;
    VlWide<4>/*127:0*/ __Vtemp3914;
    VlWide<4>/*127:0*/ __Vtemp3917;
    VlWide<4>/*127:0*/ __Vtemp3920;
    VlWide<4>/*127:0*/ __Vtemp3923;
    VlWide<4>/*127:0*/ __Vtemp3926;
    VlWide<4>/*127:0*/ __Vtemp3929;
    VlWide<4>/*127:0*/ __Vtemp3932;
    VlWide<4>/*127:0*/ __Vtemp3935;
    VlWide<4>/*127:0*/ __Vtemp3938;
    VlWide<4>/*127:0*/ __Vtemp3941;
    VlWide<4>/*127:0*/ __Vtemp3944;
    VlWide<4>/*127:0*/ __Vtemp3947;
    VlWide<4>/*127:0*/ __Vtemp3950;
    VlWide<4>/*127:0*/ __Vtemp3953;
    VlWide<4>/*127:0*/ __Vtemp3956;
    VlWide<4>/*127:0*/ __Vtemp3959;
    VlWide<4>/*127:0*/ __Vtemp3962;
    VlWide<4>/*127:0*/ __Vtemp3965;
    VlWide<4>/*127:0*/ __Vtemp3968;
    VlWide<4>/*127:0*/ __Vtemp3971;
    VlWide<4>/*127:0*/ __Vtemp3974;
    VlWide<4>/*127:0*/ __Vtemp3993;
    VlWide<4>/*127:0*/ __Vtemp4016;
    VlWide<4>/*127:0*/ __Vtemp4035;
    VlWide<4>/*127:0*/ __Vtemp4058;
    VlWide<4>/*127:0*/ __Vtemp4061;
    VlWide<4>/*127:0*/ __Vtemp4064;
    VlWide<4>/*127:0*/ __Vtemp4067;
    VlWide<4>/*127:0*/ __Vtemp4070;
    VlWide<4>/*127:0*/ __Vtemp4073;
    VlWide<4>/*127:0*/ __Vtemp4096;
    VlWide<3>/*95:0*/ __Vtemp4099;
    VlWide<4>/*127:0*/ __Vtemp4102;
    VlWide<4>/*127:0*/ __Vtemp4103;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->Core__DOT__fetch__DOT__pc_out),32);
        tracep->fullIData(oldp+2,(vlSelf->Core__DOT__fetch__DOT__reg_pnpc),32);
        tracep->fullIData(oldp+3,(vlSelf->Core__DOT__execute_io_jmp_packet_o_jmp_npc),32);
        tracep->fullIData(oldp+4,(vlSelf->Core__DOT__decode__DOT__pc),32);
        tracep->fullIData(oldp+5,(vlSelf->Core__DOT__decode__DOT__inst),32);
        tracep->fullCData(oldp+6,(((0x37U == (0x7fU 
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
                                                    : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_356)))))))),4);
        tracep->fullCData(oldp+7,(((0x37U == (0x7fU 
                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                    ? 0U : ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 0U : 
                                            ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 1U : 
                                             ((0x67U 
                                               == (0x707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 2U
                                               : ((0x63U 
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
        tracep->fullCData(oldp+8,(((0x37U == (0x7fU 
                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                    ? 0U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_505))),2);
        tracep->fullCData(oldp+9,(((0x37U == (0x7fU 
                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                    ? 0U : ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 0U : 
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
        tracep->fullCData(oldp+10,(((0x37U == (0x7fU 
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
                                                   : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_718)))))),4);
        tracep->fullBit(oldp+11,(((0x37U != (0x7fU 
                                             & vlSelf->Core__DOT__decode__DOT__inst)) 
                                  & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793))));
        tracep->fullCData(oldp+12,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 3U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_865))),3);
        tracep->fullCData(oldp+13,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 2U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_937))),3);
        tracep->fullCData(oldp+14,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 7U))),5);
        tracep->fullIData(oldp+15,(((7U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
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
        tracep->fullBit(oldp+16,((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1))));
        tracep->fullCData(oldp+17,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0xfU))),5);
        tracep->fullBit(oldp+18,(vlSelf->Core__DOT__decode_io_ren2));
        tracep->fullCData(oldp+19,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+20,(vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG));
        tracep->fullQData(oldp+21,(vlSelf->Core__DOT__decode__DOT__rs1_reg),64);
        tracep->fullQData(oldp+23,(vlSelf->Core__DOT__decode__DOT__rs2_reg),64);
        tracep->fullIData(oldp+25,(vlSelf->Core__DOT__decode__DOT__reg_pnpc),32);
        tracep->fullBit(oldp+26,((((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                     | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                    | ((0U != (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code)) 
                                       & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))) 
                                   & ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard) 
                                      | (IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard))) 
                                  | (((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                      | (2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))) 
                                     & ((IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard) 
                                        | (IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard))))));
        tracep->fullBit(oldp+27,(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG));
        tracep->fullCData(oldp+28,(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG),5);
        tracep->fullQData(oldp+29,(vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG),64);
        tracep->fullQData(oldp+31,(vlSelf->Core__DOT__regfile__DOT__rf_0),64);
        tracep->fullQData(oldp+33,(vlSelf->Core__DOT__regfile__DOT__rf_1),64);
        tracep->fullQData(oldp+35,(vlSelf->Core__DOT__regfile__DOT__rf_2),64);
        tracep->fullQData(oldp+37,(vlSelf->Core__DOT__regfile__DOT__rf_3),64);
        tracep->fullQData(oldp+39,(vlSelf->Core__DOT__regfile__DOT__rf_4),64);
        tracep->fullQData(oldp+41,(vlSelf->Core__DOT__regfile__DOT__rf_5),64);
        tracep->fullQData(oldp+43,(vlSelf->Core__DOT__regfile__DOT__rf_6),64);
        tracep->fullQData(oldp+45,(vlSelf->Core__DOT__regfile__DOT__rf_7),64);
        tracep->fullQData(oldp+47,(vlSelf->Core__DOT__regfile__DOT__rf_8),64);
        tracep->fullQData(oldp+49,(vlSelf->Core__DOT__regfile__DOT__rf_9),64);
        tracep->fullQData(oldp+51,(vlSelf->Core__DOT__regfile__DOT__rf_10),64);
        tracep->fullQData(oldp+53,(vlSelf->Core__DOT__regfile__DOT__rf_11),64);
        tracep->fullQData(oldp+55,(vlSelf->Core__DOT__regfile__DOT__rf_12),64);
        tracep->fullQData(oldp+57,(vlSelf->Core__DOT__regfile__DOT__rf_13),64);
        tracep->fullQData(oldp+59,(vlSelf->Core__DOT__regfile__DOT__rf_14),64);
        tracep->fullQData(oldp+61,(vlSelf->Core__DOT__regfile__DOT__rf_15),64);
        tracep->fullQData(oldp+63,(vlSelf->Core__DOT__regfile__DOT__rf_16),64);
        tracep->fullQData(oldp+65,(vlSelf->Core__DOT__regfile__DOT__rf_17),64);
        tracep->fullQData(oldp+67,(vlSelf->Core__DOT__regfile__DOT__rf_18),64);
        tracep->fullQData(oldp+69,(vlSelf->Core__DOT__regfile__DOT__rf_19),64);
        tracep->fullQData(oldp+71,(vlSelf->Core__DOT__regfile__DOT__rf_20),64);
        tracep->fullQData(oldp+73,(vlSelf->Core__DOT__regfile__DOT__rf_21),64);
        tracep->fullQData(oldp+75,(vlSelf->Core__DOT__regfile__DOT__rf_22),64);
        tracep->fullQData(oldp+77,(vlSelf->Core__DOT__regfile__DOT__rf_23),64);
        tracep->fullQData(oldp+79,(vlSelf->Core__DOT__regfile__DOT__rf_24),64);
        tracep->fullQData(oldp+81,(vlSelf->Core__DOT__regfile__DOT__rf_25),64);
        tracep->fullQData(oldp+83,(vlSelf->Core__DOT__regfile__DOT__rf_26),64);
        tracep->fullQData(oldp+85,(vlSelf->Core__DOT__regfile__DOT__rf_27),64);
        tracep->fullQData(oldp+87,(vlSelf->Core__DOT__regfile__DOT__rf_28),64);
        tracep->fullQData(oldp+89,(vlSelf->Core__DOT__regfile__DOT__rf_29),64);
        tracep->fullQData(oldp+91,(vlSelf->Core__DOT__regfile__DOT__rf_30),64);
        tracep->fullQData(oldp+93,(vlSelf->Core__DOT__regfile__DOT__rf_31),64);
        tracep->fullBit(oldp+95,(vlSelf->Core__DOT__execute_io_ex_rd_en));
        tracep->fullCData(oldp+96,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),5);
        tracep->fullQData(oldp+97,(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out),64);
        tracep->fullBit(oldp+99,(((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                  | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)))));
        tracep->fullBit(oldp+100,(((0U != (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code)) 
                                   & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
        tracep->fullBit(oldp+101,(((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                   | (2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)))));
        tracep->fullBit(oldp+102,(vlSelf->Core__DOT__mem_io_mem_rd_en));
        tracep->fullCData(oldp+103,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr),5);
        tracep->fullBit(oldp+104,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid));
        tracep->fullIData(oldp+105,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc),32);
        tracep->fullIData(oldp+106,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst),32);
        tracep->fullCData(oldp+107,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code),2);
        tracep->fullCData(oldp+108,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size),2);
        tracep->fullCData(oldp+109,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code),4);
        tracep->fullBit(oldp+110,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en));
        tracep->fullBit(oldp+111,(vlSelf->Core__DOT__execute__DOT__io_is_ebreak_o_REG));
        tracep->fullIData(oldp+112,((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)),32);
        tracep->fullQData(oldp+113,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out),64);
        tracep->fullBit(oldp+115,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__completed));
        tracep->fullBit(oldp+116,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_valid));
        tracep->fullIData(oldp+117,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc),32);
        tracep->fullIData(oldp+118,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_inst),32);
        tracep->fullBit(oldp+119,(vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG));
        VL_EXTEND_WQ(127,64, __Vtemp2629, vlSelf->Core__DOT__decode__DOT__rs2_reg);
        VL_SHIFTL_WWI(127,127,6, __Vtemp2630, __Vtemp2629, 
                      (0x38U & ((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out) 
                                << 3U)));
        tracep->fullQData(oldp+120,((((QData)((IData)(
                                                      __Vtemp2630[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp2630[0U])))),64);
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
        tracep->fullIData(oldp+123,(vlSelf->Core__DOT__io_commit_pc_REG),32);
        tracep->fullBit(oldp+124,(vlSelf->Core__DOT__io_commit_REG));
        tracep->fullIData(oldp+125,((0x1fffffffU & (IData)(
                                                           (vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                                            >> 3U)))),29);
        tracep->fullIData(oldp+126,(vlSelf->Core__DOT__fetch__DOT__inst_out),32);
        tracep->fullBit(oldp+127,(vlSelf->Core__DOT__fetch__DOT__valid_out));
        tracep->fullIData(oldp+128,(vlSelf->Core__DOT__fetch__DOT__pc),32);
        tracep->fullIData(oldp+129,((vlSelf->Core__DOT__fetch__DOT__pc 
                                     >> 2U)),30);
        tracep->fullIData(oldp+130,((0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc)),32);
        tracep->fullBit(oldp+131,(vlSelf->Core__DOT__fetch__DOT__use_reg_npc));
        tracep->fullIData(oldp+132,(vlSelf->Core__DOT__fetch__DOT__reg_npc),32);
        tracep->fullBit(oldp+133,(vlSelf->Core__DOT__decode__DOT__inst_valid));
        tracep->fullCData(oldp+134,(vlSelf->Core__DOT__decode__DOT__c0_1),3);
        tracep->fullBit(oldp+135,(vlSelf->Core__DOT__decode__DOT__c0_3));
        tracep->fullCData(oldp+136,(vlSelf->Core__DOT__decode__DOT__c0_4),3);
        tracep->fullIData(oldp+137,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0x1fffffU
                                      : 0U)),21);
        tracep->fullSData(oldp+138,((0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x14U))),11);
        tracep->fullIData(oldp+139,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0x1fffffU
                                        : 0U) << 0xbU) 
                                     | (0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))),32);
        tracep->fullCData(oldp+140,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0x19U))),6);
        tracep->fullIData(oldp+141,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0x1fffffU
                                        : 0U) << 0xbU) 
                                     | ((0x7e0U & (vlSelf->Core__DOT__decode__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 7U))))),32);
        tracep->fullIData(oldp+142,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0xfffffU
                                      : 0U)),20);
        tracep->fullBit(oldp+143,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 7U))));
        tracep->fullCData(oldp+144,((0xfU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 8U))),4);
        tracep->fullIData(oldp+145,(((((vlSelf->Core__DOT__decode__DOT__inst 
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
        tracep->fullIData(oldp+146,((vlSelf->Core__DOT__decode__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullIData(oldp+147,((0xfffff000U & vlSelf->Core__DOT__decode__DOT__inst)),32);
        tracep->fullSData(oldp+148,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0xfffU
                                      : 0U)),12);
        tracep->fullCData(oldp+149,((0xffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0xcU))),8);
        tracep->fullBit(oldp+150,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x14U))));
        tracep->fullSData(oldp+151,((0x3ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x15U))),10);
        tracep->fullIData(oldp+152,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0xfffU
                                        : 0U) << 0x14U) 
                                     | ((0xff000U & vlSelf->Core__DOT__decode__DOT__inst) 
                                        | ((0x800U 
                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))))),32);
        tracep->fullCData(oldp+153,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0x14U))),6);
        tracep->fullIData(oldp+154,((((0x37U != (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst)) 
                                      & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793))
                                      ? (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U))
                                      : (0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))),32);
        tracep->fullIData(oldp+155,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0xfU))),32);
        tracep->fullBit(oldp+156,(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard));
        tracep->fullBit(oldp+157,(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard));
        tracep->fullBit(oldp+158,(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard));
        tracep->fullBit(oldp+159,(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard));
        tracep->fullBit(oldp+160,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
        tracep->fullBit(oldp+161,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))) 
                                   & (IData)(vlSelf->Core__DOT__decode_io_ren2))));
        tracep->fullQData(oldp+162,(vlSelf->Core__DOT__execute__DOT__alu_io_in1),64);
        tracep->fullQData(oldp+164,(vlSelf->Core__DOT__execute__DOT__alu_io_in2),64);
        tracep->fullCData(oldp+166,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code),4);
        tracep->fullBit(oldp+167,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type));
        tracep->fullBit(oldp+168,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp));
        tracep->fullCData(oldp+169,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code),4);
        tracep->fullIData(oldp+170,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm),32);
        tracep->fullIData(oldp+171,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc),32);
        tracep->fullCData(oldp+172,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src),3);
        tracep->fullCData(oldp+173,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src),3);
        tracep->fullIData(oldp+174,(((vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+175,(((IData)(4U) + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)),32);
        tracep->fullIData(oldp+176,(((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_jmp)
                                      ? vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc
                                      : ((IData)(4U) 
                                         + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc))),32);
        tracep->fullBit(oldp+177,((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                    | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                   & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
        tracep->fullBit(oldp+178,(((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                   & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
        tracep->fullCData(oldp+179,(vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt),6);
        tracep->fullIData(oldp+180,((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_in1)),32);
        tracep->fullQData(oldp+181,(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0),64);
        tracep->fullIData(oldp+183,((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)),32);
        tracep->fullIData(oldp+184,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        VL_EXTEND_WQ(65,64, __Vtemp2633, vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1);
        if (((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
               | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
              | (3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
             & (IData)((vlSelf->Core__DOT__execute__DOT__alu_io_in1 
                        >> 0x3fU)))) {
            __Vtemp2635[0U] = (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1);
            __Vtemp2635[1U] = (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1 
                                       >> 0x20U));
            __Vtemp2635[2U] = (1U & (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1 
                                             >> 0x3fU)));
        } else {
            __Vtemp2635[0U] = __Vtemp2633[0U];
            __Vtemp2635[1U] = __Vtemp2633[1U];
            __Vtemp2635[2U] = __Vtemp2633[2U];
        }
        tracep->fullWData(oldp+185,(__Vtemp2635),65);
        tracep->fullWData(oldp+188,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2),65);
        tracep->fullQData(oldp+191,((((QData)((IData)(
                                                      vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U])))),64);
        tracep->fullQData(oldp+193,((((QData)((IData)(
                                                      vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[2U])))),64);
        tracep->fullBit(oldp+195,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_mul_valid));
        tracep->fullBit(oldp+196,((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state))));
        tracep->fullQData(oldp+197,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1),64);
        tracep->fullQData(oldp+199,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2),64);
        tracep->fullQData(oldp+201,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_out),64);
        tracep->fullQData(oldp+203,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_out),64);
        tracep->fullBit(oldp+205,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div));
        tracep->fullBit(oldp+206,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_div_valid));
        tracep->fullBit(oldp+207,((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state))));
        tracep->fullCData(oldp+208,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state),2);
        tracep->fullCData(oldp+209,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop),4);
        tracep->fullQData(oldp+210,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x),64);
        tracep->fullQData(oldp+212,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y),64);
        tracep->fullBit(oldp+214,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_divu));
        tracep->fullBit(oldp+215,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_mul));
        tracep->fullBit(oldp+216,(((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                     | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                    | (3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   & (IData)((vlSelf->Core__DOT__execute__DOT__alu_io_in1 
                                              >> 0x3fU)))));
        tracep->fullBit(oldp+217,((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                    | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   & (IData)((vlSelf->Core__DOT__execute__DOT__alu_io_in2 
                                              >> 0x3fU)))));
        tracep->fullBit(oldp+218,((((2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                    | (3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   | (4U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)))));
        tracep->fullBit(oldp+219,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_word));
        tracep->fullBit(oldp+220,(((((5U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                     | (6U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                    | (0xaU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   | (0xbU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)))));
        tracep->fullIData(oldp+221,((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x)),32);
        tracep->fullIData(oldp+222,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+223,((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y)),32);
        tracep->fullIData(oldp+224,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullBit(oldp+225,((1U & (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+226,((1U & (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2 
                                                 >> 0x3fU)))));
        tracep->fullIData(oldp+227,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U]),32);
        tracep->fullIData(oldp+228,(((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U] 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullQData(oldp+229,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out_lo_1),64);
        tracep->fullIData(oldp+231,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out_lo_1 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullWData(oldp+232,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1),65);
        tracep->fullCData(oldp+235,((7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U])),3);
        if ((4U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))) {
            __Vtemp2652[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2652[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2652[2U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2652[3U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        if ((7U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))) {
            __Vtemp2658[0U] = 0U;
            __Vtemp2658[1U] = 0U;
            __Vtemp2658[2U] = 0U;
            __Vtemp2658[3U] = 0U;
        } else {
            __Vtemp2658[0U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2658[1U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            __Vtemp2658[2U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2652[2U]));
            __Vtemp2658[3U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2652[3U]));
        }
        tracep->fullWData(oldp+236,(__Vtemp2658),128);
        tracep->fullCData(oldp+240,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c),2);
        tracep->fullCData(oldp+241,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 2U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 2U)))) {
            __Vtemp2675[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2675[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2675[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 2U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2675[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 2U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2679[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 2U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 2U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 2U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 2U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 2U)))) {
            __Vtemp2681[0U] = 0U;
            __Vtemp2681[1U] = 0U;
            __Vtemp2681[2U] = 0U;
            __Vtemp2681[3U] = 0U;
        } else {
            __Vtemp2681[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 2U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 2U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 2U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 2U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2681[1U] = __Vtemp2679[1U];
            __Vtemp2681[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2675[2U]));
            __Vtemp2681[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2675[3U]));
        }
        tracep->fullWData(oldp+242,(__Vtemp2681),128);
        tracep->fullCData(oldp+246,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c),2);
        tracep->fullCData(oldp+247,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 4U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 4U)))) {
            __Vtemp2698[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2698[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2698[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 4U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2698[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 4U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2702[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 4U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 4U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 4U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 4U)))) {
            __Vtemp2704[0U] = 0U;
            __Vtemp2704[1U] = 0U;
            __Vtemp2704[2U] = 0U;
            __Vtemp2704[3U] = 0U;
        } else {
            __Vtemp2704[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 4U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 4U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 4U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 4U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2704[1U] = __Vtemp2702[1U];
            __Vtemp2704[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2698[2U]));
            __Vtemp2704[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2698[3U]));
        }
        tracep->fullWData(oldp+248,(__Vtemp2704),128);
        tracep->fullCData(oldp+252,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c),2);
        tracep->fullCData(oldp+253,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 6U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 6U)))) {
            __Vtemp2721[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2721[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2721[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 6U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2721[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 6U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2725[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 6U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 6U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 6U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 6U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 6U)))) {
            __Vtemp2727[0U] = 0U;
            __Vtemp2727[1U] = 0U;
            __Vtemp2727[2U] = 0U;
            __Vtemp2727[3U] = 0U;
        } else {
            __Vtemp2727[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 6U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 6U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 6U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 6U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2727[1U] = __Vtemp2725[1U];
            __Vtemp2727[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2721[2U]));
            __Vtemp2727[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2721[3U]));
        }
        tracep->fullWData(oldp+254,(__Vtemp2727),128);
        tracep->fullCData(oldp+258,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c),2);
        tracep->fullCData(oldp+259,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 8U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 8U)))) {
            __Vtemp2744[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2744[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2744[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 8U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2744[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 8U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2748[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 8U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 8U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 8U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 8U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 8U)))) {
            __Vtemp2750[0U] = 0U;
            __Vtemp2750[1U] = 0U;
            __Vtemp2750[2U] = 0U;
            __Vtemp2750[3U] = 0U;
        } else {
            __Vtemp2750[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 8U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 8U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 8U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 8U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2750[1U] = __Vtemp2748[1U];
            __Vtemp2750[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2744[2U]));
            __Vtemp2750[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2744[3U]));
        }
        tracep->fullWData(oldp+260,(__Vtemp2750),128);
        tracep->fullCData(oldp+264,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c),2);
        tracep->fullCData(oldp+265,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0xaU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0xaU)))) {
            __Vtemp2767[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2767[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2767[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xaU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2767[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xaU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2771[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0xaU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0xaU)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0xaU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0xaU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0xaU)))) {
            __Vtemp2773[0U] = 0U;
            __Vtemp2773[1U] = 0U;
            __Vtemp2773[2U] = 0U;
            __Vtemp2773[3U] = 0U;
        } else {
            __Vtemp2773[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xaU)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0xaU)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0xaU)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xaU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2773[1U] = __Vtemp2771[1U];
            __Vtemp2773[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2767[2U]));
            __Vtemp2773[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2767[3U]));
        }
        tracep->fullWData(oldp+266,(__Vtemp2773),128);
        tracep->fullCData(oldp+270,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c),2);
        tracep->fullCData(oldp+271,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0xcU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0xcU)))) {
            __Vtemp2790[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2790[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2790[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xcU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2790[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xcU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2794[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0xcU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0xcU)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0xcU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0xcU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0xcU)))) {
            __Vtemp2796[0U] = 0U;
            __Vtemp2796[1U] = 0U;
            __Vtemp2796[2U] = 0U;
            __Vtemp2796[3U] = 0U;
        } else {
            __Vtemp2796[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xcU)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0xcU)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0xcU)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xcU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2796[1U] = __Vtemp2794[1U];
            __Vtemp2796[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2790[2U]));
            __Vtemp2796[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2790[3U]));
        }
        tracep->fullWData(oldp+272,(__Vtemp2796),128);
        tracep->fullCData(oldp+276,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c),2);
        tracep->fullCData(oldp+277,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0xeU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0xeU)))) {
            __Vtemp2813[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2813[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2813[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xeU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2813[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xeU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2817[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0xeU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0xeU)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0xeU)))) {
            __Vtemp2819[0U] = 0U;
            __Vtemp2819[1U] = 0U;
            __Vtemp2819[2U] = 0U;
            __Vtemp2819[3U] = 0U;
        } else {
            __Vtemp2819[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xeU)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0xeU)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0xeU)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xeU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2819[1U] = __Vtemp2817[1U];
            __Vtemp2819[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2813[2U]));
            __Vtemp2819[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2813[3U]));
        }
        tracep->fullWData(oldp+278,(__Vtemp2819),128);
        tracep->fullCData(oldp+282,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c),2);
        tracep->fullCData(oldp+283,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x10U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x10U)))) {
            __Vtemp2836[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2836[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2836[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x10U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2836[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x10U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2840[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0x10U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x10U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x10U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x10U)))) {
            __Vtemp2842[0U] = 0U;
            __Vtemp2842[1U] = 0U;
            __Vtemp2842[2U] = 0U;
            __Vtemp2842[3U] = 0U;
        } else {
            __Vtemp2842[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x10U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x10U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x10U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x10U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2842[1U] = __Vtemp2840[1U];
            __Vtemp2842[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2836[2U]));
            __Vtemp2842[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2836[3U]));
        }
        tracep->fullWData(oldp+284,(__Vtemp2842),128);
        tracep->fullCData(oldp+288,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c),2);
        tracep->fullCData(oldp+289,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x12U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x12U)))) {
            __Vtemp2859[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2859[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2859[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x12U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2859[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x12U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2863[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0x12U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x12U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x12U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x12U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x12U)))) {
            __Vtemp2865[0U] = 0U;
            __Vtemp2865[1U] = 0U;
            __Vtemp2865[2U] = 0U;
            __Vtemp2865[3U] = 0U;
        } else {
            __Vtemp2865[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x12U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x12U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x12U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x12U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2865[1U] = __Vtemp2863[1U];
            __Vtemp2865[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2859[2U]));
            __Vtemp2865[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2859[3U]));
        }
        tracep->fullWData(oldp+290,(__Vtemp2865),128);
        tracep->fullCData(oldp+294,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c),2);
        tracep->fullCData(oldp+295,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x14U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x14U)))) {
            __Vtemp2882[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2882[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2882[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x14U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2882[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x14U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2886[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0x14U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x14U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x14U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x14U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x14U)))) {
            __Vtemp2888[0U] = 0U;
            __Vtemp2888[1U] = 0U;
            __Vtemp2888[2U] = 0U;
            __Vtemp2888[3U] = 0U;
        } else {
            __Vtemp2888[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x14U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x14U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x14U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x14U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2888[1U] = __Vtemp2886[1U];
            __Vtemp2888[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2882[2U]));
            __Vtemp2888[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2882[3U]));
        }
        tracep->fullWData(oldp+296,(__Vtemp2888),128);
        tracep->fullCData(oldp+300,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c),2);
        tracep->fullCData(oldp+301,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x16U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x16U)))) {
            __Vtemp2905[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2905[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2905[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x16U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2905[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x16U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2909[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0x16U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x16U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x16U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x16U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x16U)))) {
            __Vtemp2911[0U] = 0U;
            __Vtemp2911[1U] = 0U;
            __Vtemp2911[2U] = 0U;
            __Vtemp2911[3U] = 0U;
        } else {
            __Vtemp2911[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x16U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x16U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x16U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x16U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2911[1U] = __Vtemp2909[1U];
            __Vtemp2911[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2905[2U]));
            __Vtemp2911[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2905[3U]));
        }
        tracep->fullWData(oldp+302,(__Vtemp2911),128);
        tracep->fullCData(oldp+306,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c),2);
        tracep->fullCData(oldp+307,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x18U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x18U)))) {
            __Vtemp2928[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2928[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2928[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x18U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x18U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2928[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x18U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x18U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2932[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0x18U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x18U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x18U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x18U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x18U)))) {
            __Vtemp2934[0U] = 0U;
            __Vtemp2934[1U] = 0U;
            __Vtemp2934[2U] = 0U;
            __Vtemp2934[3U] = 0U;
        } else {
            __Vtemp2934[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x18U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x18U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x18U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x18U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2934[1U] = __Vtemp2932[1U];
            __Vtemp2934[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2928[2U]));
            __Vtemp2934[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2928[3U]));
        }
        tracep->fullWData(oldp+308,(__Vtemp2934),128);
        tracep->fullCData(oldp+312,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c),2);
        tracep->fullCData(oldp+313,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x1aU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x1aU)))) {
            __Vtemp2951[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2951[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2951[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1aU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2951[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1aU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2955[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0x1aU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x1aU)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x1aU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x1aU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x1aU)))) {
            __Vtemp2957[0U] = 0U;
            __Vtemp2957[1U] = 0U;
            __Vtemp2957[2U] = 0U;
            __Vtemp2957[3U] = 0U;
        } else {
            __Vtemp2957[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1aU)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x1aU)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1aU)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1aU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2957[1U] = __Vtemp2955[1U];
            __Vtemp2957[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2951[2U]));
            __Vtemp2957[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2951[3U]));
        }
        tracep->fullWData(oldp+314,(__Vtemp2957),128);
        tracep->fullCData(oldp+318,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c),2);
        tracep->fullCData(oldp+319,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x1cU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x1cU)))) {
            __Vtemp2974[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2974[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2974[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1cU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2974[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1cU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2978[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0x1cU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x1cU)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x1cU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x1cU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x1cU)))) {
            __Vtemp2980[0U] = 0U;
            __Vtemp2980[1U] = 0U;
            __Vtemp2980[2U] = 0U;
            __Vtemp2980[3U] = 0U;
        } else {
            __Vtemp2980[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1cU)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x1cU)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1cU)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1cU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2980[1U] = __Vtemp2978[1U];
            __Vtemp2980[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2974[2U]));
            __Vtemp2980[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2974[3U]));
        }
        tracep->fullWData(oldp+320,(__Vtemp2980),128);
        tracep->fullCData(oldp+324,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c),2);
        tracep->fullCData(oldp+325,((7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                            << 2U) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 0x1eU)))),3);
        if ((4U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                           << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                     >> 0x1eU))))) {
            __Vtemp2997[1U] = (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                >> 0x1fU) | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                             << 1U));
            __Vtemp2997[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2997[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2997[1U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                 << 1U))
                                : ((2U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                    : ((1U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                        : 0U)));
            __Vtemp2997[2U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2997[3U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2999[0U] = ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                          << 2U) | 
                                         (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                          >> 0x1eU))))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                            : ((4U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                   << 1U) : ((3U == 
                                              (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x1eU))))
                                              ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                 << 1U)
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                       << 2U) 
                                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x1eU))))
                                                  ? 
                                                 vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        << 2U) 
                                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x1eU))))
                                                   ? 
                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                   : 0U)))));
        if ((7U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                           << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                     >> 0x1eU))))) {
            __Vtemp3003[0U] = 0U;
            __Vtemp3003[1U] = 0U;
            __Vtemp3003[2U] = 0U;
            __Vtemp3003[3U] = 0U;
        } else {
            __Vtemp3003[0U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : __Vtemp2999[0U]);
            __Vtemp3003[1U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : __Vtemp2997[1U]));
            __Vtemp3003[2U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp2997[2U]));
            __Vtemp3003[3U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp2997[3U]));
        }
        tracep->fullWData(oldp+326,(__Vtemp3003),128);
        tracep->fullCData(oldp+330,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c),2);
        tracep->fullCData(oldp+331,((7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U])),3);
        if ((4U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))) {
            __Vtemp3020[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3020[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3020[2U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3020[3U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        if ((7U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))) {
            __Vtemp3026[0U] = 0U;
            __Vtemp3026[1U] = 0U;
            __Vtemp3026[2U] = 0U;
            __Vtemp3026[3U] = 0U;
        } else {
            __Vtemp3026[0U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3026[1U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            __Vtemp3026[2U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3020[2U]));
            __Vtemp3026[3U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3020[3U]));
        }
        tracep->fullWData(oldp+332,(__Vtemp3026),128);
        tracep->fullCData(oldp+336,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c),2);
        tracep->fullCData(oldp+337,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 2U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 2U)))) {
            __Vtemp3043[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3043[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3043[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 2U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3043[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 2U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3047[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 2U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 2U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 2U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 2U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 2U)))) {
            __Vtemp3049[0U] = 0U;
            __Vtemp3049[1U] = 0U;
            __Vtemp3049[2U] = 0U;
            __Vtemp3049[3U] = 0U;
        } else {
            __Vtemp3049[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 2U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 2U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 2U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 2U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3049[1U] = __Vtemp3047[1U];
            __Vtemp3049[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3043[2U]));
            __Vtemp3049[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3043[3U]));
        }
        tracep->fullWData(oldp+338,(__Vtemp3049),128);
        tracep->fullCData(oldp+342,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c),2);
        tracep->fullCData(oldp+343,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 4U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 4U)))) {
            __Vtemp3066[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3066[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3066[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 4U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3066[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 4U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3070[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 4U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 4U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 4U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 4U)))) {
            __Vtemp3072[0U] = 0U;
            __Vtemp3072[1U] = 0U;
            __Vtemp3072[2U] = 0U;
            __Vtemp3072[3U] = 0U;
        } else {
            __Vtemp3072[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 4U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 4U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 4U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 4U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3072[1U] = __Vtemp3070[1U];
            __Vtemp3072[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3066[2U]));
            __Vtemp3072[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3066[3U]));
        }
        tracep->fullWData(oldp+344,(__Vtemp3072),128);
        tracep->fullCData(oldp+348,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c),2);
        tracep->fullCData(oldp+349,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 6U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 6U)))) {
            __Vtemp3089[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3089[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3089[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 6U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3089[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 6U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3093[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 6U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 6U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 6U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 6U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 6U)))) {
            __Vtemp3095[0U] = 0U;
            __Vtemp3095[1U] = 0U;
            __Vtemp3095[2U] = 0U;
            __Vtemp3095[3U] = 0U;
        } else {
            __Vtemp3095[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 6U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 6U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 6U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 6U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3095[1U] = __Vtemp3093[1U];
            __Vtemp3095[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3089[2U]));
            __Vtemp3095[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3089[3U]));
        }
        tracep->fullWData(oldp+350,(__Vtemp3095),128);
        tracep->fullCData(oldp+354,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c),2);
        tracep->fullCData(oldp+355,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 8U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 8U)))) {
            __Vtemp3112[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3112[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3112[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 8U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3112[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 8U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3116[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 8U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 8U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 8U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 8U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 8U)))) {
            __Vtemp3118[0U] = 0U;
            __Vtemp3118[1U] = 0U;
            __Vtemp3118[2U] = 0U;
            __Vtemp3118[3U] = 0U;
        } else {
            __Vtemp3118[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 8U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 8U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 8U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 8U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3118[1U] = __Vtemp3116[1U];
            __Vtemp3118[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3112[2U]));
            __Vtemp3118[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3112[3U]));
        }
        tracep->fullWData(oldp+356,(__Vtemp3118),128);
        tracep->fullCData(oldp+360,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c),2);
        tracep->fullCData(oldp+361,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0xaU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0xaU)))) {
            __Vtemp3135[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3135[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3135[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xaU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3135[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xaU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3139[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0xaU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0xaU)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0xaU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0xaU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0xaU)))) {
            __Vtemp3141[0U] = 0U;
            __Vtemp3141[1U] = 0U;
            __Vtemp3141[2U] = 0U;
            __Vtemp3141[3U] = 0U;
        } else {
            __Vtemp3141[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xaU)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0xaU)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0xaU)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xaU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3141[1U] = __Vtemp3139[1U];
            __Vtemp3141[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3135[2U]));
            __Vtemp3141[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3135[3U]));
        }
        tracep->fullWData(oldp+362,(__Vtemp3141),128);
        tracep->fullCData(oldp+366,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c),2);
        tracep->fullCData(oldp+367,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0xcU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0xcU)))) {
            __Vtemp3158[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3158[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3158[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xcU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3158[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xcU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3162[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0xcU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0xcU)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0xcU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0xcU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0xcU)))) {
            __Vtemp3164[0U] = 0U;
            __Vtemp3164[1U] = 0U;
            __Vtemp3164[2U] = 0U;
            __Vtemp3164[3U] = 0U;
        } else {
            __Vtemp3164[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xcU)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0xcU)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0xcU)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xcU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3164[1U] = __Vtemp3162[1U];
            __Vtemp3164[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3158[2U]));
            __Vtemp3164[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3158[3U]));
        }
        tracep->fullWData(oldp+368,(__Vtemp3164),128);
        tracep->fullCData(oldp+372,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c),2);
        tracep->fullCData(oldp+373,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0xeU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0xeU)))) {
            __Vtemp3181[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3181[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3181[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xeU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3181[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xeU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3185[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0xeU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0xeU)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0xeU)))) {
            __Vtemp3187[0U] = 0U;
            __Vtemp3187[1U] = 0U;
            __Vtemp3187[2U] = 0U;
            __Vtemp3187[3U] = 0U;
        } else {
            __Vtemp3187[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xeU)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0xeU)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0xeU)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xeU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3187[1U] = __Vtemp3185[1U];
            __Vtemp3187[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3181[2U]));
            __Vtemp3187[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3181[3U]));
        }
        tracep->fullWData(oldp+374,(__Vtemp3187),128);
        tracep->fullCData(oldp+378,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c),2);
        tracep->fullCData(oldp+379,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x10U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x10U)))) {
            __Vtemp3204[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3204[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3204[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x10U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3204[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x10U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3208[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x10U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x10U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x10U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x10U)))) {
            __Vtemp3210[0U] = 0U;
            __Vtemp3210[1U] = 0U;
            __Vtemp3210[2U] = 0U;
            __Vtemp3210[3U] = 0U;
        } else {
            __Vtemp3210[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x10U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x10U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x10U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x10U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3210[1U] = __Vtemp3208[1U];
            __Vtemp3210[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3204[2U]));
            __Vtemp3210[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3204[3U]));
        }
        tracep->fullWData(oldp+380,(__Vtemp3210),128);
        tracep->fullCData(oldp+384,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c),2);
        tracep->fullCData(oldp+385,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x12U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x12U)))) {
            __Vtemp3227[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3227[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3227[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x12U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3227[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x12U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3231[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x12U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x12U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x12U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x12U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x12U)))) {
            __Vtemp3233[0U] = 0U;
            __Vtemp3233[1U] = 0U;
            __Vtemp3233[2U] = 0U;
            __Vtemp3233[3U] = 0U;
        } else {
            __Vtemp3233[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x12U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x12U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x12U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x12U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3233[1U] = __Vtemp3231[1U];
            __Vtemp3233[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3227[2U]));
            __Vtemp3233[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3227[3U]));
        }
        tracep->fullWData(oldp+386,(__Vtemp3233),128);
        tracep->fullCData(oldp+390,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c),2);
        tracep->fullCData(oldp+391,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x14U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x14U)))) {
            __Vtemp3250[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3250[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3250[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x14U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3250[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x14U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3254[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x14U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x14U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x14U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x14U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x14U)))) {
            __Vtemp3256[0U] = 0U;
            __Vtemp3256[1U] = 0U;
            __Vtemp3256[2U] = 0U;
            __Vtemp3256[3U] = 0U;
        } else {
            __Vtemp3256[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x14U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x14U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x14U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x14U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3256[1U] = __Vtemp3254[1U];
            __Vtemp3256[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3250[2U]));
            __Vtemp3256[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3250[3U]));
        }
        tracep->fullWData(oldp+392,(__Vtemp3256),128);
        tracep->fullCData(oldp+396,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c),2);
        tracep->fullCData(oldp+397,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x16U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x16U)))) {
            __Vtemp3273[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3273[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3273[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x16U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3273[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x16U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3277[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x16U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x16U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x16U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x16U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x16U)))) {
            __Vtemp3279[0U] = 0U;
            __Vtemp3279[1U] = 0U;
            __Vtemp3279[2U] = 0U;
            __Vtemp3279[3U] = 0U;
        } else {
            __Vtemp3279[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x16U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x16U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x16U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x16U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3279[1U] = __Vtemp3277[1U];
            __Vtemp3279[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3273[2U]));
            __Vtemp3279[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3273[3U]));
        }
        tracep->fullWData(oldp+398,(__Vtemp3279),128);
        tracep->fullCData(oldp+402,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c),2);
        tracep->fullCData(oldp+403,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x18U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x18U)))) {
            __Vtemp3296[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3296[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3296[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x18U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x18U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3296[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x18U)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x18U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3300[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x18U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x18U)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x18U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x18U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x18U)))) {
            __Vtemp3302[0U] = 0U;
            __Vtemp3302[1U] = 0U;
            __Vtemp3302[2U] = 0U;
            __Vtemp3302[3U] = 0U;
        } else {
            __Vtemp3302[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x18U)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x18U)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x18U)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x18U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3302[1U] = __Vtemp3300[1U];
            __Vtemp3302[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3296[2U]));
            __Vtemp3302[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3296[3U]));
        }
        tracep->fullWData(oldp+404,(__Vtemp3302),128);
        tracep->fullCData(oldp+408,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c),2);
        tracep->fullCData(oldp+409,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x1aU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x1aU)))) {
            __Vtemp3319[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3319[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3319[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1aU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3319[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1aU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3323[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x1aU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x1aU)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x1aU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x1aU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x1aU)))) {
            __Vtemp3325[0U] = 0U;
            __Vtemp3325[1U] = 0U;
            __Vtemp3325[2U] = 0U;
            __Vtemp3325[3U] = 0U;
        } else {
            __Vtemp3325[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1aU)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x1aU)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1aU)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1aU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3325[1U] = __Vtemp3323[1U];
            __Vtemp3325[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3319[2U]));
            __Vtemp3325[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3319[3U]));
        }
        tracep->fullWData(oldp+410,(__Vtemp3325),128);
        tracep->fullCData(oldp+414,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c),2);
        tracep->fullCData(oldp+415,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x1cU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x1cU)))) {
            __Vtemp3342[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3342[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3342[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1cU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3342[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1cU)))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3346[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x1cU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                        >> 0x1fU) | 
                                       ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                        << 1U)) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x1cU)))
                                                    ? 
                                                   ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                       << 1U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x1cU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x1cU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x1cU)))) {
            __Vtemp3348[0U] = 0U;
            __Vtemp3348[1U] = 0U;
            __Vtemp3348[2U] = 0U;
            __Vtemp3348[3U] = 0U;
        } else {
            __Vtemp3348[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1cU)))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x1cU)))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1cU)))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1cU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3348[1U] = __Vtemp3346[1U];
            __Vtemp3348[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3342[2U]));
            __Vtemp3348[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3342[3U]));
        }
        tracep->fullWData(oldp+416,(__Vtemp3348),128);
        tracep->fullCData(oldp+420,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c),2);
        tracep->fullCData(oldp+421,((7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                            << 2U) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 0x1eU)))),3);
        if ((4U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                           << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                     >> 0x1eU))))) {
            __Vtemp3365[1U] = (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                >> 0x1fU) | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                             << 1U));
            __Vtemp3365[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3365[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3365[1U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                 << 1U))
                                : ((2U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                    : ((1U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                        : 0U)));
            __Vtemp3365[2U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3365[3U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3367[0U] = ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                          << 2U) | 
                                         (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                          >> 0x1eU))))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                            : ((4U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                   << 1U) : ((3U == 
                                              (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x1eU))))
                                              ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                 << 1U)
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                       << 2U) 
                                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x1eU))))
                                                  ? 
                                                 vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                        << 2U) 
                                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x1eU))))
                                                   ? 
                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                   : 0U)))));
        if ((7U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                           << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                     >> 0x1eU))))) {
            __Vtemp3371[0U] = 0U;
            __Vtemp3371[1U] = 0U;
            __Vtemp3371[2U] = 0U;
            __Vtemp3371[3U] = 0U;
        } else {
            __Vtemp3371[0U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : __Vtemp3367[0U]);
            __Vtemp3371[1U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : __Vtemp3365[1U]));
            __Vtemp3371[2U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3365[2U]));
            __Vtemp3371[3U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3365[3U]));
        }
        tracep->fullWData(oldp+422,(__Vtemp3371),128);
        tracep->fullCData(oldp+426,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c),2);
        tracep->fullCData(oldp+427,((7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U])),3);
        if ((4U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))) {
            __Vtemp3388[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3388[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3388[2U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3388[3U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0x3fffffffffffffffULL
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 2U))
                                : ((2U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        if ((7U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))) {
            __Vtemp3394[0U] = 0U;
            __Vtemp3394[1U] = 0U;
            __Vtemp3394[2U] = 0U;
            __Vtemp3394[3U] = 0U;
        } else {
            __Vtemp3394[0U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((4U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                        ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                         ? (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                            << 1U) : 
                                        ((2U == (7U 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3394[1U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            __Vtemp3394[2U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3388[2U]));
            __Vtemp3394[3U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3388[3U]));
        }
        tracep->fullWData(oldp+428,(__Vtemp3394),128);
        tracep->fullCData(oldp+432,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c),2);
        tracep->fullWData(oldp+433,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0),128);
        __Vtemp3398[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U] 
                           << 2U);
        __Vtemp3398[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U] 
                                         << 2U));
        __Vtemp3398[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U] 
                                         << 2U));
        __Vtemp3398[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[3U] 
                                         << 2U));
        tracep->fullWData(oldp+437,(__Vtemp3398),128);
        __Vtemp3402[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U] 
                           << 4U);
        __Vtemp3402[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U] 
                                         << 4U));
        __Vtemp3402[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U] 
                                         << 4U));
        __Vtemp3402[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[3U] 
                                         << 4U));
        tracep->fullWData(oldp+441,(__Vtemp3402),128);
        tracep->fullWData(oldp+445,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s),128);
        __Vtemp3406[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3406[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3406[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3406[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+449,(__Vtemp3406),128);
        __Vtemp3410[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U] 
                           << 6U);
        __Vtemp3410[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U] 
                                         << 6U));
        __Vtemp3410[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U] 
                                         << 6U));
        __Vtemp3410[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[3U] 
                                         << 6U));
        tracep->fullWData(oldp+453,(__Vtemp3410),128);
        __Vtemp3414[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U] 
                           << 8U);
        __Vtemp3414[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U] 
                                         << 8U));
        __Vtemp3414[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U] 
                                         << 8U));
        __Vtemp3414[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[3U] 
                                         << 8U));
        tracep->fullWData(oldp+457,(__Vtemp3414),128);
        __Vtemp3418[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U] 
                           << 0xaU);
        __Vtemp3418[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U] 
                                         << 0xaU));
        __Vtemp3418[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U] 
                                         << 0xaU));
        __Vtemp3418[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[3U] 
                                         << 0xaU));
        tracep->fullWData(oldp+461,(__Vtemp3418),128);
        tracep->fullWData(oldp+465,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s),128);
        __Vtemp3422[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3422[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3422[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3422[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+469,(__Vtemp3422),128);
        __Vtemp3426[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U] 
                           << 0xcU);
        __Vtemp3426[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U] 
                                         << 0xcU));
        __Vtemp3426[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U] 
                                         << 0xcU));
        __Vtemp3426[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[3U] 
                                         << 0xcU));
        tracep->fullWData(oldp+473,(__Vtemp3426),128);
        __Vtemp3430[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U] 
                           << 0xeU);
        __Vtemp3430[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U] 
                                         << 0xeU));
        __Vtemp3430[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U] 
                                         << 0xeU));
        __Vtemp3430[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[3U] 
                                         << 0xeU));
        tracep->fullWData(oldp+477,(__Vtemp3430),128);
        __Vtemp3434[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U] 
                           << 0x10U);
        __Vtemp3434[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U] 
                                         << 0x10U));
        __Vtemp3434[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U] 
                                         << 0x10U));
        __Vtemp3434[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[3U] 
                                         << 0x10U));
        tracep->fullWData(oldp+481,(__Vtemp3434),128);
        tracep->fullWData(oldp+485,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s),128);
        __Vtemp3438[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3438[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3438[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3438[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+489,(__Vtemp3438),128);
        __Vtemp3442[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U] 
                           << 0x12U);
        __Vtemp3442[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U] 
                                        << 0x12U));
        __Vtemp3442[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U] 
                                        << 0x12U));
        __Vtemp3442[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[3U] 
                                        << 0x12U));
        tracep->fullWData(oldp+493,(__Vtemp3442),128);
        __Vtemp3446[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U] 
                           << 0x14U);
        __Vtemp3446[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U] 
                                        << 0x14U));
        __Vtemp3446[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U] 
                                        << 0x14U));
        __Vtemp3446[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[3U] 
                                        << 0x14U));
        tracep->fullWData(oldp+497,(__Vtemp3446),128);
        __Vtemp3450[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U] 
                           << 0x16U);
        __Vtemp3450[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U] 
                                        << 0x16U));
        __Vtemp3450[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U] 
                                        << 0x16U));
        __Vtemp3450[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[3U] 
                                        << 0x16U));
        tracep->fullWData(oldp+501,(__Vtemp3450),128);
        tracep->fullWData(oldp+505,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s),128);
        __Vtemp3454[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3454[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3454[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3454[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+509,(__Vtemp3454),128);
        __Vtemp3458[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U] 
                           << 0x18U);
        __Vtemp3458[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U] 
                                      << 0x18U));
        __Vtemp3458[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U] 
                                      << 0x18U));
        __Vtemp3458[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[3U] 
                                      << 0x18U));
        tracep->fullWData(oldp+513,(__Vtemp3458),128);
        __Vtemp3462[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U] 
                           << 0x1aU);
        __Vtemp3462[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U] 
                                      << 0x1aU));
        __Vtemp3462[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U] 
                                      << 0x1aU));
        __Vtemp3462[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[3U] 
                                      << 0x1aU));
        tracep->fullWData(oldp+517,(__Vtemp3462),128);
        __Vtemp3466[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U] 
                           << 0x1cU);
        __Vtemp3466[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U] 
                                      << 0x1cU));
        __Vtemp3466[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U] 
                                      << 0x1cU));
        __Vtemp3466[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[3U] 
                                      << 0x1cU));
        tracep->fullWData(oldp+521,(__Vtemp3466),128);
        tracep->fullWData(oldp+525,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s),128);
        __Vtemp3470[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3470[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3470[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3470[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+529,(__Vtemp3470),128);
        __Vtemp3474[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U] 
                           << 0x1eU);
        __Vtemp3474[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U] 
                                      << 0x1eU));
        __Vtemp3474[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U] 
                                      << 0x1eU));
        __Vtemp3474[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[3U] 
                                      << 0x1eU));
        tracep->fullWData(oldp+533,(__Vtemp3474),128);
        __Vtemp3476[0U] = 0U;
        __Vtemp3476[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[0U];
        __Vtemp3476[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[1U];
        __Vtemp3476[3U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[2U];
        tracep->fullWData(oldp+537,(__Vtemp3476),128);
        __Vtemp3480[0U] = 0U;
        __Vtemp3480[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
                           << 2U);
        __Vtemp3480[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
                                         << 2U));
        __Vtemp3480[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[2U] 
                                         << 2U));
        tracep->fullWData(oldp+541,(__Vtemp3480),128);
        tracep->fullWData(oldp+545,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s),128);
        __Vtemp3484[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3484[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3484[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3484[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+549,(__Vtemp3484),128);
        __Vtemp3488[0U] = 0U;
        __Vtemp3488[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
                           << 4U);
        __Vtemp3488[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
                                         << 4U));
        __Vtemp3488[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[2U] 
                                         << 4U));
        tracep->fullWData(oldp+553,(__Vtemp3488),128);
        __Vtemp3492[0U] = 0U;
        __Vtemp3492[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                           << 6U);
        __Vtemp3492[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                                         << 6U));
        __Vtemp3492[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[2U] 
                                         << 6U));
        tracep->fullWData(oldp+557,(__Vtemp3492),128);
        __Vtemp3496[0U] = 0U;
        __Vtemp3496[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
                           << 8U);
        __Vtemp3496[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                                         << 8U));
        __Vtemp3496[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[2U] 
                                         << 8U));
        tracep->fullWData(oldp+561,(__Vtemp3496),128);
        tracep->fullWData(oldp+565,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s),128);
        __Vtemp3500[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3500[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3500[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3500[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+569,(__Vtemp3500),128);
        __Vtemp3504[0U] = 0U;
        __Vtemp3504[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
                           << 0xaU);
        __Vtemp3504[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
                                         << 0xaU));
        __Vtemp3504[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[2U] 
                                         << 0xaU));
        tracep->fullWData(oldp+573,(__Vtemp3504),128);
        __Vtemp3508[0U] = 0U;
        __Vtemp3508[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                           << 0xcU);
        __Vtemp3508[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                                         << 0xcU));
        __Vtemp3508[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[2U] 
                                         << 0xcU));
        tracep->fullWData(oldp+577,(__Vtemp3508),128);
        __Vtemp3512[0U] = 0U;
        __Vtemp3512[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
                           << 0xeU);
        __Vtemp3512[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
                                         << 0xeU));
        __Vtemp3512[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[2U] 
                                         << 0xeU));
        tracep->fullWData(oldp+581,(__Vtemp3512),128);
        tracep->fullWData(oldp+585,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s),128);
        __Vtemp3516[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3516[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3516[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3516[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+589,(__Vtemp3516),128);
        __Vtemp3520[0U] = 0U;
        __Vtemp3520[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
                           << 0x10U);
        __Vtemp3520[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
                                         << 0x10U));
        __Vtemp3520[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[2U] 
                                         << 0x10U));
        tracep->fullWData(oldp+593,(__Vtemp3520),128);
        __Vtemp3524[0U] = 0U;
        __Vtemp3524[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                           << 0x12U);
        __Vtemp3524[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                                        << 0x12U));
        __Vtemp3524[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[2U] 
                                        << 0x12U));
        tracep->fullWData(oldp+597,(__Vtemp3524),128);
        __Vtemp3528[0U] = 0U;
        __Vtemp3528[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
                           << 0x14U);
        __Vtemp3528[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
                                        << 0x14U));
        __Vtemp3528[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[2U] 
                                        << 0x14U));
        tracep->fullWData(oldp+601,(__Vtemp3528),128);
        tracep->fullWData(oldp+605,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s),128);
        __Vtemp3532[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3532[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3532[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3532[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+609,(__Vtemp3532),128);
        __Vtemp3536[0U] = 0U;
        __Vtemp3536[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
                           << 0x16U);
        __Vtemp3536[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
                                        << 0x16U));
        __Vtemp3536[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[2U] 
                                        << 0x16U));
        tracep->fullWData(oldp+613,(__Vtemp3536),128);
        __Vtemp3540[0U] = 0U;
        __Vtemp3540[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                           << 0x18U);
        __Vtemp3540[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                                      << 0x18U));
        __Vtemp3540[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[2U] 
                                      << 0x18U));
        tracep->fullWData(oldp+617,(__Vtemp3540),128);
        __Vtemp3544[0U] = 0U;
        __Vtemp3544[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
                           << 0x1aU);
        __Vtemp3544[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
                                      << 0x1aU));
        __Vtemp3544[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[2U] 
                                      << 0x1aU));
        tracep->fullWData(oldp+621,(__Vtemp3544),128);
        tracep->fullWData(oldp+625,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s),128);
        __Vtemp3548[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3548[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3548[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3548[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+629,(__Vtemp3548),128);
        __Vtemp3552[0U] = 0U;
        __Vtemp3552[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U] 
                           << 0x1cU);
        __Vtemp3552[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
                                      << 0x1cU));
        __Vtemp3552[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[2U] 
                                      << 0x1cU));
        tracep->fullWData(oldp+633,(__Vtemp3552),128);
        __Vtemp3556[0U] = 0U;
        __Vtemp3556[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U] 
                           << 0x1eU);
        __Vtemp3556[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                                      << 0x1eU));
        __Vtemp3556[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[2U] 
                                      << 0x1eU));
        tracep->fullWData(oldp+637,(__Vtemp3556),128);
        __Vtemp3557[0U] = 0U;
        __Vtemp3557[1U] = 0U;
        __Vtemp3557[2U] = (IData)((((QData)((IData)(
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U]))));
        __Vtemp3557[3U] = (IData)(((((QData)((IData)(
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U]))) 
                                   >> 0x20U));
        tracep->fullWData(oldp+641,(__Vtemp3557),128);
        tracep->fullWData(oldp+645,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s),128);
        __Vtemp3561[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3561[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3561[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3561[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+649,(__Vtemp3561),128);
        tracep->fullWData(oldp+653,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s),128);
        __Vtemp3565[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3565[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3565[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3565[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+657,(__Vtemp3565),128);
        tracep->fullWData(oldp+661,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s),128);
        __Vtemp3569[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3569[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3569[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3569[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+665,(__Vtemp3569),128);
        tracep->fullWData(oldp+669,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s),128);
        __Vtemp3573[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3573[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3573[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3573[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+673,(__Vtemp3573),128);
        tracep->fullWData(oldp+677,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s),128);
        __Vtemp3577[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3577[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3577[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3577[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+681,(__Vtemp3577),128);
        tracep->fullWData(oldp+685,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s),128);
        __Vtemp3581[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3581[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3581[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3581[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+689,(__Vtemp3581),128);
        tracep->fullWData(oldp+693,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s),128);
        __Vtemp3585[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3585[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3585[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3585[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+697,(__Vtemp3585),128);
        tracep->fullWData(oldp+701,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33),128);
        tracep->fullWData(oldp+705,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s),128);
        __Vtemp3589[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3589[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3589[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3589[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+709,(__Vtemp3589),128);
        tracep->fullWData(oldp+713,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s),128);
        __Vtemp3593[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3593[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3593[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3593[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+717,(__Vtemp3593),128);
        tracep->fullWData(oldp+721,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s),128);
        __Vtemp3597[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3597[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3597[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3597[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+725,(__Vtemp3597),128);
        tracep->fullWData(oldp+729,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s),128);
        __Vtemp3601[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3601[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3601[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3601[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+733,(__Vtemp3601),128);
        tracep->fullWData(oldp+737,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s),128);
        __Vtemp3605[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3605[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3605[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3605[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+741,(__Vtemp3605),128);
        __Vtemp3611[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
                            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                               << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U]);
        __Vtemp3611[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U]);
        __Vtemp3611[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U]);
        __Vtemp3611[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[3U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[3U]);
        tracep->fullWData(oldp+745,(__Vtemp3611),128);
        __Vtemp3631[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
                              << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                        << 2U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                                    << 2U) 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                                                      << 1U))) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U]) 
                              << 1U));
        __Vtemp3631[1U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
                                     >> 0x1fU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                                  >> 0x1eU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                       >> 0x1eU) & 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                                       >> 0x1fU)))) 
                            | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                                & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U]) 
                               >> 0x1fU)) | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U] 
                                                << 1U) 
                                               & ((2U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                                      >> 0x1eU)) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                                     << 2U))) 
                                              | (((2U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                                      >> 0x1eU)) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                                     << 2U)) 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U] 
                                                    << 1U))) 
                                             | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U] 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U]) 
                                                << 1U)));
        __Vtemp3631[2U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U] 
                                     >> 0x1fU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                                  >> 0x1eU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                       >> 0x1eU) & 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U] 
                                       >> 0x1fU)))) 
                            | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U] 
                                & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U]) 
                               >> 0x1fU)) | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U] 
                                                << 1U) 
                                               & ((2U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                                      >> 0x1eU)) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                     << 2U))) 
                                              | (((2U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                                      >> 0x1eU)) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                     << 2U)) 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U] 
                                                    << 1U))) 
                                             | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U] 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U]) 
                                                << 1U)));
        __Vtemp3631[3U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U] 
                                     >> 0x1fU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                  >> 0x1eU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                       >> 0x1eU) & 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U] 
                                       >> 0x1fU)))) 
                            | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U] 
                                & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U]) 
                               >> 0x1fU)) | (0xfffffffeU 
                                             & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[3U] 
                                                   << 1U) 
                                                  & ((2U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                         >> 0x1eU)) 
                                                     | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                                        << 2U))) 
                                                 | (((2U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                         >> 0x1eU)) 
                                                     | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                                        << 2U)) 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[3U] 
                                                       << 1U))) 
                                                | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[3U] 
                                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[3U]) 
                                                   << 1U))));
        tracep->fullWData(oldp+749,(__Vtemp3631),128);
        __Vtemp3641[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                             << 1U) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U]) 
                           ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                              << 1U));
        __Vtemp3641[1U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                            << 1U)));
        __Vtemp3641[2U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                            << 1U)));
        __Vtemp3641[3U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[3U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                            << 1U)));
        tracep->fullWData(oldp+753,(__Vtemp3641),128);
        __Vtemp3665[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                              << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                                        << 1U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                                                    << 1U) 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                                      << 2U))) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U]) 
                              << 2U));
        __Vtemp3665[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                                     >> 0x1eU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                                                  >> 0x1fU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                                       >> 0x1fU) & 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                       >> 0x1eU))) 
                                  | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U]) 
                                     >> 0x1eU))) | 
                           (((((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                                      >> 0x1eU)) | 
                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                << 2U)) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U] 
                                           << 1U)) 
                             | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U] 
                                 << 1U) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                              << 2U)))) 
                            | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                       >> 0x1eU)) | 
                                (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                 << 2U)) & ((2U & (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                                                   >> 0x1eU)) 
                                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                               << 2U)))));
        __Vtemp3665[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                     >> 0x1eU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U] 
                                                  >> 0x1fU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U] 
                                       >> 0x1fU) & 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                       >> 0x1eU))) 
                                  | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U]) 
                                     >> 0x1eU))) | 
                           (((((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                      >> 0x1eU)) | 
                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                << 2U)) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U] 
                                           << 1U)) 
                             | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U] 
                                 << 1U) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                              << 2U)))) 
                            | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                       >> 0x1eU)) | 
                                (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                 << 2U)) & ((2U & (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                                   >> 0x1eU)) 
                                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                               << 2U)))));
        __Vtemp3665[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                     >> 0x1eU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U] 
                                                  >> 0x1fU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U] 
                                       >> 0x1fU) & 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                       >> 0x1eU))) 
                                  | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U]) 
                                     >> 0x1eU))) | 
                           (((((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                      >> 0x1eU)) | 
                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                << 2U)) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[3U] 
                                           << 1U)) 
                             | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[3U] 
                                 << 1U) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                              << 2U)))) 
                            | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                       >> 0x1eU)) | 
                                (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                 << 2U)) & ((2U & (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                                   >> 0x1eU)) 
                                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                               << 2U)))));
        tracep->fullWData(oldp+757,(__Vtemp3665),128);
        __Vtemp3671[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
                            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                               << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U]);
        __Vtemp3671[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U]);
        __Vtemp3671[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U]);
        __Vtemp3671[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[3U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[3U]);
        tracep->fullWData(oldp+761,(__Vtemp3671),128);
        __Vtemp3691[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
                              << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                        << 2U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                                    << 2U) 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                                                      << 1U))) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U]) 
                              << 1U));
        __Vtemp3691[1U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
                                     >> 0x1fU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                                  >> 0x1eU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                       >> 0x1eU) & 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                                       >> 0x1fU)))) 
                            | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                                & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U]) 
                               >> 0x1fU)) | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U] 
                                                << 1U) 
                                               & ((2U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                                      >> 0x1eU)) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                                     << 2U))) 
                                              | (((2U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                                      >> 0x1eU)) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                                     << 2U)) 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U] 
                                                    << 1U))) 
                                             | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U] 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U]) 
                                                << 1U)));
        __Vtemp3691[2U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U] 
                                     >> 0x1fU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                                  >> 0x1eU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                       >> 0x1eU) & 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U] 
                                       >> 0x1fU)))) 
                            | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U] 
                                & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U]) 
                               >> 0x1fU)) | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U] 
                                                << 1U) 
                                               & ((2U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                                      >> 0x1eU)) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                     << 2U))) 
                                              | (((2U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                                      >> 0x1eU)) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                     << 2U)) 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U] 
                                                    << 1U))) 
                                             | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U] 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U]) 
                                                << 1U)));
        __Vtemp3691[3U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U] 
                                     >> 0x1fU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                  >> 0x1eU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                       >> 0x1eU) & 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U] 
                                       >> 0x1fU)))) 
                            | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U] 
                                & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U]) 
                               >> 0x1fU)) | (0xfffffffeU 
                                             & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[3U] 
                                                   << 1U) 
                                                  & ((2U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                         >> 0x1eU)) 
                                                     | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                                        << 2U))) 
                                                 | (((2U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                         >> 0x1eU)) 
                                                     | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                                        << 2U)) 
                                                    & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[3U] 
                                                       << 1U))) 
                                                | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[3U] 
                                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[3U]) 
                                                   << 1U))));
        tracep->fullWData(oldp+765,(__Vtemp3691),128);
        __Vtemp3701[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                             << 1U) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U]) 
                           ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                              << 1U));
        __Vtemp3701[1U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                            << 1U)));
        __Vtemp3701[2U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                            << 1U)));
        __Vtemp3701[3U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[3U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                            << 1U)));
        tracep->fullWData(oldp+769,(__Vtemp3701),128);
        __Vtemp3725[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                              << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                                        << 1U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                                                    << 1U) 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                                      << 2U))) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U]) 
                              << 2U));
        __Vtemp3725[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                                     >> 0x1eU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                                                  >> 0x1fU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                                       >> 0x1fU) & 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                       >> 0x1eU))) 
                                  | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U]) 
                                     >> 0x1eU))) | 
                           (((((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                                      >> 0x1eU)) | 
                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                << 2U)) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U] 
                                           << 1U)) 
                             | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U] 
                                 << 1U) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                              << 2U)))) 
                            | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                       >> 0x1eU)) | 
                                (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                 << 2U)) & ((2U & (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                                                   >> 0x1eU)) 
                                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                               << 2U)))));
        __Vtemp3725[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                     >> 0x1eU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U] 
                                                  >> 0x1fU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U] 
                                       >> 0x1fU) & 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                       >> 0x1eU))) 
                                  | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U]) 
                                     >> 0x1eU))) | 
                           (((((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                      >> 0x1eU)) | 
                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                << 2U)) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U] 
                                           << 1U)) 
                             | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U] 
                                 << 1U) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                              << 2U)))) 
                            | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                       >> 0x1eU)) | 
                                (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                 << 2U)) & ((2U & (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                                   >> 0x1eU)) 
                                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                               << 2U)))));
        __Vtemp3725[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                     >> 0x1eU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U] 
                                                  >> 0x1fU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U] 
                                       >> 0x1fU) & 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                       >> 0x1eU))) 
                                  | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U]) 
                                     >> 0x1eU))) | 
                           (((((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                      >> 0x1eU)) | 
                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                << 2U)) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[3U] 
                                           << 1U)) 
                             | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[3U] 
                                 << 1U) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                              << 2U)))) 
                            | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                       >> 0x1eU)) | 
                                (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                 << 2U)) & ((2U & (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                                   >> 0x1eU)) 
                                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                               << 2U)))));
        tracep->fullWData(oldp+773,(__Vtemp3725),128);
        tracep->fullWData(oldp+777,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0),128);
        tracep->fullWData(oldp+781,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1),128);
        tracep->fullWData(oldp+785,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2),128);
        tracep->fullWData(oldp+789,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s),128);
        __Vtemp3729[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3729[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3729[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3729[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+793,(__Vtemp3729),128);
        tracep->fullWData(oldp+797,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3),128);
        tracep->fullWData(oldp+801,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4),128);
        tracep->fullWData(oldp+805,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5),128);
        tracep->fullWData(oldp+809,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s),128);
        __Vtemp3733[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3733[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3733[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3733[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+813,(__Vtemp3733),128);
        tracep->fullWData(oldp+817,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6),128);
        tracep->fullWData(oldp+821,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7),128);
        tracep->fullWData(oldp+825,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s),128);
        __Vtemp3737[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3737[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3737[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3737[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+829,(__Vtemp3737),128);
        tracep->fullWData(oldp+833,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s),128);
        __Vtemp3741[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3741[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3741[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3741[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+837,(__Vtemp3741),128);
        tracep->fullWData(oldp+841,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s),128);
        __Vtemp3745[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3745[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3745[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3745[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+845,(__Vtemp3745),128);
        __Vtemp3755[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                               << 1U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                          << 1U));
        __Vtemp3755[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                            << 1U)));
        __Vtemp3755[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                            << 1U)));
        __Vtemp3755[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                            << 1U)));
        tracep->fullWData(oldp+849,(__Vtemp3755),128);
        __Vtemp3779[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                              << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                        << 2U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                                   << 2U)) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                         << 1U)));
        __Vtemp3779[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                     >> 0x1fU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                                  >> 0x1eU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                       & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                      >> 0x1eU)) | 
                                  ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                    >> 0x1eU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                                 >> 0x1fU)))) 
                           | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                 << 1U) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                              << 2U))) 
                               | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                          >> 0x1eU)) 
                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                      << 2U)) & ((2U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                                    << 2U)))) 
                              | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                         >> 0x1eU)) 
                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                     << 2U)) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                                << 1U))));
        __Vtemp3779[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                     >> 0x1fU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                                  >> 0x1eU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                       & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U]) 
                                      >> 0x1eU)) | 
                                  ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                    >> 0x1eU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                                 >> 0x1fU)))) 
                           | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                 << 1U) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                              << 2U))) 
                               | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                          >> 0x1eU)) 
                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                      << 2U)) & ((2U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                                    << 2U)))) 
                              | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                         >> 0x1eU)) 
                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                     << 2U)) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                                << 1U))));
        __Vtemp3779[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                     >> 0x1fU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                                  >> 0x1eU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                       & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U]) 
                                      >> 0x1eU)) | 
                                  ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                    >> 0x1eU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                                 >> 0x1fU)))) 
                           | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                                 << 1U) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                              << 2U))) 
                               | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                          >> 0x1eU)) 
                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                      << 2U)) & ((2U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                                    << 2U)))) 
                              | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                         >> 0x1eU)) 
                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                     << 2U)) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                                                << 1U))));
        tracep->fullWData(oldp+853,(__Vtemp3779),128);
        tracep->fullCData(oldp+857,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state),2);
        tracep->fullWData(oldp+858,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2),67);
        tracep->fullWData(oldp+861,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1),128);
        tracep->fullWData(oldp+865,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2),128);
        tracep->fullWData(oldp+869,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3),128);
        tracep->fullWData(oldp+873,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4),128);
        tracep->fullWData(oldp+877,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5),128);
        tracep->fullWData(oldp+881,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6),128);
        tracep->fullWData(oldp+885,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7),128);
        tracep->fullWData(oldp+889,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8),128);
        tracep->fullWData(oldp+893,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9),128);
        tracep->fullWData(oldp+897,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10),128);
        tracep->fullWData(oldp+901,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11),128);
        tracep->fullWData(oldp+905,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12),128);
        tracep->fullWData(oldp+909,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13),128);
        tracep->fullWData(oldp+913,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14),128);
        tracep->fullWData(oldp+917,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15),128);
        tracep->fullWData(oldp+921,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16),128);
        tracep->fullWData(oldp+925,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17),128);
        tracep->fullWData(oldp+929,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18),128);
        tracep->fullWData(oldp+933,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19),128);
        tracep->fullWData(oldp+937,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20),128);
        tracep->fullWData(oldp+941,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21),128);
        tracep->fullWData(oldp+945,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22),128);
        tracep->fullWData(oldp+949,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23),128);
        tracep->fullWData(oldp+953,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24),128);
        tracep->fullWData(oldp+957,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25),128);
        tracep->fullWData(oldp+961,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26),128);
        tracep->fullWData(oldp+965,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27),128);
        tracep->fullWData(oldp+969,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28),128);
        tracep->fullWData(oldp+973,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29),128);
        tracep->fullWData(oldp+977,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30),128);
        tracep->fullWData(oldp+981,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31),128);
        tracep->fullWData(oldp+985,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32),128);
        tracep->fullBit(oldp+989,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+990,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c))));
        tracep->fullBit(oldp+991,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+992,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c))));
        tracep->fullBit(oldp+993,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+994,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c))));
        tracep->fullBit(oldp+995,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+996,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c))));
        tracep->fullBit(oldp+997,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+998,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c))));
        tracep->fullBit(oldp+999,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+1000,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c))));
        tracep->fullBit(oldp+1001,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1002,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c))));
        tracep->fullBit(oldp+1003,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1004,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c))));
        tracep->fullBit(oldp+1005,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1006,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c))));
        tracep->fullBit(oldp+1007,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1008,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c))));
        tracep->fullBit(oldp+1009,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1010,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c))));
        tracep->fullBit(oldp+1011,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1012,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c))));
        tracep->fullBit(oldp+1013,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1014,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c))));
        tracep->fullBit(oldp+1015,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1016,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c))));
        tracep->fullBit(oldp+1017,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1018,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c))));
        tracep->fullBit(oldp+1019,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1020,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c))));
        tracep->fullBit(oldp+1021,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1022,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c))));
        tracep->fullBit(oldp+1023,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1024,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c))));
        tracep->fullBit(oldp+1025,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1026,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c))));
        tracep->fullBit(oldp+1027,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1028,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c))));
        tracep->fullBit(oldp+1029,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1030,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c))));
        tracep->fullBit(oldp+1031,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1032,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c))));
        tracep->fullBit(oldp+1033,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1034,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c))));
        tracep->fullBit(oldp+1035,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1036,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c))));
        tracep->fullBit(oldp+1037,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1038,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c))));
        tracep->fullBit(oldp+1039,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1040,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c))));
        tracep->fullBit(oldp+1041,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1042,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c))));
        tracep->fullBit(oldp+1043,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1044,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c))));
        tracep->fullBit(oldp+1045,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1046,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c))));
        tracep->fullBit(oldp+1047,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1048,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c))));
        tracep->fullBit(oldp+1049,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1050,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c))));
        tracep->fullBit(oldp+1051,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1052,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c))));
        tracep->fullBit(oldp+1053,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1054,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c))));
        tracep->fullWData(oldp+1055,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out),128);
        __Vtemp3782[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U];
        __Vtemp3782[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U];
        __Vtemp3782[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U];
        __Vtemp3782[3U] = (0x3fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[3U]);
        tracep->fullWData(oldp+1059,(__Vtemp3782),126);
        __Vtemp3785[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U];
        __Vtemp3785[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U];
        __Vtemp3785[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U];
        __Vtemp3785[3U] = (0xfffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[3U]);
        tracep->fullWData(oldp+1063,(__Vtemp3785),124);
        __Vtemp3788[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U];
        __Vtemp3788[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U];
        __Vtemp3788[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U];
        __Vtemp3788[3U] = (0x3ffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[3U]);
        tracep->fullWData(oldp+1067,(__Vtemp3788),122);
        __Vtemp3791[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U];
        __Vtemp3791[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U];
        __Vtemp3791[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U];
        __Vtemp3791[3U] = (0xffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[3U]);
        tracep->fullWData(oldp+1071,(__Vtemp3791),120);
        __Vtemp3794[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U];
        __Vtemp3794[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U];
        __Vtemp3794[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U];
        __Vtemp3794[3U] = (0x3fffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[3U]);
        tracep->fullWData(oldp+1075,(__Vtemp3794),118);
        __Vtemp3797[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U];
        __Vtemp3797[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U];
        __Vtemp3797[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U];
        __Vtemp3797[3U] = (0xfffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[3U]);
        tracep->fullWData(oldp+1079,(__Vtemp3797),116);
        __Vtemp3800[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U];
        __Vtemp3800[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U];
        __Vtemp3800[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U];
        __Vtemp3800[3U] = (0x3ffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[3U]);
        tracep->fullWData(oldp+1083,(__Vtemp3800),114);
        __Vtemp3803[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U];
        __Vtemp3803[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U];
        __Vtemp3803[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U];
        __Vtemp3803[3U] = (0xffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[3U]);
        tracep->fullWData(oldp+1087,(__Vtemp3803),112);
        __Vtemp3806[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U];
        __Vtemp3806[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U];
        __Vtemp3806[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U];
        __Vtemp3806[3U] = (0x3fffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[3U]);
        tracep->fullWData(oldp+1091,(__Vtemp3806),110);
        __Vtemp3809[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U];
        __Vtemp3809[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U];
        __Vtemp3809[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U];
        __Vtemp3809[3U] = (0xfffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[3U]);
        tracep->fullWData(oldp+1095,(__Vtemp3809),108);
        __Vtemp3812[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U];
        __Vtemp3812[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U];
        __Vtemp3812[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U];
        __Vtemp3812[3U] = (0x3ffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[3U]);
        tracep->fullWData(oldp+1099,(__Vtemp3812),106);
        __Vtemp3815[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U];
        __Vtemp3815[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U];
        __Vtemp3815[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U];
        __Vtemp3815[3U] = (0xffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[3U]);
        tracep->fullWData(oldp+1103,(__Vtemp3815),104);
        __Vtemp3818[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U];
        __Vtemp3818[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U];
        __Vtemp3818[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U];
        __Vtemp3818[3U] = (0x3fU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[3U]);
        tracep->fullWData(oldp+1107,(__Vtemp3818),102);
        __Vtemp3821[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U];
        __Vtemp3821[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U];
        __Vtemp3821[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U];
        __Vtemp3821[3U] = (0xfU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[3U]);
        tracep->fullWData(oldp+1111,(__Vtemp3821),100);
        __Vtemp3824[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U];
        __Vtemp3824[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U];
        __Vtemp3824[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U];
        __Vtemp3824[3U] = (3U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[3U]);
        tracep->fullWData(oldp+1115,(__Vtemp3824),98);
        __Vtemp3825[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[0U];
        __Vtemp3825[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[1U];
        __Vtemp3825[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[2U];
        tracep->fullWData(oldp+1119,(__Vtemp3825),96);
        __Vtemp3828[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U];
        __Vtemp3828[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U];
        __Vtemp3828[2U] = (0x3fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[2U]);
        tracep->fullWData(oldp+1122,(__Vtemp3828),94);
        __Vtemp3831[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U];
        __Vtemp3831[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U];
        __Vtemp3831[2U] = (0xfffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[2U]);
        tracep->fullWData(oldp+1125,(__Vtemp3831),92);
        __Vtemp3834[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U];
        __Vtemp3834[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U];
        __Vtemp3834[2U] = (0x3ffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[2U]);
        tracep->fullWData(oldp+1128,(__Vtemp3834),90);
        __Vtemp3837[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U];
        __Vtemp3837[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U];
        __Vtemp3837[2U] = (0xffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[2U]);
        tracep->fullWData(oldp+1131,(__Vtemp3837),88);
        __Vtemp3840[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U];
        __Vtemp3840[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U];
        __Vtemp3840[2U] = (0x3fffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[2U]);
        tracep->fullWData(oldp+1134,(__Vtemp3840),86);
        __Vtemp3843[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U];
        __Vtemp3843[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U];
        __Vtemp3843[2U] = (0xfffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[2U]);
        tracep->fullWData(oldp+1137,(__Vtemp3843),84);
        __Vtemp3846[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U];
        __Vtemp3846[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U];
        __Vtemp3846[2U] = (0x3ffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[2U]);
        tracep->fullWData(oldp+1140,(__Vtemp3846),82);
        __Vtemp3849[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U];
        __Vtemp3849[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U];
        __Vtemp3849[2U] = (0xffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[2U]);
        tracep->fullWData(oldp+1143,(__Vtemp3849),80);
        __Vtemp3852[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U];
        __Vtemp3852[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U];
        __Vtemp3852[2U] = (0x3fffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[2U]);
        tracep->fullWData(oldp+1146,(__Vtemp3852),78);
        __Vtemp3855[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U];
        __Vtemp3855[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U];
        __Vtemp3855[2U] = (0xfffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[2U]);
        tracep->fullWData(oldp+1149,(__Vtemp3855),76);
        __Vtemp3858[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U];
        __Vtemp3858[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U];
        __Vtemp3858[2U] = (0x3ffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[2U]);
        tracep->fullWData(oldp+1152,(__Vtemp3858),74);
        __Vtemp3861[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U];
        __Vtemp3861[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U];
        __Vtemp3861[2U] = (0xffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[2U]);
        tracep->fullWData(oldp+1155,(__Vtemp3861),72);
        __Vtemp3864[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U];
        __Vtemp3864[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U];
        __Vtemp3864[2U] = (0x3fU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[2U]);
        tracep->fullWData(oldp+1158,(__Vtemp3864),70);
        __Vtemp3867[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U];
        __Vtemp3867[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U];
        __Vtemp3867[2U] = (0xfU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[2U]);
        tracep->fullWData(oldp+1161,(__Vtemp3867),68);
        __Vtemp3870[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U];
        __Vtemp3870[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U];
        __Vtemp3870[2U] = (3U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[2U]);
        tracep->fullWData(oldp+1164,(__Vtemp3870),66);
        tracep->fullQData(oldp+1167,((((QData)((IData)(
                                                       vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U])))),64);
        __Vtemp3880[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                               << 1U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                          << 1U));
        __Vtemp3880[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                            << 1U)));
        __Vtemp3880[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                            << 1U)));
        __Vtemp3880[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                            << 1U)));
        __Vtemp3904[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                              << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                        << 2U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                                   << 2U)) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                         << 1U)));
        __Vtemp3904[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                     >> 0x1fU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                                  >> 0x1eU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                       & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                      >> 0x1eU)) | 
                                  ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                    >> 0x1eU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                                 >> 0x1fU)))) 
                           | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                 << 1U) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                              << 2U))) 
                               | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                          >> 0x1eU)) 
                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                      << 2U)) & ((2U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                                    << 2U)))) 
                              | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                         >> 0x1eU)) 
                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                     << 2U)) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                                << 1U))));
        __Vtemp3904[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                     >> 0x1fU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                                  >> 0x1eU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                       & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U]) 
                                      >> 0x1eU)) | 
                                  ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                    >> 0x1eU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                                 >> 0x1fU)))) 
                           | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                 << 1U) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                              << 2U))) 
                               | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                          >> 0x1eU)) 
                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                      << 2U)) & ((2U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                                    << 2U)))) 
                              | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                         >> 0x1eU)) 
                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                     << 2U)) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                                << 1U))));
        __Vtemp3904[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                     >> 0x1fU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                                  >> 0x1eU)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                       & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U]) 
                                      >> 0x1eU)) | 
                                  ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                    >> 0x1eU) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                                 >> 0x1fU)))) 
                           | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                                 << 1U) & ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                              << 2U))) 
                               | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                          >> 0x1eU)) 
                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                      << 2U)) & ((2U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                                    << 2U)))) 
                              | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                         >> 0x1eU)) 
                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                     << 2U)) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                                                << 1U))));
        VL_ADD_W(4, __Vtemp3905, __Vtemp3880, __Vtemp3904);
        tracep->fullWData(oldp+1169,(__Vtemp3905),128);
        tracep->fullBit(oldp+1173,((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2[2U])));
        tracep->fullCData(oldp+1174,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c) 
                                                << 6U)) 
                                      | ((0x40U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c) 
                                                << 4U)) 
                                            | ((0x10U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c) 
                                                   << 4U)) 
                                               | ((8U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c) 
                                                      << 2U)) 
                                                  | ((4U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c) 
                                                         << 2U)) 
                                                     | (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c)))))))),8);
        tracep->fullCData(oldp+1175,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
                                                << 6U)) 
                                      | ((0x40U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c) 
                                                << 4U)) 
                                            | ((0x10U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c) 
                                                   << 4U)) 
                                               | ((8U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c) 
                                                      << 2U)) 
                                                  | ((4U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c) 
                                                         << 2U)) 
                                                     | (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c)))))))),8);
        tracep->fullIData(oldp+1176,(((0x10000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c) 
                                                   << 0x10U)) 
                                      | ((0x8000U & 
                                          ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c) 
                                           << 0xeU)) 
                                         | ((0x4000U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c) 
                                                << 0xeU)) 
                                            | ((0x2000U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c) 
                                                   << 0xcU)) 
                                               | ((0x1000U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c) 
                                                      << 0xcU)) 
                                                  | ((0x800U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c) 
                                                         << 0xaU)) 
                                                     | ((0x400U 
                                                         & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c) 
                                                            << 0xaU)) 
                                                        | ((0x200U 
                                                            & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c) 
                                                               << 8U)) 
                                                           | ((0x100U 
                                                               & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c) 
                                                                  << 8U)) 
                                                              | ((0x80U 
                                                                  & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
                                                                     << 6U)) 
                                                                 | ((0x40U 
                                                                     & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
                                                                        << 6U)) 
                                                                    | ((0x20U 
                                                                        & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c) 
                                                                           << 4U)) 
                                                                       | ((0x10U 
                                                                           & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c) 
                                                                              << 4U)) 
                                                                          | ((8U 
                                                                              & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c) 
                                                                                << 2U)) 
                                                                             | ((4U 
                                                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c) 
                                                                                << 2U)) 
                                                                                | (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c))))))))))))))))),17);
        tracep->fullQData(oldp+1177,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_lo),33);
        tracep->fullCData(oldp+1179,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c) 
                                                << 7U)) 
                                      | ((0x40U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c) 
                                                   << 5U)) 
                                         | ((0x20U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c) 
                                                << 5U)) 
                                            | ((0x10U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c) 
                                                   << 3U)) 
                                               | ((8U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c) 
                                                         << 1U)) 
                                                     | ((2U 
                                                         & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c) 
                                                              >> 1U)))))))))),8);
        tracep->fullCData(oldp+1180,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
                                                << 7U)) 
                                      | ((0x40U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c) 
                                                   << 5U)) 
                                         | ((0x20U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c) 
                                                << 5U)) 
                                            | ((0x10U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c) 
                                                   << 3U)) 
                                               | ((8U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c) 
                                                         << 1U)) 
                                                     | ((2U 
                                                         & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c) 
                                                              >> 1U)))))))))),8);
        tracep->fullIData(oldp+1181,(((0x10000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c) 
                                                   << 0xfU)) 
                                      | ((0x8000U & 
                                          ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c) 
                                           << 0xfU)) 
                                         | ((0x4000U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c) 
                                                << 0xdU)) 
                                            | ((0x2000U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c) 
                                                   << 0xdU)) 
                                               | ((0x1000U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c) 
                                                      << 0xbU)) 
                                                  | ((0x800U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c) 
                                                         << 0xbU)) 
                                                     | ((0x400U 
                                                         & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c) 
                                                            << 9U)) 
                                                        | ((0x200U 
                                                            & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c) 
                                                               << 9U)) 
                                                           | ((0x100U 
                                                               & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
                                                                  << 7U)) 
                                                              | ((0x80U 
                                                                  & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
                                                                     << 7U)) 
                                                                 | ((0x40U 
                                                                     & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c) 
                                                                        << 5U)) 
                                                                    | ((0x20U 
                                                                        & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c) 
                                                                           << 5U)) 
                                                                       | ((0x10U 
                                                                           & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c) 
                                                                              << 3U)) 
                                                                          | ((8U 
                                                                              & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c) 
                                                                                << 3U)) 
                                                                             | ((4U 
                                                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c) 
                                                                                >> 1U))))))))))))))))))),17);
        tracep->fullQData(oldp+1182,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_hi_1),33);
        __Vtemp3908[0U] = (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]);
        __Vtemp3908[1U] = (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]);
        __Vtemp3908[2U] = (1U & (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]));
        tracep->fullWData(oldp+1184,(__Vtemp3908),65);
        tracep->fullQData(oldp+1187,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0x7fffffffffffffffULL
                                       : 0ULL)),63);
        tracep->fullQData(oldp+1189,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0x3fffffffffffffffULL
                                       : 0ULL)),62);
        tracep->fullQData(oldp+1191,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0ULL : 0x3fffffffffffffffULL)),62);
        tracep->fullQData(oldp+1193,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0ULL : 0x7fffffffffffffffULL)),63);
        __Vtemp3911[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U];
        __Vtemp3911[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U];
        __Vtemp3911[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U];
        __Vtemp3911[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1195,(__Vtemp3911),127);
        __Vtemp3914[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U];
        __Vtemp3914[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U];
        __Vtemp3914[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U];
        __Vtemp3914[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1199,(__Vtemp3914),127);
        __Vtemp3917[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U];
        __Vtemp3917[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U];
        __Vtemp3917[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U];
        __Vtemp3917[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1203,(__Vtemp3917),127);
        __Vtemp3920[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U];
        __Vtemp3920[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U];
        __Vtemp3920[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U];
        __Vtemp3920[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1207,(__Vtemp3920),127);
        __Vtemp3923[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U];
        __Vtemp3923[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U];
        __Vtemp3923[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U];
        __Vtemp3923[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1211,(__Vtemp3923),127);
        __Vtemp3926[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U];
        __Vtemp3926[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U];
        __Vtemp3926[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U];
        __Vtemp3926[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1215,(__Vtemp3926),127);
        __Vtemp3929[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U];
        __Vtemp3929[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U];
        __Vtemp3929[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U];
        __Vtemp3929[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1219,(__Vtemp3929),127);
        __Vtemp3932[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U];
        __Vtemp3932[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U];
        __Vtemp3932[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U];
        __Vtemp3932[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1223,(__Vtemp3932),127);
        __Vtemp3935[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U];
        __Vtemp3935[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U];
        __Vtemp3935[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U];
        __Vtemp3935[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1227,(__Vtemp3935),127);
        __Vtemp3938[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U];
        __Vtemp3938[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U];
        __Vtemp3938[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U];
        __Vtemp3938[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1231,(__Vtemp3938),127);
        __Vtemp3941[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U];
        __Vtemp3941[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U];
        __Vtemp3941[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U];
        __Vtemp3941[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1235,(__Vtemp3941),127);
        __Vtemp3944[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U];
        __Vtemp3944[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U];
        __Vtemp3944[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U];
        __Vtemp3944[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1239,(__Vtemp3944),127);
        __Vtemp3947[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U];
        __Vtemp3947[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U];
        __Vtemp3947[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U];
        __Vtemp3947[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1243,(__Vtemp3947),127);
        __Vtemp3950[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U];
        __Vtemp3950[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U];
        __Vtemp3950[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U];
        __Vtemp3950[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1247,(__Vtemp3950),127);
        __Vtemp3953[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U];
        __Vtemp3953[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U];
        __Vtemp3953[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U];
        __Vtemp3953[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1251,(__Vtemp3953),127);
        __Vtemp3956[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U];
        __Vtemp3956[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U];
        __Vtemp3956[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U];
        __Vtemp3956[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1255,(__Vtemp3956),127);
        __Vtemp3959[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U];
        __Vtemp3959[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U];
        __Vtemp3959[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U];
        __Vtemp3959[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1259,(__Vtemp3959),127);
        __Vtemp3962[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U];
        __Vtemp3962[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U];
        __Vtemp3962[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U];
        __Vtemp3962[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1263,(__Vtemp3962),127);
        __Vtemp3965[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U];
        __Vtemp3965[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U];
        __Vtemp3965[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U];
        __Vtemp3965[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1267,(__Vtemp3965),127);
        __Vtemp3968[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U];
        __Vtemp3968[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U];
        __Vtemp3968[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U];
        __Vtemp3968[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1271,(__Vtemp3968),127);
        __Vtemp3971[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U];
        __Vtemp3971[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U];
        __Vtemp3971[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U];
        __Vtemp3971[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1275,(__Vtemp3971),127);
        __Vtemp3974[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U];
        __Vtemp3974[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U];
        __Vtemp3974[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U];
        __Vtemp3974[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1279,(__Vtemp3974),127);
        __Vtemp3993[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
                             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                            << 1U) 
                                           & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U]));
        __Vtemp3993[1U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U] 
                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                              << 1U))) 
                            | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U]));
        __Vtemp3993[2U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U] 
                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                              << 1U))) 
                            | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U]));
        __Vtemp3993[3U] = (0x7fffffffU & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[3U] 
                                            & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                >> 0x1fU) 
                                               | (0x7ffffffeU 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                                     << 1U)))) 
                                           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                >> 0x1fU) 
                                               | (0x7ffffffeU 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                                     << 1U))) 
                                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[3U])) 
                                          | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[3U] 
                                             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[3U])));
        tracep->fullWData(oldp+1283,(__Vtemp3993),127);
        __Vtemp4016[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                              << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U]) 
                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                               & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                  << 1U))) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U]) 
                                              << 1U));
        __Vtemp4016[1U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                            << 1U)) 
                             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U]) 
                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U] 
                               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                                << 1U)))) 
                           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                             << 1U)) 
                              & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                               << 1U))));
        __Vtemp4016[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                            << 1U)) 
                             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U]) 
                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U] 
                               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                                << 1U)))) 
                           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                             << 1U)) 
                              & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                               << 1U))));
        __Vtemp4016[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                               >> 0x1fU) | (0x7ffffffeU 
                                            & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                               << 1U))) 
                             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[3U]) 
                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[3U] 
                               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                   >> 0x1fU) | (0x7ffffffeU 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                                   << 1U))))) 
                           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                                << 1U))) 
                              & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                  >> 0x1fU) | (0x7ffffffeU 
                                               & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                                  << 1U)))));
        tracep->fullWData(oldp+1287,(__Vtemp4016),127);
        __Vtemp4035[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
                             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                            << 1U) 
                                           & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U]));
        __Vtemp4035[1U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U] 
                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                              << 1U))) 
                            | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U]));
        __Vtemp4035[2U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U] 
                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                              << 1U))) 
                            | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U]));
        __Vtemp4035[3U] = (0x7fffffffU & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[3U] 
                                            & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                >> 0x1fU) 
                                               | (0x7ffffffeU 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                                     << 1U)))) 
                                           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                >> 0x1fU) 
                                               | (0x7ffffffeU 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                                     << 1U))) 
                                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[3U])) 
                                          | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[3U] 
                                             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[3U])));
        tracep->fullWData(oldp+1291,(__Vtemp4035),127);
        __Vtemp4058[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                              << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U]) 
                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                               & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                  << 1U))) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U]) 
                                              << 1U));
        __Vtemp4058[1U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                            << 1U)) 
                             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U]) 
                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U] 
                               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                                << 1U)))) 
                           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                             << 1U)) 
                              & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                               << 1U))));
        __Vtemp4058[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                            << 1U)) 
                             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U]) 
                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U] 
                               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                                << 1U)))) 
                           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                             << 1U)) 
                              & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                               << 1U))));
        __Vtemp4058[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                               >> 0x1fU) | (0x7ffffffeU 
                                            & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                               << 1U))) 
                             & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[3U]) 
                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[3U] 
                               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                   >> 0x1fU) | (0x7ffffffeU 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                                   << 1U))))) 
                           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                                << 1U))) 
                              & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                  >> 0x1fU) | (0x7ffffffeU 
                                               & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                                  << 1U)))));
        tracep->fullWData(oldp+1295,(__Vtemp4058),127);
        __Vtemp4061[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U];
        __Vtemp4061[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U];
        __Vtemp4061[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U];
        __Vtemp4061[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1299,(__Vtemp4061),127);
        __Vtemp4064[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U];
        __Vtemp4064[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U];
        __Vtemp4064[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U];
        __Vtemp4064[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1303,(__Vtemp4064),127);
        __Vtemp4067[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U];
        __Vtemp4067[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U];
        __Vtemp4067[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U];
        __Vtemp4067[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1307,(__Vtemp4067),127);
        __Vtemp4070[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U];
        __Vtemp4070[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U];
        __Vtemp4070[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U];
        __Vtemp4070[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1311,(__Vtemp4070),127);
        __Vtemp4073[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U];
        __Vtemp4073[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U];
        __Vtemp4073[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U];
        __Vtemp4073[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1315,(__Vtemp4073),127);
        __Vtemp4096[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                           << 1U)) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U]));
        __Vtemp4096[1U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                              << 1U))) 
                            | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                                << 1U)))) 
                           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                             << 1U)) 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U]));
        __Vtemp4096[2U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                              << 1U))) 
                            | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                                << 1U)))) 
                           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                             << 1U)) 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U]));
        __Vtemp4096[3U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                 >> 0x1fU) | (0x7ffffffeU 
                                              & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                                 << 1U)))) 
                            | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                 >> 0x1fU) | (0x7ffffffeU 
                                              & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                                 << 1U))) 
                               & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                   >> 0x1fU) | (0x7ffffffeU 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                                   << 1U))))) 
                           | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                                << 1U))) 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U]));
        tracep->fullWData(oldp+1319,(__Vtemp4096),127);
        tracep->fullCData(oldp+1323,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state),2);
        tracep->fullWData(oldp+1324,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1),128);
        tracep->fullWData(oldp+1328,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in2),65);
        tracep->fullBit(oldp+1331,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_neg));
        tracep->fullBit(oldp+1332,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_neg));
        __Vtemp4099[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U] 
                            << 1U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U] 
                                      >> 0x1fU));
        __Vtemp4099[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U] 
                            << 1U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U] 
                                      >> 0x1fU));
        __Vtemp4099[2U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U] 
                           >> 0x1fU);
        tracep->fullWData(oldp+1333,(__Vtemp4099),65);
        tracep->fullWData(oldp+1336,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value),65);
        tracep->fullCData(oldp+1339,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__cnt),6);
        tracep->fullQData(oldp+1340,(((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div)
                                       ? ((1U & (IData)(
                                                        (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1 
                                                         >> 0x3fU)))
                                           ? (1ULL 
                                              + (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1))
                                           : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1)
                                       : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1)),64);
        tracep->fullQData(oldp+1342,(((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div)
                                       ? ((1U & (IData)(
                                                        (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2 
                                                         >> 0x3fU)))
                                           ? (1ULL 
                                              + (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2))
                                           : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2)
                                       : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2)),64);
        tracep->fullQData(oldp+1344,((0x7fffffffffffffffULL 
                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_out)),63);
        __Vtemp4102[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U];
        __Vtemp4102[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U];
        __Vtemp4102[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U];
        __Vtemp4102[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U]);
        tracep->fullWData(oldp+1346,(__Vtemp4102),127);
        tracep->fullQData(oldp+1350,((0x7fffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U]))))),63);
        __Vtemp4103[0U] = (IData)((0x7fffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U])))));
        __Vtemp4103[1U] = (((IData)((((QData)((IData)(
                                                      vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[0U])))) 
                            << 0x1fU) | (IData)(((0x7fffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U])))) 
                                                 >> 0x20U)));
        __Vtemp4103[2U] = (((IData)((((QData)((IData)(
                                                      vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[0U])))) 
                            >> 1U) | ((IData)(((((QData)((IData)(
                                                                 vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[0U]))) 
                                               >> 0x20U)) 
                                      << 0x1fU));
        __Vtemp4103[3U] = ((IData)(((((QData)((IData)(
                                                      vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[0U]))) 
                                    >> 0x20U)) >> 1U);
        tracep->fullWData(oldp+1352,(__Vtemp4103),127);
        tracep->fullBit(oldp+1356,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid));
        tracep->fullIData(oldp+1357,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_pc),32);
        tracep->fullIData(oldp+1358,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_inst),32);
        tracep->fullCData(oldp+1359,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code),2);
        tracep->fullCData(oldp+1360,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size),2);
        tracep->fullCData(oldp+1361,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mdu_code),4);
        tracep->fullBit(oldp+1362,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en));
        tracep->fullCData(oldp+1363,(vlSelf->Core__DOT__mem__DOT__waddr),5);
        tracep->fullBit(oldp+1364,(vlSelf->Core__DOT__mem__DOT__wen));
        tracep->fullQData(oldp+1365,(vlSelf->Core__DOT__mem__DOT__wdata),64);
        tracep->fullIData(oldp+1367,(vlSelf->Core__DOT__mem__DOT__reg_mem_addr),32);
        tracep->fullBit(oldp+1368,(vlSelf->Core__DOT__mem__DOT__mdu_valid));
        tracep->fullBit(oldp+1369,(vlSelf->Core__DOT__mem__DOT__is_load));
        tracep->fullBit(oldp+1370,((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))));
        tracep->fullCData(oldp+1371,((7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out))),3);
        tracep->fullCData(oldp+1372,((7U & vlSelf->Core__DOT__mem__DOT__reg_mem_addr)),3);
        tracep->fullCData(oldp+1373,(((7U == (7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
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
        tracep->fullCData(oldp+1374,(((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                       ? 0xffU : ((2U 
                                                   == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                   ? 0xfU
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                    ? 3U
                                                    : 1U)))),8);
        tracep->fullIData(oldp+1375,(vlSelf->Core__DOT__wb_dpi__DOT__inst1),32);
        tracep->fullIData(oldp+1376,(vlSelf->Core__DOT__wb_dpi__DOT__pc1),32);
        tracep->fullBit(oldp+1377,(((~ ((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis) 
                                        | (IData)(vlSelf->Core__DOT__decode__DOT__stall))) 
                                    & (IData)(vlSelf->Core__DOT__decode__DOT__inst_valid))));
        tracep->fullBit(oldp+1378,(((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
                                    & ((IData)(vlSelf->Core__DOT__decode__DOT__inst_valid) 
                                       & (IData)(vlSelf->Core__DOT__decode__DOT__c0_3)))));
        tracep->fullQData(oldp+1379,(((0U != (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU)))
                                       ? ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard)
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
                                       : 0ULL)),64);
        tracep->fullQData(oldp+1381,(((0U != (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))
                                       ? ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard)
                                           ? vlSelf->Core__DOT__execute__DOT__alu_io_alu_out
                                           : ((IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard)
                                               ? vlSelf->Core__DOT__mem_io_mem_rd_data
                                               : ((
                                                   ((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
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
        tracep->fullBit(oldp+1383,(((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                      | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                     & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                                    & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)))));
        tracep->fullBit(oldp+1384,((((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                     & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                                    & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)))));
        tracep->fullBit(oldp+1385,(((~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)) 
                                    & ((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                         | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                        & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                                       & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall))))));
        tracep->fullBit(oldp+1386,(((~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)) 
                                    & (((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                        & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                                       & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall))))));
        tracep->fullIData(oldp+1387,(((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)
                                       ? vlSelf->Core__DOT__execute_io_jmp_packet_o_jmp_npc
                                       : 0U)),32);
        tracep->fullQData(oldp+1388,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                       ? vlSelf->Core__DOT__mem__DOT___ld_data_u_T_9
                                       : 0ULL)),64);
        tracep->fullQData(oldp+1390,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                       ? ((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                           ? vlSelf->Core__DOT__mem__DOT___ld_data_u_T_9
                                           : 0ULL) : 
                                      ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                        ? vlSelf->Core__DOT__mem__DOT__ld_data
                                        : 0ULL))),64);
        tracep->fullIData(oldp+1392,(vlSelf->Core__DOT__fetch_io_imem_req_bits_araddr),32);
        tracep->fullBit(oldp+1393,((1U & (~ (IData)(vlSelf->Core__DOT__decode__DOT__stall)))));
        tracep->fullBit(oldp+1394,(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis));
        tracep->fullBit(oldp+1395,((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)))));
        tracep->fullQData(oldp+1396,(vlSelf->Core__DOT__mem_io_mem_rd_data),64);
        tracep->fullBit(oldp+1398,(vlSelf->Core__DOT__fetch__DOT__stall));
        tracep->fullBit(oldp+1399,(vlSelf->Core__DOT__decode__DOT__stall));
        tracep->fullBit(oldp+1400,(vlSelf->Core__DOT__execute__DOT__mdu_io_mdu_valid));
        tracep->fullBit(oldp+1401,(vlSelf->Core__DOT__mem__DOT__stall));
        tracep->fullBit(oldp+1402,(vlSelf->Core__DOT__mem__DOT__req_wait));
        tracep->fullQData(oldp+1403,(vlSelf->Core__DOT__mem__DOT__ld_data_raw),64);
        tracep->fullQData(oldp+1405,(((1U & (IData)(
                                                    (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                     >> 7U)))
                                       ? 0xffffffffffffffULL
                                       : 0ULL)),56);
        tracep->fullCData(oldp+1407,((0xffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),8);
        tracep->fullQData(oldp+1408,(((1U & (IData)(
                                                    (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                     >> 0xfU)))
                                       ? 0xffffffffffffULL
                                       : 0ULL)),48);
        tracep->fullSData(oldp+1410,((0xffffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),16);
        tracep->fullIData(oldp+1411,(((1U & (IData)(
                                                    (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                     >> 0x1fU)))
                                       ? 0xffffffffU
                                       : 0U)),32);
        tracep->fullIData(oldp+1412,((IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)),32);
        tracep->fullQData(oldp+1413,(vlSelf->Core__DOT__mem__DOT__ld_data),64);
        tracep->fullBit(oldp+1415,(vlSelf->clock));
        tracep->fullBit(oldp+1416,(vlSelf->reset));
        tracep->fullBit(oldp+1417,(vlSelf->io_imem_req_ready));
        tracep->fullBit(oldp+1418,(vlSelf->io_imem_req_valid));
        tracep->fullIData(oldp+1419,(vlSelf->io_imem_req_bits_raddr),32);
        tracep->fullIData(oldp+1420,(vlSelf->io_imem_req_bits_waddr),32);
        tracep->fullQData(oldp+1421,(vlSelf->io_imem_req_bits_wdata),64);
        tracep->fullBit(oldp+1423,(vlSelf->io_imem_req_bits_ren));
        tracep->fullBit(oldp+1424,(vlSelf->io_imem_req_bits_wen));
        tracep->fullCData(oldp+1425,(vlSelf->io_imem_req_bits_wmask),8);
        tracep->fullBit(oldp+1426,(vlSelf->io_imem_resp_ready));
        tracep->fullBit(oldp+1427,(vlSelf->io_imem_resp_valid));
        tracep->fullQData(oldp+1428,(vlSelf->io_imem_resp_bits_rdata),64);
        tracep->fullBit(oldp+1430,(vlSelf->io_imem_resp_bits_read_ok));
        tracep->fullBit(oldp+1431,(vlSelf->io_imem_resp_bits_write_ok));
        tracep->fullBit(oldp+1432,(vlSelf->io_dmem_req_ready));
        tracep->fullBit(oldp+1433,(vlSelf->io_dmem_req_valid));
        tracep->fullIData(oldp+1434,(vlSelf->io_dmem_req_bits_raddr),32);
        tracep->fullIData(oldp+1435,(vlSelf->io_dmem_req_bits_waddr),32);
        tracep->fullQData(oldp+1436,(vlSelf->io_dmem_req_bits_wdata),64);
        tracep->fullBit(oldp+1438,(vlSelf->io_dmem_req_bits_ren));
        tracep->fullBit(oldp+1439,(vlSelf->io_dmem_req_bits_wen));
        tracep->fullCData(oldp+1440,(vlSelf->io_dmem_req_bits_wmask),8);
        tracep->fullBit(oldp+1441,(vlSelf->io_dmem_resp_ready));
        tracep->fullBit(oldp+1442,(vlSelf->io_dmem_resp_valid));
        tracep->fullQData(oldp+1443,(vlSelf->io_dmem_resp_bits_rdata),64);
        tracep->fullBit(oldp+1445,(vlSelf->io_dmem_resp_bits_read_ok));
        tracep->fullBit(oldp+1446,(vlSelf->io_dmem_resp_bits_write_ok));
        tracep->fullIData(oldp+1447,(vlSelf->io_commit_pc),32);
        tracep->fullQData(oldp+1448,(vlSelf->io_regs_out_0),64);
        tracep->fullQData(oldp+1450,(vlSelf->io_regs_out_1),64);
        tracep->fullQData(oldp+1452,(vlSelf->io_regs_out_2),64);
        tracep->fullQData(oldp+1454,(vlSelf->io_regs_out_3),64);
        tracep->fullQData(oldp+1456,(vlSelf->io_regs_out_4),64);
        tracep->fullQData(oldp+1458,(vlSelf->io_regs_out_5),64);
        tracep->fullQData(oldp+1460,(vlSelf->io_regs_out_6),64);
        tracep->fullQData(oldp+1462,(vlSelf->io_regs_out_7),64);
        tracep->fullQData(oldp+1464,(vlSelf->io_regs_out_8),64);
        tracep->fullQData(oldp+1466,(vlSelf->io_regs_out_9),64);
        tracep->fullQData(oldp+1468,(vlSelf->io_regs_out_10),64);
        tracep->fullQData(oldp+1470,(vlSelf->io_regs_out_11),64);
        tracep->fullQData(oldp+1472,(vlSelf->io_regs_out_12),64);
        tracep->fullQData(oldp+1474,(vlSelf->io_regs_out_13),64);
        tracep->fullQData(oldp+1476,(vlSelf->io_regs_out_14),64);
        tracep->fullQData(oldp+1478,(vlSelf->io_regs_out_15),64);
        tracep->fullQData(oldp+1480,(vlSelf->io_regs_out_16),64);
        tracep->fullQData(oldp+1482,(vlSelf->io_regs_out_17),64);
        tracep->fullQData(oldp+1484,(vlSelf->io_regs_out_18),64);
        tracep->fullQData(oldp+1486,(vlSelf->io_regs_out_19),64);
        tracep->fullQData(oldp+1488,(vlSelf->io_regs_out_20),64);
        tracep->fullQData(oldp+1490,(vlSelf->io_regs_out_21),64);
        tracep->fullQData(oldp+1492,(vlSelf->io_regs_out_22),64);
        tracep->fullQData(oldp+1494,(vlSelf->io_regs_out_23),64);
        tracep->fullQData(oldp+1496,(vlSelf->io_regs_out_24),64);
        tracep->fullQData(oldp+1498,(vlSelf->io_regs_out_25),64);
        tracep->fullQData(oldp+1500,(vlSelf->io_regs_out_26),64);
        tracep->fullQData(oldp+1502,(vlSelf->io_regs_out_27),64);
        tracep->fullQData(oldp+1504,(vlSelf->io_regs_out_28),64);
        tracep->fullQData(oldp+1506,(vlSelf->io_regs_out_29),64);
        tracep->fullQData(oldp+1508,(vlSelf->io_regs_out_30),64);
        tracep->fullQData(oldp+1510,(vlSelf->io_regs_out_31),64);
        tracep->fullBit(oldp+1512,(vlSelf->io_commit));
        tracep->fullIData(oldp+1513,((IData)(vlSelf->io_imem_resp_bits_rdata)),32);
        tracep->fullIData(oldp+1514,(((IData)(vlSelf->io_imem_resp_bits_read_ok)
                                       ? vlSelf->Core__DOT__fetch__DOT__inst_out
                                       : 0U)),32);
        tracep->fullBit(oldp+1515,(((IData)(vlSelf->io_imem_resp_bits_read_ok) 
                                    & (IData)(vlSelf->Core__DOT__fetch__DOT__valid_out))));
        tracep->fullBit(oldp+1516,((1U & (~ (IData)(vlSelf->io_imem_resp_bits_read_ok)))));
        tracep->fullBit(oldp+1517,(1U));
    }
}
