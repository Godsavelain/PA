// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore___024root.h"
#include "VCore__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VCore___024root___sequent__TOP__3(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_856;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_934;
    CData/*2:0*/ Core__DOT__decode__DOT___ctrl_T_1072;
    // Body
    vlSelf->Core__DOT__decode__DOT___ctrl_T_718 = (
                                                   (0x63U 
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
                                                           ? 0U
                                                           : 
                                                          ((0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 0U
                                                            : 
                                                           ((0x4003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 0U
                                                             : 
                                                            ((0x5003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 0U
                                                              : 
                                                             ((0x23U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                                               ? 0U
                                                               : 
                                                              ((0x1023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                                                ? 0U
                                                                : 
                                                               ((0x2023U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                                                 ? 0U
                                                                 : 
                                                                ((0x13U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                                                  ? 0U
                                                                  : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_703))))))))))))))));
    vlSelf->Core__DOT__decode__DOT___ctrl_T_793 = (
                                                   (0x17U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                   & ((0x6fU 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                      & ((0x67U 
                                                          != 
                                                          (0x707fU 
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
                                                                  & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_787)))))));
    if ((3U == (0x707fU & vlSelf->Core__DOT__decode__DOT__inst))) {
        Core__DOT__decode__DOT___ctrl_T_1072 = 1U;
        Core__DOT__decode__DOT___ctrl_T_856 = 1U;
    } else {
        Core__DOT__decode__DOT___ctrl_T_1072 = ((0x1003U 
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
                                                  : 
                                                 ((0x4003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 1U
                                                   : 
                                                  ((0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 2U
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 2U
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 2U
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 1U
                                                        : 
                                                       ((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 1U
                                                         : 
                                                        ((0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 1U
                                                          : 
                                                         ((0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 1U
                                                           : 
                                                          ((0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 1U
                                                            : 
                                                           ((0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 1U
                                                             : 
                                                            ((0x1013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 6U
                                                              : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_1057)))))))))))))));
        Core__DOT__decode__DOT___ctrl_T_856 = ((0x1003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                                ? 1U
                                                : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 1U
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 1U
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 1U
                                                       : 
                                                      ((0x1023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 1U
                                                        : 
                                                       ((0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 1U
                                                         : 
                                                        ((0x13U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 1U
                                                          : 
                                                         ((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 1U
                                                           : 
                                                          ((0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 1U
                                                            : 
                                                           ((0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 1U
                                                             : 
                                                            ((0x6013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                                              ? 1U
                                                              : 
                                                             ((0x7013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Core__DOT__decode__DOT__inst))
                                                               ? 1U
                                                               : 
                                                              ((0x1013U 
                                                                == 
                                                                (0xfc00707fU 
                                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                                                ? 1U
                                                                : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_841)))))))))))))));
    }
    Core__DOT__decode__DOT___ctrl_T_934 = ((0x63U == 
                                            (0x707fU 
                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                            ? 1U : 
                                           ((0x1063U 
                                             == (0x707fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 1U : 
                                            ((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 1U : 
                                             ((0x5063U 
                                               == (0x707fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 1U
                                               : ((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 1U
                                                   : 
                                                  ((0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 2U
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 2U
                                                      : 
                                                     ((0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 2U
                                                       : 
                                                      ((0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 2U
                                                        : 
                                                       ((0x5003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 2U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 2U
                                                          : 
                                                         ((0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 2U
                                                           : 
                                                          ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 2U
                                                            : 
                                                           ((0x13U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 2U
                                                             : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_919))))))))))))))));
    vlSelf->Core__DOT__decode__DOT__c0_4 = ((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 4U : 
                                            ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                              ? 4U : 
                                             ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                               ? 5U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 1U
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
                                                     ? 3U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 3U
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 3U
                                                       : 
                                                      ((0x6063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 3U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 3U
                                                         : (IData)(Core__DOT__decode__DOT___ctrl_T_1072)))))))))));
    if ((0x17U == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))) {
        vlSelf->Core__DOT__decode__DOT___ctrl_T_865 = 4U;
        vlSelf->Core__DOT__decode__DOT___ctrl_T_937 = 2U;
    } else {
        vlSelf->Core__DOT__decode__DOT___ctrl_T_865 
            = ((0x6fU == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                ? 4U : ((0x67U == (0x707fU & vlSelf->Core__DOT__decode__DOT__inst))
                         ? 1U : ((0x63U == (0x707fU 
                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                  ? 1U : ((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->Core__DOT__decode__DOT__inst))
                                           ? 1U : (
                                                   (0x4063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 1U
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 1U
                                                      : 
                                                     ((0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 1U
                                                       : (IData)(Core__DOT__decode__DOT___ctrl_T_856)))))))));
        vlSelf->Core__DOT__decode__DOT___ctrl_T_937 
            = ((0x6fU == (0x7fU & vlSelf->Core__DOT__decode__DOT__inst))
                ? 2U : ((0x67U == (0x707fU & vlSelf->Core__DOT__decode__DOT__inst))
                         ? 1U : (IData)(Core__DOT__decode__DOT___ctrl_T_934)));
    }
    vlSelf->Core__DOT__decode__DOT___io_out_bits_imm_T_9 
        = ((5U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
            ? ((((vlSelf->Core__DOT__decode__DOT__inst 
                  >> 0x1fU) ? 0xfffU : 0U) << 0x14U) 
               | ((0xff000U & vlSelf->Core__DOT__decode__DOT__inst) 
                  | ((0x800U & (vlSelf->Core__DOT__decode__DOT__inst 
                                >> 9U)) | (0x7feU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))))
            : ((4U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                ? (0xfffff000U & vlSelf->Core__DOT__decode__DOT__inst)
                : ((3U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                    ? ((((vlSelf->Core__DOT__decode__DOT__inst 
                          >> 0x1fU) ? 0xfffffU : 0U) 
                        << 0xcU) | ((0x800U & (vlSelf->Core__DOT__decode__DOT__inst 
                                               << 4U)) 
                                    | ((0x7e0U & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)) 
                                       | (0x1eU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                   >> 7U)))))
                    : ((2U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                        ? ((((vlSelf->Core__DOT__decode__DOT__inst 
                              >> 0x1fU) ? 0x1fffffU
                              : 0U) << 0xbU) | ((0x7e0U 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->Core__DOT__decode__DOT__inst 
                                                      >> 7U))))
                        : ((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                            ? ((((vlSelf->Core__DOT__decode__DOT__inst 
                                  >> 0x1fU) ? 0x1fffffU
                                  : 0U) << 0xbU) | 
                               (0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                          >> 0x14U)))
                            : 0U)))));
    vlSelf->Core__DOT__decode__DOT__c0_1 = ((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                             ? 3U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_865));
    vlSelf->Core__DOT__decode_io_ren2 = ((1U == ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                                  ? 2U
                                                  : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_937))) 
                                         | (3U == (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 0U
                                                    : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_505))));
    vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard 
        = (((IData)(vlSelf->Core__DOT__execute_io_ex_rd_en) 
            & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
               == (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                            >> 0xfU)))) & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)));
    vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard 
        = (((IData)(vlSelf->Core__DOT__mem_io_mem_rd_en) 
            & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
               == (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                            >> 0xfU)))) & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)));
    vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard 
        = (((IData)(vlSelf->Core__DOT__execute_io_ex_rd_en) 
            & ((IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr) 
               == (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                            >> 0x14U)))) & (IData)(vlSelf->Core__DOT__decode_io_ren2));
    vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard 
        = (((IData)(vlSelf->Core__DOT__mem_io_mem_rd_en) 
            & ((IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr) 
               == (0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                            >> 0x14U)))) & (IData)(vlSelf->Core__DOT__decode_io_ren2));
}

