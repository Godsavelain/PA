// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore___024root.h"
#include "VCore__Syms.h"

//==========


void VCore___024root___ctor_var_reset(VCore___024root* vlSelf);

VCore___024root::VCore___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VCore___024root___ctor_var_reset(this);
}

void VCore___024root::__Vconfigure(VCore__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VCore___024root::~VCore___024root() {
}

void VCore___024root___initial__TOP__1(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->io_imem_waddr = 0U;
    vlSelf->io_imem_wdata = 0ULL;
    vlSelf->io_imem_ren = 1U;
    vlSelf->io_imem_wen = 0U;
    vlSelf->io_imem_wmask = 0U;
    vlSelf->io_dmem_raddr = 0U;
    vlSelf->io_dmem_waddr = 0U;
    vlSelf->io_dmem_wdata = 0ULL;
    vlSelf->io_dmem_ren = 0U;
    vlSelf->io_dmem_wen = 0U;
    vlSelf->io_dmem_wmask = 0U;
}

void VCore___024root___settle__TOP__3(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->io_imem_raddr = (0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc);
    vlSelf->Core__DOT__fetch__DOT__npc = ((IData)(4U) 
                                          + (0xfffffffcU 
                                             & vlSelf->Core__DOT__fetch__DOT__pc));
}

void VCore___024root___eval_initial(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_initial\n"); );
    // Body
    VCore___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VCore___024root___eval_settle(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_settle\n"); );
    // Body
    VCore___024root___settle__TOP__3(vlSelf);
}

void VCore___024root___final(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___final\n"); );
}

void VCore___024root___ctor_var_reset(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_imem_raddr = VL_RAND_RESET_I(32);
    vlSelf->io_imem_waddr = VL_RAND_RESET_I(32);
    vlSelf->io_imem_wdata = VL_RAND_RESET_Q(64);
    vlSelf->io_imem_ren = VL_RAND_RESET_I(1);
    vlSelf->io_imem_wen = VL_RAND_RESET_I(1);
    vlSelf->io_imem_wmask = VL_RAND_RESET_I(8);
    vlSelf->io_imem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->io_imem_read_ok = VL_RAND_RESET_I(1);
    vlSelf->io_imem_write_ok = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_raddr = VL_RAND_RESET_I(32);
    vlSelf->io_dmem_waddr = VL_RAND_RESET_I(32);
    vlSelf->io_dmem_wdata = VL_RAND_RESET_Q(64);
    vlSelf->io_dmem_ren = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_wen = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_wmask = VL_RAND_RESET_I(8);
    vlSelf->io_dmem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->io_dmem_read_ok = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_write_ok = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__npc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
