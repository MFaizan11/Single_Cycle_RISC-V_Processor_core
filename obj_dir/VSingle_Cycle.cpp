// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSingle_Cycle.h"
#include "VSingle_Cycle__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSingle_Cycle::VSingle_Cycle(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSingle_Cycle__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSingle_Cycle::VSingle_Cycle(const char* _vcname__)
    : VSingle_Cycle(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSingle_Cycle::~VSingle_Cycle() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSingle_Cycle___024root___eval_debug_assertions(VSingle_Cycle___024root* vlSelf);
#endif  // VL_DEBUG
void VSingle_Cycle___024root___eval_static(VSingle_Cycle___024root* vlSelf);
void VSingle_Cycle___024root___eval_initial(VSingle_Cycle___024root* vlSelf);
void VSingle_Cycle___024root___eval_settle(VSingle_Cycle___024root* vlSelf);
void VSingle_Cycle___024root___eval(VSingle_Cycle___024root* vlSelf);

void VSingle_Cycle::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSingle_Cycle::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSingle_Cycle___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSingle_Cycle___024root___eval_static(&(vlSymsp->TOP));
        VSingle_Cycle___024root___eval_initial(&(vlSymsp->TOP));
        VSingle_Cycle___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSingle_Cycle___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSingle_Cycle::eventsPending() { return false; }

uint64_t VSingle_Cycle::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSingle_Cycle::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSingle_Cycle___024root___eval_final(VSingle_Cycle___024root* vlSelf);

VL_ATTR_COLD void VSingle_Cycle::final() {
    VSingle_Cycle___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSingle_Cycle::hierName() const { return vlSymsp->name(); }
const char* VSingle_Cycle::modelName() const { return "VSingle_Cycle"; }
unsigned VSingle_Cycle::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VSingle_Cycle::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VSingle_Cycle___024root__trace_init_top(VSingle_Cycle___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSingle_Cycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingle_Cycle___024root*>(voidSelf);
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSingle_Cycle___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSingle_Cycle___024root__trace_register(VSingle_Cycle___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSingle_Cycle::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VSingle_Cycle::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSingle_Cycle___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
