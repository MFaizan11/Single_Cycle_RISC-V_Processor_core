// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingle_Cycle__Syms.h"


void VSingle_Cycle___024root__trace_chg_sub_0(VSingle_Cycle___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSingle_Cycle___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root__trace_chg_top_0\n"); );
    // Init
    VSingle_Cycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingle_Cycle___024root*>(voidSelf);
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSingle_Cycle___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSingle_Cycle___024root__trace_chg_sub_0(VSingle_Cycle___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+32,(vlSelf->Single_Cycle__DOT__Instruction),32);
        bufp->chgIData(oldp+33,(vlSelf->Single_Cycle__DOT__ALU_result),32);
        bufp->chgIData(oldp+34,(vlSelf->Single_Cycle__DOT__rdata2),32);
        bufp->chgCData(oldp+35,(vlSelf->Single_Cycle__DOT__ALU_control),4);
        bufp->chgCData(oldp+36,(vlSelf->Single_Cycle__DOT__mask),4);
        bufp->chgCData(oldp+37,(vlSelf->Single_Cycle__DOT__br_type),3);
        bufp->chgCData(oldp+38,(vlSelf->Single_Cycle__DOT__load),3);
        bufp->chgCData(oldp+39,(vlSelf->Single_Cycle__DOT__wb_sel),2);
        bufp->chgCData(oldp+40,(vlSelf->Single_Cycle__DOT__store),2);
        bufp->chgBit(oldp+41,(vlSelf->Single_Cycle__DOT__RegWrite));
        bufp->chgBit(oldp+42,(vlSelf->Single_Cycle__DOT__wr_en));
        bufp->chgBit(oldp+43,(vlSelf->Single_Cycle__DOT__rd_en));
        bufp->chgBit(oldp+44,(vlSelf->Single_Cycle__DOT__sel_A));
        bufp->chgBit(oldp+45,(vlSelf->Single_Cycle__DOT__sel_B));
        bufp->chgCData(oldp+46,((0x7fU & vlSelf->Single_Cycle__DOT__Instruction)),7);
        bufp->chgCData(oldp+47,((vlSelf->Single_Cycle__DOT__Instruction 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+48,((7U & (vlSelf->Single_Cycle__DOT__Instruction 
                                       >> 0xcU))),3);
        bufp->chgIData(oldp+49,(vlSelf->Single_Cycle__DOT__DP__DOT__PC),32);
        bufp->chgIData(oldp+50,(((1U & ((4U & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                         ? ((2U & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                             ? (IData)(vlSelf->Single_Cycle__DOT__br_type)
                                             : ((1U 
                                                 & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                                 ? 
                                                (vlSelf->Single_Cycle__DOT__DP__DOT__rdata1 
                                                 >= vlSelf->Single_Cycle__DOT__rdata2)
                                                 : 
                                                (vlSelf->Single_Cycle__DOT__DP__DOT__rdata1 
                                                 < vlSelf->Single_Cycle__DOT__rdata2)))
                                         : ((2U & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                             ? ((1U 
                                                 & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                                 ? 
                                                VL_GTES_III(32, vlSelf->Single_Cycle__DOT__DP__DOT__rdata1, vlSelf->Single_Cycle__DOT__rdata2)
                                                 : 
                                                VL_LTS_III(32, vlSelf->Single_Cycle__DOT__DP__DOT__rdata1, vlSelf->Single_Cycle__DOT__rdata2))
                                             : ((1U 
                                                 & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                                 ? 
                                                (vlSelf->Single_Cycle__DOT__DP__DOT__rdata1 
                                                 != vlSelf->Single_Cycle__DOT__rdata2)
                                                 : 
                                                (vlSelf->Single_Cycle__DOT__DP__DOT__rdata1 
                                                 == vlSelf->Single_Cycle__DOT__rdata2)))))
                                  ? vlSelf->Single_Cycle__DOT__ALU_result
                                  : ((IData)(4U) + vlSelf->Single_Cycle__DOT__DP__DOT__PC))),32);
        bufp->chgBit(oldp+51,((1U & ((4U & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                      ? ((2U & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                          ? (IData)(vlSelf->Single_Cycle__DOT__br_type)
                                          : ((1U & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                              ? (vlSelf->Single_Cycle__DOT__DP__DOT__rdata1 
                                                 >= vlSelf->Single_Cycle__DOT__rdata2)
                                              : (vlSelf->Single_Cycle__DOT__DP__DOT__rdata1 
                                                 < vlSelf->Single_Cycle__DOT__rdata2)))
                                      : ((2U & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                          ? ((1U & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                              ? VL_GTES_III(32, vlSelf->Single_Cycle__DOT__DP__DOT__rdata1, vlSelf->Single_Cycle__DOT__rdata2)
                                              : VL_LTS_III(32, vlSelf->Single_Cycle__DOT__DP__DOT__rdata1, vlSelf->Single_Cycle__DOT__rdata2))
                                          : ((1U & (IData)(vlSelf->Single_Cycle__DOT__br_type))
                                              ? (vlSelf->Single_Cycle__DOT__DP__DOT__rdata1 
                                                 != vlSelf->Single_Cycle__DOT__rdata2)
                                              : (vlSelf->Single_Cycle__DOT__DP__DOT__rdata1 
                                                 == vlSelf->Single_Cycle__DOT__rdata2)))))));
        bufp->chgIData(oldp+52,(vlSelf->Single_Cycle__DOT__DP__DOT__rdata1),32);
        bufp->chgIData(oldp+53,(vlSelf->Single_Cycle__DOT__DP__DOT__Immediate),32);
        bufp->chgIData(oldp+54,(vlSelf->Single_Cycle__DOT__DP__DOT__rdataA),32);
        bufp->chgIData(oldp+55,(vlSelf->Single_Cycle__DOT__DP__DOT__rdataB),32);
        bufp->chgCData(oldp+56,((0x1fU & (vlSelf->Single_Cycle__DOT__Instruction 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+57,((0x1fU & (vlSelf->Single_Cycle__DOT__Instruction 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+58,((0x1fU & (vlSelf->Single_Cycle__DOT__Instruction 
                                          >> 7U))),5);
        bufp->chgIData(oldp+59,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[0]),32);
        bufp->chgIData(oldp+60,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[1]),32);
        bufp->chgIData(oldp+61,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[2]),32);
        bufp->chgIData(oldp+62,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[3]),32);
        bufp->chgIData(oldp+63,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[4]),32);
        bufp->chgIData(oldp+64,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[5]),32);
        bufp->chgIData(oldp+65,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[6]),32);
        bufp->chgIData(oldp+66,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[7]),32);
        bufp->chgIData(oldp+67,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[8]),32);
        bufp->chgIData(oldp+68,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[9]),32);
        bufp->chgIData(oldp+69,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[10]),32);
        bufp->chgIData(oldp+70,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[11]),32);
        bufp->chgIData(oldp+71,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[12]),32);
        bufp->chgIData(oldp+72,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[13]),32);
        bufp->chgIData(oldp+73,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[14]),32);
        bufp->chgIData(oldp+74,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[15]),32);
        bufp->chgIData(oldp+75,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[16]),32);
        bufp->chgIData(oldp+76,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[17]),32);
        bufp->chgIData(oldp+77,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[18]),32);
        bufp->chgIData(oldp+78,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[19]),32);
        bufp->chgIData(oldp+79,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[20]),32);
        bufp->chgIData(oldp+80,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[21]),32);
        bufp->chgIData(oldp+81,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[22]),32);
        bufp->chgIData(oldp+82,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[23]),32);
        bufp->chgIData(oldp+83,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[24]),32);
        bufp->chgIData(oldp+84,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[25]),32);
        bufp->chgIData(oldp+85,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[26]),32);
        bufp->chgIData(oldp+86,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[27]),32);
        bufp->chgIData(oldp+87,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[28]),32);
        bufp->chgIData(oldp+88,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[29]),32);
        bufp->chgIData(oldp+89,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[30]),32);
        bufp->chgIData(oldp+90,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[31]),32);
    }
    bufp->chgIData(oldp+91,(vlSelf->y),32);
    bufp->chgBit(oldp+92,(vlSelf->clk));
    bufp->chgBit(oldp+93,(vlSelf->rst));
    bufp->chgIData(oldp+94,(vlSelf->Single_Cycle__DOT__readData),32);
    bufp->chgIData(oldp+95,(((0U == (IData)(vlSelf->Single_Cycle__DOT__wb_sel))
                              ? ((IData)(4U) + vlSelf->Single_Cycle__DOT__DP__DOT__PC)
                              : ((1U == (IData)(vlSelf->Single_Cycle__DOT__wb_sel))
                                  ? vlSelf->Single_Cycle__DOT__ALU_result
                                  : ((2U == (IData)(vlSelf->Single_Cycle__DOT__wb_sel))
                                      ? vlSelf->Single_Cycle__DOT__DP__DOT__rdata
                                      : 0U)))),32);
    bufp->chgIData(oldp+96,(vlSelf->Single_Cycle__DOT__DP__DOT__rdata),32);
}

void VSingle_Cycle___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root__trace_cleanup\n"); );
    // Init
    VSingle_Cycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingle_Cycle___024root*>(voidSelf);
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
