// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingle_Cycle.h for the primary calling header

#include "verilated.h"

#include "VSingle_Cycle__Syms.h"
#include "VSingle_Cycle__Syms.h"
#include "VSingle_Cycle___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingle_Cycle___024root___dump_triggers__act(VSingle_Cycle___024root* vlSelf);
#endif  // VL_DEBUG

void VSingle_Cycle___024root___eval_triggers__act(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSingle_Cycle___024root___dump_triggers__act(vlSelf);
    }
#endif
}
