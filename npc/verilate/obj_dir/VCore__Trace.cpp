// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCore__Syms.h"


void VCore___024root__traceChgSub0(VCore___024root* vlSelf, VerilatedVcd* tracep);

void VCore___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VCore___024root* const __restrict vlSelf = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VCore___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VCore___024root__traceChgSub0(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp22;
    VlWide<4>/*127:0*/ __Vtemp23;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,((0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc)),32);
            tracep->chgIData(oldp+1,(vlSelf->Core__DOT__fetch_io_imem_resp_bits_old_pc_REG),32);
            tracep->chgIData(oldp+2,(vlSelf->Core__DOT__fetch__DOT__io_out_bits_inst_REG),32);
            tracep->chgBit(oldp+3,(vlSelf->Core__DOT__fetch__DOT__io_out_bits_inst_valid_REG));
            tracep->chgBit(oldp+4,(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis));
            tracep->chgIData(oldp+5,(vlSelf->Core__DOT__fetch__DOT__io_p_npc_REG),32);
            tracep->chgIData(oldp+6,(((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_jmp)
                                       ? vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc
                                       : ((IData)(4U) 
                                          + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc))),32);
            tracep->chgBit(oldp+7,(((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
                                    & (IData)(vlSelf->Core__DOT__decode__DOT__inst_valid))));
            tracep->chgIData(oldp+8,(vlSelf->Core__DOT__decode__DOT__pc),32);
            tracep->chgIData(oldp+9,(vlSelf->Core__DOT__decode__DOT__inst),32);
            tracep->chgCData(oldp+10,(((0x37U == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                        ? 1U : ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                                 ? 1U
                                                 : 
                                                ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                                  ? 0U
                                                  : 
                                                 ((0x67U 
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
            tracep->chgCData(oldp+11,(((0x37U == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                        ? 0U : ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                                 ? 0U
                                                 : 
                                                ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                                  ? 1U
                                                  : 
                                                 ((0x67U 
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
            tracep->chgCData(oldp+12,(((0x37U == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                        ? 0U : ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                                 ? 0U
                                                 : 
                                                ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                                  ? 0U
                                                  : 
                                                 ((0x67U 
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
                                                          ? 1U
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 1U
                                                           : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_494)))))))))))))),2);
            tracep->chgCData(oldp+13,(((0x37U == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                        ? 0U : ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                                 ? 0U
                                                 : 
                                                ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                                  ? 0U
                                                  : 
                                                 ((0x67U 
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
            tracep->chgBit(oldp+14,(((0x37U != (0x7fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                     & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793))));
            tracep->chgCData(oldp+15,(((0x37U == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                        ? 3U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_865))),3);
            tracep->chgCData(oldp+16,(((0x37U == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                        ? 2U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_937))),3);
            tracep->chgCData(oldp+17,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                >> 7U))),5);
            tracep->chgBit(oldp+18,(((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
                                     & ((IData)(vlSelf->Core__DOT__decode__DOT__inst_valid) 
                                        & (IData)(vlSelf->Core__DOT__decode__DOT__c0_3)))));
            tracep->chgIData(oldp+19,(((7U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                                        ? (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU))
                                        : ((6U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                                            ? (((0x37U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793))
                                                ? (0x1fU 
                                                   & (vlSelf->Core__DOT__decode__DOT__inst 
                                                      >> 0x14U))
                                                : (0x3fU 
                                                   & (vlSelf->Core__DOT__decode__DOT__inst 
                                                      >> 0x14U)))
                                            : vlSelf->Core__DOT__decode__DOT___io_out_bits_imm_T_9))),32);
            tracep->chgBit(oldp+20,((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1))));
            tracep->chgCData(oldp+21,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                >> 0xfU))),5);
            tracep->chgBit(oldp+22,((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2))));
            tracep->chgCData(oldp+23,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                >> 0x14U))),5);
            tracep->chgBit(oldp+24,(((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
                                     & ((IData)(vlSelf->Core__DOT__decode__DOT__inst_valid) 
                                        & (IData)(vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG)))));
            tracep->chgQData(oldp+25,(vlSelf->Core__DOT__decode__DOT__io_rs1_data_o_REG),64);
            tracep->chgQData(oldp+27,(vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG),64);
            tracep->chgIData(oldp+29,(vlSelf->Core__DOT__decode__DOT__io_p_npc_o_REG),32);
            tracep->chgBit(oldp+30,(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG));
            tracep->chgCData(oldp+31,(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG),5);
            tracep->chgQData(oldp+32,(vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG),64);
            tracep->chgQData(oldp+34,(vlSelf->Core__DOT__regfile__DOT__rf_0),64);
            tracep->chgQData(oldp+36,(vlSelf->Core__DOT__regfile__DOT__rf_1),64);
            tracep->chgQData(oldp+38,(vlSelf->Core__DOT__regfile__DOT__rf_2),64);
            tracep->chgQData(oldp+40,(vlSelf->Core__DOT__regfile__DOT__rf_3),64);
            tracep->chgQData(oldp+42,(vlSelf->Core__DOT__regfile__DOT__rf_4),64);
            tracep->chgQData(oldp+44,(vlSelf->Core__DOT__regfile__DOT__rf_5),64);
            tracep->chgQData(oldp+46,(vlSelf->Core__DOT__regfile__DOT__rf_6),64);
            tracep->chgQData(oldp+48,(vlSelf->Core__DOT__regfile__DOT__rf_7),64);
            tracep->chgQData(oldp+50,(vlSelf->Core__DOT__regfile__DOT__rf_8),64);
            tracep->chgQData(oldp+52,(vlSelf->Core__DOT__regfile__DOT__rf_9),64);
            tracep->chgQData(oldp+54,(vlSelf->Core__DOT__regfile__DOT__rf_10),64);
            tracep->chgQData(oldp+56,(vlSelf->Core__DOT__regfile__DOT__rf_11),64);
            tracep->chgQData(oldp+58,(vlSelf->Core__DOT__regfile__DOT__rf_12),64);
            tracep->chgQData(oldp+60,(vlSelf->Core__DOT__regfile__DOT__rf_13),64);
            tracep->chgQData(oldp+62,(vlSelf->Core__DOT__regfile__DOT__rf_14),64);
            tracep->chgQData(oldp+64,(vlSelf->Core__DOT__regfile__DOT__rf_15),64);
            tracep->chgQData(oldp+66,(vlSelf->Core__DOT__regfile__DOT__rf_16),64);
            tracep->chgQData(oldp+68,(vlSelf->Core__DOT__regfile__DOT__rf_17),64);
            tracep->chgQData(oldp+70,(vlSelf->Core__DOT__regfile__DOT__rf_18),64);
            tracep->chgQData(oldp+72,(vlSelf->Core__DOT__regfile__DOT__rf_19),64);
            tracep->chgQData(oldp+74,(vlSelf->Core__DOT__regfile__DOT__rf_20),64);
            tracep->chgQData(oldp+76,(vlSelf->Core__DOT__regfile__DOT__rf_21),64);
            tracep->chgQData(oldp+78,(vlSelf->Core__DOT__regfile__DOT__rf_22),64);
            tracep->chgQData(oldp+80,(vlSelf->Core__DOT__regfile__DOT__rf_23),64);
            tracep->chgQData(oldp+82,(vlSelf->Core__DOT__regfile__DOT__rf_24),64);
            tracep->chgQData(oldp+84,(vlSelf->Core__DOT__regfile__DOT__rf_25),64);
            tracep->chgQData(oldp+86,(vlSelf->Core__DOT__regfile__DOT__rf_26),64);
            tracep->chgQData(oldp+88,(vlSelf->Core__DOT__regfile__DOT__rf_27),64);
            tracep->chgQData(oldp+90,(vlSelf->Core__DOT__regfile__DOT__rf_28),64);
            tracep->chgQData(oldp+92,(vlSelf->Core__DOT__regfile__DOT__rf_29),64);
            tracep->chgQData(oldp+94,(vlSelf->Core__DOT__regfile__DOT__rf_30),64);
            tracep->chgQData(oldp+96,(vlSelf->Core__DOT__regfile__DOT__rf_31),64);
            tracep->chgBit(oldp+98,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en));
            tracep->chgIData(oldp+99,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),32);
            tracep->chgQData(oldp+100,(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out),64);
            tracep->chgBit(oldp+102,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en));
            tracep->chgIData(oldp+103,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr),32);
            tracep->chgBit(oldp+104,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid));
            tracep->chgIData(oldp+105,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc),32);
            tracep->chgIData(oldp+106,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst),32);
            tracep->chgCData(oldp+107,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code),2);
            tracep->chgCData(oldp+108,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size),2);
            tracep->chgCData(oldp+109,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),5);
            tracep->chgBit(oldp+110,(vlSelf->Core__DOT__execute__DOT__io_is_ebreak_o_REG));
            tracep->chgIData(oldp+111,((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)),32);
            tracep->chgBit(oldp+112,((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                       | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                      & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
            tracep->chgBit(oldp+113,(((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                      & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
            tracep->chgBit(oldp+114,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_valid));
            tracep->chgIData(oldp+115,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc),32);
            tracep->chgIData(oldp+116,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_inst),32);
            tracep->chgBit(oldp+117,(vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG));
            VL_EXTEND_WQ(127,64, __Vtemp22, vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG);
            VL_SHIFTL_WWI(127,127,6, __Vtemp23, __Vtemp22, 
                          (0x38U & ((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out) 
                                    << 3U)));
            tracep->chgQData(oldp+118,((((QData)((IData)(
                                                         __Vtemp23[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp23[0U])))),64);
            tracep->chgCData(oldp+120,((0x7fffU & (
                                                   ((7U 
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
            tracep->chgIData(oldp+121,(vlSelf->Core__DOT__io_commit_pc_REG),32);
            tracep->chgBit(oldp+122,(vlSelf->Core__DOT__io_commit_REG));
            tracep->chgIData(oldp+123,((0x1fffffffU 
                                        & (IData)((vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                                   >> 3U)))),29);
            tracep->chgIData(oldp+124,(vlSelf->Core__DOT__fetch__DOT__pc),32);
            tracep->chgIData(oldp+125,((vlSelf->Core__DOT__fetch__DOT__pc 
                                        >> 2U)),30);
            tracep->chgIData(oldp+126,(((IData)(4U) 
                                        + (0xfffffffcU 
                                           & vlSelf->Core__DOT__fetch__DOT__pc))),32);
            tracep->chgBit(oldp+127,(vlSelf->Core__DOT__decode__DOT__inst_valid));
            tracep->chgCData(oldp+128,(vlSelf->Core__DOT__decode__DOT__c0_1),3);
            tracep->chgCData(oldp+129,(vlSelf->Core__DOT__decode__DOT__c0_2),3);
            tracep->chgBit(oldp+130,(vlSelf->Core__DOT__decode__DOT__c0_3));
            tracep->chgCData(oldp+131,(vlSelf->Core__DOT__decode__DOT__c0_4),3);
            tracep->chgBit(oldp+132,(vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG));
            tracep->chgIData(oldp+133,(((vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x1fU) ? 0x1fffffU
                                         : 0U)),21);
            tracep->chgSData(oldp+134,((0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U))),11);
            tracep->chgIData(oldp+135,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                           >> 0x1fU)
                                           ? 0x1fffffU
                                           : 0U) << 0xbU) 
                                        | (0x7ffU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))),32);
            tracep->chgCData(oldp+136,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x19U))),6);
            tracep->chgIData(oldp+137,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                           >> 0x1fU)
                                           ? 0x1fffffU
                                           : 0U) << 0xbU) 
                                        | ((0x7e0U 
                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 7U))))),32);
            tracep->chgIData(oldp+138,(((vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x1fU) ? 0xfffffU
                                         : 0U)),20);
            tracep->chgBit(oldp+139,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 7U))));
            tracep->chgCData(oldp+140,((0xfU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                >> 8U))),4);
            tracep->chgIData(oldp+141,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                           >> 0x1fU)
                                           ? 0xfffffU
                                           : 0U) << 0xcU) 
                                        | ((0x800U 
                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 7U)))))),32);
            tracep->chgIData(oldp+142,((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0xcU)),20);
            tracep->chgIData(oldp+143,((0xfffff000U 
                                        & vlSelf->Core__DOT__decode__DOT__inst)),32);
            tracep->chgSData(oldp+144,(((vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x1fU) ? 0xfffU
                                         : 0U)),12);
            tracep->chgCData(oldp+145,((0xffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xcU))),8);
            tracep->chgBit(oldp+146,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U))));
            tracep->chgSData(oldp+147,((0x3ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x15U))),10);
            tracep->chgIData(oldp+148,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                           >> 0x1fU)
                                           ? 0xfffU
                                           : 0U) << 0x14U) 
                                        | ((0xff000U 
                                            & vlSelf->Core__DOT__decode__DOT__inst) 
                                           | ((0x800U 
                                               & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 0x14U)))))),32);
            tracep->chgCData(oldp+149,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U))),6);
            tracep->chgIData(oldp+150,((((0x37U != 
                                          (0x7fU & vlSelf->Core__DOT__decode__DOT__inst)) 
                                         & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793))
                                         ? (0x1fU & 
                                            (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U))
                                         : (0x3fU & 
                                            (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U)))),32);
            tracep->chgIData(oldp+151,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU))),32);
            tracep->chgBit(oldp+152,((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                       & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
            tracep->chgBit(oldp+153,((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                       & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
            tracep->chgBit(oldp+154,((((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en) 
                                       & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
            tracep->chgBit(oldp+155,((((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en) 
                                       & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
            tracep->chgBit(oldp+156,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                       & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
            tracep->chgBit(oldp+157,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                       & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
            tracep->chgQData(oldp+158,(vlSelf->Core__DOT__execute__DOT__alu_io_in1),64);
            tracep->chgQData(oldp+160,(vlSelf->Core__DOT__execute__DOT__alu_io_in2),64);
            tracep->chgCData(oldp+162,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code),4);
            tracep->chgBit(oldp+163,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type));
            tracep->chgBit(oldp+164,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp));
            tracep->chgCData(oldp+165,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code),4);
            tracep->chgIData(oldp+166,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm),32);
            tracep->chgIData(oldp+167,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc),32);
            tracep->chgCData(oldp+168,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src),3);
            tracep->chgCData(oldp+169,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src),3);
            tracep->chgIData(oldp+170,(((vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+171,(((IData)(4U) 
                                        + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)),32);
            tracep->chgCData(oldp+172,(vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt),6);
            tracep->chgQData(oldp+173,(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0),64);
            tracep->chgIData(oldp+175,((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)),32);
            tracep->chgIData(oldp+176,(((1U & (IData)(
                                                      (vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgBit(oldp+177,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid));
            tracep->chgIData(oldp+178,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_pc),32);
            tracep->chgIData(oldp+179,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_inst),32);
            tracep->chgCData(oldp+180,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code),2);
            tracep->chgCData(oldp+181,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size),2);
            tracep->chgCData(oldp+182,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr),5);
            tracep->chgCData(oldp+183,(vlSelf->Core__DOT__mem__DOT__waddr),5);
            tracep->chgBit(oldp+184,(vlSelf->Core__DOT__mem__DOT__wen));
            tracep->chgQData(oldp+185,(vlSelf->Core__DOT__mem__DOT__wdata),64);
            tracep->chgIData(oldp+187,(vlSelf->Core__DOT__mem__DOT__reg_mem_addr),32);
            tracep->chgBit(oldp+188,(vlSelf->Core__DOT__mem__DOT__is_load));
            tracep->chgBit(oldp+189,((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))));
            tracep->chgCData(oldp+190,((7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out))),3);
            tracep->chgCData(oldp+191,((7U & vlSelf->Core__DOT__mem__DOT__reg_mem_addr)),3);
            tracep->chgCData(oldp+192,(((7U == (7U 
                                                & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                         ? 0x80U : 
                                        ((6U == (7U 
                                                 & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                          ? 0xc0U : 
                                         ((5U == (7U 
                                                  & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                           ? 0xe0U : 
                                          ((4U == (7U 
                                                   & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                            ? 0xf0U
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                ? 0xf8U
                                                : (
                                                   (2U 
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
            tracep->chgCData(oldp+193,(((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                         ? 0xffU : 
                                        ((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                          ? 0xfU : 
                                         ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                           ? 3U : 1U)))),8);
            tracep->chgIData(oldp+194,(vlSelf->Core__DOT__wb_dpi__DOT__inst1),32);
            tracep->chgIData(oldp+195,(vlSelf->Core__DOT__wb_dpi__DOT__pc1),32);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+196,(((0U != (0x1fU 
                                                & (vlSelf->Core__DOT__decode__DOT__inst 
                                                   >> 0xfU)))
                                         ? ((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                              & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Core__DOT__decode__DOT__inst 
                                                     >> 0xfU)))) 
                                             & (1U 
                                                == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))
                                             ? vlSelf->Core__DOT__execute__DOT__alu_io_alu_out
                                             : ((((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en) 
                                                  & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Core__DOT__decode__DOT__inst 
                                                         >> 0xfU)))) 
                                                 & (1U 
                                                    == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))
                                                 ? vlSelf->Core__DOT__mem_io_mem_rd_data
                                                 : 
                                                ((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
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
            tracep->chgQData(oldp+198,(((0U != (0x1fU 
                                                & (vlSelf->Core__DOT__decode__DOT__inst 
                                                   >> 0x14U)))
                                         ? ((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                              & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Core__DOT__decode__DOT__inst 
                                                     >> 0x14U)))) 
                                             & (1U 
                                                == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))
                                             ? vlSelf->Core__DOT__execute__DOT__alu_io_alu_out
                                             : ((((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en) 
                                                  & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Core__DOT__decode__DOT__inst 
                                                         >> 0x14U)))) 
                                                 & (1U 
                                                    == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))
                                                 ? vlSelf->Core__DOT__mem_io_mem_rd_data
                                                 : 
                                                ((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
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
            tracep->chgBit(oldp+200,(((~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)) 
                                      & (((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                          | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                         & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)))));
            tracep->chgBit(oldp+201,(((~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)) 
                                      & ((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                         & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)))));
            tracep->chgQData(oldp+202,(((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                         ? vlSelf->Core__DOT__mem__DOT___ld_data_T_15
                                         : 0ULL)),64);
            tracep->chgQData(oldp+204,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                         ? ((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                             ? vlSelf->Core__DOT__mem__DOT__ld_data_raw
                                             : vlSelf->Core__DOT__mem__DOT___ld_data_u_T_7)
                                         : 0ULL)),64);
            tracep->chgQData(oldp+206,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                         ? ((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                             ? ((3U 
                                                 == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                 ? vlSelf->Core__DOT__mem__DOT__ld_data_raw
                                                 : vlSelf->Core__DOT__mem__DOT___ld_data_u_T_7)
                                             : 0ULL)
                                         : ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                             ? ((1U 
                                                 == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                                 ? vlSelf->Core__DOT__mem__DOT___ld_data_T_15
                                                 : 0ULL)
                                             : 0ULL))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+208,((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))));
            tracep->chgQData(oldp+209,(vlSelf->Core__DOT__mem_io_mem_rd_data),64);
            tracep->chgBit(oldp+211,(vlSelf->Core__DOT__mem__DOT__req_wait));
            tracep->chgQData(oldp+212,(vlSelf->Core__DOT__mem__DOT__ld_data_raw),64);
            tracep->chgQData(oldp+214,(((1U & (IData)(
                                                      (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                       >> 7U)))
                                         ? 0xffffffffffffffULL
                                         : 0ULL)),56);
            tracep->chgCData(oldp+216,((0xffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),8);
            tracep->chgQData(oldp+217,(((1U & (IData)(
                                                      (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                       >> 0xfU)))
                                         ? 0xffffffffffffULL
                                         : 0ULL)),48);
            tracep->chgSData(oldp+219,((0xffffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),16);
            tracep->chgIData(oldp+220,(((1U & (IData)(
                                                      (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+221,((IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)),32);
        }
        tracep->chgBit(oldp+222,(vlSelf->clock));
        tracep->chgBit(oldp+223,(vlSelf->reset));
        tracep->chgIData(oldp+224,(vlSelf->io_imem_raddr),32);
        tracep->chgIData(oldp+225,(vlSelf->io_imem_waddr),32);
        tracep->chgQData(oldp+226,(vlSelf->io_imem_wdata),64);
        tracep->chgBit(oldp+228,(vlSelf->io_imem_ren));
        tracep->chgBit(oldp+229,(vlSelf->io_imem_wen));
        tracep->chgCData(oldp+230,(vlSelf->io_imem_wmask),8);
        tracep->chgQData(oldp+231,(vlSelf->io_imem_rdata),64);
        tracep->chgBit(oldp+233,(vlSelf->io_imem_read_ok));
        tracep->chgBit(oldp+234,(vlSelf->io_imem_write_ok));
        tracep->chgIData(oldp+235,(vlSelf->io_dmem_raddr),32);
        tracep->chgIData(oldp+236,(vlSelf->io_dmem_waddr),32);
        tracep->chgQData(oldp+237,(vlSelf->io_dmem_wdata),64);
        tracep->chgBit(oldp+239,(vlSelf->io_dmem_ren));
        tracep->chgBit(oldp+240,(vlSelf->io_dmem_wen));
        tracep->chgCData(oldp+241,(vlSelf->io_dmem_wmask),8);
        tracep->chgQData(oldp+242,(vlSelf->io_dmem_rdata),64);
        tracep->chgBit(oldp+244,(vlSelf->io_dmem_read_ok));
        tracep->chgBit(oldp+245,(vlSelf->io_dmem_write_ok));
        tracep->chgIData(oldp+246,(vlSelf->io_commit_pc),32);
        tracep->chgQData(oldp+247,(vlSelf->io_regs_out_0),64);
        tracep->chgQData(oldp+249,(vlSelf->io_regs_out_1),64);
        tracep->chgQData(oldp+251,(vlSelf->io_regs_out_2),64);
        tracep->chgQData(oldp+253,(vlSelf->io_regs_out_3),64);
        tracep->chgQData(oldp+255,(vlSelf->io_regs_out_4),64);
        tracep->chgQData(oldp+257,(vlSelf->io_regs_out_5),64);
        tracep->chgQData(oldp+259,(vlSelf->io_regs_out_6),64);
        tracep->chgQData(oldp+261,(vlSelf->io_regs_out_7),64);
        tracep->chgQData(oldp+263,(vlSelf->io_regs_out_8),64);
        tracep->chgQData(oldp+265,(vlSelf->io_regs_out_9),64);
        tracep->chgQData(oldp+267,(vlSelf->io_regs_out_10),64);
        tracep->chgQData(oldp+269,(vlSelf->io_regs_out_11),64);
        tracep->chgQData(oldp+271,(vlSelf->io_regs_out_12),64);
        tracep->chgQData(oldp+273,(vlSelf->io_regs_out_13),64);
        tracep->chgQData(oldp+275,(vlSelf->io_regs_out_14),64);
        tracep->chgQData(oldp+277,(vlSelf->io_regs_out_15),64);
        tracep->chgQData(oldp+279,(vlSelf->io_regs_out_16),64);
        tracep->chgQData(oldp+281,(vlSelf->io_regs_out_17),64);
        tracep->chgQData(oldp+283,(vlSelf->io_regs_out_18),64);
        tracep->chgQData(oldp+285,(vlSelf->io_regs_out_19),64);
        tracep->chgQData(oldp+287,(vlSelf->io_regs_out_20),64);
        tracep->chgQData(oldp+289,(vlSelf->io_regs_out_21),64);
        tracep->chgQData(oldp+291,(vlSelf->io_regs_out_22),64);
        tracep->chgQData(oldp+293,(vlSelf->io_regs_out_23),64);
        tracep->chgQData(oldp+295,(vlSelf->io_regs_out_24),64);
        tracep->chgQData(oldp+297,(vlSelf->io_regs_out_25),64);
        tracep->chgQData(oldp+299,(vlSelf->io_regs_out_26),64);
        tracep->chgQData(oldp+301,(vlSelf->io_regs_out_27),64);
        tracep->chgQData(oldp+303,(vlSelf->io_regs_out_28),64);
        tracep->chgQData(oldp+305,(vlSelf->io_regs_out_29),64);
        tracep->chgQData(oldp+307,(vlSelf->io_regs_out_30),64);
        tracep->chgQData(oldp+309,(vlSelf->io_regs_out_31),64);
        tracep->chgQData(oldp+311,(vlSelf->io_regs_in_0),64);
        tracep->chgQData(oldp+313,(vlSelf->io_regs_in_1),64);
        tracep->chgQData(oldp+315,(vlSelf->io_regs_in_2),64);
        tracep->chgQData(oldp+317,(vlSelf->io_regs_in_3),64);
        tracep->chgQData(oldp+319,(vlSelf->io_regs_in_4),64);
        tracep->chgQData(oldp+321,(vlSelf->io_regs_in_5),64);
        tracep->chgQData(oldp+323,(vlSelf->io_regs_in_6),64);
        tracep->chgQData(oldp+325,(vlSelf->io_regs_in_7),64);
        tracep->chgQData(oldp+327,(vlSelf->io_regs_in_8),64);
        tracep->chgQData(oldp+329,(vlSelf->io_regs_in_9),64);
        tracep->chgQData(oldp+331,(vlSelf->io_regs_in_10),64);
        tracep->chgQData(oldp+333,(vlSelf->io_regs_in_11),64);
        tracep->chgQData(oldp+335,(vlSelf->io_regs_in_12),64);
        tracep->chgQData(oldp+337,(vlSelf->io_regs_in_13),64);
        tracep->chgQData(oldp+339,(vlSelf->io_regs_in_14),64);
        tracep->chgQData(oldp+341,(vlSelf->io_regs_in_15),64);
        tracep->chgQData(oldp+343,(vlSelf->io_regs_in_16),64);
        tracep->chgQData(oldp+345,(vlSelf->io_regs_in_17),64);
        tracep->chgQData(oldp+347,(vlSelf->io_regs_in_18),64);
        tracep->chgQData(oldp+349,(vlSelf->io_regs_in_19),64);
        tracep->chgQData(oldp+351,(vlSelf->io_regs_in_20),64);
        tracep->chgQData(oldp+353,(vlSelf->io_regs_in_21),64);
        tracep->chgQData(oldp+355,(vlSelf->io_regs_in_22),64);
        tracep->chgQData(oldp+357,(vlSelf->io_regs_in_23),64);
        tracep->chgQData(oldp+359,(vlSelf->io_regs_in_24),64);
        tracep->chgQData(oldp+361,(vlSelf->io_regs_in_25),64);
        tracep->chgQData(oldp+363,(vlSelf->io_regs_in_26),64);
        tracep->chgQData(oldp+365,(vlSelf->io_regs_in_27),64);
        tracep->chgQData(oldp+367,(vlSelf->io_regs_in_28),64);
        tracep->chgQData(oldp+369,(vlSelf->io_regs_in_29),64);
        tracep->chgQData(oldp+371,(vlSelf->io_regs_in_30),64);
        tracep->chgQData(oldp+373,(vlSelf->io_regs_in_31),64);
        tracep->chgIData(oldp+375,(vlSelf->io_pc_in),32);
        tracep->chgBit(oldp+376,(vlSelf->io_write_regs));
        tracep->chgBit(oldp+377,(vlSelf->io_commit));
        tracep->chgIData(oldp+378,((IData)(vlSelf->io_imem_rdata)),32);
        tracep->chgBit(oldp+379,((1U & (~ (IData)(vlSelf->io_imem_read_ok)))));
        tracep->chgBit(oldp+380,((1U & ((~ (IData)(vlSelf->io_imem_read_ok)) 
                                        | (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))));
    }
}

void VCore___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VCore___024root* const __restrict vlSelf = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
