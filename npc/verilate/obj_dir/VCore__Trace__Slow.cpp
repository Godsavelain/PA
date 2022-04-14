// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCore__Syms.h"


void VCore___024root__traceInitSub0(VCore___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VCore___024root__traceInitTop(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VCore___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VCore___024root__traceInitSub0(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+5,"clock", false,-1);
        tracep->declBit(c+6,"reset", false,-1);
        tracep->declBus(c+7,"io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+8,"io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+9,"io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+11,"io_imem_ren", false,-1);
        tracep->declBit(c+12,"io_imem_wen", false,-1);
        tracep->declBus(c+13,"io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+14,"io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+16,"io_imem_read_ok", false,-1);
        tracep->declBit(c+17,"io_imem_write_ok", false,-1);
        tracep->declBus(c+18,"io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+19,"io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+20,"io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+22,"io_dmem_ren", false,-1);
        tracep->declBit(c+23,"io_dmem_wen", false,-1);
        tracep->declBus(c+24,"io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+25,"io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+27,"io_dmem_read_ok", false,-1);
        tracep->declBit(c+28,"io_dmem_write_ok", false,-1);
        tracep->declBit(c+5,"Core clock", false,-1);
        tracep->declBit(c+6,"Core reset", false,-1);
        tracep->declBus(c+7,"Core io_imem_raddr", false,-1, 31,0);
        tracep->declBus(c+8,"Core io_imem_waddr", false,-1, 31,0);
        tracep->declQuad(c+9,"Core io_imem_wdata", false,-1, 63,0);
        tracep->declBit(c+11,"Core io_imem_ren", false,-1);
        tracep->declBit(c+12,"Core io_imem_wen", false,-1);
        tracep->declBus(c+13,"Core io_imem_wmask", false,-1, 7,0);
        tracep->declQuad(c+14,"Core io_imem_rdata", false,-1, 63,0);
        tracep->declBit(c+16,"Core io_imem_read_ok", false,-1);
        tracep->declBit(c+17,"Core io_imem_write_ok", false,-1);
        tracep->declBus(c+18,"Core io_dmem_raddr", false,-1, 31,0);
        tracep->declBus(c+19,"Core io_dmem_waddr", false,-1, 31,0);
        tracep->declQuad(c+20,"Core io_dmem_wdata", false,-1, 63,0);
        tracep->declBit(c+22,"Core io_dmem_ren", false,-1);
        tracep->declBit(c+23,"Core io_dmem_wen", false,-1);
        tracep->declBus(c+24,"Core io_dmem_wmask", false,-1, 7,0);
        tracep->declQuad(c+25,"Core io_dmem_rdata", false,-1, 63,0);
        tracep->declBit(c+27,"Core io_dmem_read_ok", false,-1);
        tracep->declBit(c+28,"Core io_dmem_write_ok", false,-1);
        tracep->declBit(c+5,"Core fetch_clock", false,-1);
        tracep->declBit(c+6,"Core fetch_reset", false,-1);
        tracep->declBus(c+1,"Core fetch_io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBit(c+16,"Core fetch_io_imem_resp_bits_rvalid", false,-1);
        tracep->declBit(c+30,"Core fetch_io_out_ready", false,-1);
        tracep->declBit(c+30,"Core fetch_io_out_valid", false,-1);
        tracep->declBit(c+30,"Core decode_io_in_ready", false,-1);
        tracep->declBit(c+30,"Core decode_io_out_ready", false,-1);
        tracep->declBit(c+30,"Core decode_io_out_valid", false,-1);
        tracep->declBit(c+30,"Core execute_io_in_ready", false,-1);
        tracep->declBit(c+30,"Core execute_io_out_valid", false,-1);
        tracep->declBit(c+5,"Core fetch clock", false,-1);
        tracep->declBit(c+6,"Core fetch reset", false,-1);
        tracep->declBus(c+1,"Core fetch io_imem_req_bits_araddr", false,-1, 31,0);
        tracep->declBit(c+16,"Core fetch io_imem_resp_bits_rvalid", false,-1);
        tracep->declBit(c+30,"Core fetch io_out_ready", false,-1);
        tracep->declBit(c+30,"Core fetch io_out_valid", false,-1);
        tracep->declBus(c+2,"Core fetch pc", false,-1, 31,0);
        tracep->declBus(c+3,"Core fetch pc_base_hi", false,-1, 29,0);
        tracep->declBus(c+1,"Core fetch pc_base", false,-1, 31,0);
        tracep->declBus(c+4,"Core fetch npc", false,-1, 31,0);
        tracep->declBit(c+29,"Core fetch stall", false,-1);
        tracep->declBit(c+30,"Core decode io_in_ready", false,-1);
        tracep->declBit(c+30,"Core decode io_out_ready", false,-1);
        tracep->declBit(c+30,"Core decode io_out_valid", false,-1);
        tracep->declBit(c+31,"Core decode stall", false,-1);
        tracep->declBit(c+30,"Core execute io_in_ready", false,-1);
        tracep->declBit(c+30,"Core execute io_out_valid", false,-1);
        tracep->declBit(c+31,"Core execute stall", false,-1);
    }
}

void VCore___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VCore___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VCore___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VCore___024root__traceRegister(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VCore___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VCore___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VCore___024root__traceCleanup, vlSelf);
    }
}

void VCore___024root__traceFullSub0(VCore___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VCore___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VCore___024root* const __restrict vlSelf = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VCore___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VCore___024root__traceFullSub0(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,((0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc)),32);
        tracep->fullIData(oldp+2,(vlSelf->Core__DOT__fetch__DOT__pc),32);
        tracep->fullIData(oldp+3,((vlSelf->Core__DOT__fetch__DOT__pc 
                                   >> 2U)),30);
        tracep->fullIData(oldp+4,(((IData)(4U) + (0xfffffffcU 
                                                  & vlSelf->Core__DOT__fetch__DOT__pc))),32);
        tracep->fullBit(oldp+5,(vlSelf->clock));
        tracep->fullBit(oldp+6,(vlSelf->reset));
        tracep->fullIData(oldp+7,(vlSelf->io_imem_raddr),32);
        tracep->fullIData(oldp+8,(vlSelf->io_imem_waddr),32);
        tracep->fullQData(oldp+9,(vlSelf->io_imem_wdata),64);
        tracep->fullBit(oldp+11,(vlSelf->io_imem_ren));
        tracep->fullBit(oldp+12,(vlSelf->io_imem_wen));
        tracep->fullCData(oldp+13,(vlSelf->io_imem_wmask),8);
        tracep->fullQData(oldp+14,(vlSelf->io_imem_rdata),64);
        tracep->fullBit(oldp+16,(vlSelf->io_imem_read_ok));
        tracep->fullBit(oldp+17,(vlSelf->io_imem_write_ok));
        tracep->fullIData(oldp+18,(vlSelf->io_dmem_raddr),32);
        tracep->fullIData(oldp+19,(vlSelf->io_dmem_waddr),32);
        tracep->fullQData(oldp+20,(vlSelf->io_dmem_wdata),64);
        tracep->fullBit(oldp+22,(vlSelf->io_dmem_ren));
        tracep->fullBit(oldp+23,(vlSelf->io_dmem_wen));
        tracep->fullCData(oldp+24,(vlSelf->io_dmem_wmask),8);
        tracep->fullQData(oldp+25,(vlSelf->io_dmem_rdata),64);
        tracep->fullBit(oldp+27,(vlSelf->io_dmem_read_ok));
        tracep->fullBit(oldp+28,(vlSelf->io_dmem_write_ok));
        tracep->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->io_imem_read_ok)))));
        tracep->fullBit(oldp+30,(1U));
        tracep->fullBit(oldp+31,(0U));
    }
}
