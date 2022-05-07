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
        tracep->declBit(c+1417,"clock", false,-1);
        tracep->declBit(c+1418,"reset", false,-1);
        tracep->declBus(c+1419,"io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+1420,"io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+1421,"io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+1423,"io_imem_ren", false,-1);
        tracep->declBit(c+1424,"io_imem_wen", false,-1);
        tracep->declBus(c+1425,"io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+1426,"io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+1428,"io_imem_read_ok", false,-1);
        tracep->declBit(c+1429,"io_imem_write_ok", false,-1);
        tracep->declBus(c+1430,"io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+1431,"io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+1432,"io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+1434,"io_dmem_ren", false,-1);
        tracep->declBit(c+1435,"io_dmem_wen", false,-1);
        tracep->declBus(c+1436,"io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+1437,"io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+1439,"io_dmem_read_ok", false,-1);
        tracep->declBit(c+1440,"io_dmem_write_ok", false,-1);
        tracep->declBus(c+1441,"io_commit_pc", false,-1, 31,0);
        tracep->declQuad(c+1442,"io_regs_out_0", false,-1, 63,0);
        tracep->declQuad(c+1444,"io_regs_out_1", false,-1, 63,0);
        tracep->declQuad(c+1446,"io_regs_out_2", false,-1, 63,0);
        tracep->declQuad(c+1448,"io_regs_out_3", false,-1, 63,0);
        tracep->declQuad(c+1450,"io_regs_out_4", false,-1, 63,0);
        tracep->declQuad(c+1452,"io_regs_out_5", false,-1, 63,0);
        tracep->declQuad(c+1454,"io_regs_out_6", false,-1, 63,0);
        tracep->declQuad(c+1456,"io_regs_out_7", false,-1, 63,0);
        tracep->declQuad(c+1458,"io_regs_out_8", false,-1, 63,0);
        tracep->declQuad(c+1460,"io_regs_out_9", false,-1, 63,0);
        tracep->declQuad(c+1462,"io_regs_out_10", false,-1, 63,0);
        tracep->declQuad(c+1464,"io_regs_out_11", false,-1, 63,0);
        tracep->declQuad(c+1466,"io_regs_out_12", false,-1, 63,0);
        tracep->declQuad(c+1468,"io_regs_out_13", false,-1, 63,0);
        tracep->declQuad(c+1470,"io_regs_out_14", false,-1, 63,0);
        tracep->declQuad(c+1472,"io_regs_out_15", false,-1, 63,0);
        tracep->declQuad(c+1474,"io_regs_out_16", false,-1, 63,0);
        tracep->declQuad(c+1476,"io_regs_out_17", false,-1, 63,0);
        tracep->declQuad(c+1478,"io_regs_out_18", false,-1, 63,0);
        tracep->declQuad(c+1480,"io_regs_out_19", false,-1, 63,0);
        tracep->declQuad(c+1482,"io_regs_out_20", false,-1, 63,0);
        tracep->declQuad(c+1484,"io_regs_out_21", false,-1, 63,0);
        tracep->declQuad(c+1486,"io_regs_out_22", false,-1, 63,0);
        tracep->declQuad(c+1488,"io_regs_out_23", false,-1, 63,0);
        tracep->declQuad(c+1490,"io_regs_out_24", false,-1, 63,0);
        tracep->declQuad(c+1492,"io_regs_out_25", false,-1, 63,0);
        tracep->declQuad(c+1494,"io_regs_out_26", false,-1, 63,0);
        tracep->declQuad(c+1496,"io_regs_out_27", false,-1, 63,0);
        tracep->declQuad(c+1498,"io_regs_out_28", false,-1, 63,0);
        tracep->declQuad(c+1500,"io_regs_out_29", false,-1, 63,0);
        tracep->declQuad(c+1502,"io_regs_out_30", false,-1, 63,0);
        tracep->declQuad(c+1504,"io_regs_out_31", false,-1, 63,0);
        tracep->declQuad(c+1506,"io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+1508,"io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+1510,"io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+1512,"io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+1514,"io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+1516,"io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+1518,"io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+1520,"io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+1522,"io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+1524,"io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+1526,"io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+1528,"io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+1530,"io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+1532,"io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+1534,"io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+1536,"io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+1538,"io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+1540,"io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+1542,"io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+1544,"io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+1546,"io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+1548,"io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+1550,"io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+1552,"io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+1554,"io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+1556,"io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+1558,"io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+1560,"io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+1562,"io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+1564,"io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+1566,"io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+1568,"io_regs_in_31", false,-1, 63,0);
        tracep->declBus(c+1570,"io_pc_in", false,-1, 31,0);
        tracep->declBit(c+1571,"io_write_regs", false,-1);
        tracep->declBit(c+1572,"io_commit", false,-1);
        tracep->declBit(c+1417,"Core clock", false,-1);
        tracep->declBit(c+1418,"Core reset", false,-1);
        tracep->declBus(c+1419,"Core io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+1420,"Core io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+1421,"Core io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+1423,"Core io_imem_ren", false,-1);
        tracep->declBit(c+1424,"Core io_imem_wen", false,-1);
        tracep->declBus(c+1425,"Core io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+1426,"Core io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+1428,"Core io_imem_read_ok", false,-1);
        tracep->declBit(c+1429,"Core io_imem_write_ok", false,-1);
        tracep->declBus(c+1430,"Core io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+1431,"Core io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+1432,"Core io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+1434,"Core io_dmem_ren", false,-1);
        tracep->declBit(c+1435,"Core io_dmem_wen", false,-1);
        tracep->declBus(c+1436,"Core io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+1437,"Core io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+1439,"Core io_dmem_read_ok", false,-1);
        tracep->declBit(c+1440,"Core io_dmem_write_ok", false,-1);
        tracep->declBus(c+1441,"Core io_commit_pc", false,-1, 31,0);
        tracep->declQuad(c+1442,"Core io_regs_out_0", false,-1, 63,0);
        tracep->declQuad(c+1444,"Core io_regs_out_1", false,-1, 63,0);
        tracep->declQuad(c+1446,"Core io_regs_out_2", false,-1, 63,0);
        tracep->declQuad(c+1448,"Core io_regs_out_3", false,-1, 63,0);
        tracep->declQuad(c+1450,"Core io_regs_out_4", false,-1, 63,0);
        tracep->declQuad(c+1452,"Core io_regs_out_5", false,-1, 63,0);
        tracep->declQuad(c+1454,"Core io_regs_out_6", false,-1, 63,0);
        tracep->declQuad(c+1456,"Core io_regs_out_7", false,-1, 63,0);
        tracep->declQuad(c+1458,"Core io_regs_out_8", false,-1, 63,0);
        tracep->declQuad(c+1460,"Core io_regs_out_9", false,-1, 63,0);
        tracep->declQuad(c+1462,"Core io_regs_out_10", false,-1, 63,0);
        tracep->declQuad(c+1464,"Core io_regs_out_11", false,-1, 63,0);
        tracep->declQuad(c+1466,"Core io_regs_out_12", false,-1, 63,0);
        tracep->declQuad(c+1468,"Core io_regs_out_13", false,-1, 63,0);
        tracep->declQuad(c+1470,"Core io_regs_out_14", false,-1, 63,0);
        tracep->declQuad(c+1472,"Core io_regs_out_15", false,-1, 63,0);
        tracep->declQuad(c+1474,"Core io_regs_out_16", false,-1, 63,0);
        tracep->declQuad(c+1476,"Core io_regs_out_17", false,-1, 63,0);
        tracep->declQuad(c+1478,"Core io_regs_out_18", false,-1, 63,0);
        tracep->declQuad(c+1480,"Core io_regs_out_19", false,-1, 63,0);
        tracep->declQuad(c+1482,"Core io_regs_out_20", false,-1, 63,0);
        tracep->declQuad(c+1484,"Core io_regs_out_21", false,-1, 63,0);
        tracep->declQuad(c+1486,"Core io_regs_out_22", false,-1, 63,0);
        tracep->declQuad(c+1488,"Core io_regs_out_23", false,-1, 63,0);
        tracep->declQuad(c+1490,"Core io_regs_out_24", false,-1, 63,0);
        tracep->declQuad(c+1492,"Core io_regs_out_25", false,-1, 63,0);
        tracep->declQuad(c+1494,"Core io_regs_out_26", false,-1, 63,0);
        tracep->declQuad(c+1496,"Core io_regs_out_27", false,-1, 63,0);
        tracep->declQuad(c+1498,"Core io_regs_out_28", false,-1, 63,0);
        tracep->declQuad(c+1500,"Core io_regs_out_29", false,-1, 63,0);
        tracep->declQuad(c+1502,"Core io_regs_out_30", false,-1, 63,0);
        tracep->declQuad(c+1504,"Core io_regs_out_31", false,-1, 63,0);
        tracep->declQuad(c+1506,"Core io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+1508,"Core io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+1510,"Core io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+1512,"Core io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+1514,"Core io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+1516,"Core io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+1518,"Core io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+1520,"Core io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+1522,"Core io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+1524,"Core io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+1526,"Core io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+1528,"Core io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+1530,"Core io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+1532,"Core io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+1534,"Core io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+1536,"Core io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+1538,"Core io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+1540,"Core io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+1542,"Core io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+1544,"Core io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+1546,"Core io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+1548,"Core io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+1550,"Core io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+1552,"Core io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+1554,"Core io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+1556,"Core io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+1558,"Core io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+1560,"Core io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+1562,"Core io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+1564,"Core io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+1566,"Core io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+1568,"Core io_regs_in_31", false,-1, 63,0);
        tracep->declBus(c+1570,"Core io_pc_in", false,-1, 31,0);
        tracep->declBit(c+1571,"Core io_write_regs", false,-1);
        tracep->declBit(c+1572,"Core io_commit", false,-1);
        tracep->declBit(c+1417,"Core fetch_clock", false,-1);
        tracep->declBit(c+1418,"Core fetch_reset", false,-1);
        tracep->declBus(c+1,"Core fetch_io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+1573,"Core fetch_io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+1428,"Core fetch_io_imem_resp_bits_rvalid", false,-1);
        tracep->declBit(c+1395,"Core fetch_io_out_ready", false,-1);
        tracep->declBit(c+1577,"Core fetch_io_out_valid", false,-1);
        tracep->declBus(c+2,"Core fetch_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1574,"Core fetch_io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1575,"Core fetch_io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+1396,"Core fetch_io_if_flush", false,-1);
        tracep->declBus(c+3,"Core fetch_io_p_npc", false,-1, 31,0);
        tracep->declBus(c+4,"Core fetch_io_jmp_packet_i_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+1396,"Core fetch_io_jmp_packet_i_mis", false,-1);
        tracep->declBit(c+1571,"Core fetch_io_write_regs", false,-1);
        tracep->declBus(c+1570,"Core fetch_io_input_pc", false,-1, 31,0);
        tracep->declBit(c+1417,"Core decode_clock", false,-1);
        tracep->declBit(c+1418,"Core decode_reset", false,-1);
        tracep->declBit(c+1395,"Core decode_io_in_ready", false,-1);
        tracep->declBus(c+2,"Core decode_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1574,"Core decode_io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1575,"Core decode_io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+1397,"Core decode_io_out_ready", false,-1);
        tracep->declBit(c+1577,"Core decode_io_out_valid", false,-1);
        tracep->declBit(c+1383,"Core decode_io_out_bits_valid", false,-1);
        tracep->declBus(c+5,"Core decode_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+6,"Core decode_io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+7,"Core decode_io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+8,"Core decode_io_out_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+9,"Core decode_io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+10,"Core decode_io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+11,"Core decode_io_out_bits_mdu_code", false,-1, 3,0);
        tracep->declBit(c+12,"Core decode_io_out_bits_w_type", false,-1);
        tracep->declBus(c+13,"Core decode_io_out_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+14,"Core decode_io_out_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+15,"Core decode_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+1384,"Core decode_io_out_bits_rd_en", false,-1);
        tracep->declBus(c+16,"Core decode_io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+1396,"Core decode_io_id_flush", false,-1);
        tracep->declBit(c+17,"Core decode_io_ren1", false,-1);
        tracep->declBus(c+18,"Core decode_io_raddr1", false,-1, 4,0);
        tracep->declBit(c+19,"Core decode_io_ren2", false,-1);
        tracep->declBus(c+20,"Core decode_io_raddr2", false,-1, 4,0);
        tracep->declBit(c+21,"Core decode_io_is_ebreak", false,-1);
        tracep->declQuad(c+1385,"Core decode_io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+1387,"Core decode_io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+22,"Core decode_io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+24,"Core decode_io_rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+3,"Core decode_io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+26,"Core decode_io_p_npc_o", false,-1, 31,0);
        tracep->declBit(c+27,"Core decode_io_decode_rf_stall_i", false,-1);
        tracep->declBit(c+1417,"Core regfile_clock", false,-1);
        tracep->declBit(c+1418,"Core regfile_reset", false,-1);
        tracep->declBit(c+17,"Core regfile_io_ren1", false,-1);
        tracep->declBus(c+18,"Core regfile_io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+1385,"Core regfile_io_rdata1", false,-1, 63,0);
        tracep->declBit(c+19,"Core regfile_io_ren2", false,-1);
        tracep->declBus(c+20,"Core regfile_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+1387,"Core regfile_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+28,"Core regfile_io_wen", false,-1);
        tracep->declBus(c+29,"Core regfile_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+30,"Core regfile_io_wdata", false,-1, 63,0);
        tracep->declQuad(c+32,"Core regfile_io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+34,"Core regfile_io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+36,"Core regfile_io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+38,"Core regfile_io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+40,"Core regfile_io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+42,"Core regfile_io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+44,"Core regfile_io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+46,"Core regfile_io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+48,"Core regfile_io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+50,"Core regfile_io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+52,"Core regfile_io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+54,"Core regfile_io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+56,"Core regfile_io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+58,"Core regfile_io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+60,"Core regfile_io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+62,"Core regfile_io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+64,"Core regfile_io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+66,"Core regfile_io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+68,"Core regfile_io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+70,"Core regfile_io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+72,"Core regfile_io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+74,"Core regfile_io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+76,"Core regfile_io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+78,"Core regfile_io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+80,"Core regfile_io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+82,"Core regfile_io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+84,"Core regfile_io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+86,"Core regfile_io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+88,"Core regfile_io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+90,"Core regfile_io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+92,"Core regfile_io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+94,"Core regfile_io_regs_31", false,-1, 63,0);
        tracep->declBit(c+96,"Core regfile_io_ex_rd_en", false,-1);
        tracep->declBus(c+97,"Core regfile_io_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+98,"Core regfile_io_ex_rd_data", false,-1, 63,0);
        tracep->declBit(c+100,"Core regfile_io_ex_is_load_i", false,-1);
        tracep->declBit(c+101,"Core regfile_io_ex_is_mdu_i", false,-1);
        tracep->declBit(c+102,"Core regfile_io_mem_is_load_i", false,-1);
        tracep->declBit(c+103,"Core regfile_io_mem_rd_en", false,-1);
        tracep->declBus(c+104,"Core regfile_io_mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1398,"Core regfile_io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+27,"Core regfile_io_rf_stall", false,-1);
        tracep->declQuad(c+1506,"Core regfile_io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+1508,"Core regfile_io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+1510,"Core regfile_io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+1512,"Core regfile_io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+1514,"Core regfile_io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+1516,"Core regfile_io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+1518,"Core regfile_io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+1520,"Core regfile_io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+1522,"Core regfile_io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+1524,"Core regfile_io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+1526,"Core regfile_io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+1528,"Core regfile_io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+1530,"Core regfile_io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+1532,"Core regfile_io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+1534,"Core regfile_io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+1536,"Core regfile_io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+1538,"Core regfile_io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+1540,"Core regfile_io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+1542,"Core regfile_io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+1544,"Core regfile_io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+1546,"Core regfile_io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+1548,"Core regfile_io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+1550,"Core regfile_io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+1552,"Core regfile_io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+1554,"Core regfile_io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+1556,"Core regfile_io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+1558,"Core regfile_io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+1560,"Core regfile_io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+1562,"Core regfile_io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+1564,"Core regfile_io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+1566,"Core regfile_io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+1568,"Core regfile_io_regs_in_31", false,-1, 63,0);
        tracep->declBit(c+1571,"Core regfile_io_write_regs", false,-1);
        tracep->declBit(c+1417,"Core execute_clock", false,-1);
        tracep->declBit(c+1418,"Core execute_reset", false,-1);
        tracep->declBit(c+1397,"Core execute_io_in_ready", false,-1);
        tracep->declBit(c+1383,"Core execute_io_in_bits_valid", false,-1);
        tracep->declBus(c+5,"Core execute_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+6,"Core execute_io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+7,"Core execute_io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+8,"Core execute_io_in_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+9,"Core execute_io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+10,"Core execute_io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+11,"Core execute_io_in_bits_mdu_code", false,-1, 3,0);
        tracep->declBit(c+12,"Core execute_io_in_bits_w_type", false,-1);
        tracep->declBus(c+13,"Core execute_io_in_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+14,"Core execute_io_in_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+15,"Core execute_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+1384,"Core execute_io_in_bits_rd_en", false,-1);
        tracep->declBus(c+16,"Core execute_io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+1397,"Core execute_io_out_ready", false,-1);
        tracep->declBit(c+1577,"Core execute_io_out_valid", false,-1);
        tracep->declBit(c+105,"Core execute_io_out_bits_valid", false,-1);
        tracep->declBus(c+106,"Core execute_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+107,"Core execute_io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+108,"Core execute_io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+109,"Core execute_io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+110,"Core execute_io_out_bits_mdu_code", false,-1, 3,0);
        tracep->declBus(c+97,"Core execute_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+111,"Core execute_io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+22,"Core execute_io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+24,"Core execute_io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+98,"Core execute_io_ex_data_o", false,-1, 63,0);
        tracep->declBit(c+21,"Core execute_io_is_ebreak_i", false,-1);
        tracep->declBit(c+112,"Core execute_io_is_ebreak_o", false,-1);
        tracep->declBus(c+113,"Core execute_io_ex_rwaddr_o", false,-1, 31,0);
        tracep->declBit(c+114,"Core execute_io_ex_rvalid_o", false,-1);
        tracep->declBit(c+115,"Core execute_io_ex_wvalid_o", false,-1);
        tracep->declQuad(c+24,"Core execute_io_ex_wdata_o", false,-1, 63,0);
        tracep->declBus(c+109,"Core execute_io_ex_wsize_o", false,-1, 1,0);
        tracep->declQuad(c+116,"Core execute_io_ex_mduout_o", false,-1, 63,0);
        tracep->declBit(c+118,"Core execute_io_ex_mduready_o", false,-1);
        tracep->declBit(c+96,"Core execute_io_ex_rd_en", false,-1);
        tracep->declBus(c+97,"Core execute_io_ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+100,"Core execute_io_ex_is_load", false,-1);
        tracep->declBit(c+101,"Core execute_io_ex_is_mdu", false,-1);
        tracep->declBus(c+26,"Core execute_io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+4,"Core execute_io_jmp_packet_o_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+1396,"Core execute_io_jmp_packet_o_mis", false,-1);
        tracep->declBit(c+1417,"Core mem_clock", false,-1);
        tracep->declBit(c+1418,"Core mem_reset", false,-1);
        tracep->declBit(c+1397,"Core mem_io_in_ready", false,-1);
        tracep->declBit(c+105,"Core mem_io_in_bits_valid", false,-1);
        tracep->declBus(c+106,"Core mem_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+107,"Core mem_io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+108,"Core mem_io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+109,"Core mem_io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+110,"Core mem_io_in_bits_mdu_code", false,-1, 3,0);
        tracep->declBus(c+97,"Core mem_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+111,"Core mem_io_in_bits_rd_en", false,-1);
        tracep->declBit(c+119,"Core mem_io_out_bits_valid", false,-1);
        tracep->declBus(c+120,"Core mem_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+121,"Core mem_io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+98,"Core mem_io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+29,"Core mem_io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+28,"Core mem_io_wen_o", false,-1);
        tracep->declQuad(c+30,"Core mem_io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+112,"Core mem_io_is_ebreak_i", false,-1);
        tracep->declBit(c+122,"Core mem_io_is_ebreak_o", false,-1);
        tracep->declBus(c+113,"Core mem_io_dmem_req_bits_arwaddr", false,-1, 31,0);
        tracep->declBit(c+1389,"Core mem_io_dmem_req_bits_rvalid", false,-1);
        tracep->declBit(c+1390,"Core mem_io_dmem_req_bits_wvalid", false,-1);
        tracep->declQuad(c+123,"Core mem_io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+125,"Core mem_io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declQuad(c+1437,"Core mem_io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1439,"Core mem_io_dmem_resp_bits_rready", false,-1);
        tracep->declBit(c+1440,"Core mem_io_dmem_resp_bits_wready", false,-1);
        tracep->declBus(c+113,"Core mem_io_mem_rwaddr_i", false,-1, 31,0);
        tracep->declBit(c+114,"Core mem_io_mem_rvalid_i", false,-1);
        tracep->declBit(c+115,"Core mem_io_mem_wvalid_i", false,-1);
        tracep->declQuad(c+24,"Core mem_io_mem_wdata_i", false,-1, 63,0);
        tracep->declBus(c+109,"Core mem_io_mem_wsize_i", false,-1, 1,0);
        tracep->declBus(c+113,"Core mem_io_reg_mem_addr_i", false,-1, 31,0);
        tracep->declQuad(c+116,"Core mem_io_mem_mduout_i", false,-1, 63,0);
        tracep->declBit(c+118,"Core mem_io_mem_mduready_i", false,-1);
        tracep->declBit(c+103,"Core mem_io_mem_rd_en", false,-1);
        tracep->declBus(c+104,"Core mem_io_mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1398,"Core mem_io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+102,"Core mem_io_mem_is_load", false,-1);
        tracep->declBit(c+1417,"Core wb_dpi_clk", false,-1);
        tracep->declBus(c+121,"Core wb_dpi_inst", false,-1, 31,0);
        tracep->declBus(c+120,"Core wb_dpi_pc", false,-1, 31,0);
        tracep->declBit(c+122,"Core wb_dpi_ebreak", false,-1);
        tracep->declBus(c+126,"Core io_commit_pc_REG", false,-1, 31,0);
        tracep->declBit(c+127,"Core io_commit_REG", false,-1);
        tracep->declBus(c+128,"Core io_dmem_raddr_hi", false,-1, 28,0);
        tracep->declBit(c+1417,"Core fetch clock", false,-1);
        tracep->declBit(c+1418,"Core fetch reset", false,-1);
        tracep->declBus(c+1,"Core fetch io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+1573,"Core fetch io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+1428,"Core fetch io_imem_resp_bits_rvalid", false,-1);
        tracep->declBit(c+1395,"Core fetch io_out_ready", false,-1);
        tracep->declBit(c+1577,"Core fetch io_out_valid", false,-1);
        tracep->declBus(c+2,"Core fetch io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1574,"Core fetch io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1575,"Core fetch io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+1396,"Core fetch io_if_flush", false,-1);
        tracep->declBus(c+3,"Core fetch io_p_npc", false,-1, 31,0);
        tracep->declBus(c+4,"Core fetch io_jmp_packet_i_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+1396,"Core fetch io_jmp_packet_i_mis", false,-1);
        tracep->declBit(c+1571,"Core fetch io_write_regs", false,-1);
        tracep->declBus(c+1570,"Core fetch io_input_pc", false,-1, 31,0);
        tracep->declBus(c+2,"Core fetch pc_out", false,-1, 31,0);
        tracep->declBus(c+129,"Core fetch inst_out", false,-1, 31,0);
        tracep->declBit(c+130,"Core fetch valid_out", false,-1);
        tracep->declBus(c+3,"Core fetch reg_pnpc", false,-1, 31,0);
        tracep->declBus(c+131,"Core fetch pc", false,-1, 31,0);
        tracep->declBus(c+132,"Core fetch pc_base_hi", false,-1, 29,0);
        tracep->declBus(c+1,"Core fetch pc_base", false,-1, 31,0);
        tracep->declBus(c+133,"Core fetch npc_s", false,-1, 31,0);
        tracep->declBit(c+1576,"Core fetch imem_stall", false,-1);
        tracep->declBit(c+1400,"Core fetch stall", false,-1);
        tracep->declBit(c+1417,"Core decode clock", false,-1);
        tracep->declBit(c+1418,"Core decode reset", false,-1);
        tracep->declBit(c+1395,"Core decode io_in_ready", false,-1);
        tracep->declBus(c+2,"Core decode io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1574,"Core decode io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1575,"Core decode io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+1397,"Core decode io_out_ready", false,-1);
        tracep->declBit(c+1577,"Core decode io_out_valid", false,-1);
        tracep->declBit(c+1383,"Core decode io_out_bits_valid", false,-1);
        tracep->declBus(c+5,"Core decode io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+6,"Core decode io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+7,"Core decode io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+8,"Core decode io_out_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+9,"Core decode io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+10,"Core decode io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+11,"Core decode io_out_bits_mdu_code", false,-1, 3,0);
        tracep->declBit(c+12,"Core decode io_out_bits_w_type", false,-1);
        tracep->declBus(c+13,"Core decode io_out_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+14,"Core decode io_out_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+15,"Core decode io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+1384,"Core decode io_out_bits_rd_en", false,-1);
        tracep->declBus(c+16,"Core decode io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+1396,"Core decode io_id_flush", false,-1);
        tracep->declBit(c+17,"Core decode io_ren1", false,-1);
        tracep->declBus(c+18,"Core decode io_raddr1", false,-1, 4,0);
        tracep->declBit(c+19,"Core decode io_ren2", false,-1);
        tracep->declBus(c+20,"Core decode io_raddr2", false,-1, 4,0);
        tracep->declBit(c+21,"Core decode io_is_ebreak", false,-1);
        tracep->declQuad(c+1385,"Core decode io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+1387,"Core decode io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+22,"Core decode io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+24,"Core decode io_rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+3,"Core decode io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+26,"Core decode io_p_npc_o", false,-1, 31,0);
        tracep->declBit(c+27,"Core decode io_decode_rf_stall_i", false,-1);
        tracep->declBus(c+5,"Core decode pc", false,-1, 31,0);
        tracep->declBus(c+6,"Core decode inst", false,-1, 31,0);
        tracep->declBit(c+134,"Core decode inst_valid", false,-1);
        tracep->declBus(c+26,"Core decode reg_pnpc", false,-1, 31,0);
        tracep->declQuad(c+22,"Core decode rs1_reg", false,-1, 63,0);
        tracep->declQuad(c+24,"Core decode rs2_reg", false,-1, 63,0);
        tracep->declBus(c+9,"Core decode ctrl_4", false,-1, 1,0);
        tracep->declBit(c+12,"Core decode c0_0", false,-1);
        tracep->declBus(c+135,"Core decode c0_1", false,-1, 2,0);
        tracep->declBus(c+14,"Core decode c0_2", false,-1, 2,0);
        tracep->declBit(c+136,"Core decode c0_3", false,-1);
        tracep->declBus(c+137,"Core decode c0_4", false,-1, 2,0);
        tracep->declBit(c+1401,"Core decode stall", false,-1);
        tracep->declBit(c+21,"Core decode io_is_ebreak_REG", false,-1);
        tracep->declBus(c+138,"Core decode imm_i_hi", false,-1, 20,0);
        tracep->declBus(c+139,"Core decode imm_i_lo", false,-1, 10,0);
        tracep->declBus(c+140,"Core decode imm_i", false,-1, 31,0);
        tracep->declBus(c+141,"Core decode imm_s_hi_lo", false,-1, 5,0);
        tracep->declBus(c+142,"Core decode imm_s", false,-1, 31,0);
        tracep->declBus(c+143,"Core decode imm_b_hi_hi_hi", false,-1, 19,0);
        tracep->declBit(c+144,"Core decode imm_b_hi_hi_lo", false,-1);
        tracep->declBus(c+145,"Core decode imm_b_lo_hi", false,-1, 3,0);
        tracep->declBus(c+146,"Core decode imm_b", false,-1, 31,0);
        tracep->declBus(c+147,"Core decode imm_u_hi", false,-1, 19,0);
        tracep->declBus(c+148,"Core decode imm_u", false,-1, 31,0);
        tracep->declBus(c+149,"Core decode imm_j_hi_hi_hi", false,-1, 11,0);
        tracep->declBus(c+150,"Core decode imm_j_hi_hi_lo", false,-1, 7,0);
        tracep->declBit(c+151,"Core decode imm_j_hi_lo", false,-1);
        tracep->declBus(c+152,"Core decode imm_j_lo_hi", false,-1, 9,0);
        tracep->declBus(c+153,"Core decode imm_j", false,-1, 31,0);
        tracep->declBus(c+154,"Core decode imm_shamt_lo_1", false,-1, 5,0);
        tracep->declBus(c+155,"Core decode imm_shamt", false,-1, 31,0);
        tracep->declBus(c+156,"Core decode imm_csr", false,-1, 31,0);
        tracep->declBit(c+1417,"Core regfile clock", false,-1);
        tracep->declBit(c+1418,"Core regfile reset", false,-1);
        tracep->declBit(c+17,"Core regfile io_ren1", false,-1);
        tracep->declBus(c+18,"Core regfile io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+1385,"Core regfile io_rdata1", false,-1, 63,0);
        tracep->declBit(c+19,"Core regfile io_ren2", false,-1);
        tracep->declBus(c+20,"Core regfile io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+1387,"Core regfile io_rdata2", false,-1, 63,0);
        tracep->declBit(c+28,"Core regfile io_wen", false,-1);
        tracep->declBus(c+29,"Core regfile io_waddr", false,-1, 4,0);
        tracep->declQuad(c+30,"Core regfile io_wdata", false,-1, 63,0);
        tracep->declQuad(c+32,"Core regfile io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+34,"Core regfile io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+36,"Core regfile io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+38,"Core regfile io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+40,"Core regfile io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+42,"Core regfile io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+44,"Core regfile io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+46,"Core regfile io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+48,"Core regfile io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+50,"Core regfile io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+52,"Core regfile io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+54,"Core regfile io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+56,"Core regfile io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+58,"Core regfile io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+60,"Core regfile io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+62,"Core regfile io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+64,"Core regfile io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+66,"Core regfile io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+68,"Core regfile io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+70,"Core regfile io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+72,"Core regfile io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+74,"Core regfile io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+76,"Core regfile io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+78,"Core regfile io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+80,"Core regfile io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+82,"Core regfile io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+84,"Core regfile io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+86,"Core regfile io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+88,"Core regfile io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+90,"Core regfile io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+92,"Core regfile io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+94,"Core regfile io_regs_31", false,-1, 63,0);
        tracep->declBit(c+96,"Core regfile io_ex_rd_en", false,-1);
        tracep->declBus(c+97,"Core regfile io_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+98,"Core regfile io_ex_rd_data", false,-1, 63,0);
        tracep->declBit(c+100,"Core regfile io_ex_is_load_i", false,-1);
        tracep->declBit(c+101,"Core regfile io_ex_is_mdu_i", false,-1);
        tracep->declBit(c+102,"Core regfile io_mem_is_load_i", false,-1);
        tracep->declBit(c+103,"Core regfile io_mem_rd_en", false,-1);
        tracep->declBus(c+104,"Core regfile io_mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1398,"Core regfile io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+27,"Core regfile io_rf_stall", false,-1);
        tracep->declQuad(c+1506,"Core regfile io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+1508,"Core regfile io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+1510,"Core regfile io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+1512,"Core regfile io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+1514,"Core regfile io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+1516,"Core regfile io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+1518,"Core regfile io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+1520,"Core regfile io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+1522,"Core regfile io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+1524,"Core regfile io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+1526,"Core regfile io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+1528,"Core regfile io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+1530,"Core regfile io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+1532,"Core regfile io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+1534,"Core regfile io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+1536,"Core regfile io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+1538,"Core regfile io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+1540,"Core regfile io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+1542,"Core regfile io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+1544,"Core regfile io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+1546,"Core regfile io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+1548,"Core regfile io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+1550,"Core regfile io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+1552,"Core regfile io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+1554,"Core regfile io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+1556,"Core regfile io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+1558,"Core regfile io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+1560,"Core regfile io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+1562,"Core regfile io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+1564,"Core regfile io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+1566,"Core regfile io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+1568,"Core regfile io_regs_in_31", false,-1, 63,0);
        tracep->declBit(c+1571,"Core regfile io_write_regs", false,-1);
        tracep->declBit(c+157,"Core regfile ex_rs1_hazard", false,-1);
        tracep->declBit(c+158,"Core regfile ex_rs2_hazard", false,-1);
        tracep->declBit(c+159,"Core regfile mem_rs1_hazard", false,-1);
        tracep->declBit(c+160,"Core regfile mem_rs2_hazard", false,-1);
        tracep->declBit(c+161,"Core regfile wb_rs1_hazard", false,-1);
        tracep->declBit(c+162,"Core regfile wb_rs2_hazard", false,-1);
        tracep->declQuad(c+32,"Core regfile rf_0", false,-1, 63,0);
        tracep->declQuad(c+34,"Core regfile rf_1", false,-1, 63,0);
        tracep->declQuad(c+36,"Core regfile rf_2", false,-1, 63,0);
        tracep->declQuad(c+38,"Core regfile rf_3", false,-1, 63,0);
        tracep->declQuad(c+40,"Core regfile rf_4", false,-1, 63,0);
        tracep->declQuad(c+42,"Core regfile rf_5", false,-1, 63,0);
        tracep->declQuad(c+44,"Core regfile rf_6", false,-1, 63,0);
        tracep->declQuad(c+46,"Core regfile rf_7", false,-1, 63,0);
        tracep->declQuad(c+48,"Core regfile rf_8", false,-1, 63,0);
        tracep->declQuad(c+50,"Core regfile rf_9", false,-1, 63,0);
        tracep->declQuad(c+52,"Core regfile rf_10", false,-1, 63,0);
        tracep->declQuad(c+54,"Core regfile rf_11", false,-1, 63,0);
        tracep->declQuad(c+56,"Core regfile rf_12", false,-1, 63,0);
        tracep->declQuad(c+58,"Core regfile rf_13", false,-1, 63,0);
        tracep->declQuad(c+60,"Core regfile rf_14", false,-1, 63,0);
        tracep->declQuad(c+62,"Core regfile rf_15", false,-1, 63,0);
        tracep->declQuad(c+64,"Core regfile rf_16", false,-1, 63,0);
        tracep->declQuad(c+66,"Core regfile rf_17", false,-1, 63,0);
        tracep->declQuad(c+68,"Core regfile rf_18", false,-1, 63,0);
        tracep->declQuad(c+70,"Core regfile rf_19", false,-1, 63,0);
        tracep->declQuad(c+72,"Core regfile rf_20", false,-1, 63,0);
        tracep->declQuad(c+74,"Core regfile rf_21", false,-1, 63,0);
        tracep->declQuad(c+76,"Core regfile rf_22", false,-1, 63,0);
        tracep->declQuad(c+78,"Core regfile rf_23", false,-1, 63,0);
        tracep->declQuad(c+80,"Core regfile rf_24", false,-1, 63,0);
        tracep->declQuad(c+82,"Core regfile rf_25", false,-1, 63,0);
        tracep->declQuad(c+84,"Core regfile rf_26", false,-1, 63,0);
        tracep->declQuad(c+86,"Core regfile rf_27", false,-1, 63,0);
        tracep->declQuad(c+88,"Core regfile rf_28", false,-1, 63,0);
        tracep->declQuad(c+90,"Core regfile rf_29", false,-1, 63,0);
        tracep->declQuad(c+92,"Core regfile rf_30", false,-1, 63,0);
        tracep->declQuad(c+94,"Core regfile rf_31", false,-1, 63,0);
        tracep->declBit(c+1417,"Core execute clock", false,-1);
        tracep->declBit(c+1418,"Core execute reset", false,-1);
        tracep->declBit(c+1397,"Core execute io_in_ready", false,-1);
        tracep->declBit(c+1383,"Core execute io_in_bits_valid", false,-1);
        tracep->declBus(c+5,"Core execute io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+6,"Core execute io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+7,"Core execute io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+8,"Core execute io_in_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+9,"Core execute io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+10,"Core execute io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+11,"Core execute io_in_bits_mdu_code", false,-1, 3,0);
        tracep->declBit(c+12,"Core execute io_in_bits_w_type", false,-1);
        tracep->declBus(c+13,"Core execute io_in_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+14,"Core execute io_in_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+15,"Core execute io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+1384,"Core execute io_in_bits_rd_en", false,-1);
        tracep->declBus(c+16,"Core execute io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+1397,"Core execute io_out_ready", false,-1);
        tracep->declBit(c+1577,"Core execute io_out_valid", false,-1);
        tracep->declBit(c+105,"Core execute io_out_bits_valid", false,-1);
        tracep->declBus(c+106,"Core execute io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+107,"Core execute io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+108,"Core execute io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+109,"Core execute io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+110,"Core execute io_out_bits_mdu_code", false,-1, 3,0);
        tracep->declBus(c+97,"Core execute io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+111,"Core execute io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+22,"Core execute io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+24,"Core execute io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+98,"Core execute io_ex_data_o", false,-1, 63,0);
        tracep->declBit(c+21,"Core execute io_is_ebreak_i", false,-1);
        tracep->declBit(c+112,"Core execute io_is_ebreak_o", false,-1);
        tracep->declBus(c+113,"Core execute io_ex_rwaddr_o", false,-1, 31,0);
        tracep->declBit(c+114,"Core execute io_ex_rvalid_o", false,-1);
        tracep->declBit(c+115,"Core execute io_ex_wvalid_o", false,-1);
        tracep->declQuad(c+24,"Core execute io_ex_wdata_o", false,-1, 63,0);
        tracep->declBus(c+109,"Core execute io_ex_wsize_o", false,-1, 1,0);
        tracep->declQuad(c+116,"Core execute io_ex_mduout_o", false,-1, 63,0);
        tracep->declBit(c+118,"Core execute io_ex_mduready_o", false,-1);
        tracep->declBit(c+96,"Core execute io_ex_rd_en", false,-1);
        tracep->declBus(c+97,"Core execute io_ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+100,"Core execute io_ex_is_load", false,-1);
        tracep->declBit(c+101,"Core execute io_ex_is_mdu", false,-1);
        tracep->declBus(c+26,"Core execute io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+4,"Core execute io_jmp_packet_o_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+1396,"Core execute io_jmp_packet_o_mis", false,-1);
        tracep->declQuad(c+163,"Core execute alu_io_in1", false,-1, 63,0);
        tracep->declQuad(c+165,"Core execute alu_io_in2", false,-1, 63,0);
        tracep->declBus(c+167,"Core execute alu_io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+168,"Core execute alu_io_wtype_i", false,-1);
        tracep->declQuad(c+98,"Core execute alu_io_alu_out", false,-1, 63,0);
        tracep->declBit(c+169,"Core execute alu_io_jmp", false,-1);
        tracep->declBus(c+170,"Core execute alu_io_jmp_code", false,-1, 3,0);
        tracep->declBus(c+171,"Core execute alu_io_imm", false,-1, 31,0);
        tracep->declBus(c+106,"Core execute alu_io_pc_i", false,-1, 31,0);
        tracep->declBus(c+172,"Core execute alu_io_jmp_pc", false,-1, 31,0);
        tracep->declBit(c+1417,"Core execute mdu_clock", false,-1);
        tracep->declBit(c+1418,"Core execute mdu_reset", false,-1);
        tracep->declQuad(c+173,"Core execute mdu_io_in1", false,-1, 63,0);
        tracep->declQuad(c+175,"Core execute mdu_io_in2", false,-1, 63,0);
        tracep->declQuad(c+116,"Core execute mdu_io_out", false,-1, 63,0);
        tracep->declBus(c+110,"Core execute mdu_io_mduop_i", false,-1, 3,0);
        tracep->declBit(c+1402,"Core execute mdu_io_mdu_valid", false,-1);
        tracep->declBit(c+118,"Core execute mdu_io_mdu_ready", false,-1);
        tracep->declBit(c+1403,"Core execute stall", false,-1);
        tracep->declBit(c+112,"Core execute io_is_ebreak_o_REG", false,-1);
        tracep->declBit(c+105,"Core execute ex_reg_decodeop_valid", false,-1);
        tracep->declBus(c+106,"Core execute ex_reg_decodeop_pc", false,-1, 31,0);
        tracep->declBus(c+107,"Core execute ex_reg_decodeop_inst", false,-1, 31,0);
        tracep->declBus(c+167,"Core execute ex_reg_decodeop_alu_code", false,-1, 3,0);
        tracep->declBus(c+170,"Core execute ex_reg_decodeop_jmp_code", false,-1, 3,0);
        tracep->declBus(c+108,"Core execute ex_reg_decodeop_mem_code", false,-1, 1,0);
        tracep->declBus(c+109,"Core execute ex_reg_decodeop_mem_size", false,-1, 1,0);
        tracep->declBus(c+110,"Core execute ex_reg_decodeop_mdu_code", false,-1, 3,0);
        tracep->declBit(c+168,"Core execute ex_reg_decodeop_w_type", false,-1);
        tracep->declBus(c+177,"Core execute ex_reg_decodeop_rs1_src", false,-1, 2,0);
        tracep->declBus(c+178,"Core execute ex_reg_decodeop_rs2_src", false,-1, 2,0);
        tracep->declBus(c+97,"Core execute ex_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+111,"Core execute ex_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+171,"Core execute ex_reg_decodeop_imm", false,-1, 31,0);
        tracep->declBus(c+179,"Core execute rs1_temp_hi", false,-1, 31,0);
        tracep->declBus(c+180,"Core execute rs1_temp_lo", false,-1, 31,0);
        tracep->declBus(c+4,"Core execute real_npc", false,-1, 31,0);
        tracep->declQuad(c+163,"Core execute alu io_in1", false,-1, 63,0);
        tracep->declQuad(c+165,"Core execute alu io_in2", false,-1, 63,0);
        tracep->declBus(c+167,"Core execute alu io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+168,"Core execute alu io_wtype_i", false,-1);
        tracep->declQuad(c+98,"Core execute alu io_alu_out", false,-1, 63,0);
        tracep->declBit(c+169,"Core execute alu io_jmp", false,-1);
        tracep->declBus(c+170,"Core execute alu io_jmp_code", false,-1, 3,0);
        tracep->declBus(c+171,"Core execute alu io_imm", false,-1, 31,0);
        tracep->declBus(c+106,"Core execute alu io_pc_i", false,-1, 31,0);
        tracep->declBus(c+172,"Core execute alu io_jmp_pc", false,-1, 31,0);
        tracep->declBus(c+181,"Core execute alu shamt", false,-1, 5,0);
        tracep->declBus(c+182,"Core execute alu out0_lo", false,-1, 31,0);
        tracep->declQuad(c+183,"Core execute alu out0", false,-1, 63,0);
        tracep->declBus(c+185,"Core execute alu out1_lo", false,-1, 31,0);
        tracep->declBus(c+186,"Core execute alu out1_hi", false,-1, 31,0);
        tracep->declBit(c+1417,"Core execute mdu clock", false,-1);
        tracep->declBit(c+1418,"Core execute mdu reset", false,-1);
        tracep->declQuad(c+173,"Core execute mdu io_in1", false,-1, 63,0);
        tracep->declQuad(c+175,"Core execute mdu io_in2", false,-1, 63,0);
        tracep->declQuad(c+116,"Core execute mdu io_out", false,-1, 63,0);
        tracep->declBus(c+110,"Core execute mdu io_mduop_i", false,-1, 3,0);
        tracep->declBit(c+1402,"Core execute mdu io_mdu_valid", false,-1);
        tracep->declBit(c+118,"Core execute mdu io_mdu_ready", false,-1);
        tracep->declBit(c+1417,"Core execute mdu mul_clock", false,-1);
        tracep->declBit(c+1418,"Core execute mdu mul_reset", false,-1);
        tracep->declArray(c+187,"Core execute mdu mul_io_in1", false,-1, 64,0);
        tracep->declArray(c+190,"Core execute mdu mul_io_in2", false,-1, 64,0);
        tracep->declQuad(c+193,"Core execute mdu mul_io_out1", false,-1, 63,0);
        tracep->declQuad(c+195,"Core execute mdu mul_io_out2", false,-1, 63,0);
        tracep->declBit(c+197,"Core execute mdu mul_io_mul_valid", false,-1);
        tracep->declBit(c+198,"Core execute mdu mul_io_mul_ready", false,-1);
        tracep->declBit(c+1417,"Core execute mdu div_clock", false,-1);
        tracep->declBit(c+1418,"Core execute mdu div_reset", false,-1);
        tracep->declQuad(c+199,"Core execute mdu div_io_in1", false,-1, 63,0);
        tracep->declQuad(c+201,"Core execute mdu div_io_in2", false,-1, 63,0);
        tracep->declQuad(c+203,"Core execute mdu div_io_out_div", false,-1, 63,0);
        tracep->declQuad(c+205,"Core execute mdu div_io_out_rem", false,-1, 63,0);
        tracep->declBit(c+207,"Core execute mdu div_io_is_signed", false,-1);
        tracep->declBit(c+208,"Core execute mdu div_io_div_valid", false,-1);
        tracep->declBit(c+209,"Core execute mdu div_io_div_ready", false,-1);
        tracep->declBus(c+210,"Core execute mdu state", false,-1, 1,0);
        tracep->declBus(c+211,"Core execute mdu reg_mduop", false,-1, 3,0);
        tracep->declQuad(c+212,"Core execute mdu reg_x", false,-1, 63,0);
        tracep->declQuad(c+214,"Core execute mdu reg_y", false,-1, 63,0);
        tracep->declQuad(c+116,"Core execute mdu reg_out", false,-1, 63,0);
        tracep->declBit(c+118,"Core execute mdu completed", false,-1);
        tracep->declBit(c+207,"Core execute mdu is_div", false,-1);
        tracep->declBit(c+216,"Core execute mdu is_divu", false,-1);
        tracep->declBit(c+217,"Core execute mdu is_mul", false,-1);
        tracep->declBit(c+218,"Core execute mdu in1_sign", false,-1);
        tracep->declBit(c+219,"Core execute mdu in2_sign", false,-1);
        tracep->declBit(c+220,"Core execute mdu mul_high", false,-1);
        tracep->declBit(c+221,"Core execute mdu is_word", false,-1);
        tracep->declBit(c+222,"Core execute mdu want_div", false,-1);
        tracep->declBus(c+223,"Core execute mdu temp_x_lo", false,-1, 31,0);
        tracep->declBus(c+224,"Core execute mdu temp_x_hi", false,-1, 31,0);
        tracep->declQuad(c+225,"Core execute mdu temp_x", false,-1, 63,0);
        tracep->declBus(c+227,"Core execute mdu temp_y_lo", false,-1, 31,0);
        tracep->declBus(c+228,"Core execute mdu temp_y_hi", false,-1, 31,0);
        tracep->declQuad(c+229,"Core execute mdu temp_y", false,-1, 63,0);
        tracep->declBit(c+231,"Core execute mdu mul_io_in1_hi", false,-1);
        tracep->declBit(c+232,"Core execute mdu mul_io_in2_hi", false,-1);
        tracep->declBus(c+233,"Core execute mdu reg_out_lo", false,-1, 31,0);
        tracep->declBus(c+234,"Core execute mdu reg_out_hi", false,-1, 31,0);
        tracep->declQuad(c+235,"Core execute mdu reg_out_lo_1", false,-1, 63,0);
        tracep->declBus(c+237,"Core execute mdu reg_out_hi_1", false,-1, 31,0);
        tracep->declBit(c+1417,"Core execute mdu mul clock", false,-1);
        tracep->declBit(c+1418,"Core execute mdu mul reset", false,-1);
        tracep->declArray(c+187,"Core execute mdu mul io_in1", false,-1, 64,0);
        tracep->declArray(c+190,"Core execute mdu mul io_in2", false,-1, 64,0);
        tracep->declQuad(c+193,"Core execute mdu mul io_out1", false,-1, 63,0);
        tracep->declQuad(c+195,"Core execute mdu mul io_out2", false,-1, 63,0);
        tracep->declBit(c+197,"Core execute mdu mul io_mul_valid", false,-1);
        tracep->declBit(c+198,"Core execute mdu mul io_mul_ready", false,-1);
        tracep->declArray(c+238,"Core execute mdu mul booth_0_io_x", false,-1, 64,0);
        tracep->declBus(c+241,"Core execute mdu mul booth_0_io_y", false,-1, 2,0);
        tracep->declArray(c+242,"Core execute mdu mul booth_0_io_z", false,-1, 127,0);
        tracep->declBus(c+246,"Core execute mdu mul booth_0_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_1_io_x", false,-1, 64,0);
        tracep->declBus(c+247,"Core execute mdu mul booth_1_io_y", false,-1, 2,0);
        tracep->declArray(c+248,"Core execute mdu mul booth_1_io_z", false,-1, 127,0);
        tracep->declBus(c+252,"Core execute mdu mul booth_1_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_2_io_x", false,-1, 64,0);
        tracep->declBus(c+253,"Core execute mdu mul booth_2_io_y", false,-1, 2,0);
        tracep->declArray(c+254,"Core execute mdu mul booth_2_io_z", false,-1, 127,0);
        tracep->declBus(c+258,"Core execute mdu mul booth_2_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_3_io_x", false,-1, 64,0);
        tracep->declBus(c+259,"Core execute mdu mul booth_3_io_y", false,-1, 2,0);
        tracep->declArray(c+260,"Core execute mdu mul booth_3_io_z", false,-1, 127,0);
        tracep->declBus(c+264,"Core execute mdu mul booth_3_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_4_io_x", false,-1, 64,0);
        tracep->declBus(c+265,"Core execute mdu mul booth_4_io_y", false,-1, 2,0);
        tracep->declArray(c+266,"Core execute mdu mul booth_4_io_z", false,-1, 127,0);
        tracep->declBus(c+270,"Core execute mdu mul booth_4_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_5_io_x", false,-1, 64,0);
        tracep->declBus(c+271,"Core execute mdu mul booth_5_io_y", false,-1, 2,0);
        tracep->declArray(c+272,"Core execute mdu mul booth_5_io_z", false,-1, 127,0);
        tracep->declBus(c+276,"Core execute mdu mul booth_5_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_6_io_x", false,-1, 64,0);
        tracep->declBus(c+277,"Core execute mdu mul booth_6_io_y", false,-1, 2,0);
        tracep->declArray(c+278,"Core execute mdu mul booth_6_io_z", false,-1, 127,0);
        tracep->declBus(c+282,"Core execute mdu mul booth_6_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_7_io_x", false,-1, 64,0);
        tracep->declBus(c+283,"Core execute mdu mul booth_7_io_y", false,-1, 2,0);
        tracep->declArray(c+284,"Core execute mdu mul booth_7_io_z", false,-1, 127,0);
        tracep->declBus(c+288,"Core execute mdu mul booth_7_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_8_io_x", false,-1, 64,0);
        tracep->declBus(c+289,"Core execute mdu mul booth_8_io_y", false,-1, 2,0);
        tracep->declArray(c+290,"Core execute mdu mul booth_8_io_z", false,-1, 127,0);
        tracep->declBus(c+294,"Core execute mdu mul booth_8_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_9_io_x", false,-1, 64,0);
        tracep->declBus(c+295,"Core execute mdu mul booth_9_io_y", false,-1, 2,0);
        tracep->declArray(c+296,"Core execute mdu mul booth_9_io_z", false,-1, 127,0);
        tracep->declBus(c+300,"Core execute mdu mul booth_9_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_10_io_x", false,-1, 64,0);
        tracep->declBus(c+301,"Core execute mdu mul booth_10_io_y", false,-1, 2,0);
        tracep->declArray(c+302,"Core execute mdu mul booth_10_io_z", false,-1, 127,0);
        tracep->declBus(c+306,"Core execute mdu mul booth_10_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_11_io_x", false,-1, 64,0);
        tracep->declBus(c+307,"Core execute mdu mul booth_11_io_y", false,-1, 2,0);
        tracep->declArray(c+308,"Core execute mdu mul booth_11_io_z", false,-1, 127,0);
        tracep->declBus(c+312,"Core execute mdu mul booth_11_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_12_io_x", false,-1, 64,0);
        tracep->declBus(c+313,"Core execute mdu mul booth_12_io_y", false,-1, 2,0);
        tracep->declArray(c+314,"Core execute mdu mul booth_12_io_z", false,-1, 127,0);
        tracep->declBus(c+318,"Core execute mdu mul booth_12_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_13_io_x", false,-1, 64,0);
        tracep->declBus(c+319,"Core execute mdu mul booth_13_io_y", false,-1, 2,0);
        tracep->declArray(c+320,"Core execute mdu mul booth_13_io_z", false,-1, 127,0);
        tracep->declBus(c+324,"Core execute mdu mul booth_13_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_14_io_x", false,-1, 64,0);
        tracep->declBus(c+325,"Core execute mdu mul booth_14_io_y", false,-1, 2,0);
        tracep->declArray(c+326,"Core execute mdu mul booth_14_io_z", false,-1, 127,0);
        tracep->declBus(c+330,"Core execute mdu mul booth_14_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_15_io_x", false,-1, 64,0);
        tracep->declBus(c+331,"Core execute mdu mul booth_15_io_y", false,-1, 2,0);
        tracep->declArray(c+332,"Core execute mdu mul booth_15_io_z", false,-1, 127,0);
        tracep->declBus(c+336,"Core execute mdu mul booth_15_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_16_io_x", false,-1, 64,0);
        tracep->declBus(c+337,"Core execute mdu mul booth_16_io_y", false,-1, 2,0);
        tracep->declArray(c+338,"Core execute mdu mul booth_16_io_z", false,-1, 127,0);
        tracep->declBus(c+342,"Core execute mdu mul booth_16_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_17_io_x", false,-1, 64,0);
        tracep->declBus(c+343,"Core execute mdu mul booth_17_io_y", false,-1, 2,0);
        tracep->declArray(c+344,"Core execute mdu mul booth_17_io_z", false,-1, 127,0);
        tracep->declBus(c+348,"Core execute mdu mul booth_17_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_18_io_x", false,-1, 64,0);
        tracep->declBus(c+349,"Core execute mdu mul booth_18_io_y", false,-1, 2,0);
        tracep->declArray(c+350,"Core execute mdu mul booth_18_io_z", false,-1, 127,0);
        tracep->declBus(c+354,"Core execute mdu mul booth_18_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_19_io_x", false,-1, 64,0);
        tracep->declBus(c+355,"Core execute mdu mul booth_19_io_y", false,-1, 2,0);
        tracep->declArray(c+356,"Core execute mdu mul booth_19_io_z", false,-1, 127,0);
        tracep->declBus(c+360,"Core execute mdu mul booth_19_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_20_io_x", false,-1, 64,0);
        tracep->declBus(c+361,"Core execute mdu mul booth_20_io_y", false,-1, 2,0);
        tracep->declArray(c+362,"Core execute mdu mul booth_20_io_z", false,-1, 127,0);
        tracep->declBus(c+366,"Core execute mdu mul booth_20_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_21_io_x", false,-1, 64,0);
        tracep->declBus(c+367,"Core execute mdu mul booth_21_io_y", false,-1, 2,0);
        tracep->declArray(c+368,"Core execute mdu mul booth_21_io_z", false,-1, 127,0);
        tracep->declBus(c+372,"Core execute mdu mul booth_21_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_22_io_x", false,-1, 64,0);
        tracep->declBus(c+373,"Core execute mdu mul booth_22_io_y", false,-1, 2,0);
        tracep->declArray(c+374,"Core execute mdu mul booth_22_io_z", false,-1, 127,0);
        tracep->declBus(c+378,"Core execute mdu mul booth_22_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_23_io_x", false,-1, 64,0);
        tracep->declBus(c+379,"Core execute mdu mul booth_23_io_y", false,-1, 2,0);
        tracep->declArray(c+380,"Core execute mdu mul booth_23_io_z", false,-1, 127,0);
        tracep->declBus(c+384,"Core execute mdu mul booth_23_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_24_io_x", false,-1, 64,0);
        tracep->declBus(c+385,"Core execute mdu mul booth_24_io_y", false,-1, 2,0);
        tracep->declArray(c+386,"Core execute mdu mul booth_24_io_z", false,-1, 127,0);
        tracep->declBus(c+390,"Core execute mdu mul booth_24_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_25_io_x", false,-1, 64,0);
        tracep->declBus(c+391,"Core execute mdu mul booth_25_io_y", false,-1, 2,0);
        tracep->declArray(c+392,"Core execute mdu mul booth_25_io_z", false,-1, 127,0);
        tracep->declBus(c+396,"Core execute mdu mul booth_25_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_26_io_x", false,-1, 64,0);
        tracep->declBus(c+397,"Core execute mdu mul booth_26_io_y", false,-1, 2,0);
        tracep->declArray(c+398,"Core execute mdu mul booth_26_io_z", false,-1, 127,0);
        tracep->declBus(c+402,"Core execute mdu mul booth_26_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_27_io_x", false,-1, 64,0);
        tracep->declBus(c+403,"Core execute mdu mul booth_27_io_y", false,-1, 2,0);
        tracep->declArray(c+404,"Core execute mdu mul booth_27_io_z", false,-1, 127,0);
        tracep->declBus(c+408,"Core execute mdu mul booth_27_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_28_io_x", false,-1, 64,0);
        tracep->declBus(c+409,"Core execute mdu mul booth_28_io_y", false,-1, 2,0);
        tracep->declArray(c+410,"Core execute mdu mul booth_28_io_z", false,-1, 127,0);
        tracep->declBus(c+414,"Core execute mdu mul booth_28_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_29_io_x", false,-1, 64,0);
        tracep->declBus(c+415,"Core execute mdu mul booth_29_io_y", false,-1, 2,0);
        tracep->declArray(c+416,"Core execute mdu mul booth_29_io_z", false,-1, 127,0);
        tracep->declBus(c+420,"Core execute mdu mul booth_29_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_30_io_x", false,-1, 64,0);
        tracep->declBus(c+421,"Core execute mdu mul booth_30_io_y", false,-1, 2,0);
        tracep->declArray(c+422,"Core execute mdu mul booth_30_io_z", false,-1, 127,0);
        tracep->declBus(c+426,"Core execute mdu mul booth_30_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_31_io_x", false,-1, 64,0);
        tracep->declBus(c+427,"Core execute mdu mul booth_31_io_y", false,-1, 2,0);
        tracep->declArray(c+428,"Core execute mdu mul booth_31_io_z", false,-1, 127,0);
        tracep->declBus(c+432,"Core execute mdu mul booth_31_io_c", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_32_io_x", false,-1, 64,0);
        tracep->declBus(c+433,"Core execute mdu mul booth_32_io_y", false,-1, 2,0);
        tracep->declArray(c+434,"Core execute mdu mul booth_32_io_z", false,-1, 127,0);
        tracep->declBus(c+438,"Core execute mdu mul booth_32_io_c", false,-1, 1,0);
        tracep->declArray(c+439,"Core execute mdu mul csa_0_io_x", false,-1, 127,0);
        tracep->declArray(c+443,"Core execute mdu mul csa_0_io_y", false,-1, 127,0);
        tracep->declArray(c+447,"Core execute mdu mul csa_0_io_z", false,-1, 127,0);
        tracep->declArray(c+451,"Core execute mdu mul csa_0_io_s", false,-1, 127,0);
        tracep->declArray(c+455,"Core execute mdu mul csa_0_io_c", false,-1, 127,0);
        tracep->declArray(c+459,"Core execute mdu mul csa_1_io_x", false,-1, 127,0);
        tracep->declArray(c+463,"Core execute mdu mul csa_1_io_y", false,-1, 127,0);
        tracep->declArray(c+467,"Core execute mdu mul csa_1_io_z", false,-1, 127,0);
        tracep->declArray(c+471,"Core execute mdu mul csa_1_io_s", false,-1, 127,0);
        tracep->declArray(c+475,"Core execute mdu mul csa_1_io_c", false,-1, 127,0);
        tracep->declArray(c+479,"Core execute mdu mul csa_2_io_x", false,-1, 127,0);
        tracep->declArray(c+483,"Core execute mdu mul csa_2_io_y", false,-1, 127,0);
        tracep->declArray(c+487,"Core execute mdu mul csa_2_io_z", false,-1, 127,0);
        tracep->declArray(c+491,"Core execute mdu mul csa_2_io_s", false,-1, 127,0);
        tracep->declArray(c+495,"Core execute mdu mul csa_2_io_c", false,-1, 127,0);
        tracep->declArray(c+499,"Core execute mdu mul csa_3_io_x", false,-1, 127,0);
        tracep->declArray(c+503,"Core execute mdu mul csa_3_io_y", false,-1, 127,0);
        tracep->declArray(c+507,"Core execute mdu mul csa_3_io_z", false,-1, 127,0);
        tracep->declArray(c+511,"Core execute mdu mul csa_3_io_s", false,-1, 127,0);
        tracep->declArray(c+515,"Core execute mdu mul csa_3_io_c", false,-1, 127,0);
        tracep->declArray(c+519,"Core execute mdu mul csa_4_io_x", false,-1, 127,0);
        tracep->declArray(c+523,"Core execute mdu mul csa_4_io_y", false,-1, 127,0);
        tracep->declArray(c+527,"Core execute mdu mul csa_4_io_z", false,-1, 127,0);
        tracep->declArray(c+531,"Core execute mdu mul csa_4_io_s", false,-1, 127,0);
        tracep->declArray(c+535,"Core execute mdu mul csa_4_io_c", false,-1, 127,0);
        tracep->declArray(c+539,"Core execute mdu mul csa_5_io_x", false,-1, 127,0);
        tracep->declArray(c+543,"Core execute mdu mul csa_5_io_y", false,-1, 127,0);
        tracep->declArray(c+547,"Core execute mdu mul csa_5_io_z", false,-1, 127,0);
        tracep->declArray(c+551,"Core execute mdu mul csa_5_io_s", false,-1, 127,0);
        tracep->declArray(c+555,"Core execute mdu mul csa_5_io_c", false,-1, 127,0);
        tracep->declArray(c+559,"Core execute mdu mul csa_6_io_x", false,-1, 127,0);
        tracep->declArray(c+563,"Core execute mdu mul csa_6_io_y", false,-1, 127,0);
        tracep->declArray(c+567,"Core execute mdu mul csa_6_io_z", false,-1, 127,0);
        tracep->declArray(c+571,"Core execute mdu mul csa_6_io_s", false,-1, 127,0);
        tracep->declArray(c+575,"Core execute mdu mul csa_6_io_c", false,-1, 127,0);
        tracep->declArray(c+579,"Core execute mdu mul csa_7_io_x", false,-1, 127,0);
        tracep->declArray(c+583,"Core execute mdu mul csa_7_io_y", false,-1, 127,0);
        tracep->declArray(c+587,"Core execute mdu mul csa_7_io_z", false,-1, 127,0);
        tracep->declArray(c+591,"Core execute mdu mul csa_7_io_s", false,-1, 127,0);
        tracep->declArray(c+595,"Core execute mdu mul csa_7_io_c", false,-1, 127,0);
        tracep->declArray(c+599,"Core execute mdu mul csa_8_io_x", false,-1, 127,0);
        tracep->declArray(c+603,"Core execute mdu mul csa_8_io_y", false,-1, 127,0);
        tracep->declArray(c+607,"Core execute mdu mul csa_8_io_z", false,-1, 127,0);
        tracep->declArray(c+611,"Core execute mdu mul csa_8_io_s", false,-1, 127,0);
        tracep->declArray(c+615,"Core execute mdu mul csa_8_io_c", false,-1, 127,0);
        tracep->declArray(c+619,"Core execute mdu mul csa_9_io_x", false,-1, 127,0);
        tracep->declArray(c+623,"Core execute mdu mul csa_9_io_y", false,-1, 127,0);
        tracep->declArray(c+627,"Core execute mdu mul csa_9_io_z", false,-1, 127,0);
        tracep->declArray(c+631,"Core execute mdu mul csa_9_io_s", false,-1, 127,0);
        tracep->declArray(c+635,"Core execute mdu mul csa_9_io_c", false,-1, 127,0);
        tracep->declArray(c+639,"Core execute mdu mul csa_10_io_x", false,-1, 127,0);
        tracep->declArray(c+643,"Core execute mdu mul csa_10_io_y", false,-1, 127,0);
        tracep->declArray(c+647,"Core execute mdu mul csa_10_io_z", false,-1, 127,0);
        tracep->declArray(c+651,"Core execute mdu mul csa_10_io_s", false,-1, 127,0);
        tracep->declArray(c+655,"Core execute mdu mul csa_10_io_c", false,-1, 127,0);
        tracep->declArray(c+451,"Core execute mdu mul csa_11_io_x", false,-1, 127,0);
        tracep->declArray(c+455,"Core execute mdu mul csa_11_io_y", false,-1, 127,0);
        tracep->declArray(c+475,"Core execute mdu mul csa_11_io_z", false,-1, 127,0);
        tracep->declArray(c+659,"Core execute mdu mul csa_11_io_s", false,-1, 127,0);
        tracep->declArray(c+663,"Core execute mdu mul csa_11_io_c", false,-1, 127,0);
        tracep->declArray(c+471,"Core execute mdu mul csa_12_io_x", false,-1, 127,0);
        tracep->declArray(c+495,"Core execute mdu mul csa_12_io_y", false,-1, 127,0);
        tracep->declArray(c+491,"Core execute mdu mul csa_12_io_z", false,-1, 127,0);
        tracep->declArray(c+667,"Core execute mdu mul csa_12_io_s", false,-1, 127,0);
        tracep->declArray(c+671,"Core execute mdu mul csa_12_io_c", false,-1, 127,0);
        tracep->declArray(c+511,"Core execute mdu mul csa_13_io_x", false,-1, 127,0);
        tracep->declArray(c+515,"Core execute mdu mul csa_13_io_y", false,-1, 127,0);
        tracep->declArray(c+535,"Core execute mdu mul csa_13_io_z", false,-1, 127,0);
        tracep->declArray(c+675,"Core execute mdu mul csa_13_io_s", false,-1, 127,0);
        tracep->declArray(c+679,"Core execute mdu mul csa_13_io_c", false,-1, 127,0);
        tracep->declArray(c+531,"Core execute mdu mul csa_14_io_x", false,-1, 127,0);
        tracep->declArray(c+555,"Core execute mdu mul csa_14_io_y", false,-1, 127,0);
        tracep->declArray(c+551,"Core execute mdu mul csa_14_io_z", false,-1, 127,0);
        tracep->declArray(c+683,"Core execute mdu mul csa_14_io_s", false,-1, 127,0);
        tracep->declArray(c+687,"Core execute mdu mul csa_14_io_c", false,-1, 127,0);
        tracep->declArray(c+571,"Core execute mdu mul csa_15_io_x", false,-1, 127,0);
        tracep->declArray(c+575,"Core execute mdu mul csa_15_io_y", false,-1, 127,0);
        tracep->declArray(c+595,"Core execute mdu mul csa_15_io_z", false,-1, 127,0);
        tracep->declArray(c+691,"Core execute mdu mul csa_15_io_s", false,-1, 127,0);
        tracep->declArray(c+695,"Core execute mdu mul csa_15_io_c", false,-1, 127,0);
        tracep->declArray(c+591,"Core execute mdu mul csa_16_io_x", false,-1, 127,0);
        tracep->declArray(c+615,"Core execute mdu mul csa_16_io_y", false,-1, 127,0);
        tracep->declArray(c+611,"Core execute mdu mul csa_16_io_z", false,-1, 127,0);
        tracep->declArray(c+699,"Core execute mdu mul csa_16_io_s", false,-1, 127,0);
        tracep->declArray(c+703,"Core execute mdu mul csa_16_io_c", false,-1, 127,0);
        tracep->declArray(c+631,"Core execute mdu mul csa_17_io_x", false,-1, 127,0);
        tracep->declArray(c+635,"Core execute mdu mul csa_17_io_y", false,-1, 127,0);
        tracep->declArray(c+707,"Core execute mdu mul csa_17_io_z", false,-1, 127,0);
        tracep->declArray(c+711,"Core execute mdu mul csa_17_io_s", false,-1, 127,0);
        tracep->declArray(c+715,"Core execute mdu mul csa_17_io_c", false,-1, 127,0);
        tracep->declArray(c+651,"Core execute mdu mul csa_18_io_x", false,-1, 127,0);
        tracep->declArray(c+655,"Core execute mdu mul csa_18_io_y", false,-1, 127,0);
        tracep->declArray(c+659,"Core execute mdu mul csa_18_io_z", false,-1, 127,0);
        tracep->declArray(c+719,"Core execute mdu mul csa_18_io_s", false,-1, 127,0);
        tracep->declArray(c+723,"Core execute mdu mul csa_18_io_c", false,-1, 127,0);
        tracep->declArray(c+663,"Core execute mdu mul csa_19_io_x", false,-1, 127,0);
        tracep->declArray(c+667,"Core execute mdu mul csa_19_io_y", false,-1, 127,0);
        tracep->declArray(c+671,"Core execute mdu mul csa_19_io_z", false,-1, 127,0);
        tracep->declArray(c+727,"Core execute mdu mul csa_19_io_s", false,-1, 127,0);
        tracep->declArray(c+731,"Core execute mdu mul csa_19_io_c", false,-1, 127,0);
        tracep->declArray(c+675,"Core execute mdu mul csa_20_io_x", false,-1, 127,0);
        tracep->declArray(c+679,"Core execute mdu mul csa_20_io_y", false,-1, 127,0);
        tracep->declArray(c+683,"Core execute mdu mul csa_20_io_z", false,-1, 127,0);
        tracep->declArray(c+735,"Core execute mdu mul csa_20_io_s", false,-1, 127,0);
        tracep->declArray(c+739,"Core execute mdu mul csa_20_io_c", false,-1, 127,0);
        tracep->declArray(c+687,"Core execute mdu mul csa_21_io_x", false,-1, 127,0);
        tracep->declArray(c+691,"Core execute mdu mul csa_21_io_y", false,-1, 127,0);
        tracep->declArray(c+695,"Core execute mdu mul csa_21_io_z", false,-1, 127,0);
        tracep->declArray(c+743,"Core execute mdu mul csa_21_io_s", false,-1, 127,0);
        tracep->declArray(c+747,"Core execute mdu mul csa_21_io_c", false,-1, 127,0);
        tracep->declArray(c+699,"Core execute mdu mul csa_22_io_x", false,-1, 127,0);
        tracep->declArray(c+703,"Core execute mdu mul csa_22_io_y", false,-1, 127,0);
        tracep->declArray(c+711,"Core execute mdu mul csa_22_io_z", false,-1, 127,0);
        tracep->declArray(c+751,"Core execute mdu mul csa_22_io_s", false,-1, 127,0);
        tracep->declArray(c+755,"Core execute mdu mul csa_22_io_c", false,-1, 127,0);
        tracep->declArray(c+715,"Core execute mdu mul csa_23_io_x", false,-1, 127,0);
        tracep->declArray(c+719,"Core execute mdu mul csa_23_io_y", false,-1, 127,0);
        tracep->declArray(c+723,"Core execute mdu mul csa_23_io_z", false,-1, 127,0);
        tracep->declArray(c+759,"Core execute mdu mul csa_23_io_s", false,-1, 127,0);
        tracep->declArray(c+763,"Core execute mdu mul csa_23_io_c", false,-1, 127,0);
        tracep->declArray(c+727,"Core execute mdu mul csa_24_io_x", false,-1, 127,0);
        tracep->declArray(c+731,"Core execute mdu mul csa_24_io_y", false,-1, 127,0);
        tracep->declArray(c+735,"Core execute mdu mul csa_24_io_z", false,-1, 127,0);
        tracep->declArray(c+767,"Core execute mdu mul csa_24_io_s", false,-1, 127,0);
        tracep->declArray(c+771,"Core execute mdu mul csa_24_io_c", false,-1, 127,0);
        tracep->declArray(c+739,"Core execute mdu mul csa_25_io_x", false,-1, 127,0);
        tracep->declArray(c+743,"Core execute mdu mul csa_25_io_y", false,-1, 127,0);
        tracep->declArray(c+747,"Core execute mdu mul csa_25_io_z", false,-1, 127,0);
        tracep->declArray(c+775,"Core execute mdu mul csa_25_io_s", false,-1, 127,0);
        tracep->declArray(c+779,"Core execute mdu mul csa_25_io_c", false,-1, 127,0);
        tracep->declArray(c+783,"Core execute mdu mul csa_26_io_x", false,-1, 127,0);
        tracep->declArray(c+787,"Core execute mdu mul csa_26_io_y", false,-1, 127,0);
        tracep->declArray(c+791,"Core execute mdu mul csa_26_io_z", false,-1, 127,0);
        tracep->declArray(c+795,"Core execute mdu mul csa_26_io_s", false,-1, 127,0);
        tracep->declArray(c+799,"Core execute mdu mul csa_26_io_c", false,-1, 127,0);
        tracep->declArray(c+803,"Core execute mdu mul csa_27_io_x", false,-1, 127,0);
        tracep->declArray(c+807,"Core execute mdu mul csa_27_io_y", false,-1, 127,0);
        tracep->declArray(c+811,"Core execute mdu mul csa_27_io_z", false,-1, 127,0);
        tracep->declArray(c+815,"Core execute mdu mul csa_27_io_s", false,-1, 127,0);
        tracep->declArray(c+819,"Core execute mdu mul csa_27_io_c", false,-1, 127,0);
        tracep->declArray(c+823,"Core execute mdu mul csa_28_io_x", false,-1, 127,0);
        tracep->declArray(c+827,"Core execute mdu mul csa_28_io_y", false,-1, 127,0);
        tracep->declArray(c+795,"Core execute mdu mul csa_28_io_z", false,-1, 127,0);
        tracep->declArray(c+831,"Core execute mdu mul csa_28_io_s", false,-1, 127,0);
        tracep->declArray(c+835,"Core execute mdu mul csa_28_io_c", false,-1, 127,0);
        tracep->declArray(c+815,"Core execute mdu mul csa_29_io_x", false,-1, 127,0);
        tracep->declArray(c+799,"Core execute mdu mul csa_29_io_y", false,-1, 127,0);
        tracep->declArray(c+819,"Core execute mdu mul csa_29_io_z", false,-1, 127,0);
        tracep->declArray(c+839,"Core execute mdu mul csa_29_io_s", false,-1, 127,0);
        tracep->declArray(c+843,"Core execute mdu mul csa_29_io_c", false,-1, 127,0);
        tracep->declArray(c+831,"Core execute mdu mul csa_30_io_x", false,-1, 127,0);
        tracep->declArray(c+839,"Core execute mdu mul csa_30_io_y", false,-1, 127,0);
        tracep->declArray(c+835,"Core execute mdu mul csa_30_io_z", false,-1, 127,0);
        tracep->declArray(c+847,"Core execute mdu mul csa_30_io_s", false,-1, 127,0);
        tracep->declArray(c+851,"Core execute mdu mul csa_30_io_c", false,-1, 127,0);
        tracep->declArray(c+847,"Core execute mdu mul csa_31_io_x", false,-1, 127,0);
        tracep->declArray(c+851,"Core execute mdu mul csa_31_io_y", false,-1, 127,0);
        tracep->declArray(c+843,"Core execute mdu mul csa_31_io_z", false,-1, 127,0);
        tracep->declArray(c+855,"Core execute mdu mul csa_31_io_s", false,-1, 127,0);
        tracep->declArray(c+859,"Core execute mdu mul csa_31_io_c", false,-1, 127,0);
        tracep->declBus(c+863,"Core execute mdu mul state", false,-1, 1,0);
        tracep->declArray(c+238,"Core execute mdu mul reg_in1", false,-1, 64,0);
        tracep->declArray(c+864,"Core execute mdu mul reg_in2", false,-1, 66,0);
        tracep->declArray(c+439,"Core execute mdu mul pp_0", false,-1, 127,0);
        tracep->declArray(c+867,"Core execute mdu mul pp_1", false,-1, 127,0);
        tracep->declArray(c+871,"Core execute mdu mul pp_2", false,-1, 127,0);
        tracep->declArray(c+875,"Core execute mdu mul pp_3", false,-1, 127,0);
        tracep->declArray(c+879,"Core execute mdu mul pp_4", false,-1, 127,0);
        tracep->declArray(c+883,"Core execute mdu mul pp_5", false,-1, 127,0);
        tracep->declArray(c+887,"Core execute mdu mul pp_6", false,-1, 127,0);
        tracep->declArray(c+891,"Core execute mdu mul pp_7", false,-1, 127,0);
        tracep->declArray(c+895,"Core execute mdu mul pp_8", false,-1, 127,0);
        tracep->declArray(c+899,"Core execute mdu mul pp_9", false,-1, 127,0);
        tracep->declArray(c+903,"Core execute mdu mul pp_10", false,-1, 127,0);
        tracep->declArray(c+907,"Core execute mdu mul pp_11", false,-1, 127,0);
        tracep->declArray(c+911,"Core execute mdu mul pp_12", false,-1, 127,0);
        tracep->declArray(c+915,"Core execute mdu mul pp_13", false,-1, 127,0);
        tracep->declArray(c+919,"Core execute mdu mul pp_14", false,-1, 127,0);
        tracep->declArray(c+923,"Core execute mdu mul pp_15", false,-1, 127,0);
        tracep->declArray(c+927,"Core execute mdu mul pp_16", false,-1, 127,0);
        tracep->declArray(c+931,"Core execute mdu mul pp_17", false,-1, 127,0);
        tracep->declArray(c+935,"Core execute mdu mul pp_18", false,-1, 127,0);
        tracep->declArray(c+939,"Core execute mdu mul pp_19", false,-1, 127,0);
        tracep->declArray(c+943,"Core execute mdu mul pp_20", false,-1, 127,0);
        tracep->declArray(c+947,"Core execute mdu mul pp_21", false,-1, 127,0);
        tracep->declArray(c+951,"Core execute mdu mul pp_22", false,-1, 127,0);
        tracep->declArray(c+955,"Core execute mdu mul pp_23", false,-1, 127,0);
        tracep->declArray(c+959,"Core execute mdu mul pp_24", false,-1, 127,0);
        tracep->declArray(c+963,"Core execute mdu mul pp_25", false,-1, 127,0);
        tracep->declArray(c+967,"Core execute mdu mul pp_26", false,-1, 127,0);
        tracep->declArray(c+971,"Core execute mdu mul pp_27", false,-1, 127,0);
        tracep->declArray(c+975,"Core execute mdu mul pp_28", false,-1, 127,0);
        tracep->declArray(c+979,"Core execute mdu mul pp_29", false,-1, 127,0);
        tracep->declArray(c+983,"Core execute mdu mul pp_30", false,-1, 127,0);
        tracep->declArray(c+987,"Core execute mdu mul pp_31", false,-1, 127,0);
        tracep->declArray(c+991,"Core execute mdu mul pp_32", false,-1, 127,0);
        tracep->declArray(c+783,"Core execute mdu mul pp_l2_0", false,-1, 127,0);
        tracep->declArray(c+787,"Core execute mdu mul pp_l2_1", false,-1, 127,0);
        tracep->declArray(c+791,"Core execute mdu mul pp_l2_2", false,-1, 127,0);
        tracep->declArray(c+803,"Core execute mdu mul pp_l2_3", false,-1, 127,0);
        tracep->declArray(c+807,"Core execute mdu mul pp_l2_4", false,-1, 127,0);
        tracep->declArray(c+811,"Core execute mdu mul pp_l2_5", false,-1, 127,0);
        tracep->declArray(c+823,"Core execute mdu mul pp_l2_6", false,-1, 127,0);
        tracep->declArray(c+827,"Core execute mdu mul pp_l2_7", false,-1, 127,0);
        tracep->declBit(c+995,"Core execute mdu mul c_1", false,-1);
        tracep->declBit(c+996,"Core execute mdu mul c_0", false,-1);
        tracep->declBit(c+997,"Core execute mdu mul c_3", false,-1);
        tracep->declBit(c+998,"Core execute mdu mul c_2", false,-1);
        tracep->declBit(c+999,"Core execute mdu mul c_5", false,-1);
        tracep->declBit(c+1000,"Core execute mdu mul c_4", false,-1);
        tracep->declBit(c+1001,"Core execute mdu mul c_7", false,-1);
        tracep->declBit(c+1002,"Core execute mdu mul c_6", false,-1);
        tracep->declBit(c+1003,"Core execute mdu mul c_9", false,-1);
        tracep->declBit(c+1004,"Core execute mdu mul c_8", false,-1);
        tracep->declBit(c+1005,"Core execute mdu mul c_11", false,-1);
        tracep->declBit(c+1006,"Core execute mdu mul c_10", false,-1);
        tracep->declBit(c+1007,"Core execute mdu mul c_13", false,-1);
        tracep->declBit(c+1008,"Core execute mdu mul c_12", false,-1);
        tracep->declBit(c+1009,"Core execute mdu mul c_15", false,-1);
        tracep->declBit(c+1010,"Core execute mdu mul c_14", false,-1);
        tracep->declBit(c+1011,"Core execute mdu mul c_17", false,-1);
        tracep->declBit(c+1012,"Core execute mdu mul c_16", false,-1);
        tracep->declBit(c+1013,"Core execute mdu mul c_19", false,-1);
        tracep->declBit(c+1014,"Core execute mdu mul c_18", false,-1);
        tracep->declBit(c+1015,"Core execute mdu mul c_21", false,-1);
        tracep->declBit(c+1016,"Core execute mdu mul c_20", false,-1);
        tracep->declBit(c+1017,"Core execute mdu mul c_23", false,-1);
        tracep->declBit(c+1018,"Core execute mdu mul c_22", false,-1);
        tracep->declBit(c+1019,"Core execute mdu mul c_25", false,-1);
        tracep->declBit(c+1020,"Core execute mdu mul c_24", false,-1);
        tracep->declBit(c+1021,"Core execute mdu mul c_27", false,-1);
        tracep->declBit(c+1022,"Core execute mdu mul c_26", false,-1);
        tracep->declBit(c+1023,"Core execute mdu mul c_29", false,-1);
        tracep->declBit(c+1024,"Core execute mdu mul c_28", false,-1);
        tracep->declBit(c+1025,"Core execute mdu mul c_31", false,-1);
        tracep->declBit(c+1026,"Core execute mdu mul c_30", false,-1);
        tracep->declBit(c+1027,"Core execute mdu mul c_33", false,-1);
        tracep->declBit(c+1028,"Core execute mdu mul c_32", false,-1);
        tracep->declBit(c+1029,"Core execute mdu mul c_35", false,-1);
        tracep->declBit(c+1030,"Core execute mdu mul c_34", false,-1);
        tracep->declBit(c+1031,"Core execute mdu mul c_37", false,-1);
        tracep->declBit(c+1032,"Core execute mdu mul c_36", false,-1);
        tracep->declBit(c+1033,"Core execute mdu mul c_39", false,-1);
        tracep->declBit(c+1034,"Core execute mdu mul c_38", false,-1);
        tracep->declBit(c+1035,"Core execute mdu mul c_41", false,-1);
        tracep->declBit(c+1036,"Core execute mdu mul c_40", false,-1);
        tracep->declBit(c+1037,"Core execute mdu mul c_43", false,-1);
        tracep->declBit(c+1038,"Core execute mdu mul c_42", false,-1);
        tracep->declBit(c+1039,"Core execute mdu mul c_45", false,-1);
        tracep->declBit(c+1040,"Core execute mdu mul c_44", false,-1);
        tracep->declBit(c+1041,"Core execute mdu mul c_47", false,-1);
        tracep->declBit(c+1042,"Core execute mdu mul c_46", false,-1);
        tracep->declBit(c+1043,"Core execute mdu mul c_49", false,-1);
        tracep->declBit(c+1044,"Core execute mdu mul c_48", false,-1);
        tracep->declBit(c+1045,"Core execute mdu mul c_51", false,-1);
        tracep->declBit(c+1046,"Core execute mdu mul c_50", false,-1);
        tracep->declBit(c+1047,"Core execute mdu mul c_53", false,-1);
        tracep->declBit(c+1048,"Core execute mdu mul c_52", false,-1);
        tracep->declBit(c+1049,"Core execute mdu mul c_55", false,-1);
        tracep->declBit(c+1050,"Core execute mdu mul c_54", false,-1);
        tracep->declBit(c+1051,"Core execute mdu mul c_57", false,-1);
        tracep->declBit(c+1052,"Core execute mdu mul c_56", false,-1);
        tracep->declBit(c+1053,"Core execute mdu mul c_59", false,-1);
        tracep->declBit(c+1054,"Core execute mdu mul c_58", false,-1);
        tracep->declBit(c+1055,"Core execute mdu mul c_61", false,-1);
        tracep->declBit(c+1056,"Core execute mdu mul c_60", false,-1);
        tracep->declBit(c+1057,"Core execute mdu mul c_63", false,-1);
        tracep->declBit(c+1058,"Core execute mdu mul c_62", false,-1);
        tracep->declBit(c+1059,"Core execute mdu mul c_65", false,-1);
        tracep->declBit(c+1060,"Core execute mdu mul c_64", false,-1);
        tracep->declArray(c+707,"Core execute mdu mul pp33", false,-1, 127,0);
        tracep->declArray(c+1061,"Core execute mdu mul reg_out", false,-1, 127,0);
        tracep->declArray(c+1065,"Core execute mdu mul csa_0_io_y_hi", false,-1, 125,0);
        tracep->declArray(c+1069,"Core execute mdu mul csa_0_io_z_hi", false,-1, 123,0);
        tracep->declArray(c+1073,"Core execute mdu mul csa_1_io_x_hi", false,-1, 121,0);
        tracep->declArray(c+1077,"Core execute mdu mul csa_1_io_y_hi", false,-1, 119,0);
        tracep->declArray(c+1081,"Core execute mdu mul csa_1_io_z_hi", false,-1, 117,0);
        tracep->declArray(c+1085,"Core execute mdu mul csa_2_io_x_hi", false,-1, 115,0);
        tracep->declArray(c+1089,"Core execute mdu mul csa_2_io_y_hi", false,-1, 113,0);
        tracep->declArray(c+1093,"Core execute mdu mul csa_2_io_z_hi", false,-1, 111,0);
        tracep->declArray(c+1097,"Core execute mdu mul csa_3_io_x_hi", false,-1, 109,0);
        tracep->declArray(c+1101,"Core execute mdu mul csa_3_io_y_hi", false,-1, 107,0);
        tracep->declArray(c+1105,"Core execute mdu mul csa_3_io_z_hi", false,-1, 105,0);
        tracep->declArray(c+1109,"Core execute mdu mul csa_4_io_x_hi", false,-1, 103,0);
        tracep->declArray(c+1113,"Core execute mdu mul csa_4_io_y_hi", false,-1, 101,0);
        tracep->declArray(c+1117,"Core execute mdu mul csa_4_io_z_hi", false,-1, 99,0);
        tracep->declArray(c+1121,"Core execute mdu mul csa_5_io_x_hi", false,-1, 97,0);
        tracep->declArray(c+1125,"Core execute mdu mul csa_5_io_y_hi", false,-1, 95,0);
        tracep->declArray(c+1128,"Core execute mdu mul csa_5_io_z_hi", false,-1, 93,0);
        tracep->declArray(c+1131,"Core execute mdu mul csa_6_io_x_hi", false,-1, 91,0);
        tracep->declArray(c+1134,"Core execute mdu mul csa_6_io_y_hi", false,-1, 89,0);
        tracep->declArray(c+1137,"Core execute mdu mul csa_6_io_z_hi", false,-1, 87,0);
        tracep->declArray(c+1140,"Core execute mdu mul csa_7_io_x_hi", false,-1, 85,0);
        tracep->declArray(c+1143,"Core execute mdu mul csa_7_io_y_hi", false,-1, 83,0);
        tracep->declArray(c+1146,"Core execute mdu mul csa_7_io_z_hi", false,-1, 81,0);
        tracep->declArray(c+1149,"Core execute mdu mul csa_8_io_x_hi", false,-1, 79,0);
        tracep->declArray(c+1152,"Core execute mdu mul csa_8_io_y_hi", false,-1, 77,0);
        tracep->declArray(c+1155,"Core execute mdu mul csa_8_io_z_hi", false,-1, 75,0);
        tracep->declArray(c+1158,"Core execute mdu mul csa_9_io_x_hi", false,-1, 73,0);
        tracep->declArray(c+1161,"Core execute mdu mul csa_9_io_y_hi", false,-1, 71,0);
        tracep->declArray(c+1164,"Core execute mdu mul csa_9_io_z_hi", false,-1, 69,0);
        tracep->declArray(c+1167,"Core execute mdu mul csa_10_io_x_hi", false,-1, 67,0);
        tracep->declArray(c+1170,"Core execute mdu mul csa_10_io_y_hi", false,-1, 65,0);
        tracep->declQuad(c+1173,"Core execute mdu mul csa_10_io_z_hi", false,-1, 63,0);
        tracep->declArray(c+855,"Core execute mdu mul s_l8", false,-1, 127,0);
        tracep->declArray(c+859,"Core execute mdu mul c_l8", false,-1, 127,0);
        tracep->declArray(c+1175,"Core execute mdu mul temp_out", false,-1, 127,0);
        tracep->declBit(c+1179,"Core execute mdu mul reg_in2_hi_hi", false,-1);
        tracep->declBus(c+1180,"Core execute mdu mul pp33_lo_lo_lo", false,-1, 7,0);
        tracep->declBus(c+1181,"Core execute mdu mul pp33_lo_hi_lo", false,-1, 7,0);
        tracep->declBus(c+1182,"Core execute mdu mul pp33_lo_hi", false,-1, 16,0);
        tracep->declQuad(c+1183,"Core execute mdu mul pp33_lo", false,-1, 32,0);
        tracep->declBus(c+1185,"Core execute mdu mul pp33_hi_lo_lo", false,-1, 7,0);
        tracep->declBus(c+1186,"Core execute mdu mul pp33_hi_hi_lo", false,-1, 7,0);
        tracep->declBus(c+1187,"Core execute mdu mul pp33_hi_hi", false,-1, 16,0);
        tracep->declQuad(c+1188,"Core execute mdu mul pp33_hi_1", false,-1, 32,0);
        tracep->declArray(c+759,"Core execute mdu mul s_l4_0", false,-1, 127,0);
        tracep->declArray(c+767,"Core execute mdu mul s_l4_1", false,-1, 127,0);
        tracep->declArray(c+775,"Core execute mdu mul s_l4_2", false,-1, 127,0);
        tracep->declArray(c+763,"Core execute mdu mul c_l4_0", false,-1, 127,0);
        tracep->declArray(c+771,"Core execute mdu mul c_l4_1", false,-1, 127,0);
        tracep->declArray(c+779,"Core execute mdu mul c_l4_2", false,-1, 127,0);
        tracep->declArray(c+751,"Core execute mdu mul s_l3_4", false,-1, 127,0);
        tracep->declArray(c+755,"Core execute mdu mul c_l3_4", false,-1, 127,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_0 io_x", false,-1, 64,0);
        tracep->declBus(c+241,"Core execute mdu mul booth_0 io_y", false,-1, 2,0);
        tracep->declArray(c+242,"Core execute mdu mul booth_0 io_z", false,-1, 127,0);
        tracep->declBus(c+246,"Core execute mdu mul booth_0 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_0 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_0 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_0 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_0 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_0 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_1 io_x", false,-1, 64,0);
        tracep->declBus(c+247,"Core execute mdu mul booth_1 io_y", false,-1, 2,0);
        tracep->declArray(c+248,"Core execute mdu mul booth_1 io_z", false,-1, 127,0);
        tracep->declBus(c+252,"Core execute mdu mul booth_1 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_1 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_1 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_1 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_1 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_1 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_2 io_x", false,-1, 64,0);
        tracep->declBus(c+253,"Core execute mdu mul booth_2 io_y", false,-1, 2,0);
        tracep->declArray(c+254,"Core execute mdu mul booth_2 io_z", false,-1, 127,0);
        tracep->declBus(c+258,"Core execute mdu mul booth_2 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_2 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_2 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_2 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_2 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_2 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_3 io_x", false,-1, 64,0);
        tracep->declBus(c+259,"Core execute mdu mul booth_3 io_y", false,-1, 2,0);
        tracep->declArray(c+260,"Core execute mdu mul booth_3 io_z", false,-1, 127,0);
        tracep->declBus(c+264,"Core execute mdu mul booth_3 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_3 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_3 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_3 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_3 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_3 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_4 io_x", false,-1, 64,0);
        tracep->declBus(c+265,"Core execute mdu mul booth_4 io_y", false,-1, 2,0);
        tracep->declArray(c+266,"Core execute mdu mul booth_4 io_z", false,-1, 127,0);
        tracep->declBus(c+270,"Core execute mdu mul booth_4 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_4 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_4 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_4 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_4 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_4 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_5 io_x", false,-1, 64,0);
        tracep->declBus(c+271,"Core execute mdu mul booth_5 io_y", false,-1, 2,0);
        tracep->declArray(c+272,"Core execute mdu mul booth_5 io_z", false,-1, 127,0);
        tracep->declBus(c+276,"Core execute mdu mul booth_5 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_5 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_5 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_5 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_5 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_5 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_6 io_x", false,-1, 64,0);
        tracep->declBus(c+277,"Core execute mdu mul booth_6 io_y", false,-1, 2,0);
        tracep->declArray(c+278,"Core execute mdu mul booth_6 io_z", false,-1, 127,0);
        tracep->declBus(c+282,"Core execute mdu mul booth_6 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_6 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_6 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_6 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_6 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_6 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_7 io_x", false,-1, 64,0);
        tracep->declBus(c+283,"Core execute mdu mul booth_7 io_y", false,-1, 2,0);
        tracep->declArray(c+284,"Core execute mdu mul booth_7 io_z", false,-1, 127,0);
        tracep->declBus(c+288,"Core execute mdu mul booth_7 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_7 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_7 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_7 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_7 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_7 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_8 io_x", false,-1, 64,0);
        tracep->declBus(c+289,"Core execute mdu mul booth_8 io_y", false,-1, 2,0);
        tracep->declArray(c+290,"Core execute mdu mul booth_8 io_z", false,-1, 127,0);
        tracep->declBus(c+294,"Core execute mdu mul booth_8 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_8 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_8 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_8 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_8 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_8 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_9 io_x", false,-1, 64,0);
        tracep->declBus(c+295,"Core execute mdu mul booth_9 io_y", false,-1, 2,0);
        tracep->declArray(c+296,"Core execute mdu mul booth_9 io_z", false,-1, 127,0);
        tracep->declBus(c+300,"Core execute mdu mul booth_9 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_9 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_9 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_9 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_9 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_9 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_10 io_x", false,-1, 64,0);
        tracep->declBus(c+301,"Core execute mdu mul booth_10 io_y", false,-1, 2,0);
        tracep->declArray(c+302,"Core execute mdu mul booth_10 io_z", false,-1, 127,0);
        tracep->declBus(c+306,"Core execute mdu mul booth_10 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_10 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_10 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_10 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_10 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_10 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_11 io_x", false,-1, 64,0);
        tracep->declBus(c+307,"Core execute mdu mul booth_11 io_y", false,-1, 2,0);
        tracep->declArray(c+308,"Core execute mdu mul booth_11 io_z", false,-1, 127,0);
        tracep->declBus(c+312,"Core execute mdu mul booth_11 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_11 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_11 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_11 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_11 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_11 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_12 io_x", false,-1, 64,0);
        tracep->declBus(c+313,"Core execute mdu mul booth_12 io_y", false,-1, 2,0);
        tracep->declArray(c+314,"Core execute mdu mul booth_12 io_z", false,-1, 127,0);
        tracep->declBus(c+318,"Core execute mdu mul booth_12 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_12 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_12 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_12 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_12 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_12 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_13 io_x", false,-1, 64,0);
        tracep->declBus(c+319,"Core execute mdu mul booth_13 io_y", false,-1, 2,0);
        tracep->declArray(c+320,"Core execute mdu mul booth_13 io_z", false,-1, 127,0);
        tracep->declBus(c+324,"Core execute mdu mul booth_13 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_13 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_13 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_13 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_13 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_13 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_14 io_x", false,-1, 64,0);
        tracep->declBus(c+325,"Core execute mdu mul booth_14 io_y", false,-1, 2,0);
        tracep->declArray(c+326,"Core execute mdu mul booth_14 io_z", false,-1, 127,0);
        tracep->declBus(c+330,"Core execute mdu mul booth_14 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_14 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_14 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_14 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_14 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_14 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_15 io_x", false,-1, 64,0);
        tracep->declBus(c+331,"Core execute mdu mul booth_15 io_y", false,-1, 2,0);
        tracep->declArray(c+332,"Core execute mdu mul booth_15 io_z", false,-1, 127,0);
        tracep->declBus(c+336,"Core execute mdu mul booth_15 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_15 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_15 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_15 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_15 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_15 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_16 io_x", false,-1, 64,0);
        tracep->declBus(c+337,"Core execute mdu mul booth_16 io_y", false,-1, 2,0);
        tracep->declArray(c+338,"Core execute mdu mul booth_16 io_z", false,-1, 127,0);
        tracep->declBus(c+342,"Core execute mdu mul booth_16 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_16 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_16 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_16 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_16 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_16 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_17 io_x", false,-1, 64,0);
        tracep->declBus(c+343,"Core execute mdu mul booth_17 io_y", false,-1, 2,0);
        tracep->declArray(c+344,"Core execute mdu mul booth_17 io_z", false,-1, 127,0);
        tracep->declBus(c+348,"Core execute mdu mul booth_17 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_17 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_17 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_17 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_17 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_17 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_18 io_x", false,-1, 64,0);
        tracep->declBus(c+349,"Core execute mdu mul booth_18 io_y", false,-1, 2,0);
        tracep->declArray(c+350,"Core execute mdu mul booth_18 io_z", false,-1, 127,0);
        tracep->declBus(c+354,"Core execute mdu mul booth_18 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_18 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_18 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_18 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_18 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_18 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_19 io_x", false,-1, 64,0);
        tracep->declBus(c+355,"Core execute mdu mul booth_19 io_y", false,-1, 2,0);
        tracep->declArray(c+356,"Core execute mdu mul booth_19 io_z", false,-1, 127,0);
        tracep->declBus(c+360,"Core execute mdu mul booth_19 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_19 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_19 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_19 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_19 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_19 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_20 io_x", false,-1, 64,0);
        tracep->declBus(c+361,"Core execute mdu mul booth_20 io_y", false,-1, 2,0);
        tracep->declArray(c+362,"Core execute mdu mul booth_20 io_z", false,-1, 127,0);
        tracep->declBus(c+366,"Core execute mdu mul booth_20 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_20 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_20 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_20 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_20 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_20 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_21 io_x", false,-1, 64,0);
        tracep->declBus(c+367,"Core execute mdu mul booth_21 io_y", false,-1, 2,0);
        tracep->declArray(c+368,"Core execute mdu mul booth_21 io_z", false,-1, 127,0);
        tracep->declBus(c+372,"Core execute mdu mul booth_21 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_21 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_21 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_21 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_21 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_21 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_22 io_x", false,-1, 64,0);
        tracep->declBus(c+373,"Core execute mdu mul booth_22 io_y", false,-1, 2,0);
        tracep->declArray(c+374,"Core execute mdu mul booth_22 io_z", false,-1, 127,0);
        tracep->declBus(c+378,"Core execute mdu mul booth_22 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_22 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_22 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_22 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_22 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_22 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_23 io_x", false,-1, 64,0);
        tracep->declBus(c+379,"Core execute mdu mul booth_23 io_y", false,-1, 2,0);
        tracep->declArray(c+380,"Core execute mdu mul booth_23 io_z", false,-1, 127,0);
        tracep->declBus(c+384,"Core execute mdu mul booth_23 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_23 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_23 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_23 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_23 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_23 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_24 io_x", false,-1, 64,0);
        tracep->declBus(c+385,"Core execute mdu mul booth_24 io_y", false,-1, 2,0);
        tracep->declArray(c+386,"Core execute mdu mul booth_24 io_z", false,-1, 127,0);
        tracep->declBus(c+390,"Core execute mdu mul booth_24 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_24 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_24 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_24 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_24 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_24 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_25 io_x", false,-1, 64,0);
        tracep->declBus(c+391,"Core execute mdu mul booth_25 io_y", false,-1, 2,0);
        tracep->declArray(c+392,"Core execute mdu mul booth_25 io_z", false,-1, 127,0);
        tracep->declBus(c+396,"Core execute mdu mul booth_25 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_25 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_25 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_25 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_25 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_25 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_26 io_x", false,-1, 64,0);
        tracep->declBus(c+397,"Core execute mdu mul booth_26 io_y", false,-1, 2,0);
        tracep->declArray(c+398,"Core execute mdu mul booth_26 io_z", false,-1, 127,0);
        tracep->declBus(c+402,"Core execute mdu mul booth_26 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_26 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_26 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_26 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_26 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_26 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_27 io_x", false,-1, 64,0);
        tracep->declBus(c+403,"Core execute mdu mul booth_27 io_y", false,-1, 2,0);
        tracep->declArray(c+404,"Core execute mdu mul booth_27 io_z", false,-1, 127,0);
        tracep->declBus(c+408,"Core execute mdu mul booth_27 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_27 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_27 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_27 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_27 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_27 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_28 io_x", false,-1, 64,0);
        tracep->declBus(c+409,"Core execute mdu mul booth_28 io_y", false,-1, 2,0);
        tracep->declArray(c+410,"Core execute mdu mul booth_28 io_z", false,-1, 127,0);
        tracep->declBus(c+414,"Core execute mdu mul booth_28 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_28 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_28 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_28 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_28 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_28 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_29 io_x", false,-1, 64,0);
        tracep->declBus(c+415,"Core execute mdu mul booth_29 io_y", false,-1, 2,0);
        tracep->declArray(c+416,"Core execute mdu mul booth_29 io_z", false,-1, 127,0);
        tracep->declBus(c+420,"Core execute mdu mul booth_29 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_29 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_29 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_29 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_29 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_29 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_30 io_x", false,-1, 64,0);
        tracep->declBus(c+421,"Core execute mdu mul booth_30 io_y", false,-1, 2,0);
        tracep->declArray(c+422,"Core execute mdu mul booth_30 io_z", false,-1, 127,0);
        tracep->declBus(c+426,"Core execute mdu mul booth_30 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_30 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_30 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_30 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_30 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_30 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_31 io_x", false,-1, 64,0);
        tracep->declBus(c+427,"Core execute mdu mul booth_31 io_y", false,-1, 2,0);
        tracep->declArray(c+428,"Core execute mdu mul booth_31 io_z", false,-1, 127,0);
        tracep->declBus(c+432,"Core execute mdu mul booth_31 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_31 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_31 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_31 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_31 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_31 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+238,"Core execute mdu mul booth_32 io_x", false,-1, 64,0);
        tracep->declBus(c+433,"Core execute mdu mul booth_32 io_y", false,-1, 2,0);
        tracep->declArray(c+434,"Core execute mdu mul booth_32 io_z", false,-1, 127,0);
        tracep->declBus(c+438,"Core execute mdu mul booth_32 io_c", false,-1, 1,0);
        tracep->declArray(c+1190,"Core execute mdu mul booth_32 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1193,"Core execute mdu mul booth_32 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1195,"Core execute mdu mul booth_32 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1197,"Core execute mdu mul booth_32 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1199,"Core execute mdu mul booth_32 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+439,"Core execute mdu mul csa_0 io_x", false,-1, 127,0);
        tracep->declArray(c+443,"Core execute mdu mul csa_0 io_y", false,-1, 127,0);
        tracep->declArray(c+447,"Core execute mdu mul csa_0 io_z", false,-1, 127,0);
        tracep->declArray(c+451,"Core execute mdu mul csa_0 io_s", false,-1, 127,0);
        tracep->declArray(c+455,"Core execute mdu mul csa_0 io_c", false,-1, 127,0);
        tracep->declArray(c+1201,"Core execute mdu mul csa_0 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+459,"Core execute mdu mul csa_1 io_x", false,-1, 127,0);
        tracep->declArray(c+463,"Core execute mdu mul csa_1 io_y", false,-1, 127,0);
        tracep->declArray(c+467,"Core execute mdu mul csa_1 io_z", false,-1, 127,0);
        tracep->declArray(c+471,"Core execute mdu mul csa_1 io_s", false,-1, 127,0);
        tracep->declArray(c+475,"Core execute mdu mul csa_1 io_c", false,-1, 127,0);
        tracep->declArray(c+1205,"Core execute mdu mul csa_1 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+479,"Core execute mdu mul csa_2 io_x", false,-1, 127,0);
        tracep->declArray(c+483,"Core execute mdu mul csa_2 io_y", false,-1, 127,0);
        tracep->declArray(c+487,"Core execute mdu mul csa_2 io_z", false,-1, 127,0);
        tracep->declArray(c+491,"Core execute mdu mul csa_2 io_s", false,-1, 127,0);
        tracep->declArray(c+495,"Core execute mdu mul csa_2 io_c", false,-1, 127,0);
        tracep->declArray(c+1209,"Core execute mdu mul csa_2 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+499,"Core execute mdu mul csa_3 io_x", false,-1, 127,0);
        tracep->declArray(c+503,"Core execute mdu mul csa_3 io_y", false,-1, 127,0);
        tracep->declArray(c+507,"Core execute mdu mul csa_3 io_z", false,-1, 127,0);
        tracep->declArray(c+511,"Core execute mdu mul csa_3 io_s", false,-1, 127,0);
        tracep->declArray(c+515,"Core execute mdu mul csa_3 io_c", false,-1, 127,0);
        tracep->declArray(c+1213,"Core execute mdu mul csa_3 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+519,"Core execute mdu mul csa_4 io_x", false,-1, 127,0);
        tracep->declArray(c+523,"Core execute mdu mul csa_4 io_y", false,-1, 127,0);
        tracep->declArray(c+527,"Core execute mdu mul csa_4 io_z", false,-1, 127,0);
        tracep->declArray(c+531,"Core execute mdu mul csa_4 io_s", false,-1, 127,0);
        tracep->declArray(c+535,"Core execute mdu mul csa_4 io_c", false,-1, 127,0);
        tracep->declArray(c+1217,"Core execute mdu mul csa_4 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+539,"Core execute mdu mul csa_5 io_x", false,-1, 127,0);
        tracep->declArray(c+543,"Core execute mdu mul csa_5 io_y", false,-1, 127,0);
        tracep->declArray(c+547,"Core execute mdu mul csa_5 io_z", false,-1, 127,0);
        tracep->declArray(c+551,"Core execute mdu mul csa_5 io_s", false,-1, 127,0);
        tracep->declArray(c+555,"Core execute mdu mul csa_5 io_c", false,-1, 127,0);
        tracep->declArray(c+1221,"Core execute mdu mul csa_5 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+559,"Core execute mdu mul csa_6 io_x", false,-1, 127,0);
        tracep->declArray(c+563,"Core execute mdu mul csa_6 io_y", false,-1, 127,0);
        tracep->declArray(c+567,"Core execute mdu mul csa_6 io_z", false,-1, 127,0);
        tracep->declArray(c+571,"Core execute mdu mul csa_6 io_s", false,-1, 127,0);
        tracep->declArray(c+575,"Core execute mdu mul csa_6 io_c", false,-1, 127,0);
        tracep->declArray(c+1225,"Core execute mdu mul csa_6 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+579,"Core execute mdu mul csa_7 io_x", false,-1, 127,0);
        tracep->declArray(c+583,"Core execute mdu mul csa_7 io_y", false,-1, 127,0);
        tracep->declArray(c+587,"Core execute mdu mul csa_7 io_z", false,-1, 127,0);
        tracep->declArray(c+591,"Core execute mdu mul csa_7 io_s", false,-1, 127,0);
        tracep->declArray(c+595,"Core execute mdu mul csa_7 io_c", false,-1, 127,0);
        tracep->declArray(c+1229,"Core execute mdu mul csa_7 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+599,"Core execute mdu mul csa_8 io_x", false,-1, 127,0);
        tracep->declArray(c+603,"Core execute mdu mul csa_8 io_y", false,-1, 127,0);
        tracep->declArray(c+607,"Core execute mdu mul csa_8 io_z", false,-1, 127,0);
        tracep->declArray(c+611,"Core execute mdu mul csa_8 io_s", false,-1, 127,0);
        tracep->declArray(c+615,"Core execute mdu mul csa_8 io_c", false,-1, 127,0);
        tracep->declArray(c+1233,"Core execute mdu mul csa_8 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+619,"Core execute mdu mul csa_9 io_x", false,-1, 127,0);
        tracep->declArray(c+623,"Core execute mdu mul csa_9 io_y", false,-1, 127,0);
        tracep->declArray(c+627,"Core execute mdu mul csa_9 io_z", false,-1, 127,0);
        tracep->declArray(c+631,"Core execute mdu mul csa_9 io_s", false,-1, 127,0);
        tracep->declArray(c+635,"Core execute mdu mul csa_9 io_c", false,-1, 127,0);
        tracep->declArray(c+1237,"Core execute mdu mul csa_9 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+639,"Core execute mdu mul csa_10 io_x", false,-1, 127,0);
        tracep->declArray(c+643,"Core execute mdu mul csa_10 io_y", false,-1, 127,0);
        tracep->declArray(c+647,"Core execute mdu mul csa_10 io_z", false,-1, 127,0);
        tracep->declArray(c+651,"Core execute mdu mul csa_10 io_s", false,-1, 127,0);
        tracep->declArray(c+655,"Core execute mdu mul csa_10 io_c", false,-1, 127,0);
        tracep->declArray(c+1241,"Core execute mdu mul csa_10 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+451,"Core execute mdu mul csa_11 io_x", false,-1, 127,0);
        tracep->declArray(c+455,"Core execute mdu mul csa_11 io_y", false,-1, 127,0);
        tracep->declArray(c+475,"Core execute mdu mul csa_11 io_z", false,-1, 127,0);
        tracep->declArray(c+659,"Core execute mdu mul csa_11 io_s", false,-1, 127,0);
        tracep->declArray(c+663,"Core execute mdu mul csa_11 io_c", false,-1, 127,0);
        tracep->declArray(c+1245,"Core execute mdu mul csa_11 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+471,"Core execute mdu mul csa_12 io_x", false,-1, 127,0);
        tracep->declArray(c+495,"Core execute mdu mul csa_12 io_y", false,-1, 127,0);
        tracep->declArray(c+491,"Core execute mdu mul csa_12 io_z", false,-1, 127,0);
        tracep->declArray(c+667,"Core execute mdu mul csa_12 io_s", false,-1, 127,0);
        tracep->declArray(c+671,"Core execute mdu mul csa_12 io_c", false,-1, 127,0);
        tracep->declArray(c+1249,"Core execute mdu mul csa_12 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+511,"Core execute mdu mul csa_13 io_x", false,-1, 127,0);
        tracep->declArray(c+515,"Core execute mdu mul csa_13 io_y", false,-1, 127,0);
        tracep->declArray(c+535,"Core execute mdu mul csa_13 io_z", false,-1, 127,0);
        tracep->declArray(c+675,"Core execute mdu mul csa_13 io_s", false,-1, 127,0);
        tracep->declArray(c+679,"Core execute mdu mul csa_13 io_c", false,-1, 127,0);
        tracep->declArray(c+1253,"Core execute mdu mul csa_13 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+531,"Core execute mdu mul csa_14 io_x", false,-1, 127,0);
        tracep->declArray(c+555,"Core execute mdu mul csa_14 io_y", false,-1, 127,0);
        tracep->declArray(c+551,"Core execute mdu mul csa_14 io_z", false,-1, 127,0);
        tracep->declArray(c+683,"Core execute mdu mul csa_14 io_s", false,-1, 127,0);
        tracep->declArray(c+687,"Core execute mdu mul csa_14 io_c", false,-1, 127,0);
        tracep->declArray(c+1257,"Core execute mdu mul csa_14 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+571,"Core execute mdu mul csa_15 io_x", false,-1, 127,0);
        tracep->declArray(c+575,"Core execute mdu mul csa_15 io_y", false,-1, 127,0);
        tracep->declArray(c+595,"Core execute mdu mul csa_15 io_z", false,-1, 127,0);
        tracep->declArray(c+691,"Core execute mdu mul csa_15 io_s", false,-1, 127,0);
        tracep->declArray(c+695,"Core execute mdu mul csa_15 io_c", false,-1, 127,0);
        tracep->declArray(c+1261,"Core execute mdu mul csa_15 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+591,"Core execute mdu mul csa_16 io_x", false,-1, 127,0);
        tracep->declArray(c+615,"Core execute mdu mul csa_16 io_y", false,-1, 127,0);
        tracep->declArray(c+611,"Core execute mdu mul csa_16 io_z", false,-1, 127,0);
        tracep->declArray(c+699,"Core execute mdu mul csa_16 io_s", false,-1, 127,0);
        tracep->declArray(c+703,"Core execute mdu mul csa_16 io_c", false,-1, 127,0);
        tracep->declArray(c+1265,"Core execute mdu mul csa_16 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+631,"Core execute mdu mul csa_17 io_x", false,-1, 127,0);
        tracep->declArray(c+635,"Core execute mdu mul csa_17 io_y", false,-1, 127,0);
        tracep->declArray(c+707,"Core execute mdu mul csa_17 io_z", false,-1, 127,0);
        tracep->declArray(c+711,"Core execute mdu mul csa_17 io_s", false,-1, 127,0);
        tracep->declArray(c+715,"Core execute mdu mul csa_17 io_c", false,-1, 127,0);
        tracep->declArray(c+1269,"Core execute mdu mul csa_17 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+651,"Core execute mdu mul csa_18 io_x", false,-1, 127,0);
        tracep->declArray(c+655,"Core execute mdu mul csa_18 io_y", false,-1, 127,0);
        tracep->declArray(c+659,"Core execute mdu mul csa_18 io_z", false,-1, 127,0);
        tracep->declArray(c+719,"Core execute mdu mul csa_18 io_s", false,-1, 127,0);
        tracep->declArray(c+723,"Core execute mdu mul csa_18 io_c", false,-1, 127,0);
        tracep->declArray(c+1273,"Core execute mdu mul csa_18 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+663,"Core execute mdu mul csa_19 io_x", false,-1, 127,0);
        tracep->declArray(c+667,"Core execute mdu mul csa_19 io_y", false,-1, 127,0);
        tracep->declArray(c+671,"Core execute mdu mul csa_19 io_z", false,-1, 127,0);
        tracep->declArray(c+727,"Core execute mdu mul csa_19 io_s", false,-1, 127,0);
        tracep->declArray(c+731,"Core execute mdu mul csa_19 io_c", false,-1, 127,0);
        tracep->declArray(c+1277,"Core execute mdu mul csa_19 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+675,"Core execute mdu mul csa_20 io_x", false,-1, 127,0);
        tracep->declArray(c+679,"Core execute mdu mul csa_20 io_y", false,-1, 127,0);
        tracep->declArray(c+683,"Core execute mdu mul csa_20 io_z", false,-1, 127,0);
        tracep->declArray(c+735,"Core execute mdu mul csa_20 io_s", false,-1, 127,0);
        tracep->declArray(c+739,"Core execute mdu mul csa_20 io_c", false,-1, 127,0);
        tracep->declArray(c+1281,"Core execute mdu mul csa_20 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+687,"Core execute mdu mul csa_21 io_x", false,-1, 127,0);
        tracep->declArray(c+691,"Core execute mdu mul csa_21 io_y", false,-1, 127,0);
        tracep->declArray(c+695,"Core execute mdu mul csa_21 io_z", false,-1, 127,0);
        tracep->declArray(c+743,"Core execute mdu mul csa_21 io_s", false,-1, 127,0);
        tracep->declArray(c+747,"Core execute mdu mul csa_21 io_c", false,-1, 127,0);
        tracep->declArray(c+1285,"Core execute mdu mul csa_21 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+699,"Core execute mdu mul csa_22 io_x", false,-1, 127,0);
        tracep->declArray(c+703,"Core execute mdu mul csa_22 io_y", false,-1, 127,0);
        tracep->declArray(c+711,"Core execute mdu mul csa_22 io_z", false,-1, 127,0);
        tracep->declArray(c+751,"Core execute mdu mul csa_22 io_s", false,-1, 127,0);
        tracep->declArray(c+755,"Core execute mdu mul csa_22 io_c", false,-1, 127,0);
        tracep->declArray(c+1289,"Core execute mdu mul csa_22 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+715,"Core execute mdu mul csa_23 io_x", false,-1, 127,0);
        tracep->declArray(c+719,"Core execute mdu mul csa_23 io_y", false,-1, 127,0);
        tracep->declArray(c+723,"Core execute mdu mul csa_23 io_z", false,-1, 127,0);
        tracep->declArray(c+759,"Core execute mdu mul csa_23 io_s", false,-1, 127,0);
        tracep->declArray(c+763,"Core execute mdu mul csa_23 io_c", false,-1, 127,0);
        tracep->declArray(c+1293,"Core execute mdu mul csa_23 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+727,"Core execute mdu mul csa_24 io_x", false,-1, 127,0);
        tracep->declArray(c+731,"Core execute mdu mul csa_24 io_y", false,-1, 127,0);
        tracep->declArray(c+735,"Core execute mdu mul csa_24 io_z", false,-1, 127,0);
        tracep->declArray(c+767,"Core execute mdu mul csa_24 io_s", false,-1, 127,0);
        tracep->declArray(c+771,"Core execute mdu mul csa_24 io_c", false,-1, 127,0);
        tracep->declArray(c+1297,"Core execute mdu mul csa_24 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+739,"Core execute mdu mul csa_25 io_x", false,-1, 127,0);
        tracep->declArray(c+743,"Core execute mdu mul csa_25 io_y", false,-1, 127,0);
        tracep->declArray(c+747,"Core execute mdu mul csa_25 io_z", false,-1, 127,0);
        tracep->declArray(c+775,"Core execute mdu mul csa_25 io_s", false,-1, 127,0);
        tracep->declArray(c+779,"Core execute mdu mul csa_25 io_c", false,-1, 127,0);
        tracep->declArray(c+1301,"Core execute mdu mul csa_25 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+783,"Core execute mdu mul csa_26 io_x", false,-1, 127,0);
        tracep->declArray(c+787,"Core execute mdu mul csa_26 io_y", false,-1, 127,0);
        tracep->declArray(c+791,"Core execute mdu mul csa_26 io_z", false,-1, 127,0);
        tracep->declArray(c+795,"Core execute mdu mul csa_26 io_s", false,-1, 127,0);
        tracep->declArray(c+799,"Core execute mdu mul csa_26 io_c", false,-1, 127,0);
        tracep->declArray(c+1305,"Core execute mdu mul csa_26 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+803,"Core execute mdu mul csa_27 io_x", false,-1, 127,0);
        tracep->declArray(c+807,"Core execute mdu mul csa_27 io_y", false,-1, 127,0);
        tracep->declArray(c+811,"Core execute mdu mul csa_27 io_z", false,-1, 127,0);
        tracep->declArray(c+815,"Core execute mdu mul csa_27 io_s", false,-1, 127,0);
        tracep->declArray(c+819,"Core execute mdu mul csa_27 io_c", false,-1, 127,0);
        tracep->declArray(c+1309,"Core execute mdu mul csa_27 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+823,"Core execute mdu mul csa_28 io_x", false,-1, 127,0);
        tracep->declArray(c+827,"Core execute mdu mul csa_28 io_y", false,-1, 127,0);
        tracep->declArray(c+795,"Core execute mdu mul csa_28 io_z", false,-1, 127,0);
        tracep->declArray(c+831,"Core execute mdu mul csa_28 io_s", false,-1, 127,0);
        tracep->declArray(c+835,"Core execute mdu mul csa_28 io_c", false,-1, 127,0);
        tracep->declArray(c+1313,"Core execute mdu mul csa_28 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+815,"Core execute mdu mul csa_29 io_x", false,-1, 127,0);
        tracep->declArray(c+799,"Core execute mdu mul csa_29 io_y", false,-1, 127,0);
        tracep->declArray(c+819,"Core execute mdu mul csa_29 io_z", false,-1, 127,0);
        tracep->declArray(c+839,"Core execute mdu mul csa_29 io_s", false,-1, 127,0);
        tracep->declArray(c+843,"Core execute mdu mul csa_29 io_c", false,-1, 127,0);
        tracep->declArray(c+1317,"Core execute mdu mul csa_29 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+831,"Core execute mdu mul csa_30 io_x", false,-1, 127,0);
        tracep->declArray(c+839,"Core execute mdu mul csa_30 io_y", false,-1, 127,0);
        tracep->declArray(c+835,"Core execute mdu mul csa_30 io_z", false,-1, 127,0);
        tracep->declArray(c+847,"Core execute mdu mul csa_30 io_s", false,-1, 127,0);
        tracep->declArray(c+851,"Core execute mdu mul csa_30 io_c", false,-1, 127,0);
        tracep->declArray(c+1321,"Core execute mdu mul csa_30 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+847,"Core execute mdu mul csa_31 io_x", false,-1, 127,0);
        tracep->declArray(c+851,"Core execute mdu mul csa_31 io_y", false,-1, 127,0);
        tracep->declArray(c+843,"Core execute mdu mul csa_31 io_z", false,-1, 127,0);
        tracep->declArray(c+855,"Core execute mdu mul csa_31 io_s", false,-1, 127,0);
        tracep->declArray(c+859,"Core execute mdu mul csa_31 io_c", false,-1, 127,0);
        tracep->declArray(c+1325,"Core execute mdu mul csa_31 io_c_hi", false,-1, 126,0);
        tracep->declBit(c+1417,"Core execute mdu div clock", false,-1);
        tracep->declBit(c+1418,"Core execute mdu div reset", false,-1);
        tracep->declQuad(c+199,"Core execute mdu div io_in1", false,-1, 63,0);
        tracep->declQuad(c+201,"Core execute mdu div io_in2", false,-1, 63,0);
        tracep->declQuad(c+203,"Core execute mdu div io_out_div", false,-1, 63,0);
        tracep->declQuad(c+205,"Core execute mdu div io_out_rem", false,-1, 63,0);
        tracep->declBit(c+207,"Core execute mdu div io_is_signed", false,-1);
        tracep->declBit(c+208,"Core execute mdu div io_div_valid", false,-1);
        tracep->declBit(c+209,"Core execute mdu div io_div_ready", false,-1);
        tracep->declBus(c+1329,"Core execute mdu div state", false,-1, 1,0);
        tracep->declArray(c+1330,"Core execute mdu div reg_in1", false,-1, 127,0);
        tracep->declArray(c+1334,"Core execute mdu div reg_in2", false,-1, 64,0);
        tracep->declQuad(c+203,"Core execute mdu div quo_out", false,-1, 63,0);
        tracep->declQuad(c+205,"Core execute mdu div rem_out", false,-1, 63,0);
        tracep->declBit(c+1337,"Core execute mdu div quo_neg", false,-1);
        tracep->declBit(c+1338,"Core execute mdu div rem_neg", false,-1);
        tracep->declArray(c+1339,"Core execute mdu div temp_minus1", false,-1, 64,0);
        tracep->declArray(c+1342,"Core execute mdu div minus_value", false,-1, 64,0);
        tracep->declBus(c+1345,"Core execute mdu div cnt", false,-1, 5,0);
        tracep->declQuad(c+1346,"Core execute mdu div in1_num", false,-1, 63,0);
        tracep->declQuad(c+1348,"Core execute mdu div in2_num", false,-1, 63,0);
        tracep->declQuad(c+1350,"Core execute mdu div quo_out_hi", false,-1, 62,0);
        tracep->declArray(c+1352,"Core execute mdu div reg_in1_hi_1", false,-1, 126,0);
        tracep->declQuad(c+1356,"Core execute mdu div reg_in1_lo", false,-1, 62,0);
        tracep->declArray(c+1358,"Core execute mdu div reg_in1_hi_2", false,-1, 126,0);
        tracep->declBit(c+1417,"Core mem clock", false,-1);
        tracep->declBit(c+1418,"Core mem reset", false,-1);
        tracep->declBit(c+1397,"Core mem io_in_ready", false,-1);
        tracep->declBit(c+105,"Core mem io_in_bits_valid", false,-1);
        tracep->declBus(c+106,"Core mem io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+107,"Core mem io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+108,"Core mem io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+109,"Core mem io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+110,"Core mem io_in_bits_mdu_code", false,-1, 3,0);
        tracep->declBus(c+97,"Core mem io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+111,"Core mem io_in_bits_rd_en", false,-1);
        tracep->declBit(c+119,"Core mem io_out_bits_valid", false,-1);
        tracep->declBus(c+120,"Core mem io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+121,"Core mem io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+98,"Core mem io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+29,"Core mem io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+28,"Core mem io_wen_o", false,-1);
        tracep->declQuad(c+30,"Core mem io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+112,"Core mem io_is_ebreak_i", false,-1);
        tracep->declBit(c+122,"Core mem io_is_ebreak_o", false,-1);
        tracep->declBus(c+113,"Core mem io_dmem_req_bits_arwaddr", false,-1, 31,0);
        tracep->declBit(c+1389,"Core mem io_dmem_req_bits_rvalid", false,-1);
        tracep->declBit(c+1390,"Core mem io_dmem_req_bits_wvalid", false,-1);
        tracep->declQuad(c+123,"Core mem io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+125,"Core mem io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declQuad(c+1437,"Core mem io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1439,"Core mem io_dmem_resp_bits_rready", false,-1);
        tracep->declBit(c+1440,"Core mem io_dmem_resp_bits_wready", false,-1);
        tracep->declBus(c+113,"Core mem io_mem_rwaddr_i", false,-1, 31,0);
        tracep->declBit(c+114,"Core mem io_mem_rvalid_i", false,-1);
        tracep->declBit(c+115,"Core mem io_mem_wvalid_i", false,-1);
        tracep->declQuad(c+24,"Core mem io_mem_wdata_i", false,-1, 63,0);
        tracep->declBus(c+109,"Core mem io_mem_wsize_i", false,-1, 1,0);
        tracep->declBus(c+113,"Core mem io_reg_mem_addr_i", false,-1, 31,0);
        tracep->declQuad(c+116,"Core mem io_mem_mduout_i", false,-1, 63,0);
        tracep->declBit(c+118,"Core mem io_mem_mduready_i", false,-1);
        tracep->declBit(c+103,"Core mem io_mem_rd_en", false,-1);
        tracep->declBus(c+104,"Core mem io_mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1398,"Core mem io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+102,"Core mem io_mem_is_load", false,-1);
        tracep->declBit(c+1362,"Core mem mem_reg_decodeop_valid", false,-1);
        tracep->declBus(c+1363,"Core mem mem_reg_decodeop_pc", false,-1, 31,0);
        tracep->declBus(c+1364,"Core mem mem_reg_decodeop_inst", false,-1, 31,0);
        tracep->declBus(c+1365,"Core mem mem_reg_decodeop_mem_code", false,-1, 1,0);
        tracep->declBus(c+1366,"Core mem mem_reg_decodeop_mem_size", false,-1, 1,0);
        tracep->declBus(c+1367,"Core mem mem_reg_decodeop_mdu_code", false,-1, 3,0);
        tracep->declBus(c+104,"Core mem mem_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+1368,"Core mem mem_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+1369,"Core mem waddr", false,-1, 4,0);
        tracep->declBit(c+1370,"Core mem wen", false,-1);
        tracep->declQuad(c+1371,"Core mem wdata", false,-1, 63,0);
        tracep->declBus(c+1373,"Core mem reg_mem_addr", false,-1, 31,0);
        tracep->declBit(c+122,"Core mem io_is_ebreak_o_REG", false,-1);
        tracep->declBit(c+1374,"Core mem mdu_valid", false,-1);
        tracep->declBit(c+1375,"Core mem is_load", false,-1);
        tracep->declBit(c+1376,"Core mem is_store", false,-1);
        tracep->declBit(c+1404,"Core mem req_wait", false,-1);
        tracep->declBit(c+1403,"Core mem stall", false,-1);
        tracep->declBus(c+1377,"Core mem addr_offset", false,-1, 2,0);
        tracep->declBus(c+1378,"Core mem reg_addr_offset", false,-1, 2,0);
        tracep->declBus(c+1379,"Core mem mask", false,-1, 7,0);
        tracep->declBus(c+1380,"Core mem wmask", false,-1, 7,0);
        tracep->declQuad(c+1405,"Core mem ld_data_raw", false,-1, 63,0);
        tracep->declQuad(c+1407,"Core mem ld_data_hi", false,-1, 55,0);
        tracep->declBus(c+1409,"Core mem ld_data_lo", false,-1, 7,0);
        tracep->declQuad(c+1410,"Core mem ld_data_hi_1", false,-1, 47,0);
        tracep->declBus(c+1412,"Core mem ld_data_lo_1", false,-1, 15,0);
        tracep->declBus(c+1413,"Core mem ld_data_hi_2", false,-1, 31,0);
        tracep->declBus(c+1414,"Core mem ld_data_lo_2", false,-1, 31,0);
        tracep->declQuad(c+1415,"Core mem ld_data", false,-1, 63,0);
        tracep->declQuad(c+1391,"Core mem ld_data_u", false,-1, 63,0);
        tracep->declQuad(c+1393,"Core mem load_data", false,-1, 63,0);
        tracep->declBit(c+119,"Core mem io_out_bits_REG_valid", false,-1);
        tracep->declBus(c+120,"Core mem io_out_bits_REG_pc", false,-1, 31,0);
        tracep->declBus(c+121,"Core mem io_out_bits_REG_inst", false,-1, 31,0);
        tracep->declBus(c+29,"Core mem io_waddr_o_REG", false,-1, 4,0);
        tracep->declBit(c+28,"Core mem io_wen_o_REG", false,-1);
        tracep->declQuad(c+30,"Core mem io_wdata_o_REG", false,-1, 63,0);
        tracep->declBit(c+1417,"Core wb_dpi clk", false,-1);
        tracep->declBus(c+121,"Core wb_dpi inst", false,-1, 31,0);
        tracep->declBus(c+120,"Core wb_dpi pc", false,-1, 31,0);
        tracep->declBit(c+122,"Core wb_dpi ebreak", false,-1);
        tracep->declBus(c+1381,"Core wb_dpi inst1", false,-1, 31,0);
        tracep->declBus(c+1382,"Core wb_dpi pc1", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp2949;
    VlWide<4>/*127:0*/ __Vtemp2950;
    VlWide<3>/*95:0*/ __Vtemp2953;
    VlWide<3>/*95:0*/ __Vtemp2955;
    VlWide<4>/*127:0*/ __Vtemp2972;
    VlWide<4>/*127:0*/ __Vtemp2978;
    VlWide<4>/*127:0*/ __Vtemp2995;
    VlWide<4>/*127:0*/ __Vtemp2999;
    VlWide<4>/*127:0*/ __Vtemp3001;
    VlWide<4>/*127:0*/ __Vtemp3018;
    VlWide<4>/*127:0*/ __Vtemp3022;
    VlWide<4>/*127:0*/ __Vtemp3024;
    VlWide<4>/*127:0*/ __Vtemp3041;
    VlWide<4>/*127:0*/ __Vtemp3045;
    VlWide<4>/*127:0*/ __Vtemp3047;
    VlWide<4>/*127:0*/ __Vtemp3064;
    VlWide<4>/*127:0*/ __Vtemp3068;
    VlWide<4>/*127:0*/ __Vtemp3070;
    VlWide<4>/*127:0*/ __Vtemp3087;
    VlWide<4>/*127:0*/ __Vtemp3091;
    VlWide<4>/*127:0*/ __Vtemp3093;
    VlWide<4>/*127:0*/ __Vtemp3110;
    VlWide<4>/*127:0*/ __Vtemp3114;
    VlWide<4>/*127:0*/ __Vtemp3116;
    VlWide<4>/*127:0*/ __Vtemp3133;
    VlWide<4>/*127:0*/ __Vtemp3137;
    VlWide<4>/*127:0*/ __Vtemp3139;
    VlWide<4>/*127:0*/ __Vtemp3156;
    VlWide<4>/*127:0*/ __Vtemp3160;
    VlWide<4>/*127:0*/ __Vtemp3162;
    VlWide<4>/*127:0*/ __Vtemp3179;
    VlWide<4>/*127:0*/ __Vtemp3183;
    VlWide<4>/*127:0*/ __Vtemp3185;
    VlWide<4>/*127:0*/ __Vtemp3202;
    VlWide<4>/*127:0*/ __Vtemp3206;
    VlWide<4>/*127:0*/ __Vtemp3208;
    VlWide<4>/*127:0*/ __Vtemp3225;
    VlWide<4>/*127:0*/ __Vtemp3229;
    VlWide<4>/*127:0*/ __Vtemp3231;
    VlWide<4>/*127:0*/ __Vtemp3248;
    VlWide<4>/*127:0*/ __Vtemp3252;
    VlWide<4>/*127:0*/ __Vtemp3254;
    VlWide<4>/*127:0*/ __Vtemp3271;
    VlWide<4>/*127:0*/ __Vtemp3275;
    VlWide<4>/*127:0*/ __Vtemp3277;
    VlWide<4>/*127:0*/ __Vtemp3294;
    VlWide<4>/*127:0*/ __Vtemp3298;
    VlWide<4>/*127:0*/ __Vtemp3300;
    VlWide<4>/*127:0*/ __Vtemp3317;
    VlWide<4>/*127:0*/ __Vtemp3319;
    VlWide<4>/*127:0*/ __Vtemp3323;
    VlWide<4>/*127:0*/ __Vtemp3340;
    VlWide<4>/*127:0*/ __Vtemp3346;
    VlWide<4>/*127:0*/ __Vtemp3363;
    VlWide<4>/*127:0*/ __Vtemp3367;
    VlWide<4>/*127:0*/ __Vtemp3369;
    VlWide<4>/*127:0*/ __Vtemp3386;
    VlWide<4>/*127:0*/ __Vtemp3390;
    VlWide<4>/*127:0*/ __Vtemp3392;
    VlWide<4>/*127:0*/ __Vtemp3409;
    VlWide<4>/*127:0*/ __Vtemp3413;
    VlWide<4>/*127:0*/ __Vtemp3415;
    VlWide<4>/*127:0*/ __Vtemp3432;
    VlWide<4>/*127:0*/ __Vtemp3436;
    VlWide<4>/*127:0*/ __Vtemp3438;
    VlWide<4>/*127:0*/ __Vtemp3455;
    VlWide<4>/*127:0*/ __Vtemp3459;
    VlWide<4>/*127:0*/ __Vtemp3461;
    VlWide<4>/*127:0*/ __Vtemp3478;
    VlWide<4>/*127:0*/ __Vtemp3482;
    VlWide<4>/*127:0*/ __Vtemp3484;
    VlWide<4>/*127:0*/ __Vtemp3501;
    VlWide<4>/*127:0*/ __Vtemp3505;
    VlWide<4>/*127:0*/ __Vtemp3507;
    VlWide<4>/*127:0*/ __Vtemp3524;
    VlWide<4>/*127:0*/ __Vtemp3528;
    VlWide<4>/*127:0*/ __Vtemp3530;
    VlWide<4>/*127:0*/ __Vtemp3547;
    VlWide<4>/*127:0*/ __Vtemp3551;
    VlWide<4>/*127:0*/ __Vtemp3553;
    VlWide<4>/*127:0*/ __Vtemp3570;
    VlWide<4>/*127:0*/ __Vtemp3574;
    VlWide<4>/*127:0*/ __Vtemp3576;
    VlWide<4>/*127:0*/ __Vtemp3593;
    VlWide<4>/*127:0*/ __Vtemp3597;
    VlWide<4>/*127:0*/ __Vtemp3599;
    VlWide<4>/*127:0*/ __Vtemp3616;
    VlWide<4>/*127:0*/ __Vtemp3620;
    VlWide<4>/*127:0*/ __Vtemp3622;
    VlWide<4>/*127:0*/ __Vtemp3639;
    VlWide<4>/*127:0*/ __Vtemp3643;
    VlWide<4>/*127:0*/ __Vtemp3645;
    VlWide<4>/*127:0*/ __Vtemp3662;
    VlWide<4>/*127:0*/ __Vtemp3666;
    VlWide<4>/*127:0*/ __Vtemp3668;
    VlWide<4>/*127:0*/ __Vtemp3685;
    VlWide<4>/*127:0*/ __Vtemp3687;
    VlWide<4>/*127:0*/ __Vtemp3691;
    VlWide<4>/*127:0*/ __Vtemp3708;
    VlWide<4>/*127:0*/ __Vtemp3714;
    VlWide<4>/*127:0*/ __Vtemp3718;
    VlWide<4>/*127:0*/ __Vtemp3722;
    VlWide<4>/*127:0*/ __Vtemp3726;
    VlWide<4>/*127:0*/ __Vtemp3730;
    VlWide<4>/*127:0*/ __Vtemp3734;
    VlWide<4>/*127:0*/ __Vtemp3738;
    VlWide<4>/*127:0*/ __Vtemp3742;
    VlWide<4>/*127:0*/ __Vtemp3746;
    VlWide<4>/*127:0*/ __Vtemp3750;
    VlWide<4>/*127:0*/ __Vtemp3754;
    VlWide<4>/*127:0*/ __Vtemp3758;
    VlWide<4>/*127:0*/ __Vtemp3762;
    VlWide<4>/*127:0*/ __Vtemp3766;
    VlWide<4>/*127:0*/ __Vtemp3770;
    VlWide<4>/*127:0*/ __Vtemp3774;
    VlWide<4>/*127:0*/ __Vtemp3778;
    VlWide<4>/*127:0*/ __Vtemp3782;
    VlWide<4>/*127:0*/ __Vtemp3786;
    VlWide<4>/*127:0*/ __Vtemp3790;
    VlWide<4>/*127:0*/ __Vtemp3794;
    VlWide<4>/*127:0*/ __Vtemp3796;
    VlWide<4>/*127:0*/ __Vtemp3800;
    VlWide<4>/*127:0*/ __Vtemp3804;
    VlWide<4>/*127:0*/ __Vtemp3808;
    VlWide<4>/*127:0*/ __Vtemp3812;
    VlWide<4>/*127:0*/ __Vtemp3816;
    VlWide<4>/*127:0*/ __Vtemp3820;
    VlWide<4>/*127:0*/ __Vtemp3824;
    VlWide<4>/*127:0*/ __Vtemp3828;
    VlWide<4>/*127:0*/ __Vtemp3832;
    VlWide<4>/*127:0*/ __Vtemp3836;
    VlWide<4>/*127:0*/ __Vtemp3840;
    VlWide<4>/*127:0*/ __Vtemp3844;
    VlWide<4>/*127:0*/ __Vtemp3848;
    VlWide<4>/*127:0*/ __Vtemp3852;
    VlWide<4>/*127:0*/ __Vtemp3856;
    VlWide<4>/*127:0*/ __Vtemp3860;
    VlWide<4>/*127:0*/ __Vtemp3864;
    VlWide<4>/*127:0*/ __Vtemp3868;
    VlWide<4>/*127:0*/ __Vtemp3872;
    VlWide<4>/*127:0*/ __Vtemp3876;
    VlWide<4>/*127:0*/ __Vtemp3877;
    VlWide<4>/*127:0*/ __Vtemp3881;
    VlWide<4>/*127:0*/ __Vtemp3885;
    VlWide<4>/*127:0*/ __Vtemp3889;
    VlWide<4>/*127:0*/ __Vtemp3893;
    VlWide<4>/*127:0*/ __Vtemp3897;
    VlWide<4>/*127:0*/ __Vtemp3901;
    VlWide<4>/*127:0*/ __Vtemp3905;
    VlWide<4>/*127:0*/ __Vtemp3909;
    VlWide<4>/*127:0*/ __Vtemp3913;
    VlWide<4>/*127:0*/ __Vtemp3917;
    VlWide<4>/*127:0*/ __Vtemp3921;
    VlWide<4>/*127:0*/ __Vtemp3925;
    VlWide<4>/*127:0*/ __Vtemp3931;
    VlWide<4>/*127:0*/ __Vtemp3951;
    VlWide<4>/*127:0*/ __Vtemp3961;
    VlWide<4>/*127:0*/ __Vtemp3985;
    VlWide<4>/*127:0*/ __Vtemp3991;
    VlWide<4>/*127:0*/ __Vtemp4011;
    VlWide<4>/*127:0*/ __Vtemp4021;
    VlWide<4>/*127:0*/ __Vtemp4045;
    VlWide<4>/*127:0*/ __Vtemp4049;
    VlWide<4>/*127:0*/ __Vtemp4053;
    VlWide<4>/*127:0*/ __Vtemp4057;
    VlWide<4>/*127:0*/ __Vtemp4061;
    VlWide<4>/*127:0*/ __Vtemp4065;
    VlWide<4>/*127:0*/ __Vtemp4075;
    VlWide<4>/*127:0*/ __Vtemp4099;
    VlWide<4>/*127:0*/ __Vtemp4102;
    VlWide<4>/*127:0*/ __Vtemp4105;
    VlWide<4>/*127:0*/ __Vtemp4108;
    VlWide<4>/*127:0*/ __Vtemp4111;
    VlWide<4>/*127:0*/ __Vtemp4114;
    VlWide<4>/*127:0*/ __Vtemp4117;
    VlWide<4>/*127:0*/ __Vtemp4120;
    VlWide<4>/*127:0*/ __Vtemp4123;
    VlWide<4>/*127:0*/ __Vtemp4126;
    VlWide<4>/*127:0*/ __Vtemp4129;
    VlWide<4>/*127:0*/ __Vtemp4132;
    VlWide<4>/*127:0*/ __Vtemp4135;
    VlWide<4>/*127:0*/ __Vtemp4138;
    VlWide<4>/*127:0*/ __Vtemp4141;
    VlWide<4>/*127:0*/ __Vtemp4144;
    VlWide<3>/*95:0*/ __Vtemp4145;
    VlWide<3>/*95:0*/ __Vtemp4148;
    VlWide<3>/*95:0*/ __Vtemp4151;
    VlWide<3>/*95:0*/ __Vtemp4154;
    VlWide<3>/*95:0*/ __Vtemp4157;
    VlWide<3>/*95:0*/ __Vtemp4160;
    VlWide<3>/*95:0*/ __Vtemp4163;
    VlWide<3>/*95:0*/ __Vtemp4166;
    VlWide<3>/*95:0*/ __Vtemp4169;
    VlWide<3>/*95:0*/ __Vtemp4172;
    VlWide<3>/*95:0*/ __Vtemp4175;
    VlWide<3>/*95:0*/ __Vtemp4178;
    VlWide<3>/*95:0*/ __Vtemp4181;
    VlWide<3>/*95:0*/ __Vtemp4184;
    VlWide<3>/*95:0*/ __Vtemp4187;
    VlWide<3>/*95:0*/ __Vtemp4190;
    VlWide<4>/*127:0*/ __Vtemp4200;
    VlWide<4>/*127:0*/ __Vtemp4224;
    VlWide<4>/*127:0*/ __Vtemp4225;
    VlWide<3>/*95:0*/ __Vtemp4228;
    VlWide<4>/*127:0*/ __Vtemp4231;
    VlWide<4>/*127:0*/ __Vtemp4234;
    VlWide<4>/*127:0*/ __Vtemp4237;
    VlWide<4>/*127:0*/ __Vtemp4240;
    VlWide<4>/*127:0*/ __Vtemp4243;
    VlWide<4>/*127:0*/ __Vtemp4246;
    VlWide<4>/*127:0*/ __Vtemp4249;
    VlWide<4>/*127:0*/ __Vtemp4252;
    VlWide<4>/*127:0*/ __Vtemp4255;
    VlWide<4>/*127:0*/ __Vtemp4258;
    VlWide<4>/*127:0*/ __Vtemp4261;
    VlWide<4>/*127:0*/ __Vtemp4264;
    VlWide<4>/*127:0*/ __Vtemp4267;
    VlWide<4>/*127:0*/ __Vtemp4270;
    VlWide<4>/*127:0*/ __Vtemp4273;
    VlWide<4>/*127:0*/ __Vtemp4276;
    VlWide<4>/*127:0*/ __Vtemp4279;
    VlWide<4>/*127:0*/ __Vtemp4282;
    VlWide<4>/*127:0*/ __Vtemp4285;
    VlWide<4>/*127:0*/ __Vtemp4288;
    VlWide<4>/*127:0*/ __Vtemp4291;
    VlWide<4>/*127:0*/ __Vtemp4294;
    VlWide<4>/*127:0*/ __Vtemp4313;
    VlWide<4>/*127:0*/ __Vtemp4336;
    VlWide<4>/*127:0*/ __Vtemp4355;
    VlWide<4>/*127:0*/ __Vtemp4378;
    VlWide<4>/*127:0*/ __Vtemp4381;
    VlWide<4>/*127:0*/ __Vtemp4384;
    VlWide<4>/*127:0*/ __Vtemp4387;
    VlWide<4>/*127:0*/ __Vtemp4390;
    VlWide<4>/*127:0*/ __Vtemp4393;
    VlWide<4>/*127:0*/ __Vtemp4416;
    VlWide<3>/*95:0*/ __Vtemp4419;
    VlWide<4>/*127:0*/ __Vtemp4422;
    VlWide<4>/*127:0*/ __Vtemp4423;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,((0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc)),32);
        tracep->fullIData(oldp+2,(vlSelf->Core__DOT__fetch__DOT__pc_out),32);
        tracep->fullIData(oldp+3,(vlSelf->Core__DOT__fetch__DOT__reg_pnpc),32);
        tracep->fullIData(oldp+4,(((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_jmp)
                                    ? vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc
                                    : ((IData)(4U) 
                                       + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc))),32);
        tracep->fullIData(oldp+5,(vlSelf->Core__DOT__decode__DOT__pc),32);
        tracep->fullIData(oldp+6,(vlSelf->Core__DOT__decode__DOT__inst),32);
        tracep->fullCData(oldp+7,(((0x37U == (0x7fU 
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
        tracep->fullCData(oldp+8,(((0x37U == (0x7fU 
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
        tracep->fullCData(oldp+9,(((0x37U == (0x7fU 
                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                    ? 0U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_505))),2);
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
        tracep->fullCData(oldp+11,(((0x37U == (0x7fU 
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
        tracep->fullBit(oldp+12,(((0x37U != (0x7fU 
                                             & vlSelf->Core__DOT__decode__DOT__inst)) 
                                  & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793))));
        tracep->fullCData(oldp+13,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 3U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_865))),3);
        tracep->fullCData(oldp+14,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 2U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_937))),3);
        tracep->fullCData(oldp+15,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 7U))),5);
        tracep->fullIData(oldp+16,(((7U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
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
        tracep->fullBit(oldp+17,((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1))));
        tracep->fullCData(oldp+18,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0xfU))),5);
        tracep->fullBit(oldp+19,(vlSelf->Core__DOT__decode_io_ren2));
        tracep->fullCData(oldp+20,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+21,(vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG));
        tracep->fullQData(oldp+22,(vlSelf->Core__DOT__decode__DOT__rs1_reg),64);
        tracep->fullQData(oldp+24,(vlSelf->Core__DOT__decode__DOT__rs2_reg),64);
        tracep->fullIData(oldp+26,(vlSelf->Core__DOT__decode__DOT__reg_pnpc),32);
        tracep->fullBit(oldp+27,((((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                     | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                    | (0U != (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code))) 
                                   & ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard) 
                                      | (IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard))) 
                                  | (((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                      | (2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))) 
                                     & ((IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard) 
                                        | (IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard))))));
        tracep->fullBit(oldp+28,(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG));
        tracep->fullCData(oldp+29,(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG),5);
        tracep->fullQData(oldp+30,(vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG),64);
        tracep->fullQData(oldp+32,(vlSelf->Core__DOT__regfile__DOT__rf_0),64);
        tracep->fullQData(oldp+34,(vlSelf->Core__DOT__regfile__DOT__rf_1),64);
        tracep->fullQData(oldp+36,(vlSelf->Core__DOT__regfile__DOT__rf_2),64);
        tracep->fullQData(oldp+38,(vlSelf->Core__DOT__regfile__DOT__rf_3),64);
        tracep->fullQData(oldp+40,(vlSelf->Core__DOT__regfile__DOT__rf_4),64);
        tracep->fullQData(oldp+42,(vlSelf->Core__DOT__regfile__DOT__rf_5),64);
        tracep->fullQData(oldp+44,(vlSelf->Core__DOT__regfile__DOT__rf_6),64);
        tracep->fullQData(oldp+46,(vlSelf->Core__DOT__regfile__DOT__rf_7),64);
        tracep->fullQData(oldp+48,(vlSelf->Core__DOT__regfile__DOT__rf_8),64);
        tracep->fullQData(oldp+50,(vlSelf->Core__DOT__regfile__DOT__rf_9),64);
        tracep->fullQData(oldp+52,(vlSelf->Core__DOT__regfile__DOT__rf_10),64);
        tracep->fullQData(oldp+54,(vlSelf->Core__DOT__regfile__DOT__rf_11),64);
        tracep->fullQData(oldp+56,(vlSelf->Core__DOT__regfile__DOT__rf_12),64);
        tracep->fullQData(oldp+58,(vlSelf->Core__DOT__regfile__DOT__rf_13),64);
        tracep->fullQData(oldp+60,(vlSelf->Core__DOT__regfile__DOT__rf_14),64);
        tracep->fullQData(oldp+62,(vlSelf->Core__DOT__regfile__DOT__rf_15),64);
        tracep->fullQData(oldp+64,(vlSelf->Core__DOT__regfile__DOT__rf_16),64);
        tracep->fullQData(oldp+66,(vlSelf->Core__DOT__regfile__DOT__rf_17),64);
        tracep->fullQData(oldp+68,(vlSelf->Core__DOT__regfile__DOT__rf_18),64);
        tracep->fullQData(oldp+70,(vlSelf->Core__DOT__regfile__DOT__rf_19),64);
        tracep->fullQData(oldp+72,(vlSelf->Core__DOT__regfile__DOT__rf_20),64);
        tracep->fullQData(oldp+74,(vlSelf->Core__DOT__regfile__DOT__rf_21),64);
        tracep->fullQData(oldp+76,(vlSelf->Core__DOT__regfile__DOT__rf_22),64);
        tracep->fullQData(oldp+78,(vlSelf->Core__DOT__regfile__DOT__rf_23),64);
        tracep->fullQData(oldp+80,(vlSelf->Core__DOT__regfile__DOT__rf_24),64);
        tracep->fullQData(oldp+82,(vlSelf->Core__DOT__regfile__DOT__rf_25),64);
        tracep->fullQData(oldp+84,(vlSelf->Core__DOT__regfile__DOT__rf_26),64);
        tracep->fullQData(oldp+86,(vlSelf->Core__DOT__regfile__DOT__rf_27),64);
        tracep->fullQData(oldp+88,(vlSelf->Core__DOT__regfile__DOT__rf_28),64);
        tracep->fullQData(oldp+90,(vlSelf->Core__DOT__regfile__DOT__rf_29),64);
        tracep->fullQData(oldp+92,(vlSelf->Core__DOT__regfile__DOT__rf_30),64);
        tracep->fullQData(oldp+94,(vlSelf->Core__DOT__regfile__DOT__rf_31),64);
        tracep->fullBit(oldp+96,(vlSelf->Core__DOT__execute_io_ex_rd_en));
        tracep->fullCData(oldp+97,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),5);
        tracep->fullQData(oldp+98,(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out),64);
        tracep->fullBit(oldp+100,(((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                   | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)))));
        tracep->fullBit(oldp+101,((0U != (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code))));
        tracep->fullBit(oldp+102,(((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                   | (2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)))));
        tracep->fullBit(oldp+103,(vlSelf->Core__DOT__mem_io_mem_rd_en));
        tracep->fullCData(oldp+104,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr),5);
        tracep->fullBit(oldp+105,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid));
        tracep->fullIData(oldp+106,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc),32);
        tracep->fullIData(oldp+107,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst),32);
        tracep->fullCData(oldp+108,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code),2);
        tracep->fullCData(oldp+109,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size),2);
        tracep->fullCData(oldp+110,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code),4);
        tracep->fullBit(oldp+111,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en));
        tracep->fullBit(oldp+112,(vlSelf->Core__DOT__execute__DOT__io_is_ebreak_o_REG));
        tracep->fullIData(oldp+113,((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)),32);
        tracep->fullBit(oldp+114,((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                    | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                   & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
        tracep->fullBit(oldp+115,(((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                   & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
        tracep->fullQData(oldp+116,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out),64);
        tracep->fullBit(oldp+118,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__completed));
        tracep->fullBit(oldp+119,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_valid));
        tracep->fullIData(oldp+120,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc),32);
        tracep->fullIData(oldp+121,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_inst),32);
        tracep->fullBit(oldp+122,(vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG));
        VL_EXTEND_WQ(127,64, __Vtemp2949, vlSelf->Core__DOT__decode__DOT__rs2_reg);
        VL_SHIFTL_WWI(127,127,6, __Vtemp2950, __Vtemp2949, 
                      (0x38U & ((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out) 
                                << 3U)));
        tracep->fullQData(oldp+123,((((QData)((IData)(
                                                      __Vtemp2950[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp2950[0U])))),64);
        tracep->fullCData(oldp+125,((0x7fffU & (((7U 
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
        tracep->fullIData(oldp+126,(vlSelf->Core__DOT__io_commit_pc_REG),32);
        tracep->fullBit(oldp+127,(vlSelf->Core__DOT__io_commit_REG));
        tracep->fullIData(oldp+128,((0x1fffffffU & (IData)(
                                                           (vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                                            >> 3U)))),29);
        tracep->fullIData(oldp+129,(vlSelf->Core__DOT__fetch__DOT__inst_out),32);
        tracep->fullBit(oldp+130,(vlSelf->Core__DOT__fetch__DOT__valid_out));
        tracep->fullIData(oldp+131,(vlSelf->Core__DOT__fetch__DOT__pc),32);
        tracep->fullIData(oldp+132,((vlSelf->Core__DOT__fetch__DOT__pc 
                                     >> 2U)),30);
        tracep->fullIData(oldp+133,(((IData)(4U) + 
                                     (0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc))),32);
        tracep->fullBit(oldp+134,(vlSelf->Core__DOT__decode__DOT__inst_valid));
        tracep->fullCData(oldp+135,(vlSelf->Core__DOT__decode__DOT__c0_1),3);
        tracep->fullBit(oldp+136,(vlSelf->Core__DOT__decode__DOT__c0_3));
        tracep->fullCData(oldp+137,(vlSelf->Core__DOT__decode__DOT__c0_4),3);
        tracep->fullIData(oldp+138,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0x1fffffU
                                      : 0U)),21);
        tracep->fullSData(oldp+139,((0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x14U))),11);
        tracep->fullIData(oldp+140,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0x1fffffU
                                        : 0U) << 0xbU) 
                                     | (0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))),32);
        tracep->fullCData(oldp+141,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0x19U))),6);
        tracep->fullIData(oldp+142,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0x1fffffU
                                        : 0U) << 0xbU) 
                                     | ((0x7e0U & (vlSelf->Core__DOT__decode__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 7U))))),32);
        tracep->fullIData(oldp+143,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0xfffffU
                                      : 0U)),20);
        tracep->fullBit(oldp+144,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 7U))));
        tracep->fullCData(oldp+145,((0xfU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 8U))),4);
        tracep->fullIData(oldp+146,(((((vlSelf->Core__DOT__decode__DOT__inst 
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
        tracep->fullIData(oldp+147,((vlSelf->Core__DOT__decode__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullIData(oldp+148,((0xfffff000U & vlSelf->Core__DOT__decode__DOT__inst)),32);
        tracep->fullSData(oldp+149,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0xfffU
                                      : 0U)),12);
        tracep->fullCData(oldp+150,((0xffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0xcU))),8);
        tracep->fullBit(oldp+151,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x14U))));
        tracep->fullSData(oldp+152,((0x3ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x15U))),10);
        tracep->fullIData(oldp+153,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0xfffU
                                        : 0U) << 0x14U) 
                                     | ((0xff000U & vlSelf->Core__DOT__decode__DOT__inst) 
                                        | ((0x800U 
                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))))),32);
        tracep->fullCData(oldp+154,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0x14U))),6);
        tracep->fullIData(oldp+155,((((0x37U != (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst)) 
                                      & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793))
                                      ? (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U))
                                      : (0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))),32);
        tracep->fullIData(oldp+156,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0xfU))),32);
        tracep->fullBit(oldp+157,(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard));
        tracep->fullBit(oldp+158,(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard));
        tracep->fullBit(oldp+159,(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard));
        tracep->fullBit(oldp+160,(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard));
        tracep->fullBit(oldp+161,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
        tracep->fullBit(oldp+162,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))) 
                                   & (IData)(vlSelf->Core__DOT__decode_io_ren2))));
        tracep->fullQData(oldp+163,(vlSelf->Core__DOT__execute__DOT__alu_io_in1),64);
        tracep->fullQData(oldp+165,(vlSelf->Core__DOT__execute__DOT__alu_io_in2),64);
        tracep->fullCData(oldp+167,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code),4);
        tracep->fullBit(oldp+168,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type));
        tracep->fullBit(oldp+169,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp));
        tracep->fullCData(oldp+170,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code),4);
        tracep->fullIData(oldp+171,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm),32);
        tracep->fullIData(oldp+172,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc),32);
        tracep->fullQData(oldp+173,(vlSelf->Core__DOT__execute__DOT__mdu_io_in1),64);
        tracep->fullQData(oldp+175,(vlSelf->Core__DOT__execute__DOT__mdu_io_in2),64);
        tracep->fullCData(oldp+177,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src),3);
        tracep->fullCData(oldp+178,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src),3);
        tracep->fullIData(oldp+179,(((vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+180,(((IData)(4U) + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)),32);
        tracep->fullCData(oldp+181,(vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt),6);
        tracep->fullIData(oldp+182,((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_in1)),32);
        tracep->fullQData(oldp+183,(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0),64);
        tracep->fullIData(oldp+185,((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)),32);
        tracep->fullIData(oldp+186,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        VL_EXTEND_WQ(65,64, __Vtemp2953, vlSelf->Core__DOT__execute__DOT__mdu__DOT__temp_x);
        if (((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
               | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
              | (3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
             & (IData)((vlSelf->Core__DOT__execute__DOT__mdu_io_in1 
                        >> 0x3fU)))) {
            __Vtemp2955[0U] = (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__temp_x);
            __Vtemp2955[1U] = (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__temp_x 
                                       >> 0x20U));
            __Vtemp2955[2U] = (1U & (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__temp_x 
                                             >> 0x3fU)));
        } else {
            __Vtemp2955[0U] = __Vtemp2953[0U];
            __Vtemp2955[1U] = __Vtemp2953[1U];
            __Vtemp2955[2U] = __Vtemp2953[2U];
        }
        tracep->fullWData(oldp+187,(__Vtemp2955),65);
        tracep->fullWData(oldp+190,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2),65);
        tracep->fullQData(oldp+193,((((QData)((IData)(
                                                      vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U])))),64);
        tracep->fullQData(oldp+195,((((QData)((IData)(
                                                      vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[2U])))),64);
        tracep->fullBit(oldp+197,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_mul_valid));
        tracep->fullBit(oldp+198,((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state))));
        tracep->fullQData(oldp+199,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1),64);
        tracep->fullQData(oldp+201,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2),64);
        tracep->fullQData(oldp+203,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_out),64);
        tracep->fullQData(oldp+205,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_out),64);
        tracep->fullBit(oldp+207,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div));
        tracep->fullBit(oldp+208,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_div_valid));
        tracep->fullBit(oldp+209,((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state))));
        tracep->fullCData(oldp+210,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state),2);
        tracep->fullCData(oldp+211,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop),4);
        tracep->fullQData(oldp+212,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x),64);
        tracep->fullQData(oldp+214,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y),64);
        tracep->fullBit(oldp+216,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_divu));
        tracep->fullBit(oldp+217,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_mul));
        tracep->fullBit(oldp+218,(((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                     | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                    | (3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   & (IData)((vlSelf->Core__DOT__execute__DOT__mdu_io_in1 
                                              >> 0x3fU)))));
        tracep->fullBit(oldp+219,((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                    | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   & (IData)((vlSelf->Core__DOT__execute__DOT__mdu_io_in2 
                                              >> 0x3fU)))));
        tracep->fullBit(oldp+220,((((2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                    | (3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   | (4U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)))));
        tracep->fullBit(oldp+221,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_word));
        tracep->fullBit(oldp+222,(((((5U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                     | (6U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                    | (0xaU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   | (0xbU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)))));
        tracep->fullIData(oldp+223,((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x)),32);
        tracep->fullIData(oldp+224,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullQData(oldp+225,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__temp_x),64);
        tracep->fullIData(oldp+227,((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y)),32);
        tracep->fullIData(oldp+228,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullQData(oldp+229,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__temp_y),64);
        tracep->fullBit(oldp+231,((1U & (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__temp_x 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+232,((1U & (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__temp_y 
                                                 >> 0x3fU)))));
        tracep->fullIData(oldp+233,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U]),32);
        tracep->fullIData(oldp+234,(((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U] 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullQData(oldp+235,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out_lo_1),64);
        tracep->fullIData(oldp+237,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out_lo_1 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullWData(oldp+238,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1),65);
        tracep->fullCData(oldp+241,((7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U])),3);
        if ((4U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))) {
            __Vtemp2972[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2972[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2972[2U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2972[3U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        if ((7U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))) {
            __Vtemp2978[0U] = 0U;
            __Vtemp2978[1U] = 0U;
            __Vtemp2978[2U] = 0U;
            __Vtemp2978[3U] = 0U;
        } else {
            __Vtemp2978[0U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_14[0U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp2978[1U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_14[1U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_14[1U]
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
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            __Vtemp2978[2U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_14[2U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_14[2U]
                                    : __Vtemp2972[2U]));
            __Vtemp2978[3U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_14[3U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_14[3U]
                                    : __Vtemp2972[3U]));
        }
        tracep->fullWData(oldp+242,(__Vtemp2978),128);
        tracep->fullCData(oldp+246,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c),2);
        tracep->fullCData(oldp+247,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 2U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 2U)))) {
            __Vtemp2995[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2995[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2995[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp2995[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp2999[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 2U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 2U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 2U)))) {
            __Vtemp3001[0U] = 0U;
            __Vtemp3001[1U] = 0U;
            __Vtemp3001[2U] = 0U;
            __Vtemp3001[3U] = 0U;
        } else {
            __Vtemp3001[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 2U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3001[1U] = __Vtemp2999[1U];
            __Vtemp3001[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_14[2U]
                                    : __Vtemp2995[2U]));
            __Vtemp3001[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_14[3U]
                                    : __Vtemp2995[3U]));
        }
        tracep->fullWData(oldp+248,(__Vtemp3001),128);
        tracep->fullCData(oldp+252,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c),2);
        tracep->fullCData(oldp+253,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 4U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 4U)))) {
            __Vtemp3018[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3018[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3018[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3018[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3022[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 4U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 4U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 4U)))) {
            __Vtemp3024[0U] = 0U;
            __Vtemp3024[1U] = 0U;
            __Vtemp3024[2U] = 0U;
            __Vtemp3024[3U] = 0U;
        } else {
            __Vtemp3024[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 4U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3024[1U] = __Vtemp3022[1U];
            __Vtemp3024[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_14[2U]
                                    : __Vtemp3018[2U]));
            __Vtemp3024[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_14[3U]
                                    : __Vtemp3018[3U]));
        }
        tracep->fullWData(oldp+254,(__Vtemp3024),128);
        tracep->fullCData(oldp+258,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c),2);
        tracep->fullCData(oldp+259,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 6U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 6U)))) {
            __Vtemp3041[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3041[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3041[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3041[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3045[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 6U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 6U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 6U)))) {
            __Vtemp3047[0U] = 0U;
            __Vtemp3047[1U] = 0U;
            __Vtemp3047[2U] = 0U;
            __Vtemp3047[3U] = 0U;
        } else {
            __Vtemp3047[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 6U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3047[1U] = __Vtemp3045[1U];
            __Vtemp3047[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_14[2U]
                                    : __Vtemp3041[2U]));
            __Vtemp3047[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_14[3U]
                                    : __Vtemp3041[3U]));
        }
        tracep->fullWData(oldp+260,(__Vtemp3047),128);
        tracep->fullCData(oldp+264,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c),2);
        tracep->fullCData(oldp+265,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 8U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 8U)))) {
            __Vtemp3064[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3064[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3064[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3064[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3068[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 8U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 8U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 8U)))) {
            __Vtemp3070[0U] = 0U;
            __Vtemp3070[1U] = 0U;
            __Vtemp3070[2U] = 0U;
            __Vtemp3070[3U] = 0U;
        } else {
            __Vtemp3070[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 8U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3070[1U] = __Vtemp3068[1U];
            __Vtemp3070[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_14[2U]
                                    : __Vtemp3064[2U]));
            __Vtemp3070[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_14[3U]
                                    : __Vtemp3064[3U]));
        }
        tracep->fullWData(oldp+266,(__Vtemp3070),128);
        tracep->fullCData(oldp+270,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c),2);
        tracep->fullCData(oldp+271,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0xaU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0xaU)))) {
            __Vtemp3087[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3087[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3087[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3087[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3091[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0xaU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0xaU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0xaU)))) {
            __Vtemp3093[0U] = 0U;
            __Vtemp3093[1U] = 0U;
            __Vtemp3093[2U] = 0U;
            __Vtemp3093[3U] = 0U;
        } else {
            __Vtemp3093[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xaU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3093[1U] = __Vtemp3091[1U];
            __Vtemp3093[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_14[2U]
                                    : __Vtemp3087[2U]));
            __Vtemp3093[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_14[3U]
                                    : __Vtemp3087[3U]));
        }
        tracep->fullWData(oldp+272,(__Vtemp3093),128);
        tracep->fullCData(oldp+276,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c),2);
        tracep->fullCData(oldp+277,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0xcU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0xcU)))) {
            __Vtemp3110[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3110[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3110[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3110[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3114[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0xcU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0xcU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0xcU)))) {
            __Vtemp3116[0U] = 0U;
            __Vtemp3116[1U] = 0U;
            __Vtemp3116[2U] = 0U;
            __Vtemp3116[3U] = 0U;
        } else {
            __Vtemp3116[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xcU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3116[1U] = __Vtemp3114[1U];
            __Vtemp3116[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_14[2U]
                                    : __Vtemp3110[2U]));
            __Vtemp3116[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_14[3U]
                                    : __Vtemp3110[3U]));
        }
        tracep->fullWData(oldp+278,(__Vtemp3116),128);
        tracep->fullCData(oldp+282,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c),2);
        tracep->fullCData(oldp+283,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0xeU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0xeU)))) {
            __Vtemp3133[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3133[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3133[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3133[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3137[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0xeU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0xeU)))) {
            __Vtemp3139[0U] = 0U;
            __Vtemp3139[1U] = 0U;
            __Vtemp3139[2U] = 0U;
            __Vtemp3139[3U] = 0U;
        } else {
            __Vtemp3139[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xeU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3139[1U] = __Vtemp3137[1U];
            __Vtemp3139[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_14[2U]
                                    : __Vtemp3133[2U]));
            __Vtemp3139[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_14[3U]
                                    : __Vtemp3133[3U]));
        }
        tracep->fullWData(oldp+284,(__Vtemp3139),128);
        tracep->fullCData(oldp+288,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c),2);
        tracep->fullCData(oldp+289,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x10U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x10U)))) {
            __Vtemp3156[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3156[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3156[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3156[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3160[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0x10U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x10U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x10U)))) {
            __Vtemp3162[0U] = 0U;
            __Vtemp3162[1U] = 0U;
            __Vtemp3162[2U] = 0U;
            __Vtemp3162[3U] = 0U;
        } else {
            __Vtemp3162[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x10U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3162[1U] = __Vtemp3160[1U];
            __Vtemp3162[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_14[2U]
                                    : __Vtemp3156[2U]));
            __Vtemp3162[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_14[3U]
                                    : __Vtemp3156[3U]));
        }
        tracep->fullWData(oldp+290,(__Vtemp3162),128);
        tracep->fullCData(oldp+294,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c),2);
        tracep->fullCData(oldp+295,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x12U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x12U)))) {
            __Vtemp3179[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3179[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3179[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3179[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3183[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0x12U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x12U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x12U)))) {
            __Vtemp3185[0U] = 0U;
            __Vtemp3185[1U] = 0U;
            __Vtemp3185[2U] = 0U;
            __Vtemp3185[3U] = 0U;
        } else {
            __Vtemp3185[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x12U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3185[1U] = __Vtemp3183[1U];
            __Vtemp3185[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_14[2U]
                                    : __Vtemp3179[2U]));
            __Vtemp3185[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_14[3U]
                                    : __Vtemp3179[3U]));
        }
        tracep->fullWData(oldp+296,(__Vtemp3185),128);
        tracep->fullCData(oldp+300,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c),2);
        tracep->fullCData(oldp+301,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x14U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x14U)))) {
            __Vtemp3202[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3202[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3202[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3202[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3206[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0x14U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x14U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x14U)))) {
            __Vtemp3208[0U] = 0U;
            __Vtemp3208[1U] = 0U;
            __Vtemp3208[2U] = 0U;
            __Vtemp3208[3U] = 0U;
        } else {
            __Vtemp3208[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x14U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3208[1U] = __Vtemp3206[1U];
            __Vtemp3208[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_14[2U]
                                    : __Vtemp3202[2U]));
            __Vtemp3208[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_14[3U]
                                    : __Vtemp3202[3U]));
        }
        tracep->fullWData(oldp+302,(__Vtemp3208),128);
        tracep->fullCData(oldp+306,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c),2);
        tracep->fullCData(oldp+307,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x16U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x16U)))) {
            __Vtemp3225[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3225[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3225[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3225[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3229[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0x16U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x16U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x16U)))) {
            __Vtemp3231[0U] = 0U;
            __Vtemp3231[1U] = 0U;
            __Vtemp3231[2U] = 0U;
            __Vtemp3231[3U] = 0U;
        } else {
            __Vtemp3231[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x16U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3231[1U] = __Vtemp3229[1U];
            __Vtemp3231[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_14[2U]
                                    : __Vtemp3225[2U]));
            __Vtemp3231[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_14[3U]
                                    : __Vtemp3225[3U]));
        }
        tracep->fullWData(oldp+308,(__Vtemp3231),128);
        tracep->fullCData(oldp+312,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c),2);
        tracep->fullCData(oldp+313,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x18U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x18U)))) {
            __Vtemp3248[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3248[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3248[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3248[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        __Vtemp3252[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3254[0U] = 0U;
            __Vtemp3254[1U] = 0U;
            __Vtemp3254[2U] = 0U;
            __Vtemp3254[3U] = 0U;
        } else {
            __Vtemp3254[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3254[1U] = __Vtemp3252[1U];
            __Vtemp3254[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3248[2U]));
            __Vtemp3254[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3248[3U]));
        }
        tracep->fullWData(oldp+314,(__Vtemp3254),128);
        tracep->fullCData(oldp+318,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c),2);
        tracep->fullCData(oldp+319,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x1aU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x1aU)))) {
            __Vtemp3271[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3271[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3271[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3271[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3275[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0x1aU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x1aU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x1aU)))) {
            __Vtemp3277[0U] = 0U;
            __Vtemp3277[1U] = 0U;
            __Vtemp3277[2U] = 0U;
            __Vtemp3277[3U] = 0U;
        } else {
            __Vtemp3277[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1aU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3277[1U] = __Vtemp3275[1U];
            __Vtemp3277[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_14[2U]
                                    : __Vtemp3271[2U]));
            __Vtemp3277[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_14[3U]
                                    : __Vtemp3271[3U]));
        }
        tracep->fullWData(oldp+320,(__Vtemp3277),128);
        tracep->fullCData(oldp+324,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c),2);
        tracep->fullCData(oldp+325,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x1cU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x1cU)))) {
            __Vtemp3294[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3294[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3294[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3294[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3298[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0x1cU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x1cU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x1cU)))) {
            __Vtemp3300[0U] = 0U;
            __Vtemp3300[1U] = 0U;
            __Vtemp3300[2U] = 0U;
            __Vtemp3300[3U] = 0U;
        } else {
            __Vtemp3300[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1cU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3300[1U] = __Vtemp3298[1U];
            __Vtemp3300[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_14[2U]
                                    : __Vtemp3294[2U]));
            __Vtemp3300[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_14[3U]
                                    : __Vtemp3294[3U]));
        }
        tracep->fullWData(oldp+326,(__Vtemp3300),128);
        tracep->fullCData(oldp+330,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c),2);
        tracep->fullCData(oldp+331,((7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                            << 2U) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 0x1eU)))),3);
        if ((4U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                           << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                     >> 0x1eU))))) {
            __Vtemp3317[1U] = (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                >> 0x1fU) | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                             << 1U));
            __Vtemp3317[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3317[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3317[1U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_2[1U]
                                    : ((1U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_2[1U]
                                        : 0U)));
            __Vtemp3317[2U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3317[3U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3319[0U] = ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                          << 2U) | 
                                         (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                          >> 0x1eU))))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14[0U]
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
                                                 vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_2[0U]
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        << 2U) 
                                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x1eU))))
                                                   ? 
                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_2[0U]
                                                   : 0U)))));
        if ((7U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                           << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                     >> 0x1eU))))) {
            __Vtemp3323[0U] = 0U;
            __Vtemp3323[1U] = 0U;
            __Vtemp3323[2U] = 0U;
            __Vtemp3323[3U] = 0U;
        } else {
            __Vtemp3323[0U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14[0U]
                                : __Vtemp3319[0U]);
            __Vtemp3323[1U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14[1U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14[1U]
                                    : __Vtemp3317[1U]));
            __Vtemp3323[2U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14[2U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14[2U]
                                    : __Vtemp3317[2U]));
            __Vtemp3323[3U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14[3U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14[3U]
                                    : __Vtemp3317[3U]));
        }
        tracep->fullWData(oldp+332,(__Vtemp3323),128);
        tracep->fullCData(oldp+336,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c),2);
        tracep->fullCData(oldp+337,((7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U])),3);
        if ((4U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))) {
            __Vtemp3340[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3340[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3340[2U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3340[3U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        if ((7U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))) {
            __Vtemp3346[0U] = 0U;
            __Vtemp3346[1U] = 0U;
            __Vtemp3346[2U] = 0U;
            __Vtemp3346[3U] = 0U;
        } else {
            __Vtemp3346[0U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_14[0U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3346[1U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_14[1U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_14[1U]
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
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            __Vtemp3346[2U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_14[2U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_14[2U]
                                    : __Vtemp3340[2U]));
            __Vtemp3346[3U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_14[3U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_14[3U]
                                    : __Vtemp3340[3U]));
        }
        tracep->fullWData(oldp+338,(__Vtemp3346),128);
        tracep->fullCData(oldp+342,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c),2);
        tracep->fullCData(oldp+343,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 2U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 2U)))) {
            __Vtemp3363[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3363[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3363[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3363[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3367[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 2U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 2U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 2U)))) {
            __Vtemp3369[0U] = 0U;
            __Vtemp3369[1U] = 0U;
            __Vtemp3369[2U] = 0U;
            __Vtemp3369[3U] = 0U;
        } else {
            __Vtemp3369[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 2U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3369[1U] = __Vtemp3367[1U];
            __Vtemp3369[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_14[2U]
                                    : __Vtemp3363[2U]));
            __Vtemp3369[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_14[3U]
                                    : __Vtemp3363[3U]));
        }
        tracep->fullWData(oldp+344,(__Vtemp3369),128);
        tracep->fullCData(oldp+348,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c),2);
        tracep->fullCData(oldp+349,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 4U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 4U)))) {
            __Vtemp3386[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3386[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3386[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3386[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3390[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 4U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 4U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 4U)))) {
            __Vtemp3392[0U] = 0U;
            __Vtemp3392[1U] = 0U;
            __Vtemp3392[2U] = 0U;
            __Vtemp3392[3U] = 0U;
        } else {
            __Vtemp3392[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 4U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3392[1U] = __Vtemp3390[1U];
            __Vtemp3392[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_14[2U]
                                    : __Vtemp3386[2U]));
            __Vtemp3392[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_14[3U]
                                    : __Vtemp3386[3U]));
        }
        tracep->fullWData(oldp+350,(__Vtemp3392),128);
        tracep->fullCData(oldp+354,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c),2);
        tracep->fullCData(oldp+355,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 6U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 6U)))) {
            __Vtemp3409[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3409[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3409[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3409[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3413[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 6U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 6U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 6U)))) {
            __Vtemp3415[0U] = 0U;
            __Vtemp3415[1U] = 0U;
            __Vtemp3415[2U] = 0U;
            __Vtemp3415[3U] = 0U;
        } else {
            __Vtemp3415[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 6U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3415[1U] = __Vtemp3413[1U];
            __Vtemp3415[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_14[2U]
                                    : __Vtemp3409[2U]));
            __Vtemp3415[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_14[3U]
                                    : __Vtemp3409[3U]));
        }
        tracep->fullWData(oldp+356,(__Vtemp3415),128);
        tracep->fullCData(oldp+360,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c),2);
        tracep->fullCData(oldp+361,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 8U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 8U)))) {
            __Vtemp3432[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3432[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3432[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3432[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3436[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 8U))) ? 
                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 8U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 8U)))) {
            __Vtemp3438[0U] = 0U;
            __Vtemp3438[1U] = 0U;
            __Vtemp3438[2U] = 0U;
            __Vtemp3438[3U] = 0U;
        } else {
            __Vtemp3438[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 8U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3438[1U] = __Vtemp3436[1U];
            __Vtemp3438[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_14[2U]
                                    : __Vtemp3432[2U]));
            __Vtemp3438[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_14[3U]
                                    : __Vtemp3432[3U]));
        }
        tracep->fullWData(oldp+362,(__Vtemp3438),128);
        tracep->fullCData(oldp+366,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c),2);
        tracep->fullCData(oldp+367,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0xaU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0xaU)))) {
            __Vtemp3455[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3455[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3455[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3455[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3459[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0xaU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0xaU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0xaU)))) {
            __Vtemp3461[0U] = 0U;
            __Vtemp3461[1U] = 0U;
            __Vtemp3461[2U] = 0U;
            __Vtemp3461[3U] = 0U;
        } else {
            __Vtemp3461[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xaU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3461[1U] = __Vtemp3459[1U];
            __Vtemp3461[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_14[2U]
                                    : __Vtemp3455[2U]));
            __Vtemp3461[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_14[3U]
                                    : __Vtemp3455[3U]));
        }
        tracep->fullWData(oldp+368,(__Vtemp3461),128);
        tracep->fullCData(oldp+372,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c),2);
        tracep->fullCData(oldp+373,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0xcU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0xcU)))) {
            __Vtemp3478[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3478[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3478[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3478[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3482[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0xcU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0xcU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0xcU)))) {
            __Vtemp3484[0U] = 0U;
            __Vtemp3484[1U] = 0U;
            __Vtemp3484[2U] = 0U;
            __Vtemp3484[3U] = 0U;
        } else {
            __Vtemp3484[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xcU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3484[1U] = __Vtemp3482[1U];
            __Vtemp3484[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_14[2U]
                                    : __Vtemp3478[2U]));
            __Vtemp3484[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_14[3U]
                                    : __Vtemp3478[3U]));
        }
        tracep->fullWData(oldp+374,(__Vtemp3484),128);
        tracep->fullCData(oldp+378,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c),2);
        tracep->fullCData(oldp+379,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0xeU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0xeU)))) {
            __Vtemp3501[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3501[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3501[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3501[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3505[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0xeU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0xeU)))) {
            __Vtemp3507[0U] = 0U;
            __Vtemp3507[1U] = 0U;
            __Vtemp3507[2U] = 0U;
            __Vtemp3507[3U] = 0U;
        } else {
            __Vtemp3507[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xeU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3507[1U] = __Vtemp3505[1U];
            __Vtemp3507[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_14[2U]
                                    : __Vtemp3501[2U]));
            __Vtemp3507[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_14[3U]
                                    : __Vtemp3501[3U]));
        }
        tracep->fullWData(oldp+380,(__Vtemp3507),128);
        tracep->fullCData(oldp+384,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c),2);
        tracep->fullCData(oldp+385,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x10U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x10U)))) {
            __Vtemp3524[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3524[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3524[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3524[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3528[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x10U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x10U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x10U)))) {
            __Vtemp3530[0U] = 0U;
            __Vtemp3530[1U] = 0U;
            __Vtemp3530[2U] = 0U;
            __Vtemp3530[3U] = 0U;
        } else {
            __Vtemp3530[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x10U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3530[1U] = __Vtemp3528[1U];
            __Vtemp3530[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_14[2U]
                                    : __Vtemp3524[2U]));
            __Vtemp3530[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_14[3U]
                                    : __Vtemp3524[3U]));
        }
        tracep->fullWData(oldp+386,(__Vtemp3530),128);
        tracep->fullCData(oldp+390,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c),2);
        tracep->fullCData(oldp+391,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x12U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x12U)))) {
            __Vtemp3547[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3547[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3547[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3547[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3551[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x12U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x12U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x12U)))) {
            __Vtemp3553[0U] = 0U;
            __Vtemp3553[1U] = 0U;
            __Vtemp3553[2U] = 0U;
            __Vtemp3553[3U] = 0U;
        } else {
            __Vtemp3553[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x12U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3553[1U] = __Vtemp3551[1U];
            __Vtemp3553[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_14[2U]
                                    : __Vtemp3547[2U]));
            __Vtemp3553[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_14[3U]
                                    : __Vtemp3547[3U]));
        }
        tracep->fullWData(oldp+392,(__Vtemp3553),128);
        tracep->fullCData(oldp+396,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c),2);
        tracep->fullCData(oldp+397,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x14U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x14U)))) {
            __Vtemp3570[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3570[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3570[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3570[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3574[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x14U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x14U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x14U)))) {
            __Vtemp3576[0U] = 0U;
            __Vtemp3576[1U] = 0U;
            __Vtemp3576[2U] = 0U;
            __Vtemp3576[3U] = 0U;
        } else {
            __Vtemp3576[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x14U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3576[1U] = __Vtemp3574[1U];
            __Vtemp3576[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_14[2U]
                                    : __Vtemp3570[2U]));
            __Vtemp3576[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_14[3U]
                                    : __Vtemp3570[3U]));
        }
        tracep->fullWData(oldp+398,(__Vtemp3576),128);
        tracep->fullCData(oldp+402,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c),2);
        tracep->fullCData(oldp+403,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x16U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x16U)))) {
            __Vtemp3593[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3593[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3593[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3593[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3597[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x16U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x16U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x16U)))) {
            __Vtemp3599[0U] = 0U;
            __Vtemp3599[1U] = 0U;
            __Vtemp3599[2U] = 0U;
            __Vtemp3599[3U] = 0U;
        } else {
            __Vtemp3599[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x16U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3599[1U] = __Vtemp3597[1U];
            __Vtemp3599[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_14[2U]
                                    : __Vtemp3593[2U]));
            __Vtemp3599[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_14[3U]
                                    : __Vtemp3593[3U]));
        }
        tracep->fullWData(oldp+404,(__Vtemp3599),128);
        tracep->fullCData(oldp+408,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c),2);
        tracep->fullCData(oldp+409,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x18U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x18U)))) {
            __Vtemp3616[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3616[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3616[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x18U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3616[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x18U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3620[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x18U)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x18U)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x18U)))) {
            __Vtemp3622[0U] = 0U;
            __Vtemp3622[1U] = 0U;
            __Vtemp3622[2U] = 0U;
            __Vtemp3622[3U] = 0U;
        } else {
            __Vtemp3622[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x18U)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3622[1U] = __Vtemp3620[1U];
            __Vtemp3622[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_14[2U]
                                    : __Vtemp3616[2U]));
            __Vtemp3622[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_14[3U]
                                    : __Vtemp3616[3U]));
        }
        tracep->fullWData(oldp+410,(__Vtemp3622),128);
        tracep->fullCData(oldp+414,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c),2);
        tracep->fullCData(oldp+415,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x1aU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x1aU)))) {
            __Vtemp3639[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3639[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3639[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3639[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3643[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x1aU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x1aU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x1aU)))) {
            __Vtemp3645[0U] = 0U;
            __Vtemp3645[1U] = 0U;
            __Vtemp3645[2U] = 0U;
            __Vtemp3645[3U] = 0U;
        } else {
            __Vtemp3645[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1aU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3645[1U] = __Vtemp3643[1U];
            __Vtemp3645[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_14[2U]
                                    : __Vtemp3639[2U]));
            __Vtemp3645[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_14[3U]
                                    : __Vtemp3639[3U]));
        }
        tracep->fullWData(oldp+416,(__Vtemp3645),128);
        tracep->fullCData(oldp+420,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c),2);
        tracep->fullCData(oldp+421,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x1cU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x1cU)))) {
            __Vtemp3662[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3662[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3662[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3662[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3666[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x1cU)))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_14[1U]
                            : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_14[1U]
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
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_2[1U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x1cU)))
                                                      ? 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_2[1U]
                                                      : 0U))))));
        if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x1cU)))) {
            __Vtemp3668[0U] = 0U;
            __Vtemp3668[1U] = 0U;
            __Vtemp3668[2U] = 0U;
            __Vtemp3668[3U] = 0U;
        } else {
            __Vtemp3668[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_14[0U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1cU)))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3668[1U] = __Vtemp3666[1U];
            __Vtemp3668[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_14[2U]
                                    : __Vtemp3662[2U]));
            __Vtemp3668[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_14[3U]
                                    : __Vtemp3662[3U]));
        }
        tracep->fullWData(oldp+422,(__Vtemp3668),128);
        tracep->fullCData(oldp+426,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c),2);
        tracep->fullCData(oldp+427,((7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                            << 2U) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 0x1eU)))),3);
        if ((4U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                           << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                     >> 0x1eU))))) {
            __Vtemp3685[1U] = (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                >> 0x1fU) | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                             << 1U));
            __Vtemp3685[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3685[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3685[1U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_2[1U]
                                    : ((1U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_2[1U]
                                        : 0U)));
            __Vtemp3685[2U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3685[3U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        __Vtemp3687[0U] = ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                          << 2U) | 
                                         (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                          >> 0x1eU))))
                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14[0U]
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
                                                 vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_2[0U]
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                        << 2U) 
                                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x1eU))))
                                                   ? 
                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_2[0U]
                                                   : 0U)))));
        if ((7U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                           << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                     >> 0x1eU))))) {
            __Vtemp3691[0U] = 0U;
            __Vtemp3691[1U] = 0U;
            __Vtemp3691[2U] = 0U;
            __Vtemp3691[3U] = 0U;
        } else {
            __Vtemp3691[0U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14[0U]
                                : __Vtemp3687[0U]);
            __Vtemp3691[1U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14[1U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14[1U]
                                    : __Vtemp3685[1U]));
            __Vtemp3691[2U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14[2U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14[2U]
                                    : __Vtemp3685[2U]));
            __Vtemp3691[3U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14[3U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14[3U]
                                    : __Vtemp3685[3U]));
        }
        tracep->fullWData(oldp+428,(__Vtemp3691),128);
        tracep->fullCData(oldp+432,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c),2);
        tracep->fullCData(oldp+433,((7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U])),3);
        if ((4U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))) {
            __Vtemp3708[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3708[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3708[2U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                ? (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0x3fffffffffffffffULL
                                              : 0ULL)) 
                                    << 2U) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                 << 1U)))
                                : ((2U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_2[2U]
                                    : ((1U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_2[2U]
                                        : 0U)));
            __Vtemp3708[3U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
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
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_2[3U]
                                    : ((1U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_2[3U]
                                        : 0U)));
        }
        if ((7U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))) {
            __Vtemp3714[0U] = 0U;
            __Vtemp3714[1U] = 0U;
            __Vtemp3714[2U] = 0U;
            __Vtemp3714[3U] = 0U;
        } else {
            __Vtemp3714[0U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_14[0U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_14[0U]
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
                                          ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_2[0U]
                                          : ((1U == 
                                              (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_2[0U]
                                              : 0U))))));
            __Vtemp3714[1U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_14[1U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_14[1U]
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
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            __Vtemp3714[2U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_14[2U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_14[2U]
                                    : __Vtemp3708[2U]));
            __Vtemp3714[3U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_14[3U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_14[3U]
                                    : __Vtemp3708[3U]));
        }
        tracep->fullWData(oldp+434,(__Vtemp3714),128);
        tracep->fullCData(oldp+438,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c),2);
        tracep->fullWData(oldp+439,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0),128);
        __Vtemp3718[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U] 
                           << 2U);
        __Vtemp3718[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U] 
                                         << 2U));
        __Vtemp3718[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U] 
                                         << 2U));
        __Vtemp3718[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[3U] 
                                         << 2U));
        tracep->fullWData(oldp+443,(__Vtemp3718),128);
        __Vtemp3722[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U] 
                           << 4U);
        __Vtemp3722[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U] 
                                         << 4U));
        __Vtemp3722[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U] 
                                         << 4U));
        __Vtemp3722[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[3U] 
                                         << 4U));
        tracep->fullWData(oldp+447,(__Vtemp3722),128);
        tracep->fullWData(oldp+451,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s),128);
        __Vtemp3726[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3726[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3726[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3726[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+455,(__Vtemp3726),128);
        __Vtemp3730[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U] 
                           << 6U);
        __Vtemp3730[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U] 
                                         << 6U));
        __Vtemp3730[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U] 
                                         << 6U));
        __Vtemp3730[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[3U] 
                                         << 6U));
        tracep->fullWData(oldp+459,(__Vtemp3730),128);
        __Vtemp3734[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U] 
                           << 8U);
        __Vtemp3734[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U] 
                                         << 8U));
        __Vtemp3734[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U] 
                                         << 8U));
        __Vtemp3734[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[3U] 
                                         << 8U));
        tracep->fullWData(oldp+463,(__Vtemp3734),128);
        __Vtemp3738[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U] 
                           << 0xaU);
        __Vtemp3738[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U] 
                                         << 0xaU));
        __Vtemp3738[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U] 
                                         << 0xaU));
        __Vtemp3738[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[3U] 
                                         << 0xaU));
        tracep->fullWData(oldp+467,(__Vtemp3738),128);
        tracep->fullWData(oldp+471,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s),128);
        __Vtemp3742[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3742[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3742[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3742[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+475,(__Vtemp3742),128);
        __Vtemp3746[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U] 
                           << 0xcU);
        __Vtemp3746[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U] 
                                         << 0xcU));
        __Vtemp3746[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U] 
                                         << 0xcU));
        __Vtemp3746[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[3U] 
                                         << 0xcU));
        tracep->fullWData(oldp+479,(__Vtemp3746),128);
        __Vtemp3750[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U] 
                           << 0xeU);
        __Vtemp3750[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U] 
                                         << 0xeU));
        __Vtemp3750[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U] 
                                         << 0xeU));
        __Vtemp3750[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[3U] 
                                         << 0xeU));
        tracep->fullWData(oldp+483,(__Vtemp3750),128);
        __Vtemp3754[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U] 
                           << 0x10U);
        __Vtemp3754[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U] 
                                         << 0x10U));
        __Vtemp3754[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U] 
                                         << 0x10U));
        __Vtemp3754[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[3U] 
                                         << 0x10U));
        tracep->fullWData(oldp+487,(__Vtemp3754),128);
        tracep->fullWData(oldp+491,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s),128);
        __Vtemp3758[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3758[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3758[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3758[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+495,(__Vtemp3758),128);
        __Vtemp3762[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U] 
                           << 0x12U);
        __Vtemp3762[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U] 
                                        << 0x12U));
        __Vtemp3762[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U] 
                                        << 0x12U));
        __Vtemp3762[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[3U] 
                                        << 0x12U));
        tracep->fullWData(oldp+499,(__Vtemp3762),128);
        __Vtemp3766[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U] 
                           << 0x14U);
        __Vtemp3766[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U] 
                                        << 0x14U));
        __Vtemp3766[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U] 
                                        << 0x14U));
        __Vtemp3766[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[3U] 
                                        << 0x14U));
        tracep->fullWData(oldp+503,(__Vtemp3766),128);
        __Vtemp3770[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U] 
                           << 0x16U);
        __Vtemp3770[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U] 
                                        << 0x16U));
        __Vtemp3770[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U] 
                                        << 0x16U));
        __Vtemp3770[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[3U] 
                                        << 0x16U));
        tracep->fullWData(oldp+507,(__Vtemp3770),128);
        tracep->fullWData(oldp+511,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s),128);
        __Vtemp3774[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3774[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3774[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3774[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+515,(__Vtemp3774),128);
        __Vtemp3778[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U] 
                           << 0x18U);
        __Vtemp3778[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U] 
                                      << 0x18U));
        __Vtemp3778[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U] 
                                      << 0x18U));
        __Vtemp3778[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[3U] 
                                      << 0x18U));
        tracep->fullWData(oldp+519,(__Vtemp3778),128);
        __Vtemp3782[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U] 
                           << 0x1aU);
        __Vtemp3782[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U] 
                                      << 0x1aU));
        __Vtemp3782[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U] 
                                      << 0x1aU));
        __Vtemp3782[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[3U] 
                                      << 0x1aU));
        tracep->fullWData(oldp+523,(__Vtemp3782),128);
        __Vtemp3786[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U] 
                           << 0x1cU);
        __Vtemp3786[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U] 
                                      << 0x1cU));
        __Vtemp3786[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U] 
                                      << 0x1cU));
        __Vtemp3786[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[3U] 
                                      << 0x1cU));
        tracep->fullWData(oldp+527,(__Vtemp3786),128);
        tracep->fullWData(oldp+531,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s),128);
        __Vtemp3790[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3790[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3790[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3790[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+535,(__Vtemp3790),128);
        __Vtemp3794[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U] 
                           << 0x1eU);
        __Vtemp3794[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U] 
                                      << 0x1eU));
        __Vtemp3794[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U] 
                                      << 0x1eU));
        __Vtemp3794[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[3U] 
                                      << 0x1eU));
        tracep->fullWData(oldp+539,(__Vtemp3794),128);
        __Vtemp3796[0U] = 0U;
        __Vtemp3796[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[0U];
        __Vtemp3796[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[1U];
        __Vtemp3796[3U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[2U];
        tracep->fullWData(oldp+543,(__Vtemp3796),128);
        __Vtemp3800[0U] = 0U;
        __Vtemp3800[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
                           << 2U);
        __Vtemp3800[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
                                         << 2U));
        __Vtemp3800[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[2U] 
                                         << 2U));
        tracep->fullWData(oldp+547,(__Vtemp3800),128);
        tracep->fullWData(oldp+551,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s),128);
        __Vtemp3804[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3804[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3804[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3804[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+555,(__Vtemp3804),128);
        __Vtemp3808[0U] = 0U;
        __Vtemp3808[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
                           << 4U);
        __Vtemp3808[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
                                         << 4U));
        __Vtemp3808[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[2U] 
                                         << 4U));
        tracep->fullWData(oldp+559,(__Vtemp3808),128);
        __Vtemp3812[0U] = 0U;
        __Vtemp3812[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                           << 6U);
        __Vtemp3812[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                                         << 6U));
        __Vtemp3812[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[2U] 
                                         << 6U));
        tracep->fullWData(oldp+563,(__Vtemp3812),128);
        __Vtemp3816[0U] = 0U;
        __Vtemp3816[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
                           << 8U);
        __Vtemp3816[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                                         << 8U));
        __Vtemp3816[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[2U] 
                                         << 8U));
        tracep->fullWData(oldp+567,(__Vtemp3816),128);
        tracep->fullWData(oldp+571,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s),128);
        __Vtemp3820[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3820[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3820[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3820[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+575,(__Vtemp3820),128);
        __Vtemp3824[0U] = 0U;
        __Vtemp3824[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
                           << 0xaU);
        __Vtemp3824[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
                                         << 0xaU));
        __Vtemp3824[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[2U] 
                                         << 0xaU));
        tracep->fullWData(oldp+579,(__Vtemp3824),128);
        __Vtemp3828[0U] = 0U;
        __Vtemp3828[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                           << 0xcU);
        __Vtemp3828[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                                         << 0xcU));
        __Vtemp3828[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[2U] 
                                         << 0xcU));
        tracep->fullWData(oldp+583,(__Vtemp3828),128);
        __Vtemp3832[0U] = 0U;
        __Vtemp3832[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
                           << 0xeU);
        __Vtemp3832[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
                                         << 0xeU));
        __Vtemp3832[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[2U] 
                                         << 0xeU));
        tracep->fullWData(oldp+587,(__Vtemp3832),128);
        tracep->fullWData(oldp+591,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s),128);
        __Vtemp3836[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3836[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3836[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3836[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+595,(__Vtemp3836),128);
        __Vtemp3840[0U] = 0U;
        __Vtemp3840[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
                           << 0x10U);
        __Vtemp3840[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
                                         << 0x10U));
        __Vtemp3840[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[2U] 
                                         << 0x10U));
        tracep->fullWData(oldp+599,(__Vtemp3840),128);
        __Vtemp3844[0U] = 0U;
        __Vtemp3844[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                           << 0x12U);
        __Vtemp3844[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                                        << 0x12U));
        __Vtemp3844[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[2U] 
                                        << 0x12U));
        tracep->fullWData(oldp+603,(__Vtemp3844),128);
        __Vtemp3848[0U] = 0U;
        __Vtemp3848[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
                           << 0x14U);
        __Vtemp3848[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
                                        << 0x14U));
        __Vtemp3848[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[2U] 
                                        << 0x14U));
        tracep->fullWData(oldp+607,(__Vtemp3848),128);
        tracep->fullWData(oldp+611,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s),128);
        __Vtemp3852[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3852[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3852[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3852[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+615,(__Vtemp3852),128);
        __Vtemp3856[0U] = 0U;
        __Vtemp3856[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
                           << 0x16U);
        __Vtemp3856[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
                                        << 0x16U));
        __Vtemp3856[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[2U] 
                                        << 0x16U));
        tracep->fullWData(oldp+619,(__Vtemp3856),128);
        __Vtemp3860[0U] = 0U;
        __Vtemp3860[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                           << 0x18U);
        __Vtemp3860[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                                      << 0x18U));
        __Vtemp3860[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[2U] 
                                      << 0x18U));
        tracep->fullWData(oldp+623,(__Vtemp3860),128);
        __Vtemp3864[0U] = 0U;
        __Vtemp3864[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
                           << 0x1aU);
        __Vtemp3864[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
                                      << 0x1aU));
        __Vtemp3864[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[2U] 
                                      << 0x1aU));
        tracep->fullWData(oldp+627,(__Vtemp3864),128);
        tracep->fullWData(oldp+631,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s),128);
        __Vtemp3868[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3868[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3868[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3868[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+635,(__Vtemp3868),128);
        __Vtemp3872[0U] = 0U;
        __Vtemp3872[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U] 
                           << 0x1cU);
        __Vtemp3872[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
                                      << 0x1cU));
        __Vtemp3872[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[2U] 
                                      << 0x1cU));
        tracep->fullWData(oldp+639,(__Vtemp3872),128);
        __Vtemp3876[0U] = 0U;
        __Vtemp3876[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U] 
                           << 0x1eU);
        __Vtemp3876[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                                      << 0x1eU));
        __Vtemp3876[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[2U] 
                                      << 0x1eU));
        tracep->fullWData(oldp+643,(__Vtemp3876),128);
        __Vtemp3877[0U] = 0U;
        __Vtemp3877[1U] = 0U;
        __Vtemp3877[2U] = (IData)((((QData)((IData)(
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U]))));
        __Vtemp3877[3U] = (IData)(((((QData)((IData)(
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U]))) 
                                   >> 0x20U));
        tracep->fullWData(oldp+647,(__Vtemp3877),128);
        tracep->fullWData(oldp+651,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s),128);
        __Vtemp3881[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3881[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3881[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3881[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+655,(__Vtemp3881),128);
        tracep->fullWData(oldp+659,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s),128);
        __Vtemp3885[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3885[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3885[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3885[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+663,(__Vtemp3885),128);
        tracep->fullWData(oldp+667,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s),128);
        __Vtemp3889[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3889[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3889[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3889[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+671,(__Vtemp3889),128);
        tracep->fullWData(oldp+675,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s),128);
        __Vtemp3893[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3893[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3893[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3893[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+679,(__Vtemp3893),128);
        tracep->fullWData(oldp+683,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s),128);
        __Vtemp3897[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3897[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3897[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3897[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+687,(__Vtemp3897),128);
        tracep->fullWData(oldp+691,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s),128);
        __Vtemp3901[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3901[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3901[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3901[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+695,(__Vtemp3901),128);
        tracep->fullWData(oldp+699,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s),128);
        __Vtemp3905[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3905[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3905[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3905[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+703,(__Vtemp3905),128);
        tracep->fullWData(oldp+707,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33),128);
        tracep->fullWData(oldp+711,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s),128);
        __Vtemp3909[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3909[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3909[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3909[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+715,(__Vtemp3909),128);
        tracep->fullWData(oldp+719,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s),128);
        __Vtemp3913[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3913[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3913[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3913[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+723,(__Vtemp3913),128);
        tracep->fullWData(oldp+727,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s),128);
        __Vtemp3917[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3917[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3917[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3917[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+731,(__Vtemp3917),128);
        tracep->fullWData(oldp+735,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s),128);
        __Vtemp3921[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3921[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3921[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3921[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+739,(__Vtemp3921),128);
        tracep->fullWData(oldp+743,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s),128);
        __Vtemp3925[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3925[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3925[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3925[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+747,(__Vtemp3925),128);
        __Vtemp3931[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
                            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                               << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U]);
        __Vtemp3931[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U]);
        __Vtemp3931[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U]);
        __Vtemp3931[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[3U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[3U]);
        tracep->fullWData(oldp+751,(__Vtemp3931),128);
        __Vtemp3951[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
                              << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                        << 2U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                                    << 2U) 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                                                      << 1U))) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U]) 
                              << 1U));
        __Vtemp3951[1U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
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
        __Vtemp3951[2U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U] 
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
        __Vtemp3951[3U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U] 
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
        tracep->fullWData(oldp+755,(__Vtemp3951),128);
        __Vtemp3961[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                             << 1U) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U]) 
                           ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                              << 1U));
        __Vtemp3961[1U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                            << 1U)));
        __Vtemp3961[2U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                            << 1U)));
        __Vtemp3961[3U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[3U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                            << 1U)));
        tracep->fullWData(oldp+759,(__Vtemp3961),128);
        __Vtemp3985[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                              << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                                        << 1U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                                                    << 1U) 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                                      << 2U))) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U]) 
                              << 2U));
        __Vtemp3985[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
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
        __Vtemp3985[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
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
        __Vtemp3985[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
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
        tracep->fullWData(oldp+763,(__Vtemp3985),128);
        __Vtemp3991[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
                            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                               << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U]);
        __Vtemp3991[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U]);
        __Vtemp3991[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U]);
        __Vtemp3991[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[3U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[3U]);
        tracep->fullWData(oldp+767,(__Vtemp3991),128);
        __Vtemp4011[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
                              << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                        << 2U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                                    << 2U) 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                                                      << 1U))) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U]) 
                              << 1U));
        __Vtemp4011[1U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
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
        __Vtemp4011[2U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U] 
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
        __Vtemp4011[3U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U] 
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
        tracep->fullWData(oldp+771,(__Vtemp4011),128);
        __Vtemp4021[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                             << 1U) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U]) 
                           ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                              << 1U));
        __Vtemp4021[1U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                            << 1U)));
        __Vtemp4021[2U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                            << 1U)));
        __Vtemp4021[3U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[3U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                            << 1U)));
        tracep->fullWData(oldp+775,(__Vtemp4021),128);
        __Vtemp4045[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                              << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                                        << 1U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                                                    << 1U) 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                                      << 2U))) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U]) 
                              << 2U));
        __Vtemp4045[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
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
        __Vtemp4045[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
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
        __Vtemp4045[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
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
        tracep->fullWData(oldp+779,(__Vtemp4045),128);
        tracep->fullWData(oldp+783,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0),128);
        tracep->fullWData(oldp+787,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1),128);
        tracep->fullWData(oldp+791,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2),128);
        tracep->fullWData(oldp+795,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s),128);
        __Vtemp4049[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp4049[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp4049[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp4049[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+799,(__Vtemp4049),128);
        tracep->fullWData(oldp+803,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3),128);
        tracep->fullWData(oldp+807,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4),128);
        tracep->fullWData(oldp+811,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5),128);
        tracep->fullWData(oldp+815,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s),128);
        __Vtemp4053[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp4053[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp4053[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp4053[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+819,(__Vtemp4053),128);
        tracep->fullWData(oldp+823,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6),128);
        tracep->fullWData(oldp+827,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7),128);
        tracep->fullWData(oldp+831,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s),128);
        __Vtemp4057[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp4057[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp4057[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp4057[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+835,(__Vtemp4057),128);
        tracep->fullWData(oldp+839,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s),128);
        __Vtemp4061[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp4061[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp4061[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp4061[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+843,(__Vtemp4061),128);
        tracep->fullWData(oldp+847,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s),128);
        __Vtemp4065[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp4065[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp4065[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp4065[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+851,(__Vtemp4065),128);
        __Vtemp4075[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                               << 1U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                          << 1U));
        __Vtemp4075[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                            << 1U)));
        __Vtemp4075[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                            << 1U)));
        __Vtemp4075[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                            << 1U)));
        tracep->fullWData(oldp+855,(__Vtemp4075),128);
        __Vtemp4099[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                              << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                        << 2U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                                   << 2U)) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                         << 1U)));
        __Vtemp4099[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
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
        __Vtemp4099[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
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
        __Vtemp4099[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
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
        tracep->fullWData(oldp+859,(__Vtemp4099),128);
        tracep->fullCData(oldp+863,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state),2);
        tracep->fullWData(oldp+864,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2),67);
        tracep->fullWData(oldp+867,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1),128);
        tracep->fullWData(oldp+871,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2),128);
        tracep->fullWData(oldp+875,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3),128);
        tracep->fullWData(oldp+879,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4),128);
        tracep->fullWData(oldp+883,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5),128);
        tracep->fullWData(oldp+887,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6),128);
        tracep->fullWData(oldp+891,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7),128);
        tracep->fullWData(oldp+895,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8),128);
        tracep->fullWData(oldp+899,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9),128);
        tracep->fullWData(oldp+903,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10),128);
        tracep->fullWData(oldp+907,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11),128);
        tracep->fullWData(oldp+911,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12),128);
        tracep->fullWData(oldp+915,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13),128);
        tracep->fullWData(oldp+919,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14),128);
        tracep->fullWData(oldp+923,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15),128);
        tracep->fullWData(oldp+927,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16),128);
        tracep->fullWData(oldp+931,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17),128);
        tracep->fullWData(oldp+935,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18),128);
        tracep->fullWData(oldp+939,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19),128);
        tracep->fullWData(oldp+943,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20),128);
        tracep->fullWData(oldp+947,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21),128);
        tracep->fullWData(oldp+951,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22),128);
        tracep->fullWData(oldp+955,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23),128);
        tracep->fullWData(oldp+959,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24),128);
        tracep->fullWData(oldp+963,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25),128);
        tracep->fullWData(oldp+967,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26),128);
        tracep->fullWData(oldp+971,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27),128);
        tracep->fullWData(oldp+975,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28),128);
        tracep->fullWData(oldp+979,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29),128);
        tracep->fullWData(oldp+983,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30),128);
        tracep->fullWData(oldp+987,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31),128);
        tracep->fullWData(oldp+991,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32),128);
        tracep->fullBit(oldp+995,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+996,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c))));
        tracep->fullBit(oldp+997,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+998,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c))));
        tracep->fullBit(oldp+999,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+1000,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c))));
        tracep->fullBit(oldp+1001,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1002,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c))));
        tracep->fullBit(oldp+1003,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1004,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c))));
        tracep->fullBit(oldp+1005,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1006,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c))));
        tracep->fullBit(oldp+1007,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1008,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c))));
        tracep->fullBit(oldp+1009,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1010,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c))));
        tracep->fullBit(oldp+1011,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1012,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c))));
        tracep->fullBit(oldp+1013,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1014,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c))));
        tracep->fullBit(oldp+1015,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1016,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c))));
        tracep->fullBit(oldp+1017,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1018,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c))));
        tracep->fullBit(oldp+1019,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1020,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c))));
        tracep->fullBit(oldp+1021,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1022,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c))));
        tracep->fullBit(oldp+1023,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1024,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c))));
        tracep->fullBit(oldp+1025,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1026,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c))));
        tracep->fullBit(oldp+1027,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1028,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c))));
        tracep->fullBit(oldp+1029,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1030,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c))));
        tracep->fullBit(oldp+1031,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1032,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c))));
        tracep->fullBit(oldp+1033,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1034,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c))));
        tracep->fullBit(oldp+1035,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1036,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c))));
        tracep->fullBit(oldp+1037,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1038,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c))));
        tracep->fullBit(oldp+1039,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1040,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c))));
        tracep->fullBit(oldp+1041,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1042,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c))));
        tracep->fullBit(oldp+1043,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1044,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c))));
        tracep->fullBit(oldp+1045,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1046,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c))));
        tracep->fullBit(oldp+1047,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1048,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c))));
        tracep->fullBit(oldp+1049,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1050,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c))));
        tracep->fullBit(oldp+1051,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1052,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c))));
        tracep->fullBit(oldp+1053,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1054,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c))));
        tracep->fullBit(oldp+1055,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1056,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c))));
        tracep->fullBit(oldp+1057,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1058,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c))));
        tracep->fullBit(oldp+1059,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1060,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c))));
        tracep->fullWData(oldp+1061,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out),128);
        __Vtemp4102[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U];
        __Vtemp4102[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U];
        __Vtemp4102[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U];
        __Vtemp4102[3U] = (0x3fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[3U]);
        tracep->fullWData(oldp+1065,(__Vtemp4102),126);
        __Vtemp4105[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U];
        __Vtemp4105[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U];
        __Vtemp4105[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U];
        __Vtemp4105[3U] = (0xfffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[3U]);
        tracep->fullWData(oldp+1069,(__Vtemp4105),124);
        __Vtemp4108[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U];
        __Vtemp4108[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U];
        __Vtemp4108[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U];
        __Vtemp4108[3U] = (0x3ffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[3U]);
        tracep->fullWData(oldp+1073,(__Vtemp4108),122);
        __Vtemp4111[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U];
        __Vtemp4111[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U];
        __Vtemp4111[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U];
        __Vtemp4111[3U] = (0xffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[3U]);
        tracep->fullWData(oldp+1077,(__Vtemp4111),120);
        __Vtemp4114[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U];
        __Vtemp4114[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U];
        __Vtemp4114[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U];
        __Vtemp4114[3U] = (0x3fffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[3U]);
        tracep->fullWData(oldp+1081,(__Vtemp4114),118);
        __Vtemp4117[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U];
        __Vtemp4117[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U];
        __Vtemp4117[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U];
        __Vtemp4117[3U] = (0xfffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[3U]);
        tracep->fullWData(oldp+1085,(__Vtemp4117),116);
        __Vtemp4120[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U];
        __Vtemp4120[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U];
        __Vtemp4120[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U];
        __Vtemp4120[3U] = (0x3ffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[3U]);
        tracep->fullWData(oldp+1089,(__Vtemp4120),114);
        __Vtemp4123[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U];
        __Vtemp4123[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U];
        __Vtemp4123[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U];
        __Vtemp4123[3U] = (0xffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[3U]);
        tracep->fullWData(oldp+1093,(__Vtemp4123),112);
        __Vtemp4126[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U];
        __Vtemp4126[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U];
        __Vtemp4126[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U];
        __Vtemp4126[3U] = (0x3fffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[3U]);
        tracep->fullWData(oldp+1097,(__Vtemp4126),110);
        __Vtemp4129[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U];
        __Vtemp4129[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U];
        __Vtemp4129[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U];
        __Vtemp4129[3U] = (0xfffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[3U]);
        tracep->fullWData(oldp+1101,(__Vtemp4129),108);
        __Vtemp4132[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U];
        __Vtemp4132[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U];
        __Vtemp4132[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U];
        __Vtemp4132[3U] = (0x3ffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[3U]);
        tracep->fullWData(oldp+1105,(__Vtemp4132),106);
        __Vtemp4135[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U];
        __Vtemp4135[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U];
        __Vtemp4135[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U];
        __Vtemp4135[3U] = (0xffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[3U]);
        tracep->fullWData(oldp+1109,(__Vtemp4135),104);
        __Vtemp4138[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U];
        __Vtemp4138[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U];
        __Vtemp4138[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U];
        __Vtemp4138[3U] = (0x3fU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[3U]);
        tracep->fullWData(oldp+1113,(__Vtemp4138),102);
        __Vtemp4141[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U];
        __Vtemp4141[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U];
        __Vtemp4141[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U];
        __Vtemp4141[3U] = (0xfU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[3U]);
        tracep->fullWData(oldp+1117,(__Vtemp4141),100);
        __Vtemp4144[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U];
        __Vtemp4144[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U];
        __Vtemp4144[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U];
        __Vtemp4144[3U] = (3U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[3U]);
        tracep->fullWData(oldp+1121,(__Vtemp4144),98);
        __Vtemp4145[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[0U];
        __Vtemp4145[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[1U];
        __Vtemp4145[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[2U];
        tracep->fullWData(oldp+1125,(__Vtemp4145),96);
        __Vtemp4148[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U];
        __Vtemp4148[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U];
        __Vtemp4148[2U] = (0x3fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[2U]);
        tracep->fullWData(oldp+1128,(__Vtemp4148),94);
        __Vtemp4151[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U];
        __Vtemp4151[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U];
        __Vtemp4151[2U] = (0xfffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[2U]);
        tracep->fullWData(oldp+1131,(__Vtemp4151),92);
        __Vtemp4154[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U];
        __Vtemp4154[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U];
        __Vtemp4154[2U] = (0x3ffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[2U]);
        tracep->fullWData(oldp+1134,(__Vtemp4154),90);
        __Vtemp4157[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U];
        __Vtemp4157[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U];
        __Vtemp4157[2U] = (0xffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[2U]);
        tracep->fullWData(oldp+1137,(__Vtemp4157),88);
        __Vtemp4160[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U];
        __Vtemp4160[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U];
        __Vtemp4160[2U] = (0x3fffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[2U]);
        tracep->fullWData(oldp+1140,(__Vtemp4160),86);
        __Vtemp4163[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U];
        __Vtemp4163[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U];
        __Vtemp4163[2U] = (0xfffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[2U]);
        tracep->fullWData(oldp+1143,(__Vtemp4163),84);
        __Vtemp4166[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U];
        __Vtemp4166[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U];
        __Vtemp4166[2U] = (0x3ffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[2U]);
        tracep->fullWData(oldp+1146,(__Vtemp4166),82);
        __Vtemp4169[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U];
        __Vtemp4169[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U];
        __Vtemp4169[2U] = (0xffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[2U]);
        tracep->fullWData(oldp+1149,(__Vtemp4169),80);
        __Vtemp4172[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U];
        __Vtemp4172[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U];
        __Vtemp4172[2U] = (0x3fffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[2U]);
        tracep->fullWData(oldp+1152,(__Vtemp4172),78);
        __Vtemp4175[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U];
        __Vtemp4175[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U];
        __Vtemp4175[2U] = (0xfffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[2U]);
        tracep->fullWData(oldp+1155,(__Vtemp4175),76);
        __Vtemp4178[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U];
        __Vtemp4178[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U];
        __Vtemp4178[2U] = (0x3ffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[2U]);
        tracep->fullWData(oldp+1158,(__Vtemp4178),74);
        __Vtemp4181[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U];
        __Vtemp4181[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U];
        __Vtemp4181[2U] = (0xffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[2U]);
        tracep->fullWData(oldp+1161,(__Vtemp4181),72);
        __Vtemp4184[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U];
        __Vtemp4184[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U];
        __Vtemp4184[2U] = (0x3fU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[2U]);
        tracep->fullWData(oldp+1164,(__Vtemp4184),70);
        __Vtemp4187[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U];
        __Vtemp4187[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U];
        __Vtemp4187[2U] = (0xfU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[2U]);
        tracep->fullWData(oldp+1167,(__Vtemp4187),68);
        __Vtemp4190[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U];
        __Vtemp4190[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U];
        __Vtemp4190[2U] = (3U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[2U]);
        tracep->fullWData(oldp+1170,(__Vtemp4190),66);
        tracep->fullQData(oldp+1173,((((QData)((IData)(
                                                       vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U])))),64);
        __Vtemp4200[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                               << 1U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                          << 1U));
        __Vtemp4200[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                            << 1U)));
        __Vtemp4200[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                            << 1U)));
        __Vtemp4200[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                            << 1U)));
        __Vtemp4224[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                              << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                        << 2U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                                   << 2U)) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                         << 1U)));
        __Vtemp4224[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
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
        __Vtemp4224[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
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
        __Vtemp4224[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
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
        VL_ADD_W(4, __Vtemp4225, __Vtemp4200, __Vtemp4224);
        tracep->fullWData(oldp+1175,(__Vtemp4225),128);
        tracep->fullBit(oldp+1179,((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2[2U])));
        tracep->fullCData(oldp+1180,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c) 
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
        tracep->fullCData(oldp+1181,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
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
        tracep->fullIData(oldp+1182,(((0x10000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c) 
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
        tracep->fullQData(oldp+1183,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_lo),33);
        tracep->fullCData(oldp+1185,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c) 
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
        tracep->fullCData(oldp+1186,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
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
        tracep->fullIData(oldp+1187,(((0x10000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c) 
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
        tracep->fullQData(oldp+1188,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_hi_1),33);
        __Vtemp4228[0U] = (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]);
        __Vtemp4228[1U] = (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]);
        __Vtemp4228[2U] = (1U & (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]));
        tracep->fullWData(oldp+1190,(__Vtemp4228),65);
        tracep->fullQData(oldp+1193,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0x7fffffffffffffffULL
                                       : 0ULL)),63);
        tracep->fullQData(oldp+1195,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0x3fffffffffffffffULL
                                       : 0ULL)),62);
        tracep->fullQData(oldp+1197,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0ULL : 0x3fffffffffffffffULL)),62);
        tracep->fullQData(oldp+1199,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0ULL : 0x7fffffffffffffffULL)),63);
        __Vtemp4231[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U];
        __Vtemp4231[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U];
        __Vtemp4231[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U];
        __Vtemp4231[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1201,(__Vtemp4231),127);
        __Vtemp4234[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U];
        __Vtemp4234[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U];
        __Vtemp4234[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U];
        __Vtemp4234[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1205,(__Vtemp4234),127);
        __Vtemp4237[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U];
        __Vtemp4237[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U];
        __Vtemp4237[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U];
        __Vtemp4237[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1209,(__Vtemp4237),127);
        __Vtemp4240[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U];
        __Vtemp4240[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U];
        __Vtemp4240[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U];
        __Vtemp4240[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1213,(__Vtemp4240),127);
        __Vtemp4243[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U];
        __Vtemp4243[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U];
        __Vtemp4243[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U];
        __Vtemp4243[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1217,(__Vtemp4243),127);
        __Vtemp4246[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U];
        __Vtemp4246[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U];
        __Vtemp4246[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U];
        __Vtemp4246[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1221,(__Vtemp4246),127);
        __Vtemp4249[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U];
        __Vtemp4249[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U];
        __Vtemp4249[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U];
        __Vtemp4249[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1225,(__Vtemp4249),127);
        __Vtemp4252[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U];
        __Vtemp4252[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U];
        __Vtemp4252[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U];
        __Vtemp4252[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1229,(__Vtemp4252),127);
        __Vtemp4255[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U];
        __Vtemp4255[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U];
        __Vtemp4255[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U];
        __Vtemp4255[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1233,(__Vtemp4255),127);
        __Vtemp4258[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U];
        __Vtemp4258[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U];
        __Vtemp4258[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U];
        __Vtemp4258[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1237,(__Vtemp4258),127);
        __Vtemp4261[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U];
        __Vtemp4261[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U];
        __Vtemp4261[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U];
        __Vtemp4261[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1241,(__Vtemp4261),127);
        __Vtemp4264[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U];
        __Vtemp4264[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U];
        __Vtemp4264[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U];
        __Vtemp4264[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1245,(__Vtemp4264),127);
        __Vtemp4267[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U];
        __Vtemp4267[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U];
        __Vtemp4267[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U];
        __Vtemp4267[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1249,(__Vtemp4267),127);
        __Vtemp4270[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U];
        __Vtemp4270[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U];
        __Vtemp4270[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U];
        __Vtemp4270[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1253,(__Vtemp4270),127);
        __Vtemp4273[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U];
        __Vtemp4273[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U];
        __Vtemp4273[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U];
        __Vtemp4273[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1257,(__Vtemp4273),127);
        __Vtemp4276[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U];
        __Vtemp4276[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U];
        __Vtemp4276[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U];
        __Vtemp4276[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1261,(__Vtemp4276),127);
        __Vtemp4279[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U];
        __Vtemp4279[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U];
        __Vtemp4279[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U];
        __Vtemp4279[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1265,(__Vtemp4279),127);
        __Vtemp4282[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U];
        __Vtemp4282[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U];
        __Vtemp4282[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U];
        __Vtemp4282[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1269,(__Vtemp4282),127);
        __Vtemp4285[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U];
        __Vtemp4285[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U];
        __Vtemp4285[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U];
        __Vtemp4285[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1273,(__Vtemp4285),127);
        __Vtemp4288[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U];
        __Vtemp4288[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U];
        __Vtemp4288[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U];
        __Vtemp4288[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1277,(__Vtemp4288),127);
        __Vtemp4291[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U];
        __Vtemp4291[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U];
        __Vtemp4291[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U];
        __Vtemp4291[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1281,(__Vtemp4291),127);
        __Vtemp4294[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U];
        __Vtemp4294[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U];
        __Vtemp4294[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U];
        __Vtemp4294[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1285,(__Vtemp4294),127);
        __Vtemp4313[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
                             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                            << 1U) 
                                           & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U]));
        __Vtemp4313[1U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U] 
                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                              << 1U))) 
                            | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U]));
        __Vtemp4313[2U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U] 
                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                              << 1U))) 
                            | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U]));
        __Vtemp4313[3U] = (0x7fffffffU & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[3U] 
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
        tracep->fullWData(oldp+1289,(__Vtemp4313),127);
        __Vtemp4336[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                              << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U]) 
                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                               & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                  << 1U))) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U]) 
                                              << 1U));
        __Vtemp4336[1U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
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
        __Vtemp4336[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
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
        __Vtemp4336[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
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
        tracep->fullWData(oldp+1293,(__Vtemp4336),127);
        __Vtemp4355[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
                             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                            << 1U) 
                                           & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U]));
        __Vtemp4355[1U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U] 
                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                              << 1U))) 
                            | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U]));
        __Vtemp4355[2U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U] 
                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                              << 1U))) 
                            | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U]));
        __Vtemp4355[3U] = (0x7fffffffU & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[3U] 
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
        tracep->fullWData(oldp+1297,(__Vtemp4355),127);
        __Vtemp4378[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                              << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U]) 
                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                               & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                  << 1U))) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U]) 
                                              << 1U));
        __Vtemp4378[1U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
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
        __Vtemp4378[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
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
        __Vtemp4378[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
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
        tracep->fullWData(oldp+1301,(__Vtemp4378),127);
        __Vtemp4381[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U];
        __Vtemp4381[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U];
        __Vtemp4381[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U];
        __Vtemp4381[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1305,(__Vtemp4381),127);
        __Vtemp4384[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U];
        __Vtemp4384[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U];
        __Vtemp4384[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U];
        __Vtemp4384[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1309,(__Vtemp4384),127);
        __Vtemp4387[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U];
        __Vtemp4387[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U];
        __Vtemp4387[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U];
        __Vtemp4387[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1313,(__Vtemp4387),127);
        __Vtemp4390[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U];
        __Vtemp4390[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U];
        __Vtemp4390[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U];
        __Vtemp4390[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1317,(__Vtemp4390),127);
        __Vtemp4393[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U];
        __Vtemp4393[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U];
        __Vtemp4393[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U];
        __Vtemp4393[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1321,(__Vtemp4393),127);
        __Vtemp4416[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                           << 1U)) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U]));
        __Vtemp4416[1U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
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
        __Vtemp4416[2U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
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
        __Vtemp4416[3U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
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
        tracep->fullWData(oldp+1325,(__Vtemp4416),127);
        tracep->fullCData(oldp+1329,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state),2);
        tracep->fullWData(oldp+1330,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1),128);
        tracep->fullWData(oldp+1334,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in2),65);
        tracep->fullBit(oldp+1337,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_neg));
        tracep->fullBit(oldp+1338,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_neg));
        __Vtemp4419[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U] 
                            << 1U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U] 
                                      >> 0x1fU));
        __Vtemp4419[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U] 
                            << 1U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U] 
                                      >> 0x1fU));
        __Vtemp4419[2U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U] 
                           >> 0x1fU);
        tracep->fullWData(oldp+1339,(__Vtemp4419),65);
        tracep->fullWData(oldp+1342,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value),65);
        tracep->fullCData(oldp+1345,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__cnt),6);
        tracep->fullQData(oldp+1346,(((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div)
                                       ? ((1U & (IData)(
                                                        (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1 
                                                         >> 0x3fU)))
                                           ? (1ULL 
                                              + (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1))
                                           : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1)
                                       : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1)),64);
        tracep->fullQData(oldp+1348,(((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div)
                                       ? ((1U & (IData)(
                                                        (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2 
                                                         >> 0x3fU)))
                                           ? (1ULL 
                                              + (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2))
                                           : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2)
                                       : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2)),64);
        tracep->fullQData(oldp+1350,((0x7fffffffffffffffULL 
                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_out)),63);
        __Vtemp4422[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U];
        __Vtemp4422[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U];
        __Vtemp4422[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U];
        __Vtemp4422[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U]);
        tracep->fullWData(oldp+1352,(__Vtemp4422),127);
        tracep->fullQData(oldp+1356,((0x7fffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U]))))),63);
        __Vtemp4423[0U] = (IData)((0x7fffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U])))));
        __Vtemp4423[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp4423[2U] = (((IData)((((QData)((IData)(
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
        __Vtemp4423[3U] = ((IData)(((((QData)((IData)(
                                                      vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[0U]))) 
                                    >> 0x20U)) >> 1U);
        tracep->fullWData(oldp+1358,(__Vtemp4423),127);
        tracep->fullBit(oldp+1362,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid));
        tracep->fullIData(oldp+1363,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_pc),32);
        tracep->fullIData(oldp+1364,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_inst),32);
        tracep->fullCData(oldp+1365,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code),2);
        tracep->fullCData(oldp+1366,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size),2);
        tracep->fullCData(oldp+1367,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mdu_code),4);
        tracep->fullBit(oldp+1368,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en));
        tracep->fullCData(oldp+1369,(vlSelf->Core__DOT__mem__DOT__waddr),5);
        tracep->fullBit(oldp+1370,(vlSelf->Core__DOT__mem__DOT__wen));
        tracep->fullQData(oldp+1371,(vlSelf->Core__DOT__mem__DOT__wdata),64);
        tracep->fullIData(oldp+1373,(vlSelf->Core__DOT__mem__DOT__reg_mem_addr),32);
        tracep->fullBit(oldp+1374,(vlSelf->Core__DOT__mem__DOT__mdu_valid));
        tracep->fullBit(oldp+1375,(vlSelf->Core__DOT__mem__DOT__is_load));
        tracep->fullBit(oldp+1376,((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))));
        tracep->fullCData(oldp+1377,((7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out))),3);
        tracep->fullCData(oldp+1378,((7U & vlSelf->Core__DOT__mem__DOT__reg_mem_addr)),3);
        tracep->fullCData(oldp+1379,(((7U == (7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
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
        tracep->fullCData(oldp+1380,(((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                       ? 0xffU : ((2U 
                                                   == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                   ? 0xfU
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                    ? 3U
                                                    : 1U)))),8);
        tracep->fullIData(oldp+1381,(vlSelf->Core__DOT__wb_dpi__DOT__inst1),32);
        tracep->fullIData(oldp+1382,(vlSelf->Core__DOT__wb_dpi__DOT__pc1),32);
        tracep->fullBit(oldp+1383,(((~ ((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis) 
                                        | (IData)(vlSelf->Core__DOT__decode__DOT__stall))) 
                                    & (IData)(vlSelf->Core__DOT__decode__DOT__inst_valid))));
        tracep->fullBit(oldp+1384,(((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
                                    & ((IData)(vlSelf->Core__DOT__decode__DOT__inst_valid) 
                                       & (IData)(vlSelf->Core__DOT__decode__DOT__c0_3)))));
        tracep->fullQData(oldp+1385,(((0U != (0x1fU 
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
        tracep->fullQData(oldp+1387,(((0U != (0x1fU 
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
        tracep->fullBit(oldp+1389,(((~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)) 
                                    & (((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                        | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                       & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)))));
        tracep->fullBit(oldp+1390,(((~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)) 
                                    & ((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                       & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)))));
        tracep->fullQData(oldp+1391,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                       ? vlSelf->Core__DOT__mem__DOT___ld_data_u_T_9
                                       : 0ULL)),64);
        tracep->fullQData(oldp+1393,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                       ? ((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                           ? vlSelf->Core__DOT__mem__DOT___ld_data_u_T_9
                                           : 0ULL) : 
                                      ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                        ? vlSelf->Core__DOT__mem__DOT__ld_data
                                        : 0ULL))),64);
        tracep->fullBit(oldp+1395,((1U & (~ (IData)(vlSelf->Core__DOT__decode__DOT__stall)))));
        tracep->fullBit(oldp+1396,(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis));
        tracep->fullBit(oldp+1397,((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)))));
        tracep->fullQData(oldp+1398,(vlSelf->Core__DOT__mem_io_mem_rd_data),64);
        tracep->fullBit(oldp+1400,(vlSelf->Core__DOT__fetch__DOT__stall));
        tracep->fullBit(oldp+1401,(vlSelf->Core__DOT__decode__DOT__stall));
        tracep->fullBit(oldp+1402,(vlSelf->Core__DOT__execute__DOT__mdu_io_mdu_valid));
        tracep->fullBit(oldp+1403,(vlSelf->Core__DOT__mem__DOT__stall));
        tracep->fullBit(oldp+1404,(vlSelf->Core__DOT__mem__DOT__req_wait));
        tracep->fullQData(oldp+1405,(vlSelf->Core__DOT__mem__DOT__ld_data_raw),64);
        tracep->fullQData(oldp+1407,(((1U & (IData)(
                                                    (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                     >> 7U)))
                                       ? 0xffffffffffffffULL
                                       : 0ULL)),56);
        tracep->fullCData(oldp+1409,((0xffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),8);
        tracep->fullQData(oldp+1410,(((1U & (IData)(
                                                    (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                     >> 0xfU)))
                                       ? 0xffffffffffffULL
                                       : 0ULL)),48);
        tracep->fullSData(oldp+1412,((0xffffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),16);
        tracep->fullIData(oldp+1413,(((1U & (IData)(
                                                    (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                     >> 0x1fU)))
                                       ? 0xffffffffU
                                       : 0U)),32);
        tracep->fullIData(oldp+1414,((IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)),32);
        tracep->fullQData(oldp+1415,(vlSelf->Core__DOT__mem__DOT__ld_data),64);
        tracep->fullBit(oldp+1417,(vlSelf->clock));
        tracep->fullBit(oldp+1418,(vlSelf->reset));
        tracep->fullIData(oldp+1419,(vlSelf->io_imem_raddr),32);
        tracep->fullIData(oldp+1420,(vlSelf->io_imem_waddr),32);
        tracep->fullQData(oldp+1421,(vlSelf->io_imem_wdata),64);
        tracep->fullBit(oldp+1423,(vlSelf->io_imem_ren));
        tracep->fullBit(oldp+1424,(vlSelf->io_imem_wen));
        tracep->fullCData(oldp+1425,(vlSelf->io_imem_wmask),8);
        tracep->fullQData(oldp+1426,(vlSelf->io_imem_rdata),64);
        tracep->fullBit(oldp+1428,(vlSelf->io_imem_read_ok));
        tracep->fullBit(oldp+1429,(vlSelf->io_imem_write_ok));
        tracep->fullIData(oldp+1430,(vlSelf->io_dmem_raddr),32);
        tracep->fullIData(oldp+1431,(vlSelf->io_dmem_waddr),32);
        tracep->fullQData(oldp+1432,(vlSelf->io_dmem_wdata),64);
        tracep->fullBit(oldp+1434,(vlSelf->io_dmem_ren));
        tracep->fullBit(oldp+1435,(vlSelf->io_dmem_wen));
        tracep->fullCData(oldp+1436,(vlSelf->io_dmem_wmask),8);
        tracep->fullQData(oldp+1437,(vlSelf->io_dmem_rdata),64);
        tracep->fullBit(oldp+1439,(vlSelf->io_dmem_read_ok));
        tracep->fullBit(oldp+1440,(vlSelf->io_dmem_write_ok));
        tracep->fullIData(oldp+1441,(vlSelf->io_commit_pc),32);
        tracep->fullQData(oldp+1442,(vlSelf->io_regs_out_0),64);
        tracep->fullQData(oldp+1444,(vlSelf->io_regs_out_1),64);
        tracep->fullQData(oldp+1446,(vlSelf->io_regs_out_2),64);
        tracep->fullQData(oldp+1448,(vlSelf->io_regs_out_3),64);
        tracep->fullQData(oldp+1450,(vlSelf->io_regs_out_4),64);
        tracep->fullQData(oldp+1452,(vlSelf->io_regs_out_5),64);
        tracep->fullQData(oldp+1454,(vlSelf->io_regs_out_6),64);
        tracep->fullQData(oldp+1456,(vlSelf->io_regs_out_7),64);
        tracep->fullQData(oldp+1458,(vlSelf->io_regs_out_8),64);
        tracep->fullQData(oldp+1460,(vlSelf->io_regs_out_9),64);
        tracep->fullQData(oldp+1462,(vlSelf->io_regs_out_10),64);
        tracep->fullQData(oldp+1464,(vlSelf->io_regs_out_11),64);
        tracep->fullQData(oldp+1466,(vlSelf->io_regs_out_12),64);
        tracep->fullQData(oldp+1468,(vlSelf->io_regs_out_13),64);
        tracep->fullQData(oldp+1470,(vlSelf->io_regs_out_14),64);
        tracep->fullQData(oldp+1472,(vlSelf->io_regs_out_15),64);
        tracep->fullQData(oldp+1474,(vlSelf->io_regs_out_16),64);
        tracep->fullQData(oldp+1476,(vlSelf->io_regs_out_17),64);
        tracep->fullQData(oldp+1478,(vlSelf->io_regs_out_18),64);
        tracep->fullQData(oldp+1480,(vlSelf->io_regs_out_19),64);
        tracep->fullQData(oldp+1482,(vlSelf->io_regs_out_20),64);
        tracep->fullQData(oldp+1484,(vlSelf->io_regs_out_21),64);
        tracep->fullQData(oldp+1486,(vlSelf->io_regs_out_22),64);
        tracep->fullQData(oldp+1488,(vlSelf->io_regs_out_23),64);
        tracep->fullQData(oldp+1490,(vlSelf->io_regs_out_24),64);
        tracep->fullQData(oldp+1492,(vlSelf->io_regs_out_25),64);
        tracep->fullQData(oldp+1494,(vlSelf->io_regs_out_26),64);
        tracep->fullQData(oldp+1496,(vlSelf->io_regs_out_27),64);
        tracep->fullQData(oldp+1498,(vlSelf->io_regs_out_28),64);
        tracep->fullQData(oldp+1500,(vlSelf->io_regs_out_29),64);
        tracep->fullQData(oldp+1502,(vlSelf->io_regs_out_30),64);
        tracep->fullQData(oldp+1504,(vlSelf->io_regs_out_31),64);
        tracep->fullQData(oldp+1506,(vlSelf->io_regs_in_0),64);
        tracep->fullQData(oldp+1508,(vlSelf->io_regs_in_1),64);
        tracep->fullQData(oldp+1510,(vlSelf->io_regs_in_2),64);
        tracep->fullQData(oldp+1512,(vlSelf->io_regs_in_3),64);
        tracep->fullQData(oldp+1514,(vlSelf->io_regs_in_4),64);
        tracep->fullQData(oldp+1516,(vlSelf->io_regs_in_5),64);
        tracep->fullQData(oldp+1518,(vlSelf->io_regs_in_6),64);
        tracep->fullQData(oldp+1520,(vlSelf->io_regs_in_7),64);
        tracep->fullQData(oldp+1522,(vlSelf->io_regs_in_8),64);
        tracep->fullQData(oldp+1524,(vlSelf->io_regs_in_9),64);
        tracep->fullQData(oldp+1526,(vlSelf->io_regs_in_10),64);
        tracep->fullQData(oldp+1528,(vlSelf->io_regs_in_11),64);
        tracep->fullQData(oldp+1530,(vlSelf->io_regs_in_12),64);
        tracep->fullQData(oldp+1532,(vlSelf->io_regs_in_13),64);
        tracep->fullQData(oldp+1534,(vlSelf->io_regs_in_14),64);
        tracep->fullQData(oldp+1536,(vlSelf->io_regs_in_15),64);
        tracep->fullQData(oldp+1538,(vlSelf->io_regs_in_16),64);
        tracep->fullQData(oldp+1540,(vlSelf->io_regs_in_17),64);
        tracep->fullQData(oldp+1542,(vlSelf->io_regs_in_18),64);
        tracep->fullQData(oldp+1544,(vlSelf->io_regs_in_19),64);
        tracep->fullQData(oldp+1546,(vlSelf->io_regs_in_20),64);
        tracep->fullQData(oldp+1548,(vlSelf->io_regs_in_21),64);
        tracep->fullQData(oldp+1550,(vlSelf->io_regs_in_22),64);
        tracep->fullQData(oldp+1552,(vlSelf->io_regs_in_23),64);
        tracep->fullQData(oldp+1554,(vlSelf->io_regs_in_24),64);
        tracep->fullQData(oldp+1556,(vlSelf->io_regs_in_25),64);
        tracep->fullQData(oldp+1558,(vlSelf->io_regs_in_26),64);
        tracep->fullQData(oldp+1560,(vlSelf->io_regs_in_27),64);
        tracep->fullQData(oldp+1562,(vlSelf->io_regs_in_28),64);
        tracep->fullQData(oldp+1564,(vlSelf->io_regs_in_29),64);
        tracep->fullQData(oldp+1566,(vlSelf->io_regs_in_30),64);
        tracep->fullQData(oldp+1568,(vlSelf->io_regs_in_31),64);
        tracep->fullIData(oldp+1570,(vlSelf->io_pc_in),32);
        tracep->fullBit(oldp+1571,(vlSelf->io_write_regs));
        tracep->fullBit(oldp+1572,(vlSelf->io_commit));
        tracep->fullIData(oldp+1573,((IData)(vlSelf->io_imem_rdata)),32);
        tracep->fullIData(oldp+1574,(((IData)(vlSelf->io_imem_read_ok)
                                       ? vlSelf->Core__DOT__fetch__DOT__inst_out
                                       : 0U)),32);
        tracep->fullBit(oldp+1575,(((IData)(vlSelf->io_imem_read_ok) 
                                    & (IData)(vlSelf->Core__DOT__fetch__DOT__valid_out))));
        tracep->fullBit(oldp+1576,((1U & (~ (IData)(vlSelf->io_imem_read_ok)))));
        tracep->fullBit(oldp+1577,(1U));
    }
}
