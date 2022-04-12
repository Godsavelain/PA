// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstFetch__Syms.h"


void VInstFetch___024root__traceInitSub0(VInstFetch___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VInstFetch___024root__traceInitTop(VInstFetch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VInstFetch___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VInstFetch___024root__traceInitSub0(VInstFetch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+5,"clock", false,-1);
        tracep->declBit(c+6,"reset", false,-1);
        tracep->declBit(c+7,"io_imem_req_ready", false,-1);
        tracep->declBit(c+8,"io_imem_req_valid", false,-1);
        tracep->declBus(c+9,"io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBit(c+10,"io_imem_req_bits_arvalid", false,-1);
        tracep->declBit(c+11,"io_imem_req_bits_rready", false,-1);
        tracep->declBit(c+12,"io_imem_resp_ready", false,-1);
        tracep->declBit(c+13,"io_imem_resp_valid", false,-1);
        tracep->declBus(c+14,"io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+15,"io_imem_resp_bits_rvalid", false,-1);
        tracep->declBus(c+16,"io_imem_resp_bits_old_pc", false,-1, 31,0);
        tracep->declBit(c+17,"io_out_ready", false,-1);
        tracep->declBit(c+18,"io_out_valid", false,-1);
        tracep->declBus(c+19,"io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+20,"io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+21,"io_out_bits_inst_valid", false,-1);
        tracep->declBit(c+5,"InstFetch clock", false,-1);
        tracep->declBit(c+6,"InstFetch reset", false,-1);
        tracep->declBit(c+7,"InstFetch io_imem_req_ready", false,-1);
        tracep->declBit(c+8,"InstFetch io_imem_req_valid", false,-1);
        tracep->declBus(c+9,"InstFetch io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBit(c+10,"InstFetch io_imem_req_bits_arvalid", false,-1);
        tracep->declBit(c+11,"InstFetch io_imem_req_bits_rready", false,-1);
        tracep->declBit(c+12,"InstFetch io_imem_resp_ready", false,-1);
        tracep->declBit(c+13,"InstFetch io_imem_resp_valid", false,-1);
        tracep->declBus(c+14,"InstFetch io_imem_resp_bits_rdata", false,-1, 31,0);
        tracep->declBit(c+15,"InstFetch io_imem_resp_bits_rvalid", false,-1);
        tracep->declBus(c+16,"InstFetch io_imem_resp_bits_old_pc", false,-1, 31,0);
        tracep->declBit(c+17,"InstFetch io_out_ready", false,-1);
        tracep->declBit(c+18,"InstFetch io_out_valid", false,-1);
        tracep->declBus(c+19,"InstFetch io_out_bits_pc", false,-1, 31,0);
        tracep->declBus(c+20,"InstFetch io_out_bits_inst", false,-1, 31,0);
        tracep->declBit(c+21,"InstFetch io_out_bits_inst_valid", false,-1);
        tracep->declBus(c+1,"InstFetch pc", false,-1, 31,0);
        tracep->declBus(c+2,"InstFetch pc_base_hi", false,-1, 29,0);
        tracep->declBus(c+3,"InstFetch pc_base", false,-1, 31,0);
        tracep->declBus(c+4,"InstFetch npc", false,-1, 31,0);
        tracep->declBit(c+22,"InstFetch stall", false,-1);
    }
}

void VInstFetch___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VInstFetch___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VInstFetch___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VInstFetch___024root__traceRegister(VInstFetch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VInstFetch___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VInstFetch___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VInstFetch___024root__traceCleanup, vlSelf);
    }
}

void VInstFetch___024root__traceFullSub0(VInstFetch___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VInstFetch___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VInstFetch___024root* const __restrict vlSelf = static_cast<VInstFetch___024root*>(voidSelf);
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VInstFetch___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VInstFetch___024root__traceFullSub0(VInstFetch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->InstFetch__DOT__pc),32);
        tracep->fullIData(oldp+2,((vlSelf->InstFetch__DOT__pc 
                                   >> 2U)),30);
        tracep->fullIData(oldp+3,((0xfffffffcU & vlSelf->InstFetch__DOT__pc)),32);
        tracep->fullIData(oldp+4,(((IData)(4U) + (0xfffffffcU 
                                                  & vlSelf->InstFetch__DOT__pc))),32);
        tracep->fullBit(oldp+5,(vlSelf->clock));
        tracep->fullBit(oldp+6,(vlSelf->reset));
        tracep->fullBit(oldp+7,(vlSelf->io_imem_req_ready));
        tracep->fullBit(oldp+8,(vlSelf->io_imem_req_valid));
        tracep->fullIData(oldp+9,(vlSelf->io_imem_req_bits_araddr),32);
        tracep->fullBit(oldp+10,(vlSelf->io_imem_req_bits_arvalid));
        tracep->fullBit(oldp+11,(vlSelf->io_imem_req_bits_rready));
        tracep->fullBit(oldp+12,(vlSelf->io_imem_resp_ready));
        tracep->fullBit(oldp+13,(vlSelf->io_imem_resp_valid));
        tracep->fullIData(oldp+14,(vlSelf->io_imem_resp_bits_rdata),32);
        tracep->fullBit(oldp+15,(vlSelf->io_imem_resp_bits_rvalid));
        tracep->fullIData(oldp+16,(vlSelf->io_imem_resp_bits_old_pc),32);
        tracep->fullBit(oldp+17,(vlSelf->io_out_ready));
        tracep->fullBit(oldp+18,(vlSelf->io_out_valid));
        tracep->fullIData(oldp+19,(vlSelf->io_out_bits_pc),32);
        tracep->fullIData(oldp+20,(vlSelf->io_out_bits_inst),32);
        tracep->fullBit(oldp+21,(vlSelf->io_out_bits_inst_valid));
        tracep->fullBit(oldp+22,((1U & ((~ (IData)(vlSelf->io_imem_resp_bits_rvalid)) 
                                        | (~ (IData)(vlSelf->io_out_ready))))));
    }
}
