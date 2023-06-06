// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingle_Cycle__Syms.h"


VL_ATTR_COLD void VSingle_Cycle___024root__trace_init_sub__TOP__0(VSingle_Cycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+92,"y", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst", false,-1);
    tracep->pushNamePrefix("Single_Cycle ");
    tracep->declBus(c+92,"y", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst", false,-1);
    tracep->declBus(c+33,"Instruction", false,-1, 31,0);
    tracep->declBus(c+34,"ALU_result", false,-1, 31,0);
    tracep->declBus(c+95,"readData", false,-1, 31,0);
    tracep->declBus(c+35,"rdata2", false,-1, 31,0);
    tracep->declBus(c+36,"ALU_control", false,-1, 3,0);
    tracep->declBus(c+37,"mask", false,-1, 3,0);
    tracep->declBus(c+38,"br_type", false,-1, 2,0);
    tracep->declBus(c+39,"load", false,-1, 2,0);
    tracep->declBus(c+40,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+41,"store", false,-1, 1,0);
    tracep->declBit(c+42,"RegWrite", false,-1);
    tracep->declBit(c+43,"wr_en", false,-1);
    tracep->declBit(c+44,"rd_en", false,-1);
    tracep->declBit(c+45,"sel_A", false,-1);
    tracep->declBit(c+46,"sel_B", false,-1);
    tracep->declBit(c+98,"cs", false,-1);
    tracep->pushNamePrefix("CU ");
    tracep->declBus(c+47,"opcode", false,-1, 6,0);
    tracep->declBus(c+48,"func7", false,-1, 6,0);
    tracep->declBus(c+49,"func3", false,-1, 2,0);
    tracep->declBus(c+36,"ALU_control", false,-1, 3,0);
    tracep->declBus(c+38,"br_type", false,-1, 2,0);
    tracep->declBus(c+39,"load", false,-1, 2,0);
    tracep->declBus(c+40,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+41,"store", false,-1, 1,0);
    tracep->declBit(c+42,"RegWrite", false,-1);
    tracep->declBit(c+43,"wr_en", false,-1);
    tracep->declBit(c+44,"rd_en", false,-1);
    tracep->declBit(c+45,"sel_A", false,-1);
    tracep->declBit(c+46,"sel_B", false,-1);
    tracep->declBus(c+99,"R_opcode", false,-1, 6,0);
    tracep->declBus(c+100,"I_opcode", false,-1, 6,0);
    tracep->declBus(c+101,"IL_opcode", false,-1, 6,0);
    tracep->declBus(c+102,"S_opcode", false,-1, 6,0);
    tracep->declBus(c+103,"B_opcode", false,-1, 6,0);
    tracep->declBus(c+104,"J_opcode", false,-1, 6,0);
    tracep->declBus(c+105,"JR_opcode", false,-1, 6,0);
    tracep->declBus(c+106,"U_opcode", false,-1, 6,0);
    tracep->declBus(c+107,"AU_opcode", false,-1, 6,0);
    tracep->declBus(c+108,"func", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DM ");
    tracep->declBus(c+95,"readData", false,-1, 31,0);
    tracep->declBus(c+34,"ALU_result", false,-1, 31,0);
    tracep->declBus(c+35,"rdata2", false,-1, 31,0);
    tracep->declBus(c+37,"mask", false,-1, 3,0);
    tracep->declBit(c+43,"wr_en", false,-1);
    tracep->declBit(c+44,"rd_en", false,-1);
    tracep->declBit(c+98,"cs", false,-1);
    tracep->declBit(c+93,"clk", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"Data_Mem", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DP ");
    tracep->declBus(c+34,"ALU_result", false,-1, 31,0);
    tracep->declBus(c+33,"Instruction", false,-1, 31,0);
    tracep->declBus(c+35,"rdata2", false,-1, 31,0);
    tracep->declBus(c+37,"mask", false,-1, 3,0);
    tracep->declBit(c+98,"cs", false,-1);
    tracep->declBus(c+95,"readData", false,-1, 31,0);
    tracep->declBus(c+36,"ALU_control", false,-1, 3,0);
    tracep->declBus(c+38,"br_type", false,-1, 2,0);
    tracep->declBus(c+39,"load", false,-1, 2,0);
    tracep->declBus(c+40,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+41,"store", false,-1, 1,0);
    tracep->declBit(c+42,"RegWrite", false,-1);
    tracep->declBit(c+45,"sel_A", false,-1);
    tracep->declBit(c+46,"sel_B", false,-1);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst", false,-1);
    tracep->declBus(c+50,"PC", false,-1, 31,0);
    tracep->declBus(c+51,"PC_new", false,-1, 31,0);
    tracep->declBit(c+52,"br_taken", false,-1);
    tracep->declBus(c+53,"rdata1", false,-1, 31,0);
    tracep->declBus(c+96,"wdata", false,-1, 31,0);
    tracep->declBus(c+54,"Immediate", false,-1, 31,0);
    tracep->declBus(c+55,"rdataA", false,-1, 31,0);
    tracep->declBus(c+56,"rdataB", false,-1, 31,0);
    tracep->declBus(c+97,"rdata", false,-1, 31,0);
    tracep->pushNamePrefix("AU ");
    tracep->declBus(c+55,"rdataA", false,-1, 31,0);
    tracep->declBus(c+56,"rdataB", false,-1, 31,0);
    tracep->declBus(c+36,"ALU_control", false,-1, 3,0);
    tracep->declBus(c+34,"ALU_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BC ");
    tracep->declBus(c+53,"rdata1", false,-1, 31,0);
    tracep->declBus(c+35,"rdata2", false,-1, 31,0);
    tracep->declBus(c+38,"br_type", false,-1, 2,0);
    tracep->declBit(c+52,"br_taken", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IG ");
    tracep->declBus(c+33,"Instruction", false,-1, 31,0);
    tracep->declBus(c+54,"Immediate", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IM ");
    tracep->declBus(c+50,"PC", false,-1, 31,0);
    tracep->declBus(c+33,"Instruction", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBus(c+97,"rdata", false,-1, 31,0);
    tracep->declBus(c+37,"mask", false,-1, 3,0);
    tracep->declBit(c+98,"cs", false,-1);
    tracep->declBus(c+95,"readData", false,-1, 31,0);
    tracep->declBus(c+34,"ALU_result", false,-1, 31,0);
    tracep->declBus(c+39,"load", false,-1, 2,0);
    tracep->declBus(c+41,"store", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RF ");
    tracep->declBus(c+96,"wdata", false,-1, 31,0);
    tracep->declBus(c+57,"raddr1", false,-1, 4,0);
    tracep->declBus(c+58,"raddr2", false,-1, 4,0);
    tracep->declBus(c+59,"waddr", false,-1, 4,0);
    tracep->declBit(c+42,"RegWrite", false,-1);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst", false,-1);
    tracep->declBus(c+53,"rdata1", false,-1, 31,0);
    tracep->declBus(c+35,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+60+i*1,"Reg_Mem", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VSingle_Cycle___024root__trace_init_top(VSingle_Cycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root__trace_init_top\n"); );
    // Body
    VSingle_Cycle___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSingle_Cycle___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingle_Cycle___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingle_Cycle___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSingle_Cycle___024root__trace_register(VSingle_Cycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSingle_Cycle___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSingle_Cycle___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSingle_Cycle___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSingle_Cycle___024root__trace_full_sub_0(VSingle_Cycle___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSingle_Cycle___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root__trace_full_top_0\n"); );
    // Init
    VSingle_Cycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingle_Cycle___024root*>(voidSelf);
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSingle_Cycle___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSingle_Cycle___024root__trace_full_sub_0(VSingle_Cycle___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->Single_Cycle__DOT__DM__DOT__Data_Mem[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->Single_Cycle__DOT__Instruction),32);
    bufp->fullIData(oldp+34,(vlSelf->Single_Cycle__DOT__ALU_result),32);
    bufp->fullIData(oldp+35,(vlSelf->Single_Cycle__DOT__rdata2),32);
    bufp->fullCData(oldp+36,(vlSelf->Single_Cycle__DOT__ALU_control),4);
    bufp->fullCData(oldp+37,(vlSelf->Single_Cycle__DOT__mask),4);
    bufp->fullCData(oldp+38,(vlSelf->Single_Cycle__DOT__br_type),3);
    bufp->fullCData(oldp+39,(vlSelf->Single_Cycle__DOT__load),3);
    bufp->fullCData(oldp+40,(vlSelf->Single_Cycle__DOT__wb_sel),2);
    bufp->fullCData(oldp+41,(vlSelf->Single_Cycle__DOT__store),2);
    bufp->fullBit(oldp+42,(vlSelf->Single_Cycle__DOT__RegWrite));
    bufp->fullBit(oldp+43,(vlSelf->Single_Cycle__DOT__wr_en));
    bufp->fullBit(oldp+44,(vlSelf->Single_Cycle__DOT__rd_en));
    bufp->fullBit(oldp+45,(vlSelf->Single_Cycle__DOT__sel_A));
    bufp->fullBit(oldp+46,(vlSelf->Single_Cycle__DOT__sel_B));
    bufp->fullCData(oldp+47,((0x7fU & vlSelf->Single_Cycle__DOT__Instruction)),7);
    bufp->fullCData(oldp+48,((vlSelf->Single_Cycle__DOT__Instruction 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+49,((7U & (vlSelf->Single_Cycle__DOT__Instruction 
                                    >> 0xcU))),3);
    bufp->fullIData(oldp+50,(vlSelf->Single_Cycle__DOT__DP__DOT__PC),32);
    bufp->fullIData(oldp+51,(((1U & ((4U & (IData)(vlSelf->Single_Cycle__DOT__br_type))
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
                                                 == vlSelf->Single_Cycle__DOT__rdata2)))))
                               ? vlSelf->Single_Cycle__DOT__ALU_result
                               : ((IData)(4U) + vlSelf->Single_Cycle__DOT__DP__DOT__PC))),32);
    bufp->fullBit(oldp+52,((1U & ((4U & (IData)(vlSelf->Single_Cycle__DOT__br_type))
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
    bufp->fullIData(oldp+53,(vlSelf->Single_Cycle__DOT__DP__DOT__rdata1),32);
    bufp->fullIData(oldp+54,(vlSelf->Single_Cycle__DOT__DP__DOT__Immediate),32);
    bufp->fullIData(oldp+55,(vlSelf->Single_Cycle__DOT__DP__DOT__rdataA),32);
    bufp->fullIData(oldp+56,(vlSelf->Single_Cycle__DOT__DP__DOT__rdataB),32);
    bufp->fullCData(oldp+57,((0x1fU & (vlSelf->Single_Cycle__DOT__Instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+58,((0x1fU & (vlSelf->Single_Cycle__DOT__Instruction 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+59,((0x1fU & (vlSelf->Single_Cycle__DOT__Instruction 
                                       >> 7U))),5);
    bufp->fullIData(oldp+60,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[0]),32);
    bufp->fullIData(oldp+61,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[1]),32);
    bufp->fullIData(oldp+62,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[2]),32);
    bufp->fullIData(oldp+63,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[3]),32);
    bufp->fullIData(oldp+64,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[4]),32);
    bufp->fullIData(oldp+65,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[5]),32);
    bufp->fullIData(oldp+66,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[6]),32);
    bufp->fullIData(oldp+67,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[7]),32);
    bufp->fullIData(oldp+68,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[8]),32);
    bufp->fullIData(oldp+69,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[9]),32);
    bufp->fullIData(oldp+70,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[10]),32);
    bufp->fullIData(oldp+71,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[11]),32);
    bufp->fullIData(oldp+72,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[12]),32);
    bufp->fullIData(oldp+73,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[13]),32);
    bufp->fullIData(oldp+74,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[14]),32);
    bufp->fullIData(oldp+75,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[15]),32);
    bufp->fullIData(oldp+76,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[16]),32);
    bufp->fullIData(oldp+77,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[17]),32);
    bufp->fullIData(oldp+78,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[18]),32);
    bufp->fullIData(oldp+79,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[19]),32);
    bufp->fullIData(oldp+80,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[20]),32);
    bufp->fullIData(oldp+81,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[21]),32);
    bufp->fullIData(oldp+82,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[22]),32);
    bufp->fullIData(oldp+83,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[23]),32);
    bufp->fullIData(oldp+84,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[24]),32);
    bufp->fullIData(oldp+85,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[25]),32);
    bufp->fullIData(oldp+86,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[26]),32);
    bufp->fullIData(oldp+87,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[27]),32);
    bufp->fullIData(oldp+88,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[28]),32);
    bufp->fullIData(oldp+89,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[29]),32);
    bufp->fullIData(oldp+90,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[30]),32);
    bufp->fullIData(oldp+91,(vlSelf->Single_Cycle__DOT__DP__DOT__RF__DOT__Reg_Mem[31]),32);
    bufp->fullIData(oldp+92,(vlSelf->y),32);
    bufp->fullBit(oldp+93,(vlSelf->clk));
    bufp->fullBit(oldp+94,(vlSelf->rst));
    bufp->fullIData(oldp+95,(vlSelf->Single_Cycle__DOT__readData),32);
    bufp->fullIData(oldp+96,(((0U == (IData)(vlSelf->Single_Cycle__DOT__wb_sel))
                               ? ((IData)(4U) + vlSelf->Single_Cycle__DOT__DP__DOT__PC)
                               : ((1U == (IData)(vlSelf->Single_Cycle__DOT__wb_sel))
                                   ? vlSelf->Single_Cycle__DOT__ALU_result
                                   : ((2U == (IData)(vlSelf->Single_Cycle__DOT__wb_sel))
                                       ? vlSelf->Single_Cycle__DOT__DP__DOT__rdata
                                       : 0U)))),32);
    bufp->fullIData(oldp+97,(vlSelf->Single_Cycle__DOT__DP__DOT__rdata),32);
    bufp->fullBit(oldp+98,(0U));
    bufp->fullCData(oldp+99,(0x33U),7);
    bufp->fullCData(oldp+100,(0x13U),7);
    bufp->fullCData(oldp+101,(3U),7);
    bufp->fullCData(oldp+102,(0x23U),7);
    bufp->fullCData(oldp+103,(0x63U),7);
    bufp->fullCData(oldp+104,(0x6fU),7);
    bufp->fullCData(oldp+105,(0x67U),7);
    bufp->fullCData(oldp+106,(0x37U),7);
    bufp->fullCData(oldp+107,(0x17U),7);
    bufp->fullCData(oldp+108,(0x20U),7);
}
