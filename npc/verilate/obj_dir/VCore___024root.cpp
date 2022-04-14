// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore___024root.h"
#include "VCore__Syms.h"

//==========

VL_INLINE_OPT void VCore___024root___sequent__TOP__2(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Core__DOT__fetch__DOT__pc = 0x80000000U;
    } else if (vlSelf->io_imem_read_ok) {
        vlSelf->Core__DOT__fetch__DOT__pc = vlSelf->Core__DOT__fetch__DOT__npc;
    }
    vlSelf->io_imem_raddr = (0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc);
    vlSelf->Core__DOT__fetch__DOT__npc = ((IData)(4U) 
                                          + (0xfffffffcU 
                                             & vlSelf->Core__DOT__fetch__DOT__pc));
}

void VCore___024root___eval(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VCore___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
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
