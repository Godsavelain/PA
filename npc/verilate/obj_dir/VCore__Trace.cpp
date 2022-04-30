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
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 0U
                                                      : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_295))))))))),4);
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
                                                           : 
                                                          ((0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 1U
                                                            : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_409))))))))))))))),2);
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
                                                           : 
                                                          ((0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 2U
                                                            : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_469))))))))))))))),2);
            tracep->chgBit(oldp+14,(((0x37U != (0x7fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                     & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_601))));
            tracep->chgCData(oldp+15,(((0x37U == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                        ? 3U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_661))),3);
            tracep->chgCData(oldp+16,(((0x37U == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                        ? 2U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_721))),3);
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
                                                & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_601))
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
            tracep->chgQData(oldp+32,(vlSelf->Core__DOT__regfile__DOT__rf_0),64);
            tracep->chgQData(oldp+34,(vlSelf->Core__DOT__regfile__DOT__rf_1),64);
            tracep->chgQData(oldp+36,(vlSelf->Core__DOT__regfile__DOT__rf_2),64);
            tracep->chgQData(oldp+38,(vlSelf->Core__DOT__regfile__DOT__rf_3),64);
            tracep->chgQData(oldp+40,(vlSelf->Core__DOT__regfile__DOT__rf_4),64);
            tracep->chgQData(oldp+42,(vlSelf->Core__DOT__regfile__DOT__rf_5),64);
            tracep->chgQData(oldp+44,(vlSelf->Core__DOT__regfile__DOT__rf_6),64);
            tracep->chgQData(oldp+46,(vlSelf->Core__DOT__regfile__DOT__rf_7),64);
            tracep->chgQData(oldp+48,(vlSelf->Core__DOT__regfile__DOT__rf_8),64);
            tracep->chgQData(oldp+50,(vlSelf->Core__DOT__regfile__DOT__rf_9),64);
            tracep->chgQData(oldp+52,(vlSelf->Core__DOT__regfile__DOT__rf_10),64);
            tracep->chgQData(oldp+54,(vlSelf->Core__DOT__regfile__DOT__rf_11),64);
            tracep->chgQData(oldp+56,(vlSelf->Core__DOT__regfile__DOT__rf_12),64);
            tracep->chgQData(oldp+58,(vlSelf->Core__DOT__regfile__DOT__rf_13),64);
            tracep->chgQData(oldp+60,(vlSelf->Core__DOT__regfile__DOT__rf_14),64);
            tracep->chgQData(oldp+62,(vlSelf->Core__DOT__regfile__DOT__rf_15),64);
            tracep->chgQData(oldp+64,(vlSelf->Core__DOT__regfile__DOT__rf_16),64);
            tracep->chgQData(oldp+66,(vlSelf->Core__DOT__regfile__DOT__rf_17),64);
            tracep->chgQData(oldp+68,(vlSelf->Core__DOT__regfile__DOT__rf_18),64);
            tracep->chgQData(oldp+70,(vlSelf->Core__DOT__regfile__DOT__rf_19),64);
            tracep->chgQData(oldp+72,(vlSelf->Core__DOT__regfile__DOT__rf_20),64);
            tracep->chgQData(oldp+74,(vlSelf->Core__DOT__regfile__DOT__rf_21),64);
            tracep->chgQData(oldp+76,(vlSelf->Core__DOT__regfile__DOT__rf_22),64);
            tracep->chgQData(oldp+78,(vlSelf->Core__DOT__regfile__DOT__rf_23),64);
            tracep->chgQData(oldp+80,(vlSelf->Core__DOT__regfile__DOT__rf_24),64);
            tracep->chgQData(oldp+82,(vlSelf->Core__DOT__regfile__DOT__rf_25),64);
            tracep->chgQData(oldp+84,(vlSelf->Core__DOT__regfile__DOT__rf_26),64);
            tracep->chgQData(oldp+86,(vlSelf->Core__DOT__regfile__DOT__rf_27),64);
            tracep->chgQData(oldp+88,(vlSelf->Core__DOT__regfile__DOT__rf_28),64);
            tracep->chgQData(oldp+90,(vlSelf->Core__DOT__regfile__DOT__rf_29),64);
            tracep->chgQData(oldp+92,(vlSelf->Core__DOT__regfile__DOT__rf_30),64);
            tracep->chgQData(oldp+94,(vlSelf->Core__DOT__regfile__DOT__rf_31),64);
            tracep->chgBit(oldp+96,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en));
            tracep->chgIData(oldp+97,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),32);
            tracep->chgQData(oldp+98,(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out),64);
            tracep->chgBit(oldp+100,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en));
            tracep->chgIData(oldp+101,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr),32);
            tracep->chgQData(oldp+102,(vlSelf->Core__DOT__mem__DOT__wdata),64);
            tracep->chgBit(oldp+104,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid));
            tracep->chgIData(oldp+105,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc),32);
            tracep->chgIData(oldp+106,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst),32);
            tracep->chgCData(oldp+107,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code),2);
            tracep->chgCData(oldp+108,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size),2);
            tracep->chgCData(oldp+109,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),5);
            tracep->chgBit(oldp+110,(vlSelf->Core__DOT__execute__DOT__io_is_ebreak_o_REG));
            tracep->chgIData(oldp+111,((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)),32);
            tracep->chgBit(oldp+112,(((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                      | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)))));
            tracep->chgBit(oldp+113,((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))));
            tracep->chgBit(oldp+114,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_valid));
            tracep->chgIData(oldp+115,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc),32);
            tracep->chgIData(oldp+116,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_inst),32);
            tracep->chgBit(oldp+117,(vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG));
            tracep->chgIData(oldp+118,(((IData)((vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                                 >> 3U)) 
                                        << 3U)),32);
            VL_EXTEND_WQ(127,64, __Vtemp22, vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG);
            VL_SHIFTL_WWI(127,127,6, __Vtemp23, __Vtemp22, 
                          (0x38U & ((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out) 
                                    << 3U)));
            tracep->chgQData(oldp+119,((((QData)((IData)(
                                                         __Vtemp23[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp23[0U])))),64);
            tracep->chgCData(oldp+121,((0x7fffU & (
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
            tracep->chgIData(oldp+122,(vlSelf->Core__DOT__mem_io_reg_mem_addr_i_REG),32);
            tracep->chgIData(oldp+123,(vlSelf->Core__DOT__io_commit_pc_REG),32);
            tracep->chgBit(oldp+124,(vlSelf->Core__DOT__io_commit_REG));
            tracep->chgIData(oldp+125,(vlSelf->Core__DOT__fetch__DOT__pc),32);
            tracep->chgIData(oldp+126,((vlSelf->Core__DOT__fetch__DOT__pc 
                                        >> 2U)),30);
            tracep->chgIData(oldp+127,(((IData)(4U) 
                                        + (0xfffffffcU 
                                           & vlSelf->Core__DOT__fetch__DOT__pc))),32);
            tracep->chgBit(oldp+128,(vlSelf->Core__DOT__decode__DOT__inst_valid));
            tracep->chgCData(oldp+129,(vlSelf->Core__DOT__decode__DOT__c0_1),3);
            tracep->chgCData(oldp+130,(vlSelf->Core__DOT__decode__DOT__c0_2),3);
            tracep->chgBit(oldp+131,(vlSelf->Core__DOT__decode__DOT__c0_3));
            tracep->chgCData(oldp+132,(vlSelf->Core__DOT__decode__DOT__c0_4),3);
            tracep->chgBit(oldp+133,(vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG));
            tracep->chgIData(oldp+134,(((vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x1fU) ? 0x1fffffU
                                         : 0U)),21);
            tracep->chgSData(oldp+135,((0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U))),11);
            tracep->chgIData(oldp+136,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                           >> 0x1fU)
                                           ? 0x1fffffU
                                           : 0U) << 0xbU) 
                                        | (0x7ffU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))),32);
            tracep->chgCData(oldp+137,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x19U))),6);
            tracep->chgIData(oldp+138,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                           >> 0x1fU)
                                           ? 0x1fffffU
                                           : 0U) << 0xbU) 
                                        | ((0x7e0U 
                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 7U))))),32);
            tracep->chgIData(oldp+139,(((vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x1fU) ? 0xfffffU
                                         : 0U)),20);
            tracep->chgBit(oldp+140,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 7U))));
            tracep->chgCData(oldp+141,((0xfU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                >> 8U))),4);
            tracep->chgIData(oldp+142,(((((vlSelf->Core__DOT__decode__DOT__inst 
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
            tracep->chgIData(oldp+143,((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0xcU)),20);
            tracep->chgIData(oldp+144,((0xfffff000U 
                                        & vlSelf->Core__DOT__decode__DOT__inst)),32);
            tracep->chgSData(oldp+145,(((vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x1fU) ? 0xfffU
                                         : 0U)),12);
            tracep->chgCData(oldp+146,((0xffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xcU))),8);
            tracep->chgBit(oldp+147,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U))));
            tracep->chgSData(oldp+148,((0x3ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x15U))),10);
            tracep->chgIData(oldp+149,(((((vlSelf->Core__DOT__decode__DOT__inst 
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
            tracep->chgCData(oldp+150,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U))),6);
            tracep->chgIData(oldp+151,((((0x37U != 
                                          (0x7fU & vlSelf->Core__DOT__decode__DOT__inst)) 
                                         & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_601))
                                         ? (0x1fU & 
                                            (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U))
                                         : (0x3fU & 
                                            (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U)))),32);
            tracep->chgIData(oldp+152,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU))),32);
            tracep->chgBit(oldp+153,((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                       & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
            tracep->chgBit(oldp+154,((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                       & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
            tracep->chgBit(oldp+155,((((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en) 
                                       & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
            tracep->chgBit(oldp+156,((((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en) 
                                       & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
            tracep->chgBit(oldp+157,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                       & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
            tracep->chgBit(oldp+158,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                       & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
            tracep->chgQData(oldp+159,(vlSelf->Core__DOT__execute__DOT__alu_io_in1),64);
            tracep->chgQData(oldp+161,(vlSelf->Core__DOT__execute__DOT__alu_io_in2),64);
            tracep->chgCData(oldp+163,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code),4);
            tracep->chgBit(oldp+164,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type));
            tracep->chgBit(oldp+165,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp));
            tracep->chgCData(oldp+166,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code),4);
            tracep->chgIData(oldp+167,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm),32);
            tracep->chgIData(oldp+168,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc),32);
            tracep->chgCData(oldp+169,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src),3);
            tracep->chgCData(oldp+170,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src),3);
            tracep->chgIData(oldp+171,(((vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+172,(((IData)(4U) 
                                        + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)),32);
            tracep->chgCData(oldp+173,(vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt),6);
            tracep->chgQData(oldp+174,(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0),64);
            tracep->chgIData(oldp+176,((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)),32);
            tracep->chgIData(oldp+177,(((1U & (IData)(
                                                      (vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgBit(oldp+178,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid));
            tracep->chgIData(oldp+179,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_pc),32);
            tracep->chgIData(oldp+180,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_inst),32);
            tracep->chgCData(oldp+181,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code),2);
            tracep->chgCData(oldp+182,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size),2);
            tracep->chgCData(oldp+183,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr),5);
            tracep->chgCData(oldp+184,(vlSelf->Core__DOT__mem__DOT__waddr),5);
            tracep->chgBit(oldp+185,(vlSelf->Core__DOT__mem__DOT__wen));
            tracep->chgIData(oldp+186,(vlSelf->Core__DOT__mem__DOT__reg_mem_addr),32);
            tracep->chgBit(oldp+187,(vlSelf->Core__DOT__mem__DOT__is_load));
            tracep->chgCData(oldp+188,((7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out))),3);
            tracep->chgCData(oldp+189,((7U & vlSelf->Core__DOT__mem__DOT__reg_mem_addr)),3);
            tracep->chgCData(oldp+190,(((7U == (7U 
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
            tracep->chgCData(oldp+191,(((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                         ? 0xffU : 
                                        ((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                          ? 0xfU : 
                                         ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                           ? 3U : 1U)))),8);
            tracep->chgIData(oldp+192,((0x1fffffffU 
                                        & (IData)((vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                                   >> 3U)))),29);
            tracep->chgQData(oldp+193,(vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG),64);
            tracep->chgIData(oldp+195,(vlSelf->Core__DOT__wb_dpi__DOT__inst1),32);
            tracep->chgIData(oldp+196,(vlSelf->Core__DOT__wb_dpi__DOT__pc1),32);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+197,(((0U != (0x1fU 
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
                                                 ? vlSelf->Core__DOT__mem__DOT__wdata
                                                 : 
                                                ((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
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
            tracep->chgQData(oldp+199,(((0U != (0x1fU 
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
                                                 ? vlSelf->Core__DOT__mem__DOT__wdata
                                                 : 
                                                ((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
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
            tracep->chgQData(oldp+201,(((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
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
                                         : 0ULL)),64);
            tracep->chgQData(oldp+203,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
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
                                         : 0ULL)),64);
            tracep->chgQData(oldp+205,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                         ? ((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                             ? ((3U 
                                                 == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                 ? vlSelf->Core__DOT__mem__DOT__ld_data_raw
                                                 : 
                                                ((2U 
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
                                             : 0ULL)
                                         : ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                             ? ((1U 
                                                 == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                                 ? 
                                                ((3U 
                                                  == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size))
                                                  ? vlSelf->Core__DOT__mem__DOT__ld_data_raw
                                                  : 
                                                 ((2U 
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
                                                 : 0ULL)
                                             : 0ULL))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+207,((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__req_wait)))));
            tracep->chgQData(oldp+208,(vlSelf->Core__DOT__mem_io_wdata_o),64);
            tracep->chgBit(oldp+210,(vlSelf->Core__DOT__mem__DOT__req_wait));
            tracep->chgQData(oldp+211,(vlSelf->Core__DOT__mem__DOT__ld_data_raw),64);
            tracep->chgQData(oldp+213,(((1U & (IData)(
                                                      (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                       >> 7U)))
                                         ? 0xffffffffffffffULL
                                         : 0ULL)),56);
            tracep->chgCData(oldp+215,((0xffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),8);
            tracep->chgQData(oldp+216,(((1U & (IData)(
                                                      (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                       >> 0xfU)))
                                         ? 0xffffffffffffULL
                                         : 0ULL)),48);
            tracep->chgSData(oldp+218,((0xffffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),16);
            tracep->chgIData(oldp+219,(((1U & (IData)(
                                                      (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+220,((IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)),32);
        }
        tracep->chgBit(oldp+221,(vlSelf->clock));
        tracep->chgBit(oldp+222,(vlSelf->reset));
        tracep->chgIData(oldp+223,(vlSelf->io_imem_raddr),32);
        tracep->chgIData(oldp+224,(vlSelf->io_imem_waddr),32);
        tracep->chgQData(oldp+225,(vlSelf->io_imem_wdata),64);
        tracep->chgBit(oldp+227,(vlSelf->io_imem_ren));
        tracep->chgBit(oldp+228,(vlSelf->io_imem_wen));
        tracep->chgCData(oldp+229,(vlSelf->io_imem_wmask),8);
        tracep->chgQData(oldp+230,(vlSelf->io_imem_rdata),64);
        tracep->chgBit(oldp+232,(vlSelf->io_imem_read_ok));
        tracep->chgBit(oldp+233,(vlSelf->io_imem_write_ok));
        tracep->chgIData(oldp+234,(vlSelf->io_dmem_raddr),32);
        tracep->chgIData(oldp+235,(vlSelf->io_dmem_waddr),32);
        tracep->chgQData(oldp+236,(vlSelf->io_dmem_wdata),64);
        tracep->chgBit(oldp+238,(vlSelf->io_dmem_ren));
        tracep->chgBit(oldp+239,(vlSelf->io_dmem_wen));
        tracep->chgCData(oldp+240,(vlSelf->io_dmem_wmask),8);
        tracep->chgQData(oldp+241,(vlSelf->io_dmem_rdata),64);
        tracep->chgBit(oldp+243,(vlSelf->io_dmem_read_ok));
        tracep->chgBit(oldp+244,(vlSelf->io_dmem_write_ok));
        tracep->chgIData(oldp+245,(vlSelf->io_commit_pc),32);
        tracep->chgQData(oldp+246,(vlSelf->io_regs_out_0),64);
        tracep->chgQData(oldp+248,(vlSelf->io_regs_out_1),64);
        tracep->chgQData(oldp+250,(vlSelf->io_regs_out_2),64);
        tracep->chgQData(oldp+252,(vlSelf->io_regs_out_3),64);
        tracep->chgQData(oldp+254,(vlSelf->io_regs_out_4),64);
        tracep->chgQData(oldp+256,(vlSelf->io_regs_out_5),64);
        tracep->chgQData(oldp+258,(vlSelf->io_regs_out_6),64);
        tracep->chgQData(oldp+260,(vlSelf->io_regs_out_7),64);
        tracep->chgQData(oldp+262,(vlSelf->io_regs_out_8),64);
        tracep->chgQData(oldp+264,(vlSelf->io_regs_out_9),64);
        tracep->chgQData(oldp+266,(vlSelf->io_regs_out_10),64);
        tracep->chgQData(oldp+268,(vlSelf->io_regs_out_11),64);
        tracep->chgQData(oldp+270,(vlSelf->io_regs_out_12),64);
        tracep->chgQData(oldp+272,(vlSelf->io_regs_out_13),64);
        tracep->chgQData(oldp+274,(vlSelf->io_regs_out_14),64);
        tracep->chgQData(oldp+276,(vlSelf->io_regs_out_15),64);
        tracep->chgQData(oldp+278,(vlSelf->io_regs_out_16),64);
        tracep->chgQData(oldp+280,(vlSelf->io_regs_out_17),64);
        tracep->chgQData(oldp+282,(vlSelf->io_regs_out_18),64);
        tracep->chgQData(oldp+284,(vlSelf->io_regs_out_19),64);
        tracep->chgQData(oldp+286,(vlSelf->io_regs_out_20),64);
        tracep->chgQData(oldp+288,(vlSelf->io_regs_out_21),64);
        tracep->chgQData(oldp+290,(vlSelf->io_regs_out_22),64);
        tracep->chgQData(oldp+292,(vlSelf->io_regs_out_23),64);
        tracep->chgQData(oldp+294,(vlSelf->io_regs_out_24),64);
        tracep->chgQData(oldp+296,(vlSelf->io_regs_out_25),64);
        tracep->chgQData(oldp+298,(vlSelf->io_regs_out_26),64);
        tracep->chgQData(oldp+300,(vlSelf->io_regs_out_27),64);
        tracep->chgQData(oldp+302,(vlSelf->io_regs_out_28),64);
        tracep->chgQData(oldp+304,(vlSelf->io_regs_out_29),64);
        tracep->chgQData(oldp+306,(vlSelf->io_regs_out_30),64);
        tracep->chgQData(oldp+308,(vlSelf->io_regs_out_31),64);
        tracep->chgQData(oldp+310,(vlSelf->io_regs_in_0),64);
        tracep->chgQData(oldp+312,(vlSelf->io_regs_in_1),64);
        tracep->chgQData(oldp+314,(vlSelf->io_regs_in_2),64);
        tracep->chgQData(oldp+316,(vlSelf->io_regs_in_3),64);
        tracep->chgQData(oldp+318,(vlSelf->io_regs_in_4),64);
        tracep->chgQData(oldp+320,(vlSelf->io_regs_in_5),64);
        tracep->chgQData(oldp+322,(vlSelf->io_regs_in_6),64);
        tracep->chgQData(oldp+324,(vlSelf->io_regs_in_7),64);
        tracep->chgQData(oldp+326,(vlSelf->io_regs_in_8),64);
        tracep->chgQData(oldp+328,(vlSelf->io_regs_in_9),64);
        tracep->chgQData(oldp+330,(vlSelf->io_regs_in_10),64);
        tracep->chgQData(oldp+332,(vlSelf->io_regs_in_11),64);
        tracep->chgQData(oldp+334,(vlSelf->io_regs_in_12),64);
        tracep->chgQData(oldp+336,(vlSelf->io_regs_in_13),64);
        tracep->chgQData(oldp+338,(vlSelf->io_regs_in_14),64);
        tracep->chgQData(oldp+340,(vlSelf->io_regs_in_15),64);
        tracep->chgQData(oldp+342,(vlSelf->io_regs_in_16),64);
        tracep->chgQData(oldp+344,(vlSelf->io_regs_in_17),64);
        tracep->chgQData(oldp+346,(vlSelf->io_regs_in_18),64);
        tracep->chgQData(oldp+348,(vlSelf->io_regs_in_19),64);
        tracep->chgQData(oldp+350,(vlSelf->io_regs_in_20),64);
        tracep->chgQData(oldp+352,(vlSelf->io_regs_in_21),64);
        tracep->chgQData(oldp+354,(vlSelf->io_regs_in_22),64);
        tracep->chgQData(oldp+356,(vlSelf->io_regs_in_23),64);
        tracep->chgQData(oldp+358,(vlSelf->io_regs_in_24),64);
        tracep->chgQData(oldp+360,(vlSelf->io_regs_in_25),64);
        tracep->chgQData(oldp+362,(vlSelf->io_regs_in_26),64);
        tracep->chgQData(oldp+364,(vlSelf->io_regs_in_27),64);
        tracep->chgQData(oldp+366,(vlSelf->io_regs_in_28),64);
        tracep->chgQData(oldp+368,(vlSelf->io_regs_in_29),64);
        tracep->chgQData(oldp+370,(vlSelf->io_regs_in_30),64);
        tracep->chgQData(oldp+372,(vlSelf->io_regs_in_31),64);
        tracep->chgIData(oldp+374,(vlSelf->io_pc_in),32);
        tracep->chgBit(oldp+375,(vlSelf->io_write_regs));
        tracep->chgBit(oldp+376,(vlSelf->io_commit));
        tracep->chgIData(oldp+377,((IData)(vlSelf->io_imem_rdata)),32);
        tracep->chgBit(oldp+378,((1U & ((~ (IData)(vlSelf->io_imem_read_ok)) 
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
