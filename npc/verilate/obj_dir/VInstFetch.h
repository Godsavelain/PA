// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VINSTFETCH_H_
#define VERILATED_VINSTFETCH_H_  // guard

#include "verilated_heavy.h"

class VInstFetch__Syms;
class VInstFetch___024root;
class VerilatedVcdC;
class VInstFetch_VerilatedVcd;


// This class is the main interface to the Verilated model
class VInstFetch VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    VInstFetch__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_imem_req_ready,0,0);
    VL_OUT8(&io_imem_req_valid,0,0);
    VL_OUT(&io_imem_req_bits_araddr,31,0);
    VL_OUT8(&io_imem_req_bits_arvalid,0,0);
    VL_OUT8(&io_imem_req_bits_rready,0,0);
    VL_OUT8(&io_imem_resp_ready,0,0);
    VL_IN8(&io_imem_resp_valid,0,0);
    VL_IN(&io_imem_resp_bits_rdata,31,0);
    VL_IN8(&io_imem_resp_bits_rvalid,0,0);
    VL_IN(&io_imem_resp_bits_old_pc,31,0);
    VL_IN8(&io_out_ready,0,0);
    VL_OUT8(&io_out_valid,0,0);
    VL_OUT(&io_out_bits_pc,31,0);
    VL_OUT(&io_out_bits_inst,31,0);
    VL_OUT8(&io_out_bits_inst_valid,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VInstFetch___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VInstFetch(VerilatedContext* contextp, const char* name = "TOP");
    explicit VInstFetch(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VInstFetch();
  private:
    VL_UNCOPYABLE(VInstFetch);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
