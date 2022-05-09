// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCore__Syms.h"


void VCore___024root__traceChgSub0(VCore___024root* vlSelf, VerilatedVcd* tracep);

void VCore___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VCore___024root* const __restrict vlSelf = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VCore___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VCore___024root__traceChgSub0(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp4105;
    VlWide<4>/*127:0*/ __Vtemp4106;
    VlWide<3>/*95:0*/ __Vtemp4109;
    VlWide<3>/*95:0*/ __Vtemp4111;
    VlWide<4>/*127:0*/ __Vtemp4128;
    VlWide<4>/*127:0*/ __Vtemp4134;
    VlWide<4>/*127:0*/ __Vtemp4151;
    VlWide<4>/*127:0*/ __Vtemp4155;
    VlWide<4>/*127:0*/ __Vtemp4157;
    VlWide<4>/*127:0*/ __Vtemp4174;
    VlWide<4>/*127:0*/ __Vtemp4178;
    VlWide<4>/*127:0*/ __Vtemp4180;
    VlWide<4>/*127:0*/ __Vtemp4197;
    VlWide<4>/*127:0*/ __Vtemp4201;
    VlWide<4>/*127:0*/ __Vtemp4203;
    VlWide<4>/*127:0*/ __Vtemp4220;
    VlWide<4>/*127:0*/ __Vtemp4224;
    VlWide<4>/*127:0*/ __Vtemp4226;
    VlWide<4>/*127:0*/ __Vtemp4243;
    VlWide<4>/*127:0*/ __Vtemp4247;
    VlWide<4>/*127:0*/ __Vtemp4249;
    VlWide<4>/*127:0*/ __Vtemp4266;
    VlWide<4>/*127:0*/ __Vtemp4270;
    VlWide<4>/*127:0*/ __Vtemp4272;
    VlWide<4>/*127:0*/ __Vtemp4289;
    VlWide<4>/*127:0*/ __Vtemp4293;
    VlWide<4>/*127:0*/ __Vtemp4295;
    VlWide<4>/*127:0*/ __Vtemp4312;
    VlWide<4>/*127:0*/ __Vtemp4316;
    VlWide<4>/*127:0*/ __Vtemp4318;
    VlWide<4>/*127:0*/ __Vtemp4335;
    VlWide<4>/*127:0*/ __Vtemp4339;
    VlWide<4>/*127:0*/ __Vtemp4341;
    VlWide<4>/*127:0*/ __Vtemp4358;
    VlWide<4>/*127:0*/ __Vtemp4362;
    VlWide<4>/*127:0*/ __Vtemp4364;
    VlWide<4>/*127:0*/ __Vtemp4381;
    VlWide<4>/*127:0*/ __Vtemp4385;
    VlWide<4>/*127:0*/ __Vtemp4387;
    VlWide<4>/*127:0*/ __Vtemp4404;
    VlWide<4>/*127:0*/ __Vtemp4408;
    VlWide<4>/*127:0*/ __Vtemp4410;
    VlWide<4>/*127:0*/ __Vtemp4427;
    VlWide<4>/*127:0*/ __Vtemp4431;
    VlWide<4>/*127:0*/ __Vtemp4433;
    VlWide<4>/*127:0*/ __Vtemp4450;
    VlWide<4>/*127:0*/ __Vtemp4454;
    VlWide<4>/*127:0*/ __Vtemp4456;
    VlWide<4>/*127:0*/ __Vtemp4473;
    VlWide<4>/*127:0*/ __Vtemp4475;
    VlWide<4>/*127:0*/ __Vtemp4479;
    VlWide<4>/*127:0*/ __Vtemp4496;
    VlWide<4>/*127:0*/ __Vtemp4502;
    VlWide<4>/*127:0*/ __Vtemp4519;
    VlWide<4>/*127:0*/ __Vtemp4523;
    VlWide<4>/*127:0*/ __Vtemp4525;
    VlWide<4>/*127:0*/ __Vtemp4542;
    VlWide<4>/*127:0*/ __Vtemp4546;
    VlWide<4>/*127:0*/ __Vtemp4548;
    VlWide<4>/*127:0*/ __Vtemp4565;
    VlWide<4>/*127:0*/ __Vtemp4569;
    VlWide<4>/*127:0*/ __Vtemp4571;
    VlWide<4>/*127:0*/ __Vtemp4588;
    VlWide<4>/*127:0*/ __Vtemp4592;
    VlWide<4>/*127:0*/ __Vtemp4594;
    VlWide<4>/*127:0*/ __Vtemp4611;
    VlWide<4>/*127:0*/ __Vtemp4615;
    VlWide<4>/*127:0*/ __Vtemp4617;
    VlWide<4>/*127:0*/ __Vtemp4634;
    VlWide<4>/*127:0*/ __Vtemp4638;
    VlWide<4>/*127:0*/ __Vtemp4640;
    VlWide<4>/*127:0*/ __Vtemp4657;
    VlWide<4>/*127:0*/ __Vtemp4661;
    VlWide<4>/*127:0*/ __Vtemp4663;
    VlWide<4>/*127:0*/ __Vtemp4680;
    VlWide<4>/*127:0*/ __Vtemp4684;
    VlWide<4>/*127:0*/ __Vtemp4686;
    VlWide<4>/*127:0*/ __Vtemp4703;
    VlWide<4>/*127:0*/ __Vtemp4707;
    VlWide<4>/*127:0*/ __Vtemp4709;
    VlWide<4>/*127:0*/ __Vtemp4726;
    VlWide<4>/*127:0*/ __Vtemp4730;
    VlWide<4>/*127:0*/ __Vtemp4732;
    VlWide<4>/*127:0*/ __Vtemp4749;
    VlWide<4>/*127:0*/ __Vtemp4753;
    VlWide<4>/*127:0*/ __Vtemp4755;
    VlWide<4>/*127:0*/ __Vtemp4772;
    VlWide<4>/*127:0*/ __Vtemp4776;
    VlWide<4>/*127:0*/ __Vtemp4778;
    VlWide<4>/*127:0*/ __Vtemp4795;
    VlWide<4>/*127:0*/ __Vtemp4799;
    VlWide<4>/*127:0*/ __Vtemp4801;
    VlWide<4>/*127:0*/ __Vtemp4818;
    VlWide<4>/*127:0*/ __Vtemp4822;
    VlWide<4>/*127:0*/ __Vtemp4824;
    VlWide<4>/*127:0*/ __Vtemp4841;
    VlWide<4>/*127:0*/ __Vtemp4843;
    VlWide<4>/*127:0*/ __Vtemp4847;
    VlWide<4>/*127:0*/ __Vtemp4864;
    VlWide<4>/*127:0*/ __Vtemp4870;
    VlWide<4>/*127:0*/ __Vtemp4874;
    VlWide<4>/*127:0*/ __Vtemp4878;
    VlWide<4>/*127:0*/ __Vtemp4882;
    VlWide<4>/*127:0*/ __Vtemp4886;
    VlWide<4>/*127:0*/ __Vtemp4890;
    VlWide<4>/*127:0*/ __Vtemp4894;
    VlWide<4>/*127:0*/ __Vtemp4898;
    VlWide<4>/*127:0*/ __Vtemp4902;
    VlWide<4>/*127:0*/ __Vtemp4906;
    VlWide<4>/*127:0*/ __Vtemp4910;
    VlWide<4>/*127:0*/ __Vtemp4914;
    VlWide<4>/*127:0*/ __Vtemp4918;
    VlWide<4>/*127:0*/ __Vtemp4922;
    VlWide<4>/*127:0*/ __Vtemp4926;
    VlWide<4>/*127:0*/ __Vtemp4930;
    VlWide<4>/*127:0*/ __Vtemp4934;
    VlWide<4>/*127:0*/ __Vtemp4938;
    VlWide<4>/*127:0*/ __Vtemp4942;
    VlWide<4>/*127:0*/ __Vtemp4946;
    VlWide<4>/*127:0*/ __Vtemp4950;
    VlWide<4>/*127:0*/ __Vtemp4952;
    VlWide<4>/*127:0*/ __Vtemp4956;
    VlWide<4>/*127:0*/ __Vtemp4960;
    VlWide<4>/*127:0*/ __Vtemp4964;
    VlWide<4>/*127:0*/ __Vtemp4968;
    VlWide<4>/*127:0*/ __Vtemp4972;
    VlWide<4>/*127:0*/ __Vtemp4976;
    VlWide<4>/*127:0*/ __Vtemp4980;
    VlWide<4>/*127:0*/ __Vtemp4984;
    VlWide<4>/*127:0*/ __Vtemp4988;
    VlWide<4>/*127:0*/ __Vtemp4992;
    VlWide<4>/*127:0*/ __Vtemp4996;
    VlWide<4>/*127:0*/ __Vtemp5000;
    VlWide<4>/*127:0*/ __Vtemp5004;
    VlWide<4>/*127:0*/ __Vtemp5008;
    VlWide<4>/*127:0*/ __Vtemp5012;
    VlWide<4>/*127:0*/ __Vtemp5016;
    VlWide<4>/*127:0*/ __Vtemp5020;
    VlWide<4>/*127:0*/ __Vtemp5024;
    VlWide<4>/*127:0*/ __Vtemp5028;
    VlWide<4>/*127:0*/ __Vtemp5032;
    VlWide<4>/*127:0*/ __Vtemp5033;
    VlWide<4>/*127:0*/ __Vtemp5037;
    VlWide<4>/*127:0*/ __Vtemp5041;
    VlWide<4>/*127:0*/ __Vtemp5045;
    VlWide<4>/*127:0*/ __Vtemp5049;
    VlWide<4>/*127:0*/ __Vtemp5053;
    VlWide<4>/*127:0*/ __Vtemp5057;
    VlWide<4>/*127:0*/ __Vtemp5061;
    VlWide<4>/*127:0*/ __Vtemp5065;
    VlWide<4>/*127:0*/ __Vtemp5069;
    VlWide<4>/*127:0*/ __Vtemp5073;
    VlWide<4>/*127:0*/ __Vtemp5077;
    VlWide<4>/*127:0*/ __Vtemp5081;
    VlWide<4>/*127:0*/ __Vtemp5087;
    VlWide<4>/*127:0*/ __Vtemp5107;
    VlWide<4>/*127:0*/ __Vtemp5117;
    VlWide<4>/*127:0*/ __Vtemp5141;
    VlWide<4>/*127:0*/ __Vtemp5147;
    VlWide<4>/*127:0*/ __Vtemp5167;
    VlWide<4>/*127:0*/ __Vtemp5177;
    VlWide<4>/*127:0*/ __Vtemp5201;
    VlWide<4>/*127:0*/ __Vtemp5205;
    VlWide<4>/*127:0*/ __Vtemp5209;
    VlWide<4>/*127:0*/ __Vtemp5213;
    VlWide<4>/*127:0*/ __Vtemp5217;
    VlWide<4>/*127:0*/ __Vtemp5221;
    VlWide<4>/*127:0*/ __Vtemp5231;
    VlWide<4>/*127:0*/ __Vtemp5255;
    VlWide<4>/*127:0*/ __Vtemp5258;
    VlWide<4>/*127:0*/ __Vtemp5261;
    VlWide<4>/*127:0*/ __Vtemp5264;
    VlWide<4>/*127:0*/ __Vtemp5267;
    VlWide<4>/*127:0*/ __Vtemp5270;
    VlWide<4>/*127:0*/ __Vtemp5273;
    VlWide<4>/*127:0*/ __Vtemp5276;
    VlWide<4>/*127:0*/ __Vtemp5279;
    VlWide<4>/*127:0*/ __Vtemp5282;
    VlWide<4>/*127:0*/ __Vtemp5285;
    VlWide<4>/*127:0*/ __Vtemp5288;
    VlWide<4>/*127:0*/ __Vtemp5291;
    VlWide<4>/*127:0*/ __Vtemp5294;
    VlWide<4>/*127:0*/ __Vtemp5297;
    VlWide<4>/*127:0*/ __Vtemp5300;
    VlWide<3>/*95:0*/ __Vtemp5301;
    VlWide<3>/*95:0*/ __Vtemp5304;
    VlWide<3>/*95:0*/ __Vtemp5307;
    VlWide<3>/*95:0*/ __Vtemp5310;
    VlWide<3>/*95:0*/ __Vtemp5313;
    VlWide<3>/*95:0*/ __Vtemp5316;
    VlWide<3>/*95:0*/ __Vtemp5319;
    VlWide<3>/*95:0*/ __Vtemp5322;
    VlWide<3>/*95:0*/ __Vtemp5325;
    VlWide<3>/*95:0*/ __Vtemp5328;
    VlWide<3>/*95:0*/ __Vtemp5331;
    VlWide<3>/*95:0*/ __Vtemp5334;
    VlWide<3>/*95:0*/ __Vtemp5337;
    VlWide<3>/*95:0*/ __Vtemp5340;
    VlWide<3>/*95:0*/ __Vtemp5343;
    VlWide<3>/*95:0*/ __Vtemp5346;
    VlWide<4>/*127:0*/ __Vtemp5356;
    VlWide<4>/*127:0*/ __Vtemp5380;
    VlWide<4>/*127:0*/ __Vtemp5381;
    VlWide<3>/*95:0*/ __Vtemp5384;
    VlWide<4>/*127:0*/ __Vtemp5387;
    VlWide<4>/*127:0*/ __Vtemp5390;
    VlWide<4>/*127:0*/ __Vtemp5393;
    VlWide<4>/*127:0*/ __Vtemp5396;
    VlWide<4>/*127:0*/ __Vtemp5399;
    VlWide<4>/*127:0*/ __Vtemp5402;
    VlWide<4>/*127:0*/ __Vtemp5405;
    VlWide<4>/*127:0*/ __Vtemp5408;
    VlWide<4>/*127:0*/ __Vtemp5411;
    VlWide<4>/*127:0*/ __Vtemp5414;
    VlWide<4>/*127:0*/ __Vtemp5417;
    VlWide<4>/*127:0*/ __Vtemp5420;
    VlWide<4>/*127:0*/ __Vtemp5423;
    VlWide<4>/*127:0*/ __Vtemp5426;
    VlWide<4>/*127:0*/ __Vtemp5429;
    VlWide<4>/*127:0*/ __Vtemp5432;
    VlWide<4>/*127:0*/ __Vtemp5435;
    VlWide<4>/*127:0*/ __Vtemp5438;
    VlWide<4>/*127:0*/ __Vtemp5441;
    VlWide<4>/*127:0*/ __Vtemp5444;
    VlWide<4>/*127:0*/ __Vtemp5447;
    VlWide<4>/*127:0*/ __Vtemp5450;
    VlWide<4>/*127:0*/ __Vtemp5469;
    VlWide<4>/*127:0*/ __Vtemp5492;
    VlWide<4>/*127:0*/ __Vtemp5511;
    VlWide<4>/*127:0*/ __Vtemp5534;
    VlWide<4>/*127:0*/ __Vtemp5537;
    VlWide<4>/*127:0*/ __Vtemp5540;
    VlWide<4>/*127:0*/ __Vtemp5543;
    VlWide<4>/*127:0*/ __Vtemp5546;
    VlWide<4>/*127:0*/ __Vtemp5549;
    VlWide<4>/*127:0*/ __Vtemp5572;
    VlWide<3>/*95:0*/ __Vtemp5575;
    VlWide<4>/*127:0*/ __Vtemp5578;
    VlWide<4>/*127:0*/ __Vtemp5579;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,((0xfffffffcU & vlSelf->Core__DOT__fetch__DOT__pc)),32);
            tracep->chgIData(oldp+1,(vlSelf->Core__DOT__fetch__DOT__pc_out),32);
            tracep->chgIData(oldp+2,(vlSelf->Core__DOT__fetch__DOT__reg_pnpc),32);
            tracep->chgIData(oldp+3,(vlSelf->Core__DOT__execute_io_jmp_packet_o_jmp_npc),32);
            tracep->chgIData(oldp+4,(vlSelf->Core__DOT__decode__DOT__pc),32);
            tracep->chgIData(oldp+5,(vlSelf->Core__DOT__decode__DOT__inst),32);
            tracep->chgCData(oldp+6,(((0x37U == (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                       ? 1U : ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                                ? 1U
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 0U
                                                       : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_356)))))))),4);
            tracep->chgCData(oldp+7,(((0x37U == (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                       ? 0U : ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                                ? 0U
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 2U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 3U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 4U
                                                       : 
                                                      ((0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 5U
                                                        : 
                                                       ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 6U
                                                         : 
                                                        ((0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 7U
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 8U
                                                           : 0U))))))))))),4);
            tracep->chgCData(oldp+8,(((0x37U == (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                       ? 0U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_505))),2);
            tracep->chgCData(oldp+9,(((0x37U == (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                       ? 0U : ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->Core__DOT__decode__DOT__inst))
                                                ? 0U
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Core__DOT__decode__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__decode__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__decode__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__decode__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__decode__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__decode__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__decode__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__decode__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__decode__DOT__inst))
                                                            ? 0U
                                                            : 
                                                           ((0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__decode__DOT__inst))
                                                             ? 1U
                                                             : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_566)))))))))))))),2);
            tracep->chgCData(oldp+10,(((0x37U == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                        ? 0U : ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                                 ? 0U
                                                 : 
                                                ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Core__DOT__decode__DOT__inst))
                                                  ? 0U
                                                  : 
                                                 ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Core__DOT__decode__DOT__inst))
                                                   ? 0U
                                                   : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_718)))))),4);
            tracep->chgBit(oldp+11,(((0x37U != (0x7fU 
                                                & vlSelf->Core__DOT__decode__DOT__inst)) 
                                     & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793))));
            tracep->chgCData(oldp+12,(((0x37U == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                        ? 3U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_865))),3);
            tracep->chgCData(oldp+13,(((0x37U == (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst))
                                        ? 2U : (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_937))),3);
            tracep->chgCData(oldp+14,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                >> 7U))),5);
            tracep->chgIData(oldp+15,(((7U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                                        ? (0x1fU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0xfU))
                                        : ((6U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_4))
                                            ? (((0x37U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->Core__DOT__decode__DOT__inst)) 
                                                & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793))
                                                ? (0x1fU 
                                                   & (vlSelf->Core__DOT__decode__DOT__inst 
                                                      >> 0x14U))
                                                : (0x3fU 
                                                   & (vlSelf->Core__DOT__decode__DOT__inst 
                                                      >> 0x14U)))
                                            : vlSelf->Core__DOT__decode__DOT___io_out_bits_imm_T_9))),32);
            tracep->chgBit(oldp+16,((1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1))));
            tracep->chgCData(oldp+17,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                >> 0xfU))),5);
            tracep->chgBit(oldp+18,(vlSelf->Core__DOT__decode_io_ren2));
            tracep->chgCData(oldp+19,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                >> 0x14U))),5);
            tracep->chgBit(oldp+20,(vlSelf->Core__DOT__decode__DOT__io_is_ebreak_REG));
            tracep->chgQData(oldp+21,(vlSelf->Core__DOT__decode__DOT__rs1_reg),64);
            tracep->chgQData(oldp+23,(vlSelf->Core__DOT__decode__DOT__rs2_reg),64);
            tracep->chgIData(oldp+25,(vlSelf->Core__DOT__decode__DOT__reg_pnpc),32);
            tracep->chgBit(oldp+26,((((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                        | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                       | ((0U != (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code)) 
                                          & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))) 
                                      & ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard) 
                                         | (IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard))) 
                                     | (((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                         | (2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))) 
                                        & ((IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard) 
                                           | (IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard))))));
            tracep->chgBit(oldp+27,(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG));
            tracep->chgCData(oldp+28,(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG),5);
            tracep->chgQData(oldp+29,(vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG),64);
            tracep->chgQData(oldp+31,(vlSelf->Core__DOT__regfile__DOT__rf_0),64);
            tracep->chgQData(oldp+33,(vlSelf->Core__DOT__regfile__DOT__rf_1),64);
            tracep->chgQData(oldp+35,(vlSelf->Core__DOT__regfile__DOT__rf_2),64);
            tracep->chgQData(oldp+37,(vlSelf->Core__DOT__regfile__DOT__rf_3),64);
            tracep->chgQData(oldp+39,(vlSelf->Core__DOT__regfile__DOT__rf_4),64);
            tracep->chgQData(oldp+41,(vlSelf->Core__DOT__regfile__DOT__rf_5),64);
            tracep->chgQData(oldp+43,(vlSelf->Core__DOT__regfile__DOT__rf_6),64);
            tracep->chgQData(oldp+45,(vlSelf->Core__DOT__regfile__DOT__rf_7),64);
            tracep->chgQData(oldp+47,(vlSelf->Core__DOT__regfile__DOT__rf_8),64);
            tracep->chgQData(oldp+49,(vlSelf->Core__DOT__regfile__DOT__rf_9),64);
            tracep->chgQData(oldp+51,(vlSelf->Core__DOT__regfile__DOT__rf_10),64);
            tracep->chgQData(oldp+53,(vlSelf->Core__DOT__regfile__DOT__rf_11),64);
            tracep->chgQData(oldp+55,(vlSelf->Core__DOT__regfile__DOT__rf_12),64);
            tracep->chgQData(oldp+57,(vlSelf->Core__DOT__regfile__DOT__rf_13),64);
            tracep->chgQData(oldp+59,(vlSelf->Core__DOT__regfile__DOT__rf_14),64);
            tracep->chgQData(oldp+61,(vlSelf->Core__DOT__regfile__DOT__rf_15),64);
            tracep->chgQData(oldp+63,(vlSelf->Core__DOT__regfile__DOT__rf_16),64);
            tracep->chgQData(oldp+65,(vlSelf->Core__DOT__regfile__DOT__rf_17),64);
            tracep->chgQData(oldp+67,(vlSelf->Core__DOT__regfile__DOT__rf_18),64);
            tracep->chgQData(oldp+69,(vlSelf->Core__DOT__regfile__DOT__rf_19),64);
            tracep->chgQData(oldp+71,(vlSelf->Core__DOT__regfile__DOT__rf_20),64);
            tracep->chgQData(oldp+73,(vlSelf->Core__DOT__regfile__DOT__rf_21),64);
            tracep->chgQData(oldp+75,(vlSelf->Core__DOT__regfile__DOT__rf_22),64);
            tracep->chgQData(oldp+77,(vlSelf->Core__DOT__regfile__DOT__rf_23),64);
            tracep->chgQData(oldp+79,(vlSelf->Core__DOT__regfile__DOT__rf_24),64);
            tracep->chgQData(oldp+81,(vlSelf->Core__DOT__regfile__DOT__rf_25),64);
            tracep->chgQData(oldp+83,(vlSelf->Core__DOT__regfile__DOT__rf_26),64);
            tracep->chgQData(oldp+85,(vlSelf->Core__DOT__regfile__DOT__rf_27),64);
            tracep->chgQData(oldp+87,(vlSelf->Core__DOT__regfile__DOT__rf_28),64);
            tracep->chgQData(oldp+89,(vlSelf->Core__DOT__regfile__DOT__rf_29),64);
            tracep->chgQData(oldp+91,(vlSelf->Core__DOT__regfile__DOT__rf_30),64);
            tracep->chgQData(oldp+93,(vlSelf->Core__DOT__regfile__DOT__rf_31),64);
            tracep->chgBit(oldp+95,(vlSelf->Core__DOT__execute_io_ex_rd_en));
            tracep->chgCData(oldp+96,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_addr),5);
            tracep->chgQData(oldp+97,(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out),64);
            tracep->chgBit(oldp+99,(((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                     | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)))));
            tracep->chgBit(oldp+100,(((0U != (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code)) 
                                      & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
            tracep->chgBit(oldp+101,(((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)) 
                                      | (2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code)))));
            tracep->chgBit(oldp+102,(vlSelf->Core__DOT__mem_io_mem_rd_en));
            tracep->chgCData(oldp+103,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_addr),5);
            tracep->chgBit(oldp+104,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid));
            tracep->chgIData(oldp+105,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc),32);
            tracep->chgIData(oldp+106,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_inst),32);
            tracep->chgCData(oldp+107,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code),2);
            tracep->chgCData(oldp+108,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size),2);
            tracep->chgCData(oldp+109,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mdu_code),4);
            tracep->chgBit(oldp+110,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rd_en));
            tracep->chgBit(oldp+111,(vlSelf->Core__DOT__execute__DOT__io_is_ebreak_o_REG));
            tracep->chgIData(oldp+112,((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)),32);
            tracep->chgQData(oldp+113,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out),64);
            tracep->chgBit(oldp+115,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__completed));
            tracep->chgBit(oldp+116,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_valid));
            tracep->chgIData(oldp+117,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_pc),32);
            tracep->chgIData(oldp+118,(vlSelf->Core__DOT__mem__DOT__io_out_bits_REG_inst),32);
            tracep->chgBit(oldp+119,(vlSelf->Core__DOT__mem__DOT__io_is_ebreak_o_REG));
            VL_EXTEND_WQ(127,64, __Vtemp4105, vlSelf->Core__DOT__decode__DOT__rs2_reg);
            VL_SHIFTL_WWI(127,127,6, __Vtemp4106, __Vtemp4105, 
                          (0x38U & ((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out) 
                                    << 3U)));
            tracep->chgQData(oldp+120,((((QData)((IData)(
                                                         __Vtemp4106[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp4106[0U])))),64);
            tracep->chgCData(oldp+122,((0x7fffU & (
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                     ? 0x80U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                      ? 0xc0U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                       ? 0xe0U
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                        ? 0xf0U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                         ? 0xf8U
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                          ? 0xfcU
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                           ? 0xfeU
                                                           : 0xffU))))))) 
                                                   & (((3U 
                                                        == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                        ? 0xffU
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                         ? 0xfU
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                                          ? 3U
                                                          : 1U))) 
                                                      << 
                                                      (7U 
                                                       & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))))),8);
            tracep->chgIData(oldp+123,(vlSelf->Core__DOT__io_commit_pc_REG),32);
            tracep->chgBit(oldp+124,(vlSelf->Core__DOT__io_commit_REG));
            tracep->chgIData(oldp+125,((0x1fffffffU 
                                        & (IData)((vlSelf->Core__DOT__execute__DOT__alu_io_alu_out 
                                                   >> 3U)))),29);
            tracep->chgIData(oldp+126,(vlSelf->Core__DOT__fetch__DOT__inst_out),32);
            tracep->chgBit(oldp+127,(vlSelf->Core__DOT__fetch__DOT__valid_out));
            tracep->chgIData(oldp+128,(vlSelf->Core__DOT__fetch__DOT__pc),32);
            tracep->chgIData(oldp+129,((vlSelf->Core__DOT__fetch__DOT__pc 
                                        >> 2U)),30);
            tracep->chgIData(oldp+130,(((IData)(4U) 
                                        + (0xfffffffcU 
                                           & vlSelf->Core__DOT__fetch__DOT__pc))),32);
            tracep->chgBit(oldp+131,(vlSelf->Core__DOT__fetch__DOT__use_reg_npc));
            tracep->chgIData(oldp+132,(vlSelf->Core__DOT__fetch__DOT__reg_npc),32);
            tracep->chgBit(oldp+133,(vlSelf->Core__DOT__decode__DOT__inst_valid));
            tracep->chgCData(oldp+134,(vlSelf->Core__DOT__decode__DOT__c0_1),3);
            tracep->chgBit(oldp+135,(vlSelf->Core__DOT__decode__DOT__c0_3));
            tracep->chgCData(oldp+136,(vlSelf->Core__DOT__decode__DOT__c0_4),3);
            tracep->chgIData(oldp+137,(((vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x1fU) ? 0x1fffffU
                                         : 0U)),21);
            tracep->chgSData(oldp+138,((0x7ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U))),11);
            tracep->chgIData(oldp+139,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                           >> 0x1fU)
                                           ? 0x1fffffU
                                           : 0U) << 0xbU) 
                                        | (0x7ffU & 
                                           (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U)))),32);
            tracep->chgCData(oldp+140,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x19U))),6);
            tracep->chgIData(oldp+141,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                           >> 0x1fU)
                                           ? 0x1fffffU
                                           : 0U) << 0xbU) 
                                        | ((0x7e0U 
                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 7U))))),32);
            tracep->chgIData(oldp+142,(((vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x1fU) ? 0xfffffU
                                         : 0U)),20);
            tracep->chgBit(oldp+143,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 7U))));
            tracep->chgCData(oldp+144,((0xfU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                >> 8U))),4);
            tracep->chgIData(oldp+145,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                           >> 0x1fU)
                                           ? 0xfffffU
                                           : 0U) << 0xcU) 
                                        | ((0x800U 
                                            & (vlSelf->Core__DOT__decode__DOT__inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 7U)))))),32);
            tracep->chgIData(oldp+146,((vlSelf->Core__DOT__decode__DOT__inst 
                                        >> 0xcU)),20);
            tracep->chgIData(oldp+147,((0xfffff000U 
                                        & vlSelf->Core__DOT__decode__DOT__inst)),32);
            tracep->chgSData(oldp+148,(((vlSelf->Core__DOT__decode__DOT__inst 
                                         >> 0x1fU) ? 0xfffU
                                         : 0U)),12);
            tracep->chgCData(oldp+149,((0xffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xcU))),8);
            tracep->chgBit(oldp+150,((1U & (vlSelf->Core__DOT__decode__DOT__inst 
                                            >> 0x14U))));
            tracep->chgSData(oldp+151,((0x3ffU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 0x15U))),10);
            tracep->chgIData(oldp+152,(((((vlSelf->Core__DOT__decode__DOT__inst 
                                           >> 0x1fU)
                                           ? 0xfffU
                                           : 0U) << 0x14U) 
                                        | ((0xff000U 
                                            & vlSelf->Core__DOT__decode__DOT__inst) 
                                           | ((0x800U 
                                               & (vlSelf->Core__DOT__decode__DOT__inst 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 0x14U)))))),32);
            tracep->chgCData(oldp+153,((0x3fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U))),6);
            tracep->chgIData(oldp+154,((((0x37U != 
                                          (0x7fU & vlSelf->Core__DOT__decode__DOT__inst)) 
                                         & (IData)(vlSelf->Core__DOT__decode__DOT___ctrl_T_793))
                                         ? (0x1fU & 
                                            (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U))
                                         : (0x3fU & 
                                            (vlSelf->Core__DOT__decode__DOT__inst 
                                             >> 0x14U)))),32);
            tracep->chgIData(oldp+155,((0x1fU & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU))),32);
            tracep->chgBit(oldp+156,(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard));
            tracep->chgBit(oldp+157,(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard));
            tracep->chgBit(oldp+158,(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard));
            tracep->chgBit(oldp+159,(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard));
            tracep->chgBit(oldp+160,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                       & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0xfU)))) 
                                      & (1U == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))));
            tracep->chgBit(oldp+161,((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                       & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                          == (0x1fU 
                                              & (vlSelf->Core__DOT__decode__DOT__inst 
                                                 >> 0x14U)))) 
                                      & (IData)(vlSelf->Core__DOT__decode_io_ren2))));
            tracep->chgQData(oldp+162,(vlSelf->Core__DOT__execute__DOT__alu_io_in1),64);
            tracep->chgQData(oldp+164,(vlSelf->Core__DOT__execute__DOT__alu_io_in2),64);
            tracep->chgCData(oldp+166,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_alu_code),4);
            tracep->chgBit(oldp+167,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_w_type));
            tracep->chgBit(oldp+168,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp));
            tracep->chgCData(oldp+169,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_jmp_code),4);
            tracep->chgIData(oldp+170,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm),32);
            tracep->chgIData(oldp+171,(vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc),32);
            tracep->chgCData(oldp+172,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs1_src),3);
            tracep->chgCData(oldp+173,(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_rs2_src),3);
            tracep->chgIData(oldp+174,(((vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_imm 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+175,(((IData)(4U) 
                                        + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc)),32);
            tracep->chgIData(oldp+176,(((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_jmp)
                                         ? vlSelf->Core__DOT__execute__DOT__alu_io_jmp_pc
                                         : ((IData)(4U) 
                                            + vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_pc))),32);
            tracep->chgBit(oldp+177,((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                       | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                      & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
            tracep->chgBit(oldp+178,(((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                      & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid))));
            tracep->chgCData(oldp+179,(vlSelf->Core__DOT__execute__DOT__alu__DOT__shamt),6);
            tracep->chgIData(oldp+180,((IData)(vlSelf->Core__DOT__execute__DOT__alu_io_in1)),32);
            tracep->chgQData(oldp+181,(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0),64);
            tracep->chgIData(oldp+183,((IData)(vlSelf->Core__DOT__execute__DOT__alu__DOT__out0)),32);
            tracep->chgIData(oldp+184,(((1U & (IData)(
                                                      (vlSelf->Core__DOT__execute__DOT__alu__DOT__out0 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            VL_EXTEND_WQ(65,64, __Vtemp4109, vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1);
            if (((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                   | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                  | (3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                 & (IData)((vlSelf->Core__DOT__execute__DOT__alu_io_in1 
                            >> 0x3fU)))) {
                __Vtemp4111[0U] = (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1);
                __Vtemp4111[1U] = (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1 
                                           >> 0x20U));
                __Vtemp4111[2U] = (1U & (IData)((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1 
                                                 >> 0x3fU)));
            } else {
                __Vtemp4111[0U] = __Vtemp4109[0U];
                __Vtemp4111[1U] = __Vtemp4109[1U];
                __Vtemp4111[2U] = __Vtemp4109[2U];
            }
            tracep->chgWData(oldp+185,(__Vtemp4111),65);
            tracep->chgWData(oldp+188,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2),65);
            tracep->chgQData(oldp+191,((((QData)((IData)(
                                                         vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U])))),64);
            tracep->chgQData(oldp+193,((((QData)((IData)(
                                                         vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[2U])))),64);
            tracep->chgBit(oldp+195,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_mul_valid));
            tracep->chgBit(oldp+196,((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state))));
            tracep->chgQData(oldp+197,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1),64);
            tracep->chgQData(oldp+199,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2),64);
            tracep->chgQData(oldp+201,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_out),64);
            tracep->chgQData(oldp+203,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_out),64);
            tracep->chgBit(oldp+205,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div));
            tracep->chgBit(oldp+206,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_div_valid));
            tracep->chgBit(oldp+207,((0U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state))));
            tracep->chgCData(oldp+208,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__state),2);
            tracep->chgCData(oldp+209,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop),4);
            tracep->chgQData(oldp+210,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x),64);
            tracep->chgQData(oldp+212,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y),64);
            tracep->chgBit(oldp+214,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_divu));
            tracep->chgBit(oldp+215,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_mul));
            tracep->chgBit(oldp+216,(((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                        | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                       | (3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                      & (IData)((vlSelf->Core__DOT__execute__DOT__alu_io_in1 
                                                 >> 0x3fU)))));
            tracep->chgBit(oldp+217,((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                       | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                      & (IData)((vlSelf->Core__DOT__execute__DOT__alu_io_in2 
                                                 >> 0x3fU)))));
            tracep->chgBit(oldp+218,((((2U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                       | (3U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                      | (4U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)))));
            tracep->chgBit(oldp+219,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_word));
            tracep->chgBit(oldp+220,(((((5U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)) 
                                        | (6U == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                       | (0xaU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop))) 
                                      | (0xbU == (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_mduop)))));
            tracep->chgIData(oldp+221,((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x)),32);
            tracep->chgIData(oldp+222,(((1U & (IData)(
                                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_x 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+223,((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y)),32);
            tracep->chgIData(oldp+224,(((1U & (IData)(
                                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_y 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgBit(oldp+225,((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+226,((1U & (IData)(
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2 
                                                    >> 0x3fU)))));
            tracep->chgIData(oldp+227,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U]),32);
            tracep->chgIData(oldp+228,(((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out[0U] 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgQData(oldp+229,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out_lo_1),64);
            tracep->chgIData(oldp+231,(((1U & (IData)(
                                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__reg_out_lo_1 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgWData(oldp+232,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1),65);
            tracep->chgCData(oldp+235,((7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U])),3);
            if ((4U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))) {
                __Vtemp4128[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4128[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4128[2U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4128[3U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            if ((7U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))) {
                __Vtemp4134[0U] = 0U;
                __Vtemp4134[1U] = 0U;
                __Vtemp4134[2U] = 0U;
                __Vtemp4134[3U] = 0U;
            } else {
                __Vtemp4134[0U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4134[1U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((5U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                        : ((4U == (7U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                            ? (((~ 
                                                 vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                                >> 0x1fU) 
                                               | ((~ 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                                  << 1U))
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                                ? (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                      << 1U))
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 0U))))));
                __Vtemp4134[2U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4128[2U]));
                __Vtemp4134[3U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4128[3U]));
            }
            tracep->chgWData(oldp+236,(__Vtemp4134),128);
            tracep->chgCData(oldp+240,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c),2);
            tracep->chgCData(oldp+241,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 2U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 2U)))) {
                __Vtemp4151[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4151[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4151[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 2U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4151[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 2U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4155[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 2U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 2U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 2U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 2U)))) {
                __Vtemp4157[0U] = 0U;
                __Vtemp4157[1U] = 0U;
                __Vtemp4157[2U] = 0U;
                __Vtemp4157[3U] = 0U;
            } else {
                __Vtemp4157[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 2U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 2U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 2U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4157[1U] = __Vtemp4155[1U];
                __Vtemp4157[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4151[2U]));
                __Vtemp4157[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4151[3U]));
            }
            tracep->chgWData(oldp+242,(__Vtemp4157),128);
            tracep->chgCData(oldp+246,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c),2);
            tracep->chgCData(oldp+247,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 4U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 4U)))) {
                __Vtemp4174[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4174[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4174[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 4U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4174[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4178[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 4U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 4U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 4U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 4U)))) {
                __Vtemp4180[0U] = 0U;
                __Vtemp4180[1U] = 0U;
                __Vtemp4180[2U] = 0U;
                __Vtemp4180[3U] = 0U;
            } else {
                __Vtemp4180[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 4U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 4U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4180[1U] = __Vtemp4178[1U];
                __Vtemp4180[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4174[2U]));
                __Vtemp4180[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4174[3U]));
            }
            tracep->chgWData(oldp+248,(__Vtemp4180),128);
            tracep->chgCData(oldp+252,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c),2);
            tracep->chgCData(oldp+253,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 6U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 6U)))) {
                __Vtemp4197[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4197[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4197[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 6U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4197[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 6U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 6U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4201[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 6U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 6U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 6U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 6U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 6U)))) {
                __Vtemp4203[0U] = 0U;
                __Vtemp4203[1U] = 0U;
                __Vtemp4203[2U] = 0U;
                __Vtemp4203[3U] = 0U;
            } else {
                __Vtemp4203[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 6U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 6U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 6U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 6U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4203[1U] = __Vtemp4201[1U];
                __Vtemp4203[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4197[2U]));
                __Vtemp4203[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4197[3U]));
            }
            tracep->chgWData(oldp+254,(__Vtemp4203),128);
            tracep->chgCData(oldp+258,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c),2);
            tracep->chgCData(oldp+259,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 8U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 8U)))) {
                __Vtemp4220[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4220[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4220[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 8U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4220[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 8U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 8U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4224[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 8U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 8U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 8U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 8U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 8U)))) {
                __Vtemp4226[0U] = 0U;
                __Vtemp4226[1U] = 0U;
                __Vtemp4226[2U] = 0U;
                __Vtemp4226[3U] = 0U;
            } else {
                __Vtemp4226[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 8U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 8U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 8U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 8U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4226[1U] = __Vtemp4224[1U];
                __Vtemp4226[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4220[2U]));
                __Vtemp4226[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4220[3U]));
            }
            tracep->chgWData(oldp+260,(__Vtemp4226),128);
            tracep->chgCData(oldp+264,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c),2);
            tracep->chgCData(oldp+265,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 0xaU))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0xaU)))) {
                __Vtemp4243[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4243[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4243[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0xaU)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4243[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0xaU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0xaU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4247[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xaU)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0xaU)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0xaU)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0xaU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0xaU)))) {
                __Vtemp4249[0U] = 0U;
                __Vtemp4249[1U] = 0U;
                __Vtemp4249[2U] = 0U;
                __Vtemp4249[3U] = 0U;
            } else {
                __Vtemp4249[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0xaU)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0xaU)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0xaU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0xaU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4249[1U] = __Vtemp4247[1U];
                __Vtemp4249[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4243[2U]));
                __Vtemp4249[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4243[3U]));
            }
            tracep->chgWData(oldp+266,(__Vtemp4249),128);
            tracep->chgCData(oldp+270,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c),2);
            tracep->chgCData(oldp+271,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 0xcU))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0xcU)))) {
                __Vtemp4266[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4266[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4266[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0xcU)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4266[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0xcU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0xcU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4270[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xcU)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0xcU)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0xcU)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0xcU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0xcU)))) {
                __Vtemp4272[0U] = 0U;
                __Vtemp4272[1U] = 0U;
                __Vtemp4272[2U] = 0U;
                __Vtemp4272[3U] = 0U;
            } else {
                __Vtemp4272[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0xcU)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0xcU)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0xcU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0xcU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4272[1U] = __Vtemp4270[1U];
                __Vtemp4272[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4266[2U]));
                __Vtemp4272[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4266[3U]));
            }
            tracep->chgWData(oldp+272,(__Vtemp4272),128);
            tracep->chgCData(oldp+276,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c),2);
            tracep->chgCData(oldp+277,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 0xeU))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0xeU)))) {
                __Vtemp4289[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4289[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4289[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0xeU)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4289[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0xeU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4293[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xeU)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0xeU)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0xeU)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0xeU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0xeU)))) {
                __Vtemp4295[0U] = 0U;
                __Vtemp4295[1U] = 0U;
                __Vtemp4295[2U] = 0U;
                __Vtemp4295[3U] = 0U;
            } else {
                __Vtemp4295[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0xeU)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0xeU)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0xeU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4295[1U] = __Vtemp4293[1U];
                __Vtemp4295[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4289[2U]));
                __Vtemp4295[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4289[3U]));
            }
            tracep->chgWData(oldp+278,(__Vtemp4295),128);
            tracep->chgCData(oldp+282,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c),2);
            tracep->chgCData(oldp+283,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 0x10U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0x10U)))) {
                __Vtemp4312[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4312[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4312[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x10U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4312[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x10U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4316[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x10U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x10U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x10U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0x10U)))) {
                __Vtemp4318[0U] = 0U;
                __Vtemp4318[1U] = 0U;
                __Vtemp4318[2U] = 0U;
                __Vtemp4318[3U] = 0U;
            } else {
                __Vtemp4318[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x10U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x10U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x10U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4318[1U] = __Vtemp4316[1U];
                __Vtemp4318[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4312[2U]));
                __Vtemp4318[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4312[3U]));
            }
            tracep->chgWData(oldp+284,(__Vtemp4318),128);
            tracep->chgCData(oldp+288,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c),2);
            tracep->chgCData(oldp+289,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 0x12U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0x12U)))) {
                __Vtemp4335[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4335[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4335[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x12U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4335[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x12U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x12U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4339[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x12U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x12U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x12U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x12U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0x12U)))) {
                __Vtemp4341[0U] = 0U;
                __Vtemp4341[1U] = 0U;
                __Vtemp4341[2U] = 0U;
                __Vtemp4341[3U] = 0U;
            } else {
                __Vtemp4341[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x12U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x12U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x12U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x12U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4341[1U] = __Vtemp4339[1U];
                __Vtemp4341[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4335[2U]));
                __Vtemp4341[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4335[3U]));
            }
            tracep->chgWData(oldp+290,(__Vtemp4341),128);
            tracep->chgCData(oldp+294,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c),2);
            tracep->chgCData(oldp+295,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 0x14U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0x14U)))) {
                __Vtemp4358[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4358[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4358[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x14U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4358[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x14U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x14U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4362[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x14U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x14U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x14U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x14U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0x14U)))) {
                __Vtemp4364[0U] = 0U;
                __Vtemp4364[1U] = 0U;
                __Vtemp4364[2U] = 0U;
                __Vtemp4364[3U] = 0U;
            } else {
                __Vtemp4364[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x14U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x14U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x14U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x14U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4364[1U] = __Vtemp4362[1U];
                __Vtemp4364[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4358[2U]));
                __Vtemp4364[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4358[3U]));
            }
            tracep->chgWData(oldp+296,(__Vtemp4364),128);
            tracep->chgCData(oldp+300,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c),2);
            tracep->chgCData(oldp+301,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 0x16U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0x16U)))) {
                __Vtemp4381[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4381[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4381[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x16U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4381[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x16U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x16U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4385[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x16U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x16U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x16U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x16U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0x16U)))) {
                __Vtemp4387[0U] = 0U;
                __Vtemp4387[1U] = 0U;
                __Vtemp4387[2U] = 0U;
                __Vtemp4387[3U] = 0U;
            } else {
                __Vtemp4387[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x16U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x16U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x16U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x16U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4387[1U] = __Vtemp4385[1U];
                __Vtemp4387[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4381[2U]));
                __Vtemp4387[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4381[3U]));
            }
            tracep->chgWData(oldp+302,(__Vtemp4387),128);
            tracep->chgCData(oldp+306,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c),2);
            tracep->chgCData(oldp+307,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 0x18U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0x18U)))) {
                __Vtemp4404[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4404[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4404[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x18U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x18U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4404[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x18U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x18U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4408[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x18U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x18U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x18U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x18U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0x18U)))) {
                __Vtemp4410[0U] = 0U;
                __Vtemp4410[1U] = 0U;
                __Vtemp4410[2U] = 0U;
                __Vtemp4410[3U] = 0U;
            } else {
                __Vtemp4410[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x18U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x18U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x18U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x18U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x18U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4410[1U] = __Vtemp4408[1U];
                __Vtemp4410[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x18U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4404[2U]));
                __Vtemp4410[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x18U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4404[3U]));
            }
            tracep->chgWData(oldp+308,(__Vtemp4410),128);
            tracep->chgCData(oldp+312,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c),2);
            tracep->chgCData(oldp+313,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 0x1aU))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0x1aU)))) {
                __Vtemp4427[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4427[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4427[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x1aU)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4427[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x1aU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x1aU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4431[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1aU)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x1aU)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1aU)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x1aU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0x1aU)))) {
                __Vtemp4433[0U] = 0U;
                __Vtemp4433[1U] = 0U;
                __Vtemp4433[2U] = 0U;
                __Vtemp4433[3U] = 0U;
            } else {
                __Vtemp4433[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x1aU)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1aU)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x1aU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x1aU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4433[1U] = __Vtemp4431[1U];
                __Vtemp4433[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4427[2U]));
                __Vtemp4433[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4427[3U]));
            }
            tracep->chgWData(oldp+314,(__Vtemp4433),128);
            tracep->chgCData(oldp+318,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c),2);
            tracep->chgCData(oldp+319,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                              >> 0x1cU))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0x1cU)))) {
                __Vtemp4450[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4450[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4450[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x1cU)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4450[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x1cU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x1cU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4454[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1cU)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x1cU)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1cU)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x1cU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                              >> 0x1cU)))) {
                __Vtemp4456[0U] = 0U;
                __Vtemp4456[1U] = 0U;
                __Vtemp4456[2U] = 0U;
                __Vtemp4456[3U] = 0U;
            } else {
                __Vtemp4456[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                      >> 0x1cU)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1cU)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                        >> 0x1cU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x1cU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4456[1U] = __Vtemp4454[1U];
                __Vtemp4456[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4450[2U]));
                __Vtemp4456[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4450[3U]));
            }
            tracep->chgWData(oldp+320,(__Vtemp4456),128);
            tracep->chgCData(oldp+324,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c),2);
            tracep->chgCData(oldp+325,((7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                               << 2U) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                 >> 0x1eU)))),3);
            if ((4U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                               << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0x1eU))))) {
                __Vtemp4473[1U] = (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                    >> 0x1fU) | ((~ 
                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                                 << 1U));
                __Vtemp4473[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4473[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4473[1U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                        >> 0x1fU) | 
                                       (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                        << 1U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         << 2U) 
                                                        | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                           >> 0x1eU))))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          << 2U) 
                                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                            >> 0x1eU))))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 0U)));
                __Vtemp4473[2U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                       << 2U) 
                                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x1eU))))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4473[3U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         << 2U) 
                                                        | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                           >> 0x1eU))))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          << 2U) 
                                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                            >> 0x1eU))))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4475[0U] = ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((4U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                       << 2U) 
                                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                         >> 0x1eU))))
                                                  ? 
                                                 (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        << 2U) 
                                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                          >> 0x1eU))))
                                                   ? 
                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         << 2U) 
                                                        | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                           >> 0x1eU))))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 0U)))));
            if ((7U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                               << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                         >> 0x1eU))))) {
                __Vtemp4479[0U] = 0U;
                __Vtemp4479[1U] = 0U;
                __Vtemp4479[2U] = 0U;
                __Vtemp4479[3U] = 0U;
            } else {
                __Vtemp4479[0U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : __Vtemp4475[0U]);
                __Vtemp4479[1U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((5U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                        : __Vtemp4473[1U]));
                __Vtemp4479[2U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4473[2U]));
                __Vtemp4479[3U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[0U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4473[3U]));
            }
            tracep->chgWData(oldp+326,(__Vtemp4479),128);
            tracep->chgCData(oldp+330,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c),2);
            tracep->chgCData(oldp+331,((7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U])),3);
            if ((4U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))) {
                __Vtemp4496[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4496[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4496[2U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4496[3U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            if ((7U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))) {
                __Vtemp4502[0U] = 0U;
                __Vtemp4502[1U] = 0U;
                __Vtemp4502[2U] = 0U;
                __Vtemp4502[3U] = 0U;
            } else {
                __Vtemp4502[0U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4502[1U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((5U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                        : ((4U == (7U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                            ? (((~ 
                                                 vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                                >> 0x1fU) 
                                               | ((~ 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                                  << 1U))
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                                ? (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                      << 1U))
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 0U))))));
                __Vtemp4502[2U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4496[2U]));
                __Vtemp4502[3U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4496[3U]));
            }
            tracep->chgWData(oldp+332,(__Vtemp4502),128);
            tracep->chgCData(oldp+336,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c),2);
            tracep->chgCData(oldp+337,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 2U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 2U)))) {
                __Vtemp4519[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4519[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4519[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 2U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4519[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 2U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4523[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 2U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 2U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 2U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 2U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 2U)))) {
                __Vtemp4525[0U] = 0U;
                __Vtemp4525[1U] = 0U;
                __Vtemp4525[2U] = 0U;
                __Vtemp4525[3U] = 0U;
            } else {
                __Vtemp4525[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 2U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 2U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 2U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4525[1U] = __Vtemp4523[1U];
                __Vtemp4525[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4519[2U]));
                __Vtemp4525[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 2U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 2U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4519[3U]));
            }
            tracep->chgWData(oldp+338,(__Vtemp4525),128);
            tracep->chgCData(oldp+342,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c),2);
            tracep->chgCData(oldp+343,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 4U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 4U)))) {
                __Vtemp4542[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4542[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4542[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 4U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4542[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4546[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 4U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 4U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 4U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 4U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 4U)))) {
                __Vtemp4548[0U] = 0U;
                __Vtemp4548[1U] = 0U;
                __Vtemp4548[2U] = 0U;
                __Vtemp4548[3U] = 0U;
            } else {
                __Vtemp4548[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 4U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 4U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4548[1U] = __Vtemp4546[1U];
                __Vtemp4548[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4542[2U]));
                __Vtemp4548[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 4U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 4U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4542[3U]));
            }
            tracep->chgWData(oldp+344,(__Vtemp4548),128);
            tracep->chgCData(oldp+348,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c),2);
            tracep->chgCData(oldp+349,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 6U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 6U)))) {
                __Vtemp4565[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4565[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4565[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 6U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4565[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 6U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 6U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4569[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 6U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 6U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 6U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 6U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 6U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 6U)))) {
                __Vtemp4571[0U] = 0U;
                __Vtemp4571[1U] = 0U;
                __Vtemp4571[2U] = 0U;
                __Vtemp4571[3U] = 0U;
            } else {
                __Vtemp4571[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 6U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 6U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 6U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 6U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4571[1U] = __Vtemp4569[1U];
                __Vtemp4571[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4565[2U]));
                __Vtemp4571[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 6U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 6U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4565[3U]));
            }
            tracep->chgWData(oldp+350,(__Vtemp4571),128);
            tracep->chgCData(oldp+354,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c),2);
            tracep->chgCData(oldp+355,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 8U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 8U)))) {
                __Vtemp4588[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4588[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4588[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 8U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4588[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 8U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 8U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4592[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 8U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 8U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 8U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 8U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 8U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 8U)))) {
                __Vtemp4594[0U] = 0U;
                __Vtemp4594[1U] = 0U;
                __Vtemp4594[2U] = 0U;
                __Vtemp4594[3U] = 0U;
            } else {
                __Vtemp4594[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 8U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 8U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 8U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 8U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4594[1U] = __Vtemp4592[1U];
                __Vtemp4594[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4588[2U]));
                __Vtemp4594[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 8U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 8U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4588[3U]));
            }
            tracep->chgWData(oldp+356,(__Vtemp4594),128);
            tracep->chgCData(oldp+360,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c),2);
            tracep->chgCData(oldp+361,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 0xaU))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0xaU)))) {
                __Vtemp4611[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4611[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4611[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0xaU)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4611[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0xaU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0xaU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4615[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xaU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xaU)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0xaU)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0xaU)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0xaU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0xaU)))) {
                __Vtemp4617[0U] = 0U;
                __Vtemp4617[1U] = 0U;
                __Vtemp4617[2U] = 0U;
                __Vtemp4617[3U] = 0U;
            } else {
                __Vtemp4617[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0xaU)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0xaU)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0xaU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0xaU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4617[1U] = __Vtemp4615[1U];
                __Vtemp4617[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4611[2U]));
                __Vtemp4617[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xaU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xaU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4611[3U]));
            }
            tracep->chgWData(oldp+362,(__Vtemp4617),128);
            tracep->chgCData(oldp+366,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c),2);
            tracep->chgCData(oldp+367,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 0xcU))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0xcU)))) {
                __Vtemp4634[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4634[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4634[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0xcU)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4634[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0xcU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0xcU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4638[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xcU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xcU)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0xcU)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0xcU)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0xcU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0xcU)))) {
                __Vtemp4640[0U] = 0U;
                __Vtemp4640[1U] = 0U;
                __Vtemp4640[2U] = 0U;
                __Vtemp4640[3U] = 0U;
            } else {
                __Vtemp4640[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0xcU)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0xcU)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0xcU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0xcU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4640[1U] = __Vtemp4638[1U];
                __Vtemp4640[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4634[2U]));
                __Vtemp4640[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xcU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xcU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4634[3U]));
            }
            tracep->chgWData(oldp+368,(__Vtemp4640),128);
            tracep->chgCData(oldp+372,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c),2);
            tracep->chgCData(oldp+373,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 0xeU))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0xeU)))) {
                __Vtemp4657[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4657[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4657[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0xeU)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4657[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0xeU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4661[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0xeU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xeU)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0xeU)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0xeU)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0xeU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0xeU)))) {
                __Vtemp4663[0U] = 0U;
                __Vtemp4663[1U] = 0U;
                __Vtemp4663[2U] = 0U;
                __Vtemp4663[3U] = 0U;
            } else {
                __Vtemp4663[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0xeU)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0xeU)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0xeU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4663[1U] = __Vtemp4661[1U];
                __Vtemp4663[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4657[2U]));
                __Vtemp4663[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0xeU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0xeU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4657[3U]));
            }
            tracep->chgWData(oldp+374,(__Vtemp4663),128);
            tracep->chgCData(oldp+378,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c),2);
            tracep->chgCData(oldp+379,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 0x10U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0x10U)))) {
                __Vtemp4680[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4680[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4680[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x10U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4680[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x10U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4684[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x10U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x10U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x10U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x10U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0x10U)))) {
                __Vtemp4686[0U] = 0U;
                __Vtemp4686[1U] = 0U;
                __Vtemp4686[2U] = 0U;
                __Vtemp4686[3U] = 0U;
            } else {
                __Vtemp4686[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x10U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x10U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x10U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4686[1U] = __Vtemp4684[1U];
                __Vtemp4686[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4680[2U]));
                __Vtemp4686[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x10U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x10U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4680[3U]));
            }
            tracep->chgWData(oldp+380,(__Vtemp4686),128);
            tracep->chgCData(oldp+384,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c),2);
            tracep->chgCData(oldp+385,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 0x12U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0x12U)))) {
                __Vtemp4703[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4703[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4703[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x12U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4703[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x12U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x12U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4707[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x12U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x12U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x12U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x12U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x12U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0x12U)))) {
                __Vtemp4709[0U] = 0U;
                __Vtemp4709[1U] = 0U;
                __Vtemp4709[2U] = 0U;
                __Vtemp4709[3U] = 0U;
            } else {
                __Vtemp4709[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x12U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x12U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x12U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x12U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4709[1U] = __Vtemp4707[1U];
                __Vtemp4709[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4703[2U]));
                __Vtemp4709[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x12U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x12U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4703[3U]));
            }
            tracep->chgWData(oldp+386,(__Vtemp4709),128);
            tracep->chgCData(oldp+390,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c),2);
            tracep->chgCData(oldp+391,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 0x14U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0x14U)))) {
                __Vtemp4726[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4726[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4726[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x14U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4726[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x14U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x14U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4730[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x14U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x14U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x14U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x14U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x14U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0x14U)))) {
                __Vtemp4732[0U] = 0U;
                __Vtemp4732[1U] = 0U;
                __Vtemp4732[2U] = 0U;
                __Vtemp4732[3U] = 0U;
            } else {
                __Vtemp4732[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x14U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x14U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x14U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x14U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4732[1U] = __Vtemp4730[1U];
                __Vtemp4732[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4726[2U]));
                __Vtemp4732[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x14U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x14U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4726[3U]));
            }
            tracep->chgWData(oldp+392,(__Vtemp4732),128);
            tracep->chgCData(oldp+396,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c),2);
            tracep->chgCData(oldp+397,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 0x16U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0x16U)))) {
                __Vtemp4749[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4749[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4749[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x16U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4749[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x16U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x16U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4753[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x16U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x16U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x16U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x16U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x16U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0x16U)))) {
                __Vtemp4755[0U] = 0U;
                __Vtemp4755[1U] = 0U;
                __Vtemp4755[2U] = 0U;
                __Vtemp4755[3U] = 0U;
            } else {
                __Vtemp4755[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x16U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x16U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x16U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x16U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4755[1U] = __Vtemp4753[1U];
                __Vtemp4755[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4749[2U]));
                __Vtemp4755[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x16U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x16U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4749[3U]));
            }
            tracep->chgWData(oldp+398,(__Vtemp4755),128);
            tracep->chgCData(oldp+402,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c),2);
            tracep->chgCData(oldp+403,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 0x18U))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0x18U)))) {
                __Vtemp4772[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4772[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4772[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x18U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x18U)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4772[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x18U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x18U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4776[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x18U)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x18U)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x18U)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x18U)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x18U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0x18U)))) {
                __Vtemp4778[0U] = 0U;
                __Vtemp4778[1U] = 0U;
                __Vtemp4778[2U] = 0U;
                __Vtemp4778[3U] = 0U;
            } else {
                __Vtemp4778[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x18U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x18U)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x18U)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x18U)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x18U)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4778[1U] = __Vtemp4776[1U];
                __Vtemp4778[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x18U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4772[2U]));
                __Vtemp4778[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x18U)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x18U)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4772[3U]));
            }
            tracep->chgWData(oldp+404,(__Vtemp4778),128);
            tracep->chgCData(oldp+408,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c),2);
            tracep->chgCData(oldp+409,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 0x1aU))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0x1aU)))) {
                __Vtemp4795[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4795[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4795[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x1aU)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4795[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x1aU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x1aU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4799[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1aU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1aU)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x1aU)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1aU)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x1aU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0x1aU)))) {
                __Vtemp4801[0U] = 0U;
                __Vtemp4801[1U] = 0U;
                __Vtemp4801[2U] = 0U;
                __Vtemp4801[3U] = 0U;
            } else {
                __Vtemp4801[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x1aU)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1aU)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x1aU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x1aU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4801[1U] = __Vtemp4799[1U];
                __Vtemp4801[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4795[2U]));
                __Vtemp4801[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1aU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1aU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4795[3U]));
            }
            tracep->chgWData(oldp+410,(__Vtemp4801),128);
            tracep->chgCData(oldp+414,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c),2);
            tracep->chgCData(oldp+415,((7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                              >> 0x1cU))),3);
            if ((4U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0x1cU)))) {
                __Vtemp4818[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4818[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4818[2U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x1cU)))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4818[3U] = ((3U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x1cU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x1cU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4822[1U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                             >> 0x1cU)))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                : ((5U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((4U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1cU)))
                                        ? (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                            >> 0x1fU) 
                                           | ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x1cU)))
                                            ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1cU)))
                                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x1cU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 0U))))));
            if ((7U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                              >> 0x1cU)))) {
                __Vtemp4824[0U] = 0U;
                __Vtemp4824[1U] = 0U;
                __Vtemp4824[2U] = 0U;
                __Vtemp4824[3U] = 0U;
            } else {
                __Vtemp4824[0U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                      >> 0x1cU)))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1cU)))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                        >> 0x1cU)))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x1cU)))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4824[1U] = __Vtemp4822[1U];
                __Vtemp4824[2U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4818[2U]));
                __Vtemp4824[3U] = ((6U == (7U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1cU)))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1cU)))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4818[3U]));
            }
            tracep->chgWData(oldp+416,(__Vtemp4824),128);
            tracep->chgCData(oldp+420,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c),2);
            tracep->chgCData(oldp+421,((7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                               << 2U) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                 >> 0x1eU)))),3);
            if ((4U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                               << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x1eU))))) {
                __Vtemp4841[1U] = (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                    >> 0x1fU) | ((~ 
                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                                 << 1U));
                __Vtemp4841[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4841[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4841[1U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                        >> 0x1fU) | 
                                       (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                        << 1U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                         << 2U) 
                                                        | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                           >> 0x1eU))))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                          << 2U) 
                                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                            >> 0x1eU))))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 0U)));
                __Vtemp4841[2U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                       << 2U) 
                                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x1eU))))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4841[3U] = ((3U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                         << 2U) 
                                                        | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                           >> 0x1eU))))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                          << 2U) 
                                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                            >> 0x1eU))))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            __Vtemp4843[0U] = ((5U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                              << 2U) 
                                             | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                >> 0x1eU))))
                                ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                : ((4U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                       << 2U) 
                                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                         >> 0x1eU))))
                                                  ? 
                                                 (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                        << 2U) 
                                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                          >> 0x1eU))))
                                                   ? 
                                                  vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                         << 2U) 
                                                        | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                           >> 0x1eU))))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 0U)))));
            if ((7U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                               << 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                         >> 0x1eU))))) {
                __Vtemp4847[0U] = 0U;
                __Vtemp4847[1U] = 0U;
                __Vtemp4847[2U] = 0U;
                __Vtemp4847[3U] = 0U;
            } else {
                __Vtemp4847[0U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : __Vtemp4843[0U]);
                __Vtemp4847[1U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((5U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                        : __Vtemp4841[1U]));
                __Vtemp4847[2U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4841[2U]));
                __Vtemp4847[3U] = ((6U == (7U & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                  << 2U) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                    >> 0x1eU))))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U] 
                                                 << 2U) 
                                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[1U] 
                                                   >> 0x1eU))))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4841[3U]));
            }
            tracep->chgWData(oldp+422,(__Vtemp4847),128);
            tracep->chgCData(oldp+426,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c),2);
            tracep->chgCData(oldp+427,((7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U])),3);
            if ((4U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))) {
                __Vtemp4864[2U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    << 2U) | (((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                               >> 0x1fU) 
                                              | (2U 
                                                 & ((~ 
                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]) 
                                                    << 1U))));
                __Vtemp4864[3U] = (((IData)(((1U & 
                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                              ? 0ULL
                                              : 0x3fffffffffffffffULL)) 
                                    >> 0x1eU) | ((IData)(
                                                         (((1U 
                                                            & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                            ? 0ULL
                                                            : 0x3fffffffffffffffULL) 
                                                          >> 0x20U)) 
                                                 << 2U));
            } else {
                __Vtemp4864[2U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        << 2U) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U] 
                                                     << 1U)))
                                    : ((2U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                        : ((1U == (7U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                            ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[2U]
                                            : 0U)));
                __Vtemp4864[3U] = ((3U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? (((IData)(((1U 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                  ? 0x3fffffffffffffffULL
                                                  : 0ULL)) 
                                        >> 0x1eU) | 
                                       ((IData)((((1U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                                   ? 0x3fffffffffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 2U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[3U]
                                                     : 0U)));
            }
            if ((7U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))) {
                __Vtemp4870[0U] = 0U;
                __Vtemp4870[1U] = 0U;
                __Vtemp4870[2U] = 0U;
                __Vtemp4870[3U] = 0U;
            } else {
                __Vtemp4870[0U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                    : ((5U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[0U]
                                        : ((4U == (7U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                            ? ((~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                               << 1U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                                ? (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                   << 1U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[0U]
                                                     : 0U))))));
                __Vtemp4870[1U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                    : ((5U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[1U]
                                        : ((4U == (7U 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                            ? (((~ 
                                                 vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]) 
                                                >> 0x1fU) 
                                               | ((~ 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]) 
                                                  << 1U))
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                                ? (
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U] 
                                                      << 1U))
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                                    ? 
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                                     ? 
                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_2[1U]
                                                     : 0U))))));
                __Vtemp4870[2U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                    : ((5U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[2U]
                                        : __Vtemp4864[2U]));
                __Vtemp4870[3U] = ((6U == (7U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                    ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                    : ((5U == (7U & 
                                               vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2[2U]))
                                        ? vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12__DOT___io_z_T_14[3U]
                                        : __Vtemp4864[3U]));
            }
            tracep->chgWData(oldp+428,(__Vtemp4870),128);
            tracep->chgCData(oldp+432,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c),2);
            tracep->chgWData(oldp+433,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_0),128);
            __Vtemp4874[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U] 
                               << 2U);
            __Vtemp4874[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U] 
                                >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U] 
                                             << 2U));
            __Vtemp4874[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U] 
                                >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U] 
                                             << 2U));
            __Vtemp4874[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U] 
                                >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[3U] 
                                             << 2U));
            tracep->chgWData(oldp+437,(__Vtemp4874),128);
            __Vtemp4878[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U] 
                               << 4U);
            __Vtemp4878[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U] 
                                >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U] 
                                             << 4U));
            __Vtemp4878[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U] 
                                >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U] 
                                             << 4U));
            __Vtemp4878[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U] 
                                >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[3U] 
                                             << 4U));
            tracep->chgWData(oldp+441,(__Vtemp4878),128);
            tracep->chgWData(oldp+445,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0_io_s),128);
            __Vtemp4882[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp4882[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp4882[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp4882[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+449,(__Vtemp4882),128);
            __Vtemp4886[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U] 
                               << 6U);
            __Vtemp4886[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U] 
                                >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U] 
                                             << 6U));
            __Vtemp4886[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U] 
                                >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U] 
                                             << 6U));
            __Vtemp4886[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U] 
                                >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[3U] 
                                             << 6U));
            tracep->chgWData(oldp+453,(__Vtemp4886),128);
            __Vtemp4890[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U] 
                               << 8U);
            __Vtemp4890[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U] 
                                >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U] 
                                             << 8U));
            __Vtemp4890[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U] 
                                >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U] 
                                             << 8U));
            __Vtemp4890[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U] 
                                >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[3U] 
                                             << 8U));
            tracep->chgWData(oldp+457,(__Vtemp4890),128);
            __Vtemp4894[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U] 
                               << 0xaU);
            __Vtemp4894[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U] 
                                >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U] 
                                             << 0xaU));
            __Vtemp4894[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U] 
                                >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U] 
                                             << 0xaU));
            __Vtemp4894[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U] 
                                >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[3U] 
                                             << 0xaU));
            tracep->chgWData(oldp+461,(__Vtemp4894),128);
            tracep->chgWData(oldp+465,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1_io_s),128);
            __Vtemp4898[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp4898[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp4898[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp4898[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+469,(__Vtemp4898),128);
            __Vtemp4902[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U] 
                               << 0xcU);
            __Vtemp4902[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U] 
                                >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U] 
                                             << 0xcU));
            __Vtemp4902[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U] 
                                >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U] 
                                             << 0xcU));
            __Vtemp4902[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U] 
                                >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[3U] 
                                             << 0xcU));
            tracep->chgWData(oldp+473,(__Vtemp4902),128);
            __Vtemp4906[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U] 
                               << 0xeU);
            __Vtemp4906[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U] 
                                >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U] 
                                             << 0xeU));
            __Vtemp4906[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U] 
                                >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U] 
                                             << 0xeU));
            __Vtemp4906[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U] 
                                >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[3U] 
                                             << 0xeU));
            tracep->chgWData(oldp+477,(__Vtemp4906),128);
            __Vtemp4910[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U] 
                               << 0x10U);
            __Vtemp4910[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U] 
                                >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U] 
                                             << 0x10U));
            __Vtemp4910[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U] 
                                >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U] 
                                             << 0x10U));
            __Vtemp4910[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U] 
                                >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[3U] 
                                             << 0x10U));
            tracep->chgWData(oldp+481,(__Vtemp4910),128);
            tracep->chgWData(oldp+485,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2_io_s),128);
            __Vtemp4914[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp4914[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp4914[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp4914[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+489,(__Vtemp4914),128);
            __Vtemp4918[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U] 
                               << 0x12U);
            __Vtemp4918[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U] 
                                >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U] 
                                            << 0x12U));
            __Vtemp4918[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U] 
                                >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U] 
                                            << 0x12U));
            __Vtemp4918[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U] 
                                >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[3U] 
                                            << 0x12U));
            tracep->chgWData(oldp+493,(__Vtemp4918),128);
            __Vtemp4922[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U] 
                               << 0x14U);
            __Vtemp4922[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U] 
                                >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U] 
                                            << 0x14U));
            __Vtemp4922[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U] 
                                >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U] 
                                            << 0x14U));
            __Vtemp4922[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U] 
                                >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[3U] 
                                            << 0x14U));
            tracep->chgWData(oldp+497,(__Vtemp4922),128);
            __Vtemp4926[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U] 
                               << 0x16U);
            __Vtemp4926[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U] 
                                >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U] 
                                            << 0x16U));
            __Vtemp4926[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U] 
                                >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U] 
                                            << 0x16U));
            __Vtemp4926[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U] 
                                >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[3U] 
                                            << 0x16U));
            tracep->chgWData(oldp+501,(__Vtemp4926),128);
            tracep->chgWData(oldp+505,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3_io_s),128);
            __Vtemp4930[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp4930[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp4930[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp4930[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+509,(__Vtemp4930),128);
            __Vtemp4934[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U] 
                               << 0x18U);
            __Vtemp4934[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U] 
                                >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U] 
                                          << 0x18U));
            __Vtemp4934[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U] 
                                >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U] 
                                          << 0x18U));
            __Vtemp4934[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U] 
                                >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[3U] 
                                          << 0x18U));
            tracep->chgWData(oldp+513,(__Vtemp4934),128);
            __Vtemp4938[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U] 
                               << 0x1aU);
            __Vtemp4938[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U] 
                                >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U] 
                                          << 0x1aU));
            __Vtemp4938[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U] 
                                >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U] 
                                          << 0x1aU));
            __Vtemp4938[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U] 
                                >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[3U] 
                                          << 0x1aU));
            tracep->chgWData(oldp+517,(__Vtemp4938),128);
            __Vtemp4942[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U] 
                               << 0x1cU);
            __Vtemp4942[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U] 
                                >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U] 
                                          << 0x1cU));
            __Vtemp4942[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U] 
                                >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U] 
                                          << 0x1cU));
            __Vtemp4942[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U] 
                                >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[3U] 
                                          << 0x1cU));
            tracep->chgWData(oldp+521,(__Vtemp4942),128);
            tracep->chgWData(oldp+525,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4_io_s),128);
            __Vtemp4946[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp4946[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp4946[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp4946[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+529,(__Vtemp4946),128);
            __Vtemp4950[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U] 
                               << 0x1eU);
            __Vtemp4950[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U] 
                                >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U] 
                                          << 0x1eU));
            __Vtemp4950[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U] 
                                >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U] 
                                          << 0x1eU));
            __Vtemp4950[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U] 
                                >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[3U] 
                                          << 0x1eU));
            tracep->chgWData(oldp+533,(__Vtemp4950),128);
            __Vtemp4952[0U] = 0U;
            __Vtemp4952[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[0U];
            __Vtemp4952[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[1U];
            __Vtemp4952[3U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[2U];
            tracep->chgWData(oldp+537,(__Vtemp4952),128);
            __Vtemp4956[0U] = 0U;
            __Vtemp4956[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
                               << 2U);
            __Vtemp4956[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U] 
                                >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
                                             << 2U));
            __Vtemp4956[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U] 
                                >> 0x1eU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[2U] 
                                             << 2U));
            tracep->chgWData(oldp+541,(__Vtemp4956),128);
            tracep->chgWData(oldp+545,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5_io_s),128);
            __Vtemp4960[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp4960[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp4960[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp4960[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+549,(__Vtemp4960),128);
            __Vtemp4964[0U] = 0U;
            __Vtemp4964[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
                               << 4U);
            __Vtemp4964[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U] 
                                >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
                                             << 4U));
            __Vtemp4964[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U] 
                                >> 0x1cU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[2U] 
                                             << 4U));
            tracep->chgWData(oldp+553,(__Vtemp4964),128);
            __Vtemp4968[0U] = 0U;
            __Vtemp4968[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                               << 6U);
            __Vtemp4968[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U] 
                                >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                                             << 6U));
            __Vtemp4968[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U] 
                                >> 0x1aU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[2U] 
                                             << 6U));
            tracep->chgWData(oldp+557,(__Vtemp4968),128);
            __Vtemp4972[0U] = 0U;
            __Vtemp4972[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
                               << 8U);
            __Vtemp4972[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U] 
                                >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                                             << 8U));
            __Vtemp4972[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U] 
                                >> 0x18U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[2U] 
                                             << 8U));
            tracep->chgWData(oldp+561,(__Vtemp4972),128);
            tracep->chgWData(oldp+565,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6_io_s),128);
            __Vtemp4976[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp4976[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp4976[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp4976[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+569,(__Vtemp4976),128);
            __Vtemp4980[0U] = 0U;
            __Vtemp4980[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
                               << 0xaU);
            __Vtemp4980[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U] 
                                >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
                                             << 0xaU));
            __Vtemp4980[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U] 
                                >> 0x16U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[2U] 
                                             << 0xaU));
            tracep->chgWData(oldp+573,(__Vtemp4980),128);
            __Vtemp4984[0U] = 0U;
            __Vtemp4984[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                               << 0xcU);
            __Vtemp4984[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U] 
                                >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                                             << 0xcU));
            __Vtemp4984[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U] 
                                >> 0x14U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[2U] 
                                             << 0xcU));
            tracep->chgWData(oldp+577,(__Vtemp4984),128);
            __Vtemp4988[0U] = 0U;
            __Vtemp4988[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
                               << 0xeU);
            __Vtemp4988[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U] 
                                >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
                                             << 0xeU));
            __Vtemp4988[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U] 
                                >> 0x12U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[2U] 
                                             << 0xeU));
            tracep->chgWData(oldp+581,(__Vtemp4988),128);
            tracep->chgWData(oldp+585,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7_io_s),128);
            __Vtemp4992[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp4992[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp4992[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp4992[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+589,(__Vtemp4992),128);
            __Vtemp4996[0U] = 0U;
            __Vtemp4996[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
                               << 0x10U);
            __Vtemp4996[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U] 
                                >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
                                             << 0x10U));
            __Vtemp4996[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U] 
                                >> 0x10U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[2U] 
                                             << 0x10U));
            tracep->chgWData(oldp+593,(__Vtemp4996),128);
            __Vtemp5000[0U] = 0U;
            __Vtemp5000[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                               << 0x12U);
            __Vtemp5000[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U] 
                                >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                                            << 0x12U));
            __Vtemp5000[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U] 
                                >> 0xeU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[2U] 
                                            << 0x12U));
            tracep->chgWData(oldp+597,(__Vtemp5000),128);
            __Vtemp5004[0U] = 0U;
            __Vtemp5004[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
                               << 0x14U);
            __Vtemp5004[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U] 
                                >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
                                            << 0x14U));
            __Vtemp5004[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U] 
                                >> 0xcU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[2U] 
                                            << 0x14U));
            tracep->chgWData(oldp+601,(__Vtemp5004),128);
            tracep->chgWData(oldp+605,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8_io_s),128);
            __Vtemp5008[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5008[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5008[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5008[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+609,(__Vtemp5008),128);
            __Vtemp5012[0U] = 0U;
            __Vtemp5012[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
                               << 0x16U);
            __Vtemp5012[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U] 
                                >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
                                            << 0x16U));
            __Vtemp5012[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U] 
                                >> 0xaU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[2U] 
                                            << 0x16U));
            tracep->chgWData(oldp+613,(__Vtemp5012),128);
            __Vtemp5016[0U] = 0U;
            __Vtemp5016[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                               << 0x18U);
            __Vtemp5016[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U] 
                                >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                                          << 0x18U));
            __Vtemp5016[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U] 
                                >> 8U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[2U] 
                                          << 0x18U));
            tracep->chgWData(oldp+617,(__Vtemp5016),128);
            __Vtemp5020[0U] = 0U;
            __Vtemp5020[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
                               << 0x1aU);
            __Vtemp5020[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U] 
                                >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
                                          << 0x1aU));
            __Vtemp5020[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U] 
                                >> 6U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[2U] 
                                          << 0x1aU));
            tracep->chgWData(oldp+621,(__Vtemp5020),128);
            tracep->chgWData(oldp+625,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9_io_s),128);
            __Vtemp5024[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5024[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5024[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5024[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+629,(__Vtemp5024),128);
            __Vtemp5028[0U] = 0U;
            __Vtemp5028[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U] 
                               << 0x1cU);
            __Vtemp5028[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U] 
                                >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
                                          << 0x1cU));
            __Vtemp5028[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U] 
                                >> 4U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[2U] 
                                          << 0x1cU));
            tracep->chgWData(oldp+633,(__Vtemp5028),128);
            __Vtemp5032[0U] = 0U;
            __Vtemp5032[1U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U] 
                               << 0x1eU);
            __Vtemp5032[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U] 
                                >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                                          << 0x1eU));
            __Vtemp5032[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U] 
                                >> 2U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[2U] 
                                          << 0x1eU));
            tracep->chgWData(oldp+637,(__Vtemp5032),128);
            __Vtemp5033[0U] = 0U;
            __Vtemp5033[1U] = 0U;
            __Vtemp5033[2U] = (IData)((((QData)((IData)(
                                                        vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U]))));
            __Vtemp5033[3U] = (IData)(((((QData)((IData)(
                                                         vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U]))) 
                                       >> 0x20U));
            tracep->chgWData(oldp+641,(__Vtemp5033),128);
            tracep->chgWData(oldp+645,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10_io_s),128);
            __Vtemp5037[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5037[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5037[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5037[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+649,(__Vtemp5037),128);
            tracep->chgWData(oldp+653,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11_io_s),128);
            __Vtemp5041[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5041[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5041[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5041[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+657,(__Vtemp5041),128);
            tracep->chgWData(oldp+661,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12_io_s),128);
            __Vtemp5045[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5045[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5045[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5045[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+665,(__Vtemp5045),128);
            tracep->chgWData(oldp+669,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13_io_s),128);
            __Vtemp5049[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5049[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5049[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5049[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+673,(__Vtemp5049),128);
            tracep->chgWData(oldp+677,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14_io_s),128);
            __Vtemp5053[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5053[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5053[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5053[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+681,(__Vtemp5053),128);
            tracep->chgWData(oldp+685,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15_io_s),128);
            __Vtemp5057[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5057[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5057[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5057[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+689,(__Vtemp5057),128);
            tracep->chgWData(oldp+693,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s),128);
            __Vtemp5061[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5061[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5061[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5061[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+697,(__Vtemp5061),128);
            tracep->chgWData(oldp+701,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33),128);
            tracep->chgWData(oldp+705,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s),128);
            __Vtemp5065[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5065[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5065[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5065[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+709,(__Vtemp5065),128);
            tracep->chgWData(oldp+713,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s),128);
            __Vtemp5069[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5069[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5069[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5069[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+717,(__Vtemp5069),128);
            tracep->chgWData(oldp+721,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s),128);
            __Vtemp5073[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5073[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5073[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5073[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+725,(__Vtemp5073),128);
            tracep->chgWData(oldp+729,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s),128);
            __Vtemp5077[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5077[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5077[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5077[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+733,(__Vtemp5077),128);
            tracep->chgWData(oldp+737,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s),128);
            __Vtemp5081[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5081[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5081[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5081[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+741,(__Vtemp5081),128);
            __Vtemp5087[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
                                ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                   << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U]);
            __Vtemp5087[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U] 
                                ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                                 << 1U))) 
                               ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U]);
            __Vtemp5087[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U] 
                                ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                 << 1U))) 
                               ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U]);
            __Vtemp5087[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[3U] 
                                ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                                 << 1U))) 
                               ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[3U]);
            tracep->chgWData(oldp+745,(__Vtemp5087),128);
            __Vtemp5107[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
                                  << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                            << 2U)) 
                                | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                    << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                                              << 1U))) 
                               | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U]) 
                                  << 1U));
            __Vtemp5107[1U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
                                         >> 0x1fU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                           >> 0x1eU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                           >> 0x1eU) 
                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                                             >> 0x1fU)))) 
                                | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U]) 
                                   >> 0x1fU)) | (((
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U] 
                                                    << 1U) 
                                                   & ((2U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                                          >> 0x1eU)) 
                                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                                         << 2U))) 
                                                  | (((2U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                                          >> 0x1eU)) 
                                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                                         << 2U)) 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U] 
                                                        << 1U))) 
                                                 | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U] 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U]) 
                                                    << 1U)));
            __Vtemp5107[2U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U] 
                                         >> 0x1fU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                           >> 0x1eU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                           >> 0x1eU) 
                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U] 
                                             >> 0x1fU)))) 
                                | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U] 
                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U]) 
                                   >> 0x1fU)) | (((
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U] 
                                                    << 1U) 
                                                   & ((2U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                                          >> 0x1eU)) 
                                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                         << 2U))) 
                                                  | (((2U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                                          >> 0x1eU)) 
                                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                         << 2U)) 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U] 
                                                        << 1U))) 
                                                 | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U] 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U]) 
                                                    << 1U)));
            __Vtemp5107[3U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U] 
                                         >> 0x1fU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                           >> 0x1eU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                           >> 0x1eU) 
                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U] 
                                             >> 0x1fU)))) 
                                | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U] 
                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U]) 
                                   >> 0x1fU)) | (0xfffffffeU 
                                                 & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[3U] 
                                                       << 1U) 
                                                      & ((2U 
                                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                             >> 0x1eU)) 
                                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                                            << 2U))) 
                                                     | (((2U 
                                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                             >> 0x1eU)) 
                                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                                            << 2U)) 
                                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[3U] 
                                                           << 1U))) 
                                                    | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[3U] 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[3U]) 
                                                       << 1U))));
            tracep->chgWData(oldp+749,(__Vtemp5107),128);
            __Vtemp5117[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                                 << 1U) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U]) 
                               ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                  << 1U));
            __Vtemp5117[1U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                               << 1U)) 
                                ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U]) 
                               ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                                << 1U)));
            __Vtemp5117[2U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                               << 1U)) 
                                ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U]) 
                               ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                                << 1U)));
            __Vtemp5117[3U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                               << 1U)) 
                                ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[3U]) 
                               ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                                << 1U)));
            tracep->chgWData(oldp+753,(__Vtemp5117),128);
            __Vtemp5141[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                                  << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                                            << 1U)) 
                                | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                                    << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                              << 2U))) 
                               | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U]) 
                                  << 2U));
            __Vtemp5141[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                                         >> 0x1eU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                                           >> 0x1fU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                                           >> 0x1fU) 
                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                             >> 0x1eU))) 
                                      | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U]) 
                                         >> 0x1eU))) 
                               | (((((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                                            >> 0x1eU)) 
                                     | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                        << 2U)) & (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U] 
                                                   << 1U)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U] 
                                       << 1U) & ((2U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                                    << 2U)))) 
                                  | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                         << 2U)) & 
                                     ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                         << 2U)))));
            __Vtemp5141[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                         >> 0x1eU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U] 
                                           >> 0x1fU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U] 
                                           >> 0x1fU) 
                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                             >> 0x1eU))) 
                                      | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U]) 
                                         >> 0x1eU))) 
                               | (((((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                            >> 0x1eU)) 
                                     | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                        << 2U)) & (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U] 
                                                   << 1U)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U] 
                                       << 1U) & ((2U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                                    << 2U)))) 
                                  | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                         << 2U)) & 
                                     ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                         << 2U)))));
            __Vtemp5141[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                         >> 0x1eU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U] 
                                           >> 0x1fU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U] 
                                           >> 0x1fU) 
                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                             >> 0x1eU))) 
                                      | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U]) 
                                         >> 0x1eU))) 
                               | (((((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                            >> 0x1eU)) 
                                     | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                        << 2U)) & (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[3U] 
                                                   << 1U)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[3U] 
                                       << 1U) & ((2U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                                    << 2U)))) 
                                  | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                         << 2U)) & 
                                     ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                         << 2U)))));
            tracep->chgWData(oldp+757,(__Vtemp5141),128);
            __Vtemp5147[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
                                ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                   << 1U)) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U]);
            __Vtemp5147[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U] 
                                ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                                 << 1U))) 
                               ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U]);
            __Vtemp5147[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U] 
                                ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                 << 1U))) 
                               ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U]);
            __Vtemp5147[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[3U] 
                                ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                                 << 1U))) 
                               ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[3U]);
            tracep->chgWData(oldp+761,(__Vtemp5147),128);
            __Vtemp5167[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
                                  << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                            << 2U)) 
                                | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                    << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                                              << 1U))) 
                               | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U]) 
                                  << 1U));
            __Vtemp5167[1U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
                                         >> 0x1fU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                           >> 0x1eU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                           >> 0x1eU) 
                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                                             >> 0x1fU)))) 
                                | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U]) 
                                   >> 0x1fU)) | (((
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U] 
                                                    << 1U) 
                                                   & ((2U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                                          >> 0x1eU)) 
                                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                                         << 2U))) 
                                                  | (((2U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                                          >> 0x1eU)) 
                                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                                         << 2U)) 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U] 
                                                        << 1U))) 
                                                 | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U] 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U]) 
                                                    << 1U)));
            __Vtemp5167[2U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U] 
                                         >> 0x1fU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                           >> 0x1eU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                           >> 0x1eU) 
                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U] 
                                             >> 0x1fU)))) 
                                | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U] 
                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U]) 
                                   >> 0x1fU)) | (((
                                                   (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U] 
                                                    << 1U) 
                                                   & ((2U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                                          >> 0x1eU)) 
                                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                         << 2U))) 
                                                  | (((2U 
                                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                                          >> 0x1eU)) 
                                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                         << 2U)) 
                                                     & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U] 
                                                        << 1U))) 
                                                 | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U] 
                                                     & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U]) 
                                                    << 1U)));
            __Vtemp5167[3U] = (((1U & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U] 
                                         >> 0x1fU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                           >> 0x1eU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                           >> 0x1eU) 
                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U] 
                                             >> 0x1fU)))) 
                                | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U] 
                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U]) 
                                   >> 0x1fU)) | (0xfffffffeU 
                                                 & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[3U] 
                                                       << 1U) 
                                                      & ((2U 
                                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                             >> 0x1eU)) 
                                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                                            << 2U))) 
                                                     | (((2U 
                                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                             >> 0x1eU)) 
                                                         | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                                            << 2U)) 
                                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[3U] 
                                                           << 1U))) 
                                                    | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[3U] 
                                                        & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[3U]) 
                                                       << 1U))));
            tracep->chgWData(oldp+765,(__Vtemp5167),128);
            __Vtemp5177[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                                 << 1U) ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U]) 
                               ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                  << 1U));
            __Vtemp5177[1U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                               << 1U)) 
                                ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U]) 
                               ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                                << 1U)));
            __Vtemp5177[2U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                               << 1U)) 
                                ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U]) 
                               ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                                << 1U)));
            __Vtemp5177[3U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                               << 1U)) 
                                ^ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[3U]) 
                               ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                                << 1U)));
            tracep->chgWData(oldp+769,(__Vtemp5177),128);
            __Vtemp5201[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                                  << 2U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                                            << 1U)) 
                                | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                                    << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                              << 2U))) 
                               | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U]) 
                                  << 2U));
            __Vtemp5201[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                                         >> 0x1eU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                                           >> 0x1fU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                                           >> 0x1fU) 
                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                             >> 0x1eU))) 
                                      | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U]) 
                                         >> 0x1eU))) 
                               | (((((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                                            >> 0x1eU)) 
                                     | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                        << 2U)) & (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U] 
                                                   << 1U)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U] 
                                       << 1U) & ((2U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                                    << 2U)))) 
                                  | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                         << 2U)) & 
                                     ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                         << 2U)))));
            __Vtemp5201[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                         >> 0x1eU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U] 
                                           >> 0x1fU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U] 
                                           >> 0x1fU) 
                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                             >> 0x1eU))) 
                                      | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U]) 
                                         >> 0x1eU))) 
                               | (((((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                            >> 0x1eU)) 
                                     | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                        << 2U)) & (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U] 
                                                   << 1U)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U] 
                                       << 1U) & ((2U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                                    << 2U)))) 
                                  | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                         << 2U)) & 
                                     ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                         << 2U)))));
            __Vtemp5201[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                         >> 0x1eU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U] 
                                           >> 0x1fU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U] 
                                           >> 0x1fU) 
                                          & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                             >> 0x1eU))) 
                                      | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                          & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U]) 
                                         >> 0x1eU))) 
                               | (((((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                            >> 0x1eU)) 
                                     | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                        << 2U)) & (
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[3U] 
                                                   << 1U)) 
                                   | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[3U] 
                                       << 1U) & ((2U 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                                    << 2U)))) 
                                  | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                         << 2U)) & 
                                     ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                         << 2U)))));
            tracep->chgWData(oldp+773,(__Vtemp5201),128);
            tracep->chgWData(oldp+777,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_0),128);
            tracep->chgWData(oldp+781,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_1),128);
            tracep->chgWData(oldp+785,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_2),128);
            tracep->chgWData(oldp+789,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26_io_s),128);
            __Vtemp5205[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5205[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5205[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5205[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+793,(__Vtemp5205),128);
            tracep->chgWData(oldp+797,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_3),128);
            tracep->chgWData(oldp+801,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_4),128);
            tracep->chgWData(oldp+805,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_5),128);
            tracep->chgWData(oldp+809,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27_io_s),128);
            __Vtemp5209[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5209[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5209[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5209[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+813,(__Vtemp5209),128);
            tracep->chgWData(oldp+817,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_6),128);
            tracep->chgWData(oldp+821,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_l2_7),128);
            tracep->chgWData(oldp+825,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28_io_s),128);
            __Vtemp5213[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5213[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5213[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5213[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+829,(__Vtemp5213),128);
            tracep->chgWData(oldp+833,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29_io_s),128);
            __Vtemp5217[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5217[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5217[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5217[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+837,(__Vtemp5217),128);
            tracep->chgWData(oldp+841,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s),128);
            __Vtemp5221[0U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                               << 1U);
            __Vtemp5221[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                             << 1U));
            __Vtemp5221[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                             << 1U));
            __Vtemp5221[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                             << 1U));
            tracep->chgWData(oldp+845,(__Vtemp5221),128);
            __Vtemp5231[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                   << 1U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                              << 1U));
            __Vtemp5231[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                                 << 1U))) 
                               ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                                << 1U)));
            __Vtemp5231[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                                 << 1U))) 
                               ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                                << 1U)));
            __Vtemp5231[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                                ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                                 << 1U))) 
                               ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                                << 1U)));
            tracep->chgWData(oldp+849,(__Vtemp5231),128);
            __Vtemp5255[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                  << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                            << 2U)) 
                                | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                   << 2U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                               << 2U) 
                                              & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                                 << 1U)));
            __Vtemp5255[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                         >> 0x1fU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                           >> 0x1eU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                           & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                          >> 0x1eU)) 
                                      | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                          >> 0x1eU) 
                                         & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                            >> 0x1fU)))) 
                               | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                     << 1U) & ((2U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                                   >> 0x1eU)) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                                  << 2U))) 
                                   | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                          << 2U)) & 
                                      ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                          << 2U)))) 
                                  | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                         << 2U)) & 
                                     (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                      << 1U))));
            __Vtemp5255[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                         >> 0x1fU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                           >> 0x1eU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                           & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U]) 
                                          >> 0x1eU)) 
                                      | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                          >> 0x1eU) 
                                         & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                            >> 0x1fU)))) 
                               | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                     << 1U) & ((2U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                                   >> 0x1eU)) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                                  << 2U))) 
                                   | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                          << 2U)) & 
                                      ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                          << 2U)))) 
                                  | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                         << 2U)) & 
                                     (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                      << 1U))));
            __Vtemp5255[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                         >> 0x1fU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                           >> 0x1eU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                           & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U]) 
                                          >> 0x1eU)) 
                                      | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                          >> 0x1eU) 
                                         & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                            >> 0x1fU)))) 
                               | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                                     << 1U) & ((2U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                                   >> 0x1eU)) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                                  << 2U))) 
                                   | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                          << 2U)) & 
                                      ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                          << 2U)))) 
                                  | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                         << 2U)) & 
                                     (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                                      << 1U))));
            tracep->chgWData(oldp+853,(__Vtemp5255),128);
            tracep->chgCData(oldp+857,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__state),2);
            tracep->chgWData(oldp+858,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in2),67);
            tracep->chgWData(oldp+861,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1),128);
            tracep->chgWData(oldp+865,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2),128);
            tracep->chgWData(oldp+869,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3),128);
            tracep->chgWData(oldp+873,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4),128);
            tracep->chgWData(oldp+877,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5),128);
            tracep->chgWData(oldp+881,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6),128);
            tracep->chgWData(oldp+885,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7),128);
            tracep->chgWData(oldp+889,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8),128);
            tracep->chgWData(oldp+893,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9),128);
            tracep->chgWData(oldp+897,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10),128);
            tracep->chgWData(oldp+901,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11),128);
            tracep->chgWData(oldp+905,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12),128);
            tracep->chgWData(oldp+909,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13),128);
            tracep->chgWData(oldp+913,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14),128);
            tracep->chgWData(oldp+917,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15),128);
            tracep->chgWData(oldp+921,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16),128);
            tracep->chgWData(oldp+925,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17),128);
            tracep->chgWData(oldp+929,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18),128);
            tracep->chgWData(oldp+933,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19),128);
            tracep->chgWData(oldp+937,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20),128);
            tracep->chgWData(oldp+941,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21),128);
            tracep->chgWData(oldp+945,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22),128);
            tracep->chgWData(oldp+949,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23),128);
            tracep->chgWData(oldp+953,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24),128);
            tracep->chgWData(oldp+957,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25),128);
            tracep->chgWData(oldp+961,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26),128);
            tracep->chgWData(oldp+965,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27),128);
            tracep->chgWData(oldp+969,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28),128);
            tracep->chgWData(oldp+973,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29),128);
            tracep->chgWData(oldp+977,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30),128);
            tracep->chgWData(oldp+981,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31),128);
            tracep->chgWData(oldp+985,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32),128);
            tracep->chgBit(oldp+989,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c) 
                                            >> 1U))));
            tracep->chgBit(oldp+990,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c))));
            tracep->chgBit(oldp+991,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c) 
                                            >> 1U))));
            tracep->chgBit(oldp+992,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c))));
            tracep->chgBit(oldp+993,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c) 
                                            >> 1U))));
            tracep->chgBit(oldp+994,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c))));
            tracep->chgBit(oldp+995,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c) 
                                            >> 1U))));
            tracep->chgBit(oldp+996,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c))));
            tracep->chgBit(oldp+997,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c) 
                                            >> 1U))));
            tracep->chgBit(oldp+998,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_4_io_c))));
            tracep->chgBit(oldp+999,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c) 
                                            >> 1U))));
            tracep->chgBit(oldp+1000,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_5_io_c))));
            tracep->chgBit(oldp+1001,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1002,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_6_io_c))));
            tracep->chgBit(oldp+1003,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1004,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_7_io_c))));
            tracep->chgBit(oldp+1005,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1006,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c))));
            tracep->chgBit(oldp+1007,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1008,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c))));
            tracep->chgBit(oldp+1009,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1010,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c))));
            tracep->chgBit(oldp+1011,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1012,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c))));
            tracep->chgBit(oldp+1013,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1014,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c))));
            tracep->chgBit(oldp+1015,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1016,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c))));
            tracep->chgBit(oldp+1017,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1018,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c))));
            tracep->chgBit(oldp+1019,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1020,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c))));
            tracep->chgBit(oldp+1021,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1022,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c))));
            tracep->chgBit(oldp+1023,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1024,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c))));
            tracep->chgBit(oldp+1025,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1026,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c))));
            tracep->chgBit(oldp+1027,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1028,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c))));
            tracep->chgBit(oldp+1029,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1030,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c))));
            tracep->chgBit(oldp+1031,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1032,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_21_io_c))));
            tracep->chgBit(oldp+1033,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1034,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_22_io_c))));
            tracep->chgBit(oldp+1035,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1036,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_23_io_c))));
            tracep->chgBit(oldp+1037,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1038,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c))));
            tracep->chgBit(oldp+1039,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1040,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c))));
            tracep->chgBit(oldp+1041,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1042,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c))));
            tracep->chgBit(oldp+1043,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1044,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c))));
            tracep->chgBit(oldp+1045,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1046,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c))));
            tracep->chgBit(oldp+1047,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1048,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c))));
            tracep->chgBit(oldp+1049,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1050,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c))));
            tracep->chgBit(oldp+1051,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1052,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c))));
            tracep->chgBit(oldp+1053,((1U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1054,((1U & (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c))));
            tracep->chgWData(oldp+1055,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_out),128);
            __Vtemp5258[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[0U];
            __Vtemp5258[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[1U];
            __Vtemp5258[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[2U];
            __Vtemp5258[3U] = (0x3fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_1[3U]);
            tracep->chgWData(oldp+1059,(__Vtemp5258),126);
            __Vtemp5261[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[0U];
            __Vtemp5261[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[1U];
            __Vtemp5261[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[2U];
            __Vtemp5261[3U] = (0xfffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_2[3U]);
            tracep->chgWData(oldp+1063,(__Vtemp5261),124);
            __Vtemp5264[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[0U];
            __Vtemp5264[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[1U];
            __Vtemp5264[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[2U];
            __Vtemp5264[3U] = (0x3ffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_3[3U]);
            tracep->chgWData(oldp+1067,(__Vtemp5264),122);
            __Vtemp5267[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[0U];
            __Vtemp5267[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[1U];
            __Vtemp5267[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[2U];
            __Vtemp5267[3U] = (0xffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_4[3U]);
            tracep->chgWData(oldp+1071,(__Vtemp5267),120);
            __Vtemp5270[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[0U];
            __Vtemp5270[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[1U];
            __Vtemp5270[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[2U];
            __Vtemp5270[3U] = (0x3fffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_5[3U]);
            tracep->chgWData(oldp+1075,(__Vtemp5270),118);
            __Vtemp5273[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[0U];
            __Vtemp5273[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[1U];
            __Vtemp5273[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[2U];
            __Vtemp5273[3U] = (0xfffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_6[3U]);
            tracep->chgWData(oldp+1079,(__Vtemp5273),116);
            __Vtemp5276[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[0U];
            __Vtemp5276[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[1U];
            __Vtemp5276[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[2U];
            __Vtemp5276[3U] = (0x3ffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_7[3U]);
            tracep->chgWData(oldp+1083,(__Vtemp5276),114);
            __Vtemp5279[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[0U];
            __Vtemp5279[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[1U];
            __Vtemp5279[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[2U];
            __Vtemp5279[3U] = (0xffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_8[3U]);
            tracep->chgWData(oldp+1087,(__Vtemp5279),112);
            __Vtemp5282[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[0U];
            __Vtemp5282[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[1U];
            __Vtemp5282[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[2U];
            __Vtemp5282[3U] = (0x3fffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_9[3U]);
            tracep->chgWData(oldp+1091,(__Vtemp5282),110);
            __Vtemp5285[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[0U];
            __Vtemp5285[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[1U];
            __Vtemp5285[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[2U];
            __Vtemp5285[3U] = (0xfffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_10[3U]);
            tracep->chgWData(oldp+1095,(__Vtemp5285),108);
            __Vtemp5288[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[0U];
            __Vtemp5288[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[1U];
            __Vtemp5288[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[2U];
            __Vtemp5288[3U] = (0x3ffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_11[3U]);
            tracep->chgWData(oldp+1099,(__Vtemp5288),106);
            __Vtemp5291[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[0U];
            __Vtemp5291[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[1U];
            __Vtemp5291[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[2U];
            __Vtemp5291[3U] = (0xffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_12[3U]);
            tracep->chgWData(oldp+1103,(__Vtemp5291),104);
            __Vtemp5294[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[0U];
            __Vtemp5294[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[1U];
            __Vtemp5294[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[2U];
            __Vtemp5294[3U] = (0x3fU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_13[3U]);
            tracep->chgWData(oldp+1107,(__Vtemp5294),102);
            __Vtemp5297[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[0U];
            __Vtemp5297[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[1U];
            __Vtemp5297[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[2U];
            __Vtemp5297[3U] = (0xfU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_14[3U]);
            tracep->chgWData(oldp+1111,(__Vtemp5297),100);
            __Vtemp5300[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[0U];
            __Vtemp5300[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[1U];
            __Vtemp5300[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[2U];
            __Vtemp5300[3U] = (3U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_15[3U]);
            tracep->chgWData(oldp+1115,(__Vtemp5300),98);
            __Vtemp5301[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[0U];
            __Vtemp5301[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[1U];
            __Vtemp5301[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_16[2U];
            tracep->chgWData(oldp+1119,(__Vtemp5301),96);
            __Vtemp5304[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[0U];
            __Vtemp5304[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[1U];
            __Vtemp5304[2U] = (0x3fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_17[2U]);
            tracep->chgWData(oldp+1122,(__Vtemp5304),94);
            __Vtemp5307[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[0U];
            __Vtemp5307[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[1U];
            __Vtemp5307[2U] = (0xfffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_18[2U]);
            tracep->chgWData(oldp+1125,(__Vtemp5307),92);
            __Vtemp5310[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[0U];
            __Vtemp5310[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[1U];
            __Vtemp5310[2U] = (0x3ffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_19[2U]);
            tracep->chgWData(oldp+1128,(__Vtemp5310),90);
            __Vtemp5313[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[0U];
            __Vtemp5313[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[1U];
            __Vtemp5313[2U] = (0xffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_20[2U]);
            tracep->chgWData(oldp+1131,(__Vtemp5313),88);
            __Vtemp5316[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[0U];
            __Vtemp5316[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[1U];
            __Vtemp5316[2U] = (0x3fffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_21[2U]);
            tracep->chgWData(oldp+1134,(__Vtemp5316),86);
            __Vtemp5319[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[0U];
            __Vtemp5319[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[1U];
            __Vtemp5319[2U] = (0xfffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_22[2U]);
            tracep->chgWData(oldp+1137,(__Vtemp5319),84);
            __Vtemp5322[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[0U];
            __Vtemp5322[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[1U];
            __Vtemp5322[2U] = (0x3ffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_23[2U]);
            tracep->chgWData(oldp+1140,(__Vtemp5322),82);
            __Vtemp5325[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[0U];
            __Vtemp5325[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[1U];
            __Vtemp5325[2U] = (0xffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_24[2U]);
            tracep->chgWData(oldp+1143,(__Vtemp5325),80);
            __Vtemp5328[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[0U];
            __Vtemp5328[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[1U];
            __Vtemp5328[2U] = (0x3fffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_25[2U]);
            tracep->chgWData(oldp+1146,(__Vtemp5328),78);
            __Vtemp5331[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[0U];
            __Vtemp5331[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[1U];
            __Vtemp5331[2U] = (0xfffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_26[2U]);
            tracep->chgWData(oldp+1149,(__Vtemp5331),76);
            __Vtemp5334[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[0U];
            __Vtemp5334[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[1U];
            __Vtemp5334[2U] = (0x3ffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_27[2U]);
            tracep->chgWData(oldp+1152,(__Vtemp5334),74);
            __Vtemp5337[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[0U];
            __Vtemp5337[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[1U];
            __Vtemp5337[2U] = (0xffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_28[2U]);
            tracep->chgWData(oldp+1155,(__Vtemp5337),72);
            __Vtemp5340[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[0U];
            __Vtemp5340[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[1U];
            __Vtemp5340[2U] = (0x3fU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_29[2U]);
            tracep->chgWData(oldp+1158,(__Vtemp5340),70);
            __Vtemp5343[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[0U];
            __Vtemp5343[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[1U];
            __Vtemp5343[2U] = (0xfU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_30[2U]);
            tracep->chgWData(oldp+1161,(__Vtemp5343),68);
            __Vtemp5346[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[0U];
            __Vtemp5346[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[1U];
            __Vtemp5346[2U] = (3U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_31[2U]);
            tracep->chgWData(oldp+1164,(__Vtemp5346),66);
            tracep->chgQData(oldp+1167,((((QData)((IData)(
                                                          vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp_32[0U])))),64);
            __Vtemp5356[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                   << 1U)) ^ (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                              << 1U));
            __Vtemp5356[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                                 << 1U))) 
                               ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                                << 1U)));
            __Vtemp5356[2U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                                 << 1U))) 
                               ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                                << 1U)));
            __Vtemp5356[3U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                                ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                                 << 1U))) 
                               ^ ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                                << 1U)));
            __Vtemp5380[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                  << 1U) & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                            << 2U)) 
                                | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                    & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                   << 2U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                               << 2U) 
                                              & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                                 << 1U)));
            __Vtemp5380[1U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                         >> 0x1fU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                           >> 0x1eU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                           & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                          >> 0x1eU)) 
                                      | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                          >> 0x1eU) 
                                         & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                            >> 0x1fU)))) 
                               | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                     << 1U) & ((2U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                                   >> 0x1eU)) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                                  << 2U))) 
                                   | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                          << 2U)) & 
                                      ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                          << 2U)))) 
                                  | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                         << 2U)) & 
                                     (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                      << 1U))));
            __Vtemp5380[2U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                         >> 0x1fU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                           >> 0x1eU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                           & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U]) 
                                          >> 0x1eU)) 
                                      | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                          >> 0x1eU) 
                                         & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                            >> 0x1fU)))) 
                               | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                     << 1U) & ((2U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                                   >> 0x1eU)) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                                  << 2U))) 
                                   | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                          << 2U)) & 
                                      ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                          << 2U)))) 
                                  | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                         << 2U)) & 
                                     (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                      << 1U))));
            __Vtemp5380[3U] = ((1U & ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                         >> 0x1fU) 
                                        & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                           >> 0x1eU)) 
                                       | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                           & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U]) 
                                          >> 0x1eU)) 
                                      | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                          >> 0x1eU) 
                                         & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                            >> 0x1fU)))) 
                               | ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                                     << 1U) & ((2U 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                                   >> 0x1eU)) 
                                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                                  << 2U))) 
                                   | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                          << 2U)) & 
                                      ((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                          << 2U)))) 
                                  | (((2U & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                             >> 0x1eU)) 
                                      | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                         << 2U)) & 
                                     (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                                      << 1U))));
            VL_ADD_W(4, __Vtemp5381, __Vtemp5356, __Vtemp5380);
            tracep->chgWData(oldp+1169,(__Vtemp5381),128);
            tracep->chgBit(oldp+1173,((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul_io_in2[2U])));
            tracep->chgCData(oldp+1174,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c) 
                                                   << 6U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_3_io_c) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c) 
                                                   << 4U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_2_io_c) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c) 
                                                         << 2U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_1_io_c) 
                                                            << 2U)) 
                                                        | (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_0_io_c)))))))),8);
            tracep->chgCData(oldp+1175,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
                                                   << 6U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c) 
                                                   << 4U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c) 
                                                         << 2U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c) 
                                                            << 2U)) 
                                                        | (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c)))))))),8);
            tracep->chgIData(oldp+1176,(((0x10000U 
                                          & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c) 
                                                << 0xeU)) 
                                            | ((0x4000U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_15_io_c) 
                                                   << 0xeU)) 
                                               | ((0x2000U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c) 
                                                      << 0xcU)) 
                                                  | ((0x1000U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_14_io_c) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c) 
                                                            << 0xaU)) 
                                                        | ((0x400U 
                                                            & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_13_io_c) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c) 
                                                                  << 8U)) 
                                                              | ((0x100U 
                                                                  & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_12_io_c) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
                                                                        << 6U)) 
                                                                    | ((0x40U 
                                                                        & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_11_io_c) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c) 
                                                                              << 4U)) 
                                                                          | ((0x10U 
                                                                              & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_10_io_c) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_9_io_c) 
                                                                                << 2U)) 
                                                                                | (IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_8_io_c))))))))))))))))),17);
            tracep->chgQData(oldp+1177,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_lo),33);
            tracep->chgCData(oldp+1179,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_20_io_c) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c) 
                                                << 5U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_19_io_c) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c) 
                                                      << 3U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_18_io_c) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c) 
                                                            << 1U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_17_io_c) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_16_io_c) 
                                                                 >> 1U)))))))))),8);
            tracep->chgCData(oldp+1180,(((0x80U & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c) 
                                                << 5U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c) 
                                                      << 3U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c) 
                                                            << 1U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c) 
                                                                 >> 1U)))))))))),8);
            tracep->chgIData(oldp+1181,(((0x10000U 
                                          & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c) 
                                             << 0xfU)) 
                                         | ((0x8000U 
                                             & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_32_io_c) 
                                                << 0xfU)) 
                                            | ((0x4000U 
                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c) 
                                                   << 0xdU)) 
                                               | ((0x2000U 
                                                   & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_31_io_c) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c) 
                                                         << 0xbU)) 
                                                     | ((0x800U 
                                                         & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_30_io_c) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c) 
                                                               << 9U)) 
                                                           | ((0x200U 
                                                               & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_29_io_c) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
                                                                     << 7U)) 
                                                                 | ((0x80U 
                                                                     & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_28_io_c) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c) 
                                                                           << 5U)) 
                                                                       | ((0x20U 
                                                                           & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_27_io_c) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c) 
                                                                                << 3U)) 
                                                                             | ((8U 
                                                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_26_io_c) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_25_io_c) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__booth_24_io_c) 
                                                                                >> 1U))))))))))))))))))),17);
            tracep->chgQData(oldp+1182,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__pp33_hi_1),33);
            __Vtemp5384[0U] = (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[0U]);
            __Vtemp5384[1U] = (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[1U]);
            __Vtemp5384[2U] = (1U & (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U]));
            tracep->chgWData(oldp+1184,(__Vtemp5384),65);
            tracep->chgQData(oldp+1187,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0x7fffffffffffffffULL
                                          : 0ULL)),63);
            tracep->chgQData(oldp+1189,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0x3fffffffffffffffULL
                                          : 0ULL)),62);
            tracep->chgQData(oldp+1191,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x3fffffffffffffffULL)),62);
            tracep->chgQData(oldp+1193,(((1U & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__reg_in1[2U])
                                          ? 0ULL : 0x7fffffffffffffffULL)),63);
            __Vtemp5387[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[0U];
            __Vtemp5387[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[1U];
            __Vtemp5387[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[2U];
            __Vtemp5387[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_0__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1195,(__Vtemp5387),127);
            __Vtemp5390[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[0U];
            __Vtemp5390[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[1U];
            __Vtemp5390[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[2U];
            __Vtemp5390[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_1__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1199,(__Vtemp5390),127);
            __Vtemp5393[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[0U];
            __Vtemp5393[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[1U];
            __Vtemp5393[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[2U];
            __Vtemp5393[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_2__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1203,(__Vtemp5393),127);
            __Vtemp5396[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[0U];
            __Vtemp5396[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[1U];
            __Vtemp5396[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[2U];
            __Vtemp5396[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_3__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1207,(__Vtemp5396),127);
            __Vtemp5399[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[0U];
            __Vtemp5399[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[1U];
            __Vtemp5399[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[2U];
            __Vtemp5399[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_4__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1211,(__Vtemp5399),127);
            __Vtemp5402[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[0U];
            __Vtemp5402[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[1U];
            __Vtemp5402[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[2U];
            __Vtemp5402[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_5__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1215,(__Vtemp5402),127);
            __Vtemp5405[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[0U];
            __Vtemp5405[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[1U];
            __Vtemp5405[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[2U];
            __Vtemp5405[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_6__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1219,(__Vtemp5405),127);
            __Vtemp5408[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[0U];
            __Vtemp5408[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[1U];
            __Vtemp5408[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[2U];
            __Vtemp5408[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_7__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1223,(__Vtemp5408),127);
            __Vtemp5411[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[0U];
            __Vtemp5411[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[1U];
            __Vtemp5411[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[2U];
            __Vtemp5411[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_8__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1227,(__Vtemp5411),127);
            __Vtemp5414[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[0U];
            __Vtemp5414[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[1U];
            __Vtemp5414[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[2U];
            __Vtemp5414[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_9__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1231,(__Vtemp5414),127);
            __Vtemp5417[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[0U];
            __Vtemp5417[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[1U];
            __Vtemp5417[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[2U];
            __Vtemp5417[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_10__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1235,(__Vtemp5417),127);
            __Vtemp5420[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[0U];
            __Vtemp5420[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[1U];
            __Vtemp5420[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[2U];
            __Vtemp5420[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_11__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1239,(__Vtemp5420),127);
            __Vtemp5423[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[0U];
            __Vtemp5423[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[1U];
            __Vtemp5423[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[2U];
            __Vtemp5423[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_12__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1243,(__Vtemp5423),127);
            __Vtemp5426[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[0U];
            __Vtemp5426[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[1U];
            __Vtemp5426[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[2U];
            __Vtemp5426[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_13__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1247,(__Vtemp5426),127);
            __Vtemp5429[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[0U];
            __Vtemp5429[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[1U];
            __Vtemp5429[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[2U];
            __Vtemp5429[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_14__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1251,(__Vtemp5429),127);
            __Vtemp5432[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[0U];
            __Vtemp5432[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[1U];
            __Vtemp5432[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[2U];
            __Vtemp5432[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_15__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1255,(__Vtemp5432),127);
            __Vtemp5435[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U];
            __Vtemp5435[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U];
            __Vtemp5435[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U];
            __Vtemp5435[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1259,(__Vtemp5435),127);
            __Vtemp5438[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U];
            __Vtemp5438[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U];
            __Vtemp5438[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U];
            __Vtemp5438[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1263,(__Vtemp5438),127);
            __Vtemp5441[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U];
            __Vtemp5441[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U];
            __Vtemp5441[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U];
            __Vtemp5441[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1267,(__Vtemp5441),127);
            __Vtemp5444[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U];
            __Vtemp5444[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U];
            __Vtemp5444[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U];
            __Vtemp5444[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1271,(__Vtemp5444),127);
            __Vtemp5447[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U];
            __Vtemp5447[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U];
            __Vtemp5447[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U];
            __Vtemp5447[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1275,(__Vtemp5447),127);
            __Vtemp5450[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U];
            __Vtemp5450[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U];
            __Vtemp5450[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U];
            __Vtemp5450[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1279,(__Vtemp5450),127);
            __Vtemp5469[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U] 
                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                    << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                                << 1U) 
                                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U])) 
                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[0U] 
                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[0U]));
            __Vtemp5469[1U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U] 
                                 & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                     >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                                  << 1U))) 
                                | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[0U] 
                                     >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                                  << 1U)) 
                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U])) 
                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[1U] 
                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[1U]));
            __Vtemp5469[2U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U] 
                                 & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                     >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                  << 1U))) 
                                | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[1U] 
                                     >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                  << 1U)) 
                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U])) 
                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[2U] 
                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[2U]));
            __Vtemp5469[3U] = (0x7fffffffU & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[3U] 
                                                & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                    >> 0x1fU) 
                                                   | (0x7ffffffeU 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                                         << 1U)))) 
                                               | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[2U] 
                                                    >> 0x1fU) 
                                                   | (0x7ffffffeU 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16__DOT___io_c_T_4[3U] 
                                                         << 1U))) 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[3U])) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17_io_s[3U] 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_16_io_s[3U])));
            tracep->chgWData(oldp+1283,(__Vtemp5469),127);
            __Vtemp5492[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                                  << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U]) 
                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[0U] 
                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                      << 1U))) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U]) 
                                                  << 1U));
            __Vtemp5492[1U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                                << 1U)) 
                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U]) 
                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[1U] 
                                   & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                       >> 0x1fU) | 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                       << 1U)))) | 
                               (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[0U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                               << 1U)) 
                                & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[0U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                                 << 1U))));
            __Vtemp5492[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                                << 1U)) 
                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U]) 
                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[2U] 
                                   & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                       >> 0x1fU) | 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                       << 1U)))) | 
                               (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[1U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                               << 1U)) 
                                & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[1U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                                 << 1U))));
            __Vtemp5492[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                   >> 0x1fU) | (0x7ffffffeU 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                                   << 1U))) 
                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[3U]) 
                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18_io_s[3U] 
                                   & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                       >> 0x1fU) | 
                                      (0x7ffffffeU 
                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                          << 1U))))) 
                               | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[2U] 
                                    >> 0x1fU) | (0x7ffffffeU 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_18__DOT___io_c_T_4[3U] 
                                                    << 1U))) 
                                  & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[2U] 
                                      >> 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_17__DOT___io_c_T_4[3U] 
                                                      << 1U)))));
            tracep->chgWData(oldp+1287,(__Vtemp5492),127);
            __Vtemp5511[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U] 
                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                    << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                                << 1U) 
                                               & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U])) 
                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[0U] 
                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[0U]));
            __Vtemp5511[1U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U] 
                                 & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                     >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                                  << 1U))) 
                                | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[0U] 
                                     >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                                  << 1U)) 
                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U])) 
                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[1U] 
                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[1U]));
            __Vtemp5511[2U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U] 
                                 & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                     >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                  << 1U))) 
                                | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[1U] 
                                     >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                  << 1U)) 
                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U])) 
                               | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[2U] 
                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[2U]));
            __Vtemp5511[3U] = (0x7fffffffU & (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[3U] 
                                                & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                    >> 0x1fU) 
                                                   | (0x7ffffffeU 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                                         << 1U)))) 
                                               | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[2U] 
                                                    >> 0x1fU) 
                                                   | (0x7ffffffeU 
                                                      & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19__DOT___io_c_T_4[3U] 
                                                         << 1U))) 
                                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[3U])) 
                                              | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20_io_s[3U] 
                                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_19_io_s[3U])));
            tracep->chgWData(oldp+1291,(__Vtemp5511),127);
            __Vtemp5534[0U] = ((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                                  << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U]) 
                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[0U] 
                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                      << 1U))) | ((
                                                   vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                                   & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U]) 
                                                  << 1U));
            __Vtemp5534[1U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                                << 1U)) 
                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U]) 
                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[1U] 
                                   & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                       >> 0x1fU) | 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                       << 1U)))) | 
                               (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[0U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                               << 1U)) 
                                & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[0U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                                 << 1U))));
            __Vtemp5534[2U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                   >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                                << 1U)) 
                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U]) 
                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[2U] 
                                   & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                       >> 0x1fU) | 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                       << 1U)))) | 
                               (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[1U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                               << 1U)) 
                                & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[1U] 
                                    >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                                 << 1U))));
            __Vtemp5534[3U] = (((((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                   >> 0x1fU) | (0x7ffffffeU 
                                                & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                                   << 1U))) 
                                 & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[3U]) 
                                | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21_io_s[3U] 
                                   & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                       >> 0x1fU) | 
                                      (0x7ffffffeU 
                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                          << 1U))))) 
                               | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[2U] 
                                    >> 0x1fU) | (0x7ffffffeU 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_21__DOT___io_c_T_4[3U] 
                                                    << 1U))) 
                                  & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[2U] 
                                      >> 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_20__DOT___io_c_T_4[3U] 
                                                      << 1U)))));
            tracep->chgWData(oldp+1295,(__Vtemp5534),127);
            __Vtemp5537[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[0U];
            __Vtemp5537[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[1U];
            __Vtemp5537[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[2U];
            __Vtemp5537[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_26__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1299,(__Vtemp5537),127);
            __Vtemp5540[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[0U];
            __Vtemp5540[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[1U];
            __Vtemp5540[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[2U];
            __Vtemp5540[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_27__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1303,(__Vtemp5540),127);
            __Vtemp5543[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[0U];
            __Vtemp5543[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[1U];
            __Vtemp5543[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[2U];
            __Vtemp5543[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_28__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1307,(__Vtemp5543),127);
            __Vtemp5546[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U];
            __Vtemp5546[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U];
            __Vtemp5546[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U];
            __Vtemp5546[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1311,(__Vtemp5546),127);
            __Vtemp5549[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U];
            __Vtemp5549[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U];
            __Vtemp5549[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U];
            __Vtemp5549[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U]);
            tracep->chgWData(oldp+1315,(__Vtemp5549),127);
            __Vtemp5572[0U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U] 
                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                    << 1U)) | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                                & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U]) 
                                               << 1U)) 
                               | ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                   << 1U) & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[0U]));
            __Vtemp5572[1U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U] 
                                 & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                     >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                                  << 1U))) 
                                | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[0U] 
                                     >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                                  << 1U)) 
                                   & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                       >> 0x1fU) | 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                       << 1U)))) | 
                               (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[0U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                               << 1U)) 
                                & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[1U]));
            __Vtemp5572[2U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U] 
                                 & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                     >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                                  << 1U))) 
                                | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[1U] 
                                     >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                                  << 1U)) 
                                   & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                       >> 0x1fU) | 
                                      (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                       << 1U)))) | 
                               (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[1U] 
                                  >> 0x1fU) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                               << 1U)) 
                                & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[2U]));
            __Vtemp5572[3U] = (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U] 
                                 & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                     >> 0x1fU) | (0x7ffffffeU 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                                     << 1U)))) 
                                | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[2U] 
                                     >> 0x1fU) | (0x7ffffffeU 
                                                  & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30__DOT___io_c_T_4[3U] 
                                                     << 1U))) 
                                   & ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                       >> 0x1fU) | 
                                      (0x7ffffffeU 
                                       & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                          << 1U))))) 
                               | (((vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[2U] 
                                    >> 0x1fU) | (0x7ffffffeU 
                                                 & (vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_29__DOT___io_c_T_4[3U] 
                                                    << 1U))) 
                                  & vlSelf->Core__DOT__execute__DOT__mdu__DOT__mul__DOT__csa_30_io_s[3U]));
            tracep->chgWData(oldp+1319,(__Vtemp5572),127);
            tracep->chgCData(oldp+1323,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__state),2);
            tracep->chgWData(oldp+1324,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1),128);
            tracep->chgWData(oldp+1328,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in2),65);
            tracep->chgBit(oldp+1331,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_neg));
            tracep->chgBit(oldp+1332,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__rem_neg));
            __Vtemp5575[0U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U] 
                                << 1U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U] 
                                          >> 0x1fU));
            __Vtemp5575[1U] = ((vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U] 
                                << 1U) | (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U] 
                                          >> 0x1fU));
            __Vtemp5575[2U] = (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U] 
                               >> 0x1fU);
            tracep->chgWData(oldp+1333,(__Vtemp5575),65);
            tracep->chgWData(oldp+1336,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value),65);
            tracep->chgCData(oldp+1339,(vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__cnt),6);
            tracep->chgQData(oldp+1340,(((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div)
                                          ? ((1U & (IData)(
                                                           (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1 
                                                            >> 0x3fU)))
                                              ? (1ULL 
                                                 + 
                                                 (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1))
                                              : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1)
                                          : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in1)),64);
            tracep->chgQData(oldp+1342,(((IData)(vlSelf->Core__DOT__execute__DOT__mdu__DOT__is_div)
                                          ? ((1U & (IData)(
                                                           (vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2 
                                                            >> 0x3fU)))
                                              ? (1ULL 
                                                 + 
                                                 (~ vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2))
                                              : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2)
                                          : vlSelf->Core__DOT__execute__DOT__mdu__DOT__div_io_in2)),64);
            tracep->chgQData(oldp+1344,((0x7fffffffffffffffULL 
                                         & vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__quo_out)),63);
            __Vtemp5578[0U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U];
            __Vtemp5578[1U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U];
            __Vtemp5578[2U] = vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[2U];
            __Vtemp5578[3U] = (0x7fffffffU & vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[3U]);
            tracep->chgWData(oldp+1346,(__Vtemp5578),127);
            tracep->chgQData(oldp+1350,((0x7fffffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U]))))),63);
            __Vtemp5579[0U] = (IData)((0x7fffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U])))));
            __Vtemp5579[1U] = (((IData)((((QData)((IData)(
                                                          vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[0U])))) 
                                << 0x1fU) | (IData)(
                                                    ((0x7fffffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__reg_in1[0U])))) 
                                                     >> 0x20U)));
            __Vtemp5579[2U] = (((IData)((((QData)((IData)(
                                                          vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[0U])))) 
                                >> 1U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[0U]))) 
                                                   >> 0x20U)) 
                                          << 0x1fU));
            __Vtemp5579[3U] = ((IData)(((((QData)((IData)(
                                                          vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->Core__DOT__execute__DOT__mdu__DOT__div__DOT__minus_value[0U]))) 
                                        >> 0x20U)) 
                               >> 1U);
            tracep->chgWData(oldp+1352,(__Vtemp5579),127);
            tracep->chgBit(oldp+1356,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_valid));
            tracep->chgIData(oldp+1357,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_pc),32);
            tracep->chgIData(oldp+1358,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_inst),32);
            tracep->chgCData(oldp+1359,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code),2);
            tracep->chgCData(oldp+1360,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_size),2);
            tracep->chgCData(oldp+1361,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mdu_code),4);
            tracep->chgBit(oldp+1362,(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_rd_en));
            tracep->chgCData(oldp+1363,(vlSelf->Core__DOT__mem__DOT__waddr),5);
            tracep->chgBit(oldp+1364,(vlSelf->Core__DOT__mem__DOT__wen));
            tracep->chgQData(oldp+1365,(vlSelf->Core__DOT__mem__DOT__wdata),64);
            tracep->chgIData(oldp+1367,(vlSelf->Core__DOT__mem__DOT__reg_mem_addr),32);
            tracep->chgBit(oldp+1368,(vlSelf->Core__DOT__mem__DOT__mdu_valid));
            tracep->chgBit(oldp+1369,(vlSelf->Core__DOT__mem__DOT__is_load));
            tracep->chgBit(oldp+1370,((3U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))));
            tracep->chgCData(oldp+1371,((7U & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out))),3);
            tracep->chgCData(oldp+1372,((7U & vlSelf->Core__DOT__mem__DOT__reg_mem_addr)),3);
            tracep->chgCData(oldp+1373,(((7U == (7U 
                                                 & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                          ? 0x80U : 
                                         ((6U == (7U 
                                                  & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                           ? 0xc0U : 
                                          ((5U == (7U 
                                                   & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                            ? 0xe0U
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                ? 0xf0U
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                    ? 0xf8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                     ? 0xfcU
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->Core__DOT__execute__DOT__alu_io_alu_out)))
                                                      ? 0xfeU
                                                      : 0xffU)))))))),8);
            tracep->chgCData(oldp+1374,(((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                          ? 0xffU : 
                                         ((2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                           ? 0xfU : 
                                          ((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_size))
                                            ? 3U : 1U)))),8);
            tracep->chgIData(oldp+1375,(vlSelf->Core__DOT__wb_dpi__DOT__inst1),32);
            tracep->chgIData(oldp+1376,(vlSelf->Core__DOT__wb_dpi__DOT__pc1),32);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+1377,(((~ ((IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis) 
                                           | (IData)(vlSelf->Core__DOT__decode__DOT__stall))) 
                                       & (IData)(vlSelf->Core__DOT__decode__DOT__inst_valid))));
            tracep->chgBit(oldp+1378,(((~ (IData)(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis)) 
                                       & ((IData)(vlSelf->Core__DOT__decode__DOT__inst_valid) 
                                          & (IData)(vlSelf->Core__DOT__decode__DOT__c0_3)))));
            tracep->chgQData(oldp+1379,(((0U != (0x1fU 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 0xfU)))
                                          ? ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs1_hazard)
                                              ? vlSelf->Core__DOT__execute__DOT__alu_io_alu_out
                                              : ((IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs1_hazard)
                                                  ? vlSelf->Core__DOT__mem_io_mem_rd_data
                                                  : 
                                                 ((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Core__DOT__decode__DOT__inst 
                                                           >> 0xfU)))) 
                                                   & (1U 
                                                      == (IData)(vlSelf->Core__DOT__decode__DOT__c0_1)))
                                                   ? vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG
                                                   : 
                                                  ((0x1fU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Core__DOT__decode__DOT__inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->Core__DOT__regfile__DOT__rf_31
                                                    : 
                                                   ((0x1eU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Core__DOT__decode__DOT__inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->Core__DOT__regfile__DOT__rf_30
                                                     : 
                                                    ((0x1dU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Core__DOT__decode__DOT__inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->Core__DOT__regfile__DOT__rf_29
                                                      : 
                                                     ((0x1cU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Core__DOT__decode__DOT__inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->Core__DOT__regfile__DOT__rf_28
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Core__DOT__decode__DOT__inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->Core__DOT__regfile__DOT__rf_27
                                                        : vlSelf->Core__DOT__regfile__DOT___GEN_26))))))))
                                          : 0ULL)),64);
            tracep->chgQData(oldp+1381,(((0U != (0x1fU 
                                                 & (vlSelf->Core__DOT__decode__DOT__inst 
                                                    >> 0x14U)))
                                          ? ((IData)(vlSelf->Core__DOT__regfile__DOT__ex_rs2_hazard)
                                              ? vlSelf->Core__DOT__execute__DOT__alu_io_alu_out
                                              : ((IData)(vlSelf->Core__DOT__regfile__DOT__mem_rs2_hazard)
                                                  ? vlSelf->Core__DOT__mem_io_mem_rd_data
                                                  : 
                                                 ((((IData)(vlSelf->Core__DOT__mem__DOT__io_wen_o_REG) 
                                                    & ((IData)(vlSelf->Core__DOT__mem__DOT__io_waddr_o_REG) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Core__DOT__decode__DOT__inst 
                                                           >> 0x14U)))) 
                                                   & (IData)(vlSelf->Core__DOT__decode_io_ren2))
                                                   ? vlSelf->Core__DOT__mem__DOT__io_wdata_o_REG
                                                   : 
                                                  ((0x1fU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Core__DOT__decode__DOT__inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->Core__DOT__regfile__DOT__rf_31
                                                    : 
                                                   ((0x1eU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Core__DOT__decode__DOT__inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->Core__DOT__regfile__DOT__rf_30
                                                     : 
                                                    ((0x1dU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Core__DOT__decode__DOT__inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->Core__DOT__regfile__DOT__rf_29
                                                      : 
                                                     ((0x1cU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Core__DOT__decode__DOT__inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->Core__DOT__regfile__DOT__rf_28
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Core__DOT__decode__DOT__inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->Core__DOT__regfile__DOT__rf_27
                                                        : vlSelf->Core__DOT__regfile__DOT___GEN_58))))))))
                                          : 0ULL)),64);
            tracep->chgBit(oldp+1383,(((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                         | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                        & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                                       & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)))));
            tracep->chgBit(oldp+1384,((((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                        & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                                       & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)))));
            tracep->chgBit(oldp+1385,(((~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)) 
                                       & ((((1U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                            | (2U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code))) 
                                           & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                                          & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall))))));
            tracep->chgBit(oldp+1386,(((~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)) 
                                       & (((3U == (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_mem_code)) 
                                           & (IData)(vlSelf->Core__DOT__execute__DOT__ex_reg_decodeop_valid)) 
                                          & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall))))));
            tracep->chgQData(oldp+1387,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                          ? vlSelf->Core__DOT__mem__DOT___ld_data_u_T_9
                                          : 0ULL)),64);
            tracep->chgQData(oldp+1389,(((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                          ? ((2U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                              ? vlSelf->Core__DOT__mem__DOT___ld_data_u_T_9
                                              : 0ULL)
                                          : ((1U == (IData)(vlSelf->Core__DOT__mem__DOT__mem_reg_decodeop_mem_code))
                                              ? vlSelf->Core__DOT__mem__DOT__ld_data
                                              : 0ULL))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+1391,((1U & (~ (IData)(vlSelf->Core__DOT__decode__DOT__stall)))));
            tracep->chgBit(oldp+1392,(vlSelf->Core__DOT__execute_io_jmp_packet_o_mis));
            tracep->chgBit(oldp+1393,((1U & (~ (IData)(vlSelf->Core__DOT__mem__DOT__stall)))));
            tracep->chgQData(oldp+1394,(vlSelf->Core__DOT__mem_io_mem_rd_data),64);
            tracep->chgBit(oldp+1396,(vlSelf->Core__DOT__fetch__DOT__stall));
            tracep->chgBit(oldp+1397,(vlSelf->Core__DOT__decode__DOT__stall));
            tracep->chgBit(oldp+1398,(vlSelf->Core__DOT__execute__DOT__mdu_io_mdu_valid));
            tracep->chgBit(oldp+1399,(vlSelf->Core__DOT__mem__DOT__stall));
            tracep->chgBit(oldp+1400,(vlSelf->Core__DOT__mem__DOT__req_wait));
            tracep->chgQData(oldp+1401,(vlSelf->Core__DOT__mem__DOT__ld_data_raw),64);
            tracep->chgQData(oldp+1403,(((1U & (IData)(
                                                       (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                        >> 7U)))
                                          ? 0xffffffffffffffULL
                                          : 0ULL)),56);
            tracep->chgCData(oldp+1405,((0xffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),8);
            tracep->chgQData(oldp+1406,(((1U & (IData)(
                                                       (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                        >> 0xfU)))
                                          ? 0xffffffffffffULL
                                          : 0ULL)),48);
            tracep->chgSData(oldp+1408,((0xffffU & (IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw))),16);
            tracep->chgIData(oldp+1409,(((1U & (IData)(
                                                       (vlSelf->Core__DOT__mem__DOT__ld_data_raw 
                                                        >> 0x1fU)))
                                          ? 0xffffffffU
                                          : 0U)),32);
            tracep->chgIData(oldp+1410,((IData)(vlSelf->Core__DOT__mem__DOT__ld_data_raw)),32);
            tracep->chgQData(oldp+1411,(vlSelf->Core__DOT__mem__DOT__ld_data),64);
        }
        tracep->chgBit(oldp+1413,(vlSelf->clock));
        tracep->chgBit(oldp+1414,(vlSelf->reset));
        tracep->chgIData(oldp+1415,(vlSelf->io_imem_raddr),32);
        tracep->chgIData(oldp+1416,(vlSelf->io_imem_waddr),32);
        tracep->chgQData(oldp+1417,(vlSelf->io_imem_wdata),64);
        tracep->chgBit(oldp+1419,(vlSelf->io_imem_ren));
        tracep->chgBit(oldp+1420,(vlSelf->io_imem_wen));
        tracep->chgCData(oldp+1421,(vlSelf->io_imem_wmask),8);
        tracep->chgQData(oldp+1422,(vlSelf->io_imem_rdata),64);
        tracep->chgBit(oldp+1424,(vlSelf->io_imem_read_ok));
        tracep->chgBit(oldp+1425,(vlSelf->io_imem_write_ok));
        tracep->chgIData(oldp+1426,(vlSelf->io_dmem_raddr),32);
        tracep->chgIData(oldp+1427,(vlSelf->io_dmem_waddr),32);
        tracep->chgQData(oldp+1428,(vlSelf->io_dmem_wdata),64);
        tracep->chgBit(oldp+1430,(vlSelf->io_dmem_ren));
        tracep->chgBit(oldp+1431,(vlSelf->io_dmem_wen));
        tracep->chgCData(oldp+1432,(vlSelf->io_dmem_wmask),8);
        tracep->chgQData(oldp+1433,(vlSelf->io_dmem_rdata),64);
        tracep->chgBit(oldp+1435,(vlSelf->io_dmem_read_ok));
        tracep->chgBit(oldp+1436,(vlSelf->io_dmem_write_ok));
        tracep->chgIData(oldp+1437,(vlSelf->io_commit_pc),32);
        tracep->chgQData(oldp+1438,(vlSelf->io_regs_out_0),64);
        tracep->chgQData(oldp+1440,(vlSelf->io_regs_out_1),64);
        tracep->chgQData(oldp+1442,(vlSelf->io_regs_out_2),64);
        tracep->chgQData(oldp+1444,(vlSelf->io_regs_out_3),64);
        tracep->chgQData(oldp+1446,(vlSelf->io_regs_out_4),64);
        tracep->chgQData(oldp+1448,(vlSelf->io_regs_out_5),64);
        tracep->chgQData(oldp+1450,(vlSelf->io_regs_out_6),64);
        tracep->chgQData(oldp+1452,(vlSelf->io_regs_out_7),64);
        tracep->chgQData(oldp+1454,(vlSelf->io_regs_out_8),64);
        tracep->chgQData(oldp+1456,(vlSelf->io_regs_out_9),64);
        tracep->chgQData(oldp+1458,(vlSelf->io_regs_out_10),64);
        tracep->chgQData(oldp+1460,(vlSelf->io_regs_out_11),64);
        tracep->chgQData(oldp+1462,(vlSelf->io_regs_out_12),64);
        tracep->chgQData(oldp+1464,(vlSelf->io_regs_out_13),64);
        tracep->chgQData(oldp+1466,(vlSelf->io_regs_out_14),64);
        tracep->chgQData(oldp+1468,(vlSelf->io_regs_out_15),64);
        tracep->chgQData(oldp+1470,(vlSelf->io_regs_out_16),64);
        tracep->chgQData(oldp+1472,(vlSelf->io_regs_out_17),64);
        tracep->chgQData(oldp+1474,(vlSelf->io_regs_out_18),64);
        tracep->chgQData(oldp+1476,(vlSelf->io_regs_out_19),64);
        tracep->chgQData(oldp+1478,(vlSelf->io_regs_out_20),64);
        tracep->chgQData(oldp+1480,(vlSelf->io_regs_out_21),64);
        tracep->chgQData(oldp+1482,(vlSelf->io_regs_out_22),64);
        tracep->chgQData(oldp+1484,(vlSelf->io_regs_out_23),64);
        tracep->chgQData(oldp+1486,(vlSelf->io_regs_out_24),64);
        tracep->chgQData(oldp+1488,(vlSelf->io_regs_out_25),64);
        tracep->chgQData(oldp+1490,(vlSelf->io_regs_out_26),64);
        tracep->chgQData(oldp+1492,(vlSelf->io_regs_out_27),64);
        tracep->chgQData(oldp+1494,(vlSelf->io_regs_out_28),64);
        tracep->chgQData(oldp+1496,(vlSelf->io_regs_out_29),64);
        tracep->chgQData(oldp+1498,(vlSelf->io_regs_out_30),64);
        tracep->chgQData(oldp+1500,(vlSelf->io_regs_out_31),64);
        tracep->chgBit(oldp+1502,(vlSelf->io_commit));
        tracep->chgIData(oldp+1503,((IData)(vlSelf->io_imem_rdata)),32);
        tracep->chgIData(oldp+1504,(((IData)(vlSelf->io_imem_read_ok)
                                      ? vlSelf->Core__DOT__fetch__DOT__inst_out
                                      : 0U)),32);
        tracep->chgBit(oldp+1505,(((IData)(vlSelf->io_imem_read_ok) 
                                   & (IData)(vlSelf->Core__DOT__fetch__DOT__valid_out))));
        tracep->chgBit(oldp+1506,((1U & (~ (IData)(vlSelf->io_imem_read_ok)))));
    }
}
