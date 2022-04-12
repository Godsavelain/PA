// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VInstFetch.h"
#include "VInstFetch__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VInstFetch::VInstFetch(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VInstFetch__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_imem_req_ready{vlSymsp->TOP.io_imem_req_ready}
    , io_imem_req_valid{vlSymsp->TOP.io_imem_req_valid}
    , io_imem_req_bits_araddr{vlSymsp->TOP.io_imem_req_bits_araddr}
    , io_imem_req_bits_arvalid{vlSymsp->TOP.io_imem_req_bits_arvalid}
    , io_imem_req_bits_rready{vlSymsp->TOP.io_imem_req_bits_rready}
    , io_imem_resp_ready{vlSymsp->TOP.io_imem_resp_ready}
    , io_imem_resp_valid{vlSymsp->TOP.io_imem_resp_valid}
    , io_imem_resp_bits_rdata{vlSymsp->TOP.io_imem_resp_bits_rdata}
    , io_imem_resp_bits_rvalid{vlSymsp->TOP.io_imem_resp_bits_rvalid}
    , io_imem_resp_bits_old_pc{vlSymsp->TOP.io_imem_resp_bits_old_pc}
    , io_out_ready{vlSymsp->TOP.io_out_ready}
    , io_out_valid{vlSymsp->TOP.io_out_valid}
    , io_out_bits_pc{vlSymsp->TOP.io_out_bits_pc}
    , io_out_bits_inst{vlSymsp->TOP.io_out_bits_inst}
    , io_out_bits_inst_valid{vlSymsp->TOP.io_out_bits_inst_valid}
    , rootp{&(vlSymsp->TOP)}
{
}

VInstFetch::VInstFetch(const char* _vcname__)
    : VInstFetch(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VInstFetch::~VInstFetch() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VInstFetch___024root___eval_initial(VInstFetch___024root* vlSelf);
void VInstFetch___024root___eval_settle(VInstFetch___024root* vlSelf);
void VInstFetch___024root___eval(VInstFetch___024root* vlSelf);
QData VInstFetch___024root___change_request(VInstFetch___024root* vlSelf);
#ifdef VL_DEBUG
void VInstFetch___024root___eval_debug_assertions(VInstFetch___024root* vlSelf);
#endif  // VL_DEBUG
void VInstFetch___024root___final(VInstFetch___024root* vlSelf);

static void _eval_initial_loop(VInstFetch__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VInstFetch___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VInstFetch___024root___eval_settle(&(vlSymsp->TOP));
        VInstFetch___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VInstFetch___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("InstFetch.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VInstFetch___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VInstFetch::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VInstFetch::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VInstFetch___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VInstFetch___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VInstFetch___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("InstFetch.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VInstFetch___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VInstFetch::final() {
    VInstFetch___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VInstFetch::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VInstFetch::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VInstFetch___024root__traceInitTop(VInstFetch___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VInstFetch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VInstFetch___024root*>(voidSelf);
    VInstFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VInstFetch___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VInstFetch___024root__traceRegister(VInstFetch___024root* vlSelf, VerilatedVcd* tracep);

void VInstFetch::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VInstFetch___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
