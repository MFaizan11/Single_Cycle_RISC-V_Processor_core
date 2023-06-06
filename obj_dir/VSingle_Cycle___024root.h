// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSingle_Cycle.h for the primary calling header

#ifndef VERILATED_VSINGLE_CYCLE___024ROOT_H_
#define VERILATED_VSINGLE_CYCLE___024ROOT_H_  // guard

#include "verilated.h"


class VSingle_Cycle__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSingle_Cycle___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*3:0*/ Single_Cycle__DOT__ALU_control;
    CData/*3:0*/ Single_Cycle__DOT__mask;
    CData/*2:0*/ Single_Cycle__DOT__br_type;
    CData/*2:0*/ Single_Cycle__DOT__load;
    CData/*1:0*/ Single_Cycle__DOT__wb_sel;
    CData/*1:0*/ Single_Cycle__DOT__store;
    CData/*0:0*/ Single_Cycle__DOT__RegWrite;
    CData/*0:0*/ Single_Cycle__DOT__wr_en;
    CData/*0:0*/ Single_Cycle__DOT__rd_en;
    CData/*0:0*/ Single_Cycle__DOT__sel_A;
    CData/*0:0*/ Single_Cycle__DOT__sel_B;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(y,31,0);
    IData/*31:0*/ Single_Cycle__DOT__Instruction;
    IData/*31:0*/ Single_Cycle__DOT__ALU_result;
    IData/*31:0*/ Single_Cycle__DOT__readData;
    IData/*31:0*/ Single_Cycle__DOT__rdata2;
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__PC;
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__PC_new;
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__rdata1;
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__Immediate;
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__rdataA;
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__rdataB;
    IData/*31:0*/ Single_Cycle__DOT__DP__DOT__rdata;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 128> Single_Cycle__DOT__DP__DOT__IM__DOT__Mem;
    VlUnpacked<IData/*31:0*/, 32> Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem;
    VlUnpacked<IData/*31:0*/, 32> Single_Cycle__DOT__DM__DOT__Data_Mem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSingle_Cycle__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSingle_Cycle___024root(VSingle_Cycle__Syms* symsp, const char* v__name);
    ~VSingle_Cycle___024root();
    VL_UNCOPYABLE(VSingle_Cycle___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
