// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCore.h"
#include "VCore__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VCore::VCore(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VCore__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_imem_raddr{vlSymsp->TOP.io_imem_raddr}
    , io_imem_waddr{vlSymsp->TOP.io_imem_waddr}
    , io_imem_wdata{vlSymsp->TOP.io_imem_wdata}
    , io_imem_ren{vlSymsp->TOP.io_imem_ren}
    , io_imem_wen{vlSymsp->TOP.io_imem_wen}
    , io_imem_wmask{vlSymsp->TOP.io_imem_wmask}
    , io_imem_rdata{vlSymsp->TOP.io_imem_rdata}
    , io_imem_read_ok{vlSymsp->TOP.io_imem_read_ok}
    , io_imem_write_ok{vlSymsp->TOP.io_imem_write_ok}
    , io_dmem_raddr{vlSymsp->TOP.io_dmem_raddr}
    , io_dmem_waddr{vlSymsp->TOP.io_dmem_waddr}
    , io_dmem_wdata{vlSymsp->TOP.io_dmem_wdata}
    , io_dmem_ren{vlSymsp->TOP.io_dmem_ren}
    , io_dmem_wen{vlSymsp->TOP.io_dmem_wen}
    , io_dmem_wmask{vlSymsp->TOP.io_dmem_wmask}
    , io_dmem_rdata{vlSymsp->TOP.io_dmem_rdata}
    , io_dmem_read_ok{vlSymsp->TOP.io_dmem_read_ok}
    , io_dmem_write_ok{vlSymsp->TOP.io_dmem_write_ok}
    , rootp{&(vlSymsp->TOP)}
{
}

VCore::VCore(const char* _vcname__)
    : VCore(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VCore::~VCore() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VCore___024root___eval_initial(VCore___024root* vlSelf);
void VCore___024root___eval_settle(VCore___024root* vlSelf);
void VCore___024root___eval(VCore___024root* vlSelf);
QData VCore___024root___change_request(VCore___024root* vlSelf);
#ifdef VL_DEBUG
void VCore___024root___eval_debug_assertions(VCore___024root* vlSelf);
#endif  // VL_DEBUG
void VCore___024root___final(VCore___024root* vlSelf);

static void _eval_initial_loop(VCore__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VCore___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VCore___024root___eval_settle(&(vlSymsp->TOP));
        VCore___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VCore___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Core.v", 91, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VCore___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCore::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCore::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCore___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VCore___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VCore___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Core.v", 91, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VCore___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VCore::final() {
    VCore___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VCore::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VCore::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VCore___024root__traceInitTop(VCore___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VCore___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VCore___024root__traceRegister(VCore___024root* vlSelf, VerilatedVcd* tracep);

void VCore::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VCore___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
