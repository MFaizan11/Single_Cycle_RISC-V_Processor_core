// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingle_Cycle.h for the primary calling header

#include "verilated.h"

#include "VSingle_Cycle__Syms.h"
#include "VSingle_Cycle___024root.h"

VL_ATTR_COLD void VSingle_Cycle___024root___eval_static(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSingle_Cycle___024root___eval_initial__TOP(VSingle_Cycle___024root* vlSelf);

VL_ATTR_COLD void VSingle_Cycle___024root___eval_initial(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___eval_initial\n"); );
    // Body
    VSingle_Cycle___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VSingle_Cycle___024root___eval_initial__TOP(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hddb896f2__0;
    VlWide<5>/*159:0*/ __Vtemp_h9532680a__0;
    VlWide<4>/*127:0*/ __Vtemp_h21c77703__0;
    // Body
    __Vtemp_hddb896f2__0[0U] = 0x2e747874U;
    __Vtemp_hddb896f2__0[1U] = 0x6d6f7279U;
    __Vtemp_hddb896f2__0[2U] = 0x6e5f4d65U;
    __Vtemp_hddb896f2__0[3U] = 0x49U;
    VL_READMEM_N(true, 32, 128, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hddb896f2__0)
                 ,  &(vlSelf->Single_Cycle__DOT__DP__DOT__IM__DOT__Mem)
                 , 0, ~0ULL);
    __Vtemp_h9532680a__0[0U] = 0x2e6d656dU;
    __Vtemp_h9532680a__0[1U] = 0x66696c65U;
    __Vtemp_h9532680a__0[2U] = 0x7465725fU;
    __Vtemp_h9532680a__0[3U] = 0x65676973U;
    __Vtemp_h9532680a__0[4U] = 0x52U;
    VL_READMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h9532680a__0)
                 ,  &(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem)
                 , 0, ~0ULL);
    __Vtemp_h21c77703__0[0U] = 0x2e747874U;
    __Vtemp_h21c77703__0[1U] = 0x6d6f7279U;
    __Vtemp_h21c77703__0[2U] = 0x615f4d65U;
    __Vtemp_h21c77703__0[3U] = 0x446174U;
    VL_READMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h21c77703__0)
                 ,  &(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VSingle_Cycle___024root___eval_final(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___eval_final\n"); );
}

VL_ATTR_COLD void VSingle_Cycle___024root___eval_triggers__stl(VSingle_Cycle___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingle_Cycle___024root___dump_triggers__stl(VSingle_Cycle___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VSingle_Cycle___024root___eval_stl(VSingle_Cycle___024root* vlSelf);

VL_ATTR_COLD void VSingle_Cycle___024root___eval_settle(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VSingle_Cycle___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VSingle_Cycle___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("Single_Cycle.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VSingle_Cycle___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingle_Cycle___024root___dump_triggers__stl(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSingle_Cycle___024root___stl_sequent__TOP__0(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->Single_Cycle__DOT__Instruction = vlSelf->Single_Cycle__DOT__DP__DOT__IM__DOT__Mem
        [(0x7fU & (vlSelf->Single_Cycle__DOT__DP__DOT__PC 
                   >> 2U))];
    if (((((((((0x33U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction)) 
               | (0x13U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) 
              | (3U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) 
             | (0x23U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) 
            | (0x63U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) 
           | (0x6fU == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) 
          | (0x67U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) 
         | (0x37U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction)))) {
        vlSelf->Single_Cycle__DOT__wr_en = ((0x33U 
                                             == (0x7fU 
                                                 & vlSelf->Single_Cycle__DOT__Instruction)) 
                                            | ((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->Single_Cycle__DOT__Instruction)) 
                                               | ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Single_Cycle__DOT__Instruction)) 
                                                  | (0x23U 
                                                     != 
                                                     (0x7fU 
                                                      & vlSelf->Single_Cycle__DOT__Instruction)))));
        vlSelf->Single_Cycle__DOT__RegWrite = ((0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->Single_Cycle__DOT__Instruction)) 
                                               | ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Single_Cycle__DOT__Instruction)) 
                                                  | ((3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Single_Cycle__DOT__Instruction)) 
                                                     | ((0x23U 
                                                         != 
                                                         (0x7fU 
                                                          & vlSelf->Single_Cycle__DOT__Instruction)) 
                                                        & (0x63U 
                                                           != 
                                                           (0x7fU 
                                                            & vlSelf->Single_Cycle__DOT__Instruction))))));
        if ((0x33U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
            vlSelf->Single_Cycle__DOT__wb_sel = 1U;
            vlSelf->Single_Cycle__DOT__br_type = 6U;
            vlSelf->Single_Cycle__DOT__ALU_control 
                = ((0x4000U & vlSelf->Single_Cycle__DOT__Instruction)
                    ? ((0x2000U & vlSelf->Single_Cycle__DOT__Instruction)
                        ? ((0x1000U & vlSelf->Single_Cycle__DOT__Instruction)
                            ? 9U : 8U) : ((0x1000U 
                                           & vlSelf->Single_Cycle__DOT__Instruction)
                                           ? ((IData)(
                                                      (0x40000033U 
                                                       == 
                                                       (0xfe00007fU 
                                                        & vlSelf->Single_Cycle__DOT__Instruction)))
                                               ? 7U
                                               : 6U)
                                           : 5U)) : 
                   ((0x2000U & vlSelf->Single_Cycle__DOT__Instruction)
                     ? ((0x1000U & vlSelf->Single_Cycle__DOT__Instruction)
                         ? 4U : 3U) : ((0x1000U & vlSelf->Single_Cycle__DOT__Instruction)
                                        ? 2U : ((IData)(
                                                        (0x40000033U 
                                                         == 
                                                         (0xfe00007fU 
                                                          & vlSelf->Single_Cycle__DOT__Instruction)))
                                                 ? 1U
                                                 : 0U))));
        } else if ((0x13U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
            vlSelf->Single_Cycle__DOT__wb_sel = 1U;
            vlSelf->Single_Cycle__DOT__br_type = 6U;
            vlSelf->Single_Cycle__DOT__ALU_control 
                = ((0x4000U & vlSelf->Single_Cycle__DOT__Instruction)
                    ? ((0x2000U & vlSelf->Single_Cycle__DOT__Instruction)
                        ? ((0x1000U & vlSelf->Single_Cycle__DOT__Instruction)
                            ? 9U : 8U) : ((0x1000U 
                                           & vlSelf->Single_Cycle__DOT__Instruction)
                                           ? ((IData)(
                                                      (0x40000013U 
                                                       == 
                                                       (0xfe00007fU 
                                                        & vlSelf->Single_Cycle__DOT__Instruction)))
                                               ? 7U
                                               : 6U)
                                           : 5U)) : 
                   ((0x2000U & vlSelf->Single_Cycle__DOT__Instruction)
                     ? ((0x1000U & vlSelf->Single_Cycle__DOT__Instruction)
                         ? 4U : 3U) : ((0x1000U & vlSelf->Single_Cycle__DOT__Instruction)
                                        ? 2U : 0U)));
        } else {
            if ((3U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
                vlSelf->Single_Cycle__DOT__wb_sel = 2U;
                vlSelf->Single_Cycle__DOT__br_type = 6U;
            } else if ((0x23U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
                vlSelf->Single_Cycle__DOT__wb_sel = 0U;
                vlSelf->Single_Cycle__DOT__br_type = 6U;
            } else if ((0x63U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
                vlSelf->Single_Cycle__DOT__wb_sel = 0U;
                vlSelf->Single_Cycle__DOT__br_type 
                    = ((0x4000U & vlSelf->Single_Cycle__DOT__Instruction)
                        ? ((0x2000U & vlSelf->Single_Cycle__DOT__Instruction)
                            ? ((0x1000U & vlSelf->Single_Cycle__DOT__Instruction)
                                ? 5U : 4U) : ((0x1000U 
                                               & vlSelf->Single_Cycle__DOT__Instruction)
                                               ? 3U
                                               : 2U))
                        : ((0x2000U & vlSelf->Single_Cycle__DOT__Instruction)
                            ? 0U : ((0x1000U & vlSelf->Single_Cycle__DOT__Instruction)
                                     ? 1U : 0U)));
            } else if ((0x6fU == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
                vlSelf->Single_Cycle__DOT__wb_sel = 0U;
                vlSelf->Single_Cycle__DOT__br_type = 7U;
            } else if ((0x67U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
                vlSelf->Single_Cycle__DOT__wb_sel = 0U;
                vlSelf->Single_Cycle__DOT__br_type = 7U;
            } else {
                vlSelf->Single_Cycle__DOT__wb_sel = 1U;
                vlSelf->Single_Cycle__DOT__br_type = 6U;
            }
            if ((3U != (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
                if ((0x23U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
                    vlSelf->Single_Cycle__DOT__ALU_control = 0U;
                } else if ((0x63U != (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
                    vlSelf->Single_Cycle__DOT__ALU_control 
                        = ((0x6fU == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))
                            ? 0U : ((0x67U == (0x7fU 
                                               & vlSelf->Single_Cycle__DOT__Instruction))
                                     ? 0U : 0xaU));
                }
            }
        }
        if ((0x33U != (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
            if ((0x13U != (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
                if ((3U != (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
                    if ((0x23U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
                        vlSelf->Single_Cycle__DOT__store 
                            = ((0U == (7U & (vlSelf->Single_Cycle__DOT__Instruction 
                                             >> 0xcU)))
                                ? 0U : ((1U == (7U 
                                                & (vlSelf->Single_Cycle__DOT__Instruction 
                                                   >> 0xcU)))
                                         ? 1U : ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->Single_Cycle__DOT__Instruction 
                                                      >> 0xcU)))
                                                  ? 2U
                                                  : 0U)));
                    }
                }
                if ((3U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
                    vlSelf->Single_Cycle__DOT__load 
                        = ((0x4000U & vlSelf->Single_Cycle__DOT__Instruction)
                            ? ((0x2000U & vlSelf->Single_Cycle__DOT__Instruction)
                                ? 0U : ((0x1000U & vlSelf->Single_Cycle__DOT__Instruction)
                                         ? 4U : 3U))
                            : ((0x2000U & vlSelf->Single_Cycle__DOT__Instruction)
                                ? ((0x1000U & vlSelf->Single_Cycle__DOT__Instruction)
                                    ? 0U : 2U) : ((0x1000U 
                                                   & vlSelf->Single_Cycle__DOT__Instruction)
                                                   ? 1U
                                                   : 0U)));
                    vlSelf->Single_Cycle__DOT__rd_en = 1U;
                } else {
                    vlSelf->Single_Cycle__DOT__rd_en = 0U;
                }
                vlSelf->Single_Cycle__DOT__sel_B = 1U;
                vlSelf->Single_Cycle__DOT__sel_A = 
                    ((3U != (0x7fU & vlSelf->Single_Cycle__DOT__Instruction)) 
                     & ((0x23U != (0x7fU & vlSelf->Single_Cycle__DOT__Instruction)) 
                        & ((0x63U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction)) 
                           | (0x6fU == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction)))));
            } else {
                vlSelf->Single_Cycle__DOT__rd_en = 0U;
                vlSelf->Single_Cycle__DOT__sel_B = 1U;
                vlSelf->Single_Cycle__DOT__sel_A = 0U;
            }
        } else {
            vlSelf->Single_Cycle__DOT__rd_en = 0U;
            vlSelf->Single_Cycle__DOT__sel_B = 0U;
            vlSelf->Single_Cycle__DOT__sel_A = 0U;
        }
    } else if ((0x17U == (0x7fU & vlSelf->Single_Cycle__DOT__Instruction))) {
        vlSelf->Single_Cycle__DOT__wr_en = 1U;
        vlSelf->Single_Cycle__DOT__RegWrite = 1U;
        vlSelf->Single_Cycle__DOT__wb_sel = 1U;
        vlSelf->Single_Cycle__DOT__br_type = 6U;
        vlSelf->Single_Cycle__DOT__rd_en = 0U;
        vlSelf->Single_Cycle__DOT__ALU_control = 0U;
        vlSelf->Single_Cycle__DOT__sel_B = 1U;
        vlSelf->Single_Cycle__DOT__sel_A = 1U;
    }
    vlSelf->Single_Cycle__DOT__DP__DOT__Immediate = 
        ((0x40U & vlSelf->Single_Cycle__DOT__Instruction)
          ? ((0x20U & vlSelf->Single_Cycle__DOT__Instruction)
              ? ((0x10U & vlSelf->Single_Cycle__DOT__Instruction)
                  ? 0U : ((8U & vlSelf->Single_Cycle__DOT__Instruction)
                           ? ((4U & vlSelf->Single_Cycle__DOT__Instruction)
                               ? ((2U & vlSelf->Single_Cycle__DOT__Instruction)
                                   ? ((1U & vlSelf->Single_Cycle__DOT__Instruction)
                                       ? (((- (IData)(
                                                      (vlSelf->Single_Cycle__DOT__Instruction 
                                                       >> 0x1fU))) 
                                           << 0x14U) 
                                          | ((0xff000U 
                                              & vlSelf->Single_Cycle__DOT__Instruction) 
                                             | ((0x800U 
                                                 & (vlSelf->Single_Cycle__DOT__Instruction 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->Single_Cycle__DOT__Instruction 
                                                      >> 0x14U)))))
                                       : 0U) : 0U) : 0U)
                           : ((4U & vlSelf->Single_Cycle__DOT__Instruction)
                               ? ((2U & vlSelf->Single_Cycle__DOT__Instruction)
                                   ? ((1U & vlSelf->Single_Cycle__DOT__Instruction)
                                       ? (((- (IData)(
                                                      (vlSelf->Single_Cycle__DOT__Instruction 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelf->Single_Cycle__DOT__Instruction 
                                             >> 0x14U))
                                       : 0U) : 0U) : 
                              ((2U & vlSelf->Single_Cycle__DOT__Instruction)
                                ? ((1U & vlSelf->Single_Cycle__DOT__Instruction)
                                    ? (((- (IData)(
                                                   (vlSelf->Single_Cycle__DOT__Instruction 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelf->Single_Cycle__DOT__Instruction 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->Single_Cycle__DOT__Instruction 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->Single_Cycle__DOT__Instruction 
                                                 >> 7U)))))
                                    : 0U) : 0U)))) : 0U)
          : ((0x20U & vlSelf->Single_Cycle__DOT__Instruction)
              ? ((0x10U & vlSelf->Single_Cycle__DOT__Instruction)
                  ? ((8U & vlSelf->Single_Cycle__DOT__Instruction)
                      ? 0U : ((4U & vlSelf->Single_Cycle__DOT__Instruction)
                               ? ((2U & vlSelf->Single_Cycle__DOT__Instruction)
                                   ? ((1U & vlSelf->Single_Cycle__DOT__Instruction)
                                       ? (0xfffff000U 
                                          & vlSelf->Single_Cycle__DOT__Instruction)
                                       : 0U) : 0U) : 0U))
                  : ((8U & vlSelf->Single_Cycle__DOT__Instruction)
                      ? 0U : ((4U & vlSelf->Single_Cycle__DOT__Instruction)
                               ? 0U : ((2U & vlSelf->Single_Cycle__DOT__Instruction)
                                        ? ((1U & vlSelf->Single_Cycle__DOT__Instruction)
                                            ? (((- (IData)(
                                                           (vlSelf->Single_Cycle__DOT__Instruction 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->Single_Cycle__DOT__Instruction 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->Single_Cycle__DOT__Instruction 
                                                        >> 7U))))
                                            : 0U) : 0U))))
              : ((0x10U & vlSelf->Single_Cycle__DOT__Instruction)
                  ? ((8U & vlSelf->Single_Cycle__DOT__Instruction)
                      ? 0U : ((4U & vlSelf->Single_Cycle__DOT__Instruction)
                               ? ((2U & vlSelf->Single_Cycle__DOT__Instruction)
                                   ? ((1U & vlSelf->Single_Cycle__DOT__Instruction)
                                       ? (0xfffff000U 
                                          & vlSelf->Single_Cycle__DOT__Instruction)
                                       : 0U) : 0U) : 
                              ((2U & vlSelf->Single_Cycle__DOT__Instruction)
                                ? ((1U & vlSelf->Single_Cycle__DOT__Instruction)
                                    ? (((- (IData)(
                                                   (vlSelf->Single_Cycle__DOT__Instruction 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->Single_Cycle__DOT__Instruction 
                                        >> 0x14U)) : 0U)
                                : 0U))) : ((8U & vlSelf->Single_Cycle__DOT__Instruction)
                                            ? 0U : 
                                           ((4U & vlSelf->Single_Cycle__DOT__Instruction)
                                             ? 0U : 
                                            ((2U & vlSelf->Single_Cycle__DOT__Instruction)
                                              ? ((1U 
                                                  & vlSelf->Single_Cycle__DOT__Instruction)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->Single_Cycle__DOT__Instruction 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->Single_Cycle__DOT__Instruction 
                                                     >> 0x14U))
                                                  : 0U)
                                              : 0U))))));
    vlSelf->Single_Cycle__DOT__rdata2 = ((0U == (0x1fU 
                                                 & (vlSelf->Single_Cycle__DOT__Instruction 
                                                    >> 0x14U)))
                                          ? 0U : vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem
                                         [(0x1fU & 
                                           (vlSelf->Single_Cycle__DOT__Instruction 
                                            >> 0x14U))]);
    vlSelf->Single_Cycle__DOT__DP__DOT__rdata1 = ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Single_Cycle__DOT__Instruction 
                                                       >> 0xfU)))
                                                   ? 0U
                                                   : 
                                                  vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->Single_Cycle__DOT__Instruction 
                                                      >> 0xfU))]);
    vlSelf->Single_Cycle__DOT__DP__DOT__rdataB = ((IData)(vlSelf->Single_Cycle__DOT__sel_B)
                                                   ? vlSelf->Single_Cycle__DOT__DP__DOT__Immediate
                                                   : vlSelf->Single_Cycle__DOT__rdata2);
    vlSelf->Single_Cycle__DOT__DP__DOT__rdataA = ((IData)(vlSelf->Single_Cycle__DOT__sel_A)
                                                   ? vlSelf->Single_Cycle__DOT__DP__DOT__PC
                                                   : vlSelf->Single_Cycle__DOT__DP__DOT__rdata1);
    vlSelf->Single_Cycle__DOT__ALU_result = ((8U & (IData)(vlSelf->Single_Cycle__DOT__ALU_control))
                                              ? ((4U 
                                                  & (IData)(vlSelf->Single_Cycle__DOT__ALU_control))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->Single_Cycle__DOT__ALU_control))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->Single_Cycle__DOT__ALU_control))
                                                    ? 0U
                                                    : vlSelf->Single_Cycle__DOT__DP__DOT__rdataB)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->Single_Cycle__DOT__ALU_control))
                                                    ? 
                                                   (vlSelf->Single_Cycle__DOT__DP__DOT__rdataA 
                                                    & vlSelf->Single_Cycle__DOT__DP__DOT__rdataB)
                                                    : 
                                                   (vlSelf->Single_Cycle__DOT__DP__DOT__rdataA 
                                                    | vlSelf->Single_Cycle__DOT__DP__DOT__rdataB))))
                                              : ((4U 
                                                  & (IData)(vlSelf->Single_Cycle__DOT__ALU_control))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->Single_Cycle__DOT__ALU_control))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->Single_Cycle__DOT__ALU_control))
                                                    ? 
                                                   ((0x1fU 
                                                     >= vlSelf->Single_Cycle__DOT__DP__DOT__rdataB)
                                                     ? 
                                                    (vlSelf->Single_Cycle__DOT__DP__DOT__rdataA 
                                                     >> vlSelf->Single_Cycle__DOT__DP__DOT__rdataB)
                                                     : 0U)
                                                    : 
                                                   ((0x1fU 
                                                     >= vlSelf->Single_Cycle__DOT__DP__DOT__rdataB)
                                                     ? 
                                                    (vlSelf->Single_Cycle__DOT__DP__DOT__rdataA 
                                                     >> vlSelf->Single_Cycle__DOT__DP__DOT__rdataB)
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->Single_Cycle__DOT__ALU_control))
                                                    ? 
                                                   (vlSelf->Single_Cycle__DOT__DP__DOT__rdataA 
                                                    ^ vlSelf->Single_Cycle__DOT__DP__DOT__rdataB)
                                                    : 
                                                   ((vlSelf->Single_Cycle__DOT__DP__DOT__rdataA 
                                                     < vlSelf->Single_Cycle__DOT__DP__DOT__rdataB)
                                                     ? 1U
                                                     : 0U)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->Single_Cycle__DOT__ALU_control))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->Single_Cycle__DOT__ALU_control))
                                                    ? 
                                                   (VL_LTS_III(32, vlSelf->Single_Cycle__DOT__DP__DOT__rdataA, vlSelf->Single_Cycle__DOT__DP__DOT__rdataB)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (vlSelf->Single_Cycle__DOT__DP__DOT__rdataA 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->Single_Cycle__DOT__DP__DOT__rdataB)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->Single_Cycle__DOT__ALU_control))
                                                    ? 
                                                   (vlSelf->Single_Cycle__DOT__DP__DOT__rdataA 
                                                    - vlSelf->Single_Cycle__DOT__DP__DOT__rdataB)
                                                    : 
                                                   (vlSelf->Single_Cycle__DOT__DP__DOT__rdataA 
                                                    + vlSelf->Single_Cycle__DOT__DP__DOT__rdataB)))));
    if ((0U == (IData)(vlSelf->Single_Cycle__DOT__store))) {
        vlSelf->Single_Cycle__DOT__mask = ((2U & vlSelf->Single_Cycle__DOT__ALU_result)
                                            ? ((1U 
                                                & vlSelf->Single_Cycle__DOT__ALU_result)
                                                ? 8U
                                                : 4U)
                                            : ((1U 
                                                & vlSelf->Single_Cycle__DOT__ALU_result)
                                                ? 2U
                                                : 1U));
    } else if ((1U == (IData)(vlSelf->Single_Cycle__DOT__store))) {
        if ((2U & vlSelf->Single_Cycle__DOT__ALU_result)) {
            if ((2U & vlSelf->Single_Cycle__DOT__ALU_result)) {
                vlSelf->Single_Cycle__DOT__mask = 0xcU;
            }
        } else {
            vlSelf->Single_Cycle__DOT__mask = 3U;
        }
    } else if ((2U == (IData)(vlSelf->Single_Cycle__DOT__store))) {
        vlSelf->Single_Cycle__DOT__mask = 0xfU;
    }
    vlSelf->Single_Cycle__DOT__DP__DOT__PC_new = ((1U 
                                                   & ((4U 
                                                       & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                                        ? (IData)(vlSelf->Single_Cycle__DOT__br_type)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                                         ? 
                                                        (vlSelf->Single_Cycle__DOT__DP__DOT__rdata1 
                                                         >= vlSelf->Single_Cycle__DOT__rdata2)
                                                         : 
                                                        (vlSelf->Single_Cycle__DOT__DP__DOT__rdata1 
                                                         < vlSelf->Single_Cycle__DOT__rdata2)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                                         ? 
                                                        VL_GTES_III(32, vlSelf->Single_Cycle__DOT__DP__DOT__rdata1, vlSelf->Single_Cycle__DOT__rdata2)
                                                         : 
                                                        VL_LTS_III(32, vlSelf->Single_Cycle__DOT__DP__DOT__rdata1, vlSelf->Single_Cycle__DOT__rdata2))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                                         ? 
                                                        (vlSelf->Single_Cycle__DOT__DP__DOT__rdata1 
                                                         != vlSelf->Single_Cycle__DOT__rdata2)
                                                         : 
                                                        (vlSelf->Single_Cycle__DOT__DP__DOT__rdata1 
                                                         == vlSelf->Single_Cycle__DOT__rdata2)))))
                                                   ? vlSelf->Single_Cycle__DOT__ALU_result
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->Single_Cycle__DOT__DP__DOT__PC));
    if (vlSelf->Single_Cycle__DOT__rd_en) {
        vlSelf->Single_Cycle__DOT__readData = vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem
            [(0x1fU & (vlSelf->Single_Cycle__DOT__ALU_result 
                       >> 2U))];
    }
    if ((0U == (IData)(vlSelf->Single_Cycle__DOT__load))) {
        vlSelf->Single_Cycle__DOT__DP__DOT__rdata = 
            ((2U & vlSelf->Single_Cycle__DOT__ALU_result)
              ? ((1U & vlSelf->Single_Cycle__DOT__ALU_result)
                  ? (((- (IData)((vlSelf->Single_Cycle__DOT__readData 
                                  >> 0x1fU))) << 8U) 
                     | (vlSelf->Single_Cycle__DOT__readData 
                        >> 0x18U)) : (((- (IData)((1U 
                                                   & (vlSelf->Single_Cycle__DOT__readData 
                                                      >> 0x17U)))) 
                                       << 8U) | (0xffU 
                                                 & (vlSelf->Single_Cycle__DOT__readData 
                                                    >> 0x10U))))
              : ((1U & vlSelf->Single_Cycle__DOT__ALU_result)
                  ? (((- (IData)((1U & (vlSelf->Single_Cycle__DOT__readData 
                                        >> 0xfU)))) 
                      << 8U) | (0xffU & (vlSelf->Single_Cycle__DOT__readData 
                                         >> 8U))) : 
                 (((- (IData)((1U & (vlSelf->Single_Cycle__DOT__readData 
                                     >> 7U)))) << 8U) 
                  | (0xffU & vlSelf->Single_Cycle__DOT__readData))));
    } else if ((1U == (IData)(vlSelf->Single_Cycle__DOT__load))) {
        if ((2U & vlSelf->Single_Cycle__DOT__ALU_result)) {
            if ((2U & vlSelf->Single_Cycle__DOT__ALU_result)) {
                vlSelf->Single_Cycle__DOT__DP__DOT__rdata 
                    = (((- (IData)((vlSelf->Single_Cycle__DOT__readData 
                                    >> 0x1fU))) << 0x10U) 
                       | (vlSelf->Single_Cycle__DOT__readData 
                          >> 0x10U));
            }
        } else {
            vlSelf->Single_Cycle__DOT__DP__DOT__rdata 
                = (((- (IData)((1U & (vlSelf->Single_Cycle__DOT__readData 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->Single_Cycle__DOT__readData));
        }
    } else if ((2U == (IData)(vlSelf->Single_Cycle__DOT__load))) {
        vlSelf->Single_Cycle__DOT__DP__DOT__rdata = vlSelf->Single_Cycle__DOT__readData;
    } else if ((3U == (IData)(vlSelf->Single_Cycle__DOT__load))) {
        vlSelf->Single_Cycle__DOT__DP__DOT__rdata = 
            ((2U & vlSelf->Single_Cycle__DOT__ALU_result)
              ? ((1U & vlSelf->Single_Cycle__DOT__ALU_result)
                  ? (vlSelf->Single_Cycle__DOT__readData 
                     >> 0x18U) : (0xffU & (vlSelf->Single_Cycle__DOT__readData 
                                           >> 0x10U)))
              : ((1U & vlSelf->Single_Cycle__DOT__ALU_result)
                  ? (0xffU & (vlSelf->Single_Cycle__DOT__readData 
                              >> 8U)) : (0xffU & vlSelf->Single_Cycle__DOT__readData)));
    } else if ((4U == (IData)(vlSelf->Single_Cycle__DOT__load))) {
        if ((2U & vlSelf->Single_Cycle__DOT__ALU_result)) {
            if ((2U & vlSelf->Single_Cycle__DOT__ALU_result)) {
                vlSelf->Single_Cycle__DOT__DP__DOT__rdata 
                    = (vlSelf->Single_Cycle__DOT__readData 
                       >> 0x10U);
            }
        } else {
            vlSelf->Single_Cycle__DOT__DP__DOT__rdata 
                = (0xffffU & vlSelf->Single_Cycle__DOT__readData);
        }
    }
}

VL_ATTR_COLD void VSingle_Cycle___024root___eval_stl(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VSingle_Cycle___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingle_Cycle___024root___dump_triggers__act(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingle_Cycle___024root___dump_triggers__nba(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSingle_Cycle___024root___ctor_var_reset(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->y = VL_RAND_RESET_I(32);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->Single_Cycle__DOT__Instruction = VL_RAND_RESET_I(32);
    vlSelf->Single_Cycle__DOT__ALU_result = VL_RAND_RESET_I(32);
    vlSelf->Single_Cycle__DOT__readData = VL_RAND_RESET_I(32);
    vlSelf->Single_Cycle__DOT__rdata2 = VL_RAND_RESET_I(32);
    vlSelf->Single_Cycle__DOT__ALU_control = VL_RAND_RESET_I(4);
    vlSelf->Single_Cycle__DOT__mask = VL_RAND_RESET_I(4);
    vlSelf->Single_Cycle__DOT__br_type = VL_RAND_RESET_I(3);
    vlSelf->Single_Cycle__DOT__load = VL_RAND_RESET_I(3);
    vlSelf->Single_Cycle__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->Single_Cycle__DOT__store = VL_RAND_RESET_I(2);
    vlSelf->Single_Cycle__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->Single_Cycle__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->Single_Cycle__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->Single_Cycle__DOT__sel_A = VL_RAND_RESET_I(1);
    vlSelf->Single_Cycle__DOT__sel_B = VL_RAND_RESET_I(1);
    vlSelf->Single_Cycle__DOT__DP__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->Single_Cycle__DOT__DP__DOT__PC_new = VL_RAND_RESET_I(32);
    vlSelf->Single_Cycle__DOT__DP__DOT__rdata1 = VL_RAND_RESET_I(32);
    vlSelf->Single_Cycle__DOT__DP__DOT__Immediate = VL_RAND_RESET_I(32);
    vlSelf->Single_Cycle__DOT__DP__DOT__rdataA = VL_RAND_RESET_I(32);
    vlSelf->Single_Cycle__DOT__DP__DOT__rdataB = VL_RAND_RESET_I(32);
    vlSelf->Single_Cycle__DOT__DP__DOT__rdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->Single_Cycle__DOT__DP__DOT__IM__DOT__Mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
