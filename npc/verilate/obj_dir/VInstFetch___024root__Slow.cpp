// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstFetch.h for the primary calling header

#include "VInstFetch___024root.h"
#include "VInstFetch__Syms.h"

//==========


void VInstFetch___024root___ctor_var_reset(VInstFetch___024root* vlSelf);

VInstFetch___024root::VInstFetch___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VInstFetch___024root___ctor_var_reset(this);
}

void VInstFetch___024root::__Vconfigure(VInstFetch__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VInstFetch___024root::~VInstFetch___024root() {
}

void VInstFetch___024root___initial__TOP__1(VInstFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstFetch___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->io_imem_req_bits_arvalid = 1U;
    vlSelf->io_imem_req_bits_rready = 1U;
    vlSelf->io_imem_resp_ready = 1U;
    vlSelf->io_out_valid = 1U;
}

void VInstFetch___024root___settle__TOP__3(VInstFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstFetch___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->io_imem_req_valid = vlSelf->io_out_ready;
    vlSelf->io_out_bits_pc = vlSelf->io_imem_resp_bits_old_pc;
    vlSelf->io_out_bits_inst = vlSelf->io_imem_resp_bits_rdata;
    vlSelf->io_out_bits_inst_valid = vlSelf->io_imem_resp_bits_rvalid;
    vlSelf->InstFetch__DOT__npc = ((IData)(4U) + (0xfffffffcU 
                                                  & vlSelf->InstFetch__DOT__pc));
    vlSelf->io_imem_req_bits_araddr = (0xfffffffcU 
                                       & vlSelf->InstFetch__DOT__pc);
}

void VInstFetch___024root___eval_initial(VInstFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstFetch___024root___eval_initial\n"); );
    // Body
    VInstFetch___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VInstFetch___024root___eval_settle(VInstFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstFetch___024root___eval_settle\n"); );
    // Body
    VInstFetch___024root___settle__TOP__3(vlSelf);
}

void VInstFetch___024root___final(VInstFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstFetch___024root___final\n"); );
}

void VInstFetch___024root___ctor_var_reset(VInstFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstFetch___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_imem_req_ready = VL_RAND_RESET_I(1);
    vlSelf->io_imem_req_valid = VL_RAND_RESET_I(1);
    vlSelf->io_imem_req_bits_araddr = VL_RAND_RESET_I(32);
    vlSelf->io_imem_req_bits_arvalid = VL_RAND_RESET_I(1);
    vlSelf->io_imem_req_bits_rready = VL_RAND_RESET_I(1);
    vlSelf->io_imem_resp_ready = VL_RAND_RESET_I(1);
    vlSelf->io_imem_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->io_imem_resp_bits_rdata = VL_RAND_RESET_I(32);
    vlSelf->io_imem_resp_bits_rvalid = VL_RAND_RESET_I(1);
    vlSelf->io_imem_resp_bits_old_pc = VL_RAND_RESET_I(32);
    vlSelf->io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_out_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->io_out_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->io_out_bits_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->InstFetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->InstFetch__DOT__npc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
