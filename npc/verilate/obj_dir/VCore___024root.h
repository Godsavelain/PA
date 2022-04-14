// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCore.h for the primary calling header

#ifndef VERILATED_VCORE___024ROOT_H_
#define VERILATED_VCORE___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VCore__Syms;
class VCore_VerilatedVcd;


//----------

VL_MODULE(VCore___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_imem_ren,0,0);
    VL_OUT8(io_imem_wen,0,0);
    VL_OUT8(io_imem_wmask,7,0);
    VL_IN8(io_imem_read_ok,0,0);
    VL_IN8(io_imem_write_ok,0,0);
    VL_OUT8(io_dmem_ren,0,0);
    VL_OUT8(io_dmem_wen,0,0);
    VL_OUT8(io_dmem_wmask,7,0);
    VL_IN8(io_dmem_read_ok,0,0);
    VL_IN8(io_dmem_write_ok,0,0);
    VL_OUT(io_imem_raddr,31,0);
    VL_OUT(io_imem_waddr,31,0);
    VL_OUT(io_dmem_raddr,31,0);
    VL_OUT(io_dmem_waddr,31,0);
    VL_OUT64(io_imem_wdata,63,0);
    VL_IN64(io_imem_rdata,63,0);
    VL_OUT64(io_dmem_wdata,63,0);
    VL_IN64(io_dmem_rdata,63,0);

    // LOCAL SIGNALS
    IData/*31:0*/ Core__DOT__fetch__DOT__pc;
    IData/*31:0*/ Core__DOT__fetch__DOT__npc;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VCore__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCore___024root);  ///< Copying not allowed
  public:
    VCore___024root(const char* name);
    ~VCore___024root();

    // INTERNAL METHODS
    void __Vconfigure(VCore__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
