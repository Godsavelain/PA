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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,((0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc)),32);
            tracep->chgIData(oldp+1,(vlSelf->Core__DOT__fetch_io_imem_resp_bits_old_pc_REG),32);
            tracep->chgCData(oldp+2,(((0x37U == (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                       ? 1U : ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                                ? 1U
                                                : (
                                                   (0x6fU 
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
            tracep->chgBit(oldp+3,(((0x37U != (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst)) 
                                    & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_601))));
            tracep->chgCData(oldp+4,(((0x37U == (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                       ? 3U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_661))),3);
            tracep->chgCData(oldp+5,(vlSelf->Core__DOT__decode__DOT__c0_2),3);
            tracep->chgCData(oldp+6,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 7U))),5);
            tracep->chgIData(oldp+7,(((7U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                                       ? (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
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
            tracep->chgBit(oldp+8,((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1))));
            tracep->chgCData(oldp+9,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0xfU))),5);
            tracep->chgBit(oldp+10,((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2))));
            tracep->chgCData(oldp+11,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                >> 0x14U))),5);
            tracep->chgBit(oldp+12,(vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG));
            tracep->chgQData(oldp+13,(((0U != (0x1fU 
                                               & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0xfU)))
                                        ? ((IData)(vlSelf->Core__DOT__regfile__DOT__has_ex_hazard)
                                            ? vlSelf->Core__DOT__execute__DOT__alu_io_alu_out
                                            : ((IData)(vlSelf->Core__DOT__regfile__DOT__has_mem_hazard)
                                                ? vlSelf->Core__DOT__mem__DOT__wdata
                                                : (
                                                   (0x1fU 
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
                                                        : vlSelf->Core__DOT__regfile__DOT___GEN_26)))))))
                                        : 0ULL)),64);
            tracep->chgQData(oldp+15,(((0U != (0x1fU 
                                               & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))
                                        ? ((IData)(vlSelf->Core__DOT__regfile__DOT__has_ex_hazard)
                                            ? vlSelf->Core__DOT__execute__DOT__alu_io_alu_out
                                            : ((IData)(vlSelf->Core__DOT__regfile__DOT__has_mem_hazard)
                                                ? vlSelf->Core__DOT__mem__DOT__wdata
                                                : (
                                                   (0x1fU 
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
                                                        : vlSelf->Core__DOT__regfile__DOT___GEN_58)))))))
                                        : 0ULL)),64);
            tracep->chgQData(oldp+17,(vlSelf->Core__DOT__decode__DOT__io_rs1_data_o_REG),64);
            tracep->chgQData(oldp+19,(vlSelf->Core__DOT__decode__DOT__io_rs2_data_o_REG),64);
            tracep->chgBit(oldp+21,(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG));
            tracep->chgCData(oldp+22,(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG),5);
            tracep->chgQData(oldp+23,(vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG),64);
            tracep->chgQData(oldp+25,(vlSelf->Core__DOT__regfile__DOT__rf_0),64);
            tracep->chgQData(oldp+27,(vlSelf->Core__DOT__regfile__DOT__rf_1),64);
            tracep->chgQData(oldp+29,(vlSelf->Core__DOT__regfile__DOT__rf_2),64);
            tracep->chgQData(oldp+31,(vlSelf->Core__DOT__regfile__DOT__rf_3),64);
            tracep->chgQData(oldp+33,(vlSelf->Core__DOT__regfile__DOT__rf_4),64);
            tracep->chgQData(oldp+35,(vlSelf->Core__DOT__regfile__DOT__rf_5),64);
            tracep->chgQData(oldp+37,(vlSelf->Core__DOT__regfile__DOT__rf_6),64);
            tracep->chgQData(oldp+39,(vlSelf->Core__DOT__regfile__DOT__rf_7),64);
            tracep->chgQData(oldp+41,(vlSelf->Core__DOT__regfile__DOT__rf_8),64);
            tracep->chgQData(oldp+43,(vlSelf->Core__DOT__regfile__DOT__rf_9),64);
            tracep->chgQData(oldp+45,(vlSelf->Core__DOT__regfile__DOT__rf_10),64);
            tracep->chgQData(oldp+47,(vlSelf->Core__DOT__regfile__DOT__rf_11),64);
            tracep->chgQData(oldp+49,(vlSelf->Core__DOT__regfile__DOT__rf_12),64);
            tracep->chgQData(oldp+51,(vlSelf->Core__DOT__regfile__DOT__rf_13),64);
            tracep->chgQData(oldp+53,(vlSelf->Core__DOT__regfile__DOT__rf_14),64);
            tracep->chgQData(oldp+55,(vlSelf->Core__DOT__regfile__DOT__rf_15),64);
            tracep->chgQData(oldp+57,(vlSelf->Core__DOT__regfile__DOT__rf_16),64);
            tracep->chgQData(oldp+59,(vlSelf->Core__DOT__regfile__DOT__rf_17),64);
            tracep->chgQData(oldp+61,(vlSelf->Core__DOT__regfile__DOT__rf_18),64);
            tracep->chgQData(oldp+63,(vlSelf->Core__DOT__regfile__DOT__rf_19),64);
            tracep->chgQData(oldp+65,(vlSelf->Core__DOT__regfile__DOT__rf_20),64);
            tracep->chgQData(oldp+67,(vlSelf->Core__DOT__regfile__DOT__rf_21),64);
            tracep->chgQData(oldp+69,(vlSelf->Core__DOT__regfile__DOT__rf_22),64);
            tracep->chgQData(oldp+71,(vlSelf->Core__DOT__regfile__DOT__rf_23),64);
            tracep->chgQData(oldp+73,(vlSelf->Core__DOT__regfile__DOT__rf_24),64);
            tracep->chgQData(oldp+75,(vlSelf->Core__DOT__regfile__DOT__rf_25),64);
            tracep->chgQData(oldp+77,(vlSelf->Core__DOT__regfile__DOT__rf_26),64);
            tracep->chgQData(oldp+79,(vlSelf->Core__DOT__regfile__DOT__rf_27),64);
            tracep->chgQData(oldp+81,(vlSelf->Core__DOT__regfile__DOT__rf_28),64);
            tracep->chgQData(oldp+83,(vlSelf->Core__DOT__regfile__DOT__rf_29),64);
            tracep->chgQData(oldp+85,(vlSelf->Core__DOT__regfile__DOT__rf_30),64);
            tracep->chgQData(oldp+87,(vlSelf->Core__DOT__regfile__DOT__rf_31),64);
            tracep->chgBit(oldp+89,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en));
            tracep->chgIData(oldp+90,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),32);
            tracep->chgQData(oldp+91,(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out),64);
            tracep->chgBit(oldp+93,(vlSelf->Core__DOT__mem__DOT__wen));
            tracep->chgIData(oldp+94,(vlSelf->Core__DOT__mem__DOT__waddr),32);
            tracep->chgQData(oldp+95,(vlSelf->Core__DOT__mem__DOT__wdata),64);
            tracep->chgIData(oldp+97,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc),32);
            tracep->chgIData(oldp+98,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst),32);
            tracep->chgCData(oldp+99,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),5);
            tracep->chgBit(oldp+100,(vlSelf->Core__DOT__execute__DOT__io_is_ebreak_o_REG));
            tracep->chgIData(oldp+101,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc),32);
            tracep->chgIData(oldp+102,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_inst),32);
            tracep->chgBit(oldp+103,(vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG));
            tracep->chgIData(oldp+104,(vlSelf->Core__DOT__fetch__DOT__pc),32);
            tracep->chgIData(oldp+105,((vlSelf->Core__DOT__fetch__DOT__pc 
                                        >> 2U)),30);
            tracep->chgIData(oldp+106,(((IData)(4U) 
                                        + (0xfffffffcU 
                                           & vlSelf->Core__DOT__fetch__DOT__pc))),32);
            tracep->chgIData(oldp+107,(vlSelf->Core__DOT__decode__DOT__inst),32);
            tracep->chgCData(oldp+108,(vlSelf->Core__DOT__decode__DOT__c0_1),3);
            tracep->chgBit(oldp+109,(vlSelf->Core__DOT__decode__DOT__c0_3));
            tracep->chgCData(oldp+110,(vlSelf->Core__DOT__decode__DOT__c0_4),3);
            tracep->chgIData(oldp+111,(((vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x1fU) ? 0x1fffffU
                                         : 0U)),21);
            tracep->chgSData(oldp+112,((0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U))),11);
            tracep->chgIData(oldp+113,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                           >> 0x1fU)
                                           ? 0x1fffffU
                                           : 0U) << 0xbU) 
                                        | (0x7ffU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))),32);
            tracep->chgCData(oldp+114,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x19U))),6);
            tracep->chgIData(oldp+115,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                           >> 0x1fU)
                                           ? 0x1fffffU
                                           : 0U) << 0xbU) 
                                        | ((0x7e0U 
                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 7U))))),32);
            tracep->chgIData(oldp+116,(((vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x1fU) ? 0xfffffU
                                         : 0U)),20);
            tracep->chgBit(oldp+117,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 7U))));
            tracep->chgCData(oldp+118,((0xfU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                >> 8U))),4);
            tracep->chgIData(oldp+119,(((((vlSelf->Core__DOT__decode__DOT__inst 
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
            tracep->chgIData(oldp+120,((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0xcU)),20);
            tracep->chgIData(oldp+121,((0xfffff000U 
                                        & vlSelf->Core__DOT__decode__DOT__inst)),32);
            tracep->chgSData(oldp+122,(((vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x1fU) ? 0xfffU
                                         : 0U)),12);
            tracep->chgCData(oldp+123,((0xffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xcU))),8);
            tracep->chgBit(oldp+124,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U))));
            tracep->chgSData(oldp+125,((0x3ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x15U))),10);
            tracep->chgIData(oldp+126,(((((vlSelf->Core__DOT__decode__DOT__inst 
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
            tracep->chgCData(oldp+127,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U))),6);
            tracep->chgIData(oldp+128,((((0x37U != 
                                          (0x7fU & vlSelf->Core__DOT__decode__DOT__inst)) 
                                         & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_601))
                                         ? (0x1fU & 
                                            (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U))
                                         : (0x3fU & 
                                            (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U)))),32);
            tracep->chgIData(oldp+129,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU))),32);
            tracep->chgBit(oldp+130,((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                       & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
            tracep->chgBit(oldp+131,((((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en) 
                                       & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
            tracep->chgBit(oldp+132,(vlSelf->Core__DOT__regfile__DOT__has_ex_hazard));
            tracep->chgBit(oldp+133,((((IData)(vlSelf->Core__DOT__mem__DOT__wen) 
                                       & ((IData)(vlSelf->Core__DOT__mem__DOT__waddr) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
            tracep->chgBit(oldp+134,((((IData)(vlSelf->Core__DOT__mem__DOT__wen) 
                                       & ((IData)(vlSelf->Core__DOT__mem__DOT__waddr) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_2)))));
            tracep->chgBit(oldp+135,(vlSelf->Core__DOT__regfile__DOT__has_mem_hazard));
            tracep->chgQData(oldp+136,(vlSelf->Core__DOT__execute__DOT__alu_io_in1),64);
            tracep->chgQData(oldp+138,(vlSelf->Core__DOT__execute__DOT__alu_io_in2),64);
            tracep->chgCData(oldp+140,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code),4);
            tracep->chgBit(oldp+141,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type));
            tracep->chgCData(oldp+142,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src),3);
            tracep->chgIData(oldp+143,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm),32);
            tracep->chgIData(oldp+144,(((vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+145,(((IData)(4U) 
                                        + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)),32);
            tracep->chgQData(oldp+146,(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0),64);
            tracep->chgIData(oldp+148,((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)),32);
            tracep->chgIData(oldp+149,(((1U & (IData)(
                                                      (vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgCData(oldp+150,(vlSelf->Core__DOT__mem__DOT__waddr),5);
            tracep->chgIData(oldp+151,(vlSelf->Core__DOT__wb_dpi__DOT__inst1),32);
            tracep->chgIData(oldp+152,(vlSelf->Core__DOT__wb_dpi__DOT__pc1),32);
        }
        tracep->chgBit(oldp+153,(vlSelf->clock));
        tracep->chgBit(oldp+154,(vlSelf->reset));
        tracep->chgIData(oldp+155,(vlSelf->io_imem_raddr),32);
        tracep->chgIData(oldp+156,(vlSelf->io_imem_waddr),32);
        tracep->chgQData(oldp+157,(vlSelf->io_imem_wdata),64);
        tracep->chgBit(oldp+159,(vlSelf->io_imem_ren));
        tracep->chgBit(oldp+160,(vlSelf->io_imem_wen));
        tracep->chgCData(oldp+161,(vlSelf->io_imem_wmask),8);
        tracep->chgQData(oldp+162,(vlSelf->io_imem_rdata),64);
        tracep->chgBit(oldp+164,(vlSelf->io_imem_read_ok));
        tracep->chgBit(oldp+165,(vlSelf->io_imem_write_ok));
        tracep->chgIData(oldp+166,(vlSelf->io_dmem_raddr),32);
        tracep->chgIData(oldp+167,(vlSelf->io_dmem_waddr),32);
        tracep->chgQData(oldp+168,(vlSelf->io_dmem_wdata),64);
        tracep->chgBit(oldp+170,(vlSelf->io_dmem_ren));
        tracep->chgBit(oldp+171,(vlSelf->io_dmem_wen));
        tracep->chgCData(oldp+172,(vlSelf->io_dmem_wmask),8);
        tracep->chgQData(oldp+173,(vlSelf->io_dmem_rdata),64);
        tracep->chgBit(oldp+175,(vlSelf->io_dmem_read_ok));
        tracep->chgBit(oldp+176,(vlSelf->io_dmem_write_ok));
        tracep->chgQData(oldp+177,(vlSelf->io_regs_0),64);
        tracep->chgQData(oldp+179,(vlSelf->io_regs_1),64);
        tracep->chgQData(oldp+181,(vlSelf->io_regs_2),64);
        tracep->chgQData(oldp+183,(vlSelf->io_regs_3),64);
        tracep->chgQData(oldp+185,(vlSelf->io_regs_4),64);
        tracep->chgQData(oldp+187,(vlSelf->io_regs_5),64);
        tracep->chgQData(oldp+189,(vlSelf->io_regs_6),64);
        tracep->chgQData(oldp+191,(vlSelf->io_regs_7),64);
        tracep->chgQData(oldp+193,(vlSelf->io_regs_8),64);
        tracep->chgQData(oldp+195,(vlSelf->io_regs_9),64);
        tracep->chgQData(oldp+197,(vlSelf->io_regs_10),64);
        tracep->chgQData(oldp+199,(vlSelf->io_regs_11),64);
        tracep->chgQData(oldp+201,(vlSelf->io_regs_12),64);
        tracep->chgQData(oldp+203,(vlSelf->io_regs_13),64);
        tracep->chgQData(oldp+205,(vlSelf->io_regs_14),64);
        tracep->chgQData(oldp+207,(vlSelf->io_regs_15),64);
        tracep->chgQData(oldp+209,(vlSelf->io_regs_16),64);
        tracep->chgQData(oldp+211,(vlSelf->io_regs_17),64);
        tracep->chgQData(oldp+213,(vlSelf->io_regs_18),64);
        tracep->chgQData(oldp+215,(vlSelf->io_regs_19),64);
        tracep->chgQData(oldp+217,(vlSelf->io_regs_20),64);
        tracep->chgQData(oldp+219,(vlSelf->io_regs_21),64);
        tracep->chgQData(oldp+221,(vlSelf->io_regs_22),64);
        tracep->chgQData(oldp+223,(vlSelf->io_regs_23),64);
        tracep->chgQData(oldp+225,(vlSelf->io_regs_24),64);
        tracep->chgQData(oldp+227,(vlSelf->io_regs_25),64);
        tracep->chgQData(oldp+229,(vlSelf->io_regs_26),64);
        tracep->chgQData(oldp+231,(vlSelf->io_regs_27),64);
        tracep->chgQData(oldp+233,(vlSelf->io_regs_28),64);
        tracep->chgQData(oldp+235,(vlSelf->io_regs_29),64);
        tracep->chgQData(oldp+237,(vlSelf->io_regs_30),64);
        tracep->chgQData(oldp+239,(vlSelf->io_regs_31),64);
        tracep->chgIData(oldp+241,((IData)(vlSelf->io_imem_rdata)),32);
        tracep->chgBit(oldp+242,(((IData)(vlSelf->io_imem_read_ok) 
                                  & (IData)(vlSelf->Core__DOT__decode__DOT__c0_3))));
        tracep->chgBit(oldp+243,((1U & (~ (IData)(vlSelf->io_imem_read_ok)))));
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
    }
}
