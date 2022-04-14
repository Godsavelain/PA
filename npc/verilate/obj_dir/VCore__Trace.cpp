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
            tracep->chgCData(oldp+1,(((0x37U == (0x7fU 
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
            tracep->chgBit(oldp+2,(((0x37U != (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst)) 
                                    & ((0x17U != (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst)) 
                                       & ((0x6fU != 
                                           (0x7fU & vlSelf->Core__DOT__decode__DOT__inst)) 
                                          & ((0x67U 
                                              != (0x707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst)) 
                                             & ((0x63U 
                                                 != 
                                                 (0x707fU 
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
            tracep->chgCData(oldp+3,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 7U))),5);
            tracep->chgBit(oldp+4,(((0x37U == (0x7fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst)) 
                                    | ((0x17U == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst)) 
                                       | ((0x6fU == 
                                           (0x7fU & vlSelf->Core__DOT__decode__DOT__inst)) 
                                          | ((0x67U 
                                              == (0x707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst)) 
                                             | ((0x63U 
                                                 != 
                                                 (0x707fU 
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
            tracep->chgCData(oldp+5,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+6,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x14U))),5);
            tracep->chgQData(oldp+7,(((0U != (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU)))
                                       ? ((0x1fU == 
                                           (0x1fU & 
                                            (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0xfU)))
                                           ? vlSelf->Core__DOT__regfile__DOT__rf_31
                                           : ((0x1eU 
                                               == (0x1fU 
                                                   & (vlSelf->Core__DOT__decode__DOT__inst 
                                                      >> 0xfU)))
                                               ? vlSelf->Core__DOT__regfile__DOT__rf_30
                                               : ((0x1dU 
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
                                                     : vlSelf->Core__DOT__regfile__DOT___GEN_26)))))
                                       : 0ULL)),64);
            tracep->chgQData(oldp+9,(((0U != (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))
                                       ? ((0x1fU == 
                                           (0x1fU & 
                                            (vlSelf->Core__DOT__decode__DOT__inst 
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
            tracep->chgBit(oldp+11,(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG));
            tracep->chgCData(oldp+12,(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG),5);
            tracep->chgQData(oldp+13,(vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG),64);
            tracep->chgQData(oldp+15,(vlSelf->Core__DOT__regfile__DOT__rf_0),64);
            tracep->chgQData(oldp+17,(vlSelf->Core__DOT__regfile__DOT__rf_1),64);
            tracep->chgQData(oldp+19,(vlSelf->Core__DOT__regfile__DOT__rf_2),64);
            tracep->chgQData(oldp+21,(vlSelf->Core__DOT__regfile__DOT__rf_3),64);
            tracep->chgQData(oldp+23,(vlSelf->Core__DOT__regfile__DOT__rf_4),64);
            tracep->chgQData(oldp+25,(vlSelf->Core__DOT__regfile__DOT__rf_5),64);
            tracep->chgQData(oldp+27,(vlSelf->Core__DOT__regfile__DOT__rf_6),64);
            tracep->chgQData(oldp+29,(vlSelf->Core__DOT__regfile__DOT__rf_7),64);
            tracep->chgQData(oldp+31,(vlSelf->Core__DOT__regfile__DOT__rf_8),64);
            tracep->chgQData(oldp+33,(vlSelf->Core__DOT__regfile__DOT__rf_9),64);
            tracep->chgQData(oldp+35,(vlSelf->Core__DOT__regfile__DOT__rf_10),64);
            tracep->chgQData(oldp+37,(vlSelf->Core__DOT__regfile__DOT__rf_11),64);
            tracep->chgQData(oldp+39,(vlSelf->Core__DOT__regfile__DOT__rf_12),64);
            tracep->chgQData(oldp+41,(vlSelf->Core__DOT__regfile__DOT__rf_13),64);
            tracep->chgQData(oldp+43,(vlSelf->Core__DOT__regfile__DOT__rf_14),64);
            tracep->chgQData(oldp+45,(vlSelf->Core__DOT__regfile__DOT__rf_15),64);
            tracep->chgQData(oldp+47,(vlSelf->Core__DOT__regfile__DOT__rf_16),64);
            tracep->chgQData(oldp+49,(vlSelf->Core__DOT__regfile__DOT__rf_17),64);
            tracep->chgQData(oldp+51,(vlSelf->Core__DOT__regfile__DOT__rf_18),64);
            tracep->chgQData(oldp+53,(vlSelf->Core__DOT__regfile__DOT__rf_19),64);
            tracep->chgQData(oldp+55,(vlSelf->Core__DOT__regfile__DOT__rf_20),64);
            tracep->chgQData(oldp+57,(vlSelf->Core__DOT__regfile__DOT__rf_21),64);
            tracep->chgQData(oldp+59,(vlSelf->Core__DOT__regfile__DOT__rf_22),64);
            tracep->chgQData(oldp+61,(vlSelf->Core__DOT__regfile__DOT__rf_23),64);
            tracep->chgQData(oldp+63,(vlSelf->Core__DOT__regfile__DOT__rf_24),64);
            tracep->chgQData(oldp+65,(vlSelf->Core__DOT__regfile__DOT__rf_25),64);
            tracep->chgQData(oldp+67,(vlSelf->Core__DOT__regfile__DOT__rf_26),64);
            tracep->chgQData(oldp+69,(vlSelf->Core__DOT__regfile__DOT__rf_27),64);
            tracep->chgQData(oldp+71,(vlSelf->Core__DOT__regfile__DOT__rf_28),64);
            tracep->chgQData(oldp+73,(vlSelf->Core__DOT__regfile__DOT__rf_29),64);
            tracep->chgQData(oldp+75,(vlSelf->Core__DOT__regfile__DOT__rf_30),64);
            tracep->chgQData(oldp+77,(vlSelf->Core__DOT__regfile__DOT__rf_31),64);
            tracep->chgCData(oldp+79,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),5);
            tracep->chgBit(oldp+80,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en));
            tracep->chgQData(oldp+81,(vlSelf->Core__DOT__execute_io_ex_rs1_i_REG),64);
            tracep->chgQData(oldp+83,(vlSelf->Core__DOT__execute_io_ex_rs2_i_REG),64);
            tracep->chgQData(oldp+85,(((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type)
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
            tracep->chgIData(oldp+87,(vlSelf->Core__DOT__fetch__DOT__pc),32);
            tracep->chgIData(oldp+88,((vlSelf->Core__DOT__fetch__DOT__pc 
                                       >> 2U)),30);
            tracep->chgIData(oldp+89,(((IData)(4U) 
                                       + (0xfffffffcU 
                                          & vlSelf->Core__DOT__fetch__DOT__pc))),32);
            tracep->chgIData(oldp+90,(vlSelf->Core__DOT__decode__DOT__inst),32);
            tracep->chgQData(oldp+91,(vlSelf->Core__DOT__execute__DOT__rs1),64);
            tracep->chgQData(oldp+93,(vlSelf->Core__DOT__execute__DOT__rs2),64);
            tracep->chgCData(oldp+95,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code),4);
            tracep->chgBit(oldp+96,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type));
            tracep->chgQData(oldp+97,(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0),64);
            tracep->chgIData(oldp+99,((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)),32);
            tracep->chgIData(oldp+100,(((1U & (IData)(
                                                      (vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgCData(oldp+101,(vlSelf->Core__DOT__mem__DOT__waddr),5);
            tracep->chgBit(oldp+102,(vlSelf->Core__DOT__mem__DOT__wen));
            tracep->chgQData(oldp+103,(vlSelf->Core__DOT__mem__DOT__wdata),64);
        }
        tracep->chgBit(oldp+105,(vlSelf->clock));
        tracep->chgBit(oldp+106,(vlSelf->reset));
        tracep->chgIData(oldp+107,(vlSelf->io_imem_raddr),32);
        tracep->chgIData(oldp+108,(vlSelf->io_imem_waddr),32);
        tracep->chgQData(oldp+109,(vlSelf->io_imem_wdata),64);
        tracep->chgBit(oldp+111,(vlSelf->io_imem_ren));
        tracep->chgBit(oldp+112,(vlSelf->io_imem_wen));
        tracep->chgCData(oldp+113,(vlSelf->io_imem_wmask),8);
        tracep->chgQData(oldp+114,(vlSelf->io_imem_rdata),64);
        tracep->chgBit(oldp+116,(vlSelf->io_imem_read_ok));
        tracep->chgBit(oldp+117,(vlSelf->io_imem_write_ok));
        tracep->chgIData(oldp+118,(vlSelf->io_dmem_raddr),32);
        tracep->chgIData(oldp+119,(vlSelf->io_dmem_waddr),32);
        tracep->chgQData(oldp+120,(vlSelf->io_dmem_wdata),64);
        tracep->chgBit(oldp+122,(vlSelf->io_dmem_ren));
        tracep->chgBit(oldp+123,(vlSelf->io_dmem_wen));
        tracep->chgCData(oldp+124,(vlSelf->io_dmem_wmask),8);
        tracep->chgQData(oldp+125,(vlSelf->io_dmem_rdata),64);
        tracep->chgBit(oldp+127,(vlSelf->io_dmem_read_ok));
        tracep->chgBit(oldp+128,(vlSelf->io_dmem_write_ok));
        tracep->chgQData(oldp+129,(vlSelf->io_regs_0),64);
        tracep->chgQData(oldp+131,(vlSelf->io_regs_1),64);
        tracep->chgQData(oldp+133,(vlSelf->io_regs_2),64);
        tracep->chgQData(oldp+135,(vlSelf->io_regs_3),64);
        tracep->chgQData(oldp+137,(vlSelf->io_regs_4),64);
        tracep->chgQData(oldp+139,(vlSelf->io_regs_5),64);
        tracep->chgQData(oldp+141,(vlSelf->io_regs_6),64);
        tracep->chgQData(oldp+143,(vlSelf->io_regs_7),64);
        tracep->chgQData(oldp+145,(vlSelf->io_regs_8),64);
        tracep->chgQData(oldp+147,(vlSelf->io_regs_9),64);
        tracep->chgQData(oldp+149,(vlSelf->io_regs_10),64);
        tracep->chgQData(oldp+151,(vlSelf->io_regs_11),64);
        tracep->chgQData(oldp+153,(vlSelf->io_regs_12),64);
        tracep->chgQData(oldp+155,(vlSelf->io_regs_13),64);
        tracep->chgQData(oldp+157,(vlSelf->io_regs_14),64);
        tracep->chgQData(oldp+159,(vlSelf->io_regs_15),64);
        tracep->chgQData(oldp+161,(vlSelf->io_regs_16),64);
        tracep->chgQData(oldp+163,(vlSelf->io_regs_17),64);
        tracep->chgQData(oldp+165,(vlSelf->io_regs_18),64);
        tracep->chgQData(oldp+167,(vlSelf->io_regs_19),64);
        tracep->chgQData(oldp+169,(vlSelf->io_regs_20),64);
        tracep->chgQData(oldp+171,(vlSelf->io_regs_21),64);
        tracep->chgQData(oldp+173,(vlSelf->io_regs_22),64);
        tracep->chgQData(oldp+175,(vlSelf->io_regs_23),64);
        tracep->chgQData(oldp+177,(vlSelf->io_regs_24),64);
        tracep->chgQData(oldp+179,(vlSelf->io_regs_25),64);
        tracep->chgQData(oldp+181,(vlSelf->io_regs_26),64);
        tracep->chgQData(oldp+183,(vlSelf->io_regs_27),64);
        tracep->chgQData(oldp+185,(vlSelf->io_regs_28),64);
        tracep->chgQData(oldp+187,(vlSelf->io_regs_29),64);
        tracep->chgQData(oldp+189,(vlSelf->io_regs_30),64);
        tracep->chgQData(oldp+191,(vlSelf->io_regs_31),64);
        tracep->chgIData(oldp+193,((IData)(vlSelf->io_imem_rdata)),32);
        tracep->chgBit(oldp+194,((1U & (~ (IData)(vlSelf->io_imem_read_ok)))));
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
