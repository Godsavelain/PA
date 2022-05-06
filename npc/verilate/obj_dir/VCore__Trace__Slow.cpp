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
        tracep->declBit(c+1355,"clock", false,-1);
        tracep->declBit(c+1356,"reset", false,-1);
        tracep->declBus(c+1357,"io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+1358,"io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+1359,"io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+1361,"io_imem_ren", false,-1);
        tracep->declBit(c+1362,"io_imem_wen", false,-1);
        tracep->declBus(c+1363,"io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+1364,"io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+1366,"io_imem_read_ok", false,-1);
        tracep->declBit(c+1367,"io_imem_write_ok", false,-1);
        tracep->declBus(c+1368,"io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+1369,"io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+1370,"io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+1372,"io_dmem_ren", false,-1);
        tracep->declBit(c+1373,"io_dmem_wen", false,-1);
        tracep->declBus(c+1374,"io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+1375,"io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+1377,"io_dmem_read_ok", false,-1);
        tracep->declBit(c+1378,"io_dmem_write_ok", false,-1);
        tracep->declBus(c+1379,"io_commit_pc", false,-1, 31,0);
        tracep->declQuad(c+1380,"io_regs_out_0", false,-1, 63,0);
        tracep->declQuad(c+1382,"io_regs_out_1", false,-1, 63,0);
        tracep->declQuad(c+1384,"io_regs_out_2", false,-1, 63,0);
        tracep->declQuad(c+1386,"io_regs_out_3", false,-1, 63,0);
        tracep->declQuad(c+1388,"io_regs_out_4", false,-1, 63,0);
        tracep->declQuad(c+1390,"io_regs_out_5", false,-1, 63,0);
        tracep->declQuad(c+1392,"io_regs_out_6", false,-1, 63,0);
        tracep->declQuad(c+1394,"io_regs_out_7", false,-1, 63,0);
        tracep->declQuad(c+1396,"io_regs_out_8", false,-1, 63,0);
        tracep->declQuad(c+1398,"io_regs_out_9", false,-1, 63,0);
        tracep->declQuad(c+1400,"io_regs_out_10", false,-1, 63,0);
        tracep->declQuad(c+1402,"io_regs_out_11", false,-1, 63,0);
        tracep->declQuad(c+1404,"io_regs_out_12", false,-1, 63,0);
        tracep->declQuad(c+1406,"io_regs_out_13", false,-1, 63,0);
        tracep->declQuad(c+1408,"io_regs_out_14", false,-1, 63,0);
        tracep->declQuad(c+1410,"io_regs_out_15", false,-1, 63,0);
        tracep->declQuad(c+1412,"io_regs_out_16", false,-1, 63,0);
        tracep->declQuad(c+1414,"io_regs_out_17", false,-1, 63,0);
        tracep->declQuad(c+1416,"io_regs_out_18", false,-1, 63,0);
        tracep->declQuad(c+1418,"io_regs_out_19", false,-1, 63,0);
        tracep->declQuad(c+1420,"io_regs_out_20", false,-1, 63,0);
        tracep->declQuad(c+1422,"io_regs_out_21", false,-1, 63,0);
        tracep->declQuad(c+1424,"io_regs_out_22", false,-1, 63,0);
        tracep->declQuad(c+1426,"io_regs_out_23", false,-1, 63,0);
        tracep->declQuad(c+1428,"io_regs_out_24", false,-1, 63,0);
        tracep->declQuad(c+1430,"io_regs_out_25", false,-1, 63,0);
        tracep->declQuad(c+1432,"io_regs_out_26", false,-1, 63,0);
        tracep->declQuad(c+1434,"io_regs_out_27", false,-1, 63,0);
        tracep->declQuad(c+1436,"io_regs_out_28", false,-1, 63,0);
        tracep->declQuad(c+1438,"io_regs_out_29", false,-1, 63,0);
        tracep->declQuad(c+1440,"io_regs_out_30", false,-1, 63,0);
        tracep->declQuad(c+1442,"io_regs_out_31", false,-1, 63,0);
        tracep->declQuad(c+1444,"io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+1446,"io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+1448,"io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+1450,"io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+1452,"io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+1454,"io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+1456,"io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+1458,"io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+1460,"io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+1462,"io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+1464,"io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+1466,"io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+1468,"io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+1470,"io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+1472,"io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+1474,"io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+1476,"io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+1478,"io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+1480,"io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+1482,"io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+1484,"io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+1486,"io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+1488,"io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+1490,"io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+1492,"io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+1494,"io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+1496,"io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+1498,"io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+1500,"io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+1502,"io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+1504,"io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+1506,"io_regs_in_31", false,-1, 63,0);
        tracep->declBus(c+1508,"io_pc_in", false,-1, 31,0);
        tracep->declBit(c+1509,"io_write_regs", false,-1);
        tracep->declBit(c+1510,"io_commit", false,-1);
        tracep->declBit(c+1355,"Core clock", false,-1);
        tracep->declBit(c+1356,"Core reset", false,-1);
        tracep->declBus(c+1357,"Core io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+1358,"Core io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+1359,"Core io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+1361,"Core io_imem_ren", false,-1);
        tracep->declBit(c+1362,"Core io_imem_wen", false,-1);
        tracep->declBus(c+1363,"Core io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+1364,"Core io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+1366,"Core io_imem_read_ok", false,-1);
        tracep->declBit(c+1367,"Core io_imem_write_ok", false,-1);
        tracep->declBus(c+1368,"Core io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+1369,"Core io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+1370,"Core io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+1372,"Core io_dmem_ren", false,-1);
        tracep->declBit(c+1373,"Core io_dmem_wen", false,-1);
        tracep->declBus(c+1374,"Core io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+1375,"Core io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+1377,"Core io_dmem_read_ok", false,-1);
        tracep->declBit(c+1378,"Core io_dmem_write_ok", false,-1);
        tracep->declBus(c+1379,"Core io_commit_pc", false,-1, 31,0);
        tracep->declQuad(c+1380,"Core io_regs_out_0", false,-1, 63,0);
        tracep->declQuad(c+1382,"Core io_regs_out_1", false,-1, 63,0);
        tracep->declQuad(c+1384,"Core io_regs_out_2", false,-1, 63,0);
        tracep->declQuad(c+1386,"Core io_regs_out_3", false,-1, 63,0);
        tracep->declQuad(c+1388,"Core io_regs_out_4", false,-1, 63,0);
        tracep->declQuad(c+1390,"Core io_regs_out_5", false,-1, 63,0);
        tracep->declQuad(c+1392,"Core io_regs_out_6", false,-1, 63,0);
        tracep->declQuad(c+1394,"Core io_regs_out_7", false,-1, 63,0);
        tracep->declQuad(c+1396,"Core io_regs_out_8", false,-1, 63,0);
        tracep->declQuad(c+1398,"Core io_regs_out_9", false,-1, 63,0);
        tracep->declQuad(c+1400,"Core io_regs_out_10", false,-1, 63,0);
        tracep->declQuad(c+1402,"Core io_regs_out_11", false,-1, 63,0);
        tracep->declQuad(c+1404,"Core io_regs_out_12", false,-1, 63,0);
        tracep->declQuad(c+1406,"Core io_regs_out_13", false,-1, 63,0);
        tracep->declQuad(c+1408,"Core io_regs_out_14", false,-1, 63,0);
        tracep->declQuad(c+1410,"Core io_regs_out_15", false,-1, 63,0);
        tracep->declQuad(c+1412,"Core io_regs_out_16", false,-1, 63,0);
        tracep->declQuad(c+1414,"Core io_regs_out_17", false,-1, 63,0);
        tracep->declQuad(c+1416,"Core io_regs_out_18", false,-1, 63,0);
        tracep->declQuad(c+1418,"Core io_regs_out_19", false,-1, 63,0);
        tracep->declQuad(c+1420,"Core io_regs_out_20", false,-1, 63,0);
        tracep->declQuad(c+1422,"Core io_regs_out_21", false,-1, 63,0);
        tracep->declQuad(c+1424,"Core io_regs_out_22", false,-1, 63,0);
        tracep->declQuad(c+1426,"Core io_regs_out_23", false,-1, 63,0);
        tracep->declQuad(c+1428,"Core io_regs_out_24", false,-1, 63,0);
        tracep->declQuad(c+1430,"Core io_regs_out_25", false,-1, 63,0);
        tracep->declQuad(c+1432,"Core io_regs_out_26", false,-1, 63,0);
        tracep->declQuad(c+1434,"Core io_regs_out_27", false,-1, 63,0);
        tracep->declQuad(c+1436,"Core io_regs_out_28", false,-1, 63,0);
        tracep->declQuad(c+1438,"Core io_regs_out_29", false,-1, 63,0);
        tracep->declQuad(c+1440,"Core io_regs_out_30", false,-1, 63,0);
        tracep->declQuad(c+1442,"Core io_regs_out_31", false,-1, 63,0);
        tracep->declQuad(c+1444,"Core io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+1446,"Core io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+1448,"Core io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+1450,"Core io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+1452,"Core io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+1454,"Core io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+1456,"Core io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+1458,"Core io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+1460,"Core io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+1462,"Core io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+1464,"Core io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+1466,"Core io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+1468,"Core io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+1470,"Core io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+1472,"Core io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+1474,"Core io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+1476,"Core io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+1478,"Core io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+1480,"Core io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+1482,"Core io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+1484,"Core io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+1486,"Core io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+1488,"Core io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+1490,"Core io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+1492,"Core io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+1494,"Core io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+1496,"Core io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+1498,"Core io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+1500,"Core io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+1502,"Core io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+1504,"Core io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+1506,"Core io_regs_in_31", false,-1, 63,0);
        tracep->declBus(c+1508,"Core io_pc_in", false,-1, 31,0);
        tracep->declBit(c+1509,"Core io_write_regs", false,-1);
        tracep->declBit(c+1510,"Core io_commit", false,-1);
        tracep->declBit(c+1355,"Core fetch_clock", false,-1);
        tracep->declBit(c+1356,"Core fetch_reset", false,-1);
        tracep->declBus(c+1,"Core fetch_io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+1511,"Core fetch_io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+1366,"Core fetch_io_imem_resp_bits_rvalid", false,-1);
        tracep->declBit(c+1334,"Core fetch_io_out_ready", false,-1);
        tracep->declBit(c+1515,"Core fetch_io_out_valid", false,-1);
        tracep->declBus(c+2,"Core fetch_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1512,"Core fetch_io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1513,"Core fetch_io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+3,"Core fetch_io_if_flush", false,-1);
        tracep->declBus(c+4,"Core fetch_io_p_npc", false,-1, 31,0);
        tracep->declBus(c+5,"Core fetch_io_jmp_packet_i_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+3,"Core fetch_io_jmp_packet_i_mis", false,-1);
        tracep->declBit(c+1509,"Core fetch_io_write_regs", false,-1);
        tracep->declBus(c+1508,"Core fetch_io_input_pc", false,-1, 31,0);
        tracep->declBit(c+1355,"Core decode_clock", false,-1);
        tracep->declBit(c+1356,"Core decode_reset", false,-1);
        tracep->declBit(c+1334,"Core decode_io_in_ready", false,-1);
        tracep->declBus(c+2,"Core decode_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1512,"Core decode_io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1513,"Core decode_io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+1335,"Core decode_io_out_ready", false,-1);
        tracep->declBit(c+1515,"Core decode_io_out_valid", false,-1);
        tracep->declBit(c+1323,"Core decode_io_out_bits_valid", false,-1);
        tracep->declBus(c+6,"Core decode_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+7,"Core decode_io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+8,"Core decode_io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+9,"Core decode_io_out_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+10,"Core decode_io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+11,"Core decode_io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+12,"Core decode_io_out_bits_mdu_code", false,-1, 3,0);
        tracep->declBit(c+13,"Core decode_io_out_bits_w_type", false,-1);
        tracep->declBus(c+14,"Core decode_io_out_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+15,"Core decode_io_out_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+16,"Core decode_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+17,"Core decode_io_out_bits_rd_en", false,-1);
        tracep->declBus(c+18,"Core decode_io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+3,"Core decode_io_id_flush", false,-1);
        tracep->declBit(c+19,"Core decode_io_ren1", false,-1);
        tracep->declBus(c+20,"Core decode_io_raddr1", false,-1, 4,0);
        tracep->declBit(c+21,"Core decode_io_ren2", false,-1);
        tracep->declBus(c+22,"Core decode_io_raddr2", false,-1, 4,0);
        tracep->declBit(c+23,"Core decode_io_is_ebreak", false,-1);
        tracep->declQuad(c+1324,"Core decode_io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+1326,"Core decode_io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+24,"Core decode_io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+26,"Core decode_io_rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+4,"Core decode_io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+28,"Core decode_io_p_npc_o", false,-1, 31,0);
        tracep->declBit(c+29,"Core decode_io_decode_rf_stall_i", false,-1);
        tracep->declBit(c+1355,"Core regfile_clock", false,-1);
        tracep->declBit(c+1356,"Core regfile_reset", false,-1);
        tracep->declBit(c+19,"Core regfile_io_ren1", false,-1);
        tracep->declBus(c+20,"Core regfile_io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+1324,"Core regfile_io_rdata1", false,-1, 63,0);
        tracep->declBit(c+21,"Core regfile_io_ren2", false,-1);
        tracep->declBus(c+22,"Core regfile_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+1326,"Core regfile_io_rdata2", false,-1, 63,0);
        tracep->declBit(c+30,"Core regfile_io_wen", false,-1);
        tracep->declBus(c+31,"Core regfile_io_waddr", false,-1, 4,0);
        tracep->declQuad(c+32,"Core regfile_io_wdata", false,-1, 63,0);
        tracep->declQuad(c+34,"Core regfile_io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+36,"Core regfile_io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+38,"Core regfile_io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+40,"Core regfile_io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+42,"Core regfile_io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+44,"Core regfile_io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+46,"Core regfile_io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+48,"Core regfile_io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+50,"Core regfile_io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+52,"Core regfile_io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+54,"Core regfile_io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+56,"Core regfile_io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+58,"Core regfile_io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+60,"Core regfile_io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+62,"Core regfile_io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+64,"Core regfile_io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+66,"Core regfile_io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+68,"Core regfile_io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+70,"Core regfile_io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+72,"Core regfile_io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+74,"Core regfile_io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+76,"Core regfile_io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+78,"Core regfile_io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+80,"Core regfile_io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+82,"Core regfile_io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+84,"Core regfile_io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+86,"Core regfile_io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+88,"Core regfile_io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+90,"Core regfile_io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+92,"Core regfile_io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+94,"Core regfile_io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+96,"Core regfile_io_regs_31", false,-1, 63,0);
        tracep->declBit(c+98,"Core regfile_io_ex_rd_en", false,-1);
        tracep->declBus(c+99,"Core regfile_io_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"Core regfile_io_ex_rd_data", false,-1, 63,0);
        tracep->declBit(c+102,"Core regfile_io_ex_is_load_i", false,-1);
        tracep->declBit(c+103,"Core regfile_io_ex_is_mdu_i", false,-1);
        tracep->declBit(c+104,"Core regfile_io_mem_is_load_i", false,-1);
        tracep->declBit(c+105,"Core regfile_io_mem_rd_en", false,-1);
        tracep->declBus(c+106,"Core regfile_io_mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1336,"Core regfile_io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+29,"Core regfile_io_rf_stall", false,-1);
        tracep->declQuad(c+1444,"Core regfile_io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+1446,"Core regfile_io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+1448,"Core regfile_io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+1450,"Core regfile_io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+1452,"Core regfile_io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+1454,"Core regfile_io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+1456,"Core regfile_io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+1458,"Core regfile_io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+1460,"Core regfile_io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+1462,"Core regfile_io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+1464,"Core regfile_io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+1466,"Core regfile_io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+1468,"Core regfile_io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+1470,"Core regfile_io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+1472,"Core regfile_io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+1474,"Core regfile_io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+1476,"Core regfile_io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+1478,"Core regfile_io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+1480,"Core regfile_io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+1482,"Core regfile_io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+1484,"Core regfile_io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+1486,"Core regfile_io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+1488,"Core regfile_io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+1490,"Core regfile_io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+1492,"Core regfile_io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+1494,"Core regfile_io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+1496,"Core regfile_io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+1498,"Core regfile_io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+1500,"Core regfile_io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+1502,"Core regfile_io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+1504,"Core regfile_io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+1506,"Core regfile_io_regs_in_31", false,-1, 63,0);
        tracep->declBit(c+1509,"Core regfile_io_write_regs", false,-1);
        tracep->declBit(c+1355,"Core execute_clock", false,-1);
        tracep->declBit(c+1356,"Core execute_reset", false,-1);
        tracep->declBit(c+1335,"Core execute_io_in_ready", false,-1);
        tracep->declBit(c+1323,"Core execute_io_in_bits_valid", false,-1);
        tracep->declBus(c+6,"Core execute_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+7,"Core execute_io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+8,"Core execute_io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+9,"Core execute_io_in_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+10,"Core execute_io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+11,"Core execute_io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+12,"Core execute_io_in_bits_mdu_code", false,-1, 3,0);
        tracep->declBit(c+13,"Core execute_io_in_bits_w_type", false,-1);
        tracep->declBus(c+14,"Core execute_io_in_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+15,"Core execute_io_in_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+16,"Core execute_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+17,"Core execute_io_in_bits_rd_en", false,-1);
        tracep->declBus(c+18,"Core execute_io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+1335,"Core execute_io_out_ready", false,-1);
        tracep->declBit(c+1515,"Core execute_io_out_valid", false,-1);
        tracep->declBit(c+107,"Core execute_io_out_bits_valid", false,-1);
        tracep->declBus(c+108,"Core execute_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+109,"Core execute_io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+110,"Core execute_io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+111,"Core execute_io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+112,"Core execute_io_out_bits_mdu_code", false,-1, 3,0);
        tracep->declBus(c+99,"Core execute_io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+113,"Core execute_io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+24,"Core execute_io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+26,"Core execute_io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+100,"Core execute_io_ex_data_o", false,-1, 63,0);
        tracep->declBit(c+23,"Core execute_io_is_ebreak_i", false,-1);
        tracep->declBit(c+114,"Core execute_io_is_ebreak_o", false,-1);
        tracep->declBus(c+115,"Core execute_io_ex_rwaddr_o", false,-1, 31,0);
        tracep->declBit(c+116,"Core execute_io_ex_rvalid_o", false,-1);
        tracep->declBit(c+117,"Core execute_io_ex_wvalid_o", false,-1);
        tracep->declQuad(c+26,"Core execute_io_ex_wdata_o", false,-1, 63,0);
        tracep->declBus(c+111,"Core execute_io_ex_wsize_o", false,-1, 1,0);
        tracep->declQuad(c+118,"Core execute_io_ex_mduout_o", false,-1, 63,0);
        tracep->declBit(c+120,"Core execute_io_ex_mduready_o", false,-1);
        tracep->declBit(c+98,"Core execute_io_ex_rd_en", false,-1);
        tracep->declBus(c+99,"Core execute_io_ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+102,"Core execute_io_ex_is_load", false,-1);
        tracep->declBit(c+103,"Core execute_io_ex_is_mdu", false,-1);
        tracep->declBus(c+28,"Core execute_io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+5,"Core execute_io_jmp_packet_o_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+3,"Core execute_io_jmp_packet_o_mis", false,-1);
        tracep->declBit(c+1355,"Core mem_clock", false,-1);
        tracep->declBit(c+1356,"Core mem_reset", false,-1);
        tracep->declBit(c+1335,"Core mem_io_in_ready", false,-1);
        tracep->declBit(c+107,"Core mem_io_in_bits_valid", false,-1);
        tracep->declBus(c+108,"Core mem_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+109,"Core mem_io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+110,"Core mem_io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+111,"Core mem_io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+112,"Core mem_io_in_bits_mdu_code", false,-1, 3,0);
        tracep->declBus(c+99,"Core mem_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+113,"Core mem_io_in_bits_rd_en", false,-1);
        tracep->declBit(c+121,"Core mem_io_out_bits_valid", false,-1);
        tracep->declBus(c+122,"Core mem_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+123,"Core mem_io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+100,"Core mem_io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+31,"Core mem_io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+30,"Core mem_io_wen_o", false,-1);
        tracep->declQuad(c+32,"Core mem_io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+114,"Core mem_io_is_ebreak_i", false,-1);
        tracep->declBit(c+124,"Core mem_io_is_ebreak_o", false,-1);
        tracep->declBus(c+115,"Core mem_io_dmem_req_bits_arwaddr", false,-1, 31,0);
        tracep->declBit(c+1328,"Core mem_io_dmem_req_bits_rvalid", false,-1);
        tracep->declBit(c+1329,"Core mem_io_dmem_req_bits_wvalid", false,-1);
        tracep->declQuad(c+125,"Core mem_io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+127,"Core mem_io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declQuad(c+1375,"Core mem_io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1377,"Core mem_io_dmem_resp_bits_rready", false,-1);
        tracep->declBit(c+1378,"Core mem_io_dmem_resp_bits_wready", false,-1);
        tracep->declBus(c+115,"Core mem_io_mem_rwaddr_i", false,-1, 31,0);
        tracep->declBit(c+116,"Core mem_io_mem_rvalid_i", false,-1);
        tracep->declBit(c+117,"Core mem_io_mem_wvalid_i", false,-1);
        tracep->declQuad(c+26,"Core mem_io_mem_wdata_i", false,-1, 63,0);
        tracep->declBus(c+111,"Core mem_io_mem_wsize_i", false,-1, 1,0);
        tracep->declBus(c+115,"Core mem_io_reg_mem_addr_i", false,-1, 31,0);
        tracep->declQuad(c+118,"Core mem_io_mem_mduout_i", false,-1, 63,0);
        tracep->declBit(c+120,"Core mem_io_mem_mduready_i", false,-1);
        tracep->declBit(c+105,"Core mem_io_mem_rd_en", false,-1);
        tracep->declBus(c+106,"Core mem_io_mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1336,"Core mem_io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+104,"Core mem_io_mem_is_load", false,-1);
        tracep->declBit(c+1355,"Core wb_dpi_clk", false,-1);
        tracep->declBus(c+123,"Core wb_dpi_inst", false,-1, 31,0);
        tracep->declBus(c+122,"Core wb_dpi_pc", false,-1, 31,0);
        tracep->declBit(c+124,"Core wb_dpi_ebreak", false,-1);
        tracep->declBus(c+128,"Core io_commit_pc_REG", false,-1, 31,0);
        tracep->declBit(c+129,"Core io_commit_REG", false,-1);
        tracep->declBus(c+130,"Core io_dmem_raddr_hi", false,-1, 28,0);
        tracep->declBit(c+1355,"Core fetch clock", false,-1);
        tracep->declBit(c+1356,"Core fetch reset", false,-1);
        tracep->declBus(c+1,"Core fetch io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+1511,"Core fetch io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+1366,"Core fetch io_imem_resp_bits_rvalid", false,-1);
        tracep->declBit(c+1334,"Core fetch io_out_ready", false,-1);
        tracep->declBit(c+1515,"Core fetch io_out_valid", false,-1);
        tracep->declBus(c+2,"Core fetch io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1512,"Core fetch io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1513,"Core fetch io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+3,"Core fetch io_if_flush", false,-1);
        tracep->declBus(c+4,"Core fetch io_p_npc", false,-1, 31,0);
        tracep->declBus(c+5,"Core fetch io_jmp_packet_i_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+3,"Core fetch io_jmp_packet_i_mis", false,-1);
        tracep->declBit(c+1509,"Core fetch io_write_regs", false,-1);
        tracep->declBus(c+1508,"Core fetch io_input_pc", false,-1, 31,0);
        tracep->declBus(c+2,"Core fetch pc_out", false,-1, 31,0);
        tracep->declBus(c+131,"Core fetch inst_out", false,-1, 31,0);
        tracep->declBit(c+132,"Core fetch valid_out", false,-1);
        tracep->declBus(c+4,"Core fetch reg_pnpc", false,-1, 31,0);
        tracep->declBus(c+133,"Core fetch pc", false,-1, 31,0);
        tracep->declBus(c+134,"Core fetch pc_base_hi", false,-1, 29,0);
        tracep->declBus(c+1,"Core fetch pc_base", false,-1, 31,0);
        tracep->declBus(c+135,"Core fetch npc_s", false,-1, 31,0);
        tracep->declBit(c+1514,"Core fetch imem_stall", false,-1);
        tracep->declBit(c+1338,"Core fetch stall", false,-1);
        tracep->declBit(c+1355,"Core decode clock", false,-1);
        tracep->declBit(c+1356,"Core decode reset", false,-1);
        tracep->declBit(c+1334,"Core decode io_in_ready", false,-1);
        tracep->declBus(c+2,"Core decode io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1512,"Core decode io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1513,"Core decode io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+1335,"Core decode io_out_ready", false,-1);
        tracep->declBit(c+1515,"Core decode io_out_valid", false,-1);
        tracep->declBit(c+1323,"Core decode io_out_bits_valid", false,-1);
        tracep->declBus(c+6,"Core decode io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+7,"Core decode io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+8,"Core decode io_out_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+9,"Core decode io_out_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+10,"Core decode io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+11,"Core decode io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+12,"Core decode io_out_bits_mdu_code", false,-1, 3,0);
        tracep->declBit(c+13,"Core decode io_out_bits_w_type", false,-1);
        tracep->declBus(c+14,"Core decode io_out_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+15,"Core decode io_out_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+16,"Core decode io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+17,"Core decode io_out_bits_rd_en", false,-1);
        tracep->declBus(c+18,"Core decode io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+3,"Core decode io_id_flush", false,-1);
        tracep->declBit(c+19,"Core decode io_ren1", false,-1);
        tracep->declBus(c+20,"Core decode io_raddr1", false,-1, 4,0);
        tracep->declBit(c+21,"Core decode io_ren2", false,-1);
        tracep->declBus(c+22,"Core decode io_raddr2", false,-1, 4,0);
        tracep->declBit(c+23,"Core decode io_is_ebreak", false,-1);
        tracep->declQuad(c+1324,"Core decode io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+1326,"Core decode io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+24,"Core decode io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+26,"Core decode io_rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+4,"Core decode io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+28,"Core decode io_p_npc_o", false,-1, 31,0);
        tracep->declBit(c+29,"Core decode io_decode_rf_stall_i", false,-1);
        tracep->declBus(c+6,"Core decode pc", false,-1, 31,0);
        tracep->declBus(c+7,"Core decode inst", false,-1, 31,0);
        tracep->declBit(c+136,"Core decode inst_valid", false,-1);
        tracep->declBus(c+28,"Core decode reg_pnpc", false,-1, 31,0);
        tracep->declQuad(c+24,"Core decode io_rs1_data_o_REG", false,-1, 63,0);
        tracep->declQuad(c+26,"Core decode io_rs2_data_o_REG", false,-1, 63,0);
        tracep->declBus(c+10,"Core decode ctrl_4", false,-1, 1,0);
        tracep->declBit(c+13,"Core decode c0_0", false,-1);
        tracep->declBus(c+137,"Core decode c0_1", false,-1, 2,0);
        tracep->declBus(c+15,"Core decode c0_2", false,-1, 2,0);
        tracep->declBit(c+138,"Core decode c0_3", false,-1);
        tracep->declBus(c+139,"Core decode c0_4", false,-1, 2,0);
        tracep->declBit(c+1339,"Core decode stall", false,-1);
        tracep->declBit(c+23,"Core decode io_is_ebreak_REG", false,-1);
        tracep->declBus(c+140,"Core decode imm_i_hi", false,-1, 20,0);
        tracep->declBus(c+141,"Core decode imm_i_lo", false,-1, 10,0);
        tracep->declBus(c+142,"Core decode imm_i", false,-1, 31,0);
        tracep->declBus(c+143,"Core decode imm_s_hi_lo", false,-1, 5,0);
        tracep->declBus(c+144,"Core decode imm_s", false,-1, 31,0);
        tracep->declBus(c+145,"Core decode imm_b_hi_hi_hi", false,-1, 19,0);
        tracep->declBit(c+146,"Core decode imm_b_hi_hi_lo", false,-1);
        tracep->declBus(c+147,"Core decode imm_b_lo_hi", false,-1, 3,0);
        tracep->declBus(c+148,"Core decode imm_b", false,-1, 31,0);
        tracep->declBus(c+149,"Core decode imm_u_hi", false,-1, 19,0);
        tracep->declBus(c+150,"Core decode imm_u", false,-1, 31,0);
        tracep->declBus(c+151,"Core decode imm_j_hi_hi_hi", false,-1, 11,0);
        tracep->declBus(c+152,"Core decode imm_j_hi_hi_lo", false,-1, 7,0);
        tracep->declBit(c+153,"Core decode imm_j_hi_lo", false,-1);
        tracep->declBus(c+154,"Core decode imm_j_lo_hi", false,-1, 9,0);
        tracep->declBus(c+155,"Core decode imm_j", false,-1, 31,0);
        tracep->declBus(c+156,"Core decode imm_shamt_lo_1", false,-1, 5,0);
        tracep->declBus(c+157,"Core decode imm_shamt", false,-1, 31,0);
        tracep->declBus(c+158,"Core decode imm_csr", false,-1, 31,0);
        tracep->declBit(c+1355,"Core regfile clock", false,-1);
        tracep->declBit(c+1356,"Core regfile reset", false,-1);
        tracep->declBit(c+19,"Core regfile io_ren1", false,-1);
        tracep->declBus(c+20,"Core regfile io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+1324,"Core regfile io_rdata1", false,-1, 63,0);
        tracep->declBit(c+21,"Core regfile io_ren2", false,-1);
        tracep->declBus(c+22,"Core regfile io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+1326,"Core regfile io_rdata2", false,-1, 63,0);
        tracep->declBit(c+30,"Core regfile io_wen", false,-1);
        tracep->declBus(c+31,"Core regfile io_waddr", false,-1, 4,0);
        tracep->declQuad(c+32,"Core regfile io_wdata", false,-1, 63,0);
        tracep->declQuad(c+34,"Core regfile io_regs_0", false,-1, 63,0);
        tracep->declQuad(c+36,"Core regfile io_regs_1", false,-1, 63,0);
        tracep->declQuad(c+38,"Core regfile io_regs_2", false,-1, 63,0);
        tracep->declQuad(c+40,"Core regfile io_regs_3", false,-1, 63,0);
        tracep->declQuad(c+42,"Core regfile io_regs_4", false,-1, 63,0);
        tracep->declQuad(c+44,"Core regfile io_regs_5", false,-1, 63,0);
        tracep->declQuad(c+46,"Core regfile io_regs_6", false,-1, 63,0);
        tracep->declQuad(c+48,"Core regfile io_regs_7", false,-1, 63,0);
        tracep->declQuad(c+50,"Core regfile io_regs_8", false,-1, 63,0);
        tracep->declQuad(c+52,"Core regfile io_regs_9", false,-1, 63,0);
        tracep->declQuad(c+54,"Core regfile io_regs_10", false,-1, 63,0);
        tracep->declQuad(c+56,"Core regfile io_regs_11", false,-1, 63,0);
        tracep->declQuad(c+58,"Core regfile io_regs_12", false,-1, 63,0);
        tracep->declQuad(c+60,"Core regfile io_regs_13", false,-1, 63,0);
        tracep->declQuad(c+62,"Core regfile io_regs_14", false,-1, 63,0);
        tracep->declQuad(c+64,"Core regfile io_regs_15", false,-1, 63,0);
        tracep->declQuad(c+66,"Core regfile io_regs_16", false,-1, 63,0);
        tracep->declQuad(c+68,"Core regfile io_regs_17", false,-1, 63,0);
        tracep->declQuad(c+70,"Core regfile io_regs_18", false,-1, 63,0);
        tracep->declQuad(c+72,"Core regfile io_regs_19", false,-1, 63,0);
        tracep->declQuad(c+74,"Core regfile io_regs_20", false,-1, 63,0);
        tracep->declQuad(c+76,"Core regfile io_regs_21", false,-1, 63,0);
        tracep->declQuad(c+78,"Core regfile io_regs_22", false,-1, 63,0);
        tracep->declQuad(c+80,"Core regfile io_regs_23", false,-1, 63,0);
        tracep->declQuad(c+82,"Core regfile io_regs_24", false,-1, 63,0);
        tracep->declQuad(c+84,"Core regfile io_regs_25", false,-1, 63,0);
        tracep->declQuad(c+86,"Core regfile io_regs_26", false,-1, 63,0);
        tracep->declQuad(c+88,"Core regfile io_regs_27", false,-1, 63,0);
        tracep->declQuad(c+90,"Core regfile io_regs_28", false,-1, 63,0);
        tracep->declQuad(c+92,"Core regfile io_regs_29", false,-1, 63,0);
        tracep->declQuad(c+94,"Core regfile io_regs_30", false,-1, 63,0);
        tracep->declQuad(c+96,"Core regfile io_regs_31", false,-1, 63,0);
        tracep->declBit(c+98,"Core regfile io_ex_rd_en", false,-1);
        tracep->declBus(c+99,"Core regfile io_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"Core regfile io_ex_rd_data", false,-1, 63,0);
        tracep->declBit(c+102,"Core regfile io_ex_is_load_i", false,-1);
        tracep->declBit(c+103,"Core regfile io_ex_is_mdu_i", false,-1);
        tracep->declBit(c+104,"Core regfile io_mem_is_load_i", false,-1);
        tracep->declBit(c+105,"Core regfile io_mem_rd_en", false,-1);
        tracep->declBus(c+106,"Core regfile io_mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1336,"Core regfile io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+29,"Core regfile io_rf_stall", false,-1);
        tracep->declQuad(c+1444,"Core regfile io_regs_in_0", false,-1, 63,0);
        tracep->declQuad(c+1446,"Core regfile io_regs_in_1", false,-1, 63,0);
        tracep->declQuad(c+1448,"Core regfile io_regs_in_2", false,-1, 63,0);
        tracep->declQuad(c+1450,"Core regfile io_regs_in_3", false,-1, 63,0);
        tracep->declQuad(c+1452,"Core regfile io_regs_in_4", false,-1, 63,0);
        tracep->declQuad(c+1454,"Core regfile io_regs_in_5", false,-1, 63,0);
        tracep->declQuad(c+1456,"Core regfile io_regs_in_6", false,-1, 63,0);
        tracep->declQuad(c+1458,"Core regfile io_regs_in_7", false,-1, 63,0);
        tracep->declQuad(c+1460,"Core regfile io_regs_in_8", false,-1, 63,0);
        tracep->declQuad(c+1462,"Core regfile io_regs_in_9", false,-1, 63,0);
        tracep->declQuad(c+1464,"Core regfile io_regs_in_10", false,-1, 63,0);
        tracep->declQuad(c+1466,"Core regfile io_regs_in_11", false,-1, 63,0);
        tracep->declQuad(c+1468,"Core regfile io_regs_in_12", false,-1, 63,0);
        tracep->declQuad(c+1470,"Core regfile io_regs_in_13", false,-1, 63,0);
        tracep->declQuad(c+1472,"Core regfile io_regs_in_14", false,-1, 63,0);
        tracep->declQuad(c+1474,"Core regfile io_regs_in_15", false,-1, 63,0);
        tracep->declQuad(c+1476,"Core regfile io_regs_in_16", false,-1, 63,0);
        tracep->declQuad(c+1478,"Core regfile io_regs_in_17", false,-1, 63,0);
        tracep->declQuad(c+1480,"Core regfile io_regs_in_18", false,-1, 63,0);
        tracep->declQuad(c+1482,"Core regfile io_regs_in_19", false,-1, 63,0);
        tracep->declQuad(c+1484,"Core regfile io_regs_in_20", false,-1, 63,0);
        tracep->declQuad(c+1486,"Core regfile io_regs_in_21", false,-1, 63,0);
        tracep->declQuad(c+1488,"Core regfile io_regs_in_22", false,-1, 63,0);
        tracep->declQuad(c+1490,"Core regfile io_regs_in_23", false,-1, 63,0);
        tracep->declQuad(c+1492,"Core regfile io_regs_in_24", false,-1, 63,0);
        tracep->declQuad(c+1494,"Core regfile io_regs_in_25", false,-1, 63,0);
        tracep->declQuad(c+1496,"Core regfile io_regs_in_26", false,-1, 63,0);
        tracep->declQuad(c+1498,"Core regfile io_regs_in_27", false,-1, 63,0);
        tracep->declQuad(c+1500,"Core regfile io_regs_in_28", false,-1, 63,0);
        tracep->declQuad(c+1502,"Core regfile io_regs_in_29", false,-1, 63,0);
        tracep->declQuad(c+1504,"Core regfile io_regs_in_30", false,-1, 63,0);
        tracep->declQuad(c+1506,"Core regfile io_regs_in_31", false,-1, 63,0);
        tracep->declBit(c+1509,"Core regfile io_write_regs", false,-1);
        tracep->declBit(c+159,"Core regfile ex_rs1_hazard", false,-1);
        tracep->declBit(c+160,"Core regfile ex_rs2_hazard", false,-1);
        tracep->declBit(c+161,"Core regfile mem_rs1_hazard", false,-1);
        tracep->declBit(c+162,"Core regfile mem_rs2_hazard", false,-1);
        tracep->declBit(c+163,"Core regfile wb_rs1_hazard", false,-1);
        tracep->declBit(c+164,"Core regfile wb_rs2_hazard", false,-1);
        tracep->declQuad(c+34,"Core regfile rf_0", false,-1, 63,0);
        tracep->declQuad(c+36,"Core regfile rf_1", false,-1, 63,0);
        tracep->declQuad(c+38,"Core regfile rf_2", false,-1, 63,0);
        tracep->declQuad(c+40,"Core regfile rf_3", false,-1, 63,0);
        tracep->declQuad(c+42,"Core regfile rf_4", false,-1, 63,0);
        tracep->declQuad(c+44,"Core regfile rf_5", false,-1, 63,0);
        tracep->declQuad(c+46,"Core regfile rf_6", false,-1, 63,0);
        tracep->declQuad(c+48,"Core regfile rf_7", false,-1, 63,0);
        tracep->declQuad(c+50,"Core regfile rf_8", false,-1, 63,0);
        tracep->declQuad(c+52,"Core regfile rf_9", false,-1, 63,0);
        tracep->declQuad(c+54,"Core regfile rf_10", false,-1, 63,0);
        tracep->declQuad(c+56,"Core regfile rf_11", false,-1, 63,0);
        tracep->declQuad(c+58,"Core regfile rf_12", false,-1, 63,0);
        tracep->declQuad(c+60,"Core regfile rf_13", false,-1, 63,0);
        tracep->declQuad(c+62,"Core regfile rf_14", false,-1, 63,0);
        tracep->declQuad(c+64,"Core regfile rf_15", false,-1, 63,0);
        tracep->declQuad(c+66,"Core regfile rf_16", false,-1, 63,0);
        tracep->declQuad(c+68,"Core regfile rf_17", false,-1, 63,0);
        tracep->declQuad(c+70,"Core regfile rf_18", false,-1, 63,0);
        tracep->declQuad(c+72,"Core regfile rf_19", false,-1, 63,0);
        tracep->declQuad(c+74,"Core regfile rf_20", false,-1, 63,0);
        tracep->declQuad(c+76,"Core regfile rf_21", false,-1, 63,0);
        tracep->declQuad(c+78,"Core regfile rf_22", false,-1, 63,0);
        tracep->declQuad(c+80,"Core regfile rf_23", false,-1, 63,0);
        tracep->declQuad(c+82,"Core regfile rf_24", false,-1, 63,0);
        tracep->declQuad(c+84,"Core regfile rf_25", false,-1, 63,0);
        tracep->declQuad(c+86,"Core regfile rf_26", false,-1, 63,0);
        tracep->declQuad(c+88,"Core regfile rf_27", false,-1, 63,0);
        tracep->declQuad(c+90,"Core regfile rf_28", false,-1, 63,0);
        tracep->declQuad(c+92,"Core regfile rf_29", false,-1, 63,0);
        tracep->declQuad(c+94,"Core regfile rf_30", false,-1, 63,0);
        tracep->declQuad(c+96,"Core regfile rf_31", false,-1, 63,0);
        tracep->declBit(c+1355,"Core execute clock", false,-1);
        tracep->declBit(c+1356,"Core execute reset", false,-1);
        tracep->declBit(c+1335,"Core execute io_in_ready", false,-1);
        tracep->declBit(c+1323,"Core execute io_in_bits_valid", false,-1);
        tracep->declBus(c+6,"Core execute io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+7,"Core execute io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+8,"Core execute io_in_bits_alu_code", false,-1, 3,0);
        tracep->declBus(c+9,"Core execute io_in_bits_jmp_code", false,-1, 3,0);
        tracep->declBus(c+10,"Core execute io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+11,"Core execute io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+12,"Core execute io_in_bits_mdu_code", false,-1, 3,0);
        tracep->declBit(c+13,"Core execute io_in_bits_w_type", false,-1);
        tracep->declBus(c+14,"Core execute io_in_bits_rs1_src", false,-1, 2,0);
        tracep->declBus(c+15,"Core execute io_in_bits_rs2_src", false,-1, 2,0);
        tracep->declBus(c+16,"Core execute io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+17,"Core execute io_in_bits_rd_en", false,-1);
        tracep->declBus(c+18,"Core execute io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+1335,"Core execute io_out_ready", false,-1);
        tracep->declBit(c+1515,"Core execute io_out_valid", false,-1);
        tracep->declBit(c+107,"Core execute io_out_bits_valid", false,-1);
        tracep->declBus(c+108,"Core execute io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+109,"Core execute io_out_bits_inst", false,-1, 31,0);
        tracep->declBus(c+110,"Core execute io_out_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+111,"Core execute io_out_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+112,"Core execute io_out_bits_mdu_code", false,-1, 3,0);
        tracep->declBus(c+99,"Core execute io_out_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+113,"Core execute io_out_bits_rd_en", false,-1);
        tracep->declQuad(c+24,"Core execute io_ex_rs1_i", false,-1, 63,0);
        tracep->declQuad(c+26,"Core execute io_ex_rs2_i", false,-1, 63,0);
        tracep->declQuad(c+100,"Core execute io_ex_data_o", false,-1, 63,0);
        tracep->declBit(c+23,"Core execute io_is_ebreak_i", false,-1);
        tracep->declBit(c+114,"Core execute io_is_ebreak_o", false,-1);
        tracep->declBus(c+115,"Core execute io_ex_rwaddr_o", false,-1, 31,0);
        tracep->declBit(c+116,"Core execute io_ex_rvalid_o", false,-1);
        tracep->declBit(c+117,"Core execute io_ex_wvalid_o", false,-1);
        tracep->declQuad(c+26,"Core execute io_ex_wdata_o", false,-1, 63,0);
        tracep->declBus(c+111,"Core execute io_ex_wsize_o", false,-1, 1,0);
        tracep->declQuad(c+118,"Core execute io_ex_mduout_o", false,-1, 63,0);
        tracep->declBit(c+120,"Core execute io_ex_mduready_o", false,-1);
        tracep->declBit(c+98,"Core execute io_ex_rd_en", false,-1);
        tracep->declBus(c+99,"Core execute io_ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+102,"Core execute io_ex_is_load", false,-1);
        tracep->declBit(c+103,"Core execute io_ex_is_mdu", false,-1);
        tracep->declBus(c+28,"Core execute io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+5,"Core execute io_jmp_packet_o_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+3,"Core execute io_jmp_packet_o_mis", false,-1);
        tracep->declQuad(c+165,"Core execute alu_io_in1", false,-1, 63,0);
        tracep->declQuad(c+167,"Core execute alu_io_in2", false,-1, 63,0);
        tracep->declBus(c+169,"Core execute alu_io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+170,"Core execute alu_io_wtype_i", false,-1);
        tracep->declQuad(c+100,"Core execute alu_io_alu_out", false,-1, 63,0);
        tracep->declBit(c+171,"Core execute alu_io_jmp", false,-1);
        tracep->declBus(c+172,"Core execute alu_io_jmp_code", false,-1, 3,0);
        tracep->declBus(c+173,"Core execute alu_io_imm", false,-1, 31,0);
        tracep->declBus(c+108,"Core execute alu_io_pc_i", false,-1, 31,0);
        tracep->declBus(c+174,"Core execute alu_io_jmp_pc", false,-1, 31,0);
        tracep->declBit(c+1355,"Core execute mdu_clock", false,-1);
        tracep->declBit(c+1356,"Core execute mdu_reset", false,-1);
        tracep->declQuad(c+165,"Core execute mdu_io_in1", false,-1, 63,0);
        tracep->declQuad(c+167,"Core execute mdu_io_in2", false,-1, 63,0);
        tracep->declQuad(c+118,"Core execute mdu_io_out", false,-1, 63,0);
        tracep->declBus(c+112,"Core execute mdu_io_mduop_i", false,-1, 3,0);
        tracep->declBit(c+1340,"Core execute mdu_io_mdu_valid", false,-1);
        tracep->declBit(c+120,"Core execute mdu_io_mdu_ready", false,-1);
        tracep->declBit(c+1341,"Core execute stall", false,-1);
        tracep->declBit(c+114,"Core execute io_is_ebreak_o_REG", false,-1);
        tracep->declBit(c+107,"Core execute ex_reg_decodeop_valid", false,-1);
        tracep->declBus(c+108,"Core execute ex_reg_decodeop_pc", false,-1, 31,0);
        tracep->declBus(c+109,"Core execute ex_reg_decodeop_inst", false,-1, 31,0);
        tracep->declBus(c+169,"Core execute ex_reg_decodeop_alu_code", false,-1, 3,0);
        tracep->declBus(c+172,"Core execute ex_reg_decodeop_jmp_code", false,-1, 3,0);
        tracep->declBus(c+110,"Core execute ex_reg_decodeop_mem_code", false,-1, 1,0);
        tracep->declBus(c+111,"Core execute ex_reg_decodeop_mem_size", false,-1, 1,0);
        tracep->declBus(c+112,"Core execute ex_reg_decodeop_mdu_code", false,-1, 3,0);
        tracep->declBit(c+170,"Core execute ex_reg_decodeop_w_type", false,-1);
        tracep->declBus(c+175,"Core execute ex_reg_decodeop_rs1_src", false,-1, 2,0);
        tracep->declBus(c+176,"Core execute ex_reg_decodeop_rs2_src", false,-1, 2,0);
        tracep->declBus(c+99,"Core execute ex_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+113,"Core execute ex_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+173,"Core execute ex_reg_decodeop_imm", false,-1, 31,0);
        tracep->declBus(c+177,"Core execute rs1_temp_hi", false,-1, 31,0);
        tracep->declBus(c+178,"Core execute rs1_temp_lo", false,-1, 31,0);
        tracep->declBus(c+5,"Core execute real_npc", false,-1, 31,0);
        tracep->declQuad(c+165,"Core execute alu io_in1", false,-1, 63,0);
        tracep->declQuad(c+167,"Core execute alu io_in2", false,-1, 63,0);
        tracep->declBus(c+169,"Core execute alu io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+170,"Core execute alu io_wtype_i", false,-1);
        tracep->declQuad(c+100,"Core execute alu io_alu_out", false,-1, 63,0);
        tracep->declBit(c+171,"Core execute alu io_jmp", false,-1);
        tracep->declBus(c+172,"Core execute alu io_jmp_code", false,-1, 3,0);
        tracep->declBus(c+173,"Core execute alu io_imm", false,-1, 31,0);
        tracep->declBus(c+108,"Core execute alu io_pc_i", false,-1, 31,0);
        tracep->declBus(c+174,"Core execute alu io_jmp_pc", false,-1, 31,0);
        tracep->declBus(c+179,"Core execute alu shamt", false,-1, 5,0);
        tracep->declBus(c+180,"Core execute alu out0_lo", false,-1, 31,0);
        tracep->declQuad(c+181,"Core execute alu out0", false,-1, 63,0);
        tracep->declBus(c+183,"Core execute alu out1_lo", false,-1, 31,0);
        tracep->declBus(c+184,"Core execute alu out1_hi", false,-1, 31,0);
        tracep->declBit(c+1355,"Core execute mdu clock", false,-1);
        tracep->declBit(c+1356,"Core execute mdu reset", false,-1);
        tracep->declQuad(c+165,"Core execute mdu io_in1", false,-1, 63,0);
        tracep->declQuad(c+167,"Core execute mdu io_in2", false,-1, 63,0);
        tracep->declQuad(c+118,"Core execute mdu io_out", false,-1, 63,0);
        tracep->declBus(c+112,"Core execute mdu io_mduop_i", false,-1, 3,0);
        tracep->declBit(c+1340,"Core execute mdu io_mdu_valid", false,-1);
        tracep->declBit(c+120,"Core execute mdu io_mdu_ready", false,-1);
        tracep->declBit(c+1355,"Core execute mdu mul_clock", false,-1);
        tracep->declBit(c+1356,"Core execute mdu mul_reset", false,-1);
        tracep->declArray(c+185,"Core execute mdu mul_io_in1", false,-1, 64,0);
        tracep->declArray(c+188,"Core execute mdu mul_io_in2", false,-1, 64,0);
        tracep->declQuad(c+191,"Core execute mdu mul_io_out1", false,-1, 63,0);
        tracep->declQuad(c+193,"Core execute mdu mul_io_out2", false,-1, 63,0);
        tracep->declBit(c+195,"Core execute mdu mul_io_mul_valid", false,-1);
        tracep->declBit(c+196,"Core execute mdu mul_io_mul_ready", false,-1);
        tracep->declBus(c+197,"Core execute mdu state", false,-1, 1,0);
        tracep->declBus(c+198,"Core execute mdu reg_mduop", false,-1, 3,0);
        tracep->declQuad(c+199,"Core execute mdu reg_x", false,-1, 63,0);
        tracep->declQuad(c+201,"Core execute mdu reg_y", false,-1, 63,0);
        tracep->declQuad(c+118,"Core execute mdu reg_out", false,-1, 63,0);
        tracep->declBit(c+120,"Core execute mdu completed", false,-1);
        tracep->declBit(c+203,"Core execute mdu is_div", false,-1);
        tracep->declBit(c+204,"Core execute mdu is_divu", false,-1);
        tracep->declBit(c+205,"Core execute mdu is_mul", false,-1);
        tracep->declBit(c+206,"Core execute mdu in1_sign", false,-1);
        tracep->declBit(c+207,"Core execute mdu in2_sign", false,-1);
        tracep->declBit(c+208,"Core execute mdu mul_high", false,-1);
        tracep->declBit(c+209,"Core execute mdu mul_io_in1_hi", false,-1);
        tracep->declBit(c+210,"Core execute mdu mul_io_in2_hi", false,-1);
        tracep->declBit(c+1355,"Core execute mdu mul clock", false,-1);
        tracep->declBit(c+1356,"Core execute mdu mul reset", false,-1);
        tracep->declArray(c+185,"Core execute mdu mul io_in1", false,-1, 64,0);
        tracep->declArray(c+188,"Core execute mdu mul io_in2", false,-1, 64,0);
        tracep->declQuad(c+191,"Core execute mdu mul io_out1", false,-1, 63,0);
        tracep->declQuad(c+193,"Core execute mdu mul io_out2", false,-1, 63,0);
        tracep->declBit(c+195,"Core execute mdu mul io_mul_valid", false,-1);
        tracep->declBit(c+196,"Core execute mdu mul io_mul_ready", false,-1);
        tracep->declArray(c+211,"Core execute mdu mul booth_0_io_x", false,-1, 64,0);
        tracep->declBus(c+214,"Core execute mdu mul booth_0_io_y", false,-1, 2,0);
        tracep->declArray(c+215,"Core execute mdu mul booth_0_io_z", false,-1, 127,0);
        tracep->declBus(c+219,"Core execute mdu mul booth_0_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_1_io_x", false,-1, 64,0);
        tracep->declBus(c+220,"Core execute mdu mul booth_1_io_y", false,-1, 2,0);
        tracep->declArray(c+221,"Core execute mdu mul booth_1_io_z", false,-1, 127,0);
        tracep->declBus(c+225,"Core execute mdu mul booth_1_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_2_io_x", false,-1, 64,0);
        tracep->declBus(c+226,"Core execute mdu mul booth_2_io_y", false,-1, 2,0);
        tracep->declArray(c+227,"Core execute mdu mul booth_2_io_z", false,-1, 127,0);
        tracep->declBus(c+231,"Core execute mdu mul booth_2_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_3_io_x", false,-1, 64,0);
        tracep->declBus(c+232,"Core execute mdu mul booth_3_io_y", false,-1, 2,0);
        tracep->declArray(c+233,"Core execute mdu mul booth_3_io_z", false,-1, 127,0);
        tracep->declBus(c+237,"Core execute mdu mul booth_3_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_4_io_x", false,-1, 64,0);
        tracep->declBus(c+238,"Core execute mdu mul booth_4_io_y", false,-1, 2,0);
        tracep->declArray(c+239,"Core execute mdu mul booth_4_io_z", false,-1, 127,0);
        tracep->declBus(c+243,"Core execute mdu mul booth_4_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_5_io_x", false,-1, 64,0);
        tracep->declBus(c+244,"Core execute mdu mul booth_5_io_y", false,-1, 2,0);
        tracep->declArray(c+245,"Core execute mdu mul booth_5_io_z", false,-1, 127,0);
        tracep->declBus(c+249,"Core execute mdu mul booth_5_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_6_io_x", false,-1, 64,0);
        tracep->declBus(c+250,"Core execute mdu mul booth_6_io_y", false,-1, 2,0);
        tracep->declArray(c+251,"Core execute mdu mul booth_6_io_z", false,-1, 127,0);
        tracep->declBus(c+255,"Core execute mdu mul booth_6_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_7_io_x", false,-1, 64,0);
        tracep->declBus(c+256,"Core execute mdu mul booth_7_io_y", false,-1, 2,0);
        tracep->declArray(c+257,"Core execute mdu mul booth_7_io_z", false,-1, 127,0);
        tracep->declBus(c+261,"Core execute mdu mul booth_7_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_8_io_x", false,-1, 64,0);
        tracep->declBus(c+262,"Core execute mdu mul booth_8_io_y", false,-1, 2,0);
        tracep->declArray(c+263,"Core execute mdu mul booth_8_io_z", false,-1, 127,0);
        tracep->declBus(c+267,"Core execute mdu mul booth_8_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_9_io_x", false,-1, 64,0);
        tracep->declBus(c+268,"Core execute mdu mul booth_9_io_y", false,-1, 2,0);
        tracep->declArray(c+269,"Core execute mdu mul booth_9_io_z", false,-1, 127,0);
        tracep->declBus(c+273,"Core execute mdu mul booth_9_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_10_io_x", false,-1, 64,0);
        tracep->declBus(c+274,"Core execute mdu mul booth_10_io_y", false,-1, 2,0);
        tracep->declArray(c+275,"Core execute mdu mul booth_10_io_z", false,-1, 127,0);
        tracep->declBus(c+279,"Core execute mdu mul booth_10_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_11_io_x", false,-1, 64,0);
        tracep->declBus(c+280,"Core execute mdu mul booth_11_io_y", false,-1, 2,0);
        tracep->declArray(c+281,"Core execute mdu mul booth_11_io_z", false,-1, 127,0);
        tracep->declBus(c+285,"Core execute mdu mul booth_11_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_12_io_x", false,-1, 64,0);
        tracep->declBus(c+286,"Core execute mdu mul booth_12_io_y", false,-1, 2,0);
        tracep->declArray(c+287,"Core execute mdu mul booth_12_io_z", false,-1, 127,0);
        tracep->declBus(c+291,"Core execute mdu mul booth_12_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_13_io_x", false,-1, 64,0);
        tracep->declBus(c+292,"Core execute mdu mul booth_13_io_y", false,-1, 2,0);
        tracep->declArray(c+293,"Core execute mdu mul booth_13_io_z", false,-1, 127,0);
        tracep->declBus(c+297,"Core execute mdu mul booth_13_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_14_io_x", false,-1, 64,0);
        tracep->declBus(c+298,"Core execute mdu mul booth_14_io_y", false,-1, 2,0);
        tracep->declArray(c+299,"Core execute mdu mul booth_14_io_z", false,-1, 127,0);
        tracep->declBus(c+303,"Core execute mdu mul booth_14_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_15_io_x", false,-1, 64,0);
        tracep->declBus(c+304,"Core execute mdu mul booth_15_io_y", false,-1, 2,0);
        tracep->declArray(c+305,"Core execute mdu mul booth_15_io_z", false,-1, 127,0);
        tracep->declBus(c+309,"Core execute mdu mul booth_15_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_16_io_x", false,-1, 64,0);
        tracep->declBus(c+310,"Core execute mdu mul booth_16_io_y", false,-1, 2,0);
        tracep->declArray(c+311,"Core execute mdu mul booth_16_io_z", false,-1, 127,0);
        tracep->declBus(c+315,"Core execute mdu mul booth_16_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_17_io_x", false,-1, 64,0);
        tracep->declBus(c+316,"Core execute mdu mul booth_17_io_y", false,-1, 2,0);
        tracep->declArray(c+317,"Core execute mdu mul booth_17_io_z", false,-1, 127,0);
        tracep->declBus(c+321,"Core execute mdu mul booth_17_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_18_io_x", false,-1, 64,0);
        tracep->declBus(c+322,"Core execute mdu mul booth_18_io_y", false,-1, 2,0);
        tracep->declArray(c+323,"Core execute mdu mul booth_18_io_z", false,-1, 127,0);
        tracep->declBus(c+327,"Core execute mdu mul booth_18_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_19_io_x", false,-1, 64,0);
        tracep->declBus(c+328,"Core execute mdu mul booth_19_io_y", false,-1, 2,0);
        tracep->declArray(c+329,"Core execute mdu mul booth_19_io_z", false,-1, 127,0);
        tracep->declBus(c+333,"Core execute mdu mul booth_19_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_20_io_x", false,-1, 64,0);
        tracep->declBus(c+334,"Core execute mdu mul booth_20_io_y", false,-1, 2,0);
        tracep->declArray(c+335,"Core execute mdu mul booth_20_io_z", false,-1, 127,0);
        tracep->declBus(c+339,"Core execute mdu mul booth_20_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_21_io_x", false,-1, 64,0);
        tracep->declBus(c+340,"Core execute mdu mul booth_21_io_y", false,-1, 2,0);
        tracep->declArray(c+341,"Core execute mdu mul booth_21_io_z", false,-1, 127,0);
        tracep->declBus(c+345,"Core execute mdu mul booth_21_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_22_io_x", false,-1, 64,0);
        tracep->declBus(c+346,"Core execute mdu mul booth_22_io_y", false,-1, 2,0);
        tracep->declArray(c+347,"Core execute mdu mul booth_22_io_z", false,-1, 127,0);
        tracep->declBus(c+351,"Core execute mdu mul booth_22_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_23_io_x", false,-1, 64,0);
        tracep->declBus(c+352,"Core execute mdu mul booth_23_io_y", false,-1, 2,0);
        tracep->declArray(c+353,"Core execute mdu mul booth_23_io_z", false,-1, 127,0);
        tracep->declBus(c+357,"Core execute mdu mul booth_23_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_24_io_x", false,-1, 64,0);
        tracep->declBus(c+358,"Core execute mdu mul booth_24_io_y", false,-1, 2,0);
        tracep->declArray(c+359,"Core execute mdu mul booth_24_io_z", false,-1, 127,0);
        tracep->declBus(c+363,"Core execute mdu mul booth_24_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_25_io_x", false,-1, 64,0);
        tracep->declBus(c+364,"Core execute mdu mul booth_25_io_y", false,-1, 2,0);
        tracep->declArray(c+365,"Core execute mdu mul booth_25_io_z", false,-1, 127,0);
        tracep->declBus(c+369,"Core execute mdu mul booth_25_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_26_io_x", false,-1, 64,0);
        tracep->declBus(c+370,"Core execute mdu mul booth_26_io_y", false,-1, 2,0);
        tracep->declArray(c+371,"Core execute mdu mul booth_26_io_z", false,-1, 127,0);
        tracep->declBus(c+375,"Core execute mdu mul booth_26_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_27_io_x", false,-1, 64,0);
        tracep->declBus(c+376,"Core execute mdu mul booth_27_io_y", false,-1, 2,0);
        tracep->declArray(c+377,"Core execute mdu mul booth_27_io_z", false,-1, 127,0);
        tracep->declBus(c+381,"Core execute mdu mul booth_27_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_28_io_x", false,-1, 64,0);
        tracep->declBus(c+382,"Core execute mdu mul booth_28_io_y", false,-1, 2,0);
        tracep->declArray(c+383,"Core execute mdu mul booth_28_io_z", false,-1, 127,0);
        tracep->declBus(c+387,"Core execute mdu mul booth_28_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_29_io_x", false,-1, 64,0);
        tracep->declBus(c+388,"Core execute mdu mul booth_29_io_y", false,-1, 2,0);
        tracep->declArray(c+389,"Core execute mdu mul booth_29_io_z", false,-1, 127,0);
        tracep->declBus(c+393,"Core execute mdu mul booth_29_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_30_io_x", false,-1, 64,0);
        tracep->declBus(c+394,"Core execute mdu mul booth_30_io_y", false,-1, 2,0);
        tracep->declArray(c+395,"Core execute mdu mul booth_30_io_z", false,-1, 127,0);
        tracep->declBus(c+399,"Core execute mdu mul booth_30_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_31_io_x", false,-1, 64,0);
        tracep->declBus(c+400,"Core execute mdu mul booth_31_io_y", false,-1, 2,0);
        tracep->declArray(c+401,"Core execute mdu mul booth_31_io_z", false,-1, 127,0);
        tracep->declBus(c+405,"Core execute mdu mul booth_31_io_c", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_32_io_x", false,-1, 64,0);
        tracep->declBus(c+406,"Core execute mdu mul booth_32_io_y", false,-1, 2,0);
        tracep->declArray(c+407,"Core execute mdu mul booth_32_io_z", false,-1, 127,0);
        tracep->declBus(c+411,"Core execute mdu mul booth_32_io_c", false,-1, 1,0);
        tracep->declArray(c+412,"Core execute mdu mul csa_0_io_x", false,-1, 127,0);
        tracep->declArray(c+416,"Core execute mdu mul csa_0_io_y", false,-1, 127,0);
        tracep->declArray(c+420,"Core execute mdu mul csa_0_io_z", false,-1, 127,0);
        tracep->declArray(c+424,"Core execute mdu mul csa_0_io_s", false,-1, 127,0);
        tracep->declArray(c+428,"Core execute mdu mul csa_0_io_c", false,-1, 127,0);
        tracep->declArray(c+432,"Core execute mdu mul csa_1_io_x", false,-1, 127,0);
        tracep->declArray(c+436,"Core execute mdu mul csa_1_io_y", false,-1, 127,0);
        tracep->declArray(c+440,"Core execute mdu mul csa_1_io_z", false,-1, 127,0);
        tracep->declArray(c+444,"Core execute mdu mul csa_1_io_s", false,-1, 127,0);
        tracep->declArray(c+448,"Core execute mdu mul csa_1_io_c", false,-1, 127,0);
        tracep->declArray(c+452,"Core execute mdu mul csa_2_io_x", false,-1, 127,0);
        tracep->declArray(c+456,"Core execute mdu mul csa_2_io_y", false,-1, 127,0);
        tracep->declArray(c+460,"Core execute mdu mul csa_2_io_z", false,-1, 127,0);
        tracep->declArray(c+464,"Core execute mdu mul csa_2_io_s", false,-1, 127,0);
        tracep->declArray(c+468,"Core execute mdu mul csa_2_io_c", false,-1, 127,0);
        tracep->declArray(c+472,"Core execute mdu mul csa_3_io_x", false,-1, 127,0);
        tracep->declArray(c+476,"Core execute mdu mul csa_3_io_y", false,-1, 127,0);
        tracep->declArray(c+480,"Core execute mdu mul csa_3_io_z", false,-1, 127,0);
        tracep->declArray(c+484,"Core execute mdu mul csa_3_io_s", false,-1, 127,0);
        tracep->declArray(c+488,"Core execute mdu mul csa_3_io_c", false,-1, 127,0);
        tracep->declArray(c+492,"Core execute mdu mul csa_4_io_x", false,-1, 127,0);
        tracep->declArray(c+496,"Core execute mdu mul csa_4_io_y", false,-1, 127,0);
        tracep->declArray(c+500,"Core execute mdu mul csa_4_io_z", false,-1, 127,0);
        tracep->declArray(c+504,"Core execute mdu mul csa_4_io_s", false,-1, 127,0);
        tracep->declArray(c+508,"Core execute mdu mul csa_4_io_c", false,-1, 127,0);
        tracep->declArray(c+512,"Core execute mdu mul csa_5_io_x", false,-1, 127,0);
        tracep->declArray(c+516,"Core execute mdu mul csa_5_io_y", false,-1, 127,0);
        tracep->declArray(c+520,"Core execute mdu mul csa_5_io_z", false,-1, 127,0);
        tracep->declArray(c+524,"Core execute mdu mul csa_5_io_s", false,-1, 127,0);
        tracep->declArray(c+528,"Core execute mdu mul csa_5_io_c", false,-1, 127,0);
        tracep->declArray(c+532,"Core execute mdu mul csa_6_io_x", false,-1, 127,0);
        tracep->declArray(c+536,"Core execute mdu mul csa_6_io_y", false,-1, 127,0);
        tracep->declArray(c+540,"Core execute mdu mul csa_6_io_z", false,-1, 127,0);
        tracep->declArray(c+544,"Core execute mdu mul csa_6_io_s", false,-1, 127,0);
        tracep->declArray(c+548,"Core execute mdu mul csa_6_io_c", false,-1, 127,0);
        tracep->declArray(c+552,"Core execute mdu mul csa_7_io_x", false,-1, 127,0);
        tracep->declArray(c+556,"Core execute mdu mul csa_7_io_y", false,-1, 127,0);
        tracep->declArray(c+560,"Core execute mdu mul csa_7_io_z", false,-1, 127,0);
        tracep->declArray(c+564,"Core execute mdu mul csa_7_io_s", false,-1, 127,0);
        tracep->declArray(c+568,"Core execute mdu mul csa_7_io_c", false,-1, 127,0);
        tracep->declArray(c+572,"Core execute mdu mul csa_8_io_x", false,-1, 127,0);
        tracep->declArray(c+576,"Core execute mdu mul csa_8_io_y", false,-1, 127,0);
        tracep->declArray(c+580,"Core execute mdu mul csa_8_io_z", false,-1, 127,0);
        tracep->declArray(c+584,"Core execute mdu mul csa_8_io_s", false,-1, 127,0);
        tracep->declArray(c+588,"Core execute mdu mul csa_8_io_c", false,-1, 127,0);
        tracep->declArray(c+592,"Core execute mdu mul csa_9_io_x", false,-1, 127,0);
        tracep->declArray(c+596,"Core execute mdu mul csa_9_io_y", false,-1, 127,0);
        tracep->declArray(c+600,"Core execute mdu mul csa_9_io_z", false,-1, 127,0);
        tracep->declArray(c+604,"Core execute mdu mul csa_9_io_s", false,-1, 127,0);
        tracep->declArray(c+608,"Core execute mdu mul csa_9_io_c", false,-1, 127,0);
        tracep->declArray(c+612,"Core execute mdu mul csa_10_io_x", false,-1, 127,0);
        tracep->declArray(c+616,"Core execute mdu mul csa_10_io_y", false,-1, 127,0);
        tracep->declArray(c+620,"Core execute mdu mul csa_10_io_z", false,-1, 127,0);
        tracep->declArray(c+624,"Core execute mdu mul csa_10_io_s", false,-1, 127,0);
        tracep->declArray(c+628,"Core execute mdu mul csa_10_io_c", false,-1, 127,0);
        tracep->declArray(c+424,"Core execute mdu mul csa_11_io_x", false,-1, 127,0);
        tracep->declArray(c+428,"Core execute mdu mul csa_11_io_y", false,-1, 127,0);
        tracep->declArray(c+448,"Core execute mdu mul csa_11_io_z", false,-1, 127,0);
        tracep->declArray(c+632,"Core execute mdu mul csa_11_io_s", false,-1, 127,0);
        tracep->declArray(c+636,"Core execute mdu mul csa_11_io_c", false,-1, 127,0);
        tracep->declArray(c+444,"Core execute mdu mul csa_12_io_x", false,-1, 127,0);
        tracep->declArray(c+468,"Core execute mdu mul csa_12_io_y", false,-1, 127,0);
        tracep->declArray(c+464,"Core execute mdu mul csa_12_io_z", false,-1, 127,0);
        tracep->declArray(c+640,"Core execute mdu mul csa_12_io_s", false,-1, 127,0);
        tracep->declArray(c+644,"Core execute mdu mul csa_12_io_c", false,-1, 127,0);
        tracep->declArray(c+484,"Core execute mdu mul csa_13_io_x", false,-1, 127,0);
        tracep->declArray(c+488,"Core execute mdu mul csa_13_io_y", false,-1, 127,0);
        tracep->declArray(c+508,"Core execute mdu mul csa_13_io_z", false,-1, 127,0);
        tracep->declArray(c+648,"Core execute mdu mul csa_13_io_s", false,-1, 127,0);
        tracep->declArray(c+652,"Core execute mdu mul csa_13_io_c", false,-1, 127,0);
        tracep->declArray(c+504,"Core execute mdu mul csa_14_io_x", false,-1, 127,0);
        tracep->declArray(c+528,"Core execute mdu mul csa_14_io_y", false,-1, 127,0);
        tracep->declArray(c+524,"Core execute mdu mul csa_14_io_z", false,-1, 127,0);
        tracep->declArray(c+656,"Core execute mdu mul csa_14_io_s", false,-1, 127,0);
        tracep->declArray(c+660,"Core execute mdu mul csa_14_io_c", false,-1, 127,0);
        tracep->declArray(c+544,"Core execute mdu mul csa_15_io_x", false,-1, 127,0);
        tracep->declArray(c+548,"Core execute mdu mul csa_15_io_y", false,-1, 127,0);
        tracep->declArray(c+568,"Core execute mdu mul csa_15_io_z", false,-1, 127,0);
        tracep->declArray(c+664,"Core execute mdu mul csa_15_io_s", false,-1, 127,0);
        tracep->declArray(c+668,"Core execute mdu mul csa_15_io_c", false,-1, 127,0);
        tracep->declArray(c+564,"Core execute mdu mul csa_16_io_x", false,-1, 127,0);
        tracep->declArray(c+588,"Core execute mdu mul csa_16_io_y", false,-1, 127,0);
        tracep->declArray(c+584,"Core execute mdu mul csa_16_io_z", false,-1, 127,0);
        tracep->declArray(c+672,"Core execute mdu mul csa_16_io_s", false,-1, 127,0);
        tracep->declArray(c+676,"Core execute mdu mul csa_16_io_c", false,-1, 127,0);
        tracep->declArray(c+604,"Core execute mdu mul csa_17_io_x", false,-1, 127,0);
        tracep->declArray(c+608,"Core execute mdu mul csa_17_io_y", false,-1, 127,0);
        tracep->declArray(c+680,"Core execute mdu mul csa_17_io_z", false,-1, 127,0);
        tracep->declArray(c+684,"Core execute mdu mul csa_17_io_s", false,-1, 127,0);
        tracep->declArray(c+688,"Core execute mdu mul csa_17_io_c", false,-1, 127,0);
        tracep->declArray(c+624,"Core execute mdu mul csa_18_io_x", false,-1, 127,0);
        tracep->declArray(c+628,"Core execute mdu mul csa_18_io_y", false,-1, 127,0);
        tracep->declArray(c+632,"Core execute mdu mul csa_18_io_z", false,-1, 127,0);
        tracep->declArray(c+692,"Core execute mdu mul csa_18_io_s", false,-1, 127,0);
        tracep->declArray(c+696,"Core execute mdu mul csa_18_io_c", false,-1, 127,0);
        tracep->declArray(c+636,"Core execute mdu mul csa_19_io_x", false,-1, 127,0);
        tracep->declArray(c+640,"Core execute mdu mul csa_19_io_y", false,-1, 127,0);
        tracep->declArray(c+644,"Core execute mdu mul csa_19_io_z", false,-1, 127,0);
        tracep->declArray(c+700,"Core execute mdu mul csa_19_io_s", false,-1, 127,0);
        tracep->declArray(c+704,"Core execute mdu mul csa_19_io_c", false,-1, 127,0);
        tracep->declArray(c+648,"Core execute mdu mul csa_20_io_x", false,-1, 127,0);
        tracep->declArray(c+652,"Core execute mdu mul csa_20_io_y", false,-1, 127,0);
        tracep->declArray(c+656,"Core execute mdu mul csa_20_io_z", false,-1, 127,0);
        tracep->declArray(c+708,"Core execute mdu mul csa_20_io_s", false,-1, 127,0);
        tracep->declArray(c+712,"Core execute mdu mul csa_20_io_c", false,-1, 127,0);
        tracep->declArray(c+660,"Core execute mdu mul csa_21_io_x", false,-1, 127,0);
        tracep->declArray(c+664,"Core execute mdu mul csa_21_io_y", false,-1, 127,0);
        tracep->declArray(c+668,"Core execute mdu mul csa_21_io_z", false,-1, 127,0);
        tracep->declArray(c+716,"Core execute mdu mul csa_21_io_s", false,-1, 127,0);
        tracep->declArray(c+720,"Core execute mdu mul csa_21_io_c", false,-1, 127,0);
        tracep->declArray(c+672,"Core execute mdu mul csa_22_io_x", false,-1, 127,0);
        tracep->declArray(c+676,"Core execute mdu mul csa_22_io_y", false,-1, 127,0);
        tracep->declArray(c+684,"Core execute mdu mul csa_22_io_z", false,-1, 127,0);
        tracep->declArray(c+724,"Core execute mdu mul csa_22_io_s", false,-1, 127,0);
        tracep->declArray(c+728,"Core execute mdu mul csa_22_io_c", false,-1, 127,0);
        tracep->declArray(c+688,"Core execute mdu mul csa_23_io_x", false,-1, 127,0);
        tracep->declArray(c+692,"Core execute mdu mul csa_23_io_y", false,-1, 127,0);
        tracep->declArray(c+696,"Core execute mdu mul csa_23_io_z", false,-1, 127,0);
        tracep->declArray(c+732,"Core execute mdu mul csa_23_io_s", false,-1, 127,0);
        tracep->declArray(c+736,"Core execute mdu mul csa_23_io_c", false,-1, 127,0);
        tracep->declArray(c+700,"Core execute mdu mul csa_24_io_x", false,-1, 127,0);
        tracep->declArray(c+704,"Core execute mdu mul csa_24_io_y", false,-1, 127,0);
        tracep->declArray(c+708,"Core execute mdu mul csa_24_io_z", false,-1, 127,0);
        tracep->declArray(c+740,"Core execute mdu mul csa_24_io_s", false,-1, 127,0);
        tracep->declArray(c+744,"Core execute mdu mul csa_24_io_c", false,-1, 127,0);
        tracep->declArray(c+712,"Core execute mdu mul csa_25_io_x", false,-1, 127,0);
        tracep->declArray(c+716,"Core execute mdu mul csa_25_io_y", false,-1, 127,0);
        tracep->declArray(c+720,"Core execute mdu mul csa_25_io_z", false,-1, 127,0);
        tracep->declArray(c+748,"Core execute mdu mul csa_25_io_s", false,-1, 127,0);
        tracep->declArray(c+752,"Core execute mdu mul csa_25_io_c", false,-1, 127,0);
        tracep->declArray(c+756,"Core execute mdu mul csa_26_io_x", false,-1, 127,0);
        tracep->declArray(c+760,"Core execute mdu mul csa_26_io_y", false,-1, 127,0);
        tracep->declArray(c+764,"Core execute mdu mul csa_26_io_z", false,-1, 127,0);
        tracep->declArray(c+768,"Core execute mdu mul csa_26_io_s", false,-1, 127,0);
        tracep->declArray(c+772,"Core execute mdu mul csa_26_io_c", false,-1, 127,0);
        tracep->declArray(c+776,"Core execute mdu mul csa_27_io_x", false,-1, 127,0);
        tracep->declArray(c+780,"Core execute mdu mul csa_27_io_y", false,-1, 127,0);
        tracep->declArray(c+784,"Core execute mdu mul csa_27_io_z", false,-1, 127,0);
        tracep->declArray(c+788,"Core execute mdu mul csa_27_io_s", false,-1, 127,0);
        tracep->declArray(c+792,"Core execute mdu mul csa_27_io_c", false,-1, 127,0);
        tracep->declArray(c+796,"Core execute mdu mul csa_28_io_x", false,-1, 127,0);
        tracep->declArray(c+800,"Core execute mdu mul csa_28_io_y", false,-1, 127,0);
        tracep->declArray(c+768,"Core execute mdu mul csa_28_io_z", false,-1, 127,0);
        tracep->declArray(c+804,"Core execute mdu mul csa_28_io_s", false,-1, 127,0);
        tracep->declArray(c+808,"Core execute mdu mul csa_28_io_c", false,-1, 127,0);
        tracep->declArray(c+788,"Core execute mdu mul csa_29_io_x", false,-1, 127,0);
        tracep->declArray(c+772,"Core execute mdu mul csa_29_io_y", false,-1, 127,0);
        tracep->declArray(c+792,"Core execute mdu mul csa_29_io_z", false,-1, 127,0);
        tracep->declArray(c+812,"Core execute mdu mul csa_29_io_s", false,-1, 127,0);
        tracep->declArray(c+816,"Core execute mdu mul csa_29_io_c", false,-1, 127,0);
        tracep->declArray(c+804,"Core execute mdu mul csa_30_io_x", false,-1, 127,0);
        tracep->declArray(c+812,"Core execute mdu mul csa_30_io_y", false,-1, 127,0);
        tracep->declArray(c+808,"Core execute mdu mul csa_30_io_z", false,-1, 127,0);
        tracep->declArray(c+820,"Core execute mdu mul csa_30_io_s", false,-1, 127,0);
        tracep->declArray(c+824,"Core execute mdu mul csa_30_io_c", false,-1, 127,0);
        tracep->declArray(c+820,"Core execute mdu mul csa_31_io_x", false,-1, 127,0);
        tracep->declArray(c+824,"Core execute mdu mul csa_31_io_y", false,-1, 127,0);
        tracep->declArray(c+816,"Core execute mdu mul csa_31_io_z", false,-1, 127,0);
        tracep->declArray(c+828,"Core execute mdu mul csa_31_io_s", false,-1, 127,0);
        tracep->declArray(c+832,"Core execute mdu mul csa_31_io_c", false,-1, 127,0);
        tracep->declBus(c+836,"Core execute mdu mul state", false,-1, 1,0);
        tracep->declArray(c+211,"Core execute mdu mul reg_in1", false,-1, 64,0);
        tracep->declArray(c+837,"Core execute mdu mul reg_in2", false,-1, 66,0);
        tracep->declArray(c+412,"Core execute mdu mul pp_0", false,-1, 127,0);
        tracep->declArray(c+840,"Core execute mdu mul pp_1", false,-1, 127,0);
        tracep->declArray(c+844,"Core execute mdu mul pp_2", false,-1, 127,0);
        tracep->declArray(c+848,"Core execute mdu mul pp_3", false,-1, 127,0);
        tracep->declArray(c+852,"Core execute mdu mul pp_4", false,-1, 127,0);
        tracep->declArray(c+856,"Core execute mdu mul pp_5", false,-1, 127,0);
        tracep->declArray(c+860,"Core execute mdu mul pp_6", false,-1, 127,0);
        tracep->declArray(c+864,"Core execute mdu mul pp_7", false,-1, 127,0);
        tracep->declArray(c+868,"Core execute mdu mul pp_8", false,-1, 127,0);
        tracep->declArray(c+872,"Core execute mdu mul pp_9", false,-1, 127,0);
        tracep->declArray(c+876,"Core execute mdu mul pp_10", false,-1, 127,0);
        tracep->declArray(c+880,"Core execute mdu mul pp_11", false,-1, 127,0);
        tracep->declArray(c+884,"Core execute mdu mul pp_12", false,-1, 127,0);
        tracep->declArray(c+888,"Core execute mdu mul pp_13", false,-1, 127,0);
        tracep->declArray(c+892,"Core execute mdu mul pp_14", false,-1, 127,0);
        tracep->declArray(c+896,"Core execute mdu mul pp_15", false,-1, 127,0);
        tracep->declArray(c+900,"Core execute mdu mul pp_16", false,-1, 127,0);
        tracep->declArray(c+904,"Core execute mdu mul pp_17", false,-1, 127,0);
        tracep->declArray(c+908,"Core execute mdu mul pp_18", false,-1, 127,0);
        tracep->declArray(c+912,"Core execute mdu mul pp_19", false,-1, 127,0);
        tracep->declArray(c+916,"Core execute mdu mul pp_20", false,-1, 127,0);
        tracep->declArray(c+920,"Core execute mdu mul pp_21", false,-1, 127,0);
        tracep->declArray(c+924,"Core execute mdu mul pp_22", false,-1, 127,0);
        tracep->declArray(c+928,"Core execute mdu mul pp_23", false,-1, 127,0);
        tracep->declArray(c+932,"Core execute mdu mul pp_24", false,-1, 127,0);
        tracep->declArray(c+936,"Core execute mdu mul pp_25", false,-1, 127,0);
        tracep->declArray(c+940,"Core execute mdu mul pp_26", false,-1, 127,0);
        tracep->declArray(c+944,"Core execute mdu mul pp_27", false,-1, 127,0);
        tracep->declArray(c+948,"Core execute mdu mul pp_28", false,-1, 127,0);
        tracep->declArray(c+952,"Core execute mdu mul pp_29", false,-1, 127,0);
        tracep->declArray(c+956,"Core execute mdu mul pp_30", false,-1, 127,0);
        tracep->declArray(c+960,"Core execute mdu mul pp_31", false,-1, 127,0);
        tracep->declArray(c+964,"Core execute mdu mul pp_32", false,-1, 127,0);
        tracep->declArray(c+756,"Core execute mdu mul pp_l2_0", false,-1, 127,0);
        tracep->declArray(c+760,"Core execute mdu mul pp_l2_1", false,-1, 127,0);
        tracep->declArray(c+764,"Core execute mdu mul pp_l2_2", false,-1, 127,0);
        tracep->declArray(c+776,"Core execute mdu mul pp_l2_3", false,-1, 127,0);
        tracep->declArray(c+780,"Core execute mdu mul pp_l2_4", false,-1, 127,0);
        tracep->declArray(c+784,"Core execute mdu mul pp_l2_5", false,-1, 127,0);
        tracep->declArray(c+796,"Core execute mdu mul pp_l2_6", false,-1, 127,0);
        tracep->declArray(c+800,"Core execute mdu mul pp_l2_7", false,-1, 127,0);
        tracep->declBit(c+968,"Core execute mdu mul c_1", false,-1);
        tracep->declBit(c+969,"Core execute mdu mul c_0", false,-1);
        tracep->declBit(c+970,"Core execute mdu mul c_3", false,-1);
        tracep->declBit(c+971,"Core execute mdu mul c_2", false,-1);
        tracep->declBit(c+972,"Core execute mdu mul c_5", false,-1);
        tracep->declBit(c+973,"Core execute mdu mul c_4", false,-1);
        tracep->declBit(c+974,"Core execute mdu mul c_7", false,-1);
        tracep->declBit(c+975,"Core execute mdu mul c_6", false,-1);
        tracep->declBit(c+976,"Core execute mdu mul c_9", false,-1);
        tracep->declBit(c+977,"Core execute mdu mul c_8", false,-1);
        tracep->declBit(c+978,"Core execute mdu mul c_11", false,-1);
        tracep->declBit(c+979,"Core execute mdu mul c_10", false,-1);
        tracep->declBit(c+980,"Core execute mdu mul c_13", false,-1);
        tracep->declBit(c+981,"Core execute mdu mul c_12", false,-1);
        tracep->declBit(c+982,"Core execute mdu mul c_15", false,-1);
        tracep->declBit(c+983,"Core execute mdu mul c_14", false,-1);
        tracep->declBit(c+984,"Core execute mdu mul c_17", false,-1);
        tracep->declBit(c+985,"Core execute mdu mul c_16", false,-1);
        tracep->declBit(c+986,"Core execute mdu mul c_19", false,-1);
        tracep->declBit(c+987,"Core execute mdu mul c_18", false,-1);
        tracep->declBit(c+988,"Core execute mdu mul c_21", false,-1);
        tracep->declBit(c+989,"Core execute mdu mul c_20", false,-1);
        tracep->declBit(c+990,"Core execute mdu mul c_23", false,-1);
        tracep->declBit(c+991,"Core execute mdu mul c_22", false,-1);
        tracep->declBit(c+992,"Core execute mdu mul c_25", false,-1);
        tracep->declBit(c+993,"Core execute mdu mul c_24", false,-1);
        tracep->declBit(c+994,"Core execute mdu mul c_27", false,-1);
        tracep->declBit(c+995,"Core execute mdu mul c_26", false,-1);
        tracep->declBit(c+996,"Core execute mdu mul c_29", false,-1);
        tracep->declBit(c+997,"Core execute mdu mul c_28", false,-1);
        tracep->declBit(c+998,"Core execute mdu mul c_31", false,-1);
        tracep->declBit(c+999,"Core execute mdu mul c_30", false,-1);
        tracep->declBit(c+1000,"Core execute mdu mul c_33", false,-1);
        tracep->declBit(c+1001,"Core execute mdu mul c_32", false,-1);
        tracep->declBit(c+1002,"Core execute mdu mul c_35", false,-1);
        tracep->declBit(c+1003,"Core execute mdu mul c_34", false,-1);
        tracep->declBit(c+1004,"Core execute mdu mul c_37", false,-1);
        tracep->declBit(c+1005,"Core execute mdu mul c_36", false,-1);
        tracep->declBit(c+1006,"Core execute mdu mul c_39", false,-1);
        tracep->declBit(c+1007,"Core execute mdu mul c_38", false,-1);
        tracep->declBit(c+1008,"Core execute mdu mul c_41", false,-1);
        tracep->declBit(c+1009,"Core execute mdu mul c_40", false,-1);
        tracep->declBit(c+1010,"Core execute mdu mul c_43", false,-1);
        tracep->declBit(c+1011,"Core execute mdu mul c_42", false,-1);
        tracep->declBit(c+1012,"Core execute mdu mul c_45", false,-1);
        tracep->declBit(c+1013,"Core execute mdu mul c_44", false,-1);
        tracep->declBit(c+1014,"Core execute mdu mul c_47", false,-1);
        tracep->declBit(c+1015,"Core execute mdu mul c_46", false,-1);
        tracep->declBit(c+1016,"Core execute mdu mul c_49", false,-1);
        tracep->declBit(c+1017,"Core execute mdu mul c_48", false,-1);
        tracep->declBit(c+1018,"Core execute mdu mul c_51", false,-1);
        tracep->declBit(c+1019,"Core execute mdu mul c_50", false,-1);
        tracep->declBit(c+1020,"Core execute mdu mul c_53", false,-1);
        tracep->declBit(c+1021,"Core execute mdu mul c_52", false,-1);
        tracep->declBit(c+1022,"Core execute mdu mul c_55", false,-1);
        tracep->declBit(c+1023,"Core execute mdu mul c_54", false,-1);
        tracep->declBit(c+1024,"Core execute mdu mul c_57", false,-1);
        tracep->declBit(c+1025,"Core execute mdu mul c_56", false,-1);
        tracep->declBit(c+1026,"Core execute mdu mul c_59", false,-1);
        tracep->declBit(c+1027,"Core execute mdu mul c_58", false,-1);
        tracep->declBit(c+1028,"Core execute mdu mul c_61", false,-1);
        tracep->declBit(c+1029,"Core execute mdu mul c_60", false,-1);
        tracep->declBit(c+1030,"Core execute mdu mul c_63", false,-1);
        tracep->declBit(c+1031,"Core execute mdu mul c_62", false,-1);
        tracep->declBit(c+1032,"Core execute mdu mul c_65", false,-1);
        tracep->declBit(c+1033,"Core execute mdu mul c_64", false,-1);
        tracep->declArray(c+680,"Core execute mdu mul pp33", false,-1, 127,0);
        tracep->declArray(c+1034,"Core execute mdu mul reg_out", false,-1, 127,0);
        tracep->declArray(c+1038,"Core execute mdu mul csa_0_io_y_hi", false,-1, 125,0);
        tracep->declArray(c+1042,"Core execute mdu mul csa_0_io_z_hi", false,-1, 123,0);
        tracep->declArray(c+1046,"Core execute mdu mul csa_1_io_x_hi", false,-1, 121,0);
        tracep->declArray(c+1050,"Core execute mdu mul csa_1_io_y_hi", false,-1, 119,0);
        tracep->declArray(c+1054,"Core execute mdu mul csa_1_io_z_hi", false,-1, 117,0);
        tracep->declArray(c+1058,"Core execute mdu mul csa_2_io_x_hi", false,-1, 115,0);
        tracep->declArray(c+1062,"Core execute mdu mul csa_2_io_y_hi", false,-1, 113,0);
        tracep->declArray(c+1066,"Core execute mdu mul csa_2_io_z_hi", false,-1, 111,0);
        tracep->declArray(c+1070,"Core execute mdu mul csa_3_io_x_hi", false,-1, 109,0);
        tracep->declArray(c+1074,"Core execute mdu mul csa_3_io_y_hi", false,-1, 107,0);
        tracep->declArray(c+1078,"Core execute mdu mul csa_3_io_z_hi", false,-1, 105,0);
        tracep->declArray(c+1082,"Core execute mdu mul csa_4_io_x_hi", false,-1, 103,0);
        tracep->declArray(c+1086,"Core execute mdu mul csa_4_io_y_hi", false,-1, 101,0);
        tracep->declArray(c+1090,"Core execute mdu mul csa_4_io_z_hi", false,-1, 99,0);
        tracep->declArray(c+1094,"Core execute mdu mul csa_5_io_x_hi", false,-1, 97,0);
        tracep->declArray(c+1098,"Core execute mdu mul csa_5_io_y_hi", false,-1, 95,0);
        tracep->declArray(c+1101,"Core execute mdu mul csa_5_io_z_hi", false,-1, 93,0);
        tracep->declArray(c+1104,"Core execute mdu mul csa_6_io_x_hi", false,-1, 91,0);
        tracep->declArray(c+1107,"Core execute mdu mul csa_6_io_y_hi", false,-1, 89,0);
        tracep->declArray(c+1110,"Core execute mdu mul csa_6_io_z_hi", false,-1, 87,0);
        tracep->declArray(c+1113,"Core execute mdu mul csa_7_io_x_hi", false,-1, 85,0);
        tracep->declArray(c+1116,"Core execute mdu mul csa_7_io_y_hi", false,-1, 83,0);
        tracep->declArray(c+1119,"Core execute mdu mul csa_7_io_z_hi", false,-1, 81,0);
        tracep->declArray(c+1122,"Core execute mdu mul csa_8_io_x_hi", false,-1, 79,0);
        tracep->declArray(c+1125,"Core execute mdu mul csa_8_io_y_hi", false,-1, 77,0);
        tracep->declArray(c+1128,"Core execute mdu mul csa_8_io_z_hi", false,-1, 75,0);
        tracep->declArray(c+1131,"Core execute mdu mul csa_9_io_x_hi", false,-1, 73,0);
        tracep->declArray(c+1134,"Core execute mdu mul csa_9_io_y_hi", false,-1, 71,0);
        tracep->declArray(c+1137,"Core execute mdu mul csa_9_io_z_hi", false,-1, 69,0);
        tracep->declArray(c+1140,"Core execute mdu mul csa_10_io_x_hi", false,-1, 67,0);
        tracep->declArray(c+1143,"Core execute mdu mul csa_10_io_y_hi", false,-1, 65,0);
        tracep->declQuad(c+1146,"Core execute mdu mul csa_10_io_z_hi", false,-1, 63,0);
        tracep->declArray(c+828,"Core execute mdu mul s_l8", false,-1, 127,0);
        tracep->declArray(c+832,"Core execute mdu mul c_l8", false,-1, 127,0);
        tracep->declArray(c+1148,"Core execute mdu mul temp_out", false,-1, 127,0);
        tracep->declBit(c+1152,"Core execute mdu mul reg_in2_hi_hi", false,-1);
        tracep->declBus(c+1153,"Core execute mdu mul pp33_lo_lo_lo", false,-1, 7,0);
        tracep->declBus(c+1154,"Core execute mdu mul pp33_lo_hi_lo", false,-1, 7,0);
        tracep->declBus(c+1155,"Core execute mdu mul pp33_lo_hi", false,-1, 16,0);
        tracep->declQuad(c+1156,"Core execute mdu mul pp33_lo", false,-1, 32,0);
        tracep->declBus(c+1158,"Core execute mdu mul pp33_hi_lo_lo", false,-1, 7,0);
        tracep->declBus(c+1159,"Core execute mdu mul pp33_hi_hi_lo", false,-1, 7,0);
        tracep->declBus(c+1160,"Core execute mdu mul pp33_hi_hi", false,-1, 16,0);
        tracep->declQuad(c+1161,"Core execute mdu mul pp33_hi_1", false,-1, 32,0);
        tracep->declArray(c+732,"Core execute mdu mul s_l4_0", false,-1, 127,0);
        tracep->declArray(c+740,"Core execute mdu mul s_l4_1", false,-1, 127,0);
        tracep->declArray(c+748,"Core execute mdu mul s_l4_2", false,-1, 127,0);
        tracep->declArray(c+736,"Core execute mdu mul c_l4_0", false,-1, 127,0);
        tracep->declArray(c+744,"Core execute mdu mul c_l4_1", false,-1, 127,0);
        tracep->declArray(c+752,"Core execute mdu mul c_l4_2", false,-1, 127,0);
        tracep->declArray(c+724,"Core execute mdu mul s_l3_4", false,-1, 127,0);
        tracep->declArray(c+728,"Core execute mdu mul c_l3_4", false,-1, 127,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_0 io_x", false,-1, 64,0);
        tracep->declBus(c+214,"Core execute mdu mul booth_0 io_y", false,-1, 2,0);
        tracep->declArray(c+215,"Core execute mdu mul booth_0 io_z", false,-1, 127,0);
        tracep->declBus(c+219,"Core execute mdu mul booth_0 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_0 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_0 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_0 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_0 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_0 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_1 io_x", false,-1, 64,0);
        tracep->declBus(c+220,"Core execute mdu mul booth_1 io_y", false,-1, 2,0);
        tracep->declArray(c+221,"Core execute mdu mul booth_1 io_z", false,-1, 127,0);
        tracep->declBus(c+225,"Core execute mdu mul booth_1 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_1 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_1 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_1 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_1 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_1 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_2 io_x", false,-1, 64,0);
        tracep->declBus(c+226,"Core execute mdu mul booth_2 io_y", false,-1, 2,0);
        tracep->declArray(c+227,"Core execute mdu mul booth_2 io_z", false,-1, 127,0);
        tracep->declBus(c+231,"Core execute mdu mul booth_2 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_2 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_2 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_2 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_2 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_2 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_3 io_x", false,-1, 64,0);
        tracep->declBus(c+232,"Core execute mdu mul booth_3 io_y", false,-1, 2,0);
        tracep->declArray(c+233,"Core execute mdu mul booth_3 io_z", false,-1, 127,0);
        tracep->declBus(c+237,"Core execute mdu mul booth_3 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_3 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_3 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_3 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_3 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_3 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_4 io_x", false,-1, 64,0);
        tracep->declBus(c+238,"Core execute mdu mul booth_4 io_y", false,-1, 2,0);
        tracep->declArray(c+239,"Core execute mdu mul booth_4 io_z", false,-1, 127,0);
        tracep->declBus(c+243,"Core execute mdu mul booth_4 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_4 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_4 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_4 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_4 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_4 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_5 io_x", false,-1, 64,0);
        tracep->declBus(c+244,"Core execute mdu mul booth_5 io_y", false,-1, 2,0);
        tracep->declArray(c+245,"Core execute mdu mul booth_5 io_z", false,-1, 127,0);
        tracep->declBus(c+249,"Core execute mdu mul booth_5 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_5 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_5 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_5 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_5 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_5 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_6 io_x", false,-1, 64,0);
        tracep->declBus(c+250,"Core execute mdu mul booth_6 io_y", false,-1, 2,0);
        tracep->declArray(c+251,"Core execute mdu mul booth_6 io_z", false,-1, 127,0);
        tracep->declBus(c+255,"Core execute mdu mul booth_6 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_6 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_6 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_6 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_6 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_6 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_7 io_x", false,-1, 64,0);
        tracep->declBus(c+256,"Core execute mdu mul booth_7 io_y", false,-1, 2,0);
        tracep->declArray(c+257,"Core execute mdu mul booth_7 io_z", false,-1, 127,0);
        tracep->declBus(c+261,"Core execute mdu mul booth_7 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_7 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_7 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_7 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_7 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_7 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_8 io_x", false,-1, 64,0);
        tracep->declBus(c+262,"Core execute mdu mul booth_8 io_y", false,-1, 2,0);
        tracep->declArray(c+263,"Core execute mdu mul booth_8 io_z", false,-1, 127,0);
        tracep->declBus(c+267,"Core execute mdu mul booth_8 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_8 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_8 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_8 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_8 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_8 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_9 io_x", false,-1, 64,0);
        tracep->declBus(c+268,"Core execute mdu mul booth_9 io_y", false,-1, 2,0);
        tracep->declArray(c+269,"Core execute mdu mul booth_9 io_z", false,-1, 127,0);
        tracep->declBus(c+273,"Core execute mdu mul booth_9 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_9 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_9 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_9 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_9 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_9 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_10 io_x", false,-1, 64,0);
        tracep->declBus(c+274,"Core execute mdu mul booth_10 io_y", false,-1, 2,0);
        tracep->declArray(c+275,"Core execute mdu mul booth_10 io_z", false,-1, 127,0);
        tracep->declBus(c+279,"Core execute mdu mul booth_10 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_10 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_10 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_10 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_10 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_10 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_11 io_x", false,-1, 64,0);
        tracep->declBus(c+280,"Core execute mdu mul booth_11 io_y", false,-1, 2,0);
        tracep->declArray(c+281,"Core execute mdu mul booth_11 io_z", false,-1, 127,0);
        tracep->declBus(c+285,"Core execute mdu mul booth_11 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_11 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_11 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_11 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_11 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_11 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_12 io_x", false,-1, 64,0);
        tracep->declBus(c+286,"Core execute mdu mul booth_12 io_y", false,-1, 2,0);
        tracep->declArray(c+287,"Core execute mdu mul booth_12 io_z", false,-1, 127,0);
        tracep->declBus(c+291,"Core execute mdu mul booth_12 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_12 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_12 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_12 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_12 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_12 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_13 io_x", false,-1, 64,0);
        tracep->declBus(c+292,"Core execute mdu mul booth_13 io_y", false,-1, 2,0);
        tracep->declArray(c+293,"Core execute mdu mul booth_13 io_z", false,-1, 127,0);
        tracep->declBus(c+297,"Core execute mdu mul booth_13 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_13 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_13 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_13 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_13 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_13 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_14 io_x", false,-1, 64,0);
        tracep->declBus(c+298,"Core execute mdu mul booth_14 io_y", false,-1, 2,0);
        tracep->declArray(c+299,"Core execute mdu mul booth_14 io_z", false,-1, 127,0);
        tracep->declBus(c+303,"Core execute mdu mul booth_14 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_14 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_14 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_14 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_14 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_14 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_15 io_x", false,-1, 64,0);
        tracep->declBus(c+304,"Core execute mdu mul booth_15 io_y", false,-1, 2,0);
        tracep->declArray(c+305,"Core execute mdu mul booth_15 io_z", false,-1, 127,0);
        tracep->declBus(c+309,"Core execute mdu mul booth_15 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_15 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_15 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_15 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_15 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_15 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_16 io_x", false,-1, 64,0);
        tracep->declBus(c+310,"Core execute mdu mul booth_16 io_y", false,-1, 2,0);
        tracep->declArray(c+311,"Core execute mdu mul booth_16 io_z", false,-1, 127,0);
        tracep->declBus(c+315,"Core execute mdu mul booth_16 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_16 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_16 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_16 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_16 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_16 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_17 io_x", false,-1, 64,0);
        tracep->declBus(c+316,"Core execute mdu mul booth_17 io_y", false,-1, 2,0);
        tracep->declArray(c+317,"Core execute mdu mul booth_17 io_z", false,-1, 127,0);
        tracep->declBus(c+321,"Core execute mdu mul booth_17 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_17 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_17 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_17 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_17 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_17 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_18 io_x", false,-1, 64,0);
        tracep->declBus(c+322,"Core execute mdu mul booth_18 io_y", false,-1, 2,0);
        tracep->declArray(c+323,"Core execute mdu mul booth_18 io_z", false,-1, 127,0);
        tracep->declBus(c+327,"Core execute mdu mul booth_18 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_18 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_18 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_18 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_18 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_18 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_19 io_x", false,-1, 64,0);
        tracep->declBus(c+328,"Core execute mdu mul booth_19 io_y", false,-1, 2,0);
        tracep->declArray(c+329,"Core execute mdu mul booth_19 io_z", false,-1, 127,0);
        tracep->declBus(c+333,"Core execute mdu mul booth_19 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_19 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_19 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_19 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_19 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_19 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_20 io_x", false,-1, 64,0);
        tracep->declBus(c+334,"Core execute mdu mul booth_20 io_y", false,-1, 2,0);
        tracep->declArray(c+335,"Core execute mdu mul booth_20 io_z", false,-1, 127,0);
        tracep->declBus(c+339,"Core execute mdu mul booth_20 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_20 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_20 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_20 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_20 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_20 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_21 io_x", false,-1, 64,0);
        tracep->declBus(c+340,"Core execute mdu mul booth_21 io_y", false,-1, 2,0);
        tracep->declArray(c+341,"Core execute mdu mul booth_21 io_z", false,-1, 127,0);
        tracep->declBus(c+345,"Core execute mdu mul booth_21 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_21 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_21 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_21 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_21 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_21 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_22 io_x", false,-1, 64,0);
        tracep->declBus(c+346,"Core execute mdu mul booth_22 io_y", false,-1, 2,0);
        tracep->declArray(c+347,"Core execute mdu mul booth_22 io_z", false,-1, 127,0);
        tracep->declBus(c+351,"Core execute mdu mul booth_22 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_22 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_22 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_22 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_22 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_22 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_23 io_x", false,-1, 64,0);
        tracep->declBus(c+352,"Core execute mdu mul booth_23 io_y", false,-1, 2,0);
        tracep->declArray(c+353,"Core execute mdu mul booth_23 io_z", false,-1, 127,0);
        tracep->declBus(c+357,"Core execute mdu mul booth_23 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_23 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_23 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_23 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_23 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_23 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_24 io_x", false,-1, 64,0);
        tracep->declBus(c+358,"Core execute mdu mul booth_24 io_y", false,-1, 2,0);
        tracep->declArray(c+359,"Core execute mdu mul booth_24 io_z", false,-1, 127,0);
        tracep->declBus(c+363,"Core execute mdu mul booth_24 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_24 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_24 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_24 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_24 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_24 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_25 io_x", false,-1, 64,0);
        tracep->declBus(c+364,"Core execute mdu mul booth_25 io_y", false,-1, 2,0);
        tracep->declArray(c+365,"Core execute mdu mul booth_25 io_z", false,-1, 127,0);
        tracep->declBus(c+369,"Core execute mdu mul booth_25 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_25 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_25 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_25 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_25 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_25 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_26 io_x", false,-1, 64,0);
        tracep->declBus(c+370,"Core execute mdu mul booth_26 io_y", false,-1, 2,0);
        tracep->declArray(c+371,"Core execute mdu mul booth_26 io_z", false,-1, 127,0);
        tracep->declBus(c+375,"Core execute mdu mul booth_26 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_26 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_26 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_26 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_26 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_26 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_27 io_x", false,-1, 64,0);
        tracep->declBus(c+376,"Core execute mdu mul booth_27 io_y", false,-1, 2,0);
        tracep->declArray(c+377,"Core execute mdu mul booth_27 io_z", false,-1, 127,0);
        tracep->declBus(c+381,"Core execute mdu mul booth_27 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_27 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_27 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_27 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_27 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_27 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_28 io_x", false,-1, 64,0);
        tracep->declBus(c+382,"Core execute mdu mul booth_28 io_y", false,-1, 2,0);
        tracep->declArray(c+383,"Core execute mdu mul booth_28 io_z", false,-1, 127,0);
        tracep->declBus(c+387,"Core execute mdu mul booth_28 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_28 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_28 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_28 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_28 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_28 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_29 io_x", false,-1, 64,0);
        tracep->declBus(c+388,"Core execute mdu mul booth_29 io_y", false,-1, 2,0);
        tracep->declArray(c+389,"Core execute mdu mul booth_29 io_z", false,-1, 127,0);
        tracep->declBus(c+393,"Core execute mdu mul booth_29 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_29 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_29 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_29 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_29 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_29 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_30 io_x", false,-1, 64,0);
        tracep->declBus(c+394,"Core execute mdu mul booth_30 io_y", false,-1, 2,0);
        tracep->declArray(c+395,"Core execute mdu mul booth_30 io_z", false,-1, 127,0);
        tracep->declBus(c+399,"Core execute mdu mul booth_30 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_30 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_30 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_30 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_30 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_30 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_31 io_x", false,-1, 64,0);
        tracep->declBus(c+400,"Core execute mdu mul booth_31 io_y", false,-1, 2,0);
        tracep->declArray(c+401,"Core execute mdu mul booth_31 io_z", false,-1, 127,0);
        tracep->declBus(c+405,"Core execute mdu mul booth_31 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_31 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_31 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_31 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_31 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_31 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+211,"Core execute mdu mul booth_32 io_x", false,-1, 64,0);
        tracep->declBus(c+406,"Core execute mdu mul booth_32 io_y", false,-1, 2,0);
        tracep->declArray(c+407,"Core execute mdu mul booth_32 io_z", false,-1, 127,0);
        tracep->declBus(c+411,"Core execute mdu mul booth_32 io_c", false,-1, 1,0);
        tracep->declArray(c+1163,"Core execute mdu mul booth_32 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1166,"Core execute mdu mul booth_32 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1168,"Core execute mdu mul booth_32 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1170,"Core execute mdu mul booth_32 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1172,"Core execute mdu mul booth_32 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+412,"Core execute mdu mul csa_0 io_x", false,-1, 127,0);
        tracep->declArray(c+416,"Core execute mdu mul csa_0 io_y", false,-1, 127,0);
        tracep->declArray(c+420,"Core execute mdu mul csa_0 io_z", false,-1, 127,0);
        tracep->declArray(c+424,"Core execute mdu mul csa_0 io_s", false,-1, 127,0);
        tracep->declArray(c+428,"Core execute mdu mul csa_0 io_c", false,-1, 127,0);
        tracep->declArray(c+1174,"Core execute mdu mul csa_0 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+432,"Core execute mdu mul csa_1 io_x", false,-1, 127,0);
        tracep->declArray(c+436,"Core execute mdu mul csa_1 io_y", false,-1, 127,0);
        tracep->declArray(c+440,"Core execute mdu mul csa_1 io_z", false,-1, 127,0);
        tracep->declArray(c+444,"Core execute mdu mul csa_1 io_s", false,-1, 127,0);
        tracep->declArray(c+448,"Core execute mdu mul csa_1 io_c", false,-1, 127,0);
        tracep->declArray(c+1178,"Core execute mdu mul csa_1 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+452,"Core execute mdu mul csa_2 io_x", false,-1, 127,0);
        tracep->declArray(c+456,"Core execute mdu mul csa_2 io_y", false,-1, 127,0);
        tracep->declArray(c+460,"Core execute mdu mul csa_2 io_z", false,-1, 127,0);
        tracep->declArray(c+464,"Core execute mdu mul csa_2 io_s", false,-1, 127,0);
        tracep->declArray(c+468,"Core execute mdu mul csa_2 io_c", false,-1, 127,0);
        tracep->declArray(c+1182,"Core execute mdu mul csa_2 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+472,"Core execute mdu mul csa_3 io_x", false,-1, 127,0);
        tracep->declArray(c+476,"Core execute mdu mul csa_3 io_y", false,-1, 127,0);
        tracep->declArray(c+480,"Core execute mdu mul csa_3 io_z", false,-1, 127,0);
        tracep->declArray(c+484,"Core execute mdu mul csa_3 io_s", false,-1, 127,0);
        tracep->declArray(c+488,"Core execute mdu mul csa_3 io_c", false,-1, 127,0);
        tracep->declArray(c+1186,"Core execute mdu mul csa_3 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+492,"Core execute mdu mul csa_4 io_x", false,-1, 127,0);
        tracep->declArray(c+496,"Core execute mdu mul csa_4 io_y", false,-1, 127,0);
        tracep->declArray(c+500,"Core execute mdu mul csa_4 io_z", false,-1, 127,0);
        tracep->declArray(c+504,"Core execute mdu mul csa_4 io_s", false,-1, 127,0);
        tracep->declArray(c+508,"Core execute mdu mul csa_4 io_c", false,-1, 127,0);
        tracep->declArray(c+1190,"Core execute mdu mul csa_4 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+512,"Core execute mdu mul csa_5 io_x", false,-1, 127,0);
        tracep->declArray(c+516,"Core execute mdu mul csa_5 io_y", false,-1, 127,0);
        tracep->declArray(c+520,"Core execute mdu mul csa_5 io_z", false,-1, 127,0);
        tracep->declArray(c+524,"Core execute mdu mul csa_5 io_s", false,-1, 127,0);
        tracep->declArray(c+528,"Core execute mdu mul csa_5 io_c", false,-1, 127,0);
        tracep->declArray(c+1194,"Core execute mdu mul csa_5 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+532,"Core execute mdu mul csa_6 io_x", false,-1, 127,0);
        tracep->declArray(c+536,"Core execute mdu mul csa_6 io_y", false,-1, 127,0);
        tracep->declArray(c+540,"Core execute mdu mul csa_6 io_z", false,-1, 127,0);
        tracep->declArray(c+544,"Core execute mdu mul csa_6 io_s", false,-1, 127,0);
        tracep->declArray(c+548,"Core execute mdu mul csa_6 io_c", false,-1, 127,0);
        tracep->declArray(c+1198,"Core execute mdu mul csa_6 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+552,"Core execute mdu mul csa_7 io_x", false,-1, 127,0);
        tracep->declArray(c+556,"Core execute mdu mul csa_7 io_y", false,-1, 127,0);
        tracep->declArray(c+560,"Core execute mdu mul csa_7 io_z", false,-1, 127,0);
        tracep->declArray(c+564,"Core execute mdu mul csa_7 io_s", false,-1, 127,0);
        tracep->declArray(c+568,"Core execute mdu mul csa_7 io_c", false,-1, 127,0);
        tracep->declArray(c+1202,"Core execute mdu mul csa_7 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+572,"Core execute mdu mul csa_8 io_x", false,-1, 127,0);
        tracep->declArray(c+576,"Core execute mdu mul csa_8 io_y", false,-1, 127,0);
        tracep->declArray(c+580,"Core execute mdu mul csa_8 io_z", false,-1, 127,0);
        tracep->declArray(c+584,"Core execute mdu mul csa_8 io_s", false,-1, 127,0);
        tracep->declArray(c+588,"Core execute mdu mul csa_8 io_c", false,-1, 127,0);
        tracep->declArray(c+1206,"Core execute mdu mul csa_8 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+592,"Core execute mdu mul csa_9 io_x", false,-1, 127,0);
        tracep->declArray(c+596,"Core execute mdu mul csa_9 io_y", false,-1, 127,0);
        tracep->declArray(c+600,"Core execute mdu mul csa_9 io_z", false,-1, 127,0);
        tracep->declArray(c+604,"Core execute mdu mul csa_9 io_s", false,-1, 127,0);
        tracep->declArray(c+608,"Core execute mdu mul csa_9 io_c", false,-1, 127,0);
        tracep->declArray(c+1210,"Core execute mdu mul csa_9 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+612,"Core execute mdu mul csa_10 io_x", false,-1, 127,0);
        tracep->declArray(c+616,"Core execute mdu mul csa_10 io_y", false,-1, 127,0);
        tracep->declArray(c+620,"Core execute mdu mul csa_10 io_z", false,-1, 127,0);
        tracep->declArray(c+624,"Core execute mdu mul csa_10 io_s", false,-1, 127,0);
        tracep->declArray(c+628,"Core execute mdu mul csa_10 io_c", false,-1, 127,0);
        tracep->declArray(c+1214,"Core execute mdu mul csa_10 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+424,"Core execute mdu mul csa_11 io_x", false,-1, 127,0);
        tracep->declArray(c+428,"Core execute mdu mul csa_11 io_y", false,-1, 127,0);
        tracep->declArray(c+448,"Core execute mdu mul csa_11 io_z", false,-1, 127,0);
        tracep->declArray(c+632,"Core execute mdu mul csa_11 io_s", false,-1, 127,0);
        tracep->declArray(c+636,"Core execute mdu mul csa_11 io_c", false,-1, 127,0);
        tracep->declArray(c+1218,"Core execute mdu mul csa_11 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+444,"Core execute mdu mul csa_12 io_x", false,-1, 127,0);
        tracep->declArray(c+468,"Core execute mdu mul csa_12 io_y", false,-1, 127,0);
        tracep->declArray(c+464,"Core execute mdu mul csa_12 io_z", false,-1, 127,0);
        tracep->declArray(c+640,"Core execute mdu mul csa_12 io_s", false,-1, 127,0);
        tracep->declArray(c+644,"Core execute mdu mul csa_12 io_c", false,-1, 127,0);
        tracep->declArray(c+1222,"Core execute mdu mul csa_12 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+484,"Core execute mdu mul csa_13 io_x", false,-1, 127,0);
        tracep->declArray(c+488,"Core execute mdu mul csa_13 io_y", false,-1, 127,0);
        tracep->declArray(c+508,"Core execute mdu mul csa_13 io_z", false,-1, 127,0);
        tracep->declArray(c+648,"Core execute mdu mul csa_13 io_s", false,-1, 127,0);
        tracep->declArray(c+652,"Core execute mdu mul csa_13 io_c", false,-1, 127,0);
        tracep->declArray(c+1226,"Core execute mdu mul csa_13 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+504,"Core execute mdu mul csa_14 io_x", false,-1, 127,0);
        tracep->declArray(c+528,"Core execute mdu mul csa_14 io_y", false,-1, 127,0);
        tracep->declArray(c+524,"Core execute mdu mul csa_14 io_z", false,-1, 127,0);
        tracep->declArray(c+656,"Core execute mdu mul csa_14 io_s", false,-1, 127,0);
        tracep->declArray(c+660,"Core execute mdu mul csa_14 io_c", false,-1, 127,0);
        tracep->declArray(c+1230,"Core execute mdu mul csa_14 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+544,"Core execute mdu mul csa_15 io_x", false,-1, 127,0);
        tracep->declArray(c+548,"Core execute mdu mul csa_15 io_y", false,-1, 127,0);
        tracep->declArray(c+568,"Core execute mdu mul csa_15 io_z", false,-1, 127,0);
        tracep->declArray(c+664,"Core execute mdu mul csa_15 io_s", false,-1, 127,0);
        tracep->declArray(c+668,"Core execute mdu mul csa_15 io_c", false,-1, 127,0);
        tracep->declArray(c+1234,"Core execute mdu mul csa_15 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+564,"Core execute mdu mul csa_16 io_x", false,-1, 127,0);
        tracep->declArray(c+588,"Core execute mdu mul csa_16 io_y", false,-1, 127,0);
        tracep->declArray(c+584,"Core execute mdu mul csa_16 io_z", false,-1, 127,0);
        tracep->declArray(c+672,"Core execute mdu mul csa_16 io_s", false,-1, 127,0);
        tracep->declArray(c+676,"Core execute mdu mul csa_16 io_c", false,-1, 127,0);
        tracep->declArray(c+1238,"Core execute mdu mul csa_16 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+604,"Core execute mdu mul csa_17 io_x", false,-1, 127,0);
        tracep->declArray(c+608,"Core execute mdu mul csa_17 io_y", false,-1, 127,0);
        tracep->declArray(c+680,"Core execute mdu mul csa_17 io_z", false,-1, 127,0);
        tracep->declArray(c+684,"Core execute mdu mul csa_17 io_s", false,-1, 127,0);
        tracep->declArray(c+688,"Core execute mdu mul csa_17 io_c", false,-1, 127,0);
        tracep->declArray(c+1242,"Core execute mdu mul csa_17 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+624,"Core execute mdu mul csa_18 io_x", false,-1, 127,0);
        tracep->declArray(c+628,"Core execute mdu mul csa_18 io_y", false,-1, 127,0);
        tracep->declArray(c+632,"Core execute mdu mul csa_18 io_z", false,-1, 127,0);
        tracep->declArray(c+692,"Core execute mdu mul csa_18 io_s", false,-1, 127,0);
        tracep->declArray(c+696,"Core execute mdu mul csa_18 io_c", false,-1, 127,0);
        tracep->declArray(c+1246,"Core execute mdu mul csa_18 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+636,"Core execute mdu mul csa_19 io_x", false,-1, 127,0);
        tracep->declArray(c+640,"Core execute mdu mul csa_19 io_y", false,-1, 127,0);
        tracep->declArray(c+644,"Core execute mdu mul csa_19 io_z", false,-1, 127,0);
        tracep->declArray(c+700,"Core execute mdu mul csa_19 io_s", false,-1, 127,0);
        tracep->declArray(c+704,"Core execute mdu mul csa_19 io_c", false,-1, 127,0);
        tracep->declArray(c+1250,"Core execute mdu mul csa_19 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+648,"Core execute mdu mul csa_20 io_x", false,-1, 127,0);
        tracep->declArray(c+652,"Core execute mdu mul csa_20 io_y", false,-1, 127,0);
        tracep->declArray(c+656,"Core execute mdu mul csa_20 io_z", false,-1, 127,0);
        tracep->declArray(c+708,"Core execute mdu mul csa_20 io_s", false,-1, 127,0);
        tracep->declArray(c+712,"Core execute mdu mul csa_20 io_c", false,-1, 127,0);
        tracep->declArray(c+1254,"Core execute mdu mul csa_20 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+660,"Core execute mdu mul csa_21 io_x", false,-1, 127,0);
        tracep->declArray(c+664,"Core execute mdu mul csa_21 io_y", false,-1, 127,0);
        tracep->declArray(c+668,"Core execute mdu mul csa_21 io_z", false,-1, 127,0);
        tracep->declArray(c+716,"Core execute mdu mul csa_21 io_s", false,-1, 127,0);
        tracep->declArray(c+720,"Core execute mdu mul csa_21 io_c", false,-1, 127,0);
        tracep->declArray(c+1258,"Core execute mdu mul csa_21 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+672,"Core execute mdu mul csa_22 io_x", false,-1, 127,0);
        tracep->declArray(c+676,"Core execute mdu mul csa_22 io_y", false,-1, 127,0);
        tracep->declArray(c+684,"Core execute mdu mul csa_22 io_z", false,-1, 127,0);
        tracep->declArray(c+724,"Core execute mdu mul csa_22 io_s", false,-1, 127,0);
        tracep->declArray(c+728,"Core execute mdu mul csa_22 io_c", false,-1, 127,0);
        tracep->declArray(c+1262,"Core execute mdu mul csa_22 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+688,"Core execute mdu mul csa_23 io_x", false,-1, 127,0);
        tracep->declArray(c+692,"Core execute mdu mul csa_23 io_y", false,-1, 127,0);
        tracep->declArray(c+696,"Core execute mdu mul csa_23 io_z", false,-1, 127,0);
        tracep->declArray(c+732,"Core execute mdu mul csa_23 io_s", false,-1, 127,0);
        tracep->declArray(c+736,"Core execute mdu mul csa_23 io_c", false,-1, 127,0);
        tracep->declArray(c+1266,"Core execute mdu mul csa_23 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+700,"Core execute mdu mul csa_24 io_x", false,-1, 127,0);
        tracep->declArray(c+704,"Core execute mdu mul csa_24 io_y", false,-1, 127,0);
        tracep->declArray(c+708,"Core execute mdu mul csa_24 io_z", false,-1, 127,0);
        tracep->declArray(c+740,"Core execute mdu mul csa_24 io_s", false,-1, 127,0);
        tracep->declArray(c+744,"Core execute mdu mul csa_24 io_c", false,-1, 127,0);
        tracep->declArray(c+1270,"Core execute mdu mul csa_24 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+712,"Core execute mdu mul csa_25 io_x", false,-1, 127,0);
        tracep->declArray(c+716,"Core execute mdu mul csa_25 io_y", false,-1, 127,0);
        tracep->declArray(c+720,"Core execute mdu mul csa_25 io_z", false,-1, 127,0);
        tracep->declArray(c+748,"Core execute mdu mul csa_25 io_s", false,-1, 127,0);
        tracep->declArray(c+752,"Core execute mdu mul csa_25 io_c", false,-1, 127,0);
        tracep->declArray(c+1274,"Core execute mdu mul csa_25 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+756,"Core execute mdu mul csa_26 io_x", false,-1, 127,0);
        tracep->declArray(c+760,"Core execute mdu mul csa_26 io_y", false,-1, 127,0);
        tracep->declArray(c+764,"Core execute mdu mul csa_26 io_z", false,-1, 127,0);
        tracep->declArray(c+768,"Core execute mdu mul csa_26 io_s", false,-1, 127,0);
        tracep->declArray(c+772,"Core execute mdu mul csa_26 io_c", false,-1, 127,0);
        tracep->declArray(c+1278,"Core execute mdu mul csa_26 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+776,"Core execute mdu mul csa_27 io_x", false,-1, 127,0);
        tracep->declArray(c+780,"Core execute mdu mul csa_27 io_y", false,-1, 127,0);
        tracep->declArray(c+784,"Core execute mdu mul csa_27 io_z", false,-1, 127,0);
        tracep->declArray(c+788,"Core execute mdu mul csa_27 io_s", false,-1, 127,0);
        tracep->declArray(c+792,"Core execute mdu mul csa_27 io_c", false,-1, 127,0);
        tracep->declArray(c+1282,"Core execute mdu mul csa_27 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+796,"Core execute mdu mul csa_28 io_x", false,-1, 127,0);
        tracep->declArray(c+800,"Core execute mdu mul csa_28 io_y", false,-1, 127,0);
        tracep->declArray(c+768,"Core execute mdu mul csa_28 io_z", false,-1, 127,0);
        tracep->declArray(c+804,"Core execute mdu mul csa_28 io_s", false,-1, 127,0);
        tracep->declArray(c+808,"Core execute mdu mul csa_28 io_c", false,-1, 127,0);
        tracep->declArray(c+1286,"Core execute mdu mul csa_28 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+788,"Core execute mdu mul csa_29 io_x", false,-1, 127,0);
        tracep->declArray(c+772,"Core execute mdu mul csa_29 io_y", false,-1, 127,0);
        tracep->declArray(c+792,"Core execute mdu mul csa_29 io_z", false,-1, 127,0);
        tracep->declArray(c+812,"Core execute mdu mul csa_29 io_s", false,-1, 127,0);
        tracep->declArray(c+816,"Core execute mdu mul csa_29 io_c", false,-1, 127,0);
        tracep->declArray(c+1290,"Core execute mdu mul csa_29 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+804,"Core execute mdu mul csa_30 io_x", false,-1, 127,0);
        tracep->declArray(c+812,"Core execute mdu mul csa_30 io_y", false,-1, 127,0);
        tracep->declArray(c+808,"Core execute mdu mul csa_30 io_z", false,-1, 127,0);
        tracep->declArray(c+820,"Core execute mdu mul csa_30 io_s", false,-1, 127,0);
        tracep->declArray(c+824,"Core execute mdu mul csa_30 io_c", false,-1, 127,0);
        tracep->declArray(c+1294,"Core execute mdu mul csa_30 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+820,"Core execute mdu mul csa_31 io_x", false,-1, 127,0);
        tracep->declArray(c+824,"Core execute mdu mul csa_31 io_y", false,-1, 127,0);
        tracep->declArray(c+816,"Core execute mdu mul csa_31 io_z", false,-1, 127,0);
        tracep->declArray(c+828,"Core execute mdu mul csa_31 io_s", false,-1, 127,0);
        tracep->declArray(c+832,"Core execute mdu mul csa_31 io_c", false,-1, 127,0);
        tracep->declArray(c+1298,"Core execute mdu mul csa_31 io_c_hi", false,-1, 126,0);
        tracep->declBit(c+1355,"Core mem clock", false,-1);
        tracep->declBit(c+1356,"Core mem reset", false,-1);
        tracep->declBit(c+1335,"Core mem io_in_ready", false,-1);
        tracep->declBit(c+107,"Core mem io_in_bits_valid", false,-1);
        tracep->declBus(c+108,"Core mem io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+109,"Core mem io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+110,"Core mem io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+111,"Core mem io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+112,"Core mem io_in_bits_mdu_code", false,-1, 3,0);
        tracep->declBus(c+99,"Core mem io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+113,"Core mem io_in_bits_rd_en", false,-1);
        tracep->declBit(c+121,"Core mem io_out_bits_valid", false,-1);
        tracep->declBus(c+122,"Core mem io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+123,"Core mem io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+100,"Core mem io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+31,"Core mem io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+30,"Core mem io_wen_o", false,-1);
        tracep->declQuad(c+32,"Core mem io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+114,"Core mem io_is_ebreak_i", false,-1);
        tracep->declBit(c+124,"Core mem io_is_ebreak_o", false,-1);
        tracep->declBus(c+115,"Core mem io_dmem_req_bits_arwaddr", false,-1, 31,0);
        tracep->declBit(c+1328,"Core mem io_dmem_req_bits_rvalid", false,-1);
        tracep->declBit(c+1329,"Core mem io_dmem_req_bits_wvalid", false,-1);
        tracep->declQuad(c+125,"Core mem io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+127,"Core mem io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declQuad(c+1375,"Core mem io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1377,"Core mem io_dmem_resp_bits_rready", false,-1);
        tracep->declBit(c+1378,"Core mem io_dmem_resp_bits_wready", false,-1);
        tracep->declBus(c+115,"Core mem io_mem_rwaddr_i", false,-1, 31,0);
        tracep->declBit(c+116,"Core mem io_mem_rvalid_i", false,-1);
        tracep->declBit(c+117,"Core mem io_mem_wvalid_i", false,-1);
        tracep->declQuad(c+26,"Core mem io_mem_wdata_i", false,-1, 63,0);
        tracep->declBus(c+111,"Core mem io_mem_wsize_i", false,-1, 1,0);
        tracep->declBus(c+115,"Core mem io_reg_mem_addr_i", false,-1, 31,0);
        tracep->declQuad(c+118,"Core mem io_mem_mduout_i", false,-1, 63,0);
        tracep->declBit(c+120,"Core mem io_mem_mduready_i", false,-1);
        tracep->declBit(c+105,"Core mem io_mem_rd_en", false,-1);
        tracep->declBus(c+106,"Core mem io_mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1336,"Core mem io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+104,"Core mem io_mem_is_load", false,-1);
        tracep->declBit(c+1302,"Core mem mem_reg_decodeop_valid", false,-1);
        tracep->declBus(c+1303,"Core mem mem_reg_decodeop_pc", false,-1, 31,0);
        tracep->declBus(c+1304,"Core mem mem_reg_decodeop_inst", false,-1, 31,0);
        tracep->declBus(c+1305,"Core mem mem_reg_decodeop_mem_code", false,-1, 1,0);
        tracep->declBus(c+1306,"Core mem mem_reg_decodeop_mem_size", false,-1, 1,0);
        tracep->declBus(c+1307,"Core mem mem_reg_decodeop_mdu_code", false,-1, 3,0);
        tracep->declBus(c+106,"Core mem mem_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+1308,"Core mem mem_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+1309,"Core mem waddr", false,-1, 4,0);
        tracep->declBit(c+1310,"Core mem wen", false,-1);
        tracep->declQuad(c+1311,"Core mem wdata", false,-1, 63,0);
        tracep->declBus(c+1313,"Core mem reg_mem_addr", false,-1, 31,0);
        tracep->declBit(c+124,"Core mem io_is_ebreak_o_REG", false,-1);
        tracep->declBit(c+1314,"Core mem mdu_valid", false,-1);
        tracep->declBit(c+1315,"Core mem is_load", false,-1);
        tracep->declBit(c+1316,"Core mem is_store", false,-1);
        tracep->declBit(c+1342,"Core mem req_wait", false,-1);
        tracep->declBit(c+1341,"Core mem stall", false,-1);
        tracep->declBus(c+1317,"Core mem addr_offset", false,-1, 2,0);
        tracep->declBus(c+1318,"Core mem reg_addr_offset", false,-1, 2,0);
        tracep->declBus(c+1319,"Core mem mask", false,-1, 7,0);
        tracep->declBus(c+1320,"Core mem wmask", false,-1, 7,0);
        tracep->declQuad(c+1343,"Core mem ld_data_raw", false,-1, 63,0);
        tracep->declQuad(c+1345,"Core mem ld_data_hi", false,-1, 55,0);
        tracep->declBus(c+1347,"Core mem ld_data_lo", false,-1, 7,0);
        tracep->declQuad(c+1348,"Core mem ld_data_hi_1", false,-1, 47,0);
        tracep->declBus(c+1350,"Core mem ld_data_lo_1", false,-1, 15,0);
        tracep->declBus(c+1351,"Core mem ld_data_hi_2", false,-1, 31,0);
        tracep->declBus(c+1352,"Core mem ld_data_lo_2", false,-1, 31,0);
        tracep->declQuad(c+1353,"Core mem ld_data", false,-1, 63,0);
        tracep->declQuad(c+1330,"Core mem ld_data_u", false,-1, 63,0);
        tracep->declQuad(c+1332,"Core mem load_data", false,-1, 63,0);
        tracep->declBit(c+121,"Core mem io_out_bits_REG_valid", false,-1);
        tracep->declBus(c+122,"Core mem io_out_bits_REG_pc", false,-1, 31,0);
        tracep->declBus(c+123,"Core mem io_out_bits_REG_inst", false,-1, 31,0);
        tracep->declBus(c+31,"Core mem io_waddr_o_REG", false,-1, 4,0);
        tracep->declBit(c+30,"Core mem io_wen_o_REG", false,-1);
        tracep->declQuad(c+32,"Core mem io_wdata_o_REG", false,-1, 63,0);
        tracep->declBit(c+1355,"Core wb_dpi clk", false,-1);
        tracep->declBus(c+123,"Core wb_dpi inst", false,-1, 31,0);
        tracep->declBus(c+122,"Core wb_dpi pc", false,-1, 31,0);
        tracep->declBit(c+124,"Core wb_dpi ebreak", false,-1);
        tracep->declBus(c+1321,"Core wb_dpi inst1", false,-1, 31,0);
        tracep->declBus(c+1322,"Core wb_dpi pc1", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp2889;
    VlWide<4>/*127:0*/ __Vtemp2890;
    VlWide<3>/*95:0*/ __Vtemp2893;
    VlWide<3>/*95:0*/ __Vtemp2895;
    VlWide<4>/*127:0*/ __Vtemp2912;
    VlWide<4>/*127:0*/ __Vtemp2918;
    VlWide<4>/*127:0*/ __Vtemp2935;
    VlWide<4>/*127:0*/ __Vtemp2939;
    VlWide<4>/*127:0*/ __Vtemp2941;
    VlWide<4>/*127:0*/ __Vtemp2958;
    VlWide<4>/*127:0*/ __Vtemp2962;
    VlWide<4>/*127:0*/ __Vtemp2964;
    VlWide<4>/*127:0*/ __Vtemp2981;
    VlWide<4>/*127:0*/ __Vtemp2985;
    VlWide<4>/*127:0*/ __Vtemp2987;
    VlWide<4>/*127:0*/ __Vtemp3004;
    VlWide<4>/*127:0*/ __Vtemp3008;
    VlWide<4>/*127:0*/ __Vtemp3010;
    VlWide<4>/*127:0*/ __Vtemp3027;
    VlWide<4>/*127:0*/ __Vtemp3031;
    VlWide<4>/*127:0*/ __Vtemp3033;
    VlWide<4>/*127:0*/ __Vtemp3050;
    VlWide<4>/*127:0*/ __Vtemp3054;
    VlWide<4>/*127:0*/ __Vtemp3056;
    VlWide<4>/*127:0*/ __Vtemp3073;
    VlWide<4>/*127:0*/ __Vtemp3077;
    VlWide<4>/*127:0*/ __Vtemp3079;
    VlWide<4>/*127:0*/ __Vtemp3096;
    VlWide<4>/*127:0*/ __Vtemp3100;
    VlWide<4>/*127:0*/ __Vtemp3102;
    VlWide<4>/*127:0*/ __Vtemp3119;
    VlWide<4>/*127:0*/ __Vtemp3123;
    VlWide<4>/*127:0*/ __Vtemp3125;
    VlWide<4>/*127:0*/ __Vtemp3142;
    VlWide<4>/*127:0*/ __Vtemp3146;
    VlWide<4>/*127:0*/ __Vtemp3148;
    VlWide<4>/*127:0*/ __Vtemp3165;
    VlWide<4>/*127:0*/ __Vtemp3169;
    VlWide<4>/*127:0*/ __Vtemp3171;
    VlWide<4>/*127:0*/ __Vtemp3188;
    VlWide<4>/*127:0*/ __Vtemp3192;
    VlWide<4>/*127:0*/ __Vtemp3194;
    VlWide<4>/*127:0*/ __Vtemp3211;
    VlWide<4>/*127:0*/ __Vtemp3215;
    VlWide<4>/*127:0*/ __Vtemp3217;
    VlWide<4>/*127:0*/ __Vtemp3234;
    VlWide<4>/*127:0*/ __Vtemp3238;
    VlWide<4>/*127:0*/ __Vtemp3240;
    VlWide<4>/*127:0*/ __Vtemp3257;
    VlWide<4>/*127:0*/ __Vtemp3259;
    VlWide<4>/*127:0*/ __Vtemp3263;
    VlWide<4>/*127:0*/ __Vtemp3280;
    VlWide<4>/*127:0*/ __Vtemp3286;
    VlWide<4>/*127:0*/ __Vtemp3303;
    VlWide<4>/*127:0*/ __Vtemp3307;
    VlWide<4>/*127:0*/ __Vtemp3309;
    VlWide<4>/*127:0*/ __Vtemp3326;
    VlWide<4>/*127:0*/ __Vtemp3330;
    VlWide<4>/*127:0*/ __Vtemp3332;
    VlWide<4>/*127:0*/ __Vtemp3349;
    VlWide<4>/*127:0*/ __Vtemp3353;
    VlWide<4>/*127:0*/ __Vtemp3355;
    VlWide<4>/*127:0*/ __Vtemp3372;
    VlWide<4>/*127:0*/ __Vtemp3376;
    VlWide<4>/*127:0*/ __Vtemp3378;
    VlWide<4>/*127:0*/ __Vtemp3395;
    VlWide<4>/*127:0*/ __Vtemp3399;
    VlWide<4>/*127:0*/ __Vtemp3401;
    VlWide<4>/*127:0*/ __Vtemp3418;
    VlWide<4>/*127:0*/ __Vtemp3422;
    VlWide<4>/*127:0*/ __Vtemp3424;
    VlWide<4>/*127:0*/ __Vtemp3441;
    VlWide<4>/*127:0*/ __Vtemp3445;
    VlWide<4>/*127:0*/ __Vtemp3447;
    VlWide<4>/*127:0*/ __Vtemp3464;
    VlWide<4>/*127:0*/ __Vtemp3468;
    VlWide<4>/*127:0*/ __Vtemp3470;
    VlWide<4>/*127:0*/ __Vtemp3487;
    VlWide<4>/*127:0*/ __Vtemp3491;
    VlWide<4>/*127:0*/ __Vtemp3493;
    VlWide<4>/*127:0*/ __Vtemp3510;
    VlWide<4>/*127:0*/ __Vtemp3514;
    VlWide<4>/*127:0*/ __Vtemp3516;
    VlWide<4>/*127:0*/ __Vtemp3533;
    VlWide<4>/*127:0*/ __Vtemp3537;
    VlWide<4>/*127:0*/ __Vtemp3539;
    VlWide<4>/*127:0*/ __Vtemp3556;
    VlWide<4>/*127:0*/ __Vtemp3560;
    VlWide<4>/*127:0*/ __Vtemp3562;
    VlWide<4>/*127:0*/ __Vtemp3579;
    VlWide<4>/*127:0*/ __Vtemp3583;
    VlWide<4>/*127:0*/ __Vtemp3585;
    VlWide<4>/*127:0*/ __Vtemp3602;
    VlWide<4>/*127:0*/ __Vtemp3606;
    VlWide<4>/*127:0*/ __Vtemp3608;
    VlWide<4>/*127:0*/ __Vtemp3625;
    VlWide<4>/*127:0*/ __Vtemp3627;
    VlWide<4>/*127:0*/ __Vtemp3631;
    VlWide<4>/*127:0*/ __Vtemp3648;
    VlWide<4>/*127:0*/ __Vtemp3654;
    VlWide<4>/*127:0*/ __Vtemp3658;
    VlWide<4>/*127:0*/ __Vtemp3662;
    VlWide<4>/*127:0*/ __Vtemp3666;
    VlWide<4>/*127:0*/ __Vtemp3670;
    VlWide<4>/*127:0*/ __Vtemp3674;
    VlWide<4>/*127:0*/ __Vtemp3678;
    VlWide<4>/*127:0*/ __Vtemp3682;
    VlWide<4>/*127:0*/ __Vtemp3686;
    VlWide<4>/*127:0*/ __Vtemp3690;
    VlWide<4>/*127:0*/ __Vtemp3694;
    VlWide<4>/*127:0*/ __Vtemp3698;
    VlWide<4>/*127:0*/ __Vtemp3702;
    VlWide<4>/*127:0*/ __Vtemp3706;
    VlWide<4>/*127:0*/ __Vtemp3710;
    VlWide<4>/*127:0*/ __Vtemp3714;
    VlWide<4>/*127:0*/ __Vtemp3718;
    VlWide<4>/*127:0*/ __Vtemp3722;
    VlWide<4>/*127:0*/ __Vtemp3726;
    VlWide<4>/*127:0*/ __Vtemp3730;
    VlWide<4>/*127:0*/ __Vtemp3734;
    VlWide<4>/*127:0*/ __Vtemp3736;
    VlWide<4>/*127:0*/ __Vtemp3740;
    VlWide<4>/*127:0*/ __Vtemp3744;
    VlWide<4>/*127:0*/ __Vtemp3748;
    VlWide<4>/*127:0*/ __Vtemp3752;
    VlWide<4>/*127:0*/ __Vtemp3756;
    VlWide<4>/*127:0*/ __Vtemp3760;
    VlWide<4>/*127:0*/ __Vtemp3764;
    VlWide<4>/*127:0*/ __Vtemp3768;
    VlWide<4>/*127:0*/ __Vtemp3772;
    VlWide<4>/*127:0*/ __Vtemp3776;
    VlWide<4>/*127:0*/ __Vtemp3780;
    VlWide<4>/*127:0*/ __Vtemp3784;
    VlWide<4>/*127:0*/ __Vtemp3788;
    VlWide<4>/*127:0*/ __Vtemp3792;
    VlWide<4>/*127:0*/ __Vtemp3796;
    VlWide<4>/*127:0*/ __Vtemp3800;
    VlWide<4>/*127:0*/ __Vtemp3804;
    VlWide<4>/*127:0*/ __Vtemp3808;
    VlWide<4>/*127:0*/ __Vtemp3812;
    VlWide<4>/*127:0*/ __Vtemp3816;
    VlWide<4>/*127:0*/ __Vtemp3817;
    VlWide<4>/*127:0*/ __Vtemp3821;
    VlWide<4>/*127:0*/ __Vtemp3825;
    VlWide<4>/*127:0*/ __Vtemp3829;
    VlWide<4>/*127:0*/ __Vtemp3833;
    VlWide<4>/*127:0*/ __Vtemp3837;
    VlWide<4>/*127:0*/ __Vtemp3841;
    VlWide<4>/*127:0*/ __Vtemp3845;
    VlWide<4>/*127:0*/ __Vtemp3849;
    VlWide<4>/*127:0*/ __Vtemp3853;
    VlWide<4>/*127:0*/ __Vtemp3857;
    VlWide<4>/*127:0*/ __Vtemp3861;
    VlWide<4>/*127:0*/ __Vtemp3865;
    VlWide<4>/*127:0*/ __Vtemp3871;
    VlWide<4>/*127:0*/ __Vtemp3891;
    VlWide<4>/*127:0*/ __Vtemp3901;
    VlWide<4>/*127:0*/ __Vtemp3925;
    VlWide<4>/*127:0*/ __Vtemp3931;
    VlWide<4>/*127:0*/ __Vtemp3951;
    VlWide<4>/*127:0*/ __Vtemp3961;
    VlWide<4>/*127:0*/ __Vtemp3985;
    VlWide<4>/*127:0*/ __Vtemp3989;
    VlWide<4>/*127:0*/ __Vtemp3993;
    VlWide<4>/*127:0*/ __Vtemp3997;
    VlWide<4>/*127:0*/ __Vtemp4001;
    VlWide<4>/*127:0*/ __Vtemp4005;
    VlWide<4>/*127:0*/ __Vtemp4015;
    VlWide<4>/*127:0*/ __Vtemp4039;
    VlWide<4>/*127:0*/ __Vtemp4042;
    VlWide<4>/*127:0*/ __Vtemp4045;
    VlWide<4>/*127:0*/ __Vtemp4048;
    VlWide<4>/*127:0*/ __Vtemp4051;
    VlWide<4>/*127:0*/ __Vtemp4054;
    VlWide<4>/*127:0*/ __Vtemp4057;
    VlWide<4>/*127:0*/ __Vtemp4060;
    VlWide<4>/*127:0*/ __Vtemp4063;
    VlWide<4>/*127:0*/ __Vtemp4066;
    VlWide<4>/*127:0*/ __Vtemp4069;
    VlWide<4>/*127:0*/ __Vtemp4072;
    VlWide<4>/*127:0*/ __Vtemp4075;
    VlWide<4>/*127:0*/ __Vtemp4078;
    VlWide<4>/*127:0*/ __Vtemp4081;
    VlWide<4>/*127:0*/ __Vtemp4084;
    VlWide<3>/*95:0*/ __Vtemp4085;
    VlWide<3>/*95:0*/ __Vtemp4088;
    VlWide<3>/*95:0*/ __Vtemp4091;
    VlWide<3>/*95:0*/ __Vtemp4094;
    VlWide<3>/*95:0*/ __Vtemp4097;
    VlWide<3>/*95:0*/ __Vtemp4100;
    VlWide<3>/*95:0*/ __Vtemp4103;
    VlWide<3>/*95:0*/ __Vtemp4106;
    VlWide<3>/*95:0*/ __Vtemp4109;
    VlWide<3>/*95:0*/ __Vtemp4112;
    VlWide<3>/*95:0*/ __Vtemp4115;
    VlWide<3>/*95:0*/ __Vtemp4118;
    VlWide<3>/*95:0*/ __Vtemp4121;
    VlWide<3>/*95:0*/ __Vtemp4124;
    VlWide<3>/*95:0*/ __Vtemp4127;
    VlWide<3>/*95:0*/ __Vtemp4130;
    VlWide<4>/*127:0*/ __Vtemp4140;
    VlWide<4>/*127:0*/ __Vtemp4164;
    VlWide<4>/*127:0*/ __Vtemp4165;
    VlWide<3>/*95:0*/ __Vtemp4168;
    VlWide<4>/*127:0*/ __Vtemp4171;
    VlWide<4>/*127:0*/ __Vtemp4174;
    VlWide<4>/*127:0*/ __Vtemp4177;
    VlWide<4>/*127:0*/ __Vtemp4180;
    VlWide<4>/*127:0*/ __Vtemp4183;
    VlWide<4>/*127:0*/ __Vtemp4186;
    VlWide<4>/*127:0*/ __Vtemp4189;
    VlWide<4>/*127:0*/ __Vtemp4192;
    VlWide<4>/*127:0*/ __Vtemp4195;
    VlWide<4>/*127:0*/ __Vtemp4198;
    VlWide<4>/*127:0*/ __Vtemp4201;
    VlWide<4>/*127:0*/ __Vtemp4204;
    VlWide<4>/*127:0*/ __Vtemp4207;
    VlWide<4>/*127:0*/ __Vtemp4210;
    VlWide<4>/*127:0*/ __Vtemp4213;
    VlWide<4>/*127:0*/ __Vtemp4216;
    VlWide<4>/*127:0*/ __Vtemp4219;
    VlWide<4>/*127:0*/ __Vtemp4222;
    VlWide<4>/*127:0*/ __Vtemp4225;
    VlWide<4>/*127:0*/ __Vtemp4228;
    VlWide<4>/*127:0*/ __Vtemp4231;
    VlWide<4>/*127:0*/ __Vtemp4234;
    VlWide<4>/*127:0*/ __Vtemp4253;
    VlWide<4>/*127:0*/ __Vtemp4276;
    VlWide<4>/*127:0*/ __Vtemp4295;
    VlWide<4>/*127:0*/ __Vtemp4318;
    VlWide<4>/*127:0*/ __Vtemp4321;
    VlWide<4>/*127:0*/ __Vtemp4324;
    VlWide<4>/*127:0*/ __Vtemp4327;
    VlWide<4>/*127:0*/ __Vtemp4330;
    VlWide<4>/*127:0*/ __Vtemp4333;
    VlWide<4>/*127:0*/ __Vtemp4356;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,((0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc)),32);
        tracep->fullIData(oldp+2,(vlSelf->Core__DOT__fetch__DOT__pc_out),32);
        tracep->fullBit(oldp+3,(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis));
        tracep->fullIData(oldp+4,(vlSelf->Core__DOT__fetch__DOT__reg_pnpc),32);
        tracep->fullIData(oldp+5,(((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_jmp)
                                    ? vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc
                                    : ((IData)(4U) 
                                       + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc))),32);
        tracep->fullIData(oldp+6,(vlSelf->Core__DOT__decode__DOT__pc),32);
        tracep->fullIData(oldp+7,(vlSelf->Core__DOT__decode__DOT__inst),32);
        tracep->fullCData(oldp+8,(((0x37U == (0x7fU 
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
        tracep->fullCData(oldp+9,(((0x37U == (0x7fU 
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
        tracep->fullCData(oldp+10,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 0U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_505))),2);
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
        tracep->fullCData(oldp+12,(((0x37U == (0x7fU 
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
        tracep->fullBit(oldp+13,(((0x37U != (0x7fU 
                                             & vlSelf->Core__DOT__decode__DOT__inst)) 
                                  & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793))));
        tracep->fullCData(oldp+14,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 3U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_865))),3);
        tracep->fullCData(oldp+15,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                     ? 2U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_937))),3);
        tracep->fullCData(oldp+16,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 7U))),5);
        tracep->fullBit(oldp+17,(((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
                                  & ((IData)(vlSelf->Core__DOT__decode__DOT__inst_valid) 
                                     & (IData)(vlSelf->Core__DOT__decode__DOT__c0_3)))));
        tracep->fullIData(oldp+18,(((7U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
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
        tracep->fullBit(oldp+19,((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1))));
        tracep->fullCData(oldp+20,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0xfU))),5);
        tracep->fullBit(oldp+21,(vlSelf->Core__DOT__decode_io_ren2));
        tracep->fullCData(oldp+22,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+23,(vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG));
        tracep->fullQData(oldp+24,(vlSelf->Core__DOT__decode__DOT__io_rs1_data_o_REG),64);
        tracep->fullQData(oldp+26,(vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG),64);
        tracep->fullIData(oldp+28,(vlSelf->Core__DOT__decode__DOT__reg_pnpc),32);
        tracep->fullBit(oldp+29,((((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                     | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                    | (0U != (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code))) 
                                   & ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard) 
                                      | (IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard))) 
                                  | (((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                      | (2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))) 
                                     & ((IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard) 
                                        | (IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard))))));
        tracep->fullBit(oldp+30,(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG));
        tracep->fullCData(oldp+31,(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG),5);
        tracep->fullQData(oldp+32,(vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG),64);
        tracep->fullQData(oldp+34,(vlSelf->Core__DOT__regfile__DOT__rf_0),64);
        tracep->fullQData(oldp+36,(vlSelf->Core__DOT__regfile__DOT__rf_1),64);
        tracep->fullQData(oldp+38,(vlSelf->Core__DOT__regfile__DOT__rf_2),64);
        tracep->fullQData(oldp+40,(vlSelf->Core__DOT__regfile__DOT__rf_3),64);
        tracep->fullQData(oldp+42,(vlSelf->Core__DOT__regfile__DOT__rf_4),64);
        tracep->fullQData(oldp+44,(vlSelf->Core__DOT__regfile__DOT__rf_5),64);
        tracep->fullQData(oldp+46,(vlSelf->Core__DOT__regfile__DOT__rf_6),64);
        tracep->fullQData(oldp+48,(vlSelf->Core__DOT__regfile__DOT__rf_7),64);
        tracep->fullQData(oldp+50,(vlSelf->Core__DOT__regfile__DOT__rf_8),64);
        tracep->fullQData(oldp+52,(vlSelf->Core__DOT__regfile__DOT__rf_9),64);
        tracep->fullQData(oldp+54,(vlSelf->Core__DOT__regfile__DOT__rf_10),64);
        tracep->fullQData(oldp+56,(vlSelf->Core__DOT__regfile__DOT__rf_11),64);
        tracep->fullQData(oldp+58,(vlSelf->Core__DOT__regfile__DOT__rf_12),64);
        tracep->fullQData(oldp+60,(vlSelf->Core__DOT__regfile__DOT__rf_13),64);
        tracep->fullQData(oldp+62,(vlSelf->Core__DOT__regfile__DOT__rf_14),64);
        tracep->fullQData(oldp+64,(vlSelf->Core__DOT__regfile__DOT__rf_15),64);
        tracep->fullQData(oldp+66,(vlSelf->Core__DOT__regfile__DOT__rf_16),64);
        tracep->fullQData(oldp+68,(vlSelf->Core__DOT__regfile__DOT__rf_17),64);
        tracep->fullQData(oldp+70,(vlSelf->Core__DOT__regfile__DOT__rf_18),64);
        tracep->fullQData(oldp+72,(vlSelf->Core__DOT__regfile__DOT__rf_19),64);
        tracep->fullQData(oldp+74,(vlSelf->Core__DOT__regfile__DOT__rf_20),64);
        tracep->fullQData(oldp+76,(vlSelf->Core__DOT__regfile__DOT__rf_21),64);
        tracep->fullQData(oldp+78,(vlSelf->Core__DOT__regfile__DOT__rf_22),64);
        tracep->fullQData(oldp+80,(vlSelf->Core__DOT__regfile__DOT__rf_23),64);
        tracep->fullQData(oldp+82,(vlSelf->Core__DOT__regfile__DOT__rf_24),64);
        tracep->fullQData(oldp+84,(vlSelf->Core__DOT__regfile__DOT__rf_25),64);
        tracep->fullQData(oldp+86,(vlSelf->Core__DOT__regfile__DOT__rf_26),64);
        tracep->fullQData(oldp+88,(vlSelf->Core__DOT__regfile__DOT__rf_27),64);
        tracep->fullQData(oldp+90,(vlSelf->Core__DOT__regfile__DOT__rf_28),64);
        tracep->fullQData(oldp+92,(vlSelf->Core__DOT__regfile__DOT__rf_29),64);
        tracep->fullQData(oldp+94,(vlSelf->Core__DOT__regfile__DOT__rf_30),64);
        tracep->fullQData(oldp+96,(vlSelf->Core__DOT__regfile__DOT__rf_31),64);
        tracep->fullBit(oldp+98,(vlSelf->Core__DOT__execute_io_ex_rd_en));
        tracep->fullCData(oldp+99,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),5);
        tracep->fullQData(oldp+100,(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out),64);
        tracep->fullBit(oldp+102,(((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                   | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)))));
        tracep->fullBit(oldp+103,((0U != (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code))));
        tracep->fullBit(oldp+104,(((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                   | (2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)))));
        tracep->fullBit(oldp+105,(vlSelf->Core__DOT__mem_io_mem_rd_en));
        tracep->fullCData(oldp+106,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr),5);
        tracep->fullBit(oldp+107,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid));
        tracep->fullIData(oldp+108,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc),32);
        tracep->fullIData(oldp+109,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst),32);
        tracep->fullCData(oldp+110,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code),2);
        tracep->fullCData(oldp+111,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size),2);
        tracep->fullCData(oldp+112,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code),4);
        tracep->fullBit(oldp+113,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en));
        tracep->fullBit(oldp+114,(vlSelf->Core__DOT__execute__DOT__io_is_ebreak_o_REG));
        tracep->fullIData(oldp+115,((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)),32);
        tracep->fullBit(oldp+116,((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                    | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                   & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
        tracep->fullBit(oldp+117,(((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                   & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
        tracep->fullQData(oldp+118,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out),64);
        tracep->fullBit(oldp+120,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__completed));
        tracep->fullBit(oldp+121,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_valid));
        tracep->fullIData(oldp+122,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc),32);
        tracep->fullIData(oldp+123,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_inst),32);
        tracep->fullBit(oldp+124,(vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG));
        VL_EXTEND_WQ(127,64, __Vtemp2889, vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG);
        VL_SHIFTL_WWI(127,127,6, __Vtemp2890, __Vtemp2889, 
                      (0x38U & ((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out) 
                                << 3U)));
        tracep->fullQData(oldp+125,((((QData)((IData)(
                                                      __Vtemp2890[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp2890[0U])))),64);
        tracep->fullCData(oldp+127,((0x7fffU & (((7U 
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
        tracep->fullIData(oldp+128,(vlSelf->Core__DOT__io_commit_pc_REG),32);
        tracep->fullBit(oldp+129,(vlSelf->Core__DOT__io_commit_REG));
        tracep->fullIData(oldp+130,((0x1fffffffU & (IData)(
                                                           (vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                                            >> 3U)))),29);
        tracep->fullIData(oldp+131,(vlSelf->Core__DOT__fetch__DOT__inst_out),32);
        tracep->fullBit(oldp+132,(vlSelf->Core__DOT__fetch__DOT__valid_out));
        tracep->fullIData(oldp+133,(vlSelf->Core__DOT__fetch__DOT__pc),32);
        tracep->fullIData(oldp+134,((vlSelf->Core__DOT__fetch__DOT__pc 
                                     >> 2U)),30);
        tracep->fullIData(oldp+135,(((IData)(4U) + 
                                     (0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc))),32);
        tracep->fullBit(oldp+136,(vlSelf->Core__DOT__decode__DOT__inst_valid));
        tracep->fullCData(oldp+137,(vlSelf->Core__DOT__decode__DOT__c0_1),3);
        tracep->fullBit(oldp+138,(vlSelf->Core__DOT__decode__DOT__c0_3));
        tracep->fullCData(oldp+139,(vlSelf->Core__DOT__decode__DOT__c0_4),3);
        tracep->fullIData(oldp+140,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0x1fffffU
                                      : 0U)),21);
        tracep->fullSData(oldp+141,((0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x14U))),11);
        tracep->fullIData(oldp+142,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0x1fffffU
                                        : 0U) << 0xbU) 
                                     | (0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))),32);
        tracep->fullCData(oldp+143,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0x19U))),6);
        tracep->fullIData(oldp+144,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0x1fffffU
                                        : 0U) << 0xbU) 
                                     | ((0x7e0U & (vlSelf->Core__DOT__decode__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 7U))))),32);
        tracep->fullIData(oldp+145,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0xfffffU
                                      : 0U)),20);
        tracep->fullBit(oldp+146,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 7U))));
        tracep->fullCData(oldp+147,((0xfU & (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 8U))),4);
        tracep->fullIData(oldp+148,(((((vlSelf->Core__DOT__decode__DOT__inst 
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
        tracep->fullIData(oldp+149,((vlSelf->Core__DOT__decode__DOT__inst 
                                     >> 0xcU)),20);
        tracep->fullIData(oldp+150,((0xfffff000U & vlSelf->Core__DOT__decode__DOT__inst)),32);
        tracep->fullSData(oldp+151,(((vlSelf->Core__DOT__decode__DOT__inst 
                                      >> 0x1fU) ? 0xfffU
                                      : 0U)),12);
        tracep->fullCData(oldp+152,((0xffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0xcU))),8);
        tracep->fullBit(oldp+153,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x14U))));
        tracep->fullSData(oldp+154,((0x3ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x15U))),10);
        tracep->fullIData(oldp+155,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0x1fU) ? 0xfffU
                                        : 0U) << 0x14U) 
                                     | ((0xff000U & vlSelf->Core__DOT__decode__DOT__inst) 
                                        | ((0x800U 
                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))))),32);
        tracep->fullCData(oldp+156,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0x14U))),6);
        tracep->fullIData(oldp+157,((((0x37U != (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst)) 
                                      & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793))
                                      ? (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U))
                                      : (0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))),32);
        tracep->fullIData(oldp+158,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                              >> 0xfU))),32);
        tracep->fullBit(oldp+159,(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard));
        tracep->fullBit(oldp+160,(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard));
        tracep->fullBit(oldp+161,(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard));
        tracep->fullBit(oldp+162,(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard));
        tracep->fullBit(oldp+163,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU)))) 
                                   & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
        tracep->fullBit(oldp+164,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                       == (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))) 
                                   & (IData)(vlSelf->Core__DOT__decode_io_ren2))));
        tracep->fullQData(oldp+165,(vlSelf->Core__DOT__execute__DOT__mdu_io_in1),64);
        tracep->fullQData(oldp+167,(vlSelf->Core__DOT__execute__DOT__alu_io_in2),64);
        tracep->fullCData(oldp+169,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code),4);
        tracep->fullBit(oldp+170,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type));
        tracep->fullBit(oldp+171,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp));
        tracep->fullCData(oldp+172,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code),4);
        tracep->fullIData(oldp+173,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm),32);
        tracep->fullIData(oldp+174,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc),32);
        tracep->fullCData(oldp+175,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src),3);
        tracep->fullCData(oldp+176,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src),3);
        tracep->fullIData(oldp+177,(((vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+178,(((IData)(4U) + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)),32);
        tracep->fullCData(oldp+179,(vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt),6);
        tracep->fullIData(oldp+180,((IData)(vlSelf->Core__DOT__execute__DOT__mdu_io_in1)),32);
        tracep->fullQData(oldp+181,(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0),64);
        tracep->fullIData(oldp+183,((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)),32);
        tracep->fullIData(oldp+184,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        VL_EXTEND_WQ(65,64, __Vtemp2893, vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x);
        if (((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
               | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
              | (3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
             & (IData)((vlSelf->Core__DOT__execute__DOT__mdu_io_in1 
                        >> 0x3fU)))) {
            __Vtemp2895[0U] = (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x);
            __Vtemp2895[1U] = (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x 
                                       >> 0x20U));
            __Vtemp2895[2U] = (1U & (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x 
                                             >> 0x3fU)));
        } else {
            __Vtemp2895[0U] = __Vtemp2893[0U];
            __Vtemp2895[1U] = __Vtemp2893[1U];
            __Vtemp2895[2U] = __Vtemp2893[2U];
        }
        tracep->fullWData(oldp+185,(__Vtemp2895),65);
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
        tracep->fullCData(oldp+197,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state),2);
        tracep->fullCData(oldp+198,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop),4);
        tracep->fullQData(oldp+199,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x),64);
        tracep->fullQData(oldp+201,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y),64);
        tracep->fullBit(oldp+203,(((((5U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                     | (7U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                    | (0xaU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   | (0xcU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)))));
        tracep->fullBit(oldp+204,(((((6U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                     | (8U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                    | (0xbU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   | (0xdU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)))));
        tracep->fullBit(oldp+205,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_mul));
        tracep->fullBit(oldp+206,(((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                     | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                    | (3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   & (IData)((vlSelf->Core__DOT__execute__DOT__mdu_io_in1 
                                              >> 0x3fU)))));
        tracep->fullBit(oldp+207,((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                    | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   & (IData)((vlSelf->Core__DOT__execute__DOT__alu_io_in2 
                                              >> 0x3fU)))));
        tracep->fullBit(oldp+208,((((2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                    | (3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   | (4U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)))));
        tracep->fullBit(oldp+209,((1U & (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+210,((1U & (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y 
                                                 >> 0x3fU)))));
        tracep->fullWData(oldp+211,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1),65);
        tracep->fullCData(oldp+214,((7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U])),3);
        if ((4U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))) {
            __Vtemp2912[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2912[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2912[2U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
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
            __Vtemp2912[3U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
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
            __Vtemp2918[0U] = 0U;
            __Vtemp2918[1U] = 0U;
            __Vtemp2918[2U] = 0U;
            __Vtemp2918[3U] = 0U;
        } else {
            __Vtemp2918[0U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
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
            __Vtemp2918[1U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
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
            __Vtemp2918[2U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_14[2U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_14[2U]
                                    : __Vtemp2912[2U]));
            __Vtemp2918[3U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_14[3U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0__DOT___io_z_T_14[3U]
                                    : __Vtemp2912[3U]));
        }
        tracep->fullWData(oldp+215,(__Vtemp2918),128);
        tracep->fullCData(oldp+219,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c),2);
        tracep->fullCData(oldp+220,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 2U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 2U)))) {
            __Vtemp2935[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2935[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2935[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp2935[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        __Vtemp2939[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp2941[0U] = 0U;
            __Vtemp2941[1U] = 0U;
            __Vtemp2941[2U] = 0U;
            __Vtemp2941[3U] = 0U;
        } else {
            __Vtemp2941[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp2941[1U] = __Vtemp2939[1U];
            __Vtemp2941[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_14[2U]
                                    : __Vtemp2935[2U]));
            __Vtemp2941[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1__DOT___io_z_T_14[3U]
                                    : __Vtemp2935[3U]));
        }
        tracep->fullWData(oldp+221,(__Vtemp2941),128);
        tracep->fullCData(oldp+225,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c),2);
        tracep->fullCData(oldp+226,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 4U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 4U)))) {
            __Vtemp2958[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2958[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2958[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp2958[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        __Vtemp2962[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp2964[0U] = 0U;
            __Vtemp2964[1U] = 0U;
            __Vtemp2964[2U] = 0U;
            __Vtemp2964[3U] = 0U;
        } else {
            __Vtemp2964[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp2964[1U] = __Vtemp2962[1U];
            __Vtemp2964[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_14[2U]
                                    : __Vtemp2958[2U]));
            __Vtemp2964[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2__DOT___io_z_T_14[3U]
                                    : __Vtemp2958[3U]));
        }
        tracep->fullWData(oldp+227,(__Vtemp2964),128);
        tracep->fullCData(oldp+231,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c),2);
        tracep->fullCData(oldp+232,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 6U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 6U)))) {
            __Vtemp2981[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp2981[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp2981[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp2981[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        __Vtemp2985[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp2987[0U] = 0U;
            __Vtemp2987[1U] = 0U;
            __Vtemp2987[2U] = 0U;
            __Vtemp2987[3U] = 0U;
        } else {
            __Vtemp2987[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp2987[1U] = __Vtemp2985[1U];
            __Vtemp2987[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_14[2U]
                                    : __Vtemp2981[2U]));
            __Vtemp2987[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3__DOT___io_z_T_14[3U]
                                    : __Vtemp2981[3U]));
        }
        tracep->fullWData(oldp+233,(__Vtemp2987),128);
        tracep->fullCData(oldp+237,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c),2);
        tracep->fullCData(oldp+238,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 8U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 8U)))) {
            __Vtemp3004[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3004[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3004[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3004[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        __Vtemp3008[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3010[0U] = 0U;
            __Vtemp3010[1U] = 0U;
            __Vtemp3010[2U] = 0U;
            __Vtemp3010[3U] = 0U;
        } else {
            __Vtemp3010[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3010[1U] = __Vtemp3008[1U];
            __Vtemp3010[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_14[2U]
                                    : __Vtemp3004[2U]));
            __Vtemp3010[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4__DOT___io_z_T_14[3U]
                                    : __Vtemp3004[3U]));
        }
        tracep->fullWData(oldp+239,(__Vtemp3010),128);
        tracep->fullCData(oldp+243,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c),2);
        tracep->fullCData(oldp+244,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0xaU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0xaU)))) {
            __Vtemp3027[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3027[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3027[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3027[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        __Vtemp3031[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3033[0U] = 0U;
            __Vtemp3033[1U] = 0U;
            __Vtemp3033[2U] = 0U;
            __Vtemp3033[3U] = 0U;
        } else {
            __Vtemp3033[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3033[1U] = __Vtemp3031[1U];
            __Vtemp3033[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_14[2U]
                                    : __Vtemp3027[2U]));
            __Vtemp3033[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5__DOT___io_z_T_14[3U]
                                    : __Vtemp3027[3U]));
        }
        tracep->fullWData(oldp+245,(__Vtemp3033),128);
        tracep->fullCData(oldp+249,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c),2);
        tracep->fullCData(oldp+250,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0xcU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0xcU)))) {
            __Vtemp3050[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3050[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3050[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3050[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        __Vtemp3054[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3056[0U] = 0U;
            __Vtemp3056[1U] = 0U;
            __Vtemp3056[2U] = 0U;
            __Vtemp3056[3U] = 0U;
        } else {
            __Vtemp3056[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3056[1U] = __Vtemp3054[1U];
            __Vtemp3056[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_14[2U]
                                    : __Vtemp3050[2U]));
            __Vtemp3056[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6__DOT___io_z_T_14[3U]
                                    : __Vtemp3050[3U]));
        }
        tracep->fullWData(oldp+251,(__Vtemp3056),128);
        tracep->fullCData(oldp+255,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c),2);
        tracep->fullCData(oldp+256,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0xeU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0xeU)))) {
            __Vtemp3073[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3073[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3073[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3073[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        __Vtemp3077[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3079[0U] = 0U;
            __Vtemp3079[1U] = 0U;
            __Vtemp3079[2U] = 0U;
            __Vtemp3079[3U] = 0U;
        } else {
            __Vtemp3079[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3079[1U] = __Vtemp3077[1U];
            __Vtemp3079[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_14[2U]
                                    : __Vtemp3073[2U]));
            __Vtemp3079[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7__DOT___io_z_T_14[3U]
                                    : __Vtemp3073[3U]));
        }
        tracep->fullWData(oldp+257,(__Vtemp3079),128);
        tracep->fullCData(oldp+261,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c),2);
        tracep->fullCData(oldp+262,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x10U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x10U)))) {
            __Vtemp3096[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3096[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3096[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3096[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        __Vtemp3100[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3102[0U] = 0U;
            __Vtemp3102[1U] = 0U;
            __Vtemp3102[2U] = 0U;
            __Vtemp3102[3U] = 0U;
        } else {
            __Vtemp3102[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3102[1U] = __Vtemp3100[1U];
            __Vtemp3102[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_14[2U]
                                    : __Vtemp3096[2U]));
            __Vtemp3102[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8__DOT___io_z_T_14[3U]
                                    : __Vtemp3096[3U]));
        }
        tracep->fullWData(oldp+263,(__Vtemp3102),128);
        tracep->fullCData(oldp+267,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c),2);
        tracep->fullCData(oldp+268,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x12U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x12U)))) {
            __Vtemp3119[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3119[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3119[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3119[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        __Vtemp3123[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3125[0U] = 0U;
            __Vtemp3125[1U] = 0U;
            __Vtemp3125[2U] = 0U;
            __Vtemp3125[3U] = 0U;
        } else {
            __Vtemp3125[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3125[1U] = __Vtemp3123[1U];
            __Vtemp3125[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_14[2U]
                                    : __Vtemp3119[2U]));
            __Vtemp3125[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9__DOT___io_z_T_14[3U]
                                    : __Vtemp3119[3U]));
        }
        tracep->fullWData(oldp+269,(__Vtemp3125),128);
        tracep->fullCData(oldp+273,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c),2);
        tracep->fullCData(oldp+274,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x14U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x14U)))) {
            __Vtemp3142[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3142[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3142[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3142[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        __Vtemp3146[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3148[0U] = 0U;
            __Vtemp3148[1U] = 0U;
            __Vtemp3148[2U] = 0U;
            __Vtemp3148[3U] = 0U;
        } else {
            __Vtemp3148[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3148[1U] = __Vtemp3146[1U];
            __Vtemp3148[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_14[2U]
                                    : __Vtemp3142[2U]));
            __Vtemp3148[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10__DOT___io_z_T_14[3U]
                                    : __Vtemp3142[3U]));
        }
        tracep->fullWData(oldp+275,(__Vtemp3148),128);
        tracep->fullCData(oldp+279,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c),2);
        tracep->fullCData(oldp+280,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x16U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x16U)))) {
            __Vtemp3165[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3165[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3165[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3165[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        __Vtemp3169[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3171[0U] = 0U;
            __Vtemp3171[1U] = 0U;
            __Vtemp3171[2U] = 0U;
            __Vtemp3171[3U] = 0U;
        } else {
            __Vtemp3171[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3171[1U] = __Vtemp3169[1U];
            __Vtemp3171[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_14[2U]
                                    : __Vtemp3165[2U]));
            __Vtemp3171[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11__DOT___io_z_T_14[3U]
                                    : __Vtemp3165[3U]));
        }
        tracep->fullWData(oldp+281,(__Vtemp3171),128);
        tracep->fullCData(oldp+285,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c),2);
        tracep->fullCData(oldp+286,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x18U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x18U)))) {
            __Vtemp3188[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3188[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3188[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3188[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        __Vtemp3192[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3194[0U] = 0U;
            __Vtemp3194[1U] = 0U;
            __Vtemp3194[2U] = 0U;
            __Vtemp3194[3U] = 0U;
        } else {
            __Vtemp3194[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3194[1U] = __Vtemp3192[1U];
            __Vtemp3194[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : __Vtemp3188[2U]));
            __Vtemp3194[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : __Vtemp3188[3U]));
        }
        tracep->fullWData(oldp+287,(__Vtemp3194),128);
        tracep->fullCData(oldp+291,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c),2);
        tracep->fullCData(oldp+292,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x1aU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x1aU)))) {
            __Vtemp3211[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3211[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3211[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3211[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        __Vtemp3215[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3217[0U] = 0U;
            __Vtemp3217[1U] = 0U;
            __Vtemp3217[2U] = 0U;
            __Vtemp3217[3U] = 0U;
        } else {
            __Vtemp3217[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3217[1U] = __Vtemp3215[1U];
            __Vtemp3217[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_14[2U]
                                    : __Vtemp3211[2U]));
            __Vtemp3217[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13__DOT___io_z_T_14[3U]
                                    : __Vtemp3211[3U]));
        }
        tracep->fullWData(oldp+293,(__Vtemp3217),128);
        tracep->fullCData(oldp+297,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c),2);
        tracep->fullCData(oldp+298,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                           >> 0x1cU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                          >> 0x1cU)))) {
            __Vtemp3234[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3234[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3234[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3234[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        __Vtemp3238[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3240[0U] = 0U;
            __Vtemp3240[1U] = 0U;
            __Vtemp3240[2U] = 0U;
            __Vtemp3240[3U] = 0U;
        } else {
            __Vtemp3240[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
            __Vtemp3240[1U] = __Vtemp3238[1U];
            __Vtemp3240[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_14[2U]
                                    : __Vtemp3234[2U]));
            __Vtemp3240[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14__DOT___io_z_T_14[3U]
                                    : __Vtemp3234[3U]));
        }
        tracep->fullWData(oldp+299,(__Vtemp3240),128);
        tracep->fullCData(oldp+303,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c),2);
        tracep->fullCData(oldp+304,((7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                            << 2U) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 0x1eU)))),3);
        if ((4U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                           << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                     >> 0x1eU))))) {
            __Vtemp3257[1U] = (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                >> 0x1fU) | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                             << 1U));
            __Vtemp3257[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3257[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3257[1U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3257[2U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3257[3U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        __Vtemp3259[0U] = ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3263[0U] = 0U;
            __Vtemp3263[1U] = 0U;
            __Vtemp3263[2U] = 0U;
            __Vtemp3263[3U] = 0U;
        } else {
            __Vtemp3263[0U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14[0U]
                                : __Vtemp3259[0U]);
            __Vtemp3263[1U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14[1U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14[1U]
                                    : __Vtemp3257[1U]));
            __Vtemp3263[2U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14[2U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14[2U]
                                    : __Vtemp3257[2U]));
            __Vtemp3263[3U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14[3U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15__DOT___io_z_T_14[3U]
                                    : __Vtemp3257[3U]));
        }
        tracep->fullWData(oldp+305,(__Vtemp3263),128);
        tracep->fullCData(oldp+309,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c),2);
        tracep->fullCData(oldp+310,((7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U])),3);
        if ((4U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))) {
            __Vtemp3280[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3280[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3280[2U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
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
            __Vtemp3280[3U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
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
            __Vtemp3286[0U] = 0U;
            __Vtemp3286[1U] = 0U;
            __Vtemp3286[2U] = 0U;
            __Vtemp3286[3U] = 0U;
        } else {
            __Vtemp3286[0U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
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
            __Vtemp3286[1U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
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
            __Vtemp3286[2U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_14[2U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_14[2U]
                                    : __Vtemp3280[2U]));
            __Vtemp3286[3U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_14[3U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16__DOT___io_z_T_14[3U]
                                    : __Vtemp3280[3U]));
        }
        tracep->fullWData(oldp+311,(__Vtemp3286),128);
        tracep->fullCData(oldp+315,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c),2);
        tracep->fullCData(oldp+316,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 2U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 2U)))) {
            __Vtemp3303[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3303[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3303[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3303[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        __Vtemp3307[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3309[0U] = 0U;
            __Vtemp3309[1U] = 0U;
            __Vtemp3309[2U] = 0U;
            __Vtemp3309[3U] = 0U;
        } else {
            __Vtemp3309[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3309[1U] = __Vtemp3307[1U];
            __Vtemp3309[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_14[2U]
                                    : __Vtemp3303[2U]));
            __Vtemp3309[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17__DOT___io_z_T_14[3U]
                                    : __Vtemp3303[3U]));
        }
        tracep->fullWData(oldp+317,(__Vtemp3309),128);
        tracep->fullCData(oldp+321,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c),2);
        tracep->fullCData(oldp+322,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 4U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 4U)))) {
            __Vtemp3326[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3326[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3326[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3326[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        __Vtemp3330[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3332[0U] = 0U;
            __Vtemp3332[1U] = 0U;
            __Vtemp3332[2U] = 0U;
            __Vtemp3332[3U] = 0U;
        } else {
            __Vtemp3332[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3332[1U] = __Vtemp3330[1U];
            __Vtemp3332[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_14[2U]
                                    : __Vtemp3326[2U]));
            __Vtemp3332[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18__DOT___io_z_T_14[3U]
                                    : __Vtemp3326[3U]));
        }
        tracep->fullWData(oldp+323,(__Vtemp3332),128);
        tracep->fullCData(oldp+327,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c),2);
        tracep->fullCData(oldp+328,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 6U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 6U)))) {
            __Vtemp3349[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3349[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3349[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3349[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        __Vtemp3353[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3355[0U] = 0U;
            __Vtemp3355[1U] = 0U;
            __Vtemp3355[2U] = 0U;
            __Vtemp3355[3U] = 0U;
        } else {
            __Vtemp3355[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3355[1U] = __Vtemp3353[1U];
            __Vtemp3355[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_14[2U]
                                    : __Vtemp3349[2U]));
            __Vtemp3355[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19__DOT___io_z_T_14[3U]
                                    : __Vtemp3349[3U]));
        }
        tracep->fullWData(oldp+329,(__Vtemp3355),128);
        tracep->fullCData(oldp+333,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c),2);
        tracep->fullCData(oldp+334,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 8U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 8U)))) {
            __Vtemp3372[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3372[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3372[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3372[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        __Vtemp3376[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3378[0U] = 0U;
            __Vtemp3378[1U] = 0U;
            __Vtemp3378[2U] = 0U;
            __Vtemp3378[3U] = 0U;
        } else {
            __Vtemp3378[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3378[1U] = __Vtemp3376[1U];
            __Vtemp3378[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_14[2U]
                                    : __Vtemp3372[2U]));
            __Vtemp3378[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20__DOT___io_z_T_14[3U]
                                    : __Vtemp3372[3U]));
        }
        tracep->fullWData(oldp+335,(__Vtemp3378),128);
        tracep->fullCData(oldp+339,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c),2);
        tracep->fullCData(oldp+340,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0xaU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0xaU)))) {
            __Vtemp3395[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3395[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3395[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3395[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        __Vtemp3399[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3401[0U] = 0U;
            __Vtemp3401[1U] = 0U;
            __Vtemp3401[2U] = 0U;
            __Vtemp3401[3U] = 0U;
        } else {
            __Vtemp3401[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3401[1U] = __Vtemp3399[1U];
            __Vtemp3401[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_14[2U]
                                    : __Vtemp3395[2U]));
            __Vtemp3401[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21__DOT___io_z_T_14[3U]
                                    : __Vtemp3395[3U]));
        }
        tracep->fullWData(oldp+341,(__Vtemp3401),128);
        tracep->fullCData(oldp+345,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c),2);
        tracep->fullCData(oldp+346,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0xcU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0xcU)))) {
            __Vtemp3418[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3418[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3418[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3418[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        __Vtemp3422[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3424[0U] = 0U;
            __Vtemp3424[1U] = 0U;
            __Vtemp3424[2U] = 0U;
            __Vtemp3424[3U] = 0U;
        } else {
            __Vtemp3424[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3424[1U] = __Vtemp3422[1U];
            __Vtemp3424[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_14[2U]
                                    : __Vtemp3418[2U]));
            __Vtemp3424[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22__DOT___io_z_T_14[3U]
                                    : __Vtemp3418[3U]));
        }
        tracep->fullWData(oldp+347,(__Vtemp3424),128);
        tracep->fullCData(oldp+351,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c),2);
        tracep->fullCData(oldp+352,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0xeU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0xeU)))) {
            __Vtemp3441[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3441[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3441[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3441[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        __Vtemp3445[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3447[0U] = 0U;
            __Vtemp3447[1U] = 0U;
            __Vtemp3447[2U] = 0U;
            __Vtemp3447[3U] = 0U;
        } else {
            __Vtemp3447[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3447[1U] = __Vtemp3445[1U];
            __Vtemp3447[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_14[2U]
                                    : __Vtemp3441[2U]));
            __Vtemp3447[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23__DOT___io_z_T_14[3U]
                                    : __Vtemp3441[3U]));
        }
        tracep->fullWData(oldp+353,(__Vtemp3447),128);
        tracep->fullCData(oldp+357,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c),2);
        tracep->fullCData(oldp+358,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x10U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x10U)))) {
            __Vtemp3464[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3464[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3464[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3464[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        __Vtemp3468[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3470[0U] = 0U;
            __Vtemp3470[1U] = 0U;
            __Vtemp3470[2U] = 0U;
            __Vtemp3470[3U] = 0U;
        } else {
            __Vtemp3470[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3470[1U] = __Vtemp3468[1U];
            __Vtemp3470[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_14[2U]
                                    : __Vtemp3464[2U]));
            __Vtemp3470[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24__DOT___io_z_T_14[3U]
                                    : __Vtemp3464[3U]));
        }
        tracep->fullWData(oldp+359,(__Vtemp3470),128);
        tracep->fullCData(oldp+363,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c),2);
        tracep->fullCData(oldp+364,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x12U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x12U)))) {
            __Vtemp3487[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3487[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3487[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3487[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        __Vtemp3491[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3493[0U] = 0U;
            __Vtemp3493[1U] = 0U;
            __Vtemp3493[2U] = 0U;
            __Vtemp3493[3U] = 0U;
        } else {
            __Vtemp3493[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3493[1U] = __Vtemp3491[1U];
            __Vtemp3493[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_14[2U]
                                    : __Vtemp3487[2U]));
            __Vtemp3493[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25__DOT___io_z_T_14[3U]
                                    : __Vtemp3487[3U]));
        }
        tracep->fullWData(oldp+365,(__Vtemp3493),128);
        tracep->fullCData(oldp+369,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c),2);
        tracep->fullCData(oldp+370,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x14U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x14U)))) {
            __Vtemp3510[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3510[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3510[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3510[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        __Vtemp3514[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3516[0U] = 0U;
            __Vtemp3516[1U] = 0U;
            __Vtemp3516[2U] = 0U;
            __Vtemp3516[3U] = 0U;
        } else {
            __Vtemp3516[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3516[1U] = __Vtemp3514[1U];
            __Vtemp3516[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_14[2U]
                                    : __Vtemp3510[2U]));
            __Vtemp3516[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26__DOT___io_z_T_14[3U]
                                    : __Vtemp3510[3U]));
        }
        tracep->fullWData(oldp+371,(__Vtemp3516),128);
        tracep->fullCData(oldp+375,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c),2);
        tracep->fullCData(oldp+376,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x16U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x16U)))) {
            __Vtemp3533[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3533[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3533[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3533[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        __Vtemp3537[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3539[0U] = 0U;
            __Vtemp3539[1U] = 0U;
            __Vtemp3539[2U] = 0U;
            __Vtemp3539[3U] = 0U;
        } else {
            __Vtemp3539[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3539[1U] = __Vtemp3537[1U];
            __Vtemp3539[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_14[2U]
                                    : __Vtemp3533[2U]));
            __Vtemp3539[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27__DOT___io_z_T_14[3U]
                                    : __Vtemp3533[3U]));
        }
        tracep->fullWData(oldp+377,(__Vtemp3539),128);
        tracep->fullCData(oldp+381,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c),2);
        tracep->fullCData(oldp+382,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x18U))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x18U)))) {
            __Vtemp3556[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3556[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3556[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3556[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        __Vtemp3560[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3562[0U] = 0U;
            __Vtemp3562[1U] = 0U;
            __Vtemp3562[2U] = 0U;
            __Vtemp3562[3U] = 0U;
        } else {
            __Vtemp3562[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3562[1U] = __Vtemp3560[1U];
            __Vtemp3562[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_14[2U]
                                    : __Vtemp3556[2U]));
            __Vtemp3562[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28__DOT___io_z_T_14[3U]
                                    : __Vtemp3556[3U]));
        }
        tracep->fullWData(oldp+383,(__Vtemp3562),128);
        tracep->fullCData(oldp+387,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c),2);
        tracep->fullCData(oldp+388,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x1aU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x1aU)))) {
            __Vtemp3579[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3579[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3579[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3579[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        __Vtemp3583[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3585[0U] = 0U;
            __Vtemp3585[1U] = 0U;
            __Vtemp3585[2U] = 0U;
            __Vtemp3585[3U] = 0U;
        } else {
            __Vtemp3585[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3585[1U] = __Vtemp3583[1U];
            __Vtemp3585[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_14[2U]
                                    : __Vtemp3579[2U]));
            __Vtemp3585[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29__DOT___io_z_T_14[3U]
                                    : __Vtemp3579[3U]));
        }
        tracep->fullWData(oldp+389,(__Vtemp3585),128);
        tracep->fullCData(oldp+393,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c),2);
        tracep->fullCData(oldp+394,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                           >> 0x1cU))),3);
        if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                          >> 0x1cU)))) {
            __Vtemp3602[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3602[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3602[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3602[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        __Vtemp3606[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3608[0U] = 0U;
            __Vtemp3608[1U] = 0U;
            __Vtemp3608[2U] = 0U;
            __Vtemp3608[3U] = 0U;
        } else {
            __Vtemp3608[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
            __Vtemp3608[1U] = __Vtemp3606[1U];
            __Vtemp3608[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_14[2U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_14[2U]
                                    : __Vtemp3602[2U]));
            __Vtemp3608[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_14[3U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30__DOT___io_z_T_14[3U]
                                    : __Vtemp3602[3U]));
        }
        tracep->fullWData(oldp+395,(__Vtemp3608),128);
        tracep->fullCData(oldp+399,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c),2);
        tracep->fullCData(oldp+400,((7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                            << 2U) 
                                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 0x1eU)))),3);
        if ((4U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                           << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                     >> 0x1eU))))) {
            __Vtemp3625[1U] = (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                >> 0x1fU) | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                             << 1U));
            __Vtemp3625[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3625[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3625[1U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
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
            __Vtemp3625[2U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
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
            __Vtemp3625[3U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
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
        __Vtemp3627[0U] = ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
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
            __Vtemp3631[0U] = 0U;
            __Vtemp3631[1U] = 0U;
            __Vtemp3631[2U] = 0U;
            __Vtemp3631[3U] = 0U;
        } else {
            __Vtemp3631[0U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14[0U]
                                : __Vtemp3627[0U]);
            __Vtemp3631[1U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14[1U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14[1U]
                                    : __Vtemp3625[1U]));
            __Vtemp3631[2U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14[2U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14[2U]
                                    : __Vtemp3625[2U]));
            __Vtemp3631[3U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14[3U]
                                : ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31__DOT___io_z_T_14[3U]
                                    : __Vtemp3625[3U]));
        }
        tracep->fullWData(oldp+401,(__Vtemp3631),128);
        tracep->fullCData(oldp+405,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c),2);
        tracep->fullCData(oldp+406,((7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U])),3);
        if ((4U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))) {
            __Vtemp3648[2U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                           >> 0x1fU) 
                                          | (2U & (
                                                   (~ 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                   << 1U))));
            __Vtemp3648[3U] = (((IData)(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)) 
                                >> 0x1eU) | ((IData)(
                                                     (((1U 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                        ? 0ULL
                                                        : 0x3fffffffffffffffULL) 
                                                      >> 0x20U)) 
                                             << 2U));
        } else {
            __Vtemp3648[2U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
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
            __Vtemp3648[3U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
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
            __Vtemp3654[0U] = 0U;
            __Vtemp3654[1U] = 0U;
            __Vtemp3654[2U] = 0U;
            __Vtemp3654[3U] = 0U;
        } else {
            __Vtemp3654[0U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
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
            __Vtemp3654[1U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
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
            __Vtemp3654[2U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_14[2U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_14[2U]
                                    : __Vtemp3648[2U]));
            __Vtemp3654[3U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_14[3U]
                                : ((5U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32__DOT___io_z_T_14[3U]
                                    : __Vtemp3648[3U]));
        }
        tracep->fullWData(oldp+407,(__Vtemp3654),128);
        tracep->fullCData(oldp+411,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c),2);
        tracep->fullWData(oldp+412,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0),128);
        __Vtemp3658[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U] 
                           << 2U);
        __Vtemp3658[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U] 
                                         << 2U));
        __Vtemp3658[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U] 
                                         << 2U));
        __Vtemp3658[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[3U] 
                                         << 2U));
        tracep->fullWData(oldp+416,(__Vtemp3658),128);
        __Vtemp3662[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U] 
                           << 4U);
        __Vtemp3662[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U] 
                                         << 4U));
        __Vtemp3662[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U] 
                                         << 4U));
        __Vtemp3662[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[3U] 
                                         << 4U));
        tracep->fullWData(oldp+420,(__Vtemp3662),128);
        tracep->fullWData(oldp+424,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s),128);
        __Vtemp3666[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3666[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3666[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3666[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+428,(__Vtemp3666),128);
        __Vtemp3670[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U] 
                           << 6U);
        __Vtemp3670[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U] 
                                         << 6U));
        __Vtemp3670[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U] 
                                         << 6U));
        __Vtemp3670[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[3U] 
                                         << 6U));
        tracep->fullWData(oldp+432,(__Vtemp3670),128);
        __Vtemp3674[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U] 
                           << 8U);
        __Vtemp3674[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U] 
                                         << 8U));
        __Vtemp3674[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U] 
                                         << 8U));
        __Vtemp3674[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[3U] 
                                         << 8U));
        tracep->fullWData(oldp+436,(__Vtemp3674),128);
        __Vtemp3678[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U] 
                           << 0xaU);
        __Vtemp3678[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U] 
                                         << 0xaU));
        __Vtemp3678[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U] 
                                         << 0xaU));
        __Vtemp3678[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[3U] 
                                         << 0xaU));
        tracep->fullWData(oldp+440,(__Vtemp3678),128);
        tracep->fullWData(oldp+444,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s),128);
        __Vtemp3682[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3682[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3682[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3682[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+448,(__Vtemp3682),128);
        __Vtemp3686[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U] 
                           << 0xcU);
        __Vtemp3686[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U] 
                                         << 0xcU));
        __Vtemp3686[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U] 
                                         << 0xcU));
        __Vtemp3686[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[3U] 
                                         << 0xcU));
        tracep->fullWData(oldp+452,(__Vtemp3686),128);
        __Vtemp3690[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U] 
                           << 0xeU);
        __Vtemp3690[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U] 
                                         << 0xeU));
        __Vtemp3690[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U] 
                                         << 0xeU));
        __Vtemp3690[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[3U] 
                                         << 0xeU));
        tracep->fullWData(oldp+456,(__Vtemp3690),128);
        __Vtemp3694[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U] 
                           << 0x10U);
        __Vtemp3694[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U] 
                                         << 0x10U));
        __Vtemp3694[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U] 
                                         << 0x10U));
        __Vtemp3694[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[3U] 
                                         << 0x10U));
        tracep->fullWData(oldp+460,(__Vtemp3694),128);
        tracep->fullWData(oldp+464,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s),128);
        __Vtemp3698[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3698[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3698[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3698[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+468,(__Vtemp3698),128);
        __Vtemp3702[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U] 
                           << 0x12U);
        __Vtemp3702[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U] 
                                        << 0x12U));
        __Vtemp3702[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U] 
                                        << 0x12U));
        __Vtemp3702[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[3U] 
                                        << 0x12U));
        tracep->fullWData(oldp+472,(__Vtemp3702),128);
        __Vtemp3706[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U] 
                           << 0x14U);
        __Vtemp3706[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U] 
                                        << 0x14U));
        __Vtemp3706[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U] 
                                        << 0x14U));
        __Vtemp3706[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[3U] 
                                        << 0x14U));
        tracep->fullWData(oldp+476,(__Vtemp3706),128);
        __Vtemp3710[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U] 
                           << 0x16U);
        __Vtemp3710[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U] 
                                        << 0x16U));
        __Vtemp3710[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U] 
                                        << 0x16U));
        __Vtemp3710[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[3U] 
                                        << 0x16U));
        tracep->fullWData(oldp+480,(__Vtemp3710),128);
        tracep->fullWData(oldp+484,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s),128);
        __Vtemp3714[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3714[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3714[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3714[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+488,(__Vtemp3714),128);
        __Vtemp3718[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U] 
                           << 0x18U);
        __Vtemp3718[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U] 
                                      << 0x18U));
        __Vtemp3718[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U] 
                                      << 0x18U));
        __Vtemp3718[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[3U] 
                                      << 0x18U));
        tracep->fullWData(oldp+492,(__Vtemp3718),128);
        __Vtemp3722[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U] 
                           << 0x1aU);
        __Vtemp3722[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U] 
                                      << 0x1aU));
        __Vtemp3722[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U] 
                                      << 0x1aU));
        __Vtemp3722[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[3U] 
                                      << 0x1aU));
        tracep->fullWData(oldp+496,(__Vtemp3722),128);
        __Vtemp3726[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U] 
                           << 0x1cU);
        __Vtemp3726[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U] 
                                      << 0x1cU));
        __Vtemp3726[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U] 
                                      << 0x1cU));
        __Vtemp3726[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[3U] 
                                      << 0x1cU));
        tracep->fullWData(oldp+500,(__Vtemp3726),128);
        tracep->fullWData(oldp+504,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s),128);
        __Vtemp3730[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3730[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3730[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3730[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+508,(__Vtemp3730),128);
        __Vtemp3734[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U] 
                           << 0x1eU);
        __Vtemp3734[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U] 
                                      << 0x1eU));
        __Vtemp3734[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U] 
                                      << 0x1eU));
        __Vtemp3734[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[3U] 
                                      << 0x1eU));
        tracep->fullWData(oldp+512,(__Vtemp3734),128);
        __Vtemp3736[0U] = 0U;
        __Vtemp3736[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[0U];
        __Vtemp3736[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[1U];
        __Vtemp3736[3U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[2U];
        tracep->fullWData(oldp+516,(__Vtemp3736),128);
        __Vtemp3740[0U] = 0U;
        __Vtemp3740[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
                           << 2U);
        __Vtemp3740[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
                                         << 2U));
        __Vtemp3740[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[2U] 
                                         << 2U));
        tracep->fullWData(oldp+520,(__Vtemp3740),128);
        tracep->fullWData(oldp+524,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s),128);
        __Vtemp3744[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3744[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3744[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3744[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+528,(__Vtemp3744),128);
        __Vtemp3748[0U] = 0U;
        __Vtemp3748[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
                           << 4U);
        __Vtemp3748[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
                                         << 4U));
        __Vtemp3748[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[2U] 
                                         << 4U));
        tracep->fullWData(oldp+532,(__Vtemp3748),128);
        __Vtemp3752[0U] = 0U;
        __Vtemp3752[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                           << 6U);
        __Vtemp3752[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                                         << 6U));
        __Vtemp3752[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[2U] 
                                         << 6U));
        tracep->fullWData(oldp+536,(__Vtemp3752),128);
        __Vtemp3756[0U] = 0U;
        __Vtemp3756[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
                           << 8U);
        __Vtemp3756[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                                         << 8U));
        __Vtemp3756[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[2U] 
                                         << 8U));
        tracep->fullWData(oldp+540,(__Vtemp3756),128);
        tracep->fullWData(oldp+544,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s),128);
        __Vtemp3760[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3760[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3760[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3760[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+548,(__Vtemp3760),128);
        __Vtemp3764[0U] = 0U;
        __Vtemp3764[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
                           << 0xaU);
        __Vtemp3764[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
                                         << 0xaU));
        __Vtemp3764[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[2U] 
                                         << 0xaU));
        tracep->fullWData(oldp+552,(__Vtemp3764),128);
        __Vtemp3768[0U] = 0U;
        __Vtemp3768[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                           << 0xcU);
        __Vtemp3768[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                                         << 0xcU));
        __Vtemp3768[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[2U] 
                                         << 0xcU));
        tracep->fullWData(oldp+556,(__Vtemp3768),128);
        __Vtemp3772[0U] = 0U;
        __Vtemp3772[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
                           << 0xeU);
        __Vtemp3772[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
                                         << 0xeU));
        __Vtemp3772[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[2U] 
                                         << 0xeU));
        tracep->fullWData(oldp+560,(__Vtemp3772),128);
        tracep->fullWData(oldp+564,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s),128);
        __Vtemp3776[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3776[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3776[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3776[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+568,(__Vtemp3776),128);
        __Vtemp3780[0U] = 0U;
        __Vtemp3780[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
                           << 0x10U);
        __Vtemp3780[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
                                         << 0x10U));
        __Vtemp3780[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[2U] 
                                         << 0x10U));
        tracep->fullWData(oldp+572,(__Vtemp3780),128);
        __Vtemp3784[0U] = 0U;
        __Vtemp3784[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                           << 0x12U);
        __Vtemp3784[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                                        << 0x12U));
        __Vtemp3784[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[2U] 
                                        << 0x12U));
        tracep->fullWData(oldp+576,(__Vtemp3784),128);
        __Vtemp3788[0U] = 0U;
        __Vtemp3788[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
                           << 0x14U);
        __Vtemp3788[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
                                        << 0x14U));
        __Vtemp3788[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[2U] 
                                        << 0x14U));
        tracep->fullWData(oldp+580,(__Vtemp3788),128);
        tracep->fullWData(oldp+584,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s),128);
        __Vtemp3792[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3792[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3792[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3792[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+588,(__Vtemp3792),128);
        __Vtemp3796[0U] = 0U;
        __Vtemp3796[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
                           << 0x16U);
        __Vtemp3796[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
                                        << 0x16U));
        __Vtemp3796[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[2U] 
                                        << 0x16U));
        tracep->fullWData(oldp+592,(__Vtemp3796),128);
        __Vtemp3800[0U] = 0U;
        __Vtemp3800[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                           << 0x18U);
        __Vtemp3800[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                                      << 0x18U));
        __Vtemp3800[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[2U] 
                                      << 0x18U));
        tracep->fullWData(oldp+596,(__Vtemp3800),128);
        __Vtemp3804[0U] = 0U;
        __Vtemp3804[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
                           << 0x1aU);
        __Vtemp3804[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
                                      << 0x1aU));
        __Vtemp3804[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[2U] 
                                      << 0x1aU));
        tracep->fullWData(oldp+600,(__Vtemp3804),128);
        tracep->fullWData(oldp+604,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s),128);
        __Vtemp3808[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3808[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3808[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3808[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+608,(__Vtemp3808),128);
        __Vtemp3812[0U] = 0U;
        __Vtemp3812[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U] 
                           << 0x1cU);
        __Vtemp3812[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
                                      << 0x1cU));
        __Vtemp3812[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[2U] 
                                      << 0x1cU));
        tracep->fullWData(oldp+612,(__Vtemp3812),128);
        __Vtemp3816[0U] = 0U;
        __Vtemp3816[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U] 
                           << 0x1eU);
        __Vtemp3816[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                                      << 0x1eU));
        __Vtemp3816[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[2U] 
                                      << 0x1eU));
        tracep->fullWData(oldp+616,(__Vtemp3816),128);
        __Vtemp3817[0U] = 0U;
        __Vtemp3817[1U] = 0U;
        __Vtemp3817[2U] = (IData)((((QData)((IData)(
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U]))));
        __Vtemp3817[3U] = (IData)(((((QData)((IData)(
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U]))) 
                                   >> 0x20U));
        tracep->fullWData(oldp+620,(__Vtemp3817),128);
        tracep->fullWData(oldp+624,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s),128);
        __Vtemp3821[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3821[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3821[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3821[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+628,(__Vtemp3821),128);
        tracep->fullWData(oldp+632,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s),128);
        __Vtemp3825[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3825[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3825[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3825[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+636,(__Vtemp3825),128);
        tracep->fullWData(oldp+640,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s),128);
        __Vtemp3829[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3829[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3829[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3829[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+644,(__Vtemp3829),128);
        tracep->fullWData(oldp+648,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s),128);
        __Vtemp3833[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3833[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3833[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3833[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+652,(__Vtemp3833),128);
        tracep->fullWData(oldp+656,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s),128);
        __Vtemp3837[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3837[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3837[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3837[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+660,(__Vtemp3837),128);
        tracep->fullWData(oldp+664,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s),128);
        __Vtemp3841[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3841[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3841[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3841[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+668,(__Vtemp3841),128);
        tracep->fullWData(oldp+672,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s),128);
        __Vtemp3845[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3845[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3845[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3845[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+676,(__Vtemp3845),128);
        tracep->fullWData(oldp+680,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33),128);
        tracep->fullWData(oldp+684,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s),128);
        __Vtemp3849[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3849[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3849[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3849[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+688,(__Vtemp3849),128);
        tracep->fullWData(oldp+692,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s),128);
        __Vtemp3853[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3853[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3853[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3853[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+696,(__Vtemp3853),128);
        tracep->fullWData(oldp+700,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s),128);
        __Vtemp3857[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3857[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3857[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3857[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+704,(__Vtemp3857),128);
        tracep->fullWData(oldp+708,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s),128);
        __Vtemp3861[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3861[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3861[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3861[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+712,(__Vtemp3861),128);
        tracep->fullWData(oldp+716,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s),128);
        __Vtemp3865[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3865[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3865[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3865[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+720,(__Vtemp3865),128);
        __Vtemp3871[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
                            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                               << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U]);
        __Vtemp3871[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U]);
        __Vtemp3871[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U]);
        __Vtemp3871[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[3U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[3U]);
        tracep->fullWData(oldp+724,(__Vtemp3871),128);
        __Vtemp3891[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
                              << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                        << 2U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                                    << 2U) 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                                                      << 1U))) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U]) 
                              << 1U));
        __Vtemp3891[1U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
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
        __Vtemp3891[2U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U] 
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
        __Vtemp3891[3U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U] 
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
        tracep->fullWData(oldp+728,(__Vtemp3891),128);
        __Vtemp3901[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                             << 1U) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U]) 
                           ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                              << 1U));
        __Vtemp3901[1U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                            << 1U)));
        __Vtemp3901[2U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                            << 1U)));
        __Vtemp3901[3U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[3U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                            << 1U)));
        tracep->fullWData(oldp+732,(__Vtemp3901),128);
        __Vtemp3925[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                              << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                                        << 1U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                                                    << 1U) 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                                      << 2U))) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U]) 
                              << 2U));
        __Vtemp3925[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
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
        __Vtemp3925[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
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
        __Vtemp3925[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
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
        tracep->fullWData(oldp+736,(__Vtemp3925),128);
        __Vtemp3931[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
                            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                               << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U]);
        __Vtemp3931[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U]);
        __Vtemp3931[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U]);
        __Vtemp3931[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[3U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                             << 1U))) 
                           ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[3U]);
        tracep->fullWData(oldp+740,(__Vtemp3931),128);
        __Vtemp3951[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
                              << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                        << 2U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                                    << 2U) 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                                                      << 1U))) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U]) 
                              << 1U));
        __Vtemp3951[1U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
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
        __Vtemp3951[2U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U] 
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
        __Vtemp3951[3U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U] 
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
        tracep->fullWData(oldp+744,(__Vtemp3951),128);
        __Vtemp3961[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                             << 1U) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U]) 
                           ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                              << 1U));
        __Vtemp3961[1U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                            << 1U)));
        __Vtemp3961[2U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                            << 1U)));
        __Vtemp3961[3U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                              >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                           << 1U)) 
                            ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[3U]) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                            << 1U)));
        tracep->fullWData(oldp+748,(__Vtemp3961),128);
        __Vtemp3985[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                              << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                                        << 1U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                                                    << 1U) 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                                      << 2U))) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U]) 
                              << 2U));
        __Vtemp3985[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
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
        __Vtemp3985[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
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
        __Vtemp3985[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
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
        tracep->fullWData(oldp+752,(__Vtemp3985),128);
        tracep->fullWData(oldp+756,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0),128);
        tracep->fullWData(oldp+760,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1),128);
        tracep->fullWData(oldp+764,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2),128);
        tracep->fullWData(oldp+768,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s),128);
        __Vtemp3989[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3989[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3989[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3989[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+772,(__Vtemp3989),128);
        tracep->fullWData(oldp+776,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3),128);
        tracep->fullWData(oldp+780,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4),128);
        tracep->fullWData(oldp+784,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5),128);
        tracep->fullWData(oldp+788,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s),128);
        __Vtemp3993[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3993[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3993[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3993[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+792,(__Vtemp3993),128);
        tracep->fullWData(oldp+796,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6),128);
        tracep->fullWData(oldp+800,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7),128);
        tracep->fullWData(oldp+804,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s),128);
        __Vtemp3997[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp3997[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp3997[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp3997[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+808,(__Vtemp3997),128);
        tracep->fullWData(oldp+812,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s),128);
        __Vtemp4001[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp4001[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp4001[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp4001[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+816,(__Vtemp4001),128);
        tracep->fullWData(oldp+820,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s),128);
        __Vtemp4005[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                           << 1U);
        __Vtemp4005[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                         << 1U));
        __Vtemp4005[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                         << 1U));
        __Vtemp4005[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                            >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                         << 1U));
        tracep->fullWData(oldp+824,(__Vtemp4005),128);
        __Vtemp4015[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                               << 1U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                          << 1U));
        __Vtemp4015[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                            << 1U)));
        __Vtemp4015[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                            << 1U)));
        __Vtemp4015[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                            << 1U)));
        tracep->fullWData(oldp+828,(__Vtemp4015),128);
        __Vtemp4039[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                              << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                        << 2U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                                   << 2U)) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                         << 1U)));
        __Vtemp4039[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
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
        __Vtemp4039[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
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
        __Vtemp4039[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
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
        tracep->fullWData(oldp+832,(__Vtemp4039),128);
        tracep->fullCData(oldp+836,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state),2);
        tracep->fullWData(oldp+837,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2),67);
        tracep->fullWData(oldp+840,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1),128);
        tracep->fullWData(oldp+844,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2),128);
        tracep->fullWData(oldp+848,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3),128);
        tracep->fullWData(oldp+852,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4),128);
        tracep->fullWData(oldp+856,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5),128);
        tracep->fullWData(oldp+860,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6),128);
        tracep->fullWData(oldp+864,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7),128);
        tracep->fullWData(oldp+868,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8),128);
        tracep->fullWData(oldp+872,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9),128);
        tracep->fullWData(oldp+876,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10),128);
        tracep->fullWData(oldp+880,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11),128);
        tracep->fullWData(oldp+884,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12),128);
        tracep->fullWData(oldp+888,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13),128);
        tracep->fullWData(oldp+892,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14),128);
        tracep->fullWData(oldp+896,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15),128);
        tracep->fullWData(oldp+900,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16),128);
        tracep->fullWData(oldp+904,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17),128);
        tracep->fullWData(oldp+908,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18),128);
        tracep->fullWData(oldp+912,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19),128);
        tracep->fullWData(oldp+916,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20),128);
        tracep->fullWData(oldp+920,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21),128);
        tracep->fullWData(oldp+924,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22),128);
        tracep->fullWData(oldp+928,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23),128);
        tracep->fullWData(oldp+932,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24),128);
        tracep->fullWData(oldp+936,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25),128);
        tracep->fullWData(oldp+940,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26),128);
        tracep->fullWData(oldp+944,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27),128);
        tracep->fullWData(oldp+948,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28),128);
        tracep->fullWData(oldp+952,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29),128);
        tracep->fullWData(oldp+956,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30),128);
        tracep->fullWData(oldp+960,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31),128);
        tracep->fullWData(oldp+964,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32),128);
        tracep->fullBit(oldp+968,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+969,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c))));
        tracep->fullBit(oldp+970,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+971,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c))));
        tracep->fullBit(oldp+972,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+973,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c))));
        tracep->fullBit(oldp+974,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+975,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c))));
        tracep->fullBit(oldp+976,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+977,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c))));
        tracep->fullBit(oldp+978,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+979,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c))));
        tracep->fullBit(oldp+980,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+981,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c))));
        tracep->fullBit(oldp+982,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+983,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c))));
        tracep->fullBit(oldp+984,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+985,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c))));
        tracep->fullBit(oldp+986,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+987,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c))));
        tracep->fullBit(oldp+988,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+989,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c))));
        tracep->fullBit(oldp+990,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+991,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c))));
        tracep->fullBit(oldp+992,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+993,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c))));
        tracep->fullBit(oldp+994,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+995,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c))));
        tracep->fullBit(oldp+996,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+997,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c))));
        tracep->fullBit(oldp+998,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+999,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c))));
        tracep->fullBit(oldp+1000,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1001,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c))));
        tracep->fullBit(oldp+1002,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1003,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c))));
        tracep->fullBit(oldp+1004,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1005,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c))));
        tracep->fullBit(oldp+1006,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1007,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c))));
        tracep->fullBit(oldp+1008,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1009,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c))));
        tracep->fullBit(oldp+1010,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1011,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c))));
        tracep->fullBit(oldp+1012,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1013,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c))));
        tracep->fullBit(oldp+1014,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1015,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c))));
        tracep->fullBit(oldp+1016,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1017,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c))));
        tracep->fullBit(oldp+1018,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1019,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c))));
        tracep->fullBit(oldp+1020,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1021,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c))));
        tracep->fullBit(oldp+1022,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1023,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c))));
        tracep->fullBit(oldp+1024,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1025,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c))));
        tracep->fullBit(oldp+1026,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1027,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c))));
        tracep->fullBit(oldp+1028,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1029,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c))));
        tracep->fullBit(oldp+1030,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1031,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c))));
        tracep->fullBit(oldp+1032,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1033,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c))));
        tracep->fullWData(oldp+1034,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out),128);
        __Vtemp4042[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U];
        __Vtemp4042[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U];
        __Vtemp4042[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U];
        __Vtemp4042[3U] = (0x3fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[3U]);
        tracep->fullWData(oldp+1038,(__Vtemp4042),126);
        __Vtemp4045[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U];
        __Vtemp4045[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U];
        __Vtemp4045[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U];
        __Vtemp4045[3U] = (0xfffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[3U]);
        tracep->fullWData(oldp+1042,(__Vtemp4045),124);
        __Vtemp4048[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U];
        __Vtemp4048[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U];
        __Vtemp4048[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U];
        __Vtemp4048[3U] = (0x3ffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[3U]);
        tracep->fullWData(oldp+1046,(__Vtemp4048),122);
        __Vtemp4051[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U];
        __Vtemp4051[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U];
        __Vtemp4051[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U];
        __Vtemp4051[3U] = (0xffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[3U]);
        tracep->fullWData(oldp+1050,(__Vtemp4051),120);
        __Vtemp4054[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U];
        __Vtemp4054[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U];
        __Vtemp4054[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U];
        __Vtemp4054[3U] = (0x3fffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[3U]);
        tracep->fullWData(oldp+1054,(__Vtemp4054),118);
        __Vtemp4057[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U];
        __Vtemp4057[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U];
        __Vtemp4057[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U];
        __Vtemp4057[3U] = (0xfffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[3U]);
        tracep->fullWData(oldp+1058,(__Vtemp4057),116);
        __Vtemp4060[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U];
        __Vtemp4060[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U];
        __Vtemp4060[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U];
        __Vtemp4060[3U] = (0x3ffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[3U]);
        tracep->fullWData(oldp+1062,(__Vtemp4060),114);
        __Vtemp4063[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U];
        __Vtemp4063[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U];
        __Vtemp4063[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U];
        __Vtemp4063[3U] = (0xffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[3U]);
        tracep->fullWData(oldp+1066,(__Vtemp4063),112);
        __Vtemp4066[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U];
        __Vtemp4066[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U];
        __Vtemp4066[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U];
        __Vtemp4066[3U] = (0x3fffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[3U]);
        tracep->fullWData(oldp+1070,(__Vtemp4066),110);
        __Vtemp4069[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U];
        __Vtemp4069[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U];
        __Vtemp4069[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U];
        __Vtemp4069[3U] = (0xfffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[3U]);
        tracep->fullWData(oldp+1074,(__Vtemp4069),108);
        __Vtemp4072[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U];
        __Vtemp4072[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U];
        __Vtemp4072[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U];
        __Vtemp4072[3U] = (0x3ffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[3U]);
        tracep->fullWData(oldp+1078,(__Vtemp4072),106);
        __Vtemp4075[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U];
        __Vtemp4075[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U];
        __Vtemp4075[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U];
        __Vtemp4075[3U] = (0xffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[3U]);
        tracep->fullWData(oldp+1082,(__Vtemp4075),104);
        __Vtemp4078[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U];
        __Vtemp4078[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U];
        __Vtemp4078[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U];
        __Vtemp4078[3U] = (0x3fU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[3U]);
        tracep->fullWData(oldp+1086,(__Vtemp4078),102);
        __Vtemp4081[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U];
        __Vtemp4081[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U];
        __Vtemp4081[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U];
        __Vtemp4081[3U] = (0xfU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[3U]);
        tracep->fullWData(oldp+1090,(__Vtemp4081),100);
        __Vtemp4084[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U];
        __Vtemp4084[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U];
        __Vtemp4084[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U];
        __Vtemp4084[3U] = (3U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[3U]);
        tracep->fullWData(oldp+1094,(__Vtemp4084),98);
        __Vtemp4085[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[0U];
        __Vtemp4085[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[1U];
        __Vtemp4085[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[2U];
        tracep->fullWData(oldp+1098,(__Vtemp4085),96);
        __Vtemp4088[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U];
        __Vtemp4088[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U];
        __Vtemp4088[2U] = (0x3fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[2U]);
        tracep->fullWData(oldp+1101,(__Vtemp4088),94);
        __Vtemp4091[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U];
        __Vtemp4091[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U];
        __Vtemp4091[2U] = (0xfffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[2U]);
        tracep->fullWData(oldp+1104,(__Vtemp4091),92);
        __Vtemp4094[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U];
        __Vtemp4094[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U];
        __Vtemp4094[2U] = (0x3ffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[2U]);
        tracep->fullWData(oldp+1107,(__Vtemp4094),90);
        __Vtemp4097[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U];
        __Vtemp4097[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U];
        __Vtemp4097[2U] = (0xffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[2U]);
        tracep->fullWData(oldp+1110,(__Vtemp4097),88);
        __Vtemp4100[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U];
        __Vtemp4100[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U];
        __Vtemp4100[2U] = (0x3fffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[2U]);
        tracep->fullWData(oldp+1113,(__Vtemp4100),86);
        __Vtemp4103[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U];
        __Vtemp4103[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U];
        __Vtemp4103[2U] = (0xfffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[2U]);
        tracep->fullWData(oldp+1116,(__Vtemp4103),84);
        __Vtemp4106[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U];
        __Vtemp4106[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U];
        __Vtemp4106[2U] = (0x3ffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[2U]);
        tracep->fullWData(oldp+1119,(__Vtemp4106),82);
        __Vtemp4109[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U];
        __Vtemp4109[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U];
        __Vtemp4109[2U] = (0xffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[2U]);
        tracep->fullWData(oldp+1122,(__Vtemp4109),80);
        __Vtemp4112[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U];
        __Vtemp4112[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U];
        __Vtemp4112[2U] = (0x3fffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[2U]);
        tracep->fullWData(oldp+1125,(__Vtemp4112),78);
        __Vtemp4115[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U];
        __Vtemp4115[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U];
        __Vtemp4115[2U] = (0xfffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[2U]);
        tracep->fullWData(oldp+1128,(__Vtemp4115),76);
        __Vtemp4118[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U];
        __Vtemp4118[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U];
        __Vtemp4118[2U] = (0x3ffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[2U]);
        tracep->fullWData(oldp+1131,(__Vtemp4118),74);
        __Vtemp4121[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U];
        __Vtemp4121[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U];
        __Vtemp4121[2U] = (0xffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[2U]);
        tracep->fullWData(oldp+1134,(__Vtemp4121),72);
        __Vtemp4124[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U];
        __Vtemp4124[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U];
        __Vtemp4124[2U] = (0x3fU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[2U]);
        tracep->fullWData(oldp+1137,(__Vtemp4124),70);
        __Vtemp4127[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U];
        __Vtemp4127[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U];
        __Vtemp4127[2U] = (0xfU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[2U]);
        tracep->fullWData(oldp+1140,(__Vtemp4127),68);
        __Vtemp4130[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U];
        __Vtemp4130[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U];
        __Vtemp4130[2U] = (3U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[2U]);
        tracep->fullWData(oldp+1143,(__Vtemp4130),66);
        tracep->fullQData(oldp+1146,((((QData)((IData)(
                                                       vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U])))),64);
        __Vtemp4140[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                            ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                               << 1U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                          << 1U));
        __Vtemp4140[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                            << 1U)));
        __Vtemp4140[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                            << 1U)));
        __Vtemp4140[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                            ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                             << 1U))) 
                           ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                               >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                            << 1U)));
        __Vtemp4164[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                              << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                        << 2U)) | (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                                   << 2U)) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                         << 1U)));
        __Vtemp4164[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
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
        __Vtemp4164[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
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
        __Vtemp4164[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
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
        VL_ADD_W(4, __Vtemp4165, __Vtemp4140, __Vtemp4164);
        tracep->fullWData(oldp+1148,(__Vtemp4165),128);
        tracep->fullBit(oldp+1152,((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2[2U])));
        tracep->fullCData(oldp+1153,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c) 
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
        tracep->fullCData(oldp+1154,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
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
        tracep->fullIData(oldp+1155,(((0x10000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c) 
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
        tracep->fullQData(oldp+1156,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_lo),33);
        tracep->fullCData(oldp+1158,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c) 
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
        tracep->fullCData(oldp+1159,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
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
        tracep->fullIData(oldp+1160,(((0x10000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c) 
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
        tracep->fullQData(oldp+1161,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_hi_1),33);
        __Vtemp4168[0U] = (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]);
        __Vtemp4168[1U] = (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]);
        __Vtemp4168[2U] = (1U & (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]));
        tracep->fullWData(oldp+1163,(__Vtemp4168),65);
        tracep->fullQData(oldp+1166,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0x7fffffffffffffffULL
                                       : 0ULL)),63);
        tracep->fullQData(oldp+1168,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0x3fffffffffffffffULL
                                       : 0ULL)),62);
        tracep->fullQData(oldp+1170,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0ULL : 0x3fffffffffffffffULL)),62);
        tracep->fullQData(oldp+1172,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0ULL : 0x7fffffffffffffffULL)),63);
        __Vtemp4171[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U];
        __Vtemp4171[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U];
        __Vtemp4171[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U];
        __Vtemp4171[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1174,(__Vtemp4171),127);
        __Vtemp4174[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U];
        __Vtemp4174[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U];
        __Vtemp4174[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U];
        __Vtemp4174[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1178,(__Vtemp4174),127);
        __Vtemp4177[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U];
        __Vtemp4177[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U];
        __Vtemp4177[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U];
        __Vtemp4177[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1182,(__Vtemp4177),127);
        __Vtemp4180[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U];
        __Vtemp4180[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U];
        __Vtemp4180[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U];
        __Vtemp4180[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1186,(__Vtemp4180),127);
        __Vtemp4183[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U];
        __Vtemp4183[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U];
        __Vtemp4183[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U];
        __Vtemp4183[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1190,(__Vtemp4183),127);
        __Vtemp4186[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U];
        __Vtemp4186[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U];
        __Vtemp4186[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U];
        __Vtemp4186[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1194,(__Vtemp4186),127);
        __Vtemp4189[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U];
        __Vtemp4189[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U];
        __Vtemp4189[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U];
        __Vtemp4189[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1198,(__Vtemp4189),127);
        __Vtemp4192[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U];
        __Vtemp4192[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U];
        __Vtemp4192[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U];
        __Vtemp4192[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1202,(__Vtemp4192),127);
        __Vtemp4195[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U];
        __Vtemp4195[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U];
        __Vtemp4195[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U];
        __Vtemp4195[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1206,(__Vtemp4195),127);
        __Vtemp4198[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U];
        __Vtemp4198[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U];
        __Vtemp4198[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U];
        __Vtemp4198[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1210,(__Vtemp4198),127);
        __Vtemp4201[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U];
        __Vtemp4201[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U];
        __Vtemp4201[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U];
        __Vtemp4201[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1214,(__Vtemp4201),127);
        __Vtemp4204[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U];
        __Vtemp4204[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U];
        __Vtemp4204[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U];
        __Vtemp4204[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1218,(__Vtemp4204),127);
        __Vtemp4207[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U];
        __Vtemp4207[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U];
        __Vtemp4207[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U];
        __Vtemp4207[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1222,(__Vtemp4207),127);
        __Vtemp4210[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U];
        __Vtemp4210[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U];
        __Vtemp4210[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U];
        __Vtemp4210[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1226,(__Vtemp4210),127);
        __Vtemp4213[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U];
        __Vtemp4213[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U];
        __Vtemp4213[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U];
        __Vtemp4213[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1230,(__Vtemp4213),127);
        __Vtemp4216[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U];
        __Vtemp4216[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U];
        __Vtemp4216[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U];
        __Vtemp4216[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1234,(__Vtemp4216),127);
        __Vtemp4219[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U];
        __Vtemp4219[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U];
        __Vtemp4219[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U];
        __Vtemp4219[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1238,(__Vtemp4219),127);
        __Vtemp4222[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U];
        __Vtemp4222[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U];
        __Vtemp4222[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U];
        __Vtemp4222[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1242,(__Vtemp4222),127);
        __Vtemp4225[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U];
        __Vtemp4225[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U];
        __Vtemp4225[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U];
        __Vtemp4225[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1246,(__Vtemp4225),127);
        __Vtemp4228[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U];
        __Vtemp4228[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U];
        __Vtemp4228[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U];
        __Vtemp4228[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1250,(__Vtemp4228),127);
        __Vtemp4231[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U];
        __Vtemp4231[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U];
        __Vtemp4231[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U];
        __Vtemp4231[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1254,(__Vtemp4231),127);
        __Vtemp4234[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U];
        __Vtemp4234[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U];
        __Vtemp4234[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U];
        __Vtemp4234[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1258,(__Vtemp4234),127);
        __Vtemp4253[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
                             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                            << 1U) 
                                           & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U]));
        __Vtemp4253[1U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U] 
                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                              << 1U))) 
                            | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U]));
        __Vtemp4253[2U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U] 
                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                              << 1U))) 
                            | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U]));
        __Vtemp4253[3U] = (0x7fffffffU & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[3U] 
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
        tracep->fullWData(oldp+1262,(__Vtemp4253),127);
        __Vtemp4276[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                              << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U]) 
                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                               & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                  << 1U))) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U]) 
                                              << 1U));
        __Vtemp4276[1U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
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
        __Vtemp4276[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
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
        __Vtemp4276[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
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
        tracep->fullWData(oldp+1266,(__Vtemp4276),127);
        __Vtemp4295[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
                             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                            << 1U) 
                                           & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U]));
        __Vtemp4295[1U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U] 
                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                              << 1U))) 
                            | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                              << 1U)) 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U]));
        __Vtemp4295[2U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U] 
                             & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                              << 1U))) 
                            | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                 >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                              << 1U)) 
                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U])) 
                           | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U] 
                              & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U]));
        __Vtemp4295[3U] = (0x7fffffffU & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[3U] 
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
        tracep->fullWData(oldp+1270,(__Vtemp4295),127);
        __Vtemp4318[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                              << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U]) 
                            | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                               & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                  << 1U))) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U]) 
                                              << 1U));
        __Vtemp4318[1U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
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
        __Vtemp4318[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
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
        __Vtemp4318[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
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
        tracep->fullWData(oldp+1274,(__Vtemp4318),127);
        __Vtemp4321[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U];
        __Vtemp4321[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U];
        __Vtemp4321[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U];
        __Vtemp4321[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1278,(__Vtemp4321),127);
        __Vtemp4324[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U];
        __Vtemp4324[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U];
        __Vtemp4324[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U];
        __Vtemp4324[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1282,(__Vtemp4324),127);
        __Vtemp4327[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U];
        __Vtemp4327[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U];
        __Vtemp4327[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U];
        __Vtemp4327[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1286,(__Vtemp4327),127);
        __Vtemp4330[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U];
        __Vtemp4330[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U];
        __Vtemp4330[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U];
        __Vtemp4330[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1290,(__Vtemp4330),127);
        __Vtemp4333[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U];
        __Vtemp4333[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U];
        __Vtemp4333[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U];
        __Vtemp4333[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1294,(__Vtemp4333),127);
        __Vtemp4356[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                             & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                           << 1U)) 
                           | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U]));
        __Vtemp4356[1U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
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
        __Vtemp4356[2U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
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
        __Vtemp4356[3U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
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
        tracep->fullWData(oldp+1298,(__Vtemp4356),127);
        tracep->fullBit(oldp+1302,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid));
        tracep->fullIData(oldp+1303,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_pc),32);
        tracep->fullIData(oldp+1304,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_inst),32);
        tracep->fullCData(oldp+1305,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code),2);
        tracep->fullCData(oldp+1306,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size),2);
        tracep->fullCData(oldp+1307,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mdu_code),4);
        tracep->fullBit(oldp+1308,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en));
        tracep->fullCData(oldp+1309,(vlSelf->Core__DOT__mem__DOT__waddr),5);
        tracep->fullBit(oldp+1310,(vlSelf->Core__DOT__mem__DOT__wen));
        tracep->fullQData(oldp+1311,(vlSelf->Core__DOT__mem__DOT__wdata),64);
        tracep->fullIData(oldp+1313,(vlSelf->Core__DOT__mem__DOT__reg_mem_addr),32);
        tracep->fullBit(oldp+1314,(vlSelf->Core__DOT__mem__DOT__mdu_valid));
        tracep->fullBit(oldp+1315,(vlSelf->Core__DOT__mem__DOT__is_load));
        tracep->fullBit(oldp+1316,((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))));
        tracep->fullCData(oldp+1317,((7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out))),3);
        tracep->fullCData(oldp+1318,((7U & vlSelf->Core__DOT__mem__DOT__reg_mem_addr)),3);
        tracep->fullCData(oldp+1319,(((7U == (7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
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
        tracep->fullCData(oldp+1320,(((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                       ? 0xffU : ((2U 
                                                   == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                   ? 0xfU
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                    ? 3U
                                                    : 1U)))),8);
        tracep->fullIData(oldp+1321,(vlSelf->Core__DOT__wb_dpi__DOT__inst1),32);
        tracep->fullIData(oldp+1322,(vlSelf->Core__DOT__wb_dpi__DOT__pc1),32);
        tracep->fullBit(oldp+1323,(((~ ((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis) 
                                        | (IData)(vlSelf->Core__DOT__decode__DOT__stall))) 
                                    & (IData)(vlSelf->Core__DOT__decode__DOT__inst_valid))));
        tracep->fullQData(oldp+1324,(((0U != (0x1fU 
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
        tracep->fullQData(oldp+1326,(((0U != (0x1fU 
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
        tracep->fullBit(oldp+1328,(((~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)) 
                                    & (((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                        | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                       & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)))));
        tracep->fullBit(oldp+1329,(((~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)) 
                                    & ((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                       & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)))));
        tracep->fullQData(oldp+1330,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                       ? vlSelf->Core__DOT__mem__DOT___ld_data_u_T_9
                                       : 0ULL)),64);
        tracep->fullQData(oldp+1332,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                       ? ((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                           ? vlSelf->Core__DOT__mem__DOT___ld_data_u_T_9
                                           : 0ULL) : 
                                      ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                        ? vlSelf->Core__DOT__mem__DOT__ld_data
                                        : 0ULL))),64);
        tracep->fullBit(oldp+1334,((1U & (~ (IData)(vlSelf->Core__DOT__decode__DOT__stall)))));
        tracep->fullBit(oldp+1335,((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)))));
        tracep->fullQData(oldp+1336,(vlSelf->Core__DOT__mem_io_mem_rd_data),64);
        tracep->fullBit(oldp+1338,(vlSelf->Core__DOT__fetch__DOT__stall));
        tracep->fullBit(oldp+1339,(vlSelf->Core__DOT__decode__DOT__stall));
        tracep->fullBit(oldp+1340,(vlSelf->Core__DOT__execute__DOT__mdu_io_mdu_valid));
        tracep->fullBit(oldp+1341,(vlSelf->Core__DOT__mem__DOT__stall));
        tracep->fullBit(oldp+1342,(vlSelf->Core__DOT__mem__DOT__req_wait));
        tracep->fullQData(oldp+1343,(vlSelf->Core__DOT__mem__DOT__ld_data_raw),64);
        tracep->fullQData(oldp+1345,(((1U & (IData)(
                                                    (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                     >> 7U)))
                                       ? 0xffffffffffffffULL
                                       : 0ULL)),56);
        tracep->fullCData(oldp+1347,((0xffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),8);
        tracep->fullQData(oldp+1348,(((1U & (IData)(
                                                    (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                     >> 0xfU)))
                                       ? 0xffffffffffffULL
                                       : 0ULL)),48);
        tracep->fullSData(oldp+1350,((0xffffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),16);
        tracep->fullIData(oldp+1351,(((1U & (IData)(
                                                    (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                     >> 0x1fU)))
                                       ? 0xffffffffU
                                       : 0U)),32);
        tracep->fullIData(oldp+1352,((IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)),32);
        tracep->fullQData(oldp+1353,(vlSelf->Core__DOT__mem__DOT__ld_data),64);
        tracep->fullBit(oldp+1355,(vlSelf->clock));
        tracep->fullBit(oldp+1356,(vlSelf->reset));
        tracep->fullIData(oldp+1357,(vlSelf->io_imem_raddr),32);
        tracep->fullIData(oldp+1358,(vlSelf->io_imem_waddr),32);
        tracep->fullQData(oldp+1359,(vlSelf->io_imem_wdata),64);
        tracep->fullBit(oldp+1361,(vlSelf->io_imem_ren));
        tracep->fullBit(oldp+1362,(vlSelf->io_imem_wen));
        tracep->fullCData(oldp+1363,(vlSelf->io_imem_wmask),8);
        tracep->fullQData(oldp+1364,(vlSelf->io_imem_rdata),64);
        tracep->fullBit(oldp+1366,(vlSelf->io_imem_read_ok));
        tracep->fullBit(oldp+1367,(vlSelf->io_imem_write_ok));
        tracep->fullIData(oldp+1368,(vlSelf->io_dmem_raddr),32);
        tracep->fullIData(oldp+1369,(vlSelf->io_dmem_waddr),32);
        tracep->fullQData(oldp+1370,(vlSelf->io_dmem_wdata),64);
        tracep->fullBit(oldp+1372,(vlSelf->io_dmem_ren));
        tracep->fullBit(oldp+1373,(vlSelf->io_dmem_wen));
        tracep->fullCData(oldp+1374,(vlSelf->io_dmem_wmask),8);
        tracep->fullQData(oldp+1375,(vlSelf->io_dmem_rdata),64);
        tracep->fullBit(oldp+1377,(vlSelf->io_dmem_read_ok));
        tracep->fullBit(oldp+1378,(vlSelf->io_dmem_write_ok));
        tracep->fullIData(oldp+1379,(vlSelf->io_commit_pc),32);
        tracep->fullQData(oldp+1380,(vlSelf->io_regs_out_0),64);
        tracep->fullQData(oldp+1382,(vlSelf->io_regs_out_1),64);
        tracep->fullQData(oldp+1384,(vlSelf->io_regs_out_2),64);
        tracep->fullQData(oldp+1386,(vlSelf->io_regs_out_3),64);
        tracep->fullQData(oldp+1388,(vlSelf->io_regs_out_4),64);
        tracep->fullQData(oldp+1390,(vlSelf->io_regs_out_5),64);
        tracep->fullQData(oldp+1392,(vlSelf->io_regs_out_6),64);
        tracep->fullQData(oldp+1394,(vlSelf->io_regs_out_7),64);
        tracep->fullQData(oldp+1396,(vlSelf->io_regs_out_8),64);
        tracep->fullQData(oldp+1398,(vlSelf->io_regs_out_9),64);
        tracep->fullQData(oldp+1400,(vlSelf->io_regs_out_10),64);
        tracep->fullQData(oldp+1402,(vlSelf->io_regs_out_11),64);
        tracep->fullQData(oldp+1404,(vlSelf->io_regs_out_12),64);
        tracep->fullQData(oldp+1406,(vlSelf->io_regs_out_13),64);
        tracep->fullQData(oldp+1408,(vlSelf->io_regs_out_14),64);
        tracep->fullQData(oldp+1410,(vlSelf->io_regs_out_15),64);
        tracep->fullQData(oldp+1412,(vlSelf->io_regs_out_16),64);
        tracep->fullQData(oldp+1414,(vlSelf->io_regs_out_17),64);
        tracep->fullQData(oldp+1416,(vlSelf->io_regs_out_18),64);
        tracep->fullQData(oldp+1418,(vlSelf->io_regs_out_19),64);
        tracep->fullQData(oldp+1420,(vlSelf->io_regs_out_20),64);
        tracep->fullQData(oldp+1422,(vlSelf->io_regs_out_21),64);
        tracep->fullQData(oldp+1424,(vlSelf->io_regs_out_22),64);
        tracep->fullQData(oldp+1426,(vlSelf->io_regs_out_23),64);
        tracep->fullQData(oldp+1428,(vlSelf->io_regs_out_24),64);
        tracep->fullQData(oldp+1430,(vlSelf->io_regs_out_25),64);
        tracep->fullQData(oldp+1432,(vlSelf->io_regs_out_26),64);
        tracep->fullQData(oldp+1434,(vlSelf->io_regs_out_27),64);
        tracep->fullQData(oldp+1436,(vlSelf->io_regs_out_28),64);
        tracep->fullQData(oldp+1438,(vlSelf->io_regs_out_29),64);
        tracep->fullQData(oldp+1440,(vlSelf->io_regs_out_30),64);
        tracep->fullQData(oldp+1442,(vlSelf->io_regs_out_31),64);
        tracep->fullQData(oldp+1444,(vlSelf->io_regs_in_0),64);
        tracep->fullQData(oldp+1446,(vlSelf->io_regs_in_1),64);
        tracep->fullQData(oldp+1448,(vlSelf->io_regs_in_2),64);
        tracep->fullQData(oldp+1450,(vlSelf->io_regs_in_3),64);
        tracep->fullQData(oldp+1452,(vlSelf->io_regs_in_4),64);
        tracep->fullQData(oldp+1454,(vlSelf->io_regs_in_5),64);
        tracep->fullQData(oldp+1456,(vlSelf->io_regs_in_6),64);
        tracep->fullQData(oldp+1458,(vlSelf->io_regs_in_7),64);
        tracep->fullQData(oldp+1460,(vlSelf->io_regs_in_8),64);
        tracep->fullQData(oldp+1462,(vlSelf->io_regs_in_9),64);
        tracep->fullQData(oldp+1464,(vlSelf->io_regs_in_10),64);
        tracep->fullQData(oldp+1466,(vlSelf->io_regs_in_11),64);
        tracep->fullQData(oldp+1468,(vlSelf->io_regs_in_12),64);
        tracep->fullQData(oldp+1470,(vlSelf->io_regs_in_13),64);
        tracep->fullQData(oldp+1472,(vlSelf->io_regs_in_14),64);
        tracep->fullQData(oldp+1474,(vlSelf->io_regs_in_15),64);
        tracep->fullQData(oldp+1476,(vlSelf->io_regs_in_16),64);
        tracep->fullQData(oldp+1478,(vlSelf->io_regs_in_17),64);
        tracep->fullQData(oldp+1480,(vlSelf->io_regs_in_18),64);
        tracep->fullQData(oldp+1482,(vlSelf->io_regs_in_19),64);
        tracep->fullQData(oldp+1484,(vlSelf->io_regs_in_20),64);
        tracep->fullQData(oldp+1486,(vlSelf->io_regs_in_21),64);
        tracep->fullQData(oldp+1488,(vlSelf->io_regs_in_22),64);
        tracep->fullQData(oldp+1490,(vlSelf->io_regs_in_23),64);
        tracep->fullQData(oldp+1492,(vlSelf->io_regs_in_24),64);
        tracep->fullQData(oldp+1494,(vlSelf->io_regs_in_25),64);
        tracep->fullQData(oldp+1496,(vlSelf->io_regs_in_26),64);
        tracep->fullQData(oldp+1498,(vlSelf->io_regs_in_27),64);
        tracep->fullQData(oldp+1500,(vlSelf->io_regs_in_28),64);
        tracep->fullQData(oldp+1502,(vlSelf->io_regs_in_29),64);
        tracep->fullQData(oldp+1504,(vlSelf->io_regs_in_30),64);
        tracep->fullQData(oldp+1506,(vlSelf->io_regs_in_31),64);
        tracep->fullIData(oldp+1508,(vlSelf->io_pc_in),32);
        tracep->fullBit(oldp+1509,(vlSelf->io_write_regs));
        tracep->fullBit(oldp+1510,(vlSelf->io_commit));
        tracep->fullIData(oldp+1511,((IData)(vlSelf->io_imem_rdata)),32);
        tracep->fullIData(oldp+1512,(((IData)(vlSelf->io_imem_read_ok)
                                       ? vlSelf->Core__DOT__fetch__DOT__inst_out
                                       : 0U)),32);
        tracep->fullBit(oldp+1513,(((IData)(vlSelf->io_imem_read_ok) 
                                    & (IData)(vlSelf->Core__DOT__fetch__DOT__valid_out))));
        tracep->fullBit(oldp+1514,((1U & (~ (IData)(vlSelf->io_imem_read_ok)))));
        tracep->fullBit(oldp+1515,(1U));
    }
}
