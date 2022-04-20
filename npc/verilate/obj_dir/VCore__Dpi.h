// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at Wb_Dpi.v:11:30
    extern void wb_info(const svBitVecVal* inst, const svBitVecVal* pc, svBit ebreak);

#ifdef __cplusplus
}
#endif
