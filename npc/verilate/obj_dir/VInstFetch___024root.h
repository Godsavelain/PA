// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VInstFetch.h for the primary calling header

#ifndef VERILATED_VINSTFETCH___024ROOT_H_
#define VERILATED_VINSTFETCH___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VInstFetch__Syms;
class VInstFetch_VerilatedVcd;


//----------

VL_MODULE(VInstFetch___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_imem_req_ready,0,0);
    VL_OUT8(io_imem_req_valid,0,0);
    VL_OUT8(io_imem_req_bits_arvalid,0,0);
    VL_OUT8(io_imem_req_bits_rready,0,0);
    VL_OUT8(io_imem_resp_ready,0,0);
    VL_IN8(io_imem_resp_valid,0,0);
    VL_IN8(io_imem_resp_bits_rvalid,0,0);
    VL_IN8(io_out_ready,0,0);
    VL_OUT8(io_out_valid,0,0);
    VL_OUT8(io_out_bits_inst_valid,0,0);
    VL_OUT(io_imem_req_bits_araddr,31,0);
    VL_IN(io_imem_resp_bits_rdata,31,0);
    VL_IN(io_imem_resp_bits_old_pc,31,0);
    VL_OUT(io_out_bits_pc,31,0);
    VL_OUT(io_out_bits_inst,31,0);

    // LOCAL SIGNALS
    IData/*31:0*/ InstFetch__DOT__pc;
    IData/*31:0*/ InstFetch__DOT__npc;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VInstFetch__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VInstFetch___024root);  ///< Copying not allowed
  public:
    VInstFetch___024root(const char* name);
    ~VInstFetch___024root();

    // INTERNAL METHODS
    void __Vconfigure(VInstFetch__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
