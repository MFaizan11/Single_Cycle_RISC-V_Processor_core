// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSingle_Cycle__Syms.h"
#include "VSingle_Cycle.h"
#include "VSingle_Cycle___024root.h"

// FUNCTIONS
VSingle_Cycle__Syms::~VSingle_Cycle__Syms()
{
}

VSingle_Cycle__Syms::VSingle_Cycle__Syms(VerilatedContext* contextp, const char* namep, VSingle_Cycle* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
