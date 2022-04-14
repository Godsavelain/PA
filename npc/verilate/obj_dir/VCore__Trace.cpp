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
            tracep->chgIData(oldp+1,(vlSelf->Core__DOT__fetch__DOT__pc),32);
            tracep->chgIData(oldp+2,((vlSelf->Core__DOT__fetch__DOT__pc 
                                      >> 2U)),30);
            tracep->chgIData(oldp+3,(((IData)(4U) + 
                                      (0xfffffffcU 
                                       & vlSelf->Core__DOT__fetch__DOT__pc))),32);
        }
        tracep->chgBit(oldp+4,(vlSelf->clock));
        tracep->chgBit(oldp+5,(vlSelf->reset));
        tracep->chgIData(oldp+6,(vlSelf->io_imem_raddr),32);
        tracep->chgIData(oldp+7,(vlSelf->io_imem_waddr),32);
        tracep->chgQData(oldp+8,(vlSelf->io_imem_wdata),64);
        tracep->chgBit(oldp+10,(vlSelf->io_imem_ren));
        tracep->chgBit(oldp+11,(vlSelf->io_imem_wen));
        tracep->chgCData(oldp+12,(vlSelf->io_imem_wmask),8);
        tracep->chgQData(oldp+13,(vlSelf->io_imem_rdata),64);
        tracep->chgBit(oldp+15,(vlSelf->io_imem_read_ok));
        tracep->chgBit(oldp+16,(vlSelf->io_imem_write_ok));
        tracep->chgIData(oldp+17,(vlSelf->io_dmem_raddr),32);
        tracep->chgIData(oldp+18,(vlSelf->io_dmem_waddr),32);
        tracep->chgQData(oldp+19,(vlSelf->io_dmem_wdata),64);
        tracep->chgBit(oldp+21,(vlSelf->io_dmem_ren));
        tracep->chgBit(oldp+22,(vlSelf->io_dmem_wen));
        tracep->chgCData(oldp+23,(vlSelf->io_dmem_wmask),8);
        tracep->chgQData(oldp+24,(vlSelf->io_dmem_rdata),64);
        tracep->chgBit(oldp+26,(vlSelf->io_dmem_read_ok));
        tracep->chgBit(oldp+27,(vlSelf->io_dmem_write_ok));
        tracep->chgBit(oldp+28,((1U & (~ (IData)(vlSelf->io_imem_read_ok)))));
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
