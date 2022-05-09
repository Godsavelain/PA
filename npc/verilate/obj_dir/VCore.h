// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCORE_H_
#define VERILATED_VCORE_H_  // guard

#include "verilated_heavy.h"
#include "svdpi.h"

class VCore__Syms;
class VCore___024root;
class VerilatedVcdC;
class VCore_VerilatedVcd;


// This class is the main interface to the Verilated model
class VCore VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    VCore__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_imem_req_ready,0,0);
    VL_OUT8(&io_imem_req_valid,0,0);
    VL_OUT(&io_imem_req_bits_raddr,31,0);
    VL_OUT(&io_imem_req_bits_waddr,31,0);
    VL_OUT64(&io_imem_req_bits_wdata,63,0);
    VL_OUT8(&io_imem_req_bits_ren,0,0);
    VL_OUT8(&io_imem_req_bits_wen,0,0);
    VL_OUT8(&io_imem_req_bits_wmask,7,0);
    VL_OUT8(&io_imem_resp_ready,0,0);
    VL_IN8(&io_imem_resp_valid,0,0);
    VL_IN64(&io_imem_resp_bits_rdata,63,0);
    VL_IN8(&io_imem_resp_bits_read_ok,0,0);
    VL_IN8(&io_imem_resp_bits_write_ok,0,0);
    VL_IN8(&io_dmem_req_ready,0,0);
    VL_OUT8(&io_dmem_req_valid,0,0);
    VL_OUT(&io_dmem_req_bits_raddr,31,0);
    VL_OUT(&io_dmem_req_bits_waddr,31,0);
    VL_OUT64(&io_dmem_req_bits_wdata,63,0);
    VL_OUT8(&io_dmem_req_bits_ren,0,0);
    VL_OUT8(&io_dmem_req_bits_wen,0,0);
    VL_OUT8(&io_dmem_req_bits_wmask,7,0);
    VL_OUT8(&io_dmem_resp_ready,0,0);
    VL_IN8(&io_dmem_resp_valid,0,0);
    VL_IN64(&io_dmem_resp_bits_rdata,63,0);
    VL_IN8(&io_dmem_resp_bits_read_ok,0,0);
    VL_IN8(&io_dmem_resp_bits_write_ok,0,0);
    VL_OUT(&io_commit_pc,31,0);
    VL_OUT64(&io_regs_out_0,63,0);
    VL_OUT64(&io_regs_out_1,63,0);
    VL_OUT64(&io_regs_out_2,63,0);
    VL_OUT64(&io_regs_out_3,63,0);
    VL_OUT64(&io_regs_out_4,63,0);
    VL_OUT64(&io_regs_out_5,63,0);
    VL_OUT64(&io_regs_out_6,63,0);
    VL_OUT64(&io_regs_out_7,63,0);
    VL_OUT64(&io_regs_out_8,63,0);
    VL_OUT64(&io_regs_out_9,63,0);
    VL_OUT64(&io_regs_out_10,63,0);
    VL_OUT64(&io_regs_out_11,63,0);
    VL_OUT64(&io_regs_out_12,63,0);
    VL_OUT64(&io_regs_out_13,63,0);
    VL_OUT64(&io_regs_out_14,63,0);
    VL_OUT64(&io_regs_out_15,63,0);
    VL_OUT64(&io_regs_out_16,63,0);
    VL_OUT64(&io_regs_out_17,63,0);
    VL_OUT64(&io_regs_out_18,63,0);
    VL_OUT64(&io_regs_out_19,63,0);
    VL_OUT64(&io_regs_out_20,63,0);
    VL_OUT64(&io_regs_out_21,63,0);
    VL_OUT64(&io_regs_out_22,63,0);
    VL_OUT64(&io_regs_out_23,63,0);
    VL_OUT64(&io_regs_out_24,63,0);
    VL_OUT64(&io_regs_out_25,63,0);
    VL_OUT64(&io_regs_out_26,63,0);
    VL_OUT64(&io_regs_out_27,63,0);
    VL_OUT64(&io_regs_out_28,63,0);
    VL_OUT64(&io_regs_out_29,63,0);
    VL_OUT64(&io_regs_out_30,63,0);
    VL_OUT64(&io_regs_out_31,63,0);
    VL_OUT8(&io_commit,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VCore___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VCore(VerilatedContext* contextp, const char* name = "TOP");
    explicit VCore(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VCore();
  private:
    VL_UNCOPYABLE(VCore);  ///< Copying not allowed

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
