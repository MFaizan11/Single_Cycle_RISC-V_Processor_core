// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingle_Cycle.h for the primary calling header

#include "verilated.h"

#include "VSingle_Cycle__Syms.h"
#include "VSingle_Cycle___024root.h"

void VSingle_Cycle___024root___eval_act(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___eval_act\n"); );
}

VL_INLINE_OPT void VSingle_Cycle___024root___nba_sequent__TOP__0(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v0;
    __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v0;
    __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v0;
    __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v0;
    __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v1;
    __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v1;
    __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v1;
    __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v1;
    __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v2;
    __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v2;
    __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v2;
    __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v2;
    __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v2 = 0;
    CData/*4:0*/ __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v3;
    __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v3;
    __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v3;
    __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v3;
    __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v3 = 0;
    // Body
    __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v0 = 0U;
    __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v1 = 0U;
    __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v2 = 0U;
    __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v3 = 0U;
    if ((1U & (~ (IData)(vlSelf->Single_Cycle__DOT__wr_en)))) {
        if ((1U & (IData)(vlSelf->Single_Cycle__DOT__mask))) {
            __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v0 
                = (0xffU & vlSelf->Single_Cycle__DOT__rdata2);
            __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v0 = 1U;
            __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v0 = 0U;
            __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v0 
                = (0x1fU & (vlSelf->Single_Cycle__DOT__ALU_result 
                            >> 2U));
        }
        if ((2U & (IData)(vlSelf->Single_Cycle__DOT__mask))) {
            __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v1 
                = (0xffU & (vlSelf->Single_Cycle__DOT__rdata2 
                            >> 8U));
            __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v1 = 1U;
            __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v1 = 8U;
            __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v1 
                = (0x1fU & (vlSelf->Single_Cycle__DOT__ALU_result 
                            >> 2U));
        }
        if ((4U & (IData)(vlSelf->Single_Cycle__DOT__mask))) {
            __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v2 
                = (0xffU & (vlSelf->Single_Cycle__DOT__rdata2 
                            >> 0x10U));
            __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v2 = 1U;
            __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v2 = 0x10U;
            __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v2 
                = (0x1fU & (vlSelf->Single_Cycle__DOT__ALU_result 
                            >> 2U));
        }
        if ((8U & (IData)(vlSelf->Single_Cycle__DOT__mask))) {
            __Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v3 
                = (vlSelf->Single_Cycle__DOT__rdata2 
                   >> 0x18U);
            __Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v3 = 1U;
            __Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v3 = 0x18U;
            __Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v3 
                = (0x1fU & (vlSelf->Single_Cycle__DOT__ALU_result 
                            >> 2U));
        }
    }
    if (__Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v0) {
        vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v0))) 
                & vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem
                [__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v0) 
                                   << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v0))));
    }
    if (__Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v1) {
        vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v1))) 
                & vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem
                [__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v1) 
                                   << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v1))));
    }
    if (__Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v2) {
        vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v2))) 
                & vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem
                [__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v2) 
                                   << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v2))));
    }
    if (__Vdlyvset__Single_Cycle__DOT__DM__DOT__Data_Mem__v3) {
        vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v3))) 
                & vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem
                [__Vdlyvdim0__Single_Cycle__DOT__DM__DOT__Data_Mem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__Single_Cycle__DOT__DM__DOT__Data_Mem__v3) 
                                   << (IData)(__Vdlyvlsb__Single_Cycle__DOT__DM__DOT__Data_Mem__v3))));
    }
}

VL_INLINE_OPT void VSingle_Cycle___024root___nba_sequent__TOP__1(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0;
    __Vdlyvdim0__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0;
    __Vdlyvval__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0;
    __Vdlyvset__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0 = 0;
    // Body
    __Vdlyvset__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0 = 0U;
    if (vlSelf->Single_Cycle__DOT__RegWrite) {
        __Vdlyvval__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0 
            = ((0U == (IData)(vlSelf->Single_Cycle__DOT__wb_sel))
                ? ((IData)(4U) + vlSelf->Single_Cycle__DOT__DP__DOT__PC)
                : ((1U == (IData)(vlSelf->Single_Cycle__DOT__wb_sel))
                    ? vlSelf->Single_Cycle__DOT__ALU_result
                    : ((2U == (IData)(vlSelf->Single_Cycle__DOT__wb_sel))
                        ? vlSelf->Single_Cycle__DOT__DP__DOT__rdata
                        : 0U)));
        __Vdlyvset__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0 = 1U;
        __Vdlyvdim0__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0 
            = (0x1fU & (vlSelf->Single_Cycle__DOT__Instruction 
                        >> 7U));
    }
    if (__Vdlyvset__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0) {
        vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[__Vdlyvdim0__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0] 
            = __Vdlyvval__Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem__v0;
    }
    vlSelf->Single_Cycle__DOT__DP__DOT__PC = ((IData)(vlSelf->rst)
                                               ? 0U
                                               : vlSelf->Single_Cycle__DOT__DP__DOT__PC_new);
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
}

VL_INLINE_OPT void VSingle_Cycle___024root___nba_comb__TOP__0(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___nba_comb__TOP__0\n"); );
    // Body
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

void VSingle_Cycle___024root___eval_nba(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VSingle_Cycle___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VSingle_Cycle___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VSingle_Cycle___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VSingle_Cycle___024root___eval_triggers__act(VSingle_Cycle___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingle_Cycle___024root___dump_triggers__act(VSingle_Cycle___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingle_Cycle___024root___dump_triggers__nba(VSingle_Cycle___024root* vlSelf);
#endif  // VL_DEBUG

void VSingle_Cycle___024root___eval(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VSingle_Cycle___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VSingle_Cycle___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("Single_Cycle.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VSingle_Cycle___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VSingle_Cycle___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("Single_Cycle.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VSingle_Cycle___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VSingle_Cycle___024root___eval_debug_assertions(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
