// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstFetch__Syms.h"


void VInstFetch___024root__traceChgSub0(VInstFetch___024root* vlSelf, VerilatedVcd* tracep);

void VInstFetch___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VInstFetch___024root* const __restrict vlSelf = static_cast<VInstFetch___024root*>(voidSelf);
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VInstFetch___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VInstFetch___024root__traceChgSub0(VInstFetch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSelf->InstFetch__DOT__pc),32);
            tracep->chgIData(oldp+1,((vlSelf->InstFetch__DOT__pc 
                                      >> 2U)),30);
            tracep->chgIData(oldp+2,((0xfffffffcU & vlSelf->InstFetch__DOT__pc)),32);
            tracep->chgIData(oldp+3,(((IData)(4U) + 
                                      (0xfffffffcU 
                                       & vlSelf->InstFetch__DOT__pc))),32);
        }
        tracep->chgBit(oldp+4,(vlSelf->clock));
        tracep->chgBit(oldp+5,(vlSelf->reset));
        tracep->chgBit(oldp+6,(vlSelf->io_imem_req_ready));
        tracep->chgBit(oldp+7,(vlSelf->io_imem_req_valid));
        tracep->chgIData(oldp+8,(vlSelf->io_imem_req_bits_araddr),32);
        tracep->chgBit(oldp+9,(vlSelf->io_imem_req_bits_arvalid));
        tracep->chgBit(oldp+10,(vlSelf->io_imem_req_bits_rready));
        tracep->chgBit(oldp+11,(vlSelf->io_imem_resp_ready));
        tracep->chgBit(oldp+12,(vlSelf->io_imem_resp_valid));
        tracep->chgIData(oldp+13,(vlSelf->io_imem_resp_bits_rdata),32);
        tracep->chgBit(oldp+14,(vlSelf->io_imem_resp_bits_rvalid));
        tracep->chgIData(oldp+15,(vlSelf->io_imem_resp_bits_old_pc),32);
        tracep->chgBit(oldp+16,(vlSelf->io_out_ready));
        tracep->chgBit(oldp+17,(vlSelf->io_out_valid));
        tracep->chgIData(oldp+18,(vlSelf->io_out_bits_pc),32);
        tracep->chgIData(oldp+19,(vlSelf->io_out_bits_inst),32);
        tracep->chgBit(oldp+20,(vlSelf->io_out_bits_inst_valid));
        tracep->chgBit(oldp+21,((1U & ((~ (IData)(vlSelf->io_imem_resp_bits_rvalid)) 
                                       | (~ (IData)(vlSelf->io_out_ready))))));
    }
}

void VInstFetch___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VInstFetch___024root* const __restrict vlSelf = static_cast<VInstFetch___024root*>(voidSelf);
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