VL_INLINE_OPT void VCore___024root___combo__TOP__5(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___combo__TOP__5\n"); );
    // Body
    vlSelf->Core__DOT__mem__DOT__ld_data_raw = (vlSelf->io_dmem_rdata 
                                                >> 
                                                (0x38U 
                                                 & (vlSelf->Core__DOT__mem__DOT__reg_mem_addr 
                                                    << 3U)));
    vlSelf->Core__DOT__mem__DOT__req_wait = ((((IData)(vlSelf->Core__DOT__mem__DOT__is_load) 
                                               & (~ (IData)(vlSelf->io_dmem_read_ok))) 
                                              | ((3U 
                                                  == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                                 & (~ (IData)(vlSelf->io_dmem_write_ok)))) 
                                             & (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid));
    vlSelf->Core__DOT__mem__DOT___ld_data_u_T_9 = (
                                                   (3U 
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
                                                                         & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)))))));
    vlSelf->Core__DOT__mem__DOT__ld_data = ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                             ? ((3U 
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
                                             : 0ULL);
    vlSelf->Core__DOT__mem__DOT__stall = ((IData)(vlSelf->Core__DOT__mem__DOT__req_wait) 
                                          | ((~ (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__completed)) 
                                             & (IData)(vlSelf->Core__DOT__mem__DOT__mdu_valid)));
    vlSelf->Core__DOT__mem_io_mem_rd_data = ((IData)(vlSelf->Core__DOT__mem__DOT__mdu_valid)
                                              ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out
                                              : ((IData)(vlSelf->Core__DOT__mem__DOT__is_load)
                                                  ? 
                                                 ((2U 
                                                   == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                                   ? 
                                                  ((2U 
                                                    == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                                    ? vlSelf->Core__DOT__mem__DOT___ld_data_u_T_9
                                                    : 0ULL)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                                    ? vlSelf->Core__DOT__mem__DOT__ld_data
                                                    : 0ULL))
                                                  : vlSelf->Core__DOT__mem__DOT__wdata));
    vlSelf->io_dmem_ren = ((~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)) 
                           & ((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                               & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                              & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall))));
    vlSelf->io_dmem_wen = ((~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)) 
                           & (((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                               & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                              & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall))));
    vlSelf->Core__DOT__execute__DOT__mdu_io_mdu_valid 
        = (((0U != (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code)) 
            & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
           & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)));
    vlSelf->Core__DOT__execute_io_jmp_packet_o_mis 
        = (((((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_jmp)
               ? vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc
               : ((IData)(4U) + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)) 
             != vlSelf->Core__DOT__decode__DOT__reg_pnpc) 
            & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
           & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)));
    vlSelf->Core__DOT__decode__DOT__stall = ((IData)(vlSelf->Core__DOT__mem__DOT__stall) 
                                             | (((((1U 
                                                    == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                                   | (2U 
                                                      == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code)) 
                                                     & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))) 
                                                 & ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard) 
                                                    | (IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard))) 
                                                | (((1U 
                                                     == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                                    | (2U 
                                                       == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))) 
                                                   & ((IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard) 
                                                      | (IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard)))));
    vlSelf->Core__DOT__fetch__DOT__stall = (1U & ((~ (IData)(vlSelf->io_imem_read_ok)) 
                                                  | (IData)(vlSelf->Core__DOT__decode__DOT__stall)));
    vlSelf->Core__DOT__fetch__DOT___GEN_0 = (((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis) 
                                              & (IData)(vlSelf->Core__DOT__fetch__DOT__stall)) 
                                             | (IData)(vlSelf->Core__DOT__fetch__DOT__use_reg_npc));
}

void VCore___024root___sequent__TOP__2(VCore___024root* vlSelf);

void VCore___024root___eval(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VCore___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VCore___024root___sequent__TOP__3(vlSelf);
    }
    VCore___024root___combo__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VCore___024root___change_request_1(VCore___024root* vlSelf);

VL_INLINE_OPT QData VCore___024root___change_request(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___change_request\n"); );
    // Body
    return (VCore___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VCore___024root___change_request_1(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCore___024root___eval_debug_assertions(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_imem_read_ok & 0xfeU))) {
        Verilated::overWidthError("io_imem_read_ok");}
    if (VL_UNLIKELY((vlSelf->io_imem_write_ok & 0xfeU))) {
        Verilated::overWidthError("io_imem_write_ok");}
    if (VL_UNLIKELY((vlSelf->io_dmem_read_ok & 0xfeU))) {
        Verilated::overWidthError("io_dmem_read_ok");}
    if (VL_UNLIKELY((vlSelf->io_dmem_write_ok & 0xfeU))) {
        Verilated::overWidthError("io_dmem_write_ok");}
}
#endif  // VL_DEBUG
