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
        tracep->declBit(c+1418,"clock", false,-1);
        tracep->declBit(c+1419,"reset", false,-1);
        tracep->declBit(c+1420,"io_imem_req_ready", false,-1);
        tracep->declBit(c+1421,"io_imem_req_valid", false,-1);
        tracep->declBus(c+1422,"io_imem_req_bits_raddr", false,-1, 31,0);
        tracep->declBus(c+1423,"io_imem_req_bits_waddr", false,-1, 31,0);
        tracep->declQuad(c+1424,"io_imem_req_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+1426,"io_imem_req_bits_ren", false,-1);
        tracep->declBit(c+1427,"io_imem_req_bits_wen", false,-1);
        tracep->declBus(c+1428,"io_imem_req_bits_wmask", false,-1, 7,0);
        tracep->declBit(c+1429,"io_imem_resp_ready", false,-1);
        tracep->declBit(c+1430,"io_imem_resp_valid", false,-1);
        tracep->declQuad(c+1431,"io_imem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1433,"io_imem_resp_bits_read_ok", false,-1);
        tracep->declBit(c+1434,"io_imem_resp_bits_write_ok", false,-1);
        tracep->declBit(c+1435,"io_dmem_req_ready", false,-1);
        tracep->declBit(c+1436,"io_dmem_req_valid", false,-1);
        tracep->declBus(c+1437,"io_dmem_req_bits_raddr", false,-1, 31,0);
        tracep->declBus(c+1438,"io_dmem_req_bits_waddr", false,-1, 31,0);
        tracep->declQuad(c+1439,"io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+1441,"io_dmem_req_bits_ren", false,-1);
        tracep->declBit(c+1442,"io_dmem_req_bits_wen", false,-1);
        tracep->declBus(c+1443,"io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declBit(c+1444,"io_dmem_resp_ready", false,-1);
        tracep->declBit(c+1445,"io_dmem_resp_valid", false,-1);
        tracep->declQuad(c+1446,"io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1448,"io_dmem_resp_bits_read_ok", false,-1);
        tracep->declBit(c+1449,"io_dmem_resp_bits_write_ok", false,-1);
        tracep->declBus(c+1450,"io_commit_pc", false,-1, 31,0);
        tracep->declQuad(c+1451,"io_regs_out_0", false,-1, 63,0);
        tracep->declQuad(c+1453,"io_regs_out_1", false,-1, 63,0);
        tracep->declQuad(c+1455,"io_regs_out_2", false,-1, 63,0);
        tracep->declQuad(c+1457,"io_regs_out_3", false,-1, 63,0);
        tracep->declQuad(c+1459,"io_regs_out_4", false,-1, 63,0);
        tracep->declQuad(c+1461,"io_regs_out_5", false,-1, 63,0);
        tracep->declQuad(c+1463,"io_regs_out_6", false,-1, 63,0);
        tracep->declQuad(c+1465,"io_regs_out_7", false,-1, 63,0);
        tracep->declQuad(c+1467,"io_regs_out_8", false,-1, 63,0);
        tracep->declQuad(c+1469,"io_regs_out_9", false,-1, 63,0);
        tracep->declQuad(c+1471,"io_regs_out_10", false,-1, 63,0);
        tracep->declQuad(c+1473,"io_regs_out_11", false,-1, 63,0);
        tracep->declQuad(c+1475,"io_regs_out_12", false,-1, 63,0);
        tracep->declQuad(c+1477,"io_regs_out_13", false,-1, 63,0);
        tracep->declQuad(c+1479,"io_regs_out_14", false,-1, 63,0);
        tracep->declQuad(c+1481,"io_regs_out_15", false,-1, 63,0);
        tracep->declQuad(c+1483,"io_regs_out_16", false,-1, 63,0);
        tracep->declQuad(c+1485,"io_regs_out_17", false,-1, 63,0);
        tracep->declQuad(c+1487,"io_regs_out_18", false,-1, 63,0);
        tracep->declQuad(c+1489,"io_regs_out_19", false,-1, 63,0);
        tracep->declQuad(c+1491,"io_regs_out_20", false,-1, 63,0);
        tracep->declQuad(c+1493,"io_regs_out_21", false,-1, 63,0);
        tracep->declQuad(c+1495,"io_regs_out_22", false,-1, 63,0);
        tracep->declQuad(c+1497,"io_regs_out_23", false,-1, 63,0);
        tracep->declQuad(c+1499,"io_regs_out_24", false,-1, 63,0);
        tracep->declQuad(c+1501,"io_regs_out_25", false,-1, 63,0);
        tracep->declQuad(c+1503,"io_regs_out_26", false,-1, 63,0);
        tracep->declQuad(c+1505,"io_regs_out_27", false,-1, 63,0);
        tracep->declQuad(c+1507,"io_regs_out_28", false,-1, 63,0);
        tracep->declQuad(c+1509,"io_regs_out_29", false,-1, 63,0);
        tracep->declQuad(c+1511,"io_regs_out_30", false,-1, 63,0);
        tracep->declQuad(c+1513,"io_regs_out_31", false,-1, 63,0);
        tracep->declBit(c+1515,"io_commit", false,-1);
        tracep->declBit(c+1418,"Core clock", false,-1);
        tracep->declBit(c+1419,"Core reset", false,-1);
        tracep->declBit(c+1420,"Core io_imem_req_ready", false,-1);
        tracep->declBit(c+1421,"Core io_imem_req_valid", false,-1);
        tracep->declBus(c+1422,"Core io_imem_req_bits_raddr", false,-1, 31,0);
        tracep->declBus(c+1423,"Core io_imem_req_bits_waddr", false,-1, 31,0);
        tracep->declQuad(c+1424,"Core io_imem_req_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+1426,"Core io_imem_req_bits_ren", false,-1);
        tracep->declBit(c+1427,"Core io_imem_req_bits_wen", false,-1);
        tracep->declBus(c+1428,"Core io_imem_req_bits_wmask", false,-1, 7,0);
        tracep->declBit(c+1429,"Core io_imem_resp_ready", false,-1);
        tracep->declBit(c+1430,"Core io_imem_resp_valid", false,-1);
        tracep->declQuad(c+1431,"Core io_imem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1433,"Core io_imem_resp_bits_read_ok", false,-1);
        tracep->declBit(c+1434,"Core io_imem_resp_bits_write_ok", false,-1);
        tracep->declBit(c+1435,"Core io_dmem_req_ready", false,-1);
        tracep->declBit(c+1436,"Core io_dmem_req_valid", false,-1);
        tracep->declBus(c+1437,"Core io_dmem_req_bits_raddr", false,-1, 31,0);
        tracep->declBus(c+1438,"Core io_dmem_req_bits_waddr", false,-1, 31,0);
        tracep->declQuad(c+1439,"Core io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+1441,"Core io_dmem_req_bits_ren", false,-1);
        tracep->declBit(c+1442,"Core io_dmem_req_bits_wen", false,-1);
        tracep->declBus(c+1443,"Core io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declBit(c+1444,"Core io_dmem_resp_ready", false,-1);
        tracep->declBit(c+1445,"Core io_dmem_resp_valid", false,-1);
        tracep->declQuad(c+1446,"Core io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1448,"Core io_dmem_resp_bits_read_ok", false,-1);
        tracep->declBit(c+1449,"Core io_dmem_resp_bits_write_ok", false,-1);
        tracep->declBus(c+1450,"Core io_commit_pc", false,-1, 31,0);
        tracep->declQuad(c+1451,"Core io_regs_out_0", false,-1, 63,0);
        tracep->declQuad(c+1453,"Core io_regs_out_1", false,-1, 63,0);
        tracep->declQuad(c+1455,"Core io_regs_out_2", false,-1, 63,0);
        tracep->declQuad(c+1457,"Core io_regs_out_3", false,-1, 63,0);
        tracep->declQuad(c+1459,"Core io_regs_out_4", false,-1, 63,0);
        tracep->declQuad(c+1461,"Core io_regs_out_5", false,-1, 63,0);
        tracep->declQuad(c+1463,"Core io_regs_out_6", false,-1, 63,0);
        tracep->declQuad(c+1465,"Core io_regs_out_7", false,-1, 63,0);
        tracep->declQuad(c+1467,"Core io_regs_out_8", false,-1, 63,0);
        tracep->declQuad(c+1469,"Core io_regs_out_9", false,-1, 63,0);
        tracep->declQuad(c+1471,"Core io_regs_out_10", false,-1, 63,0);
        tracep->declQuad(c+1473,"Core io_regs_out_11", false,-1, 63,0);
        tracep->declQuad(c+1475,"Core io_regs_out_12", false,-1, 63,0);
        tracep->declQuad(c+1477,"Core io_regs_out_13", false,-1, 63,0);
        tracep->declQuad(c+1479,"Core io_regs_out_14", false,-1, 63,0);
        tracep->declQuad(c+1481,"Core io_regs_out_15", false,-1, 63,0);
        tracep->declQuad(c+1483,"Core io_regs_out_16", false,-1, 63,0);
        tracep->declQuad(c+1485,"Core io_regs_out_17", false,-1, 63,0);
        tracep->declQuad(c+1487,"Core io_regs_out_18", false,-1, 63,0);
        tracep->declQuad(c+1489,"Core io_regs_out_19", false,-1, 63,0);
        tracep->declQuad(c+1491,"Core io_regs_out_20", false,-1, 63,0);
        tracep->declQuad(c+1493,"Core io_regs_out_21", false,-1, 63,0);
        tracep->declQuad(c+1495,"Core io_regs_out_22", false,-1, 63,0);
        tracep->declQuad(c+1497,"Core io_regs_out_23", false,-1, 63,0);
        tracep->declQuad(c+1499,"Core io_regs_out_24", false,-1, 63,0);
        tracep->declQuad(c+1501,"Core io_regs_out_25", false,-1, 63,0);
        tracep->declQuad(c+1503,"Core io_regs_out_26", false,-1, 63,0);
        tracep->declQuad(c+1505,"Core io_regs_out_27", false,-1, 63,0);
        tracep->declQuad(c+1507,"Core io_regs_out_28", false,-1, 63,0);
        tracep->declQuad(c+1509,"Core io_regs_out_29", false,-1, 63,0);
        tracep->declQuad(c+1511,"Core io_regs_out_30", false,-1, 63,0);
        tracep->declQuad(c+1513,"Core io_regs_out_31", false,-1, 63,0);
        tracep->declBit(c+1515,"Core io_commit", false,-1);
        tracep->declBit(c+1418,"Core fetch_clock", false,-1);
        tracep->declBit(c+1419,"Core fetch_reset", false,-1);
        tracep->declBus(c+1395,"Core fetch_io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+1516,"Core fetch_io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+1433,"Core fetch_io_imem_resp_bits_rvalid", false,-1);
        tracep->declBus(c+1,"Core fetch_io_imem_resp_bits_old_pc", false,-1, 31,0);
        tracep->declBit(c+1396,"Core fetch_io_out_ready", false,-1);
        tracep->declBit(c+1520,"Core fetch_io_out_valid", false,-1);
        tracep->declBus(c+2,"Core fetch_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1517,"Core fetch_io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1518,"Core fetch_io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+1397,"Core fetch_io_if_flush", false,-1);
        tracep->declBus(c+3,"Core fetch_io_p_npc", false,-1, 31,0);
        tracep->declBus(c+4,"Core fetch_io_jmp_packet_i_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+1397,"Core fetch_io_jmp_packet_i_mis", false,-1);
        tracep->declBit(c+1418,"Core decode_clock", false,-1);
        tracep->declBit(c+1419,"Core decode_reset", false,-1);
        tracep->declBit(c+1396,"Core decode_io_in_ready", false,-1);
        tracep->declBus(c+2,"Core decode_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1517,"Core decode_io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1518,"Core decode_io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+1398,"Core decode_io_out_ready", false,-1);
        tracep->declBit(c+1520,"Core decode_io_out_valid", false,-1);
        tracep->declBit(c+1380,"Core decode_io_out_bits_valid", false,-1);
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
        tracep->declBit(c+1381,"Core decode_io_out_bits_rd_en", false,-1);
        tracep->declBus(c+16,"Core decode_io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+1397,"Core decode_io_id_flush", false,-1);
        tracep->declBit(c+17,"Core decode_io_ren1", false,-1);
        tracep->declBus(c+18,"Core decode_io_raddr1", false,-1, 4,0);
        tracep->declBit(c+19,"Core decode_io_ren2", false,-1);
        tracep->declBus(c+20,"Core decode_io_raddr2", false,-1, 4,0);
        tracep->declBit(c+21,"Core decode_io_is_ebreak", false,-1);
        tracep->declQuad(c+1382,"Core decode_io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+1384,"Core decode_io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+22,"Core decode_io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+24,"Core decode_io_rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+3,"Core decode_io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+26,"Core decode_io_p_npc_o", false,-1, 31,0);
        tracep->declBit(c+27,"Core decode_io_decode_rf_stall_i", false,-1);
        tracep->declBit(c+1418,"Core regfile_clock", false,-1);
        tracep->declBit(c+1419,"Core regfile_reset", false,-1);
        tracep->declBit(c+17,"Core regfile_io_ren1", false,-1);
        tracep->declBus(c+18,"Core regfile_io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+1382,"Core regfile_io_rdata1", false,-1, 63,0);
        tracep->declBit(c+19,"Core regfile_io_ren2", false,-1);
        tracep->declBus(c+20,"Core regfile_io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+1384,"Core regfile_io_rdata2", false,-1, 63,0);
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
        tracep->declQuad(c+1399,"Core regfile_io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+27,"Core regfile_io_rf_stall", false,-1);
        tracep->declBit(c+1418,"Core execute_clock", false,-1);
        tracep->declBit(c+1419,"Core execute_reset", false,-1);
        tracep->declBit(c+1398,"Core execute_io_in_ready", false,-1);
        tracep->declBit(c+1380,"Core execute_io_in_bits_valid", false,-1);
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
        tracep->declBit(c+1381,"Core execute_io_in_bits_rd_en", false,-1);
        tracep->declBus(c+16,"Core execute_io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+1398,"Core execute_io_out_ready", false,-1);
        tracep->declBit(c+1520,"Core execute_io_out_valid", false,-1);
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
        tracep->declBit(c+1386,"Core execute_io_ex_rvalid_o", false,-1);
        tracep->declBit(c+1387,"Core execute_io_ex_wvalid_o", false,-1);
        tracep->declQuad(c+24,"Core execute_io_ex_wdata_o", false,-1, 63,0);
        tracep->declBus(c+109,"Core execute_io_ex_wsize_o", false,-1, 1,0);
        tracep->declQuad(c+114,"Core execute_io_ex_mduout_o", false,-1, 63,0);
        tracep->declBit(c+116,"Core execute_io_ex_mduready_o", false,-1);
        tracep->declBit(c+96,"Core execute_io_ex_rd_en", false,-1);
        tracep->declBus(c+97,"Core execute_io_ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+100,"Core execute_io_ex_is_load", false,-1);
        tracep->declBit(c+101,"Core execute_io_ex_is_mdu", false,-1);
        tracep->declBus(c+26,"Core execute_io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+4,"Core execute_io_jmp_packet_o_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+1397,"Core execute_io_jmp_packet_o_mis", false,-1);
        tracep->declBit(c+1418,"Core mem_clock", false,-1);
        tracep->declBit(c+1419,"Core mem_reset", false,-1);
        tracep->declBit(c+1398,"Core mem_io_in_ready", false,-1);
        tracep->declBit(c+105,"Core mem_io_in_bits_valid", false,-1);
        tracep->declBus(c+106,"Core mem_io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+107,"Core mem_io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+108,"Core mem_io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+109,"Core mem_io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+110,"Core mem_io_in_bits_mdu_code", false,-1, 3,0);
        tracep->declBus(c+97,"Core mem_io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+111,"Core mem_io_in_bits_rd_en", false,-1);
        tracep->declBit(c+117,"Core mem_io_out_bits_valid", false,-1);
        tracep->declBus(c+118,"Core mem_io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+119,"Core mem_io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+98,"Core mem_io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+29,"Core mem_io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+28,"Core mem_io_wen_o", false,-1);
        tracep->declQuad(c+30,"Core mem_io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+112,"Core mem_io_is_ebreak_i", false,-1);
        tracep->declBit(c+120,"Core mem_io_is_ebreak_o", false,-1);
        tracep->declBus(c+113,"Core mem_io_dmem_req_bits_arwaddr", false,-1, 31,0);
        tracep->declBit(c+1388,"Core mem_io_dmem_req_bits_rvalid", false,-1);
        tracep->declBit(c+1389,"Core mem_io_dmem_req_bits_wvalid", false,-1);
        tracep->declQuad(c+121,"Core mem_io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+123,"Core mem_io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declQuad(c+1446,"Core mem_io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1448,"Core mem_io_dmem_resp_bits_rready", false,-1);
        tracep->declBit(c+1449,"Core mem_io_dmem_resp_bits_wready", false,-1);
        tracep->declBus(c+113,"Core mem_io_mem_rwaddr_i", false,-1, 31,0);
        tracep->declBit(c+1386,"Core mem_io_mem_rvalid_i", false,-1);
        tracep->declBit(c+1387,"Core mem_io_mem_wvalid_i", false,-1);
        tracep->declQuad(c+24,"Core mem_io_mem_wdata_i", false,-1, 63,0);
        tracep->declBus(c+109,"Core mem_io_mem_wsize_i", false,-1, 1,0);
        tracep->declBus(c+113,"Core mem_io_reg_mem_addr_i", false,-1, 31,0);
        tracep->declQuad(c+114,"Core mem_io_mem_mduout_i", false,-1, 63,0);
        tracep->declBit(c+116,"Core mem_io_mem_mduready_i", false,-1);
        tracep->declBit(c+103,"Core mem_io_mem_rd_en", false,-1);
        tracep->declBus(c+104,"Core mem_io_mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1399,"Core mem_io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+102,"Core mem_io_mem_is_load", false,-1);
        tracep->declBit(c+1418,"Core wb_dpi_clk", false,-1);
        tracep->declBus(c+119,"Core wb_dpi_inst", false,-1, 31,0);
        tracep->declBus(c+118,"Core wb_dpi_pc", false,-1, 31,0);
        tracep->declBit(c+120,"Core wb_dpi_ebreak", false,-1);
        tracep->declBus(c+1,"Core fetch_io_imem_resp_bits_old_pc_REG", false,-1, 31,0);
        tracep->declBus(c+124,"Core io_commit_pc_REG", false,-1, 31,0);
        tracep->declBit(c+125,"Core io_commit_REG", false,-1);
        tracep->declBus(c+126,"Core io_dmem_req_bits_raddr_hi", false,-1, 28,0);
        tracep->declBit(c+1418,"Core fetch clock", false,-1);
        tracep->declBit(c+1419,"Core fetch reset", false,-1);
        tracep->declBus(c+1395,"Core fetch io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBus(c+1516,"Core fetch io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+1433,"Core fetch io_imem_resp_bits_rvalid", false,-1);
        tracep->declBus(c+1,"Core fetch io_imem_resp_bits_old_pc", false,-1, 31,0);
        tracep->declBit(c+1396,"Core fetch io_out_ready", false,-1);
        tracep->declBit(c+1520,"Core fetch io_out_valid", false,-1);
        tracep->declBus(c+2,"Core fetch io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1517,"Core fetch io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1518,"Core fetch io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+1397,"Core fetch io_if_flush", false,-1);
        tracep->declBus(c+3,"Core fetch io_p_npc", false,-1, 31,0);
        tracep->declBus(c+4,"Core fetch io_jmp_packet_i_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+1397,"Core fetch io_jmp_packet_i_mis", false,-1);
        tracep->declBus(c+127,"Core fetch pc_out", false,-1, 31,0);
        tracep->declBus(c+128,"Core fetch inst_out", false,-1, 31,0);
        tracep->declBit(c+129,"Core fetch valid_out", false,-1);
        tracep->declBus(c+3,"Core fetch reg_pnpc", false,-1, 31,0);
        tracep->declBus(c+130,"Core fetch pc", false,-1, 31,0);
        tracep->declBus(c+131,"Core fetch pc_base_hi", false,-1, 29,0);
        tracep->declBus(c+132,"Core fetch pc_base", false,-1, 31,0);
        tracep->declBit(c+1519,"Core fetch imem_stall", false,-1);
        tracep->declBit(c+1401,"Core fetch stall", false,-1);
        tracep->declBus(c+1390,"Core fetch flush_pc", false,-1, 31,0);
        tracep->declBit(c+133,"Core fetch use_reg_npc", false,-1);
        tracep->declBus(c+134,"Core fetch reg_npc", false,-1, 31,0);
        tracep->declBit(c+135,"Core fetch use_reg_info", false,-1);
        tracep->declBit(c+1418,"Core decode clock", false,-1);
        tracep->declBit(c+1419,"Core decode reset", false,-1);
        tracep->declBit(c+1396,"Core decode io_in_ready", false,-1);
        tracep->declBus(c+2,"Core decode io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+1517,"Core decode io_in_bits_inst", false,-1, 31,0);
        tracep->declBit(c+1518,"Core decode io_in_bits_inst_valid", false,-1);
        tracep->declBit(c+1398,"Core decode io_out_ready", false,-1);
        tracep->declBit(c+1520,"Core decode io_out_valid", false,-1);
        tracep->declBit(c+1380,"Core decode io_out_bits_valid", false,-1);
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
        tracep->declBit(c+1381,"Core decode io_out_bits_rd_en", false,-1);
        tracep->declBus(c+16,"Core decode io_out_bits_imm", false,-1, 31,0);
        tracep->declBit(c+1397,"Core decode io_id_flush", false,-1);
        tracep->declBit(c+17,"Core decode io_ren1", false,-1);
        tracep->declBus(c+18,"Core decode io_raddr1", false,-1, 4,0);
        tracep->declBit(c+19,"Core decode io_ren2", false,-1);
        tracep->declBus(c+20,"Core decode io_raddr2", false,-1, 4,0);
        tracep->declBit(c+21,"Core decode io_is_ebreak", false,-1);
        tracep->declQuad(c+1382,"Core decode io_rs1_data_i", false,-1, 63,0);
        tracep->declQuad(c+1384,"Core decode io_rs2_data_i", false,-1, 63,0);
        tracep->declQuad(c+22,"Core decode io_rs1_data_o", false,-1, 63,0);
        tracep->declQuad(c+24,"Core decode io_rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+3,"Core decode io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+26,"Core decode io_p_npc_o", false,-1, 31,0);
        tracep->declBit(c+27,"Core decode io_decode_rf_stall_i", false,-1);
        tracep->declBus(c+5,"Core decode pc", false,-1, 31,0);
        tracep->declBus(c+6,"Core decode inst", false,-1, 31,0);
        tracep->declBit(c+136,"Core decode inst_valid", false,-1);
        tracep->declBus(c+26,"Core decode reg_pnpc", false,-1, 31,0);
        tracep->declQuad(c+22,"Core decode rs1_reg", false,-1, 63,0);
        tracep->declQuad(c+24,"Core decode rs2_reg", false,-1, 63,0);
        tracep->declBus(c+9,"Core decode ctrl_4", false,-1, 1,0);
        tracep->declBit(c+12,"Core decode c0_0", false,-1);
        tracep->declBus(c+137,"Core decode c0_1", false,-1, 2,0);
        tracep->declBus(c+14,"Core decode c0_2", false,-1, 2,0);
        tracep->declBit(c+138,"Core decode c0_3", false,-1);
        tracep->declBus(c+139,"Core decode c0_4", false,-1, 2,0);
        tracep->declBit(c+1402,"Core decode stall", false,-1);
        tracep->declBit(c+21,"Core decode io_is_ebreak_REG", false,-1);
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
        tracep->declBit(c+1418,"Core regfile clock", false,-1);
        tracep->declBit(c+1419,"Core regfile reset", false,-1);
        tracep->declBit(c+17,"Core regfile io_ren1", false,-1);
        tracep->declBus(c+18,"Core regfile io_raddr1", false,-1, 4,0);
        tracep->declQuad(c+1382,"Core regfile io_rdata1", false,-1, 63,0);
        tracep->declBit(c+19,"Core regfile io_ren2", false,-1);
        tracep->declBus(c+20,"Core regfile io_raddr2", false,-1, 4,0);
        tracep->declQuad(c+1384,"Core regfile io_rdata2", false,-1, 63,0);
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
        tracep->declQuad(c+1399,"Core regfile io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+27,"Core regfile io_rf_stall", false,-1);
        tracep->declBit(c+159,"Core regfile ex_rs1_hazard", false,-1);
        tracep->declBit(c+160,"Core regfile ex_rs2_hazard", false,-1);
        tracep->declBit(c+161,"Core regfile mem_rs1_hazard", false,-1);
        tracep->declBit(c+162,"Core regfile mem_rs2_hazard", false,-1);
        tracep->declBit(c+163,"Core regfile wb_rs1_hazard", false,-1);
        tracep->declBit(c+164,"Core regfile wb_rs2_hazard", false,-1);
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
        tracep->declBit(c+1418,"Core execute clock", false,-1);
        tracep->declBit(c+1419,"Core execute reset", false,-1);
        tracep->declBit(c+1398,"Core execute io_in_ready", false,-1);
        tracep->declBit(c+1380,"Core execute io_in_bits_valid", false,-1);
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
        tracep->declBit(c+1381,"Core execute io_in_bits_rd_en", false,-1);
        tracep->declBus(c+16,"Core execute io_in_bits_imm", false,-1, 31,0);
        tracep->declBit(c+1398,"Core execute io_out_ready", false,-1);
        tracep->declBit(c+1520,"Core execute io_out_valid", false,-1);
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
        tracep->declBit(c+1386,"Core execute io_ex_rvalid_o", false,-1);
        tracep->declBit(c+1387,"Core execute io_ex_wvalid_o", false,-1);
        tracep->declQuad(c+24,"Core execute io_ex_wdata_o", false,-1, 63,0);
        tracep->declBus(c+109,"Core execute io_ex_wsize_o", false,-1, 1,0);
        tracep->declQuad(c+114,"Core execute io_ex_mduout_o", false,-1, 63,0);
        tracep->declBit(c+116,"Core execute io_ex_mduready_o", false,-1);
        tracep->declBit(c+96,"Core execute io_ex_rd_en", false,-1);
        tracep->declBus(c+97,"Core execute io_ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+100,"Core execute io_ex_is_load", false,-1);
        tracep->declBit(c+101,"Core execute io_ex_is_mdu", false,-1);
        tracep->declBus(c+26,"Core execute io_p_npc_i", false,-1, 31,0);
        tracep->declBus(c+4,"Core execute io_jmp_packet_o_jmp_npc", false,-1, 31,0);
        tracep->declBit(c+1397,"Core execute io_jmp_packet_o_mis", false,-1);
        tracep->declQuad(c+165,"Core execute alu_io_in1", false,-1, 63,0);
        tracep->declQuad(c+167,"Core execute alu_io_in2", false,-1, 63,0);
        tracep->declBus(c+169,"Core execute alu_io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+170,"Core execute alu_io_wtype_i", false,-1);
        tracep->declQuad(c+98,"Core execute alu_io_alu_out", false,-1, 63,0);
        tracep->declBit(c+171,"Core execute alu_io_jmp", false,-1);
        tracep->declBus(c+172,"Core execute alu_io_jmp_code", false,-1, 3,0);
        tracep->declBus(c+173,"Core execute alu_io_imm", false,-1, 31,0);
        tracep->declBus(c+106,"Core execute alu_io_pc_i", false,-1, 31,0);
        tracep->declBus(c+174,"Core execute alu_io_jmp_pc", false,-1, 31,0);
        tracep->declBit(c+1418,"Core execute mdu_clock", false,-1);
        tracep->declBit(c+1419,"Core execute mdu_reset", false,-1);
        tracep->declQuad(c+165,"Core execute mdu_io_in1", false,-1, 63,0);
        tracep->declQuad(c+167,"Core execute mdu_io_in2", false,-1, 63,0);
        tracep->declQuad(c+114,"Core execute mdu_io_out", false,-1, 63,0);
        tracep->declBus(c+110,"Core execute mdu_io_mduop_i", false,-1, 3,0);
        tracep->declBit(c+1403,"Core execute mdu_io_mdu_valid", false,-1);
        tracep->declBit(c+116,"Core execute mdu_io_mdu_ready", false,-1);
        tracep->declBit(c+1404,"Core execute stall", false,-1);
        tracep->declBit(c+112,"Core execute io_is_ebreak_o_REG", false,-1);
        tracep->declBit(c+105,"Core execute ex_reg_decodeop_valid", false,-1);
        tracep->declBus(c+106,"Core execute ex_reg_decodeop_pc", false,-1, 31,0);
        tracep->declBus(c+107,"Core execute ex_reg_decodeop_inst", false,-1, 31,0);
        tracep->declBus(c+169,"Core execute ex_reg_decodeop_alu_code", false,-1, 3,0);
        tracep->declBus(c+172,"Core execute ex_reg_decodeop_jmp_code", false,-1, 3,0);
        tracep->declBus(c+108,"Core execute ex_reg_decodeop_mem_code", false,-1, 1,0);
        tracep->declBus(c+109,"Core execute ex_reg_decodeop_mem_size", false,-1, 1,0);
        tracep->declBus(c+110,"Core execute ex_reg_decodeop_mdu_code", false,-1, 3,0);
        tracep->declBit(c+170,"Core execute ex_reg_decodeop_w_type", false,-1);
        tracep->declBus(c+175,"Core execute ex_reg_decodeop_rs1_src", false,-1, 2,0);
        tracep->declBus(c+176,"Core execute ex_reg_decodeop_rs2_src", false,-1, 2,0);
        tracep->declBus(c+97,"Core execute ex_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+111,"Core execute ex_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+173,"Core execute ex_reg_decodeop_imm", false,-1, 31,0);
        tracep->declBus(c+177,"Core execute rs1_temp_hi", false,-1, 31,0);
        tracep->declBus(c+178,"Core execute rs1_temp_lo", false,-1, 31,0);
        tracep->declBus(c+179,"Core execute real_npc", false,-1, 31,0);
        tracep->declBit(c+180,"Core execute is_load", false,-1);
        tracep->declBit(c+181,"Core execute is_store", false,-1);
        tracep->declQuad(c+165,"Core execute alu io_in1", false,-1, 63,0);
        tracep->declQuad(c+167,"Core execute alu io_in2", false,-1, 63,0);
        tracep->declBus(c+169,"Core execute alu io_aluop_i", false,-1, 3,0);
        tracep->declBit(c+170,"Core execute alu io_wtype_i", false,-1);
        tracep->declQuad(c+98,"Core execute alu io_alu_out", false,-1, 63,0);
        tracep->declBit(c+171,"Core execute alu io_jmp", false,-1);
        tracep->declBus(c+172,"Core execute alu io_jmp_code", false,-1, 3,0);
        tracep->declBus(c+173,"Core execute alu io_imm", false,-1, 31,0);
        tracep->declBus(c+106,"Core execute alu io_pc_i", false,-1, 31,0);
        tracep->declBus(c+174,"Core execute alu io_jmp_pc", false,-1, 31,0);
        tracep->declBus(c+182,"Core execute alu shamt", false,-1, 5,0);
        tracep->declBus(c+183,"Core execute alu out0_lo", false,-1, 31,0);
        tracep->declQuad(c+184,"Core execute alu out0", false,-1, 63,0);
        tracep->declBus(c+186,"Core execute alu out1_lo", false,-1, 31,0);
        tracep->declBus(c+187,"Core execute alu out1_hi", false,-1, 31,0);
        tracep->declBit(c+1418,"Core execute mdu clock", false,-1);
        tracep->declBit(c+1419,"Core execute mdu reset", false,-1);
        tracep->declQuad(c+165,"Core execute mdu io_in1", false,-1, 63,0);
        tracep->declQuad(c+167,"Core execute mdu io_in2", false,-1, 63,0);
        tracep->declQuad(c+114,"Core execute mdu io_out", false,-1, 63,0);
        tracep->declBus(c+110,"Core execute mdu io_mduop_i", false,-1, 3,0);
        tracep->declBit(c+1403,"Core execute mdu io_mdu_valid", false,-1);
        tracep->declBit(c+116,"Core execute mdu io_mdu_ready", false,-1);
        tracep->declBit(c+1418,"Core execute mdu mul_clock", false,-1);
        tracep->declBit(c+1419,"Core execute mdu mul_reset", false,-1);
        tracep->declArray(c+188,"Core execute mdu mul_io_in1", false,-1, 64,0);
        tracep->declArray(c+191,"Core execute mdu mul_io_in2", false,-1, 64,0);
        tracep->declQuad(c+194,"Core execute mdu mul_io_out1", false,-1, 63,0);
        tracep->declQuad(c+196,"Core execute mdu mul_io_out2", false,-1, 63,0);
        tracep->declBit(c+198,"Core execute mdu mul_io_mul_valid", false,-1);
        tracep->declBit(c+199,"Core execute mdu mul_io_mul_ready", false,-1);
        tracep->declBit(c+1418,"Core execute mdu div_clock", false,-1);
        tracep->declBit(c+1419,"Core execute mdu div_reset", false,-1);
        tracep->declQuad(c+200,"Core execute mdu div_io_in1", false,-1, 63,0);
        tracep->declQuad(c+202,"Core execute mdu div_io_in2", false,-1, 63,0);
        tracep->declQuad(c+204,"Core execute mdu div_io_out_div", false,-1, 63,0);
        tracep->declQuad(c+206,"Core execute mdu div_io_out_rem", false,-1, 63,0);
        tracep->declBit(c+208,"Core execute mdu div_io_is_signed", false,-1);
        tracep->declBit(c+209,"Core execute mdu div_io_div_valid", false,-1);
        tracep->declBit(c+210,"Core execute mdu div_io_div_ready", false,-1);
        tracep->declBus(c+211,"Core execute mdu state", false,-1, 1,0);
        tracep->declBus(c+212,"Core execute mdu reg_mduop", false,-1, 3,0);
        tracep->declQuad(c+213,"Core execute mdu reg_x", false,-1, 63,0);
        tracep->declQuad(c+215,"Core execute mdu reg_y", false,-1, 63,0);
        tracep->declQuad(c+114,"Core execute mdu reg_out", false,-1, 63,0);
        tracep->declBit(c+116,"Core execute mdu completed", false,-1);
        tracep->declBit(c+208,"Core execute mdu is_div", false,-1);
        tracep->declBit(c+217,"Core execute mdu is_divu", false,-1);
        tracep->declBit(c+218,"Core execute mdu is_mul", false,-1);
        tracep->declBit(c+219,"Core execute mdu in1_sign", false,-1);
        tracep->declBit(c+220,"Core execute mdu in2_sign", false,-1);
        tracep->declBit(c+221,"Core execute mdu mul_high", false,-1);
        tracep->declBit(c+222,"Core execute mdu is_word", false,-1);
        tracep->declBit(c+223,"Core execute mdu want_div", false,-1);
        tracep->declBus(c+224,"Core execute mdu temp_x_lo", false,-1, 31,0);
        tracep->declBus(c+225,"Core execute mdu temp_x_hi", false,-1, 31,0);
        tracep->declQuad(c+200,"Core execute mdu temp_x", false,-1, 63,0);
        tracep->declBus(c+226,"Core execute mdu temp_y_lo", false,-1, 31,0);
        tracep->declBus(c+227,"Core execute mdu temp_y_hi", false,-1, 31,0);
        tracep->declQuad(c+202,"Core execute mdu temp_y", false,-1, 63,0);
        tracep->declBit(c+228,"Core execute mdu mul_io_in1_hi", false,-1);
        tracep->declBit(c+229,"Core execute mdu mul_io_in2_hi", false,-1);
        tracep->declBus(c+230,"Core execute mdu reg_out_lo", false,-1, 31,0);
        tracep->declBus(c+231,"Core execute mdu reg_out_hi", false,-1, 31,0);
        tracep->declQuad(c+232,"Core execute mdu reg_out_lo_1", false,-1, 63,0);
        tracep->declBus(c+234,"Core execute mdu reg_out_hi_1", false,-1, 31,0);
        tracep->declBit(c+1418,"Core execute mdu mul clock", false,-1);
        tracep->declBit(c+1419,"Core execute mdu mul reset", false,-1);
        tracep->declArray(c+188,"Core execute mdu mul io_in1", false,-1, 64,0);
        tracep->declArray(c+191,"Core execute mdu mul io_in2", false,-1, 64,0);
        tracep->declQuad(c+194,"Core execute mdu mul io_out1", false,-1, 63,0);
        tracep->declQuad(c+196,"Core execute mdu mul io_out2", false,-1, 63,0);
        tracep->declBit(c+198,"Core execute mdu mul io_mul_valid", false,-1);
        tracep->declBit(c+199,"Core execute mdu mul io_mul_ready", false,-1);
        tracep->declArray(c+235,"Core execute mdu mul booth_0_io_x", false,-1, 64,0);
        tracep->declBus(c+238,"Core execute mdu mul booth_0_io_y", false,-1, 2,0);
        tracep->declArray(c+239,"Core execute mdu mul booth_0_io_z", false,-1, 127,0);
        tracep->declBus(c+243,"Core execute mdu mul booth_0_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_1_io_x", false,-1, 64,0);
        tracep->declBus(c+244,"Core execute mdu mul booth_1_io_y", false,-1, 2,0);
        tracep->declArray(c+245,"Core execute mdu mul booth_1_io_z", false,-1, 127,0);
        tracep->declBus(c+249,"Core execute mdu mul booth_1_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_2_io_x", false,-1, 64,0);
        tracep->declBus(c+250,"Core execute mdu mul booth_2_io_y", false,-1, 2,0);
        tracep->declArray(c+251,"Core execute mdu mul booth_2_io_z", false,-1, 127,0);
        tracep->declBus(c+255,"Core execute mdu mul booth_2_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_3_io_x", false,-1, 64,0);
        tracep->declBus(c+256,"Core execute mdu mul booth_3_io_y", false,-1, 2,0);
        tracep->declArray(c+257,"Core execute mdu mul booth_3_io_z", false,-1, 127,0);
        tracep->declBus(c+261,"Core execute mdu mul booth_3_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_4_io_x", false,-1, 64,0);
        tracep->declBus(c+262,"Core execute mdu mul booth_4_io_y", false,-1, 2,0);
        tracep->declArray(c+263,"Core execute mdu mul booth_4_io_z", false,-1, 127,0);
        tracep->declBus(c+267,"Core execute mdu mul booth_4_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_5_io_x", false,-1, 64,0);
        tracep->declBus(c+268,"Core execute mdu mul booth_5_io_y", false,-1, 2,0);
        tracep->declArray(c+269,"Core execute mdu mul booth_5_io_z", false,-1, 127,0);
        tracep->declBus(c+273,"Core execute mdu mul booth_5_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_6_io_x", false,-1, 64,0);
        tracep->declBus(c+274,"Core execute mdu mul booth_6_io_y", false,-1, 2,0);
        tracep->declArray(c+275,"Core execute mdu mul booth_6_io_z", false,-1, 127,0);
        tracep->declBus(c+279,"Core execute mdu mul booth_6_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_7_io_x", false,-1, 64,0);
        tracep->declBus(c+280,"Core execute mdu mul booth_7_io_y", false,-1, 2,0);
        tracep->declArray(c+281,"Core execute mdu mul booth_7_io_z", false,-1, 127,0);
        tracep->declBus(c+285,"Core execute mdu mul booth_7_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_8_io_x", false,-1, 64,0);
        tracep->declBus(c+286,"Core execute mdu mul booth_8_io_y", false,-1, 2,0);
        tracep->declArray(c+287,"Core execute mdu mul booth_8_io_z", false,-1, 127,0);
        tracep->declBus(c+291,"Core execute mdu mul booth_8_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_9_io_x", false,-1, 64,0);
        tracep->declBus(c+292,"Core execute mdu mul booth_9_io_y", false,-1, 2,0);
        tracep->declArray(c+293,"Core execute mdu mul booth_9_io_z", false,-1, 127,0);
        tracep->declBus(c+297,"Core execute mdu mul booth_9_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_10_io_x", false,-1, 64,0);
        tracep->declBus(c+298,"Core execute mdu mul booth_10_io_y", false,-1, 2,0);
        tracep->declArray(c+299,"Core execute mdu mul booth_10_io_z", false,-1, 127,0);
        tracep->declBus(c+303,"Core execute mdu mul booth_10_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_11_io_x", false,-1, 64,0);
        tracep->declBus(c+304,"Core execute mdu mul booth_11_io_y", false,-1, 2,0);
        tracep->declArray(c+305,"Core execute mdu mul booth_11_io_z", false,-1, 127,0);
        tracep->declBus(c+309,"Core execute mdu mul booth_11_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_12_io_x", false,-1, 64,0);
        tracep->declBus(c+310,"Core execute mdu mul booth_12_io_y", false,-1, 2,0);
        tracep->declArray(c+311,"Core execute mdu mul booth_12_io_z", false,-1, 127,0);
        tracep->declBus(c+315,"Core execute mdu mul booth_12_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_13_io_x", false,-1, 64,0);
        tracep->declBus(c+316,"Core execute mdu mul booth_13_io_y", false,-1, 2,0);
        tracep->declArray(c+317,"Core execute mdu mul booth_13_io_z", false,-1, 127,0);
        tracep->declBus(c+321,"Core execute mdu mul booth_13_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_14_io_x", false,-1, 64,0);
        tracep->declBus(c+322,"Core execute mdu mul booth_14_io_y", false,-1, 2,0);
        tracep->declArray(c+323,"Core execute mdu mul booth_14_io_z", false,-1, 127,0);
        tracep->declBus(c+327,"Core execute mdu mul booth_14_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_15_io_x", false,-1, 64,0);
        tracep->declBus(c+328,"Core execute mdu mul booth_15_io_y", false,-1, 2,0);
        tracep->declArray(c+329,"Core execute mdu mul booth_15_io_z", false,-1, 127,0);
        tracep->declBus(c+333,"Core execute mdu mul booth_15_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_16_io_x", false,-1, 64,0);
        tracep->declBus(c+334,"Core execute mdu mul booth_16_io_y", false,-1, 2,0);
        tracep->declArray(c+335,"Core execute mdu mul booth_16_io_z", false,-1, 127,0);
        tracep->declBus(c+339,"Core execute mdu mul booth_16_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_17_io_x", false,-1, 64,0);
        tracep->declBus(c+340,"Core execute mdu mul booth_17_io_y", false,-1, 2,0);
        tracep->declArray(c+341,"Core execute mdu mul booth_17_io_z", false,-1, 127,0);
        tracep->declBus(c+345,"Core execute mdu mul booth_17_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_18_io_x", false,-1, 64,0);
        tracep->declBus(c+346,"Core execute mdu mul booth_18_io_y", false,-1, 2,0);
        tracep->declArray(c+347,"Core execute mdu mul booth_18_io_z", false,-1, 127,0);
        tracep->declBus(c+351,"Core execute mdu mul booth_18_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_19_io_x", false,-1, 64,0);
        tracep->declBus(c+352,"Core execute mdu mul booth_19_io_y", false,-1, 2,0);
        tracep->declArray(c+353,"Core execute mdu mul booth_19_io_z", false,-1, 127,0);
        tracep->declBus(c+357,"Core execute mdu mul booth_19_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_20_io_x", false,-1, 64,0);
        tracep->declBus(c+358,"Core execute mdu mul booth_20_io_y", false,-1, 2,0);
        tracep->declArray(c+359,"Core execute mdu mul booth_20_io_z", false,-1, 127,0);
        tracep->declBus(c+363,"Core execute mdu mul booth_20_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_21_io_x", false,-1, 64,0);
        tracep->declBus(c+364,"Core execute mdu mul booth_21_io_y", false,-1, 2,0);
        tracep->declArray(c+365,"Core execute mdu mul booth_21_io_z", false,-1, 127,0);
        tracep->declBus(c+369,"Core execute mdu mul booth_21_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_22_io_x", false,-1, 64,0);
        tracep->declBus(c+370,"Core execute mdu mul booth_22_io_y", false,-1, 2,0);
        tracep->declArray(c+371,"Core execute mdu mul booth_22_io_z", false,-1, 127,0);
        tracep->declBus(c+375,"Core execute mdu mul booth_22_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_23_io_x", false,-1, 64,0);
        tracep->declBus(c+376,"Core execute mdu mul booth_23_io_y", false,-1, 2,0);
        tracep->declArray(c+377,"Core execute mdu mul booth_23_io_z", false,-1, 127,0);
        tracep->declBus(c+381,"Core execute mdu mul booth_23_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_24_io_x", false,-1, 64,0);
        tracep->declBus(c+382,"Core execute mdu mul booth_24_io_y", false,-1, 2,0);
        tracep->declArray(c+383,"Core execute mdu mul booth_24_io_z", false,-1, 127,0);
        tracep->declBus(c+387,"Core execute mdu mul booth_24_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_25_io_x", false,-1, 64,0);
        tracep->declBus(c+388,"Core execute mdu mul booth_25_io_y", false,-1, 2,0);
        tracep->declArray(c+389,"Core execute mdu mul booth_25_io_z", false,-1, 127,0);
        tracep->declBus(c+393,"Core execute mdu mul booth_25_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_26_io_x", false,-1, 64,0);
        tracep->declBus(c+394,"Core execute mdu mul booth_26_io_y", false,-1, 2,0);
        tracep->declArray(c+395,"Core execute mdu mul booth_26_io_z", false,-1, 127,0);
        tracep->declBus(c+399,"Core execute mdu mul booth_26_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_27_io_x", false,-1, 64,0);
        tracep->declBus(c+400,"Core execute mdu mul booth_27_io_y", false,-1, 2,0);
        tracep->declArray(c+401,"Core execute mdu mul booth_27_io_z", false,-1, 127,0);
        tracep->declBus(c+405,"Core execute mdu mul booth_27_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_28_io_x", false,-1, 64,0);
        tracep->declBus(c+406,"Core execute mdu mul booth_28_io_y", false,-1, 2,0);
        tracep->declArray(c+407,"Core execute mdu mul booth_28_io_z", false,-1, 127,0);
        tracep->declBus(c+411,"Core execute mdu mul booth_28_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_29_io_x", false,-1, 64,0);
        tracep->declBus(c+412,"Core execute mdu mul booth_29_io_y", false,-1, 2,0);
        tracep->declArray(c+413,"Core execute mdu mul booth_29_io_z", false,-1, 127,0);
        tracep->declBus(c+417,"Core execute mdu mul booth_29_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_30_io_x", false,-1, 64,0);
        tracep->declBus(c+418,"Core execute mdu mul booth_30_io_y", false,-1, 2,0);
        tracep->declArray(c+419,"Core execute mdu mul booth_30_io_z", false,-1, 127,0);
        tracep->declBus(c+423,"Core execute mdu mul booth_30_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_31_io_x", false,-1, 64,0);
        tracep->declBus(c+424,"Core execute mdu mul booth_31_io_y", false,-1, 2,0);
        tracep->declArray(c+425,"Core execute mdu mul booth_31_io_z", false,-1, 127,0);
        tracep->declBus(c+429,"Core execute mdu mul booth_31_io_c", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_32_io_x", false,-1, 64,0);
        tracep->declBus(c+430,"Core execute mdu mul booth_32_io_y", false,-1, 2,0);
        tracep->declArray(c+431,"Core execute mdu mul booth_32_io_z", false,-1, 127,0);
        tracep->declBus(c+435,"Core execute mdu mul booth_32_io_c", false,-1, 1,0);
        tracep->declArray(c+436,"Core execute mdu mul csa_0_io_x", false,-1, 127,0);
        tracep->declArray(c+440,"Core execute mdu mul csa_0_io_y", false,-1, 127,0);
        tracep->declArray(c+444,"Core execute mdu mul csa_0_io_z", false,-1, 127,0);
        tracep->declArray(c+448,"Core execute mdu mul csa_0_io_s", false,-1, 127,0);
        tracep->declArray(c+452,"Core execute mdu mul csa_0_io_c", false,-1, 127,0);
        tracep->declArray(c+456,"Core execute mdu mul csa_1_io_x", false,-1, 127,0);
        tracep->declArray(c+460,"Core execute mdu mul csa_1_io_y", false,-1, 127,0);
        tracep->declArray(c+464,"Core execute mdu mul csa_1_io_z", false,-1, 127,0);
        tracep->declArray(c+468,"Core execute mdu mul csa_1_io_s", false,-1, 127,0);
        tracep->declArray(c+472,"Core execute mdu mul csa_1_io_c", false,-1, 127,0);
        tracep->declArray(c+476,"Core execute mdu mul csa_2_io_x", false,-1, 127,0);
        tracep->declArray(c+480,"Core execute mdu mul csa_2_io_y", false,-1, 127,0);
        tracep->declArray(c+484,"Core execute mdu mul csa_2_io_z", false,-1, 127,0);
        tracep->declArray(c+488,"Core execute mdu mul csa_2_io_s", false,-1, 127,0);
        tracep->declArray(c+492,"Core execute mdu mul csa_2_io_c", false,-1, 127,0);
        tracep->declArray(c+496,"Core execute mdu mul csa_3_io_x", false,-1, 127,0);
        tracep->declArray(c+500,"Core execute mdu mul csa_3_io_y", false,-1, 127,0);
        tracep->declArray(c+504,"Core execute mdu mul csa_3_io_z", false,-1, 127,0);
        tracep->declArray(c+508,"Core execute mdu mul csa_3_io_s", false,-1, 127,0);
        tracep->declArray(c+512,"Core execute mdu mul csa_3_io_c", false,-1, 127,0);
        tracep->declArray(c+516,"Core execute mdu mul csa_4_io_x", false,-1, 127,0);
        tracep->declArray(c+520,"Core execute mdu mul csa_4_io_y", false,-1, 127,0);
        tracep->declArray(c+524,"Core execute mdu mul csa_4_io_z", false,-1, 127,0);
        tracep->declArray(c+528,"Core execute mdu mul csa_4_io_s", false,-1, 127,0);
        tracep->declArray(c+532,"Core execute mdu mul csa_4_io_c", false,-1, 127,0);
        tracep->declArray(c+536,"Core execute mdu mul csa_5_io_x", false,-1, 127,0);
        tracep->declArray(c+540,"Core execute mdu mul csa_5_io_y", false,-1, 127,0);
        tracep->declArray(c+544,"Core execute mdu mul csa_5_io_z", false,-1, 127,0);
        tracep->declArray(c+548,"Core execute mdu mul csa_5_io_s", false,-1, 127,0);
        tracep->declArray(c+552,"Core execute mdu mul csa_5_io_c", false,-1, 127,0);
        tracep->declArray(c+556,"Core execute mdu mul csa_6_io_x", false,-1, 127,0);
        tracep->declArray(c+560,"Core execute mdu mul csa_6_io_y", false,-1, 127,0);
        tracep->declArray(c+564,"Core execute mdu mul csa_6_io_z", false,-1, 127,0);
        tracep->declArray(c+568,"Core execute mdu mul csa_6_io_s", false,-1, 127,0);
        tracep->declArray(c+572,"Core execute mdu mul csa_6_io_c", false,-1, 127,0);
        tracep->declArray(c+576,"Core execute mdu mul csa_7_io_x", false,-1, 127,0);
        tracep->declArray(c+580,"Core execute mdu mul csa_7_io_y", false,-1, 127,0);
        tracep->declArray(c+584,"Core execute mdu mul csa_7_io_z", false,-1, 127,0);
        tracep->declArray(c+588,"Core execute mdu mul csa_7_io_s", false,-1, 127,0);
        tracep->declArray(c+592,"Core execute mdu mul csa_7_io_c", false,-1, 127,0);
        tracep->declArray(c+596,"Core execute mdu mul csa_8_io_x", false,-1, 127,0);
        tracep->declArray(c+600,"Core execute mdu mul csa_8_io_y", false,-1, 127,0);
        tracep->declArray(c+604,"Core execute mdu mul csa_8_io_z", false,-1, 127,0);
        tracep->declArray(c+608,"Core execute mdu mul csa_8_io_s", false,-1, 127,0);
        tracep->declArray(c+612,"Core execute mdu mul csa_8_io_c", false,-1, 127,0);
        tracep->declArray(c+616,"Core execute mdu mul csa_9_io_x", false,-1, 127,0);
        tracep->declArray(c+620,"Core execute mdu mul csa_9_io_y", false,-1, 127,0);
        tracep->declArray(c+624,"Core execute mdu mul csa_9_io_z", false,-1, 127,0);
        tracep->declArray(c+628,"Core execute mdu mul csa_9_io_s", false,-1, 127,0);
        tracep->declArray(c+632,"Core execute mdu mul csa_9_io_c", false,-1, 127,0);
        tracep->declArray(c+636,"Core execute mdu mul csa_10_io_x", false,-1, 127,0);
        tracep->declArray(c+640,"Core execute mdu mul csa_10_io_y", false,-1, 127,0);
        tracep->declArray(c+644,"Core execute mdu mul csa_10_io_z", false,-1, 127,0);
        tracep->declArray(c+648,"Core execute mdu mul csa_10_io_s", false,-1, 127,0);
        tracep->declArray(c+652,"Core execute mdu mul csa_10_io_c", false,-1, 127,0);
        tracep->declArray(c+448,"Core execute mdu mul csa_11_io_x", false,-1, 127,0);
        tracep->declArray(c+452,"Core execute mdu mul csa_11_io_y", false,-1, 127,0);
        tracep->declArray(c+472,"Core execute mdu mul csa_11_io_z", false,-1, 127,0);
        tracep->declArray(c+656,"Core execute mdu mul csa_11_io_s", false,-1, 127,0);
        tracep->declArray(c+660,"Core execute mdu mul csa_11_io_c", false,-1, 127,0);
        tracep->declArray(c+468,"Core execute mdu mul csa_12_io_x", false,-1, 127,0);
        tracep->declArray(c+492,"Core execute mdu mul csa_12_io_y", false,-1, 127,0);
        tracep->declArray(c+488,"Core execute mdu mul csa_12_io_z", false,-1, 127,0);
        tracep->declArray(c+664,"Core execute mdu mul csa_12_io_s", false,-1, 127,0);
        tracep->declArray(c+668,"Core execute mdu mul csa_12_io_c", false,-1, 127,0);
        tracep->declArray(c+508,"Core execute mdu mul csa_13_io_x", false,-1, 127,0);
        tracep->declArray(c+512,"Core execute mdu mul csa_13_io_y", false,-1, 127,0);
        tracep->declArray(c+532,"Core execute mdu mul csa_13_io_z", false,-1, 127,0);
        tracep->declArray(c+672,"Core execute mdu mul csa_13_io_s", false,-1, 127,0);
        tracep->declArray(c+676,"Core execute mdu mul csa_13_io_c", false,-1, 127,0);
        tracep->declArray(c+528,"Core execute mdu mul csa_14_io_x", false,-1, 127,0);
        tracep->declArray(c+552,"Core execute mdu mul csa_14_io_y", false,-1, 127,0);
        tracep->declArray(c+548,"Core execute mdu mul csa_14_io_z", false,-1, 127,0);
        tracep->declArray(c+680,"Core execute mdu mul csa_14_io_s", false,-1, 127,0);
        tracep->declArray(c+684,"Core execute mdu mul csa_14_io_c", false,-1, 127,0);
        tracep->declArray(c+568,"Core execute mdu mul csa_15_io_x", false,-1, 127,0);
        tracep->declArray(c+572,"Core execute mdu mul csa_15_io_y", false,-1, 127,0);
        tracep->declArray(c+592,"Core execute mdu mul csa_15_io_z", false,-1, 127,0);
        tracep->declArray(c+688,"Core execute mdu mul csa_15_io_s", false,-1, 127,0);
        tracep->declArray(c+692,"Core execute mdu mul csa_15_io_c", false,-1, 127,0);
        tracep->declArray(c+588,"Core execute mdu mul csa_16_io_x", false,-1, 127,0);
        tracep->declArray(c+612,"Core execute mdu mul csa_16_io_y", false,-1, 127,0);
        tracep->declArray(c+608,"Core execute mdu mul csa_16_io_z", false,-1, 127,0);
        tracep->declArray(c+696,"Core execute mdu mul csa_16_io_s", false,-1, 127,0);
        tracep->declArray(c+700,"Core execute mdu mul csa_16_io_c", false,-1, 127,0);
        tracep->declArray(c+628,"Core execute mdu mul csa_17_io_x", false,-1, 127,0);
        tracep->declArray(c+632,"Core execute mdu mul csa_17_io_y", false,-1, 127,0);
        tracep->declArray(c+704,"Core execute mdu mul csa_17_io_z", false,-1, 127,0);
        tracep->declArray(c+708,"Core execute mdu mul csa_17_io_s", false,-1, 127,0);
        tracep->declArray(c+712,"Core execute mdu mul csa_17_io_c", false,-1, 127,0);
        tracep->declArray(c+648,"Core execute mdu mul csa_18_io_x", false,-1, 127,0);
        tracep->declArray(c+652,"Core execute mdu mul csa_18_io_y", false,-1, 127,0);
        tracep->declArray(c+656,"Core execute mdu mul csa_18_io_z", false,-1, 127,0);
        tracep->declArray(c+716,"Core execute mdu mul csa_18_io_s", false,-1, 127,0);
        tracep->declArray(c+720,"Core execute mdu mul csa_18_io_c", false,-1, 127,0);
        tracep->declArray(c+660,"Core execute mdu mul csa_19_io_x", false,-1, 127,0);
        tracep->declArray(c+664,"Core execute mdu mul csa_19_io_y", false,-1, 127,0);
        tracep->declArray(c+668,"Core execute mdu mul csa_19_io_z", false,-1, 127,0);
        tracep->declArray(c+724,"Core execute mdu mul csa_19_io_s", false,-1, 127,0);
        tracep->declArray(c+728,"Core execute mdu mul csa_19_io_c", false,-1, 127,0);
        tracep->declArray(c+672,"Core execute mdu mul csa_20_io_x", false,-1, 127,0);
        tracep->declArray(c+676,"Core execute mdu mul csa_20_io_y", false,-1, 127,0);
        tracep->declArray(c+680,"Core execute mdu mul csa_20_io_z", false,-1, 127,0);
        tracep->declArray(c+732,"Core execute mdu mul csa_20_io_s", false,-1, 127,0);
        tracep->declArray(c+736,"Core execute mdu mul csa_20_io_c", false,-1, 127,0);
        tracep->declArray(c+684,"Core execute mdu mul csa_21_io_x", false,-1, 127,0);
        tracep->declArray(c+688,"Core execute mdu mul csa_21_io_y", false,-1, 127,0);
        tracep->declArray(c+692,"Core execute mdu mul csa_21_io_z", false,-1, 127,0);
        tracep->declArray(c+740,"Core execute mdu mul csa_21_io_s", false,-1, 127,0);
        tracep->declArray(c+744,"Core execute mdu mul csa_21_io_c", false,-1, 127,0);
        tracep->declArray(c+696,"Core execute mdu mul csa_22_io_x", false,-1, 127,0);
        tracep->declArray(c+700,"Core execute mdu mul csa_22_io_y", false,-1, 127,0);
        tracep->declArray(c+708,"Core execute mdu mul csa_22_io_z", false,-1, 127,0);
        tracep->declArray(c+748,"Core execute mdu mul csa_22_io_s", false,-1, 127,0);
        tracep->declArray(c+752,"Core execute mdu mul csa_22_io_c", false,-1, 127,0);
        tracep->declArray(c+712,"Core execute mdu mul csa_23_io_x", false,-1, 127,0);
        tracep->declArray(c+716,"Core execute mdu mul csa_23_io_y", false,-1, 127,0);
        tracep->declArray(c+720,"Core execute mdu mul csa_23_io_z", false,-1, 127,0);
        tracep->declArray(c+756,"Core execute mdu mul csa_23_io_s", false,-1, 127,0);
        tracep->declArray(c+760,"Core execute mdu mul csa_23_io_c", false,-1, 127,0);
        tracep->declArray(c+724,"Core execute mdu mul csa_24_io_x", false,-1, 127,0);
        tracep->declArray(c+728,"Core execute mdu mul csa_24_io_y", false,-1, 127,0);
        tracep->declArray(c+732,"Core execute mdu mul csa_24_io_z", false,-1, 127,0);
        tracep->declArray(c+764,"Core execute mdu mul csa_24_io_s", false,-1, 127,0);
        tracep->declArray(c+768,"Core execute mdu mul csa_24_io_c", false,-1, 127,0);
        tracep->declArray(c+736,"Core execute mdu mul csa_25_io_x", false,-1, 127,0);
        tracep->declArray(c+740,"Core execute mdu mul csa_25_io_y", false,-1, 127,0);
        tracep->declArray(c+744,"Core execute mdu mul csa_25_io_z", false,-1, 127,0);
        tracep->declArray(c+772,"Core execute mdu mul csa_25_io_s", false,-1, 127,0);
        tracep->declArray(c+776,"Core execute mdu mul csa_25_io_c", false,-1, 127,0);
        tracep->declArray(c+780,"Core execute mdu mul csa_26_io_x", false,-1, 127,0);
        tracep->declArray(c+784,"Core execute mdu mul csa_26_io_y", false,-1, 127,0);
        tracep->declArray(c+788,"Core execute mdu mul csa_26_io_z", false,-1, 127,0);
        tracep->declArray(c+792,"Core execute mdu mul csa_26_io_s", false,-1, 127,0);
        tracep->declArray(c+796,"Core execute mdu mul csa_26_io_c", false,-1, 127,0);
        tracep->declArray(c+800,"Core execute mdu mul csa_27_io_x", false,-1, 127,0);
        tracep->declArray(c+804,"Core execute mdu mul csa_27_io_y", false,-1, 127,0);
        tracep->declArray(c+808,"Core execute mdu mul csa_27_io_z", false,-1, 127,0);
        tracep->declArray(c+812,"Core execute mdu mul csa_27_io_s", false,-1, 127,0);
        tracep->declArray(c+816,"Core execute mdu mul csa_27_io_c", false,-1, 127,0);
        tracep->declArray(c+820,"Core execute mdu mul csa_28_io_x", false,-1, 127,0);
        tracep->declArray(c+824,"Core execute mdu mul csa_28_io_y", false,-1, 127,0);
        tracep->declArray(c+792,"Core execute mdu mul csa_28_io_z", false,-1, 127,0);
        tracep->declArray(c+828,"Core execute mdu mul csa_28_io_s", false,-1, 127,0);
        tracep->declArray(c+832,"Core execute mdu mul csa_28_io_c", false,-1, 127,0);
        tracep->declArray(c+812,"Core execute mdu mul csa_29_io_x", false,-1, 127,0);
        tracep->declArray(c+796,"Core execute mdu mul csa_29_io_y", false,-1, 127,0);
        tracep->declArray(c+816,"Core execute mdu mul csa_29_io_z", false,-1, 127,0);
        tracep->declArray(c+836,"Core execute mdu mul csa_29_io_s", false,-1, 127,0);
        tracep->declArray(c+840,"Core execute mdu mul csa_29_io_c", false,-1, 127,0);
        tracep->declArray(c+828,"Core execute mdu mul csa_30_io_x", false,-1, 127,0);
        tracep->declArray(c+836,"Core execute mdu mul csa_30_io_y", false,-1, 127,0);
        tracep->declArray(c+832,"Core execute mdu mul csa_30_io_z", false,-1, 127,0);
        tracep->declArray(c+844,"Core execute mdu mul csa_30_io_s", false,-1, 127,0);
        tracep->declArray(c+848,"Core execute mdu mul csa_30_io_c", false,-1, 127,0);
        tracep->declArray(c+844,"Core execute mdu mul csa_31_io_x", false,-1, 127,0);
        tracep->declArray(c+848,"Core execute mdu mul csa_31_io_y", false,-1, 127,0);
        tracep->declArray(c+840,"Core execute mdu mul csa_31_io_z", false,-1, 127,0);
        tracep->declArray(c+852,"Core execute mdu mul csa_31_io_s", false,-1, 127,0);
        tracep->declArray(c+856,"Core execute mdu mul csa_31_io_c", false,-1, 127,0);
        tracep->declBus(c+860,"Core execute mdu mul state", false,-1, 1,0);
        tracep->declArray(c+235,"Core execute mdu mul reg_in1", false,-1, 64,0);
        tracep->declArray(c+861,"Core execute mdu mul reg_in2", false,-1, 66,0);
        tracep->declArray(c+436,"Core execute mdu mul pp_0", false,-1, 127,0);
        tracep->declArray(c+864,"Core execute mdu mul pp_1", false,-1, 127,0);
        tracep->declArray(c+868,"Core execute mdu mul pp_2", false,-1, 127,0);
        tracep->declArray(c+872,"Core execute mdu mul pp_3", false,-1, 127,0);
        tracep->declArray(c+876,"Core execute mdu mul pp_4", false,-1, 127,0);
        tracep->declArray(c+880,"Core execute mdu mul pp_5", false,-1, 127,0);
        tracep->declArray(c+884,"Core execute mdu mul pp_6", false,-1, 127,0);
        tracep->declArray(c+888,"Core execute mdu mul pp_7", false,-1, 127,0);
        tracep->declArray(c+892,"Core execute mdu mul pp_8", false,-1, 127,0);
        tracep->declArray(c+896,"Core execute mdu mul pp_9", false,-1, 127,0);
        tracep->declArray(c+900,"Core execute mdu mul pp_10", false,-1, 127,0);
        tracep->declArray(c+904,"Core execute mdu mul pp_11", false,-1, 127,0);
        tracep->declArray(c+908,"Core execute mdu mul pp_12", false,-1, 127,0);
        tracep->declArray(c+912,"Core execute mdu mul pp_13", false,-1, 127,0);
        tracep->declArray(c+916,"Core execute mdu mul pp_14", false,-1, 127,0);
        tracep->declArray(c+920,"Core execute mdu mul pp_15", false,-1, 127,0);
        tracep->declArray(c+924,"Core execute mdu mul pp_16", false,-1, 127,0);
        tracep->declArray(c+928,"Core execute mdu mul pp_17", false,-1, 127,0);
        tracep->declArray(c+932,"Core execute mdu mul pp_18", false,-1, 127,0);
        tracep->declArray(c+936,"Core execute mdu mul pp_19", false,-1, 127,0);
        tracep->declArray(c+940,"Core execute mdu mul pp_20", false,-1, 127,0);
        tracep->declArray(c+944,"Core execute mdu mul pp_21", false,-1, 127,0);
        tracep->declArray(c+948,"Core execute mdu mul pp_22", false,-1, 127,0);
        tracep->declArray(c+952,"Core execute mdu mul pp_23", false,-1, 127,0);
        tracep->declArray(c+956,"Core execute mdu mul pp_24", false,-1, 127,0);
        tracep->declArray(c+960,"Core execute mdu mul pp_25", false,-1, 127,0);
        tracep->declArray(c+964,"Core execute mdu mul pp_26", false,-1, 127,0);
        tracep->declArray(c+968,"Core execute mdu mul pp_27", false,-1, 127,0);
        tracep->declArray(c+972,"Core execute mdu mul pp_28", false,-1, 127,0);
        tracep->declArray(c+976,"Core execute mdu mul pp_29", false,-1, 127,0);
        tracep->declArray(c+980,"Core execute mdu mul pp_30", false,-1, 127,0);
        tracep->declArray(c+984,"Core execute mdu mul pp_31", false,-1, 127,0);
        tracep->declArray(c+988,"Core execute mdu mul pp_32", false,-1, 127,0);
        tracep->declArray(c+780,"Core execute mdu mul pp_l2_0", false,-1, 127,0);
        tracep->declArray(c+784,"Core execute mdu mul pp_l2_1", false,-1, 127,0);
        tracep->declArray(c+788,"Core execute mdu mul pp_l2_2", false,-1, 127,0);
        tracep->declArray(c+800,"Core execute mdu mul pp_l2_3", false,-1, 127,0);
        tracep->declArray(c+804,"Core execute mdu mul pp_l2_4", false,-1, 127,0);
        tracep->declArray(c+808,"Core execute mdu mul pp_l2_5", false,-1, 127,0);
        tracep->declArray(c+820,"Core execute mdu mul pp_l2_6", false,-1, 127,0);
        tracep->declArray(c+824,"Core execute mdu mul pp_l2_7", false,-1, 127,0);
        tracep->declBit(c+992,"Core execute mdu mul c_1", false,-1);
        tracep->declBit(c+993,"Core execute mdu mul c_0", false,-1);
        tracep->declBit(c+994,"Core execute mdu mul c_3", false,-1);
        tracep->declBit(c+995,"Core execute mdu mul c_2", false,-1);
        tracep->declBit(c+996,"Core execute mdu mul c_5", false,-1);
        tracep->declBit(c+997,"Core execute mdu mul c_4", false,-1);
        tracep->declBit(c+998,"Core execute mdu mul c_7", false,-1);
        tracep->declBit(c+999,"Core execute mdu mul c_6", false,-1);
        tracep->declBit(c+1000,"Core execute mdu mul c_9", false,-1);
        tracep->declBit(c+1001,"Core execute mdu mul c_8", false,-1);
        tracep->declBit(c+1002,"Core execute mdu mul c_11", false,-1);
        tracep->declBit(c+1003,"Core execute mdu mul c_10", false,-1);
        tracep->declBit(c+1004,"Core execute mdu mul c_13", false,-1);
        tracep->declBit(c+1005,"Core execute mdu mul c_12", false,-1);
        tracep->declBit(c+1006,"Core execute mdu mul c_15", false,-1);
        tracep->declBit(c+1007,"Core execute mdu mul c_14", false,-1);
        tracep->declBit(c+1008,"Core execute mdu mul c_17", false,-1);
        tracep->declBit(c+1009,"Core execute mdu mul c_16", false,-1);
        tracep->declBit(c+1010,"Core execute mdu mul c_19", false,-1);
        tracep->declBit(c+1011,"Core execute mdu mul c_18", false,-1);
        tracep->declBit(c+1012,"Core execute mdu mul c_21", false,-1);
        tracep->declBit(c+1013,"Core execute mdu mul c_20", false,-1);
        tracep->declBit(c+1014,"Core execute mdu mul c_23", false,-1);
        tracep->declBit(c+1015,"Core execute mdu mul c_22", false,-1);
        tracep->declBit(c+1016,"Core execute mdu mul c_25", false,-1);
        tracep->declBit(c+1017,"Core execute mdu mul c_24", false,-1);
        tracep->declBit(c+1018,"Core execute mdu mul c_27", false,-1);
        tracep->declBit(c+1019,"Core execute mdu mul c_26", false,-1);
        tracep->declBit(c+1020,"Core execute mdu mul c_29", false,-1);
        tracep->declBit(c+1021,"Core execute mdu mul c_28", false,-1);
        tracep->declBit(c+1022,"Core execute mdu mul c_31", false,-1);
        tracep->declBit(c+1023,"Core execute mdu mul c_30", false,-1);
        tracep->declBit(c+1024,"Core execute mdu mul c_33", false,-1);
        tracep->declBit(c+1025,"Core execute mdu mul c_32", false,-1);
        tracep->declBit(c+1026,"Core execute mdu mul c_35", false,-1);
        tracep->declBit(c+1027,"Core execute mdu mul c_34", false,-1);
        tracep->declBit(c+1028,"Core execute mdu mul c_37", false,-1);
        tracep->declBit(c+1029,"Core execute mdu mul c_36", false,-1);
        tracep->declBit(c+1030,"Core execute mdu mul c_39", false,-1);
        tracep->declBit(c+1031,"Core execute mdu mul c_38", false,-1);
        tracep->declBit(c+1032,"Core execute mdu mul c_41", false,-1);
        tracep->declBit(c+1033,"Core execute mdu mul c_40", false,-1);
        tracep->declBit(c+1034,"Core execute mdu mul c_43", false,-1);
        tracep->declBit(c+1035,"Core execute mdu mul c_42", false,-1);
        tracep->declBit(c+1036,"Core execute mdu mul c_45", false,-1);
        tracep->declBit(c+1037,"Core execute mdu mul c_44", false,-1);
        tracep->declBit(c+1038,"Core execute mdu mul c_47", false,-1);
        tracep->declBit(c+1039,"Core execute mdu mul c_46", false,-1);
        tracep->declBit(c+1040,"Core execute mdu mul c_49", false,-1);
        tracep->declBit(c+1041,"Core execute mdu mul c_48", false,-1);
        tracep->declBit(c+1042,"Core execute mdu mul c_51", false,-1);
        tracep->declBit(c+1043,"Core execute mdu mul c_50", false,-1);
        tracep->declBit(c+1044,"Core execute mdu mul c_53", false,-1);
        tracep->declBit(c+1045,"Core execute mdu mul c_52", false,-1);
        tracep->declBit(c+1046,"Core execute mdu mul c_55", false,-1);
        tracep->declBit(c+1047,"Core execute mdu mul c_54", false,-1);
        tracep->declBit(c+1048,"Core execute mdu mul c_57", false,-1);
        tracep->declBit(c+1049,"Core execute mdu mul c_56", false,-1);
        tracep->declBit(c+1050,"Core execute mdu mul c_59", false,-1);
        tracep->declBit(c+1051,"Core execute mdu mul c_58", false,-1);
        tracep->declBit(c+1052,"Core execute mdu mul c_61", false,-1);
        tracep->declBit(c+1053,"Core execute mdu mul c_60", false,-1);
        tracep->declBit(c+1054,"Core execute mdu mul c_63", false,-1);
        tracep->declBit(c+1055,"Core execute mdu mul c_62", false,-1);
        tracep->declBit(c+1056,"Core execute mdu mul c_65", false,-1);
        tracep->declBit(c+1057,"Core execute mdu mul c_64", false,-1);
        tracep->declArray(c+704,"Core execute mdu mul pp33", false,-1, 127,0);
        tracep->declArray(c+1058,"Core execute mdu mul reg_out", false,-1, 127,0);
        tracep->declArray(c+1062,"Core execute mdu mul csa_0_io_y_hi", false,-1, 125,0);
        tracep->declArray(c+1066,"Core execute mdu mul csa_0_io_z_hi", false,-1, 123,0);
        tracep->declArray(c+1070,"Core execute mdu mul csa_1_io_x_hi", false,-1, 121,0);
        tracep->declArray(c+1074,"Core execute mdu mul csa_1_io_y_hi", false,-1, 119,0);
        tracep->declArray(c+1078,"Core execute mdu mul csa_1_io_z_hi", false,-1, 117,0);
        tracep->declArray(c+1082,"Core execute mdu mul csa_2_io_x_hi", false,-1, 115,0);
        tracep->declArray(c+1086,"Core execute mdu mul csa_2_io_y_hi", false,-1, 113,0);
        tracep->declArray(c+1090,"Core execute mdu mul csa_2_io_z_hi", false,-1, 111,0);
        tracep->declArray(c+1094,"Core execute mdu mul csa_3_io_x_hi", false,-1, 109,0);
        tracep->declArray(c+1098,"Core execute mdu mul csa_3_io_y_hi", false,-1, 107,0);
        tracep->declArray(c+1102,"Core execute mdu mul csa_3_io_z_hi", false,-1, 105,0);
        tracep->declArray(c+1106,"Core execute mdu mul csa_4_io_x_hi", false,-1, 103,0);
        tracep->declArray(c+1110,"Core execute mdu mul csa_4_io_y_hi", false,-1, 101,0);
        tracep->declArray(c+1114,"Core execute mdu mul csa_4_io_z_hi", false,-1, 99,0);
        tracep->declArray(c+1118,"Core execute mdu mul csa_5_io_x_hi", false,-1, 97,0);
        tracep->declArray(c+1122,"Core execute mdu mul csa_5_io_y_hi", false,-1, 95,0);
        tracep->declArray(c+1125,"Core execute mdu mul csa_5_io_z_hi", false,-1, 93,0);
        tracep->declArray(c+1128,"Core execute mdu mul csa_6_io_x_hi", false,-1, 91,0);
        tracep->declArray(c+1131,"Core execute mdu mul csa_6_io_y_hi", false,-1, 89,0);
        tracep->declArray(c+1134,"Core execute mdu mul csa_6_io_z_hi", false,-1, 87,0);
        tracep->declArray(c+1137,"Core execute mdu mul csa_7_io_x_hi", false,-1, 85,0);
        tracep->declArray(c+1140,"Core execute mdu mul csa_7_io_y_hi", false,-1, 83,0);
        tracep->declArray(c+1143,"Core execute mdu mul csa_7_io_z_hi", false,-1, 81,0);
        tracep->declArray(c+1146,"Core execute mdu mul csa_8_io_x_hi", false,-1, 79,0);
        tracep->declArray(c+1149,"Core execute mdu mul csa_8_io_y_hi", false,-1, 77,0);
        tracep->declArray(c+1152,"Core execute mdu mul csa_8_io_z_hi", false,-1, 75,0);
        tracep->declArray(c+1155,"Core execute mdu mul csa_9_io_x_hi", false,-1, 73,0);
        tracep->declArray(c+1158,"Core execute mdu mul csa_9_io_y_hi", false,-1, 71,0);
        tracep->declArray(c+1161,"Core execute mdu mul csa_9_io_z_hi", false,-1, 69,0);
        tracep->declArray(c+1164,"Core execute mdu mul csa_10_io_x_hi", false,-1, 67,0);
        tracep->declArray(c+1167,"Core execute mdu mul csa_10_io_y_hi", false,-1, 65,0);
        tracep->declQuad(c+1170,"Core execute mdu mul csa_10_io_z_hi", false,-1, 63,0);
        tracep->declArray(c+852,"Core execute mdu mul s_l8", false,-1, 127,0);
        tracep->declArray(c+856,"Core execute mdu mul c_l8", false,-1, 127,0);
        tracep->declArray(c+1172,"Core execute mdu mul temp_out", false,-1, 127,0);
        tracep->declBit(c+1176,"Core execute mdu mul reg_in2_hi_hi", false,-1);
        tracep->declBus(c+1177,"Core execute mdu mul pp33_lo_lo_lo", false,-1, 7,0);
        tracep->declBus(c+1178,"Core execute mdu mul pp33_lo_hi_lo", false,-1, 7,0);
        tracep->declBus(c+1179,"Core execute mdu mul pp33_lo_hi", false,-1, 16,0);
        tracep->declQuad(c+1180,"Core execute mdu mul pp33_lo", false,-1, 32,0);
        tracep->declBus(c+1182,"Core execute mdu mul pp33_hi_lo_lo", false,-1, 7,0);
        tracep->declBus(c+1183,"Core execute mdu mul pp33_hi_hi_lo", false,-1, 7,0);
        tracep->declBus(c+1184,"Core execute mdu mul pp33_hi_hi", false,-1, 16,0);
        tracep->declQuad(c+1185,"Core execute mdu mul pp33_hi_1", false,-1, 32,0);
        tracep->declArray(c+756,"Core execute mdu mul s_l4_0", false,-1, 127,0);
        tracep->declArray(c+764,"Core execute mdu mul s_l4_1", false,-1, 127,0);
        tracep->declArray(c+772,"Core execute mdu mul s_l4_2", false,-1, 127,0);
        tracep->declArray(c+760,"Core execute mdu mul c_l4_0", false,-1, 127,0);
        tracep->declArray(c+768,"Core execute mdu mul c_l4_1", false,-1, 127,0);
        tracep->declArray(c+776,"Core execute mdu mul c_l4_2", false,-1, 127,0);
        tracep->declArray(c+748,"Core execute mdu mul s_l3_4", false,-1, 127,0);
        tracep->declArray(c+752,"Core execute mdu mul c_l3_4", false,-1, 127,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_0 io_x", false,-1, 64,0);
        tracep->declBus(c+238,"Core execute mdu mul booth_0 io_y", false,-1, 2,0);
        tracep->declArray(c+239,"Core execute mdu mul booth_0 io_z", false,-1, 127,0);
        tracep->declBus(c+243,"Core execute mdu mul booth_0 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_0 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_0 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_0 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_0 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_0 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_1 io_x", false,-1, 64,0);
        tracep->declBus(c+244,"Core execute mdu mul booth_1 io_y", false,-1, 2,0);
        tracep->declArray(c+245,"Core execute mdu mul booth_1 io_z", false,-1, 127,0);
        tracep->declBus(c+249,"Core execute mdu mul booth_1 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_1 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_1 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_1 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_1 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_1 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_2 io_x", false,-1, 64,0);
        tracep->declBus(c+250,"Core execute mdu mul booth_2 io_y", false,-1, 2,0);
        tracep->declArray(c+251,"Core execute mdu mul booth_2 io_z", false,-1, 127,0);
        tracep->declBus(c+255,"Core execute mdu mul booth_2 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_2 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_2 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_2 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_2 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_2 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_3 io_x", false,-1, 64,0);
        tracep->declBus(c+256,"Core execute mdu mul booth_3 io_y", false,-1, 2,0);
        tracep->declArray(c+257,"Core execute mdu mul booth_3 io_z", false,-1, 127,0);
        tracep->declBus(c+261,"Core execute mdu mul booth_3 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_3 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_3 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_3 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_3 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_3 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_4 io_x", false,-1, 64,0);
        tracep->declBus(c+262,"Core execute mdu mul booth_4 io_y", false,-1, 2,0);
        tracep->declArray(c+263,"Core execute mdu mul booth_4 io_z", false,-1, 127,0);
        tracep->declBus(c+267,"Core execute mdu mul booth_4 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_4 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_4 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_4 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_4 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_4 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_5 io_x", false,-1, 64,0);
        tracep->declBus(c+268,"Core execute mdu mul booth_5 io_y", false,-1, 2,0);
        tracep->declArray(c+269,"Core execute mdu mul booth_5 io_z", false,-1, 127,0);
        tracep->declBus(c+273,"Core execute mdu mul booth_5 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_5 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_5 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_5 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_5 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_5 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_6 io_x", false,-1, 64,0);
        tracep->declBus(c+274,"Core execute mdu mul booth_6 io_y", false,-1, 2,0);
        tracep->declArray(c+275,"Core execute mdu mul booth_6 io_z", false,-1, 127,0);
        tracep->declBus(c+279,"Core execute mdu mul booth_6 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_6 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_6 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_6 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_6 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_6 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_7 io_x", false,-1, 64,0);
        tracep->declBus(c+280,"Core execute mdu mul booth_7 io_y", false,-1, 2,0);
        tracep->declArray(c+281,"Core execute mdu mul booth_7 io_z", false,-1, 127,0);
        tracep->declBus(c+285,"Core execute mdu mul booth_7 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_7 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_7 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_7 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_7 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_7 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_8 io_x", false,-1, 64,0);
        tracep->declBus(c+286,"Core execute mdu mul booth_8 io_y", false,-1, 2,0);
        tracep->declArray(c+287,"Core execute mdu mul booth_8 io_z", false,-1, 127,0);
        tracep->declBus(c+291,"Core execute mdu mul booth_8 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_8 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_8 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_8 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_8 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_8 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_9 io_x", false,-1, 64,0);
        tracep->declBus(c+292,"Core execute mdu mul booth_9 io_y", false,-1, 2,0);
        tracep->declArray(c+293,"Core execute mdu mul booth_9 io_z", false,-1, 127,0);
        tracep->declBus(c+297,"Core execute mdu mul booth_9 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_9 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_9 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_9 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_9 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_9 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_10 io_x", false,-1, 64,0);
        tracep->declBus(c+298,"Core execute mdu mul booth_10 io_y", false,-1, 2,0);
        tracep->declArray(c+299,"Core execute mdu mul booth_10 io_z", false,-1, 127,0);
        tracep->declBus(c+303,"Core execute mdu mul booth_10 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_10 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_10 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_10 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_10 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_10 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_11 io_x", false,-1, 64,0);
        tracep->declBus(c+304,"Core execute mdu mul booth_11 io_y", false,-1, 2,0);
        tracep->declArray(c+305,"Core execute mdu mul booth_11 io_z", false,-1, 127,0);
        tracep->declBus(c+309,"Core execute mdu mul booth_11 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_11 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_11 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_11 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_11 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_11 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_12 io_x", false,-1, 64,0);
        tracep->declBus(c+310,"Core execute mdu mul booth_12 io_y", false,-1, 2,0);
        tracep->declArray(c+311,"Core execute mdu mul booth_12 io_z", false,-1, 127,0);
        tracep->declBus(c+315,"Core execute mdu mul booth_12 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_12 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_12 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_12 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_12 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_12 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_13 io_x", false,-1, 64,0);
        tracep->declBus(c+316,"Core execute mdu mul booth_13 io_y", false,-1, 2,0);
        tracep->declArray(c+317,"Core execute mdu mul booth_13 io_z", false,-1, 127,0);
        tracep->declBus(c+321,"Core execute mdu mul booth_13 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_13 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_13 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_13 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_13 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_13 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_14 io_x", false,-1, 64,0);
        tracep->declBus(c+322,"Core execute mdu mul booth_14 io_y", false,-1, 2,0);
        tracep->declArray(c+323,"Core execute mdu mul booth_14 io_z", false,-1, 127,0);
        tracep->declBus(c+327,"Core execute mdu mul booth_14 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_14 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_14 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_14 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_14 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_14 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_15 io_x", false,-1, 64,0);
        tracep->declBus(c+328,"Core execute mdu mul booth_15 io_y", false,-1, 2,0);
        tracep->declArray(c+329,"Core execute mdu mul booth_15 io_z", false,-1, 127,0);
        tracep->declBus(c+333,"Core execute mdu mul booth_15 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_15 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_15 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_15 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_15 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_15 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_16 io_x", false,-1, 64,0);
        tracep->declBus(c+334,"Core execute mdu mul booth_16 io_y", false,-1, 2,0);
        tracep->declArray(c+335,"Core execute mdu mul booth_16 io_z", false,-1, 127,0);
        tracep->declBus(c+339,"Core execute mdu mul booth_16 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_16 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_16 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_16 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_16 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_16 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_17 io_x", false,-1, 64,0);
        tracep->declBus(c+340,"Core execute mdu mul booth_17 io_y", false,-1, 2,0);
        tracep->declArray(c+341,"Core execute mdu mul booth_17 io_z", false,-1, 127,0);
        tracep->declBus(c+345,"Core execute mdu mul booth_17 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_17 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_17 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_17 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_17 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_17 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_18 io_x", false,-1, 64,0);
        tracep->declBus(c+346,"Core execute mdu mul booth_18 io_y", false,-1, 2,0);
        tracep->declArray(c+347,"Core execute mdu mul booth_18 io_z", false,-1, 127,0);
        tracep->declBus(c+351,"Core execute mdu mul booth_18 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_18 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_18 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_18 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_18 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_18 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_19 io_x", false,-1, 64,0);
        tracep->declBus(c+352,"Core execute mdu mul booth_19 io_y", false,-1, 2,0);
        tracep->declArray(c+353,"Core execute mdu mul booth_19 io_z", false,-1, 127,0);
        tracep->declBus(c+357,"Core execute mdu mul booth_19 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_19 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_19 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_19 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_19 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_19 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_20 io_x", false,-1, 64,0);
        tracep->declBus(c+358,"Core execute mdu mul booth_20 io_y", false,-1, 2,0);
        tracep->declArray(c+359,"Core execute mdu mul booth_20 io_z", false,-1, 127,0);
        tracep->declBus(c+363,"Core execute mdu mul booth_20 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_20 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_20 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_20 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_20 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_20 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_21 io_x", false,-1, 64,0);
        tracep->declBus(c+364,"Core execute mdu mul booth_21 io_y", false,-1, 2,0);
        tracep->declArray(c+365,"Core execute mdu mul booth_21 io_z", false,-1, 127,0);
        tracep->declBus(c+369,"Core execute mdu mul booth_21 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_21 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_21 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_21 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_21 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_21 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_22 io_x", false,-1, 64,0);
        tracep->declBus(c+370,"Core execute mdu mul booth_22 io_y", false,-1, 2,0);
        tracep->declArray(c+371,"Core execute mdu mul booth_22 io_z", false,-1, 127,0);
        tracep->declBus(c+375,"Core execute mdu mul booth_22 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_22 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_22 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_22 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_22 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_22 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_23 io_x", false,-1, 64,0);
        tracep->declBus(c+376,"Core execute mdu mul booth_23 io_y", false,-1, 2,0);
        tracep->declArray(c+377,"Core execute mdu mul booth_23 io_z", false,-1, 127,0);
        tracep->declBus(c+381,"Core execute mdu mul booth_23 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_23 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_23 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_23 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_23 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_23 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_24 io_x", false,-1, 64,0);
        tracep->declBus(c+382,"Core execute mdu mul booth_24 io_y", false,-1, 2,0);
        tracep->declArray(c+383,"Core execute mdu mul booth_24 io_z", false,-1, 127,0);
        tracep->declBus(c+387,"Core execute mdu mul booth_24 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_24 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_24 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_24 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_24 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_24 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_25 io_x", false,-1, 64,0);
        tracep->declBus(c+388,"Core execute mdu mul booth_25 io_y", false,-1, 2,0);
        tracep->declArray(c+389,"Core execute mdu mul booth_25 io_z", false,-1, 127,0);
        tracep->declBus(c+393,"Core execute mdu mul booth_25 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_25 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_25 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_25 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_25 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_25 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_26 io_x", false,-1, 64,0);
        tracep->declBus(c+394,"Core execute mdu mul booth_26 io_y", false,-1, 2,0);
        tracep->declArray(c+395,"Core execute mdu mul booth_26 io_z", false,-1, 127,0);
        tracep->declBus(c+399,"Core execute mdu mul booth_26 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_26 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_26 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_26 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_26 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_26 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_27 io_x", false,-1, 64,0);
        tracep->declBus(c+400,"Core execute mdu mul booth_27 io_y", false,-1, 2,0);
        tracep->declArray(c+401,"Core execute mdu mul booth_27 io_z", false,-1, 127,0);
        tracep->declBus(c+405,"Core execute mdu mul booth_27 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_27 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_27 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_27 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_27 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_27 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_28 io_x", false,-1, 64,0);
        tracep->declBus(c+406,"Core execute mdu mul booth_28 io_y", false,-1, 2,0);
        tracep->declArray(c+407,"Core execute mdu mul booth_28 io_z", false,-1, 127,0);
        tracep->declBus(c+411,"Core execute mdu mul booth_28 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_28 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_28 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_28 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_28 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_28 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_29 io_x", false,-1, 64,0);
        tracep->declBus(c+412,"Core execute mdu mul booth_29 io_y", false,-1, 2,0);
        tracep->declArray(c+413,"Core execute mdu mul booth_29 io_z", false,-1, 127,0);
        tracep->declBus(c+417,"Core execute mdu mul booth_29 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_29 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_29 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_29 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_29 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_29 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_30 io_x", false,-1, 64,0);
        tracep->declBus(c+418,"Core execute mdu mul booth_30 io_y", false,-1, 2,0);
        tracep->declArray(c+419,"Core execute mdu mul booth_30 io_z", false,-1, 127,0);
        tracep->declBus(c+423,"Core execute mdu mul booth_30 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_30 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_30 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_30 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_30 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_30 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_31 io_x", false,-1, 64,0);
        tracep->declBus(c+424,"Core execute mdu mul booth_31 io_y", false,-1, 2,0);
        tracep->declArray(c+425,"Core execute mdu mul booth_31 io_z", false,-1, 127,0);
        tracep->declBus(c+429,"Core execute mdu mul booth_31 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_31 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_31 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_31 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_31 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_31 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+235,"Core execute mdu mul booth_32 io_x", false,-1, 64,0);
        tracep->declBus(c+430,"Core execute mdu mul booth_32 io_y", false,-1, 2,0);
        tracep->declArray(c+431,"Core execute mdu mul booth_32 io_z", false,-1, 127,0);
        tracep->declBus(c+435,"Core execute mdu mul booth_32 io_c", false,-1, 1,0);
        tracep->declArray(c+1187,"Core execute mdu mul booth_32 x_neg", false,-1, 64,0);
        tracep->declQuad(c+1190,"Core execute mdu mul booth_32 io_z_hi", false,-1, 62,0);
        tracep->declQuad(c+1192,"Core execute mdu mul booth_32 io_z_hi_hi", false,-1, 61,0);
        tracep->declQuad(c+1194,"Core execute mdu mul booth_32 io_z_hi_hi_1", false,-1, 61,0);
        tracep->declQuad(c+1196,"Core execute mdu mul booth_32 io_z_hi_4", false,-1, 62,0);
        tracep->declArray(c+436,"Core execute mdu mul csa_0 io_x", false,-1, 127,0);
        tracep->declArray(c+440,"Core execute mdu mul csa_0 io_y", false,-1, 127,0);
        tracep->declArray(c+444,"Core execute mdu mul csa_0 io_z", false,-1, 127,0);
        tracep->declArray(c+448,"Core execute mdu mul csa_0 io_s", false,-1, 127,0);
        tracep->declArray(c+452,"Core execute mdu mul csa_0 io_c", false,-1, 127,0);
        tracep->declArray(c+1198,"Core execute mdu mul csa_0 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+456,"Core execute mdu mul csa_1 io_x", false,-1, 127,0);
        tracep->declArray(c+460,"Core execute mdu mul csa_1 io_y", false,-1, 127,0);
        tracep->declArray(c+464,"Core execute mdu mul csa_1 io_z", false,-1, 127,0);
        tracep->declArray(c+468,"Core execute mdu mul csa_1 io_s", false,-1, 127,0);
        tracep->declArray(c+472,"Core execute mdu mul csa_1 io_c", false,-1, 127,0);
        tracep->declArray(c+1202,"Core execute mdu mul csa_1 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+476,"Core execute mdu mul csa_2 io_x", false,-1, 127,0);
        tracep->declArray(c+480,"Core execute mdu mul csa_2 io_y", false,-1, 127,0);
        tracep->declArray(c+484,"Core execute mdu mul csa_2 io_z", false,-1, 127,0);
        tracep->declArray(c+488,"Core execute mdu mul csa_2 io_s", false,-1, 127,0);
        tracep->declArray(c+492,"Core execute mdu mul csa_2 io_c", false,-1, 127,0);
        tracep->declArray(c+1206,"Core execute mdu mul csa_2 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+496,"Core execute mdu mul csa_3 io_x", false,-1, 127,0);
        tracep->declArray(c+500,"Core execute mdu mul csa_3 io_y", false,-1, 127,0);
        tracep->declArray(c+504,"Core execute mdu mul csa_3 io_z", false,-1, 127,0);
        tracep->declArray(c+508,"Core execute mdu mul csa_3 io_s", false,-1, 127,0);
        tracep->declArray(c+512,"Core execute mdu mul csa_3 io_c", false,-1, 127,0);
        tracep->declArray(c+1210,"Core execute mdu mul csa_3 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+516,"Core execute mdu mul csa_4 io_x", false,-1, 127,0);
        tracep->declArray(c+520,"Core execute mdu mul csa_4 io_y", false,-1, 127,0);
        tracep->declArray(c+524,"Core execute mdu mul csa_4 io_z", false,-1, 127,0);
        tracep->declArray(c+528,"Core execute mdu mul csa_4 io_s", false,-1, 127,0);
        tracep->declArray(c+532,"Core execute mdu mul csa_4 io_c", false,-1, 127,0);
        tracep->declArray(c+1214,"Core execute mdu mul csa_4 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+536,"Core execute mdu mul csa_5 io_x", false,-1, 127,0);
        tracep->declArray(c+540,"Core execute mdu mul csa_5 io_y", false,-1, 127,0);
        tracep->declArray(c+544,"Core execute mdu mul csa_5 io_z", false,-1, 127,0);
        tracep->declArray(c+548,"Core execute mdu mul csa_5 io_s", false,-1, 127,0);
        tracep->declArray(c+552,"Core execute mdu mul csa_5 io_c", false,-1, 127,0);
        tracep->declArray(c+1218,"Core execute mdu mul csa_5 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+556,"Core execute mdu mul csa_6 io_x", false,-1, 127,0);
        tracep->declArray(c+560,"Core execute mdu mul csa_6 io_y", false,-1, 127,0);
        tracep->declArray(c+564,"Core execute mdu mul csa_6 io_z", false,-1, 127,0);
        tracep->declArray(c+568,"Core execute mdu mul csa_6 io_s", false,-1, 127,0);
        tracep->declArray(c+572,"Core execute mdu mul csa_6 io_c", false,-1, 127,0);
        tracep->declArray(c+1222,"Core execute mdu mul csa_6 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+576,"Core execute mdu mul csa_7 io_x", false,-1, 127,0);
        tracep->declArray(c+580,"Core execute mdu mul csa_7 io_y", false,-1, 127,0);
        tracep->declArray(c+584,"Core execute mdu mul csa_7 io_z", false,-1, 127,0);
        tracep->declArray(c+588,"Core execute mdu mul csa_7 io_s", false,-1, 127,0);
        tracep->declArray(c+592,"Core execute mdu mul csa_7 io_c", false,-1, 127,0);
        tracep->declArray(c+1226,"Core execute mdu mul csa_7 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+596,"Core execute mdu mul csa_8 io_x", false,-1, 127,0);
        tracep->declArray(c+600,"Core execute mdu mul csa_8 io_y", false,-1, 127,0);
        tracep->declArray(c+604,"Core execute mdu mul csa_8 io_z", false,-1, 127,0);
        tracep->declArray(c+608,"Core execute mdu mul csa_8 io_s", false,-1, 127,0);
        tracep->declArray(c+612,"Core execute mdu mul csa_8 io_c", false,-1, 127,0);
        tracep->declArray(c+1230,"Core execute mdu mul csa_8 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+616,"Core execute mdu mul csa_9 io_x", false,-1, 127,0);
        tracep->declArray(c+620,"Core execute mdu mul csa_9 io_y", false,-1, 127,0);
        tracep->declArray(c+624,"Core execute mdu mul csa_9 io_z", false,-1, 127,0);
        tracep->declArray(c+628,"Core execute mdu mul csa_9 io_s", false,-1, 127,0);
        tracep->declArray(c+632,"Core execute mdu mul csa_9 io_c", false,-1, 127,0);
        tracep->declArray(c+1234,"Core execute mdu mul csa_9 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+636,"Core execute mdu mul csa_10 io_x", false,-1, 127,0);
        tracep->declArray(c+640,"Core execute mdu mul csa_10 io_y", false,-1, 127,0);
        tracep->declArray(c+644,"Core execute mdu mul csa_10 io_z", false,-1, 127,0);
        tracep->declArray(c+648,"Core execute mdu mul csa_10 io_s", false,-1, 127,0);
        tracep->declArray(c+652,"Core execute mdu mul csa_10 io_c", false,-1, 127,0);
        tracep->declArray(c+1238,"Core execute mdu mul csa_10 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+448,"Core execute mdu mul csa_11 io_x", false,-1, 127,0);
        tracep->declArray(c+452,"Core execute mdu mul csa_11 io_y", false,-1, 127,0);
        tracep->declArray(c+472,"Core execute mdu mul csa_11 io_z", false,-1, 127,0);
        tracep->declArray(c+656,"Core execute mdu mul csa_11 io_s", false,-1, 127,0);
        tracep->declArray(c+660,"Core execute mdu mul csa_11 io_c", false,-1, 127,0);
        tracep->declArray(c+1242,"Core execute mdu mul csa_11 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+468,"Core execute mdu mul csa_12 io_x", false,-1, 127,0);
        tracep->declArray(c+492,"Core execute mdu mul csa_12 io_y", false,-1, 127,0);
        tracep->declArray(c+488,"Core execute mdu mul csa_12 io_z", false,-1, 127,0);
        tracep->declArray(c+664,"Core execute mdu mul csa_12 io_s", false,-1, 127,0);
        tracep->declArray(c+668,"Core execute mdu mul csa_12 io_c", false,-1, 127,0);
        tracep->declArray(c+1246,"Core execute mdu mul csa_12 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+508,"Core execute mdu mul csa_13 io_x", false,-1, 127,0);
        tracep->declArray(c+512,"Core execute mdu mul csa_13 io_y", false,-1, 127,0);
        tracep->declArray(c+532,"Core execute mdu mul csa_13 io_z", false,-1, 127,0);
        tracep->declArray(c+672,"Core execute mdu mul csa_13 io_s", false,-1, 127,0);
        tracep->declArray(c+676,"Core execute mdu mul csa_13 io_c", false,-1, 127,0);
        tracep->declArray(c+1250,"Core execute mdu mul csa_13 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+528,"Core execute mdu mul csa_14 io_x", false,-1, 127,0);
        tracep->declArray(c+552,"Core execute mdu mul csa_14 io_y", false,-1, 127,0);
        tracep->declArray(c+548,"Core execute mdu mul csa_14 io_z", false,-1, 127,0);
        tracep->declArray(c+680,"Core execute mdu mul csa_14 io_s", false,-1, 127,0);
        tracep->declArray(c+684,"Core execute mdu mul csa_14 io_c", false,-1, 127,0);
        tracep->declArray(c+1254,"Core execute mdu mul csa_14 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+568,"Core execute mdu mul csa_15 io_x", false,-1, 127,0);
        tracep->declArray(c+572,"Core execute mdu mul csa_15 io_y", false,-1, 127,0);
        tracep->declArray(c+592,"Core execute mdu mul csa_15 io_z", false,-1, 127,0);
        tracep->declArray(c+688,"Core execute mdu mul csa_15 io_s", false,-1, 127,0);
        tracep->declArray(c+692,"Core execute mdu mul csa_15 io_c", false,-1, 127,0);
        tracep->declArray(c+1258,"Core execute mdu mul csa_15 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+588,"Core execute mdu mul csa_16 io_x", false,-1, 127,0);
        tracep->declArray(c+612,"Core execute mdu mul csa_16 io_y", false,-1, 127,0);
        tracep->declArray(c+608,"Core execute mdu mul csa_16 io_z", false,-1, 127,0);
        tracep->declArray(c+696,"Core execute mdu mul csa_16 io_s", false,-1, 127,0);
        tracep->declArray(c+700,"Core execute mdu mul csa_16 io_c", false,-1, 127,0);
        tracep->declArray(c+1262,"Core execute mdu mul csa_16 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+628,"Core execute mdu mul csa_17 io_x", false,-1, 127,0);
        tracep->declArray(c+632,"Core execute mdu mul csa_17 io_y", false,-1, 127,0);
        tracep->declArray(c+704,"Core execute mdu mul csa_17 io_z", false,-1, 127,0);
        tracep->declArray(c+708,"Core execute mdu mul csa_17 io_s", false,-1, 127,0);
        tracep->declArray(c+712,"Core execute mdu mul csa_17 io_c", false,-1, 127,0);
        tracep->declArray(c+1266,"Core execute mdu mul csa_17 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+648,"Core execute mdu mul csa_18 io_x", false,-1, 127,0);
        tracep->declArray(c+652,"Core execute mdu mul csa_18 io_y", false,-1, 127,0);
        tracep->declArray(c+656,"Core execute mdu mul csa_18 io_z", false,-1, 127,0);
        tracep->declArray(c+716,"Core execute mdu mul csa_18 io_s", false,-1, 127,0);
        tracep->declArray(c+720,"Core execute mdu mul csa_18 io_c", false,-1, 127,0);
        tracep->declArray(c+1270,"Core execute mdu mul csa_18 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+660,"Core execute mdu mul csa_19 io_x", false,-1, 127,0);
        tracep->declArray(c+664,"Core execute mdu mul csa_19 io_y", false,-1, 127,0);
        tracep->declArray(c+668,"Core execute mdu mul csa_19 io_z", false,-1, 127,0);
        tracep->declArray(c+724,"Core execute mdu mul csa_19 io_s", false,-1, 127,0);
        tracep->declArray(c+728,"Core execute mdu mul csa_19 io_c", false,-1, 127,0);
        tracep->declArray(c+1274,"Core execute mdu mul csa_19 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+672,"Core execute mdu mul csa_20 io_x", false,-1, 127,0);
        tracep->declArray(c+676,"Core execute mdu mul csa_20 io_y", false,-1, 127,0);
        tracep->declArray(c+680,"Core execute mdu mul csa_20 io_z", false,-1, 127,0);
        tracep->declArray(c+732,"Core execute mdu mul csa_20 io_s", false,-1, 127,0);
        tracep->declArray(c+736,"Core execute mdu mul csa_20 io_c", false,-1, 127,0);
        tracep->declArray(c+1278,"Core execute mdu mul csa_20 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+684,"Core execute mdu mul csa_21 io_x", false,-1, 127,0);
        tracep->declArray(c+688,"Core execute mdu mul csa_21 io_y", false,-1, 127,0);
        tracep->declArray(c+692,"Core execute mdu mul csa_21 io_z", false,-1, 127,0);
        tracep->declArray(c+740,"Core execute mdu mul csa_21 io_s", false,-1, 127,0);
        tracep->declArray(c+744,"Core execute mdu mul csa_21 io_c", false,-1, 127,0);
        tracep->declArray(c+1282,"Core execute mdu mul csa_21 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+696,"Core execute mdu mul csa_22 io_x", false,-1, 127,0);
        tracep->declArray(c+700,"Core execute mdu mul csa_22 io_y", false,-1, 127,0);
        tracep->declArray(c+708,"Core execute mdu mul csa_22 io_z", false,-1, 127,0);
        tracep->declArray(c+748,"Core execute mdu mul csa_22 io_s", false,-1, 127,0);
        tracep->declArray(c+752,"Core execute mdu mul csa_22 io_c", false,-1, 127,0);
        tracep->declArray(c+1286,"Core execute mdu mul csa_22 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+712,"Core execute mdu mul csa_23 io_x", false,-1, 127,0);
        tracep->declArray(c+716,"Core execute mdu mul csa_23 io_y", false,-1, 127,0);
        tracep->declArray(c+720,"Core execute mdu mul csa_23 io_z", false,-1, 127,0);
        tracep->declArray(c+756,"Core execute mdu mul csa_23 io_s", false,-1, 127,0);
        tracep->declArray(c+760,"Core execute mdu mul csa_23 io_c", false,-1, 127,0);
        tracep->declArray(c+1290,"Core execute mdu mul csa_23 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+724,"Core execute mdu mul csa_24 io_x", false,-1, 127,0);
        tracep->declArray(c+728,"Core execute mdu mul csa_24 io_y", false,-1, 127,0);
        tracep->declArray(c+732,"Core execute mdu mul csa_24 io_z", false,-1, 127,0);
        tracep->declArray(c+764,"Core execute mdu mul csa_24 io_s", false,-1, 127,0);
        tracep->declArray(c+768,"Core execute mdu mul csa_24 io_c", false,-1, 127,0);
        tracep->declArray(c+1294,"Core execute mdu mul csa_24 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+736,"Core execute mdu mul csa_25 io_x", false,-1, 127,0);
        tracep->declArray(c+740,"Core execute mdu mul csa_25 io_y", false,-1, 127,0);
        tracep->declArray(c+744,"Core execute mdu mul csa_25 io_z", false,-1, 127,0);
        tracep->declArray(c+772,"Core execute mdu mul csa_25 io_s", false,-1, 127,0);
        tracep->declArray(c+776,"Core execute mdu mul csa_25 io_c", false,-1, 127,0);
        tracep->declArray(c+1298,"Core execute mdu mul csa_25 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+780,"Core execute mdu mul csa_26 io_x", false,-1, 127,0);
        tracep->declArray(c+784,"Core execute mdu mul csa_26 io_y", false,-1, 127,0);
        tracep->declArray(c+788,"Core execute mdu mul csa_26 io_z", false,-1, 127,0);
        tracep->declArray(c+792,"Core execute mdu mul csa_26 io_s", false,-1, 127,0);
        tracep->declArray(c+796,"Core execute mdu mul csa_26 io_c", false,-1, 127,0);
        tracep->declArray(c+1302,"Core execute mdu mul csa_26 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+800,"Core execute mdu mul csa_27 io_x", false,-1, 127,0);
        tracep->declArray(c+804,"Core execute mdu mul csa_27 io_y", false,-1, 127,0);
        tracep->declArray(c+808,"Core execute mdu mul csa_27 io_z", false,-1, 127,0);
        tracep->declArray(c+812,"Core execute mdu mul csa_27 io_s", false,-1, 127,0);
        tracep->declArray(c+816,"Core execute mdu mul csa_27 io_c", false,-1, 127,0);
        tracep->declArray(c+1306,"Core execute mdu mul csa_27 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+820,"Core execute mdu mul csa_28 io_x", false,-1, 127,0);
        tracep->declArray(c+824,"Core execute mdu mul csa_28 io_y", false,-1, 127,0);
        tracep->declArray(c+792,"Core execute mdu mul csa_28 io_z", false,-1, 127,0);
        tracep->declArray(c+828,"Core execute mdu mul csa_28 io_s", false,-1, 127,0);
        tracep->declArray(c+832,"Core execute mdu mul csa_28 io_c", false,-1, 127,0);
        tracep->declArray(c+1310,"Core execute mdu mul csa_28 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+812,"Core execute mdu mul csa_29 io_x", false,-1, 127,0);
        tracep->declArray(c+796,"Core execute mdu mul csa_29 io_y", false,-1, 127,0);
        tracep->declArray(c+816,"Core execute mdu mul csa_29 io_z", false,-1, 127,0);
        tracep->declArray(c+836,"Core execute mdu mul csa_29 io_s", false,-1, 127,0);
        tracep->declArray(c+840,"Core execute mdu mul csa_29 io_c", false,-1, 127,0);
        tracep->declArray(c+1314,"Core execute mdu mul csa_29 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+828,"Core execute mdu mul csa_30 io_x", false,-1, 127,0);
        tracep->declArray(c+836,"Core execute mdu mul csa_30 io_y", false,-1, 127,0);
        tracep->declArray(c+832,"Core execute mdu mul csa_30 io_z", false,-1, 127,0);
        tracep->declArray(c+844,"Core execute mdu mul csa_30 io_s", false,-1, 127,0);
        tracep->declArray(c+848,"Core execute mdu mul csa_30 io_c", false,-1, 127,0);
        tracep->declArray(c+1318,"Core execute mdu mul csa_30 io_c_hi", false,-1, 126,0);
        tracep->declArray(c+844,"Core execute mdu mul csa_31 io_x", false,-1, 127,0);
        tracep->declArray(c+848,"Core execute mdu mul csa_31 io_y", false,-1, 127,0);
        tracep->declArray(c+840,"Core execute mdu mul csa_31 io_z", false,-1, 127,0);
        tracep->declArray(c+852,"Core execute mdu mul csa_31 io_s", false,-1, 127,0);
        tracep->declArray(c+856,"Core execute mdu mul csa_31 io_c", false,-1, 127,0);
        tracep->declArray(c+1322,"Core execute mdu mul csa_31 io_c_hi", false,-1, 126,0);
        tracep->declBit(c+1418,"Core execute mdu div clock", false,-1);
        tracep->declBit(c+1419,"Core execute mdu div reset", false,-1);
        tracep->declQuad(c+200,"Core execute mdu div io_in1", false,-1, 63,0);
        tracep->declQuad(c+202,"Core execute mdu div io_in2", false,-1, 63,0);
        tracep->declQuad(c+204,"Core execute mdu div io_out_div", false,-1, 63,0);
        tracep->declQuad(c+206,"Core execute mdu div io_out_rem", false,-1, 63,0);
        tracep->declBit(c+208,"Core execute mdu div io_is_signed", false,-1);
        tracep->declBit(c+209,"Core execute mdu div io_div_valid", false,-1);
        tracep->declBit(c+210,"Core execute mdu div io_div_ready", false,-1);
        tracep->declBus(c+1326,"Core execute mdu div state", false,-1, 1,0);
        tracep->declArray(c+1327,"Core execute mdu div reg_in1", false,-1, 127,0);
        tracep->declArray(c+1331,"Core execute mdu div reg_in2", false,-1, 64,0);
        tracep->declQuad(c+204,"Core execute mdu div quo_out", false,-1, 63,0);
        tracep->declQuad(c+206,"Core execute mdu div rem_out", false,-1, 63,0);
        tracep->declBit(c+1334,"Core execute mdu div quo_neg", false,-1);
        tracep->declBit(c+1335,"Core execute mdu div rem_neg", false,-1);
        tracep->declArray(c+1336,"Core execute mdu div temp_minus1", false,-1, 64,0);
        tracep->declArray(c+1339,"Core execute mdu div minus_value", false,-1, 64,0);
        tracep->declBus(c+1342,"Core execute mdu div cnt", false,-1, 5,0);
        tracep->declQuad(c+1343,"Core execute mdu div in1_num", false,-1, 63,0);
        tracep->declQuad(c+1345,"Core execute mdu div in2_num", false,-1, 63,0);
        tracep->declQuad(c+1347,"Core execute mdu div quo_out_hi", false,-1, 62,0);
        tracep->declArray(c+1349,"Core execute mdu div reg_in1_hi_1", false,-1, 126,0);
        tracep->declQuad(c+1353,"Core execute mdu div reg_in1_lo", false,-1, 62,0);
        tracep->declArray(c+1355,"Core execute mdu div reg_in1_hi_2", false,-1, 126,0);
        tracep->declBit(c+1418,"Core mem clock", false,-1);
        tracep->declBit(c+1419,"Core mem reset", false,-1);
        tracep->declBit(c+1398,"Core mem io_in_ready", false,-1);
        tracep->declBit(c+105,"Core mem io_in_bits_valid", false,-1);
        tracep->declBus(c+106,"Core mem io_in_bits_pc", false,-1, 31,0);
        tracep->declBus(c+107,"Core mem io_in_bits_inst", false,-1, 31,0);
        tracep->declBus(c+108,"Core mem io_in_bits_mem_code", false,-1, 1,0);
        tracep->declBus(c+109,"Core mem io_in_bits_mem_size", false,-1, 1,0);
        tracep->declBus(c+110,"Core mem io_in_bits_mdu_code", false,-1, 3,0);
        tracep->declBus(c+97,"Core mem io_in_bits_rd_addr", false,-1, 4,0);
        tracep->declBit(c+111,"Core mem io_in_bits_rd_en", false,-1);
        tracep->declBit(c+117,"Core mem io_out_bits_valid", false,-1);
        tracep->declBus(c+118,"Core mem io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+119,"Core mem io_out_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+98,"Core mem io_mem_data_i", false,-1, 63,0);
        tracep->declBus(c+29,"Core mem io_waddr_o", false,-1, 4,0);
        tracep->declBit(c+28,"Core mem io_wen_o", false,-1);
        tracep->declQuad(c+30,"Core mem io_wdata_o", false,-1, 63,0);
        tracep->declBit(c+112,"Core mem io_is_ebreak_i", false,-1);
        tracep->declBit(c+120,"Core mem io_is_ebreak_o", false,-1);
        tracep->declBus(c+113,"Core mem io_dmem_req_bits_arwaddr", false,-1, 31,0);
        tracep->declBit(c+1388,"Core mem io_dmem_req_bits_rvalid", false,-1);
        tracep->declBit(c+1389,"Core mem io_dmem_req_bits_wvalid", false,-1);
        tracep->declQuad(c+121,"Core mem io_dmem_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+123,"Core mem io_dmem_req_bits_wmask", false,-1, 7,0);
        tracep->declQuad(c+1446,"Core mem io_dmem_resp_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+1448,"Core mem io_dmem_resp_bits_rready", false,-1);
        tracep->declBit(c+1449,"Core mem io_dmem_resp_bits_wready", false,-1);
        tracep->declBus(c+113,"Core mem io_mem_rwaddr_i", false,-1, 31,0);
        tracep->declBit(c+1386,"Core mem io_mem_rvalid_i", false,-1);
        tracep->declBit(c+1387,"Core mem io_mem_wvalid_i", false,-1);
        tracep->declQuad(c+24,"Core mem io_mem_wdata_i", false,-1, 63,0);
        tracep->declBus(c+109,"Core mem io_mem_wsize_i", false,-1, 1,0);
        tracep->declBus(c+113,"Core mem io_reg_mem_addr_i", false,-1, 31,0);
        tracep->declQuad(c+114,"Core mem io_mem_mduout_i", false,-1, 63,0);
        tracep->declBit(c+116,"Core mem io_mem_mduready_i", false,-1);
        tracep->declBit(c+103,"Core mem io_mem_rd_en", false,-1);
        tracep->declBus(c+104,"Core mem io_mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1399,"Core mem io_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+102,"Core mem io_mem_is_load", false,-1);
        tracep->declBit(c+1359,"Core mem mem_reg_decodeop_valid", false,-1);
        tracep->declBus(c+1360,"Core mem mem_reg_decodeop_pc", false,-1, 31,0);
        tracep->declBus(c+1361,"Core mem mem_reg_decodeop_inst", false,-1, 31,0);
        tracep->declBus(c+1362,"Core mem mem_reg_decodeop_mem_code", false,-1, 1,0);
        tracep->declBus(c+1363,"Core mem mem_reg_decodeop_mem_size", false,-1, 1,0);
        tracep->declBus(c+1364,"Core mem mem_reg_decodeop_mdu_code", false,-1, 3,0);
        tracep->declBus(c+104,"Core mem mem_reg_decodeop_rd_addr", false,-1, 4,0);
        tracep->declBit(c+1365,"Core mem mem_reg_decodeop_rd_en", false,-1);
        tracep->declBus(c+1366,"Core mem waddr", false,-1, 4,0);
        tracep->declBit(c+1367,"Core mem wen", false,-1);
        tracep->declQuad(c+1368,"Core mem wdata", false,-1, 63,0);
        tracep->declBus(c+1370,"Core mem reg_mem_addr", false,-1, 31,0);
        tracep->declBit(c+120,"Core mem io_is_ebreak_o_REG", false,-1);
        tracep->declBit(c+1371,"Core mem mdu_valid", false,-1);
        tracep->declBit(c+1372,"Core mem is_load", false,-1);
        tracep->declBit(c+1373,"Core mem is_store", false,-1);
        tracep->declBit(c+1405,"Core mem req_wait", false,-1);
        tracep->declBit(c+1404,"Core mem stall", false,-1);
        tracep->declBus(c+1374,"Core mem addr_offset", false,-1, 2,0);
        tracep->declBus(c+1375,"Core mem reg_addr_offset", false,-1, 2,0);
        tracep->declBus(c+1376,"Core mem mask", false,-1, 7,0);
        tracep->declBus(c+1377,"Core mem wmask", false,-1, 7,0);
        tracep->declQuad(c+1406,"Core mem ld_data_raw", false,-1, 63,0);
        tracep->declQuad(c+1408,"Core mem ld_data_hi", false,-1, 55,0);
        tracep->declBus(c+1410,"Core mem ld_data_lo", false,-1, 7,0);
        tracep->declQuad(c+1411,"Core mem ld_data_hi_1", false,-1, 47,0);
        tracep->declBus(c+1413,"Core mem ld_data_lo_1", false,-1, 15,0);
        tracep->declBus(c+1414,"Core mem ld_data_hi_2", false,-1, 31,0);
        tracep->declBus(c+1415,"Core mem ld_data_lo_2", false,-1, 31,0);
        tracep->declQuad(c+1416,"Core mem ld_data", false,-1, 63,0);
        tracep->declQuad(c+1391,"Core mem ld_data_u", false,-1, 63,0);
        tracep->declQuad(c+1393,"Core mem load_data", false,-1, 63,0);
        tracep->declBit(c+117,"Core mem io_out_bits_REG_valid", false,-1);
        tracep->declBus(c+118,"Core mem io_out_bits_REG_pc", false,-1, 31,0);
        tracep->declBus(c+119,"Core mem io_out_bits_REG_inst", false,-1, 31,0);
        tracep->declBus(c+29,"Core mem io_waddr_o_REG", false,-1, 4,0);
        tracep->declBit(c+28,"Core mem io_wen_o_REG", false,-1);
        tracep->declQuad(c+30,"Core mem io_wdata_o_REG", false,-1, 63,0);
        tracep->declBit(c+1418,"Core wb_dpi clk", false,-1);
        tracep->declBus(c+119,"Core wb_dpi inst", false,-1, 31,0);
        tracep->declBus(c+118,"Core wb_dpi pc", false,-1, 31,0);
        tracep->declBit(c+120,"Core wb_dpi ebreak", false,-1);
        tracep->declBus(c+1378,"Core wb_dpi inst1", false,-1, 31,0);
        tracep->declBus(c+1379,"Core wb_dpi pc1", false,-1, 31,0);
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
        tracep->fullIData(oldp+1,(vlSelf->Core__DOT__fetch_io_imem_resp_bits_old_pc_REG),32);
        tracep->fullIData(oldp+2,(((IData)(vlSelf->Core__DOT__fetch__DOT__use_reg_info)
                                    ? vlSelf->Core__DOT__fetch__DOT__pc_out
                                    : vlSelf->Core__DOT__fetch_io_imem_resp_bits_old_pc_REG)),32);
        tracep->fullIData(oldp+3,(vlSelf->Core__DOT__fetch__DOT__reg_pnpc),32);
        tracep->fullIData(oldp+4,(vlSelf->Core__DOT__execute_io_jmp_packet_o_jmp_npc),32);
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
                                    | ((0U != (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code)) 
                                       & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))) 
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
        tracep->fullBit(oldp+101,(((0U != (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code)) 
                                   & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
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
        tracep->fullQData(oldp+114,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out),64);
        tracep->fullBit(oldp+116,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__completed));
        tracep->fullBit(oldp+117,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_valid));
        tracep->fullIData(oldp+118,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc),32);
        tracep->fullIData(oldp+119,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_inst),32);
        tracep->fullBit(oldp+120,(vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG));
        VL_EXTEND_WQ(127,64, __Vtemp2629, vlSelf->Core__DOT__decode__DOT__rs2_reg);
        VL_SHIFTL_WWI(127,127,6, __Vtemp2630, __Vtemp2629, 
                      (0x38U & ((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out) 
                                << 3U)));
        tracep->fullQData(oldp+121,((((QData)((IData)(
                                                      __Vtemp2630[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp2630[0U])))),64);
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
        tracep->fullIData(oldp+127,(vlSelf->Core__DOT__fetch__DOT__pc_out),32);
        tracep->fullIData(oldp+128,(vlSelf->Core__DOT__fetch__DOT__inst_out),32);
        tracep->fullBit(oldp+129,(vlSelf->Core__DOT__fetch__DOT__valid_out));
        tracep->fullIData(oldp+130,(vlSelf->Core__DOT__fetch__DOT__pc),32);
        tracep->fullIData(oldp+131,((vlSelf->Core__DOT__fetch__DOT__pc 
                                     >> 2U)),30);
        tracep->fullIData(oldp+132,((0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc)),32);
        tracep->fullBit(oldp+133,(vlSelf->Core__DOT__fetch__DOT__use_reg_npc));
        tracep->fullIData(oldp+134,(vlSelf->Core__DOT__fetch__DOT__reg_npc),32);
        tracep->fullBit(oldp+135,(vlSelf->Core__DOT__fetch__DOT__use_reg_info));
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
        tracep->fullQData(oldp+165,(vlSelf->Core__DOT__execute__DOT__alu_io_in1),64);
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
        tracep->fullIData(oldp+179,(((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_jmp)
                                      ? vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc
                                      : ((IData)(4U) 
                                         + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc))),32);
        tracep->fullBit(oldp+180,((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                    | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                   & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
        tracep->fullBit(oldp+181,(((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                   & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
        tracep->fullCData(oldp+182,(vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt),6);
        tracep->fullIData(oldp+183,((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_in1)),32);
        tracep->fullQData(oldp+184,(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0),64);
        tracep->fullIData(oldp+186,((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)),32);
        tracep->fullIData(oldp+187,(((1U & (IData)(
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
        tracep->fullWData(oldp+188,(__Vtemp2635),65);
        tracep->fullWData(oldp+191,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2),65);
        tracep->fullQData(oldp+194,((((QData)((IData)(
                                                      vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U])))),64);
        tracep->fullQData(oldp+196,((((QData)((IData)(
                                                      vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[2U])))),64);
        tracep->fullBit(oldp+198,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_mul_valid));
        tracep->fullBit(oldp+199,((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state))));
        tracep->fullQData(oldp+200,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1),64);
        tracep->fullQData(oldp+202,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2),64);
        tracep->fullQData(oldp+204,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_out),64);
        tracep->fullQData(oldp+206,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_out),64);
        tracep->fullBit(oldp+208,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div));
        tracep->fullBit(oldp+209,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_div_valid));
        tracep->fullBit(oldp+210,((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state))));
        tracep->fullCData(oldp+211,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state),2);
        tracep->fullCData(oldp+212,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop),4);
        tracep->fullQData(oldp+213,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x),64);
        tracep->fullQData(oldp+215,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y),64);
        tracep->fullBit(oldp+217,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_divu));
        tracep->fullBit(oldp+218,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_mul));
        tracep->fullBit(oldp+219,(((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                     | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                    | (3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   & (IData)((vlSelf->Core__DOT__execute__DOT__alu_io_in1 
                                              >> 0x3fU)))));
        tracep->fullBit(oldp+220,((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                    | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   & (IData)((vlSelf->Core__DOT__execute__DOT__alu_io_in2 
                                              >> 0x3fU)))));
        tracep->fullBit(oldp+221,((((2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                    | (3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   | (4U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)))));
        tracep->fullBit(oldp+222,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_word));
        tracep->fullBit(oldp+223,(((((5U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                     | (6U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                    | (0xaU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                   | (0xbU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)))));
        tracep->fullIData(oldp+224,((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x)),32);
        tracep->fullIData(oldp+225,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+226,((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y)),32);
        tracep->fullIData(oldp+227,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullBit(oldp+228,((1U & (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+229,((1U & (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2 
                                                 >> 0x3fU)))));
        tracep->fullIData(oldp+230,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U]),32);
        tracep->fullIData(oldp+231,(((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U] 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullQData(oldp+232,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out_lo_1),64);
        tracep->fullIData(oldp+234,(((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out_lo_1 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullWData(oldp+235,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1),65);
        tracep->fullCData(oldp+238,((7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U])),3);
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
        tracep->fullWData(oldp+239,(__Vtemp2658),128);
        tracep->fullCData(oldp+243,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c),2);
        tracep->fullCData(oldp+244,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        tracep->fullWData(oldp+245,(__Vtemp2681),128);
        tracep->fullCData(oldp+249,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c),2);
        tracep->fullCData(oldp+250,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        tracep->fullWData(oldp+251,(__Vtemp2704),128);
        tracep->fullCData(oldp+255,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c),2);
        tracep->fullCData(oldp+256,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        tracep->fullWData(oldp+257,(__Vtemp2727),128);
        tracep->fullCData(oldp+261,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c),2);
        tracep->fullCData(oldp+262,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        tracep->fullWData(oldp+263,(__Vtemp2750),128);
        tracep->fullCData(oldp+267,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c),2);
        tracep->fullCData(oldp+268,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        tracep->fullWData(oldp+269,(__Vtemp2773),128);
        tracep->fullCData(oldp+273,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c),2);
        tracep->fullCData(oldp+274,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        tracep->fullWData(oldp+275,(__Vtemp2796),128);
        tracep->fullCData(oldp+279,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c),2);
        tracep->fullCData(oldp+280,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        tracep->fullWData(oldp+281,(__Vtemp2819),128);
        tracep->fullCData(oldp+285,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c),2);
        tracep->fullCData(oldp+286,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        tracep->fullWData(oldp+287,(__Vtemp2842),128);
        tracep->fullCData(oldp+291,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c),2);
        tracep->fullCData(oldp+292,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        tracep->fullWData(oldp+293,(__Vtemp2865),128);
        tracep->fullCData(oldp+297,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c),2);
        tracep->fullCData(oldp+298,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        tracep->fullWData(oldp+299,(__Vtemp2888),128);
        tracep->fullCData(oldp+303,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c),2);
        tracep->fullCData(oldp+304,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        tracep->fullWData(oldp+305,(__Vtemp2911),128);
        tracep->fullCData(oldp+309,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c),2);
        tracep->fullCData(oldp+310,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        tracep->fullWData(oldp+311,(__Vtemp2934),128);
        tracep->fullCData(oldp+315,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c),2);
        tracep->fullCData(oldp+316,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        tracep->fullWData(oldp+317,(__Vtemp2957),128);
        tracep->fullCData(oldp+321,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c),2);
        tracep->fullCData(oldp+322,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
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
        tracep->fullWData(oldp+323,(__Vtemp2980),128);
        tracep->fullCData(oldp+327,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c),2);
        tracep->fullCData(oldp+328,((7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        tracep->fullWData(oldp+329,(__Vtemp3003),128);
        tracep->fullCData(oldp+333,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c),2);
        tracep->fullCData(oldp+334,((7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U])),3);
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
        tracep->fullWData(oldp+335,(__Vtemp3026),128);
        tracep->fullCData(oldp+339,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c),2);
        tracep->fullCData(oldp+340,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        tracep->fullWData(oldp+341,(__Vtemp3049),128);
        tracep->fullCData(oldp+345,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c),2);
        tracep->fullCData(oldp+346,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        tracep->fullWData(oldp+347,(__Vtemp3072),128);
        tracep->fullCData(oldp+351,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c),2);
        tracep->fullCData(oldp+352,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        tracep->fullWData(oldp+353,(__Vtemp3095),128);
        tracep->fullCData(oldp+357,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c),2);
        tracep->fullCData(oldp+358,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        tracep->fullWData(oldp+359,(__Vtemp3118),128);
        tracep->fullCData(oldp+363,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c),2);
        tracep->fullCData(oldp+364,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        tracep->fullWData(oldp+365,(__Vtemp3141),128);
        tracep->fullCData(oldp+369,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c),2);
        tracep->fullCData(oldp+370,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        tracep->fullWData(oldp+371,(__Vtemp3164),128);
        tracep->fullCData(oldp+375,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c),2);
        tracep->fullCData(oldp+376,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        tracep->fullWData(oldp+377,(__Vtemp3187),128);
        tracep->fullCData(oldp+381,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c),2);
        tracep->fullCData(oldp+382,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        tracep->fullWData(oldp+383,(__Vtemp3210),128);
        tracep->fullCData(oldp+387,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c),2);
        tracep->fullCData(oldp+388,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        tracep->fullWData(oldp+389,(__Vtemp3233),128);
        tracep->fullCData(oldp+393,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c),2);
        tracep->fullCData(oldp+394,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        tracep->fullWData(oldp+395,(__Vtemp3256),128);
        tracep->fullCData(oldp+399,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c),2);
        tracep->fullCData(oldp+400,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        tracep->fullWData(oldp+401,(__Vtemp3279),128);
        tracep->fullCData(oldp+405,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c),2);
        tracep->fullCData(oldp+406,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        tracep->fullWData(oldp+407,(__Vtemp3302),128);
        tracep->fullCData(oldp+411,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c),2);
        tracep->fullCData(oldp+412,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        tracep->fullWData(oldp+413,(__Vtemp3325),128);
        tracep->fullCData(oldp+417,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c),2);
        tracep->fullCData(oldp+418,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
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
        tracep->fullWData(oldp+419,(__Vtemp3348),128);
        tracep->fullCData(oldp+423,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c),2);
        tracep->fullCData(oldp+424,((7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
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
        tracep->fullWData(oldp+425,(__Vtemp3371),128);
        tracep->fullCData(oldp+429,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c),2);
        tracep->fullCData(oldp+430,((7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U])),3);
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
        tracep->fullWData(oldp+431,(__Vtemp3394),128);
        tracep->fullCData(oldp+435,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c),2);
        tracep->fullWData(oldp+436,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0),128);
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
        tracep->fullWData(oldp+440,(__Vtemp3398),128);
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
        tracep->fullWData(oldp+444,(__Vtemp3402),128);
        tracep->fullWData(oldp+448,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s),128);
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
        tracep->fullWData(oldp+452,(__Vtemp3406),128);
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
        tracep->fullWData(oldp+456,(__Vtemp3410),128);
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
        tracep->fullWData(oldp+460,(__Vtemp3414),128);
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
        tracep->fullWData(oldp+464,(__Vtemp3418),128);
        tracep->fullWData(oldp+468,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s),128);
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
        tracep->fullWData(oldp+472,(__Vtemp3422),128);
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
        tracep->fullWData(oldp+476,(__Vtemp3426),128);
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
        tracep->fullWData(oldp+480,(__Vtemp3430),128);
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
        tracep->fullWData(oldp+484,(__Vtemp3434),128);
        tracep->fullWData(oldp+488,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s),128);
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
        tracep->fullWData(oldp+492,(__Vtemp3438),128);
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
        tracep->fullWData(oldp+496,(__Vtemp3442),128);
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
        tracep->fullWData(oldp+500,(__Vtemp3446),128);
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
        tracep->fullWData(oldp+504,(__Vtemp3450),128);
        tracep->fullWData(oldp+508,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s),128);
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
        tracep->fullWData(oldp+512,(__Vtemp3454),128);
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
        tracep->fullWData(oldp+516,(__Vtemp3458),128);
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
        tracep->fullWData(oldp+520,(__Vtemp3462),128);
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
        tracep->fullWData(oldp+524,(__Vtemp3466),128);
        tracep->fullWData(oldp+528,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s),128);
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
        tracep->fullWData(oldp+532,(__Vtemp3470),128);
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
        tracep->fullWData(oldp+536,(__Vtemp3474),128);
        __Vtemp3476[0U] = 0U;
        __Vtemp3476[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[0U];
        __Vtemp3476[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[1U];
        __Vtemp3476[3U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[2U];
        tracep->fullWData(oldp+540,(__Vtemp3476),128);
        __Vtemp3480[0U] = 0U;
        __Vtemp3480[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
                           << 2U);
        __Vtemp3480[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
                                         << 2U));
        __Vtemp3480[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
                            >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[2U] 
                                         << 2U));
        tracep->fullWData(oldp+544,(__Vtemp3480),128);
        tracep->fullWData(oldp+548,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s),128);
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
        tracep->fullWData(oldp+552,(__Vtemp3484),128);
        __Vtemp3488[0U] = 0U;
        __Vtemp3488[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
                           << 4U);
        __Vtemp3488[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
                                         << 4U));
        __Vtemp3488[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
                            >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[2U] 
                                         << 4U));
        tracep->fullWData(oldp+556,(__Vtemp3488),128);
        __Vtemp3492[0U] = 0U;
        __Vtemp3492[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                           << 6U);
        __Vtemp3492[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                                         << 6U));
        __Vtemp3492[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                            >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[2U] 
                                         << 6U));
        tracep->fullWData(oldp+560,(__Vtemp3492),128);
        __Vtemp3496[0U] = 0U;
        __Vtemp3496[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
                           << 8U);
        __Vtemp3496[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                                         << 8U));
        __Vtemp3496[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                            >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[2U] 
                                         << 8U));
        tracep->fullWData(oldp+564,(__Vtemp3496),128);
        tracep->fullWData(oldp+568,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s),128);
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
        tracep->fullWData(oldp+572,(__Vtemp3500),128);
        __Vtemp3504[0U] = 0U;
        __Vtemp3504[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
                           << 0xaU);
        __Vtemp3504[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
                                         << 0xaU));
        __Vtemp3504[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
                            >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[2U] 
                                         << 0xaU));
        tracep->fullWData(oldp+576,(__Vtemp3504),128);
        __Vtemp3508[0U] = 0U;
        __Vtemp3508[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                           << 0xcU);
        __Vtemp3508[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                                         << 0xcU));
        __Vtemp3508[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                            >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[2U] 
                                         << 0xcU));
        tracep->fullWData(oldp+580,(__Vtemp3508),128);
        __Vtemp3512[0U] = 0U;
        __Vtemp3512[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
                           << 0xeU);
        __Vtemp3512[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
                                         << 0xeU));
        __Vtemp3512[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
                            >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[2U] 
                                         << 0xeU));
        tracep->fullWData(oldp+584,(__Vtemp3512),128);
        tracep->fullWData(oldp+588,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s),128);
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
        tracep->fullWData(oldp+592,(__Vtemp3516),128);
        __Vtemp3520[0U] = 0U;
        __Vtemp3520[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
                           << 0x10U);
        __Vtemp3520[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
                                         << 0x10U));
        __Vtemp3520[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
                            >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[2U] 
                                         << 0x10U));
        tracep->fullWData(oldp+596,(__Vtemp3520),128);
        __Vtemp3524[0U] = 0U;
        __Vtemp3524[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                           << 0x12U);
        __Vtemp3524[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                                        << 0x12U));
        __Vtemp3524[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                            >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[2U] 
                                        << 0x12U));
        tracep->fullWData(oldp+600,(__Vtemp3524),128);
        __Vtemp3528[0U] = 0U;
        __Vtemp3528[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
                           << 0x14U);
        __Vtemp3528[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
                                        << 0x14U));
        __Vtemp3528[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
                            >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[2U] 
                                        << 0x14U));
        tracep->fullWData(oldp+604,(__Vtemp3528),128);
        tracep->fullWData(oldp+608,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s),128);
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
        tracep->fullWData(oldp+612,(__Vtemp3532),128);
        __Vtemp3536[0U] = 0U;
        __Vtemp3536[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
                           << 0x16U);
        __Vtemp3536[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
                                        << 0x16U));
        __Vtemp3536[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
                            >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[2U] 
                                        << 0x16U));
        tracep->fullWData(oldp+616,(__Vtemp3536),128);
        __Vtemp3540[0U] = 0U;
        __Vtemp3540[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                           << 0x18U);
        __Vtemp3540[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                                      << 0x18U));
        __Vtemp3540[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                            >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[2U] 
                                      << 0x18U));
        tracep->fullWData(oldp+620,(__Vtemp3540),128);
        __Vtemp3544[0U] = 0U;
        __Vtemp3544[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
                           << 0x1aU);
        __Vtemp3544[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
                                      << 0x1aU));
        __Vtemp3544[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
                            >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[2U] 
                                      << 0x1aU));
        tracep->fullWData(oldp+624,(__Vtemp3544),128);
        tracep->fullWData(oldp+628,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s),128);
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
        tracep->fullWData(oldp+632,(__Vtemp3548),128);
        __Vtemp3552[0U] = 0U;
        __Vtemp3552[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U] 
                           << 0x1cU);
        __Vtemp3552[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
                                      << 0x1cU));
        __Vtemp3552[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
                            >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[2U] 
                                      << 0x1cU));
        tracep->fullWData(oldp+636,(__Vtemp3552),128);
        __Vtemp3556[0U] = 0U;
        __Vtemp3556[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U] 
                           << 0x1eU);
        __Vtemp3556[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                                      << 0x1eU));
        __Vtemp3556[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                            >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[2U] 
                                      << 0x1eU));
        tracep->fullWData(oldp+640,(__Vtemp3556),128);
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
        tracep->fullWData(oldp+644,(__Vtemp3557),128);
        tracep->fullWData(oldp+648,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s),128);
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
        tracep->fullWData(oldp+652,(__Vtemp3561),128);
        tracep->fullWData(oldp+656,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s),128);
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
        tracep->fullWData(oldp+660,(__Vtemp3565),128);
        tracep->fullWData(oldp+664,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s),128);
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
        tracep->fullWData(oldp+668,(__Vtemp3569),128);
        tracep->fullWData(oldp+672,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s),128);
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
        tracep->fullWData(oldp+676,(__Vtemp3573),128);
        tracep->fullWData(oldp+680,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s),128);
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
        tracep->fullWData(oldp+684,(__Vtemp3577),128);
        tracep->fullWData(oldp+688,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s),128);
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
        tracep->fullWData(oldp+692,(__Vtemp3581),128);
        tracep->fullWData(oldp+696,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s),128);
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
        tracep->fullWData(oldp+700,(__Vtemp3585),128);
        tracep->fullWData(oldp+704,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33),128);
        tracep->fullWData(oldp+708,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s),128);
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
        tracep->fullWData(oldp+712,(__Vtemp3589),128);
        tracep->fullWData(oldp+716,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s),128);
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
        tracep->fullWData(oldp+720,(__Vtemp3593),128);
        tracep->fullWData(oldp+724,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s),128);
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
        tracep->fullWData(oldp+728,(__Vtemp3597),128);
        tracep->fullWData(oldp+732,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s),128);
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
        tracep->fullWData(oldp+736,(__Vtemp3601),128);
        tracep->fullWData(oldp+740,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s),128);
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
        tracep->fullWData(oldp+744,(__Vtemp3605),128);
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
        tracep->fullWData(oldp+748,(__Vtemp3611),128);
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
        tracep->fullWData(oldp+752,(__Vtemp3631),128);
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
        tracep->fullWData(oldp+756,(__Vtemp3641),128);
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
        tracep->fullWData(oldp+760,(__Vtemp3665),128);
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
        tracep->fullWData(oldp+764,(__Vtemp3671),128);
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
        tracep->fullWData(oldp+768,(__Vtemp3691),128);
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
        tracep->fullWData(oldp+772,(__Vtemp3701),128);
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
        tracep->fullWData(oldp+776,(__Vtemp3725),128);
        tracep->fullWData(oldp+780,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0),128);
        tracep->fullWData(oldp+784,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1),128);
        tracep->fullWData(oldp+788,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2),128);
        tracep->fullWData(oldp+792,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s),128);
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
        tracep->fullWData(oldp+796,(__Vtemp3729),128);
        tracep->fullWData(oldp+800,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3),128);
        tracep->fullWData(oldp+804,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4),128);
        tracep->fullWData(oldp+808,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5),128);
        tracep->fullWData(oldp+812,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s),128);
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
        tracep->fullWData(oldp+816,(__Vtemp3733),128);
        tracep->fullWData(oldp+820,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6),128);
        tracep->fullWData(oldp+824,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7),128);
        tracep->fullWData(oldp+828,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s),128);
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
        tracep->fullWData(oldp+832,(__Vtemp3737),128);
        tracep->fullWData(oldp+836,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s),128);
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
        tracep->fullWData(oldp+840,(__Vtemp3741),128);
        tracep->fullWData(oldp+844,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s),128);
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
        tracep->fullWData(oldp+848,(__Vtemp3745),128);
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
        tracep->fullWData(oldp+852,(__Vtemp3755),128);
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
        tracep->fullWData(oldp+856,(__Vtemp3779),128);
        tracep->fullCData(oldp+860,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state),2);
        tracep->fullWData(oldp+861,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2),67);
        tracep->fullWData(oldp+864,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1),128);
        tracep->fullWData(oldp+868,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2),128);
        tracep->fullWData(oldp+872,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3),128);
        tracep->fullWData(oldp+876,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4),128);
        tracep->fullWData(oldp+880,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5),128);
        tracep->fullWData(oldp+884,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6),128);
        tracep->fullWData(oldp+888,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7),128);
        tracep->fullWData(oldp+892,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8),128);
        tracep->fullWData(oldp+896,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9),128);
        tracep->fullWData(oldp+900,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10),128);
        tracep->fullWData(oldp+904,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11),128);
        tracep->fullWData(oldp+908,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12),128);
        tracep->fullWData(oldp+912,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13),128);
        tracep->fullWData(oldp+916,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14),128);
        tracep->fullWData(oldp+920,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15),128);
        tracep->fullWData(oldp+924,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16),128);
        tracep->fullWData(oldp+928,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17),128);
        tracep->fullWData(oldp+932,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18),128);
        tracep->fullWData(oldp+936,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19),128);
        tracep->fullWData(oldp+940,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20),128);
        tracep->fullWData(oldp+944,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21),128);
        tracep->fullWData(oldp+948,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22),128);
        tracep->fullWData(oldp+952,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23),128);
        tracep->fullWData(oldp+956,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24),128);
        tracep->fullWData(oldp+960,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25),128);
        tracep->fullWData(oldp+964,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26),128);
        tracep->fullWData(oldp+968,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27),128);
        tracep->fullWData(oldp+972,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28),128);
        tracep->fullWData(oldp+976,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29),128);
        tracep->fullWData(oldp+980,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30),128);
        tracep->fullWData(oldp+984,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31),128);
        tracep->fullWData(oldp+988,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32),128);
        tracep->fullBit(oldp+992,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+993,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c))));
        tracep->fullBit(oldp+994,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+995,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c))));
        tracep->fullBit(oldp+996,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+997,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c))));
        tracep->fullBit(oldp+998,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c) 
                                         >> 1U))));
        tracep->fullBit(oldp+999,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c))));
        tracep->fullBit(oldp+1000,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1001,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c))));
        tracep->fullBit(oldp+1002,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1003,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c))));
        tracep->fullBit(oldp+1004,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1005,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c))));
        tracep->fullBit(oldp+1006,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1007,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c))));
        tracep->fullBit(oldp+1008,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1009,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c))));
        tracep->fullBit(oldp+1010,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1011,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c))));
        tracep->fullBit(oldp+1012,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1013,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c))));
        tracep->fullBit(oldp+1014,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1015,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c))));
        tracep->fullBit(oldp+1016,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1017,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c))));
        tracep->fullBit(oldp+1018,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1019,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c))));
        tracep->fullBit(oldp+1020,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1021,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c))));
        tracep->fullBit(oldp+1022,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1023,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c))));
        tracep->fullBit(oldp+1024,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1025,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c))));
        tracep->fullBit(oldp+1026,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1027,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c))));
        tracep->fullBit(oldp+1028,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1029,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c))));
        tracep->fullBit(oldp+1030,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1031,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c))));
        tracep->fullBit(oldp+1032,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1033,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c))));
        tracep->fullBit(oldp+1034,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1035,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c))));
        tracep->fullBit(oldp+1036,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1037,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c))));
        tracep->fullBit(oldp+1038,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1039,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c))));
        tracep->fullBit(oldp+1040,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1041,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c))));
        tracep->fullBit(oldp+1042,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1043,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c))));
        tracep->fullBit(oldp+1044,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1045,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c))));
        tracep->fullBit(oldp+1046,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1047,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c))));
        tracep->fullBit(oldp+1048,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1049,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c))));
        tracep->fullBit(oldp+1050,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1051,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c))));
        tracep->fullBit(oldp+1052,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1053,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c))));
        tracep->fullBit(oldp+1054,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1055,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c))));
        tracep->fullBit(oldp+1056,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c) 
                                          >> 1U))));
        tracep->fullBit(oldp+1057,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c))));
        tracep->fullWData(oldp+1058,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out),128);
        __Vtemp3782[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U];
        __Vtemp3782[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U];
        __Vtemp3782[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U];
        __Vtemp3782[3U] = (0x3fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[3U]);
        tracep->fullWData(oldp+1062,(__Vtemp3782),126);
        __Vtemp3785[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U];
        __Vtemp3785[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U];
        __Vtemp3785[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U];
        __Vtemp3785[3U] = (0xfffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[3U]);
        tracep->fullWData(oldp+1066,(__Vtemp3785),124);
        __Vtemp3788[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U];
        __Vtemp3788[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U];
        __Vtemp3788[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U];
        __Vtemp3788[3U] = (0x3ffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[3U]);
        tracep->fullWData(oldp+1070,(__Vtemp3788),122);
        __Vtemp3791[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U];
        __Vtemp3791[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U];
        __Vtemp3791[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U];
        __Vtemp3791[3U] = (0xffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[3U]);
        tracep->fullWData(oldp+1074,(__Vtemp3791),120);
        __Vtemp3794[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U];
        __Vtemp3794[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U];
        __Vtemp3794[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U];
        __Vtemp3794[3U] = (0x3fffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[3U]);
        tracep->fullWData(oldp+1078,(__Vtemp3794),118);
        __Vtemp3797[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U];
        __Vtemp3797[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U];
        __Vtemp3797[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U];
        __Vtemp3797[3U] = (0xfffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[3U]);
        tracep->fullWData(oldp+1082,(__Vtemp3797),116);
        __Vtemp3800[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U];
        __Vtemp3800[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U];
        __Vtemp3800[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U];
        __Vtemp3800[3U] = (0x3ffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[3U]);
        tracep->fullWData(oldp+1086,(__Vtemp3800),114);
        __Vtemp3803[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U];
        __Vtemp3803[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U];
        __Vtemp3803[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U];
        __Vtemp3803[3U] = (0xffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[3U]);
        tracep->fullWData(oldp+1090,(__Vtemp3803),112);
        __Vtemp3806[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U];
        __Vtemp3806[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U];
        __Vtemp3806[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U];
        __Vtemp3806[3U] = (0x3fffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[3U]);
        tracep->fullWData(oldp+1094,(__Vtemp3806),110);
        __Vtemp3809[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U];
        __Vtemp3809[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U];
        __Vtemp3809[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U];
        __Vtemp3809[3U] = (0xfffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[3U]);
        tracep->fullWData(oldp+1098,(__Vtemp3809),108);
        __Vtemp3812[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U];
        __Vtemp3812[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U];
        __Vtemp3812[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U];
        __Vtemp3812[3U] = (0x3ffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[3U]);
        tracep->fullWData(oldp+1102,(__Vtemp3812),106);
        __Vtemp3815[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U];
        __Vtemp3815[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U];
        __Vtemp3815[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U];
        __Vtemp3815[3U] = (0xffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[3U]);
        tracep->fullWData(oldp+1106,(__Vtemp3815),104);
        __Vtemp3818[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U];
        __Vtemp3818[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U];
        __Vtemp3818[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U];
        __Vtemp3818[3U] = (0x3fU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[3U]);
        tracep->fullWData(oldp+1110,(__Vtemp3818),102);
        __Vtemp3821[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U];
        __Vtemp3821[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U];
        __Vtemp3821[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U];
        __Vtemp3821[3U] = (0xfU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[3U]);
        tracep->fullWData(oldp+1114,(__Vtemp3821),100);
        __Vtemp3824[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U];
        __Vtemp3824[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U];
        __Vtemp3824[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U];
        __Vtemp3824[3U] = (3U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[3U]);
        tracep->fullWData(oldp+1118,(__Vtemp3824),98);
        __Vtemp3825[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[0U];
        __Vtemp3825[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[1U];
        __Vtemp3825[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[2U];
        tracep->fullWData(oldp+1122,(__Vtemp3825),96);
        __Vtemp3828[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U];
        __Vtemp3828[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U];
        __Vtemp3828[2U] = (0x3fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[2U]);
        tracep->fullWData(oldp+1125,(__Vtemp3828),94);
        __Vtemp3831[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U];
        __Vtemp3831[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U];
        __Vtemp3831[2U] = (0xfffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[2U]);
        tracep->fullWData(oldp+1128,(__Vtemp3831),92);
        __Vtemp3834[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U];
        __Vtemp3834[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U];
        __Vtemp3834[2U] = (0x3ffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[2U]);
        tracep->fullWData(oldp+1131,(__Vtemp3834),90);
        __Vtemp3837[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U];
        __Vtemp3837[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U];
        __Vtemp3837[2U] = (0xffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[2U]);
        tracep->fullWData(oldp+1134,(__Vtemp3837),88);
        __Vtemp3840[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U];
        __Vtemp3840[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U];
        __Vtemp3840[2U] = (0x3fffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[2U]);
        tracep->fullWData(oldp+1137,(__Vtemp3840),86);
        __Vtemp3843[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U];
        __Vtemp3843[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U];
        __Vtemp3843[2U] = (0xfffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[2U]);
        tracep->fullWData(oldp+1140,(__Vtemp3843),84);
        __Vtemp3846[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U];
        __Vtemp3846[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U];
        __Vtemp3846[2U] = (0x3ffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[2U]);
        tracep->fullWData(oldp+1143,(__Vtemp3846),82);
        __Vtemp3849[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U];
        __Vtemp3849[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U];
        __Vtemp3849[2U] = (0xffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[2U]);
        tracep->fullWData(oldp+1146,(__Vtemp3849),80);
        __Vtemp3852[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U];
        __Vtemp3852[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U];
        __Vtemp3852[2U] = (0x3fffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[2U]);
        tracep->fullWData(oldp+1149,(__Vtemp3852),78);
        __Vtemp3855[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U];
        __Vtemp3855[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U];
        __Vtemp3855[2U] = (0xfffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[2U]);
        tracep->fullWData(oldp+1152,(__Vtemp3855),76);
        __Vtemp3858[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U];
        __Vtemp3858[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U];
        __Vtemp3858[2U] = (0x3ffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[2U]);
        tracep->fullWData(oldp+1155,(__Vtemp3858),74);
        __Vtemp3861[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U];
        __Vtemp3861[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U];
        __Vtemp3861[2U] = (0xffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[2U]);
        tracep->fullWData(oldp+1158,(__Vtemp3861),72);
        __Vtemp3864[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U];
        __Vtemp3864[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U];
        __Vtemp3864[2U] = (0x3fU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[2U]);
        tracep->fullWData(oldp+1161,(__Vtemp3864),70);
        __Vtemp3867[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U];
        __Vtemp3867[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U];
        __Vtemp3867[2U] = (0xfU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[2U]);
        tracep->fullWData(oldp+1164,(__Vtemp3867),68);
        __Vtemp3870[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U];
        __Vtemp3870[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U];
        __Vtemp3870[2U] = (3U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[2U]);
        tracep->fullWData(oldp+1167,(__Vtemp3870),66);
        tracep->fullQData(oldp+1170,((((QData)((IData)(
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
        tracep->fullWData(oldp+1172,(__Vtemp3905),128);
        tracep->fullBit(oldp+1176,((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2[2U])));
        tracep->fullCData(oldp+1177,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c) 
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
        tracep->fullCData(oldp+1178,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
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
        tracep->fullIData(oldp+1179,(((0x10000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c) 
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
        tracep->fullQData(oldp+1180,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_lo),33);
        tracep->fullCData(oldp+1182,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c) 
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
        tracep->fullCData(oldp+1183,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
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
        tracep->fullIData(oldp+1184,(((0x10000U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c) 
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
        tracep->fullQData(oldp+1185,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_hi_1),33);
        __Vtemp3908[0U] = (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]);
        __Vtemp3908[1U] = (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]);
        __Vtemp3908[2U] = (1U & (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]));
        tracep->fullWData(oldp+1187,(__Vtemp3908),65);
        tracep->fullQData(oldp+1190,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0x7fffffffffffffffULL
                                       : 0ULL)),63);
        tracep->fullQData(oldp+1192,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0x3fffffffffffffffULL
                                       : 0ULL)),62);
        tracep->fullQData(oldp+1194,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0ULL : 0x3fffffffffffffffULL)),62);
        tracep->fullQData(oldp+1196,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                       ? 0ULL : 0x7fffffffffffffffULL)),63);
        __Vtemp3911[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U];
        __Vtemp3911[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U];
        __Vtemp3911[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U];
        __Vtemp3911[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1198,(__Vtemp3911),127);
        __Vtemp3914[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U];
        __Vtemp3914[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U];
        __Vtemp3914[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U];
        __Vtemp3914[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1202,(__Vtemp3914),127);
        __Vtemp3917[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U];
        __Vtemp3917[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U];
        __Vtemp3917[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U];
        __Vtemp3917[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1206,(__Vtemp3917),127);
        __Vtemp3920[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U];
        __Vtemp3920[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U];
        __Vtemp3920[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U];
        __Vtemp3920[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1210,(__Vtemp3920),127);
        __Vtemp3923[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U];
        __Vtemp3923[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U];
        __Vtemp3923[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U];
        __Vtemp3923[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1214,(__Vtemp3923),127);
        __Vtemp3926[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U];
        __Vtemp3926[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U];
        __Vtemp3926[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U];
        __Vtemp3926[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1218,(__Vtemp3926),127);
        __Vtemp3929[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U];
        __Vtemp3929[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U];
        __Vtemp3929[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U];
        __Vtemp3929[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1222,(__Vtemp3929),127);
        __Vtemp3932[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U];
        __Vtemp3932[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U];
        __Vtemp3932[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U];
        __Vtemp3932[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1226,(__Vtemp3932),127);
        __Vtemp3935[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U];
        __Vtemp3935[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U];
        __Vtemp3935[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U];
        __Vtemp3935[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1230,(__Vtemp3935),127);
        __Vtemp3938[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U];
        __Vtemp3938[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U];
        __Vtemp3938[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U];
        __Vtemp3938[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1234,(__Vtemp3938),127);
        __Vtemp3941[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U];
        __Vtemp3941[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U];
        __Vtemp3941[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U];
        __Vtemp3941[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1238,(__Vtemp3941),127);
        __Vtemp3944[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U];
        __Vtemp3944[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U];
        __Vtemp3944[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U];
        __Vtemp3944[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1242,(__Vtemp3944),127);
        __Vtemp3947[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U];
        __Vtemp3947[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U];
        __Vtemp3947[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U];
        __Vtemp3947[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1246,(__Vtemp3947),127);
        __Vtemp3950[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U];
        __Vtemp3950[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U];
        __Vtemp3950[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U];
        __Vtemp3950[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1250,(__Vtemp3950),127);
        __Vtemp3953[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U];
        __Vtemp3953[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U];
        __Vtemp3953[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U];
        __Vtemp3953[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1254,(__Vtemp3953),127);
        __Vtemp3956[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U];
        __Vtemp3956[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U];
        __Vtemp3956[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U];
        __Vtemp3956[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1258,(__Vtemp3956),127);
        __Vtemp3959[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U];
        __Vtemp3959[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U];
        __Vtemp3959[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U];
        __Vtemp3959[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1262,(__Vtemp3959),127);
        __Vtemp3962[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U];
        __Vtemp3962[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U];
        __Vtemp3962[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U];
        __Vtemp3962[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1266,(__Vtemp3962),127);
        __Vtemp3965[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U];
        __Vtemp3965[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U];
        __Vtemp3965[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U];
        __Vtemp3965[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1270,(__Vtemp3965),127);
        __Vtemp3968[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U];
        __Vtemp3968[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U];
        __Vtemp3968[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U];
        __Vtemp3968[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1274,(__Vtemp3968),127);
        __Vtemp3971[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U];
        __Vtemp3971[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U];
        __Vtemp3971[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U];
        __Vtemp3971[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1278,(__Vtemp3971),127);
        __Vtemp3974[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U];
        __Vtemp3974[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U];
        __Vtemp3974[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U];
        __Vtemp3974[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1282,(__Vtemp3974),127);
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
        tracep->fullWData(oldp+1286,(__Vtemp3993),127);
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
        tracep->fullWData(oldp+1290,(__Vtemp4016),127);
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
        tracep->fullWData(oldp+1294,(__Vtemp4035),127);
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
        tracep->fullWData(oldp+1298,(__Vtemp4058),127);
        __Vtemp4061[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U];
        __Vtemp4061[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U];
        __Vtemp4061[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U];
        __Vtemp4061[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1302,(__Vtemp4061),127);
        __Vtemp4064[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U];
        __Vtemp4064[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U];
        __Vtemp4064[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U];
        __Vtemp4064[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1306,(__Vtemp4064),127);
        __Vtemp4067[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U];
        __Vtemp4067[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U];
        __Vtemp4067[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U];
        __Vtemp4067[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1310,(__Vtemp4067),127);
        __Vtemp4070[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U];
        __Vtemp4070[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U];
        __Vtemp4070[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U];
        __Vtemp4070[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1314,(__Vtemp4070),127);
        __Vtemp4073[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U];
        __Vtemp4073[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U];
        __Vtemp4073[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U];
        __Vtemp4073[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U]);
        tracep->fullWData(oldp+1318,(__Vtemp4073),127);
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
        tracep->fullWData(oldp+1322,(__Vtemp4096),127);
        tracep->fullCData(oldp+1326,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state),2);
        tracep->fullWData(oldp+1327,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1),128);
        tracep->fullWData(oldp+1331,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in2),65);
        tracep->fullBit(oldp+1334,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_neg));
        tracep->fullBit(oldp+1335,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_neg));
        __Vtemp4099[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U] 
                            << 1U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U] 
                                      >> 0x1fU));
        __Vtemp4099[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U] 
                            << 1U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U] 
                                      >> 0x1fU));
        __Vtemp4099[2U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U] 
                           >> 0x1fU);
        tracep->fullWData(oldp+1336,(__Vtemp4099),65);
        tracep->fullWData(oldp+1339,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value),65);
        tracep->fullCData(oldp+1342,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__cnt),6);
        tracep->fullQData(oldp+1343,(((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div)
                                       ? ((1U & (IData)(
                                                        (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1 
                                                         >> 0x3fU)))
                                           ? (1ULL 
                                              + (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1))
                                           : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1)
                                       : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1)),64);
        tracep->fullQData(oldp+1345,(((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div)
                                       ? ((1U & (IData)(
                                                        (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2 
                                                         >> 0x3fU)))
                                           ? (1ULL 
                                              + (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2))
                                           : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2)
                                       : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2)),64);
        tracep->fullQData(oldp+1347,((0x7fffffffffffffffULL 
                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_out)),63);
        __Vtemp4102[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U];
        __Vtemp4102[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U];
        __Vtemp4102[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U];
        __Vtemp4102[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U]);
        tracep->fullWData(oldp+1349,(__Vtemp4102),127);
        tracep->fullQData(oldp+1353,((0x7fffffffffffffffULL 
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
        tracep->fullWData(oldp+1355,(__Vtemp4103),127);
        tracep->fullBit(oldp+1359,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid));
        tracep->fullIData(oldp+1360,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_pc),32);
        tracep->fullIData(oldp+1361,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_inst),32);
        tracep->fullCData(oldp+1362,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code),2);
        tracep->fullCData(oldp+1363,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size),2);
        tracep->fullCData(oldp+1364,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mdu_code),4);
        tracep->fullBit(oldp+1365,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en));
        tracep->fullCData(oldp+1366,(vlSelf->Core__DOT__mem__DOT__waddr),5);
        tracep->fullBit(oldp+1367,(vlSelf->Core__DOT__mem__DOT__wen));
        tracep->fullQData(oldp+1368,(vlSelf->Core__DOT__mem__DOT__wdata),64);
        tracep->fullIData(oldp+1370,(vlSelf->Core__DOT__mem__DOT__reg_mem_addr),32);
        tracep->fullBit(oldp+1371,(vlSelf->Core__DOT__mem__DOT__mdu_valid));
        tracep->fullBit(oldp+1372,(vlSelf->Core__DOT__mem__DOT__is_load));
        tracep->fullBit(oldp+1373,((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))));
        tracep->fullCData(oldp+1374,((7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out))),3);
        tracep->fullCData(oldp+1375,((7U & vlSelf->Core__DOT__mem__DOT__reg_mem_addr)),3);
        tracep->fullCData(oldp+1376,(((7U == (7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
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
        tracep->fullCData(oldp+1377,(((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                       ? 0xffU : ((2U 
                                                   == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                   ? 0xfU
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                    ? 3U
                                                    : 1U)))),8);
        tracep->fullIData(oldp+1378,(vlSelf->Core__DOT__wb_dpi__DOT__inst1),32);
        tracep->fullIData(oldp+1379,(vlSelf->Core__DOT__wb_dpi__DOT__pc1),32);
        tracep->fullBit(oldp+1380,(((~ ((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis) 
                                        | (IData)(vlSelf->Core__DOT__decode__DOT__stall))) 
                                    & (IData)(vlSelf->Core__DOT__decode__DOT__inst_valid))));
        tracep->fullBit(oldp+1381,(((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
                                    & ((IData)(vlSelf->Core__DOT__decode__DOT__inst_valid) 
                                       & (IData)(vlSelf->Core__DOT__decode__DOT__c0_3)))));
        tracep->fullQData(oldp+1382,(((0U != (0x1fU 
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
        tracep->fullQData(oldp+1384,(((0U != (0x1fU 
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
        tracep->fullBit(oldp+1386,(((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                      | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                     & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                                    & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)))));
        tracep->fullBit(oldp+1387,((((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                     & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                                    & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)))));
        tracep->fullBit(oldp+1388,(((~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)) 
                                    & ((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                         | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                        & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                                       & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall))))));
        tracep->fullBit(oldp+1389,(((~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)) 
                                    & (((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                        & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                                       & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall))))));
        tracep->fullIData(oldp+1390,(((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)
                                       ? vlSelf->Core__DOT__execute_io_jmp_packet_o_jmp_npc
                                       : 0U)),32);
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
        tracep->fullIData(oldp+1395,(vlSelf->Core__DOT__fetch_io_imem_req_bits_araddr),32);
        tracep->fullBit(oldp+1396,((1U & (~ (IData)(vlSelf->Core__DOT__decode__DOT__stall)))));
        tracep->fullBit(oldp+1397,(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis));
        tracep->fullBit(oldp+1398,((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)))));
        tracep->fullQData(oldp+1399,(vlSelf->Core__DOT__mem_io_mem_rd_data),64);
        tracep->fullBit(oldp+1401,(vlSelf->Core__DOT__fetch__DOT__stall));
        tracep->fullBit(oldp+1402,(vlSelf->Core__DOT__decode__DOT__stall));
        tracep->fullBit(oldp+1403,(vlSelf->Core__DOT__execute__DOT__mdu_io_mdu_valid));
        tracep->fullBit(oldp+1404,(vlSelf->Core__DOT__mem__DOT__stall));
        tracep->fullBit(oldp+1405,(vlSelf->Core__DOT__mem__DOT__req_wait));
        tracep->fullQData(oldp+1406,(vlSelf->Core__DOT__mem__DOT__ld_data_raw),64);
        tracep->fullQData(oldp+1408,(((1U & (IData)(
                                                    (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                     >> 7U)))
                                       ? 0xffffffffffffffULL
                                       : 0ULL)),56);
        tracep->fullCData(oldp+1410,((0xffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),8);
        tracep->fullQData(oldp+1411,(((1U & (IData)(
                                                    (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                     >> 0xfU)))
                                       ? 0xffffffffffffULL
                                       : 0ULL)),48);
        tracep->fullSData(oldp+1413,((0xffffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),16);
        tracep->fullIData(oldp+1414,(((1U & (IData)(
                                                    (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                     >> 0x1fU)))
                                       ? 0xffffffffU
                                       : 0U)),32);
        tracep->fullIData(oldp+1415,((IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)),32);
        tracep->fullQData(oldp+1416,(vlSelf->Core__DOT__mem__DOT__ld_data),64);
        tracep->fullBit(oldp+1418,(vlSelf->clock));
        tracep->fullBit(oldp+1419,(vlSelf->reset));
        tracep->fullBit(oldp+1420,(vlSelf->io_imem_req_ready));
        tracep->fullBit(oldp+1421,(vlSelf->io_imem_req_valid));
        tracep->fullIData(oldp+1422,(vlSelf->io_imem_req_bits_raddr),32);
        tracep->fullIData(oldp+1423,(vlSelf->io_imem_req_bits_waddr),32);
        tracep->fullQData(oldp+1424,(vlSelf->io_imem_req_bits_wdata),64);
        tracep->fullBit(oldp+1426,(vlSelf->io_imem_req_bits_ren));
        tracep->fullBit(oldp+1427,(vlSelf->io_imem_req_bits_wen));
        tracep->fullCData(oldp+1428,(vlSelf->io_imem_req_bits_wmask),8);
        tracep->fullBit(oldp+1429,(vlSelf->io_imem_resp_ready));
        tracep->fullBit(oldp+1430,(vlSelf->io_imem_resp_valid));
        tracep->fullQData(oldp+1431,(vlSelf->io_imem_resp_bits_rdata),64);
        tracep->fullBit(oldp+1433,(vlSelf->io_imem_resp_bits_read_ok));
        tracep->fullBit(oldp+1434,(vlSelf->io_imem_resp_bits_write_ok));
        tracep->fullBit(oldp+1435,(vlSelf->io_dmem_req_ready));
        tracep->fullBit(oldp+1436,(vlSelf->io_dmem_req_valid));
        tracep->fullIData(oldp+1437,(vlSelf->io_dmem_req_bits_raddr),32);
        tracep->fullIData(oldp+1438,(vlSelf->io_dmem_req_bits_waddr),32);
        tracep->fullQData(oldp+1439,(vlSelf->io_dmem_req_bits_wdata),64);
        tracep->fullBit(oldp+1441,(vlSelf->io_dmem_req_bits_ren));
        tracep->fullBit(oldp+1442,(vlSelf->io_dmem_req_bits_wen));
        tracep->fullCData(oldp+1443,(vlSelf->io_dmem_req_bits_wmask),8);
        tracep->fullBit(oldp+1444,(vlSelf->io_dmem_resp_ready));
        tracep->fullBit(oldp+1445,(vlSelf->io_dmem_resp_valid));
        tracep->fullQData(oldp+1446,(vlSelf->io_dmem_resp_bits_rdata),64);
        tracep->fullBit(oldp+1448,(vlSelf->io_dmem_resp_bits_read_ok));
        tracep->fullBit(oldp+1449,(vlSelf->io_dmem_resp_bits_write_ok));
        tracep->fullIData(oldp+1450,(vlSelf->io_commit_pc),32);
        tracep->fullQData(oldp+1451,(vlSelf->io_regs_out_0),64);
        tracep->fullQData(oldp+1453,(vlSelf->io_regs_out_1),64);
        tracep->fullQData(oldp+1455,(vlSelf->io_regs_out_2),64);
        tracep->fullQData(oldp+1457,(vlSelf->io_regs_out_3),64);
        tracep->fullQData(oldp+1459,(vlSelf->io_regs_out_4),64);
        tracep->fullQData(oldp+1461,(vlSelf->io_regs_out_5),64);
        tracep->fullQData(oldp+1463,(vlSelf->io_regs_out_6),64);
        tracep->fullQData(oldp+1465,(vlSelf->io_regs_out_7),64);
        tracep->fullQData(oldp+1467,(vlSelf->io_regs_out_8),64);
        tracep->fullQData(oldp+1469,(vlSelf->io_regs_out_9),64);
        tracep->fullQData(oldp+1471,(vlSelf->io_regs_out_10),64);
        tracep->fullQData(oldp+1473,(vlSelf->io_regs_out_11),64);
        tracep->fullQData(oldp+1475,(vlSelf->io_regs_out_12),64);
        tracep->fullQData(oldp+1477,(vlSelf->io_regs_out_13),64);
        tracep->fullQData(oldp+1479,(vlSelf->io_regs_out_14),64);
        tracep->fullQData(oldp+1481,(vlSelf->io_regs_out_15),64);
        tracep->fullQData(oldp+1483,(vlSelf->io_regs_out_16),64);
        tracep->fullQData(oldp+1485,(vlSelf->io_regs_out_17),64);
        tracep->fullQData(oldp+1487,(vlSelf->io_regs_out_18),64);
        tracep->fullQData(oldp+1489,(vlSelf->io_regs_out_19),64);
        tracep->fullQData(oldp+1491,(vlSelf->io_regs_out_20),64);
        tracep->fullQData(oldp+1493,(vlSelf->io_regs_out_21),64);
        tracep->fullQData(oldp+1495,(vlSelf->io_regs_out_22),64);
        tracep->fullQData(oldp+1497,(vlSelf->io_regs_out_23),64);
        tracep->fullQData(oldp+1499,(vlSelf->io_regs_out_24),64);
        tracep->fullQData(oldp+1501,(vlSelf->io_regs_out_25),64);
        tracep->fullQData(oldp+1503,(vlSelf->io_regs_out_26),64);
        tracep->fullQData(oldp+1505,(vlSelf->io_regs_out_27),64);
        tracep->fullQData(oldp+1507,(vlSelf->io_regs_out_28),64);
        tracep->fullQData(oldp+1509,(vlSelf->io_regs_out_29),64);
        tracep->fullQData(oldp+1511,(vlSelf->io_regs_out_30),64);
        tracep->fullQData(oldp+1513,(vlSelf->io_regs_out_31),64);
        tracep->fullBit(oldp+1515,(vlSelf->io_commit));
        tracep->fullIData(oldp+1516,((IData)(vlSelf->io_imem_resp_bits_rdata)),32);
        tracep->fullIData(oldp+1517,(((IData)(vlSelf->io_imem_resp_bits_read_ok)
                                       ? ((IData)(vlSelf->Core__DOT__fetch__DOT__use_reg_info)
                                           ? vlSelf->Core__DOT__fetch__DOT__inst_out
                                           : (IData)(vlSelf->io_imem_resp_bits_rdata))
                                       : 0U)),32);
        tracep->fullBit(oldp+1518,(((IData)(vlSelf->io_imem_resp_bits_read_ok) 
                                    & ((IData)(vlSelf->Core__DOT__fetch__DOT__use_reg_info)
                                        ? (IData)(vlSelf->Core__DOT__fetch__DOT__valid_out)
                                        : (IData)(vlSelf->io_imem_resp_bits_read_ok)))));
        tracep->fullBit(oldp+1519,((1U & (~ (IData)(vlSelf->io_imem_resp_bits_read_ok)))));
        tracep->fullBit(oldp+1520,(1U));
    }
}
