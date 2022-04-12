// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstFetch.h for the primary calling header

#include "VInstFetch___024root.h"
#include "VInstFetch__Syms.h"

//==========

VL_INLINE_OPT void VInstFetch___024root___combo__TOP__2(VInstFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstFetch___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->io_imem_req_valid = vlSelf->io_out_ready;
    vlSelf->io_out_bits_pc = vlSelf->io_imem_resp_bits_old_pc;
    vlSelf->io_out_bits_inst = vlSelf->io_imem_resp_bits_rdata;
    vlSelf->io_out_bits_inst_valid = vlSelf->io_imem_resp_bits_rvalid;
}

VL_INLINE_OPT void VInstFetch___024root___sequent__TOP__4(VInstFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstFetch___024root___sequent__TOP__4\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->InstFetch__DOT__pc = 0x80000000U;
    } else if ((1U & (~ ((~ (IData)(vlSelf->io_imem_resp_bits_rvalid)) 
                         | (~ (IData)(vlSelf->io_out_ready)))))) {
        vlSelf->InstFetch__DOT__pc = vlSelf->InstFetch__DOT__npc;
    }
    vlSelf->InstFetch__DOT__npc = ((IData)(4U) + (0xfffffffcU 
                                                  & vlSelf->InstFetch__DOT__pc));
    vlSelf->io_imem_req_bits_araddr = (0xfffffffcU 
                                       & vlSelf->InstFetch__DOT__pc);
}

void VInstFetch___024root___eval(VInstFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstFetch___024root___eval\n"); );
    // Body
    VInstFetch___024root___combo__TOP__2(vlSelf);
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VInstFetch___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VInstFetch___024root___change_request_1(VInstFetch___024root* vlSelf);

VL_INLINE_OPT QData VInstFetch___024root___change_request(VInstFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstFetch___024root___change_request\n"); );
    // Body
    return (VInstFetch___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VInstFetch___024root___change_request_1(VInstFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstFetch___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VInstFetch___024root___eval_debug_assertions(VInstFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstFetch___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_imem_req_ready & 0xfeU))) {
        Verilated::overWidthError("io_imem_req_ready");}
    if (VL_UNLIKELY((vlSelf->io_imem_resp_valid & 0xfeU))) {
        Verilated::overWidthError("io_imem_resp_valid");}
    if (VL_UNLIKELY((vlSelf->io_imem_resp_bits_rvalid 
                     & 0xfeU))) {
        Verilated::overWidthError("io_imem_resp_bits_rvalid");}
    if (VL_UNLIKELY((vlSelf->io_out_ready & 0xfeU))) {
        Verilated::overWidthError("io_out_ready");}
}
#endif  // VL_DEBUG
