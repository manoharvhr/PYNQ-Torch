#include "sampleRNN_GRU.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sampleRNN_GRU::thread_F2_1_fu_1425_p2() {
    F2_1_fu_1425_p2 = (!ap_const_lv12_433.is_01() || !tmp_12_fu_1398_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_12_fu_1398_p1.read()));
}

void sampleRNN_GRU::thread_F2_2_fu_1705_p2() {
    F2_2_fu_1705_p2 = (!ap_const_lv12_433.is_01() || !tmp_27_fu_1678_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_27_fu_1678_p1.read()));
}

void sampleRNN_GRU::thread_F2_3_fu_1985_p2() {
    F2_3_fu_1985_p2 = (!ap_const_lv12_433.is_01() || !tmp_46_fu_1958_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_46_fu_1958_p1.read()));
}

void sampleRNN_GRU::thread_F2_4_fu_2265_p2() {
    F2_4_fu_2265_p2 = (!ap_const_lv12_433.is_01() || !tmp_63_fu_2238_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_63_fu_2238_p1.read()));
}

void sampleRNN_GRU::thread_F2_5_fu_2545_p2() {
    F2_5_fu_2545_p2 = (!ap_const_lv12_433.is_01() || !tmp_78_fu_2518_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_78_fu_2518_p1.read()));
}

void sampleRNN_GRU::thread_F2_fu_1145_p2() {
    F2_fu_1145_p2 = (!ap_const_lv12_433.is_01() || !tmp_4_fu_1118_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_4_fu_1118_p1.read()));
}

void sampleRNN_GRU::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void sampleRNN_GRU::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[3];
}

void sampleRNN_GRU::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[5];
}

void sampleRNN_GRU::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[7];
}

void sampleRNN_GRU::thread_ap_CS_fsm_pp4_stage0() {
    ap_CS_fsm_pp4_stage0 = ap_CS_fsm.read()[9];
}

void sampleRNN_GRU::thread_ap_CS_fsm_pp5_stage0() {
    ap_CS_fsm_pp5_stage0 = ap_CS_fsm.read()[11];
}

void sampleRNN_GRU::thread_ap_CS_fsm_pp6_stage0() {
    ap_CS_fsm_pp6_stage0 = ap_CS_fsm.read()[27];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[4];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[6];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[8];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[10];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[12];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[13];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[14];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[15];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[16];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[17];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[18];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[19];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[20];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[21];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[22];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[23];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[24];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[25];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[26];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state57() {
    ap_CS_fsm_state57 = ap_CS_fsm.read()[28];
}

void sampleRNN_GRU::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[2];
}

void sampleRNN_GRU::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_4482.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_4482.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_4547.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_4547.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_4612.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_4612.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_pp3_stage0() {
    ap_block_pp3_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_pp3_stage0_11001() {
    ap_block_pp3_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_4677.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_4677.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_pp4_stage0() {
    ap_block_pp4_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_pp4_stage0_11001() {
    ap_block_pp4_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_4742.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_pp4_stage0_subdone() {
    ap_block_pp4_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_4742.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_pp5_stage0() {
    ap_block_pp5_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_pp5_stage0_11001() {
    ap_block_pp5_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_4807.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_pp5_stage0_subdone() {
    ap_block_pp5_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_4807.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_pp6_stage0() {
    ap_block_pp6_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_pp6_stage0_01001() {
    ap_block_pp6_stage0_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_pp6_stage0_11001() {
    ap_block_pp6_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter9.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state55_io.read())) || (esl_seteq<1,1,1>(ap_enable_reg_pp6_iter10.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state56_io.read())));
}

void sampleRNN_GRU::thread_ap_block_pp6_stage0_subdone() {
    ap_block_pp6_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter9.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state55_io.read())) || (esl_seteq<1,1,1>(ap_enable_reg_pp6_iter10.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state56_io.read())));
}

void sampleRNN_GRU::thread_ap_block_state10_pp1_stage0_iter3() {
    ap_block_state10_pp1_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state12_pp2_stage0_iter0() {
    ap_block_state12_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state13_pp2_stage0_iter1() {
    ap_block_state13_pp2_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_4612.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_state14_pp2_stage0_iter2() {
    ap_block_state14_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state15_pp2_stage0_iter3() {
    ap_block_state15_pp2_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state17_pp3_stage0_iter0() {
    ap_block_state17_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state18_pp3_stage0_iter1() {
    ap_block_state18_pp3_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_4677.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_state19_pp3_stage0_iter2() {
    ap_block_state19_pp3_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state20_pp3_stage0_iter3() {
    ap_block_state20_pp3_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state22_pp4_stage0_iter0() {
    ap_block_state22_pp4_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state23_pp4_stage0_iter1() {
    ap_block_state23_pp4_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_4742.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_state24_pp4_stage0_iter2() {
    ap_block_state24_pp4_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state25_pp4_stage0_iter3() {
    ap_block_state25_pp4_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state27_pp5_stage0_iter0() {
    ap_block_state27_pp5_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state28_pp5_stage0_iter1() {
    ap_block_state28_pp5_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_4807.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_state29_pp5_stage0_iter2() {
    ap_block_state29_pp5_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state30_pp5_stage0_iter3() {
    ap_block_state30_pp5_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_4482.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_state46_pp6_stage0_iter0() {
    ap_block_state46_pp6_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state47_pp6_stage0_iter1() {
    ap_block_state47_pp6_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state48_pp6_stage0_iter2() {
    ap_block_state48_pp6_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state49_pp6_stage0_iter3() {
    ap_block_state49_pp6_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state50_pp6_stage0_iter4() {
    ap_block_state50_pp6_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state51_pp6_stage0_iter5() {
    ap_block_state51_pp6_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state52_pp6_stage0_iter6() {
    ap_block_state52_pp6_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state53_pp6_stage0_iter7() {
    ap_block_state53_pp6_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state54_pp6_stage0_iter8() {
    ap_block_state54_pp6_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state55_io() {
    ap_block_state55_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_5509_pp6_iter8_reg.read()) && esl_seteq<1,1,1>(output_data_1_ack_in.read(), ap_const_logic_0));
}

void sampleRNN_GRU::thread_ap_block_state55_pp6_stage0_iter9() {
    ap_block_state55_pp6_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state56_io() {
    ap_block_state56_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_5509_pp6_iter9_reg.read()) && esl_seteq<1,1,1>(output_data_1_ack_in.read(), ap_const_logic_0));
}

void sampleRNN_GRU::thread_ap_block_state56_pp6_stage0_iter10() {
    ap_block_state56_pp6_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state57() {
    ap_block_state57 = (esl_seteq<1,1,1>(output_last_1_ack_in.read(), ap_const_logic_0) || esl_seteq<1,1,1>(output_data_1_ack_in.read(), ap_const_logic_0));
}

void sampleRNN_GRU::thread_ap_block_state5_pp0_stage0_iter3() {
    ap_block_state5_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state7_pp1_stage0_iter0() {
    ap_block_state7_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_block_state8_pp1_stage0_iter1() {
    ap_block_state8_pp1_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_4547.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_out.read()));
}

void sampleRNN_GRU::thread_ap_block_state9_pp1_stage0_iter2() {
    ap_block_state9_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sampleRNN_GRU::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(exitcond1_fu_1070_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_ap_condition_pp1_exit_iter0_state7() {
    if (esl_seteq<1,1,1>(exitcond2_fu_1350_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp1_exit_iter0_state7 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state7 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_ap_condition_pp2_exit_iter0_state12() {
    if (esl_seteq<1,1,1>(exitcond3_fu_1630_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp2_exit_iter0_state12 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state12 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_ap_condition_pp3_exit_iter0_state17() {
    if (esl_seteq<1,1,1>(exitcond4_fu_1910_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp3_exit_iter0_state17 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state17 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_ap_condition_pp4_exit_iter0_state22() {
    if (esl_seteq<1,1,1>(exitcond5_fu_2190_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp4_exit_iter0_state22 = ap_const_logic_1;
    } else {
        ap_condition_pp4_exit_iter0_state22 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_ap_condition_pp5_exit_iter0_state27() {
    if (esl_seteq<1,1,1>(exitcond6_fu_2470_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp5_exit_iter0_state27 = ap_const_logic_1;
    } else {
        ap_condition_pp5_exit_iter0_state27 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_ap_condition_pp6_exit_iter0_state46() {
    if (esl_seteq<1,1,1>(exitcond_fu_4348_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp6_exit_iter0_state46 = ap_const_logic_1;
    } else {
        ap_condition_pp6_exit_iter0_state46 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void sampleRNN_GRU::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void sampleRNN_GRU::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void sampleRNN_GRU::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void sampleRNN_GRU::thread_ap_enable_pp4() {
    ap_enable_pp4 = (ap_idle_pp4.read() ^ ap_const_logic_1);
}

void sampleRNN_GRU::thread_ap_enable_pp5() {
    ap_enable_pp5 = (ap_idle_pp5.read() ^ ap_const_logic_1);
}

void sampleRNN_GRU::thread_ap_enable_pp6() {
    ap_enable_pp6 = (ap_idle_pp6.read() ^ ap_const_logic_1);
}

void sampleRNN_GRU::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter3.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter3.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter3.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_ap_idle_pp4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter3.read()))) {
        ap_idle_pp4 = ap_const_logic_1;
    } else {
        ap_idle_pp4 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_ap_idle_pp5() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter3.read()))) {
        ap_idle_pp5 = ap_const_logic_1;
    } else {
        ap_idle_pp5 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_ap_idle_pp6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter10.read()))) {
        ap_idle_pp6 = ap_const_logic_1;
    } else {
        ap_idle_pp6 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_ap_phi_mux_i_1_phi_fu_883_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_4547.read()))) {
        ap_phi_mux_i_1_phi_fu_883_p4 = i_9_reg_4551.read();
    } else {
        ap_phi_mux_i_1_phi_fu_883_p4 = i_1_reg_879.read();
    }
}

void sampleRNN_GRU::thread_ap_phi_mux_i_2_phi_fu_895_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_4612.read()))) {
        ap_phi_mux_i_2_phi_fu_895_p4 = i_10_reg_4616.read();
    } else {
        ap_phi_mux_i_2_phi_fu_895_p4 = i_2_reg_891.read();
    }
}

void sampleRNN_GRU::thread_ap_phi_mux_i_3_phi_fu_907_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_4677.read()))) {
        ap_phi_mux_i_3_phi_fu_907_p4 = i_11_reg_4681.read();
    } else {
        ap_phi_mux_i_3_phi_fu_907_p4 = i_3_reg_903.read();
    }
}

void sampleRNN_GRU::thread_ap_phi_mux_i_4_phi_fu_919_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_4742.read()))) {
        ap_phi_mux_i_4_phi_fu_919_p4 = i_12_reg_4746.read();
    } else {
        ap_phi_mux_i_4_phi_fu_919_p4 = i_4_reg_915.read();
    }
}

void sampleRNN_GRU::thread_ap_phi_mux_i_5_phi_fu_931_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_4807.read()))) {
        ap_phi_mux_i_5_phi_fu_931_p4 = i_13_reg_4811.read();
    } else {
        ap_phi_mux_i_5_phi_fu_931_p4 = i_5_reg_927.read();
    }
}

void sampleRNN_GRU::thread_ap_phi_mux_i_phi_fu_871_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_4482.read()))) {
        ap_phi_mux_i_phi_fu_871_p4 = i_8_reg_4486.read();
    } else {
        ap_phi_mux_i_phi_fu_871_p4 = i_reg_867.read();
    }
}

void sampleRNN_GRU::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void sampleRNN_GRU::thread_b_hh_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        b_hh_V_address0 =  (sc_lv<8>) (tmp_91_reg_4886.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp5_iter3.read(), ap_const_logic_1))) {
        b_hh_V_address0 =  (sc_lv<8>) (tmp_76_fu_2638_p1.read());
    } else {
        b_hh_V_address0 = "XXXXXXXX";
    }
}

void sampleRNN_GRU::thread_b_hh_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp5_iter3.read(), ap_const_logic_1)))) {
        b_hh_V_ce0 = ap_const_logic_1;
    } else {
        b_hh_V_ce0 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_b_hh_V_d0() {
    b_hh_V_d0 = (!or_cond17_fu_2735_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond17_fu_2735_p2.read()[0].to_bool())? newSel22_fu_2727_p3.read(): ap_const_lv32_0);
}

void sampleRNN_GRU::thread_b_hh_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp5_iter3.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_4807_pp5_iter2_reg.read()))) {
        b_hh_V_we0 = ap_const_logic_1;
    } else {
        b_hh_V_we0 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_b_ih_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        b_ih_V_address0 =  (sc_lv<8>) (tmp_91_reg_4886.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp4_iter3.read(), ap_const_logic_1))) {
        b_ih_V_address0 =  (sc_lv<8>) (tmp_62_fu_2358_p1.read());
    } else {
        b_ih_V_address0 = "XXXXXXXX";
    }
}

void sampleRNN_GRU::thread_b_ih_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter3.read(), ap_const_logic_1)))) {
        b_ih_V_ce0 = ap_const_logic_1;
    } else {
        b_ih_V_ce0 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_b_ih_V_d0() {
    b_ih_V_d0 = (!or_cond14_fu_2455_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond14_fu_2455_p2.read()[0].to_bool())? newSel18_fu_2447_p3.read(): ap_const_lv32_0);
}

void sampleRNN_GRU::thread_b_ih_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter3.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_4742_pp4_iter2_reg.read()))) {
        b_ih_V_we0 = ap_const_logic_1;
    } else {
        b_ih_V_we0 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_counter_1_fu_2770_p2() {
    counter_1_fu_2770_p2 = (!counter_reg_950.read().is_01() || !ap_const_lv14_40.is_01())? sc_lv<14>(): (sc_biguint<14>(counter_reg_950.read()) + sc_biguint<14>(ap_const_lv14_40));
}

void sampleRNN_GRU::thread_exitcond1_fu_1070_p2() {
    exitcond1_fu_1070_p2 = (!ap_phi_mux_i_phi_fu_871_p4.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_phi_fu_871_p4.read() == ap_const_lv7_40);
}

void sampleRNN_GRU::thread_exitcond2_fu_1350_p2() {
    exitcond2_fu_1350_p2 = (!ap_phi_mux_i_1_phi_fu_883_p4.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_1_phi_fu_883_p4.read() == ap_const_lv7_40);
}

void sampleRNN_GRU::thread_exitcond3_fu_1630_p2() {
    exitcond3_fu_1630_p2 = (!ap_phi_mux_i_2_phi_fu_895_p4.read().is_01() || !ap_const_lv14_3000.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_2_phi_fu_895_p4.read() == ap_const_lv14_3000);
}

void sampleRNN_GRU::thread_exitcond4_fu_1910_p2() {
    exitcond4_fu_1910_p2 = (!ap_phi_mux_i_3_phi_fu_907_p4.read().is_01() || !ap_const_lv14_3000.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_3_phi_fu_907_p4.read() == ap_const_lv14_3000);
}

void sampleRNN_GRU::thread_exitcond5_fu_2190_p2() {
    exitcond5_fu_2190_p2 = (!ap_phi_mux_i_4_phi_fu_919_p4.read().is_01() || !ap_const_lv8_C0.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_4_phi_fu_919_p4.read() == ap_const_lv8_C0);
}

void sampleRNN_GRU::thread_exitcond6_fu_2470_p2() {
    exitcond6_fu_2470_p2 = (!ap_phi_mux_i_5_phi_fu_931_p4.read().is_01() || !ap_const_lv8_C0.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_5_phi_fu_931_p4.read() == ap_const_lv8_C0);
}

void sampleRNN_GRU::thread_exitcond7_fu_2754_p2() {
    exitcond7_fu_2754_p2 = (!i_6_reg_939.read().is_01() || !ap_const_lv8_C0.is_01())? sc_lv<1>(): sc_lv<1>(i_6_reg_939.read() == ap_const_lv8_C0);
}

void sampleRNN_GRU::thread_exitcond8_fu_2776_p2() {
    exitcond8_fu_2776_p2 = (!j_reg_986.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(j_reg_986.read() == ap_const_lv7_40);
}

void sampleRNN_GRU::thread_exitcond_fu_4348_p2() {
    exitcond_fu_4348_p2 = (!i_7_reg_1008.read().is_01() || !ap_const_lv9_180.is_01())? sc_lv<1>(): sc_lv<1>(i_7_reg_1008.read() == ap_const_lv9_180);
}

void sampleRNN_GRU::thread_f_fu_4470_p1() {
    f_fu_4470_p1 = p_Result_8_fu_4459_p5.read();
}

void sampleRNN_GRU::thread_grp_fu_1019_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0))) {
        grp_fu_1019_ce = ap_const_logic_1;
    } else {
        grp_fu_1019_ce = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_h0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        h0_V_address0 =  (sc_lv<6>) (tmp_125_14_fu_3932_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        h0_V_address0 =  (sc_lv<6>) (tmp_125_12_fu_3740_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        h0_V_address0 =  (sc_lv<6>) (tmp_125_10_fu_3548_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        h0_V_address0 =  (sc_lv<6>) (tmp_125_9_fu_3356_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        h0_V_address0 =  (sc_lv<6>) (tmp_125_7_fu_3164_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        h0_V_address0 =  (sc_lv<6>) (tmp_125_5_fu_2970_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        h0_V_address0 =  (sc_lv<6>) (tmp_125_3_fu_2868_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        h0_V_address0 =  (sc_lv<6>) (tmp_105_fu_2788_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp1_iter3.read(), ap_const_logic_1))) {
        h0_V_address0 =  (sc_lv<6>) (tmp_7_fu_1518_p1.read());
    } else {
        h0_V_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void sampleRNN_GRU::thread_h0_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        h0_V_address1 =  (sc_lv<6>) (tmp_125_13_fu_3909_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        h0_V_address1 =  (sc_lv<6>) (tmp_125_11_fu_3717_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        h0_V_address1 =  (sc_lv<6>) (tmp_125_s_fu_3525_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        h0_V_address1 =  (sc_lv<6>) (tmp_125_8_fu_3333_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        h0_V_address1 =  (sc_lv<6>) (tmp_125_6_fu_3141_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        h0_V_address1 =  (sc_lv<6>) (tmp_125_4_fu_2947_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        h0_V_address1 =  (sc_lv<6>) (tmp_125_2_fu_2845_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        h0_V_address1 =  (sc_lv<6>) (tmp_125_1_fu_2816_p1.read());
    } else {
        h0_V_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void sampleRNN_GRU::thread_h0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp1_iter3.read(), ap_const_logic_1)))) {
        h0_V_ce0 = ap_const_logic_1;
    } else {
        h0_V_ce0 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_h0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        h0_V_ce1 = ap_const_logic_1;
    } else {
        h0_V_ce1 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_h0_V_d0() {
    h0_V_d0 = (!or_cond5_fu_1615_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond5_fu_1615_p2.read()[0].to_bool())? newSel6_fu_1607_p3.read(): ap_const_lv32_0);
}

void sampleRNN_GRU::thread_h0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp1_iter3.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_4547_pp1_iter2_reg.read()))) {
        h0_V_we0 = ap_const_logic_1;
    } else {
        h0_V_we0 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_i_10_fu_1636_p2() {
    i_10_fu_1636_p2 = (!ap_phi_mux_i_2_phi_fu_895_p4.read().is_01() || !ap_const_lv14_1.is_01())? sc_lv<14>(): (sc_biguint<14>(ap_phi_mux_i_2_phi_fu_895_p4.read()) + sc_biguint<14>(ap_const_lv14_1));
}

void sampleRNN_GRU::thread_i_11_fu_1916_p2() {
    i_11_fu_1916_p2 = (!ap_phi_mux_i_3_phi_fu_907_p4.read().is_01() || !ap_const_lv14_1.is_01())? sc_lv<14>(): (sc_biguint<14>(ap_phi_mux_i_3_phi_fu_907_p4.read()) + sc_biguint<14>(ap_const_lv14_1));
}

void sampleRNN_GRU::thread_i_12_fu_2196_p2() {
    i_12_fu_2196_p2 = (!ap_phi_mux_i_4_phi_fu_919_p4.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ap_phi_mux_i_4_phi_fu_919_p4.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void sampleRNN_GRU::thread_i_13_fu_2476_p2() {
    i_13_fu_2476_p2 = (!ap_phi_mux_i_5_phi_fu_931_p4.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ap_phi_mux_i_5_phi_fu_931_p4.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void sampleRNN_GRU::thread_i_14_fu_4354_p2() {
    i_14_fu_4354_p2 = (!i_7_reg_1008.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i_7_reg_1008.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void sampleRNN_GRU::thread_i_15_fu_2760_p2() {
    i_15_fu_2760_p2 = (!i_6_reg_939.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(i_6_reg_939.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void sampleRNN_GRU::thread_i_6_cast_fu_2750_p1() {
    i_6_cast_fu_2750_p1 = esl_zext<9,8>(i_6_reg_939.read());
}

void sampleRNN_GRU::thread_i_8_fu_1076_p2() {
    i_8_fu_1076_p2 = (!ap_phi_mux_i_phi_fu_871_p4.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ap_phi_mux_i_phi_fu_871_p4.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void sampleRNN_GRU::thread_i_9_fu_1356_p2() {
    i_9_fu_1356_p2 = (!ap_phi_mux_i_1_phi_fu_883_p4.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ap_phi_mux_i_1_phi_fu_883_p4.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void sampleRNN_GRU::thread_icmp1_fu_1477_p2() {
    icmp1_fu_1477_p2 = (!tmp_58_fu_1467_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_58_fu_1467_p4.read() == ap_const_lv7_0);
}

void sampleRNN_GRU::thread_icmp2_fu_1757_p2() {
    icmp2_fu_1757_p2 = (!tmp_90_fu_1747_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_90_fu_1747_p4.read() == ap_const_lv7_0);
}

void sampleRNN_GRU::thread_icmp3_fu_2037_p2() {
    icmp3_fu_2037_p2 = (!tmp_144_fu_2027_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_144_fu_2027_p4.read() == ap_const_lv7_0);
}

void sampleRNN_GRU::thread_icmp4_fu_2317_p2() {
    icmp4_fu_2317_p2 = (!tmp_150_fu_2307_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_150_fu_2307_p4.read() == ap_const_lv7_0);
}

void sampleRNN_GRU::thread_icmp5_fu_2597_p2() {
    icmp5_fu_2597_p2 = (!tmp_156_fu_2587_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_156_fu_2587_p4.read() == ap_const_lv7_0);
}

void sampleRNN_GRU::thread_icmp_fu_1197_p2() {
    icmp_fu_1197_p2 = (!tmp_31_fu_1187_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_31_fu_1187_p4.read() == ap_const_lv7_0);
}

void sampleRNN_GRU::thread_input_data_0_ack_in() {
    input_data_0_ack_in = input_data_0_state.read()[1];
}

void sampleRNN_GRU::thread_input_data_0_ack_out() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_4482.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_4547.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_4612.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_4677.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_4742.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_4807.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)))) {
        input_data_0_ack_out = ap_const_logic_1;
    } else {
        input_data_0_ack_out = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_input_data_0_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_data_0_sel.read())) {
        input_data_0_data_out = input_data_0_payload_B.read();
    } else {
        input_data_0_data_out = input_data_0_payload_A.read();
    }
}

void sampleRNN_GRU::thread_input_data_0_load_A() {
    input_data_0_load_A = (input_data_0_state_cmp_full.read() & ~input_data_0_sel_wr.read());
}

void sampleRNN_GRU::thread_input_data_0_load_B() {
    input_data_0_load_B = (input_data_0_sel_wr.read() & input_data_0_state_cmp_full.read());
}

void sampleRNN_GRU::thread_input_data_0_sel() {
    input_data_0_sel = input_data_0_sel_rd.read();
}

void sampleRNN_GRU::thread_input_data_0_state_cmp_full() {
    input_data_0_state_cmp_full =  (sc_logic) ((!input_data_0_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(input_data_0_state.read() != ap_const_lv2_1))[0];
}

void sampleRNN_GRU::thread_input_data_0_vld_in() {
    input_data_0_vld_in = input_r_TVALID.read();
}

void sampleRNN_GRU::thread_input_data_0_vld_out() {
    input_data_0_vld_out = input_data_0_state.read()[0];
}

void sampleRNN_GRU::thread_input_last_0_ack_out() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_4482.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_4547.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_4612.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_4677.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_4742.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_4807.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)))) {
        input_last_0_ack_out = ap_const_logic_1;
    } else {
        input_last_0_ack_out = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_input_last_0_vld_in() {
    input_last_0_vld_in = input_r_TVALID.read();
}

void sampleRNN_GRU::thread_input_r_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_4482.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_4547.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_4612.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_4677.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_4742.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_4807.read())))) {
        input_r_TDATA_blk_n = input_data_0_state.read()[0];
    } else {
        input_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void sampleRNN_GRU::thread_input_r_TREADY() {
    input_r_TREADY = input_last_0_state.read()[1];
}

void sampleRNN_GRU::thread_ireg_V_1_fu_1362_p1() {
    ireg_V_1_fu_1362_p1 = grp_fu_1022_p1.read();
}

void sampleRNN_GRU::thread_ireg_V_2_fu_1642_p1() {
    ireg_V_2_fu_1642_p1 = grp_fu_1022_p1.read();
}

void sampleRNN_GRU::thread_ireg_V_3_fu_1922_p1() {
    ireg_V_3_fu_1922_p1 = grp_fu_1022_p1.read();
}

void sampleRNN_GRU::thread_ireg_V_4_fu_2202_p1() {
    ireg_V_4_fu_2202_p1 = grp_fu_1022_p1.read();
}

void sampleRNN_GRU::thread_ireg_V_5_fu_2482_p1() {
    ireg_V_5_fu_2482_p1 = grp_fu_1022_p1.read();
}

void sampleRNN_GRU::thread_ireg_V_fu_1082_p1() {
    ireg_V_fu_1082_p1 = grp_fu_1022_p1.read();
}

void sampleRNN_GRU::thread_j_1_10_fu_3537_p2() {
    j_1_10_fu_3537_p2 = (tmp_160_reg_4921.read() | ap_const_lv6_B);
}

void sampleRNN_GRU::thread_j_1_11_fu_3706_p2() {
    j_1_11_fu_3706_p2 = (tmp_160_reg_4921.read() | ap_const_lv6_C);
}

void sampleRNN_GRU::thread_j_1_12_fu_3729_p2() {
    j_1_12_fu_3729_p2 = (tmp_160_reg_4921.read() | ap_const_lv6_D);
}

void sampleRNN_GRU::thread_j_1_13_fu_3898_p2() {
    j_1_13_fu_3898_p2 = (tmp_160_reg_4921.read() | ap_const_lv6_E);
}

void sampleRNN_GRU::thread_j_1_14_fu_3921_p2() {
    j_1_14_fu_3921_p2 = (tmp_160_reg_4921.read() | ap_const_lv6_F);
}

void sampleRNN_GRU::thread_j_1_15_fu_2822_p2() {
    j_1_15_fu_2822_p2 = (!ap_const_lv7_10.is_01() || !j_reg_986.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_10) + sc_biguint<7>(j_reg_986.read()));
}

void sampleRNN_GRU::thread_j_1_1_fu_2834_p2() {
    j_1_1_fu_2834_p2 = (tmp_160_reg_4921.read() | ap_const_lv6_2);
}

void sampleRNN_GRU::thread_j_1_2_fu_2857_p2() {
    j_1_2_fu_2857_p2 = (tmp_160_reg_4921.read() | ap_const_lv6_3);
}

void sampleRNN_GRU::thread_j_1_3_fu_2936_p2() {
    j_1_3_fu_2936_p2 = (tmp_160_reg_4921.read() | ap_const_lv6_4);
}

void sampleRNN_GRU::thread_j_1_4_fu_2959_p2() {
    j_1_4_fu_2959_p2 = (tmp_160_reg_4921.read() | ap_const_lv6_5);
}

void sampleRNN_GRU::thread_j_1_5_fu_3130_p2() {
    j_1_5_fu_3130_p2 = (tmp_160_reg_4921.read() | ap_const_lv6_6);
}

void sampleRNN_GRU::thread_j_1_6_fu_3153_p2() {
    j_1_6_fu_3153_p2 = (tmp_160_reg_4921.read() | ap_const_lv6_7);
}

void sampleRNN_GRU::thread_j_1_7_fu_3322_p2() {
    j_1_7_fu_3322_p2 = (tmp_160_reg_4921.read() | ap_const_lv6_8);
}

void sampleRNN_GRU::thread_j_1_8_fu_3345_p2() {
    j_1_8_fu_3345_p2 = (tmp_160_reg_4921.read() | ap_const_lv6_9);
}

void sampleRNN_GRU::thread_j_1_9_fu_3514_p2() {
    j_1_9_fu_3514_p2 = (tmp_160_reg_4921.read() | ap_const_lv6_A);
}

void sampleRNN_GRU::thread_j_1_s_fu_2804_p2() {
    j_1_s_fu_2804_p2 = (tmp_160_fu_2800_p1.read() | ap_const_lv6_1);
}

void sampleRNN_GRU::thread_last_address0() {
    last_address0 =  (sc_lv<9>) (tmp_94_fu_4360_p1.read());
}

void sampleRNN_GRU::thread_last_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1))) {
        last_ce0 = ap_const_logic_1;
    } else {
        last_ce0 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_man_V_10_fu_1972_p2() {
    man_V_10_fu_1972_p2 = (!ap_const_lv54_0.is_01() || !p_Result_3_fu_1968_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_3_fu_1968_p1.read()));
}

void sampleRNN_GRU::thread_man_V_11_fu_1978_p3() {
    man_V_11_fu_1978_p3 = (!isneg_3_reg_4686.read()[0].is_01())? sc_lv<54>(): ((isneg_3_reg_4686.read()[0].to_bool())? man_V_10_fu_1972_p2.read(): p_Result_3_fu_1968_p1.read());
}

void sampleRNN_GRU::thread_man_V_13_fu_2252_p2() {
    man_V_13_fu_2252_p2 = (!ap_const_lv54_0.is_01() || !p_Result_5_fu_2248_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_5_fu_2248_p1.read()));
}

void sampleRNN_GRU::thread_man_V_14_fu_2258_p3() {
    man_V_14_fu_2258_p3 = (!isneg_4_reg_4751.read()[0].is_01())? sc_lv<54>(): ((isneg_4_reg_4751.read()[0].to_bool())? man_V_13_fu_2252_p2.read(): p_Result_5_fu_2248_p1.read());
}

void sampleRNN_GRU::thread_man_V_16_fu_2532_p2() {
    man_V_16_fu_2532_p2 = (!ap_const_lv54_0.is_01() || !p_Result_6_fu_2528_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_6_fu_2528_p1.read()));
}

void sampleRNN_GRU::thread_man_V_17_fu_2538_p3() {
    man_V_17_fu_2538_p3 = (!isneg_5_reg_4816.read()[0].is_01())? sc_lv<54>(): ((isneg_5_reg_4816.read()[0].to_bool())? man_V_16_fu_2532_p2.read(): p_Result_6_fu_2528_p1.read());
}

void sampleRNN_GRU::thread_man_V_1_fu_1132_p2() {
    man_V_1_fu_1132_p2 = (!ap_const_lv54_0.is_01() || !p_Result_s_fu_1128_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_s_fu_1128_p1.read()));
}

void sampleRNN_GRU::thread_man_V_2_fu_1138_p3() {
    man_V_2_fu_1138_p3 = (!isneg_reg_4491.read()[0].is_01())? sc_lv<54>(): ((isneg_reg_4491.read()[0].to_bool())? man_V_1_fu_1132_p2.read(): p_Result_s_fu_1128_p1.read());
}

void sampleRNN_GRU::thread_man_V_4_fu_1412_p2() {
    man_V_4_fu_1412_p2 = (!ap_const_lv54_0.is_01() || !p_Result_1_fu_1408_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_1_fu_1408_p1.read()));
}

void sampleRNN_GRU::thread_man_V_5_fu_1418_p3() {
    man_V_5_fu_1418_p3 = (!isneg_1_reg_4556.read()[0].is_01())? sc_lv<54>(): ((isneg_1_reg_4556.read()[0].to_bool())? man_V_4_fu_1412_p2.read(): p_Result_1_fu_1408_p1.read());
}

void sampleRNN_GRU::thread_man_V_7_fu_1692_p2() {
    man_V_7_fu_1692_p2 = (!ap_const_lv54_0.is_01() || !p_Result_2_fu_1688_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_2_fu_1688_p1.read()));
}

void sampleRNN_GRU::thread_man_V_8_fu_1698_p3() {
    man_V_8_fu_1698_p3 = (!isneg_2_reg_4621.read()[0].is_01())? sc_lv<54>(): ((isneg_2_reg_4621.read()[0].to_bool())? man_V_7_fu_1692_p2.read(): p_Result_2_fu_1688_p1.read());
}

void sampleRNN_GRU::thread_newSel10_fu_1887_p3() {
    newSel10_fu_1887_p3 = (!or_cond6_fu_1869_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond6_fu_1869_p2.read()[0].to_bool())? newSel8_fu_1862_p3.read(): newSel9_fu_1874_p3.read());
}

void sampleRNN_GRU::thread_newSel12_fu_2142_p3() {
    newSel12_fu_2142_p3 = (!sel_tmp35_reg_4736.read()[0].is_01())? sc_lv<32>(): ((sel_tmp35_reg_4736.read()[0].to_bool())? tmp_59_fu_2111_p2.read(): tmp_145_fu_2100_p1.read());
}

void sampleRNN_GRU::thread_newSel13_fu_2154_p3() {
    newSel13_fu_2154_p3 = (!sel_tmp32_fu_2132_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp32_fu_2132_p2.read()[0].to_bool())? storemerge6_fu_2104_p3.read(): tmp_143_reg_4724.read());
}

void sampleRNN_GRU::thread_newSel14_fu_2167_p3() {
    newSel14_fu_2167_p3 = (!or_cond9_fu_2149_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond9_fu_2149_p2.read()[0].to_bool())? newSel12_fu_2142_p3.read(): newSel13_fu_2154_p3.read());
}

void sampleRNN_GRU::thread_newSel16_fu_2422_p3() {
    newSel16_fu_2422_p3 = (!sel_tmp44_reg_4801.read()[0].is_01())? sc_lv<32>(): ((sel_tmp44_reg_4801.read()[0].to_bool())? tmp_74_fu_2391_p2.read(): tmp_151_fu_2380_p1.read());
}

void sampleRNN_GRU::thread_newSel17_fu_2434_p3() {
    newSel17_fu_2434_p3 = (!sel_tmp41_fu_2412_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp41_fu_2412_p2.read()[0].to_bool())? storemerge8_fu_2384_p3.read(): tmp_149_reg_4789.read());
}

void sampleRNN_GRU::thread_newSel18_fu_2447_p3() {
    newSel18_fu_2447_p3 = (!or_cond12_fu_2429_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond12_fu_2429_p2.read()[0].to_bool())? newSel16_fu_2422_p3.read(): newSel17_fu_2434_p3.read());
}

void sampleRNN_GRU::thread_newSel1_fu_1314_p3() {
    newSel1_fu_1314_p3 = (!sel_tmp9_fu_1292_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp9_fu_1292_p2.read()[0].to_bool())? storemerge_fu_1264_p3.read(): tmp_24_reg_4529.read());
}

void sampleRNN_GRU::thread_newSel20_fu_2702_p3() {
    newSel20_fu_2702_p3 = (!sel_tmp53_reg_4866.read()[0].is_01())? sc_lv<32>(): ((sel_tmp53_reg_4866.read()[0].to_bool())? tmp_89_fu_2671_p2.read(): tmp_157_fu_2660_p1.read());
}

void sampleRNN_GRU::thread_newSel21_fu_2714_p3() {
    newSel21_fu_2714_p3 = (!sel_tmp50_fu_2692_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp50_fu_2692_p2.read()[0].to_bool())? storemerge1_fu_2664_p3.read(): tmp_155_reg_4854.read());
}

void sampleRNN_GRU::thread_newSel22_fu_2727_p3() {
    newSel22_fu_2727_p3 = (!or_cond15_fu_2709_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond15_fu_2709_p2.read()[0].to_bool())? newSel20_fu_2702_p3.read(): newSel21_fu_2714_p3.read());
}

void sampleRNN_GRU::thread_newSel2_fu_1327_p3() {
    newSel2_fu_1327_p3 = (!or_cond_fu_1309_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond_fu_1309_p2.read()[0].to_bool())? newSel_fu_1302_p3.read(): newSel1_fu_1314_p3.read());
}

void sampleRNN_GRU::thread_newSel4_fu_1582_p3() {
    newSel4_fu_1582_p3 = (!sel_tmp17_reg_4606.read()[0].is_01())? sc_lv<32>(): ((sel_tmp17_reg_4606.read()[0].to_bool())? tmp_33_fu_1551_p2.read(): tmp_61_fu_1540_p1.read());
}

void sampleRNN_GRU::thread_newSel5_fu_1594_p3() {
    newSel5_fu_1594_p3 = (!sel_tmp14_fu_1572_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp14_fu_1572_p2.read()[0].to_bool())? storemerge2_fu_1544_p3.read(): tmp_56_reg_4594.read());
}

void sampleRNN_GRU::thread_newSel6_fu_1607_p3() {
    newSel6_fu_1607_p3 = (!or_cond3_fu_1589_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond3_fu_1589_p2.read()[0].to_bool())? newSel4_fu_1582_p3.read(): newSel5_fu_1594_p3.read());
}

void sampleRNN_GRU::thread_newSel8_fu_1862_p3() {
    newSel8_fu_1862_p3 = (!sel_tmp26_reg_4671.read()[0].is_01())? sc_lv<32>(): ((sel_tmp26_reg_4671.read()[0].to_bool())? tmp_43_fu_1831_p2.read(): tmp_93_fu_1820_p1.read());
}

void sampleRNN_GRU::thread_newSel9_fu_1874_p3() {
    newSel9_fu_1874_p3 = (!sel_tmp23_fu_1852_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp23_fu_1852_p2.read()[0].to_bool())? storemerge4_fu_1824_p3.read(): tmp_88_reg_4659.read());
}

void sampleRNN_GRU::thread_newSel_fu_1302_p3() {
    newSel_fu_1302_p3 = (!sel_tmp4_reg_4541.read()[0].is_01())? sc_lv<32>(): ((sel_tmp4_reg_4541.read()[0].to_bool())? tmp_17_fu_1271_p2.read(): tmp_34_fu_1260_p1.read());
}

void sampleRNN_GRU::thread_num_zeros_fu_4400_p3() {
    num_zeros_fu_4400_p3 = esl_cttz<32,32>(p_Result_7_fu_4390_p4.read());
}

void sampleRNN_GRU::thread_or_cond10_fu_2161_p2() {
    or_cond10_fu_2161_p2 = (sel_tmp32_fu_2132_p2.read() | sel_tmp28_fu_2121_p2.read());
}

void sampleRNN_GRU::thread_or_cond11_fu_2175_p2() {
    or_cond11_fu_2175_p2 = (or_cond9_fu_2149_p2.read() | or_cond10_fu_2161_p2.read());
}

void sampleRNN_GRU::thread_or_cond12_fu_2429_p2() {
    or_cond12_fu_2429_p2 = (sel_tmp44_reg_4801.read() | sel_tmp42_fu_2417_p2.read());
}

void sampleRNN_GRU::thread_or_cond13_fu_2441_p2() {
    or_cond13_fu_2441_p2 = (sel_tmp41_fu_2412_p2.read() | sel_tmp37_fu_2401_p2.read());
}

void sampleRNN_GRU::thread_or_cond14_fu_2455_p2() {
    or_cond14_fu_2455_p2 = (or_cond12_fu_2429_p2.read() | or_cond13_fu_2441_p2.read());
}

void sampleRNN_GRU::thread_or_cond15_fu_2709_p2() {
    or_cond15_fu_2709_p2 = (sel_tmp53_reg_4866.read() | sel_tmp51_fu_2697_p2.read());
}

void sampleRNN_GRU::thread_or_cond16_fu_2721_p2() {
    or_cond16_fu_2721_p2 = (sel_tmp50_fu_2692_p2.read() | sel_tmp46_fu_2681_p2.read());
}

void sampleRNN_GRU::thread_or_cond17_fu_2735_p2() {
    or_cond17_fu_2735_p2 = (or_cond15_fu_2709_p2.read() | or_cond16_fu_2721_p2.read());
}

void sampleRNN_GRU::thread_or_cond1_fu_1321_p2() {
    or_cond1_fu_1321_p2 = (sel_tmp9_fu_1292_p2.read() | sel_tmp2_fu_1281_p2.read());
}

void sampleRNN_GRU::thread_or_cond2_fu_1335_p2() {
    or_cond2_fu_1335_p2 = (or_cond_fu_1309_p2.read() | or_cond1_fu_1321_p2.read());
}

void sampleRNN_GRU::thread_or_cond3_fu_1589_p2() {
    or_cond3_fu_1589_p2 = (sel_tmp17_reg_4606.read() | sel_tmp15_fu_1577_p2.read());
}

void sampleRNN_GRU::thread_or_cond4_fu_1601_p2() {
    or_cond4_fu_1601_p2 = (sel_tmp14_fu_1572_p2.read() | sel_tmp10_fu_1561_p2.read());
}

void sampleRNN_GRU::thread_or_cond5_fu_1615_p2() {
    or_cond5_fu_1615_p2 = (or_cond3_fu_1589_p2.read() | or_cond4_fu_1601_p2.read());
}

void sampleRNN_GRU::thread_or_cond6_fu_1869_p2() {
    or_cond6_fu_1869_p2 = (sel_tmp26_reg_4671.read() | sel_tmp24_fu_1857_p2.read());
}

void sampleRNN_GRU::thread_or_cond7_fu_1881_p2() {
    or_cond7_fu_1881_p2 = (sel_tmp23_fu_1852_p2.read() | sel_tmp19_fu_1841_p2.read());
}

void sampleRNN_GRU::thread_or_cond8_fu_1895_p2() {
    or_cond8_fu_1895_p2 = (or_cond6_fu_1869_p2.read() | or_cond7_fu_1881_p2.read());
}

void sampleRNN_GRU::thread_or_cond9_fu_2149_p2() {
    or_cond9_fu_2149_p2 = (sel_tmp35_reg_4736.read() | sel_tmp33_fu_2137_p2.read());
}

void sampleRNN_GRU::thread_or_cond_fu_1309_p2() {
    or_cond_fu_1309_p2 = (sel_tmp4_reg_4541.read() | sel_tmp_fu_1297_p2.read());
}

void sampleRNN_GRU::thread_out1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1))) {
        out1_V_address0 =  (sc_lv<9>) (tmp_94_fu_4360_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        out1_V_address0 =  (sc_lv<9>) (tmp_91_reg_4886.read());
    } else {
        out1_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void sampleRNN_GRU::thread_out1_V_address1() {
    out1_V_address1 =  (sc_lv<9>) (tmp_103_fu_4337_p1.read());
}

void sampleRNN_GRU::thread_out1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        out1_V_ce0 = ap_const_logic_1;
    } else {
        out1_V_ce0 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_out1_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        out1_V_ce1 = ap_const_logic_1;
    } else {
        out1_V_ce1 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_out1_V_d0() {
    out1_V_d0 = (!p_Val2_19_reg_5499.read().is_01() || !p_Val2_9_reg_962.read().is_01())? sc_lv<32>(): (sc_biguint<32>(p_Val2_19_reg_5499.read()) + sc_biguint<32>(p_Val2_9_reg_962.read()));
}

void sampleRNN_GRU::thread_out1_V_d1() {
    out1_V_d1 = (!p_Val2_20_reg_5504.read().is_01() || !p_Val2_6_reg_974.read().is_01())? sc_lv<32>(): (sc_biguint<32>(p_Val2_20_reg_5504.read()) + sc_biguint<32>(p_Val2_6_reg_974.read()));
}

void sampleRNN_GRU::thread_out1_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        out1_V_we0 = ap_const_logic_1;
    } else {
        out1_V_we0 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_out1_V_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        out1_V_we1 = ap_const_logic_1;
    } else {
        out1_V_we1 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_output_data_1_ack_in() {
    output_data_1_ack_in = output_data_1_state.read()[1];
}

void sampleRNN_GRU::thread_output_data_1_ack_out() {
    output_data_1_ack_out = output_r_TREADY.read();
}

void sampleRNN_GRU::thread_output_data_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, output_data_1_sel.read())) {
        output_data_1_data_out = output_data_1_payload_B.read();
    } else {
        output_data_1_data_out = output_data_1_payload_A.read();
    }
}

void sampleRNN_GRU::thread_output_data_1_load_A() {
    output_data_1_load_A = (output_data_1_state_cmp_full.read() & ~output_data_1_sel_wr.read());
}

void sampleRNN_GRU::thread_output_data_1_load_B() {
    output_data_1_load_B = (output_data_1_sel_wr.read() & output_data_1_state_cmp_full.read());
}

void sampleRNN_GRU::thread_output_data_1_sel() {
    output_data_1_sel = output_data_1_sel_rd.read();
}

void sampleRNN_GRU::thread_output_data_1_state_cmp_full() {
    output_data_1_state_cmp_full =  (sc_logic) ((!output_data_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(output_data_1_state.read() != ap_const_lv2_1))[0];
}

void sampleRNN_GRU::thread_output_data_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_5509_pp6_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0))) {
        output_data_1_vld_in = ap_const_logic_1;
    } else {
        output_data_1_vld_in = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_output_data_1_vld_out() {
    output_data_1_vld_out = output_data_1_state.read()[0];
}

void sampleRNN_GRU::thread_output_last_1_ack_in() {
    output_last_1_ack_in = output_last_1_state.read()[1];
}

void sampleRNN_GRU::thread_output_last_1_ack_out() {
    output_last_1_ack_out = output_r_TREADY.read();
}

void sampleRNN_GRU::thread_output_last_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, output_last_1_sel.read())) {
        output_last_1_data_out = output_last_1_payload_B.read();
    } else {
        output_last_1_data_out = output_last_1_payload_A.read();
    }
}

void sampleRNN_GRU::thread_output_last_1_load_A() {
    output_last_1_load_A = (output_last_1_state_cmp_full.read() & ~output_last_1_sel_wr.read());
}

void sampleRNN_GRU::thread_output_last_1_load_B() {
    output_last_1_load_B = (output_last_1_sel_wr.read() & output_last_1_state_cmp_full.read());
}

void sampleRNN_GRU::thread_output_last_1_sel() {
    output_last_1_sel = output_last_1_sel_rd.read();
}

void sampleRNN_GRU::thread_output_last_1_state_cmp_full() {
    output_last_1_state_cmp_full =  (sc_logic) ((!output_last_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(output_last_1_state.read() != ap_const_lv2_1))[0];
}

void sampleRNN_GRU::thread_output_last_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_5509_pp6_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0))) {
        output_last_1_vld_in = ap_const_logic_1;
    } else {
        output_last_1_vld_in = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_output_last_1_vld_out() {
    output_last_1_vld_out = output_last_1_state.read()[0];
}

void sampleRNN_GRU::thread_output_r_TDATA() {
    output_r_TDATA = output_data_1_data_out.read();
}

void sampleRNN_GRU::thread_output_r_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_5509_pp6_iter8_reg.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp6_iter10.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_5509_pp6_iter9_reg.read())))) {
        output_r_TDATA_blk_n = output_data_1_state.read()[1];
    } else {
        output_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void sampleRNN_GRU::thread_output_r_TLAST() {
    output_r_TLAST = output_last_1_data_out.read();
}

void sampleRNN_GRU::thread_output_r_TVALID() {
    output_r_TVALID = output_last_1_state.read()[0];
}

void sampleRNN_GRU::thread_p_03_i_fu_4474_p3() {
    p_03_i_fu_4474_p3 = (!tmp_95_reg_5550_pp6_iter8_reg.read()[0].is_01())? sc_lv<32>(): ((tmp_95_reg_5550_pp6_iter8_reg.read()[0].to_bool())? ap_const_lv32_0: f_fu_4470_p1.read());
}

void sampleRNN_GRU::thread_p_Repl2_1_trunc_fu_4446_p2() {
    p_Repl2_1_trunc_fu_4446_p2 = (!tmp_98_fu_4438_p2.read().is_01() || !tmp_99_fu_4443_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_98_fu_4438_p2.read()) + sc_biguint<8>(tmp_99_fu_4443_p1.read()));
}

void sampleRNN_GRU::thread_p_Result_1_fu_1408_p1() {
    p_Result_1_fu_1408_p1 = esl_zext<54,53>(tmp_13_fu_1401_p3.read());
}

void sampleRNN_GRU::thread_p_Result_2_fu_1688_p1() {
    p_Result_2_fu_1688_p1 = esl_zext<54,53>(tmp_28_fu_1681_p3.read());
}

void sampleRNN_GRU::thread_p_Result_3_fu_1968_p1() {
    p_Result_3_fu_1968_p1 = esl_zext<54,53>(tmp_47_fu_1961_p3.read());
}

void sampleRNN_GRU::thread_p_Result_4_fu_4422_p4() {
    p_Result_4_fu_4422_p4 = tmp32_V_fu_4418_p1.read().range(30, 23);
}

void sampleRNN_GRU::thread_p_Result_5_fu_2248_p1() {
    p_Result_5_fu_2248_p1 = esl_zext<54,53>(tmp_64_fu_2241_p3.read());
}

void sampleRNN_GRU::thread_p_Result_6_fu_2528_p1() {
    p_Result_6_fu_2528_p1 = esl_zext<54,53>(tmp_79_fu_2521_p3.read());
}

void sampleRNN_GRU::thread_p_Result_7_fu_4390_p4() {
    p_Result_7_fu_4390_p4 = p_Val2_s_35_fu_4385_p3.read().range(0, 31);
}

void sampleRNN_GRU::thread_p_Result_8_fu_4459_p5() {
    p_Result_8_fu_4459_p5 = esl_partset<32,32,9,32,32>(tmp32_V_reg_5565.read(), tmp_100_fu_4452_p3.read(), ap_const_lv32_17, ap_const_lv32_1F);
}

void sampleRNN_GRU::thread_p_Result_s_fu_1128_p1() {
    p_Result_s_fu_1128_p1 = esl_zext<54,53>(tmp_s_fu_1121_p3.read());
}

void sampleRNN_GRU::thread_p_Val2_11_fu_2984_p2() {
    p_Val2_11_fu_2984_p2 = (!p_Val2_8_reg_5014.read().is_01() || !tmp_106_fu_2976_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_8_reg_5014.read()) + sc_biguint<48>(tmp_106_fu_2976_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_12_fu_2896_p0() {
    p_Val2_12_fu_2896_p0 = reg_1045.read();
}

void sampleRNN_GRU::thread_p_Val2_12_fu_2896_p1() {
    p_Val2_12_fu_2896_p1 = reg_1040.read();
}

void sampleRNN_GRU::thread_p_Val2_12_fu_2896_p2() {
    p_Val2_12_fu_2896_p2 = (!p_Val2_12_fu_2896_p0.read().is_01() || !p_Val2_12_fu_2896_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_12_fu_2896_p0.read()) * sc_bigint<32>(p_Val2_12_fu_2896_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_13_fu_2997_p2() {
    p_Val2_13_fu_2997_p2 = (!p_Val2_12_reg_5019.read().is_01() || !tmp_107_fu_2989_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_12_reg_5019.read()) + sc_biguint<48>(tmp_107_fu_2989_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_19_10_fu_3872_p0() {
    p_Val2_19_10_fu_3872_p0 = reg_1055.read();
}

void sampleRNN_GRU::thread_p_Val2_19_10_fu_3872_p1() {
    p_Val2_19_10_fu_3872_p1 = reg_1050.read();
}

void sampleRNN_GRU::thread_p_Val2_19_10_fu_3872_p2() {
    p_Val2_19_10_fu_3872_p2 = (!p_Val2_19_10_fu_3872_p0.read().is_01() || !p_Val2_19_10_fu_3872_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_19_10_fu_3872_p0.read()) * sc_bigint<32>(p_Val2_19_10_fu_3872_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_19_11_fu_4022_p0() {
    p_Val2_19_11_fu_4022_p0 = reg_1035.read();
}

void sampleRNN_GRU::thread_p_Val2_19_11_fu_4022_p1() {
    p_Val2_19_11_fu_4022_p1 = reg_1030.read();
}

void sampleRNN_GRU::thread_p_Val2_19_11_fu_4022_p2() {
    p_Val2_19_11_fu_4022_p2 = (!p_Val2_19_11_fu_4022_p0.read().is_01() || !p_Val2_19_11_fu_4022_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_19_11_fu_4022_p0.read()) * sc_bigint<32>(p_Val2_19_11_fu_4022_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_19_12_fu_4070_p0() {
    p_Val2_19_12_fu_4070_p0 = reg_1055.read();
}

void sampleRNN_GRU::thread_p_Val2_19_12_fu_4070_p1() {
    p_Val2_19_12_fu_4070_p1 = reg_1050.read();
}

void sampleRNN_GRU::thread_p_Val2_19_12_fu_4070_p2() {
    p_Val2_19_12_fu_4070_p2 = (!p_Val2_19_12_fu_4070_p0.read().is_01() || !p_Val2_19_12_fu_4070_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_19_12_fu_4070_p0.read()) * sc_bigint<32>(p_Val2_19_12_fu_4070_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_19_13_fu_4168_p0() {
    p_Val2_19_13_fu_4168_p0 = reg_1035.read();
}

void sampleRNN_GRU::thread_p_Val2_19_13_fu_4168_p1() {
    p_Val2_19_13_fu_4168_p1 = reg_1030.read();
}

void sampleRNN_GRU::thread_p_Val2_19_13_fu_4168_p2() {
    p_Val2_19_13_fu_4168_p2 = (!p_Val2_19_13_fu_4168_p0.read().is_01() || !p_Val2_19_13_fu_4168_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_19_13_fu_4168_p0.read()) * sc_bigint<32>(p_Val2_19_13_fu_4168_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_19_14_fu_4216_p0() {
    p_Val2_19_14_fu_4216_p0 = reg_1055.read();
}

void sampleRNN_GRU::thread_p_Val2_19_14_fu_4216_p1() {
    p_Val2_19_14_fu_4216_p1 = reg_1050.read();
}

void sampleRNN_GRU::thread_p_Val2_19_14_fu_4216_p2() {
    p_Val2_19_14_fu_4216_p2 = (!p_Val2_19_14_fu_4216_p0.read().is_01() || !p_Val2_19_14_fu_4216_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_19_14_fu_4216_p0.read()) * sc_bigint<32>(p_Val2_19_14_fu_4216_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_19_1_fu_2910_p0() {
    p_Val2_19_1_fu_2910_p0 = reg_1055.read();
}

void sampleRNN_GRU::thread_p_Val2_19_1_fu_2910_p1() {
    p_Val2_19_1_fu_2910_p1 = reg_1050.read();
}

void sampleRNN_GRU::thread_p_Val2_19_1_fu_2910_p2() {
    p_Val2_19_1_fu_2910_p2 = (!p_Val2_19_1_fu_2910_p0.read().is_01() || !p_Val2_19_1_fu_2910_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_19_1_fu_2910_p0.read()) * sc_bigint<32>(p_Val2_19_1_fu_2910_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_19_2_fu_3056_p0() {
    p_Val2_19_2_fu_3056_p0 = reg_1035.read();
}

void sampleRNN_GRU::thread_p_Val2_19_2_fu_3056_p1() {
    p_Val2_19_2_fu_3056_p1 = reg_1030.read();
}

void sampleRNN_GRU::thread_p_Val2_19_2_fu_3056_p2() {
    p_Val2_19_2_fu_3056_p2 = (!p_Val2_19_2_fu_3056_p0.read().is_01() || !p_Val2_19_2_fu_3056_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_19_2_fu_3056_p0.read()) * sc_bigint<32>(p_Val2_19_2_fu_3056_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_19_3_fu_3104_p0() {
    p_Val2_19_3_fu_3104_p0 = reg_1055.read();
}

void sampleRNN_GRU::thread_p_Val2_19_3_fu_3104_p1() {
    p_Val2_19_3_fu_3104_p1 = reg_1050.read();
}

void sampleRNN_GRU::thread_p_Val2_19_3_fu_3104_p2() {
    p_Val2_19_3_fu_3104_p2 = (!p_Val2_19_3_fu_3104_p0.read().is_01() || !p_Val2_19_3_fu_3104_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_19_3_fu_3104_p0.read()) * sc_bigint<32>(p_Val2_19_3_fu_3104_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_19_4_fu_3248_p0() {
    p_Val2_19_4_fu_3248_p0 = reg_1035.read();
}

void sampleRNN_GRU::thread_p_Val2_19_4_fu_3248_p1() {
    p_Val2_19_4_fu_3248_p1 = reg_1030.read();
}

void sampleRNN_GRU::thread_p_Val2_19_4_fu_3248_p2() {
    p_Val2_19_4_fu_3248_p2 = (!p_Val2_19_4_fu_3248_p0.read().is_01() || !p_Val2_19_4_fu_3248_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_19_4_fu_3248_p0.read()) * sc_bigint<32>(p_Val2_19_4_fu_3248_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_19_5_fu_3296_p0() {
    p_Val2_19_5_fu_3296_p0 = reg_1055.read();
}

void sampleRNN_GRU::thread_p_Val2_19_5_fu_3296_p1() {
    p_Val2_19_5_fu_3296_p1 = reg_1050.read();
}

void sampleRNN_GRU::thread_p_Val2_19_5_fu_3296_p2() {
    p_Val2_19_5_fu_3296_p2 = (!p_Val2_19_5_fu_3296_p0.read().is_01() || !p_Val2_19_5_fu_3296_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_19_5_fu_3296_p0.read()) * sc_bigint<32>(p_Val2_19_5_fu_3296_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_19_6_fu_3440_p0() {
    p_Val2_19_6_fu_3440_p0 = reg_1035.read();
}

void sampleRNN_GRU::thread_p_Val2_19_6_fu_3440_p1() {
    p_Val2_19_6_fu_3440_p1 = reg_1030.read();
}

void sampleRNN_GRU::thread_p_Val2_19_6_fu_3440_p2() {
    p_Val2_19_6_fu_3440_p2 = (!p_Val2_19_6_fu_3440_p0.read().is_01() || !p_Val2_19_6_fu_3440_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_19_6_fu_3440_p0.read()) * sc_bigint<32>(p_Val2_19_6_fu_3440_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_19_7_fu_3488_p0() {
    p_Val2_19_7_fu_3488_p0 = reg_1055.read();
}

void sampleRNN_GRU::thread_p_Val2_19_7_fu_3488_p1() {
    p_Val2_19_7_fu_3488_p1 = reg_1050.read();
}

void sampleRNN_GRU::thread_p_Val2_19_7_fu_3488_p2() {
    p_Val2_19_7_fu_3488_p2 = (!p_Val2_19_7_fu_3488_p0.read().is_01() || !p_Val2_19_7_fu_3488_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_19_7_fu_3488_p0.read()) * sc_bigint<32>(p_Val2_19_7_fu_3488_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_19_8_fu_3632_p0() {
    p_Val2_19_8_fu_3632_p0 = reg_1035.read();
}

void sampleRNN_GRU::thread_p_Val2_19_8_fu_3632_p1() {
    p_Val2_19_8_fu_3632_p1 = reg_1030.read();
}

void sampleRNN_GRU::thread_p_Val2_19_8_fu_3632_p2() {
    p_Val2_19_8_fu_3632_p2 = (!p_Val2_19_8_fu_3632_p0.read().is_01() || !p_Val2_19_8_fu_3632_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_19_8_fu_3632_p0.read()) * sc_bigint<32>(p_Val2_19_8_fu_3632_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_19_9_fu_3680_p0() {
    p_Val2_19_9_fu_3680_p0 = reg_1055.read();
}

void sampleRNN_GRU::thread_p_Val2_19_9_fu_3680_p1() {
    p_Val2_19_9_fu_3680_p1 = reg_1050.read();
}

void sampleRNN_GRU::thread_p_Val2_19_9_fu_3680_p2() {
    p_Val2_19_9_fu_3680_p2 = (!p_Val2_19_9_fu_3680_p0.read().is_01() || !p_Val2_19_9_fu_3680_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_19_9_fu_3680_p0.read()) * sc_bigint<32>(p_Val2_19_9_fu_3680_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_19_s_fu_3824_p0() {
    p_Val2_19_s_fu_3824_p0 = reg_1035.read();
}

void sampleRNN_GRU::thread_p_Val2_19_s_fu_3824_p1() {
    p_Val2_19_s_fu_3824_p1 = reg_1030.read();
}

void sampleRNN_GRU::thread_p_Val2_19_s_fu_3824_p2() {
    p_Val2_19_s_fu_3824_p2 = (!p_Val2_19_s_fu_3824_p0.read().is_01() || !p_Val2_19_s_fu_3824_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_19_s_fu_3824_p0.read()) * sc_bigint<32>(p_Val2_19_s_fu_3824_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_20_10_fu_3986_p2() {
    p_Val2_20_10_fu_3986_p2 = (!p_Val2_19_10_reg_5374.read().is_01() || !tmp_127_10_fu_3978_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_19_10_reg_5374.read()) + sc_biguint<48>(tmp_127_10_fu_3978_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_20_11_fu_4097_p2() {
    p_Val2_20_11_fu_4097_p2 = (!p_Val2_19_11_reg_5429.read().is_01() || !tmp_127_11_fu_4090_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_19_11_reg_5429.read()) + sc_biguint<48>(tmp_127_11_fu_4090_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_20_12_fu_4132_p2() {
    p_Val2_20_12_fu_4132_p2 = (!p_Val2_19_12_reg_5449.read().is_01() || !tmp_127_12_fu_4124_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_19_12_reg_5449.read()) + sc_biguint<48>(tmp_127_12_fu_4124_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_20_13_fu_4243_p2() {
    p_Val2_20_13_fu_4243_p2 = (!p_Val2_19_13_reg_5459.read().is_01() || !tmp_127_13_fu_4236_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_19_13_reg_5459.read()) + sc_biguint<48>(tmp_127_13_fu_4236_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_20_14_fu_4278_p2() {
    p_Val2_20_14_fu_4278_p2 = (!p_Val2_19_14_reg_5479.read().is_01() || !tmp_127_14_fu_4270_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_19_14_reg_5479.read()) + sc_biguint<48>(tmp_127_14_fu_4270_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_20_1_fu_3020_p2() {
    p_Val2_20_1_fu_3020_p2 = (!p_Val2_19_1_reg_5024.read().is_01() || !tmp_127_1_fu_3012_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_19_1_reg_5024.read()) + sc_biguint<48>(tmp_127_1_fu_3012_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_20_2_fu_3177_p2() {
    p_Val2_20_2_fu_3177_p2 = (!p_Val2_19_2_reg_5074.read().is_01() || !tmp_127_2_fu_3170_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_19_2_reg_5074.read()) + sc_biguint<48>(tmp_127_2_fu_3170_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_20_3_fu_3212_p2() {
    p_Val2_20_3_fu_3212_p2 = (!p_Val2_19_3_reg_5094.read().is_01() || !tmp_127_3_fu_3204_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_19_3_reg_5094.read()) + sc_biguint<48>(tmp_127_3_fu_3204_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_20_4_fu_3369_p2() {
    p_Val2_20_4_fu_3369_p2 = (!p_Val2_19_4_reg_5144.read().is_01() || !tmp_127_4_fu_3362_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_19_4_reg_5144.read()) + sc_biguint<48>(tmp_127_4_fu_3362_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_20_5_fu_3404_p2() {
    p_Val2_20_5_fu_3404_p2 = (!p_Val2_19_5_reg_5164.read().is_01() || !tmp_127_5_fu_3396_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_19_5_reg_5164.read()) + sc_biguint<48>(tmp_127_5_fu_3396_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_20_6_fu_3561_p2() {
    p_Val2_20_6_fu_3561_p2 = (!p_Val2_19_6_reg_5214.read().is_01() || !tmp_127_6_fu_3554_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_19_6_reg_5214.read()) + sc_biguint<48>(tmp_127_6_fu_3554_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_20_7_fu_3596_p2() {
    p_Val2_20_7_fu_3596_p2 = (!p_Val2_19_7_reg_5234.read().is_01() || !tmp_127_7_fu_3588_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_19_7_reg_5234.read()) + sc_biguint<48>(tmp_127_7_fu_3588_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_20_8_fu_3753_p2() {
    p_Val2_20_8_fu_3753_p2 = (!p_Val2_19_8_reg_5284.read().is_01() || !tmp_127_8_fu_3746_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_19_8_reg_5284.read()) + sc_biguint<48>(tmp_127_8_fu_3746_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_20_9_fu_3788_p2() {
    p_Val2_20_9_fu_3788_p2 = (!p_Val2_19_9_reg_5304.read().is_01() || !tmp_127_9_fu_3780_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_19_9_reg_5304.read()) + sc_biguint<48>(tmp_127_9_fu_3780_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_20_s_fu_3951_p2() {
    p_Val2_20_s_fu_3951_p2 = (!p_Val2_19_s_reg_5354.read().is_01() || !tmp_127_s_fu_3944_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_19_s_reg_5354.read()) + sc_biguint<48>(tmp_127_s_fu_3944_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_22_10_fu_3886_p0() {
    p_Val2_22_10_fu_3886_p0 = reg_1065.read();
}

void sampleRNN_GRU::thread_p_Val2_22_10_fu_3886_p1() {
    p_Val2_22_10_fu_3886_p1 = reg_1060.read();
}

void sampleRNN_GRU::thread_p_Val2_22_10_fu_3886_p2() {
    p_Val2_22_10_fu_3886_p2 = (!p_Val2_22_10_fu_3886_p0.read().is_01() || !p_Val2_22_10_fu_3886_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_22_10_fu_3886_p0.read()) * sc_bigint<32>(p_Val2_22_10_fu_3886_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_22_11_fu_4046_p0() {
    p_Val2_22_11_fu_4046_p0 = reg_1045.read();
}

void sampleRNN_GRU::thread_p_Val2_22_11_fu_4046_p1() {
    p_Val2_22_11_fu_4046_p1 = reg_1040.read();
}

void sampleRNN_GRU::thread_p_Val2_22_11_fu_4046_p2() {
    p_Val2_22_11_fu_4046_p2 = (!p_Val2_22_11_fu_4046_p0.read().is_01() || !p_Val2_22_11_fu_4046_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_22_11_fu_4046_p0.read()) * sc_bigint<32>(p_Val2_22_11_fu_4046_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_22_12_fu_4084_p0() {
    p_Val2_22_12_fu_4084_p0 = reg_1065.read();
}

void sampleRNN_GRU::thread_p_Val2_22_12_fu_4084_p1() {
    p_Val2_22_12_fu_4084_p1 = reg_1060.read();
}

void sampleRNN_GRU::thread_p_Val2_22_12_fu_4084_p2() {
    p_Val2_22_12_fu_4084_p2 = (!p_Val2_22_12_fu_4084_p0.read().is_01() || !p_Val2_22_12_fu_4084_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_22_12_fu_4084_p0.read()) * sc_bigint<32>(p_Val2_22_12_fu_4084_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_22_13_fu_4192_p0() {
    p_Val2_22_13_fu_4192_p0 = reg_1045.read();
}

void sampleRNN_GRU::thread_p_Val2_22_13_fu_4192_p1() {
    p_Val2_22_13_fu_4192_p1 = reg_1040.read();
}

void sampleRNN_GRU::thread_p_Val2_22_13_fu_4192_p2() {
    p_Val2_22_13_fu_4192_p2 = (!p_Val2_22_13_fu_4192_p0.read().is_01() || !p_Val2_22_13_fu_4192_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_22_13_fu_4192_p0.read()) * sc_bigint<32>(p_Val2_22_13_fu_4192_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_22_14_fu_4230_p0() {
    p_Val2_22_14_fu_4230_p0 = reg_1065.read();
}

void sampleRNN_GRU::thread_p_Val2_22_14_fu_4230_p1() {
    p_Val2_22_14_fu_4230_p1 = reg_1060.read();
}

void sampleRNN_GRU::thread_p_Val2_22_14_fu_4230_p2() {
    p_Val2_22_14_fu_4230_p2 = (!p_Val2_22_14_fu_4230_p0.read().is_01() || !p_Val2_22_14_fu_4230_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_22_14_fu_4230_p0.read()) * sc_bigint<32>(p_Val2_22_14_fu_4230_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_22_1_fu_2924_p0() {
    p_Val2_22_1_fu_2924_p0 = reg_1065.read();
}

void sampleRNN_GRU::thread_p_Val2_22_1_fu_2924_p1() {
    p_Val2_22_1_fu_2924_p1 = reg_1060.read();
}

void sampleRNN_GRU::thread_p_Val2_22_1_fu_2924_p2() {
    p_Val2_22_1_fu_2924_p2 = (!p_Val2_22_1_fu_2924_p0.read().is_01() || !p_Val2_22_1_fu_2924_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_22_1_fu_2924_p0.read()) * sc_bigint<32>(p_Val2_22_1_fu_2924_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_22_2_fu_3080_p0() {
    p_Val2_22_2_fu_3080_p0 = reg_1045.read();
}

void sampleRNN_GRU::thread_p_Val2_22_2_fu_3080_p1() {
    p_Val2_22_2_fu_3080_p1 = reg_1040.read();
}

void sampleRNN_GRU::thread_p_Val2_22_2_fu_3080_p2() {
    p_Val2_22_2_fu_3080_p2 = (!p_Val2_22_2_fu_3080_p0.read().is_01() || !p_Val2_22_2_fu_3080_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_22_2_fu_3080_p0.read()) * sc_bigint<32>(p_Val2_22_2_fu_3080_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_22_3_fu_3118_p0() {
    p_Val2_22_3_fu_3118_p0 = reg_1065.read();
}

void sampleRNN_GRU::thread_p_Val2_22_3_fu_3118_p1() {
    p_Val2_22_3_fu_3118_p1 = reg_1060.read();
}

void sampleRNN_GRU::thread_p_Val2_22_3_fu_3118_p2() {
    p_Val2_22_3_fu_3118_p2 = (!p_Val2_22_3_fu_3118_p0.read().is_01() || !p_Val2_22_3_fu_3118_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_22_3_fu_3118_p0.read()) * sc_bigint<32>(p_Val2_22_3_fu_3118_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_22_4_fu_3272_p0() {
    p_Val2_22_4_fu_3272_p0 = reg_1045.read();
}

void sampleRNN_GRU::thread_p_Val2_22_4_fu_3272_p1() {
    p_Val2_22_4_fu_3272_p1 = reg_1040.read();
}

void sampleRNN_GRU::thread_p_Val2_22_4_fu_3272_p2() {
    p_Val2_22_4_fu_3272_p2 = (!p_Val2_22_4_fu_3272_p0.read().is_01() || !p_Val2_22_4_fu_3272_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_22_4_fu_3272_p0.read()) * sc_bigint<32>(p_Val2_22_4_fu_3272_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_22_5_fu_3310_p0() {
    p_Val2_22_5_fu_3310_p0 = reg_1065.read();
}

void sampleRNN_GRU::thread_p_Val2_22_5_fu_3310_p1() {
    p_Val2_22_5_fu_3310_p1 = reg_1060.read();
}

void sampleRNN_GRU::thread_p_Val2_22_5_fu_3310_p2() {
    p_Val2_22_5_fu_3310_p2 = (!p_Val2_22_5_fu_3310_p0.read().is_01() || !p_Val2_22_5_fu_3310_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_22_5_fu_3310_p0.read()) * sc_bigint<32>(p_Val2_22_5_fu_3310_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_22_6_fu_3464_p0() {
    p_Val2_22_6_fu_3464_p0 = reg_1045.read();
}

void sampleRNN_GRU::thread_p_Val2_22_6_fu_3464_p1() {
    p_Val2_22_6_fu_3464_p1 = reg_1040.read();
}

void sampleRNN_GRU::thread_p_Val2_22_6_fu_3464_p2() {
    p_Val2_22_6_fu_3464_p2 = (!p_Val2_22_6_fu_3464_p0.read().is_01() || !p_Val2_22_6_fu_3464_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_22_6_fu_3464_p0.read()) * sc_bigint<32>(p_Val2_22_6_fu_3464_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_22_7_fu_3502_p0() {
    p_Val2_22_7_fu_3502_p0 = reg_1065.read();
}

void sampleRNN_GRU::thread_p_Val2_22_7_fu_3502_p1() {
    p_Val2_22_7_fu_3502_p1 = reg_1060.read();
}

void sampleRNN_GRU::thread_p_Val2_22_7_fu_3502_p2() {
    p_Val2_22_7_fu_3502_p2 = (!p_Val2_22_7_fu_3502_p0.read().is_01() || !p_Val2_22_7_fu_3502_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_22_7_fu_3502_p0.read()) * sc_bigint<32>(p_Val2_22_7_fu_3502_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_22_8_fu_3656_p0() {
    p_Val2_22_8_fu_3656_p0 = reg_1045.read();
}

void sampleRNN_GRU::thread_p_Val2_22_8_fu_3656_p1() {
    p_Val2_22_8_fu_3656_p1 = reg_1040.read();
}

void sampleRNN_GRU::thread_p_Val2_22_8_fu_3656_p2() {
    p_Val2_22_8_fu_3656_p2 = (!p_Val2_22_8_fu_3656_p0.read().is_01() || !p_Val2_22_8_fu_3656_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_22_8_fu_3656_p0.read()) * sc_bigint<32>(p_Val2_22_8_fu_3656_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_22_9_fu_3694_p0() {
    p_Val2_22_9_fu_3694_p0 = reg_1065.read();
}

void sampleRNN_GRU::thread_p_Val2_22_9_fu_3694_p1() {
    p_Val2_22_9_fu_3694_p1 = reg_1060.read();
}

void sampleRNN_GRU::thread_p_Val2_22_9_fu_3694_p2() {
    p_Val2_22_9_fu_3694_p2 = (!p_Val2_22_9_fu_3694_p0.read().is_01() || !p_Val2_22_9_fu_3694_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_22_9_fu_3694_p0.read()) * sc_bigint<32>(p_Val2_22_9_fu_3694_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_22_s_fu_3848_p0() {
    p_Val2_22_s_fu_3848_p0 = reg_1045.read();
}

void sampleRNN_GRU::thread_p_Val2_22_s_fu_3848_p1() {
    p_Val2_22_s_fu_3848_p1 = reg_1040.read();
}

void sampleRNN_GRU::thread_p_Val2_22_s_fu_3848_p2() {
    p_Val2_22_s_fu_3848_p2 = (!p_Val2_22_s_fu_3848_p0.read().is_01() || !p_Val2_22_s_fu_3848_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_22_s_fu_3848_p0.read()) * sc_bigint<32>(p_Val2_22_s_fu_3848_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_23_10_fu_4009_p2() {
    p_Val2_23_10_fu_4009_p2 = (!p_Val2_22_10_reg_5379.read().is_01() || !tmp_132_10_fu_4001_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_22_10_reg_5379.read()) + sc_biguint<48>(tmp_132_10_fu_4001_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_23_11_fu_4109_p2() {
    p_Val2_23_11_fu_4109_p2 = (!p_Val2_22_11_reg_5439.read().is_01() || !tmp_132_11_fu_4102_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_22_11_reg_5439.read()) + sc_biguint<48>(tmp_132_11_fu_4102_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_23_12_fu_4155_p2() {
    p_Val2_23_12_fu_4155_p2 = (!p_Val2_22_12_reg_5454.read().is_01() || !tmp_132_12_fu_4147_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_22_12_reg_5454.read()) + sc_biguint<48>(tmp_132_12_fu_4147_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_23_13_fu_4255_p2() {
    p_Val2_23_13_fu_4255_p2 = (!p_Val2_22_13_reg_5469.read().is_01() || !tmp_132_13_fu_4248_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_22_13_reg_5469.read()) + sc_biguint<48>(tmp_132_13_fu_4248_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_23_14_fu_4311_p2() {
    p_Val2_23_14_fu_4311_p2 = (!p_Val2_22_14_reg_5484.read().is_01() || !tmp_132_14_fu_4303_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_22_14_reg_5484.read()) + sc_biguint<48>(tmp_132_14_fu_4303_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_23_1_fu_3043_p2() {
    p_Val2_23_1_fu_3043_p2 = (!p_Val2_22_1_reg_5029.read().is_01() || !tmp_132_1_fu_3035_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_22_1_reg_5029.read()) + sc_biguint<48>(tmp_132_1_fu_3035_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_23_2_fu_3189_p2() {
    p_Val2_23_2_fu_3189_p2 = (!p_Val2_22_2_reg_5084.read().is_01() || !tmp_132_2_fu_3182_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_22_2_reg_5084.read()) + sc_biguint<48>(tmp_132_2_fu_3182_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_23_3_fu_3235_p2() {
    p_Val2_23_3_fu_3235_p2 = (!p_Val2_22_3_reg_5099.read().is_01() || !tmp_132_3_fu_3227_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_22_3_reg_5099.read()) + sc_biguint<48>(tmp_132_3_fu_3227_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_23_4_fu_3381_p2() {
    p_Val2_23_4_fu_3381_p2 = (!p_Val2_22_4_reg_5154.read().is_01() || !tmp_132_4_fu_3374_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_22_4_reg_5154.read()) + sc_biguint<48>(tmp_132_4_fu_3374_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_23_5_fu_3427_p2() {
    p_Val2_23_5_fu_3427_p2 = (!p_Val2_22_5_reg_5169.read().is_01() || !tmp_132_5_fu_3419_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_22_5_reg_5169.read()) + sc_biguint<48>(tmp_132_5_fu_3419_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_23_6_fu_3573_p2() {
    p_Val2_23_6_fu_3573_p2 = (!p_Val2_22_6_reg_5224.read().is_01() || !tmp_132_6_fu_3566_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_22_6_reg_5224.read()) + sc_biguint<48>(tmp_132_6_fu_3566_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_23_7_fu_3619_p2() {
    p_Val2_23_7_fu_3619_p2 = (!p_Val2_22_7_reg_5239.read().is_01() || !tmp_132_7_fu_3611_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_22_7_reg_5239.read()) + sc_biguint<48>(tmp_132_7_fu_3611_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_23_8_fu_3765_p2() {
    p_Val2_23_8_fu_3765_p2 = (!p_Val2_22_8_reg_5294.read().is_01() || !tmp_132_8_fu_3758_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_22_8_reg_5294.read()) + sc_biguint<48>(tmp_132_8_fu_3758_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_23_9_fu_3811_p2() {
    p_Val2_23_9_fu_3811_p2 = (!p_Val2_22_9_reg_5309.read().is_01() || !tmp_132_9_fu_3803_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_22_9_reg_5309.read()) + sc_biguint<48>(tmp_132_9_fu_3803_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_23_s_fu_3963_p2() {
    p_Val2_23_s_fu_3963_p2 = (!p_Val2_22_s_reg_5364.read().is_01() || !tmp_132_s_fu_3956_p3.read().is_01())? sc_lv<48>(): (sc_biguint<48>(p_Val2_22_s_reg_5364.read()) + sc_biguint<48>(tmp_132_s_fu_3956_p3.read()));
}

void sampleRNN_GRU::thread_p_Val2_8_fu_2882_p0() {
    p_Val2_8_fu_2882_p0 = reg_1035.read();
}

void sampleRNN_GRU::thread_p_Val2_8_fu_2882_p1() {
    p_Val2_8_fu_2882_p1 = reg_1030.read();
}

void sampleRNN_GRU::thread_p_Val2_8_fu_2882_p2() {
    p_Val2_8_fu_2882_p2 = (!p_Val2_8_fu_2882_p0.read().is_01() || !p_Val2_8_fu_2882_p1.read().is_01())? sc_lv<48>(): sc_bigint<32>(p_Val2_8_fu_2882_p0.read()) * sc_bigint<32>(p_Val2_8_fu_2882_p1.read());
}

void sampleRNN_GRU::thread_p_Val2_s_35_fu_4385_p3() {
    p_Val2_s_35_fu_4385_p3 = (!is_neg_reg_5534.read()[0].is_01())? sc_lv<32>(): ((is_neg_reg_5534.read()[0].to_bool())? tmp_96_reg_5540.read(): p_Val2_10_reg_5528.read());
}

void sampleRNN_GRU::thread_sel_tmp106_demorgan_fu_2323_p2() {
    sel_tmp106_demorgan_fu_2323_p2 = (tmp_65_reg_4767.read() | tmp_69_fu_2297_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp10_fu_1561_p2() {
    sel_tmp10_fu_1561_p2 = (tmp_21_reg_4589.read() & sel_tmp5_fu_1556_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp11_fu_1488_p2() {
    sel_tmp11_fu_1488_p2 = (sel_tmp31_demorgan_fu_1483_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp121_demorgan_fu_2340_p2() {
    sel_tmp121_demorgan_fu_2340_p2 = (sel_tmp106_demorgan_fu_2323_p2.read() | tmp_66_fu_2271_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp12_fu_1494_p2() {
    sel_tmp12_fu_1494_p2 = (tmp_18_fu_1431_p2.read() & sel_tmp11_fu_1488_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp131_demorgan_fu_2603_p2() {
    sel_tmp131_demorgan_fu_2603_p2 = (tmp_80_reg_4832.read() | tmp_84_fu_2577_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp13_fu_1566_p2() {
    sel_tmp13_fu_1566_p2 = (tmp_23_fu_1526_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp146_demorgan_fu_2620_p2() {
    sel_tmp146_demorgan_fu_2620_p2 = (sel_tmp131_demorgan_fu_2603_p2.read() | tmp_81_fu_2551_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp14_fu_1572_p2() {
    sel_tmp14_fu_1572_p2 = (sel_tmp12_reg_4600.read() & sel_tmp13_fu_1566_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp15_fu_1577_p2() {
    sel_tmp15_fu_1577_p2 = (sel_tmp12_reg_4600.read() & tmp_23_fu_1526_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp16_fu_1506_p2() {
    sel_tmp16_fu_1506_p2 = (sel_tmp46_demorgan_fu_1500_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp17_fu_1512_p2() {
    sel_tmp17_fu_1512_p2 = (icmp1_fu_1477_p2.read() & sel_tmp16_fu_1506_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp18_fu_1836_p2() {
    sel_tmp18_fu_1836_p2 = (tmp_30_reg_4637_pp2_iter2_reg.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp19_fu_1841_p2() {
    sel_tmp19_fu_1841_p2 = (tmp_38_reg_4654.read() & sel_tmp18_fu_1836_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp1_fu_1276_p2() {
    sel_tmp1_fu_1276_p2 = (tmp_9_reg_4507_pp0_iter2_reg.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp20_fu_1768_p2() {
    sel_tmp20_fu_1768_p2 = (sel_tmp56_demorgan_fu_1763_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp21_demorgan_fu_1220_p2() {
    sel_tmp21_demorgan_fu_1220_p2 = (sel_tmp6_demorgan_fu_1203_p2.read() | tmp_1_fu_1151_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp21_fu_1774_p2() {
    sel_tmp21_fu_1774_p2 = (tmp_35_fu_1711_p2.read() & sel_tmp20_fu_1768_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp22_fu_1846_p2() {
    sel_tmp22_fu_1846_p2 = (tmp_39_fu_1806_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp23_fu_1852_p2() {
    sel_tmp23_fu_1852_p2 = (sel_tmp21_reg_4665.read() & sel_tmp22_fu_1846_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp24_fu_1857_p2() {
    sel_tmp24_fu_1857_p2 = (sel_tmp21_reg_4665.read() & tmp_39_fu_1806_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp25_fu_1786_p2() {
    sel_tmp25_fu_1786_p2 = (sel_tmp71_demorgan_fu_1780_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp26_fu_1792_p2() {
    sel_tmp26_fu_1792_p2 = (icmp2_fu_1757_p2.read() & sel_tmp25_fu_1786_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp27_fu_2116_p2() {
    sel_tmp27_fu_2116_p2 = (tmp_48_reg_4702_pp3_iter2_reg.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp28_fu_2121_p2() {
    sel_tmp28_fu_2121_p2 = (tmp_53_reg_4719.read() & sel_tmp27_fu_2116_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp29_fu_2048_p2() {
    sel_tmp29_fu_2048_p2 = (sel_tmp81_demorgan_fu_2043_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp2_fu_1281_p2() {
    sel_tmp2_fu_1281_p2 = (tmp_6_reg_4524.read() & sel_tmp1_fu_1276_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp30_fu_2054_p2() {
    sel_tmp30_fu_2054_p2 = (tmp_49_fu_1991_p2.read() & sel_tmp29_fu_2048_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp31_demorgan_fu_1483_p2() {
    sel_tmp31_demorgan_fu_1483_p2 = (tmp_15_reg_4572.read() | tmp_21_fu_1457_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp31_fu_2126_p2() {
    sel_tmp31_fu_2126_p2 = (tmp_54_fu_2086_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp32_fu_2132_p2() {
    sel_tmp32_fu_2132_p2 = (sel_tmp30_reg_4730.read() & sel_tmp31_fu_2126_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp33_fu_2137_p2() {
    sel_tmp33_fu_2137_p2 = (sel_tmp30_reg_4730.read() & tmp_54_fu_2086_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp34_fu_2066_p2() {
    sel_tmp34_fu_2066_p2 = (sel_tmp96_demorgan_fu_2060_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp35_fu_2072_p2() {
    sel_tmp35_fu_2072_p2 = (icmp3_fu_2037_p2.read() & sel_tmp34_fu_2066_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp36_fu_2396_p2() {
    sel_tmp36_fu_2396_p2 = (tmp_65_reg_4767_pp4_iter2_reg.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp37_fu_2401_p2() {
    sel_tmp37_fu_2401_p2 = (tmp_69_reg_4784.read() & sel_tmp36_fu_2396_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp38_fu_2328_p2() {
    sel_tmp38_fu_2328_p2 = (sel_tmp106_demorgan_fu_2323_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp39_fu_2334_p2() {
    sel_tmp39_fu_2334_p2 = (tmp_66_fu_2271_p2.read() & sel_tmp38_fu_2328_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp3_fu_1226_p2() {
    sel_tmp3_fu_1226_p2 = (sel_tmp21_demorgan_fu_1220_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp40_fu_2406_p2() {
    sel_tmp40_fu_2406_p2 = (tmp_70_fu_2366_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp41_fu_2412_p2() {
    sel_tmp41_fu_2412_p2 = (sel_tmp39_reg_4795.read() & sel_tmp40_fu_2406_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp42_fu_2417_p2() {
    sel_tmp42_fu_2417_p2 = (sel_tmp39_reg_4795.read() & tmp_70_fu_2366_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp43_fu_2346_p2() {
    sel_tmp43_fu_2346_p2 = (sel_tmp121_demorgan_fu_2340_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp44_fu_2352_p2() {
    sel_tmp44_fu_2352_p2 = (icmp4_fu_2317_p2.read() & sel_tmp43_fu_2346_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp45_fu_2676_p2() {
    sel_tmp45_fu_2676_p2 = (tmp_80_reg_4832_pp5_iter2_reg.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp46_demorgan_fu_1500_p2() {
    sel_tmp46_demorgan_fu_1500_p2 = (sel_tmp31_demorgan_fu_1483_p2.read() | tmp_18_fu_1431_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp46_fu_2681_p2() {
    sel_tmp46_fu_2681_p2 = (tmp_84_reg_4849.read() & sel_tmp45_fu_2676_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp47_fu_2608_p2() {
    sel_tmp47_fu_2608_p2 = (sel_tmp131_demorgan_fu_2603_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp48_fu_2614_p2() {
    sel_tmp48_fu_2614_p2 = (tmp_81_fu_2551_p2.read() & sel_tmp47_fu_2608_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp49_fu_2686_p2() {
    sel_tmp49_fu_2686_p2 = (tmp_85_fu_2646_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp4_fu_1232_p2() {
    sel_tmp4_fu_1232_p2 = (icmp_fu_1197_p2.read() & sel_tmp3_fu_1226_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp50_fu_2692_p2() {
    sel_tmp50_fu_2692_p2 = (sel_tmp48_reg_4860.read() & sel_tmp49_fu_2686_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp51_fu_2697_p2() {
    sel_tmp51_fu_2697_p2 = (sel_tmp48_reg_4860.read() & tmp_85_fu_2646_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp52_fu_2626_p2() {
    sel_tmp52_fu_2626_p2 = (sel_tmp146_demorgan_fu_2620_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp53_fu_2632_p2() {
    sel_tmp53_fu_2632_p2 = (icmp5_fu_2597_p2.read() & sel_tmp52_fu_2626_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp56_demorgan_fu_1763_p2() {
    sel_tmp56_demorgan_fu_1763_p2 = (tmp_30_reg_4637.read() | tmp_38_fu_1737_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp5_fu_1556_p2() {
    sel_tmp5_fu_1556_p2 = (tmp_15_reg_4572_pp1_iter2_reg.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp6_demorgan_fu_1203_p2() {
    sel_tmp6_demorgan_fu_1203_p2 = (tmp_9_reg_4507.read() | tmp_6_fu_1177_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp6_fu_1208_p2() {
    sel_tmp6_fu_1208_p2 = (sel_tmp6_demorgan_fu_1203_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp71_demorgan_fu_1780_p2() {
    sel_tmp71_demorgan_fu_1780_p2 = (sel_tmp56_demorgan_fu_1763_p2.read() | tmp_35_fu_1711_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp7_fu_1214_p2() {
    sel_tmp7_fu_1214_p2 = (tmp_1_fu_1151_p2.read() & sel_tmp6_fu_1208_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp81_demorgan_fu_2043_p2() {
    sel_tmp81_demorgan_fu_2043_p2 = (tmp_48_reg_4702.read() | tmp_53_fu_2017_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp8_fu_1286_p2() {
    sel_tmp8_fu_1286_p2 = (tmp_10_fu_1246_p2.read() ^ ap_const_lv1_1);
}

void sampleRNN_GRU::thread_sel_tmp96_demorgan_fu_2060_p2() {
    sel_tmp96_demorgan_fu_2060_p2 = (sel_tmp81_demorgan_fu_2043_p2.read() | tmp_49_fu_1991_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp9_fu_1292_p2() {
    sel_tmp9_fu_1292_p2 = (sel_tmp7_reg_4535.read() & sel_tmp8_fu_1286_p2.read());
}

void sampleRNN_GRU::thread_sel_tmp_fu_1297_p2() {
    sel_tmp_fu_1297_p2 = (sel_tmp7_reg_4535.read() & tmp_10_fu_1246_p2.read());
}

void sampleRNN_GRU::thread_sh_amt_1_cast_fu_1523_p1() {
    sh_amt_1_cast_fu_1523_p1 = esl_sext<32,12>(sh_amt_1_reg_4583.read());
}

void sampleRNN_GRU::thread_sh_amt_1_fu_1449_p3() {
    sh_amt_1_fu_1449_p3 = (!tmp_18_fu_1431_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_18_fu_1431_p2.read()[0].to_bool())? tmp_19_fu_1437_p2.read(): tmp_20_fu_1443_p2.read());
}

void sampleRNN_GRU::thread_sh_amt_2_cast_fu_1803_p1() {
    sh_amt_2_cast_fu_1803_p1 = esl_sext<32,12>(sh_amt_2_reg_4648.read());
}

void sampleRNN_GRU::thread_sh_amt_2_fu_1729_p3() {
    sh_amt_2_fu_1729_p3 = (!tmp_35_fu_1711_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_35_fu_1711_p2.read()[0].to_bool())? tmp_36_fu_1717_p2.read(): tmp_37_fu_1723_p2.read());
}

void sampleRNN_GRU::thread_sh_amt_3_cast_fu_2083_p1() {
    sh_amt_3_cast_fu_2083_p1 = esl_sext<32,12>(sh_amt_3_reg_4713.read());
}

void sampleRNN_GRU::thread_sh_amt_3_fu_2009_p3() {
    sh_amt_3_fu_2009_p3 = (!tmp_49_fu_1991_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_49_fu_1991_p2.read()[0].to_bool())? tmp_51_fu_1997_p2.read(): tmp_52_fu_2003_p2.read());
}

void sampleRNN_GRU::thread_sh_amt_4_cast_fu_2363_p1() {
    sh_amt_4_cast_fu_2363_p1 = esl_sext<32,12>(sh_amt_4_reg_4778.read());
}

void sampleRNN_GRU::thread_sh_amt_4_fu_2289_p3() {
    sh_amt_4_fu_2289_p3 = (!tmp_66_fu_2271_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_66_fu_2271_p2.read()[0].to_bool())? tmp_67_fu_2277_p2.read(): tmp_68_fu_2283_p2.read());
}

void sampleRNN_GRU::thread_sh_amt_5_cast_fu_2643_p1() {
    sh_amt_5_cast_fu_2643_p1 = esl_sext<32,12>(sh_amt_5_reg_4843.read());
}

void sampleRNN_GRU::thread_sh_amt_5_fu_2569_p3() {
    sh_amt_5_fu_2569_p3 = (!tmp_81_fu_2551_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_81_fu_2551_p2.read()[0].to_bool())? tmp_82_fu_2557_p2.read(): tmp_83_fu_2563_p2.read());
}

void sampleRNN_GRU::thread_sh_amt_cast_fu_1243_p1() {
    sh_amt_cast_fu_1243_p1 = esl_sext<32,12>(sh_amt_reg_4518.read());
}

void sampleRNN_GRU::thread_sh_amt_fu_1169_p3() {
    sh_amt_fu_1169_p3 = (!tmp_1_fu_1151_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_1_fu_1151_p2.read()[0].to_bool())? tmp_3_fu_1157_p2.read(): tmp_5_fu_1163_p2.read());
}

void sampleRNN_GRU::thread_storemerge1_fu_2664_p3() {
    storemerge1_fu_2664_p3 = (!isneg_5_reg_4816_pp5_iter2_reg.read()[0].is_01())? sc_lv<32>(): ((isneg_5_reg_4816_pp5_iter2_reg.read()[0].to_bool())? ap_const_lv32_FFFFFFFF: ap_const_lv32_0);
}

void sampleRNN_GRU::thread_storemerge2_fu_1544_p3() {
    storemerge2_fu_1544_p3 = (!isneg_1_reg_4556_pp1_iter2_reg.read()[0].is_01())? sc_lv<32>(): ((isneg_1_reg_4556_pp1_iter2_reg.read()[0].to_bool())? ap_const_lv32_FFFFFFFF: ap_const_lv32_0);
}

void sampleRNN_GRU::thread_storemerge4_fu_1824_p3() {
    storemerge4_fu_1824_p3 = (!isneg_2_reg_4621_pp2_iter2_reg.read()[0].is_01())? sc_lv<32>(): ((isneg_2_reg_4621_pp2_iter2_reg.read()[0].to_bool())? ap_const_lv32_FFFFFFFF: ap_const_lv32_0);
}

void sampleRNN_GRU::thread_storemerge6_fu_2104_p3() {
    storemerge6_fu_2104_p3 = (!isneg_3_reg_4686_pp3_iter2_reg.read()[0].is_01())? sc_lv<32>(): ((isneg_3_reg_4686_pp3_iter2_reg.read()[0].to_bool())? ap_const_lv32_FFFFFFFF: ap_const_lv32_0);
}

void sampleRNN_GRU::thread_storemerge8_fu_2384_p3() {
    storemerge8_fu_2384_p3 = (!isneg_4_reg_4751_pp4_iter2_reg.read()[0].is_01())? sc_lv<32>(): ((isneg_4_reg_4751_pp4_iter2_reg.read()[0].to_bool())? ap_const_lv32_FFFFFFFF: ap_const_lv32_0);
}

void sampleRNN_GRU::thread_storemerge_fu_1264_p3() {
    storemerge_fu_1264_p3 = (!isneg_reg_4491_pp0_iter2_reg.read()[0].is_01())? sc_lv<32>(): ((isneg_reg_4491_pp0_iter2_reg.read()[0].to_bool())? ap_const_lv32_FFFFFFFF: ap_const_lv32_0);
}

void sampleRNN_GRU::thread_tmp32_V_1_fu_4408_p2() {
    tmp32_V_1_fu_4408_p2 = (!num_zeros_fu_4400_p3.read().is_01())? sc_lv<32>(): p_Val2_s_35_fu_4385_p3.read() << (unsigned short)num_zeros_fu_4400_p3.read().to_uint();
}

void sampleRNN_GRU::thread_tmp32_V_fu_4418_p1() {
    tmp32_V_fu_4418_p1 = grp_fu_1019_p1.read();
}

void sampleRNN_GRU::thread_tmp_100_fu_4452_p3() {
    tmp_100_fu_4452_p3 = esl_concat<1,8>(is_neg_reg_5534_pp6_iter8_reg.read(), p_Repl2_1_trunc_fu_4446_p2.read());
}

void sampleRNN_GRU::thread_tmp_101_fu_1926_p1() {
    tmp_101_fu_1926_p1 = ireg_V_3_fu_1922_p1.read().range(63-1, 0);
}

void sampleRNN_GRU::thread_tmp_102_fu_4332_p2() {
    tmp_102_fu_4332_p2 = (!i_6_cast_reg_4872.read().is_01() || !ap_const_lv9_C0.is_01())? sc_lv<9>(): (sc_biguint<9>(i_6_cast_reg_4872.read()) + sc_biguint<9>(ap_const_lv9_C0));
}

void sampleRNN_GRU::thread_tmp_103_fu_4337_p1() {
    tmp_103_fu_4337_p1 = esl_zext<64,9>(tmp_102_fu_4332_p2.read());
}

void sampleRNN_GRU::thread_tmp_104_fu_2782_p1() {
    tmp_104_fu_2782_p1 = esl_zext<64,14>(counter_s_reg_997.read());
}

void sampleRNN_GRU::thread_tmp_105_fu_2788_p1() {
    tmp_105_fu_2788_p1 = esl_zext<64,7>(j_reg_986.read());
}

void sampleRNN_GRU::thread_tmp_106_fu_2976_p3() {
    tmp_106_fu_2976_p3 = esl_concat<32,16>(p_Val2_9_reg_962.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_107_fu_2989_p3() {
    tmp_107_fu_2989_p3 = esl_concat<32,16>(p_Val2_6_reg_974.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_108_fu_3002_p4() {
    tmp_108_fu_3002_p4 = p_Val2_11_fu_2984_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_109_fu_3025_p4() {
    tmp_109_fu_3025_p4 = p_Val2_13_fu_2997_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_10_fu_1246_p2() {
    tmp_10_fu_1246_p2 = (!sh_amt_reg_4518.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_reg_4518.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void sampleRNN_GRU::thread_tmp_112_fu_3194_p4() {
    tmp_112_fu_3194_p4 = p_Val2_20_2_fu_3177_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_113_fu_3217_p4() {
    tmp_113_fu_3217_p4 = p_Val2_23_2_fu_3189_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_116_fu_3386_p4() {
    tmp_116_fu_3386_p4 = p_Val2_20_4_fu_3369_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_117_fu_3409_p4() {
    tmp_117_fu_3409_p4 = p_Val2_23_4_fu_3381_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_120_fu_3578_p4() {
    tmp_120_fu_3578_p4 = p_Val2_20_6_fu_3561_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_121_fu_3601_p4() {
    tmp_121_fu_3601_p4 = p_Val2_23_6_fu_3573_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_124_10_fu_3542_p1() {
    tmp_124_10_fu_3542_p1 = esl_zext<64,14>(tmp_136_10_fu_3531_p2.read());
}

void sampleRNN_GRU::thread_tmp_124_11_fu_3711_p1() {
    tmp_124_11_fu_3711_p1 = esl_zext<64,14>(tmp_136_11_fu_3700_p2.read());
}

void sampleRNN_GRU::thread_tmp_124_12_fu_3734_p1() {
    tmp_124_12_fu_3734_p1 = esl_zext<64,14>(tmp_136_12_fu_3723_p2.read());
}

void sampleRNN_GRU::thread_tmp_124_13_fu_3903_p1() {
    tmp_124_13_fu_3903_p1 = esl_zext<64,14>(tmp_136_13_fu_3892_p2.read());
}

void sampleRNN_GRU::thread_tmp_124_14_fu_3926_p1() {
    tmp_124_14_fu_3926_p1 = esl_zext<64,14>(tmp_136_14_fu_3915_p2.read());
}

void sampleRNN_GRU::thread_tmp_124_1_fu_2810_p1() {
    tmp_124_1_fu_2810_p1 = esl_zext<64,14>(tmp_136_s_fu_2794_p2.read());
}

void sampleRNN_GRU::thread_tmp_124_2_fu_2839_p1() {
    tmp_124_2_fu_2839_p1 = esl_zext<64,14>(tmp_136_1_fu_2828_p2.read());
}

void sampleRNN_GRU::thread_tmp_124_3_fu_2862_p1() {
    tmp_124_3_fu_2862_p1 = esl_zext<64,14>(tmp_136_2_fu_2851_p2.read());
}

void sampleRNN_GRU::thread_tmp_124_4_fu_2941_p1() {
    tmp_124_4_fu_2941_p1 = esl_zext<64,14>(tmp_136_3_fu_2930_p2.read());
}

void sampleRNN_GRU::thread_tmp_124_5_fu_2964_p1() {
    tmp_124_5_fu_2964_p1 = esl_zext<64,14>(tmp_136_4_fu_2953_p2.read());
}

void sampleRNN_GRU::thread_tmp_124_6_fu_3135_p1() {
    tmp_124_6_fu_3135_p1 = esl_zext<64,14>(tmp_136_5_fu_3124_p2.read());
}

void sampleRNN_GRU::thread_tmp_124_7_fu_3158_p1() {
    tmp_124_7_fu_3158_p1 = esl_zext<64,14>(tmp_136_6_fu_3147_p2.read());
}

void sampleRNN_GRU::thread_tmp_124_8_fu_3327_p1() {
    tmp_124_8_fu_3327_p1 = esl_zext<64,14>(tmp_136_7_fu_3316_p2.read());
}

void sampleRNN_GRU::thread_tmp_124_9_fu_3350_p1() {
    tmp_124_9_fu_3350_p1 = esl_zext<64,14>(tmp_136_8_fu_3339_p2.read());
}

void sampleRNN_GRU::thread_tmp_124_fu_3770_p4() {
    tmp_124_fu_3770_p4 = p_Val2_20_8_fu_3753_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_124_s_fu_3519_p1() {
    tmp_124_s_fu_3519_p1 = esl_zext<64,14>(tmp_136_9_fu_3508_p2.read());
}

void sampleRNN_GRU::thread_tmp_125_10_fu_3548_p1() {
    tmp_125_10_fu_3548_p1 = esl_zext<64,6>(j_1_10_fu_3537_p2.read());
}

void sampleRNN_GRU::thread_tmp_125_11_fu_3717_p1() {
    tmp_125_11_fu_3717_p1 = esl_zext<64,6>(j_1_11_fu_3706_p2.read());
}

void sampleRNN_GRU::thread_tmp_125_12_fu_3740_p1() {
    tmp_125_12_fu_3740_p1 = esl_zext<64,6>(j_1_12_fu_3729_p2.read());
}

void sampleRNN_GRU::thread_tmp_125_13_fu_3909_p1() {
    tmp_125_13_fu_3909_p1 = esl_zext<64,6>(j_1_13_fu_3898_p2.read());
}

void sampleRNN_GRU::thread_tmp_125_14_fu_3932_p1() {
    tmp_125_14_fu_3932_p1 = esl_zext<64,6>(j_1_14_fu_3921_p2.read());
}

void sampleRNN_GRU::thread_tmp_125_1_fu_2816_p1() {
    tmp_125_1_fu_2816_p1 = esl_zext<64,6>(j_1_s_fu_2804_p2.read());
}

void sampleRNN_GRU::thread_tmp_125_2_fu_2845_p1() {
    tmp_125_2_fu_2845_p1 = esl_zext<64,6>(j_1_1_fu_2834_p2.read());
}

void sampleRNN_GRU::thread_tmp_125_3_fu_2868_p1() {
    tmp_125_3_fu_2868_p1 = esl_zext<64,6>(j_1_2_fu_2857_p2.read());
}

void sampleRNN_GRU::thread_tmp_125_4_fu_2947_p1() {
    tmp_125_4_fu_2947_p1 = esl_zext<64,6>(j_1_3_fu_2936_p2.read());
}

void sampleRNN_GRU::thread_tmp_125_5_fu_2970_p1() {
    tmp_125_5_fu_2970_p1 = esl_zext<64,6>(j_1_4_fu_2959_p2.read());
}

void sampleRNN_GRU::thread_tmp_125_6_fu_3141_p1() {
    tmp_125_6_fu_3141_p1 = esl_zext<64,6>(j_1_5_fu_3130_p2.read());
}

void sampleRNN_GRU::thread_tmp_125_7_fu_3164_p1() {
    tmp_125_7_fu_3164_p1 = esl_zext<64,6>(j_1_6_fu_3153_p2.read());
}

void sampleRNN_GRU::thread_tmp_125_8_fu_3333_p1() {
    tmp_125_8_fu_3333_p1 = esl_zext<64,6>(j_1_7_fu_3322_p2.read());
}

void sampleRNN_GRU::thread_tmp_125_9_fu_3356_p1() {
    tmp_125_9_fu_3356_p1 = esl_zext<64,6>(j_1_8_fu_3345_p2.read());
}

void sampleRNN_GRU::thread_tmp_125_fu_3793_p4() {
    tmp_125_fu_3793_p4 = p_Val2_23_8_fu_3765_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_125_s_fu_3525_p1() {
    tmp_125_s_fu_3525_p1 = esl_zext<64,6>(j_1_9_fu_3514_p2.read());
}

void sampleRNN_GRU::thread_tmp_127_10_fu_3978_p3() {
    tmp_127_10_fu_3978_p3 = esl_concat<32,16>(tmp_128_fu_3968_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_127_11_fu_4090_p3() {
    tmp_127_11_fu_4090_p3 = esl_concat<32,16>(tmp_130_reg_5434.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_127_12_fu_4124_p3() {
    tmp_127_12_fu_4124_p3 = esl_concat<32,16>(tmp_132_fu_4114_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_127_13_fu_4236_p3() {
    tmp_127_13_fu_4236_p3 = esl_concat<32,16>(tmp_134_reg_5464.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_127_14_fu_4270_p3() {
    tmp_127_14_fu_4270_p3 = esl_concat<32,16>(tmp_136_fu_4260_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_127_1_fu_3012_p3() {
    tmp_127_1_fu_3012_p3 = esl_concat<32,16>(tmp_108_fu_3002_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_127_2_fu_3170_p3() {
    tmp_127_2_fu_3170_p3 = esl_concat<32,16>(tmp_110_reg_5079.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_127_3_fu_3204_p3() {
    tmp_127_3_fu_3204_p3 = esl_concat<32,16>(tmp_112_fu_3194_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_127_4_fu_3362_p3() {
    tmp_127_4_fu_3362_p3 = esl_concat<32,16>(tmp_114_reg_5149.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_127_5_fu_3396_p3() {
    tmp_127_5_fu_3396_p3 = esl_concat<32,16>(tmp_116_fu_3386_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_127_6_fu_3554_p3() {
    tmp_127_6_fu_3554_p3 = esl_concat<32,16>(tmp_118_reg_5219.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_127_7_fu_3588_p3() {
    tmp_127_7_fu_3588_p3 = esl_concat<32,16>(tmp_120_fu_3578_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_127_8_fu_3746_p3() {
    tmp_127_8_fu_3746_p3 = esl_concat<32,16>(tmp_122_reg_5289.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_127_9_fu_3780_p3() {
    tmp_127_9_fu_3780_p3 = esl_concat<32,16>(tmp_124_fu_3770_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_127_s_fu_3944_p3() {
    tmp_127_s_fu_3944_p3 = esl_concat<32,16>(tmp_126_reg_5359.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_128_fu_3968_p4() {
    tmp_128_fu_3968_p4 = p_Val2_20_s_fu_3951_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_129_fu_3991_p4() {
    tmp_129_fu_3991_p4 = p_Val2_23_s_fu_3963_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_12_fu_1398_p1() {
    tmp_12_fu_1398_p1 = esl_zext<12,11>(exp_tmp_V_1_reg_4562.read());
}

void sampleRNN_GRU::thread_tmp_132_10_fu_4001_p3() {
    tmp_132_10_fu_4001_p3 = esl_concat<32,16>(tmp_129_fu_3991_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_132_11_fu_4102_p3() {
    tmp_132_11_fu_4102_p3 = esl_concat<32,16>(tmp_131_reg_5444.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_132_12_fu_4147_p3() {
    tmp_132_12_fu_4147_p3 = esl_concat<32,16>(tmp_133_fu_4137_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_132_13_fu_4248_p3() {
    tmp_132_13_fu_4248_p3 = esl_concat<32,16>(tmp_135_reg_5474.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_132_14_fu_4303_p3() {
    tmp_132_14_fu_4303_p3 = esl_concat<32,16>(tmp_137_fu_4293_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_132_1_fu_3035_p3() {
    tmp_132_1_fu_3035_p3 = esl_concat<32,16>(tmp_109_fu_3025_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_132_2_fu_3182_p3() {
    tmp_132_2_fu_3182_p3 = esl_concat<32,16>(tmp_111_reg_5089.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_132_3_fu_3227_p3() {
    tmp_132_3_fu_3227_p3 = esl_concat<32,16>(tmp_113_fu_3217_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_132_4_fu_3374_p3() {
    tmp_132_4_fu_3374_p3 = esl_concat<32,16>(tmp_115_reg_5159.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_132_5_fu_3419_p3() {
    tmp_132_5_fu_3419_p3 = esl_concat<32,16>(tmp_117_fu_3409_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_132_6_fu_3566_p3() {
    tmp_132_6_fu_3566_p3 = esl_concat<32,16>(tmp_119_reg_5229.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_132_7_fu_3611_p3() {
    tmp_132_7_fu_3611_p3 = esl_concat<32,16>(tmp_121_fu_3601_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_132_8_fu_3758_p3() {
    tmp_132_8_fu_3758_p3 = esl_concat<32,16>(tmp_123_reg_5299.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_132_9_fu_3803_p3() {
    tmp_132_9_fu_3803_p3 = esl_concat<32,16>(tmp_125_fu_3793_p4.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_132_fu_4114_p4() {
    tmp_132_fu_4114_p4 = p_Val2_20_11_fu_4097_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_132_s_fu_3956_p3() {
    tmp_132_s_fu_3956_p3 = esl_concat<32,16>(tmp_127_reg_5369.read(), ap_const_lv16_0);
}

void sampleRNN_GRU::thread_tmp_133_fu_4137_p4() {
    tmp_133_fu_4137_p4 = p_Val2_23_11_fu_4109_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_136_10_fu_3531_p2() {
    tmp_136_10_fu_3531_p2 = (counter_s_reg_997.read() | ap_const_lv14_B);
}

void sampleRNN_GRU::thread_tmp_136_11_fu_3700_p2() {
    tmp_136_11_fu_3700_p2 = (counter_s_reg_997.read() | ap_const_lv14_C);
}

void sampleRNN_GRU::thread_tmp_136_12_fu_3723_p2() {
    tmp_136_12_fu_3723_p2 = (counter_s_reg_997.read() | ap_const_lv14_D);
}

void sampleRNN_GRU::thread_tmp_136_13_fu_3892_p2() {
    tmp_136_13_fu_3892_p2 = (counter_s_reg_997.read() | ap_const_lv14_E);
}

void sampleRNN_GRU::thread_tmp_136_14_fu_3915_p2() {
    tmp_136_14_fu_3915_p2 = (counter_s_reg_997.read() | ap_const_lv14_F);
}

void sampleRNN_GRU::thread_tmp_136_15_fu_3938_p2() {
    tmp_136_15_fu_3938_p2 = (!ap_const_lv14_10.is_01() || !counter_s_reg_997.read().is_01())? sc_lv<14>(): (sc_biguint<14>(ap_const_lv14_10) + sc_biguint<14>(counter_s_reg_997.read()));
}

void sampleRNN_GRU::thread_tmp_136_1_fu_2828_p2() {
    tmp_136_1_fu_2828_p2 = (counter_s_reg_997.read() | ap_const_lv14_2);
}

void sampleRNN_GRU::thread_tmp_136_2_fu_2851_p2() {
    tmp_136_2_fu_2851_p2 = (counter_s_reg_997.read() | ap_const_lv14_3);
}

void sampleRNN_GRU::thread_tmp_136_3_fu_2930_p2() {
    tmp_136_3_fu_2930_p2 = (counter_s_reg_997.read() | ap_const_lv14_4);
}

void sampleRNN_GRU::thread_tmp_136_4_fu_2953_p2() {
    tmp_136_4_fu_2953_p2 = (counter_s_reg_997.read() | ap_const_lv14_5);
}

void sampleRNN_GRU::thread_tmp_136_5_fu_3124_p2() {
    tmp_136_5_fu_3124_p2 = (counter_s_reg_997.read() | ap_const_lv14_6);
}

void sampleRNN_GRU::thread_tmp_136_6_fu_3147_p2() {
    tmp_136_6_fu_3147_p2 = (counter_s_reg_997.read() | ap_const_lv14_7);
}

void sampleRNN_GRU::thread_tmp_136_7_fu_3316_p2() {
    tmp_136_7_fu_3316_p2 = (counter_s_reg_997.read() | ap_const_lv14_8);
}

void sampleRNN_GRU::thread_tmp_136_8_fu_3339_p2() {
    tmp_136_8_fu_3339_p2 = (counter_s_reg_997.read() | ap_const_lv14_9);
}

void sampleRNN_GRU::thread_tmp_136_9_fu_3508_p2() {
    tmp_136_9_fu_3508_p2 = (counter_s_reg_997.read() | ap_const_lv14_A);
}

void sampleRNN_GRU::thread_tmp_136_fu_4260_p4() {
    tmp_136_fu_4260_p4 = p_Val2_20_13_fu_4243_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_136_s_fu_2794_p2() {
    tmp_136_s_fu_2794_p2 = (counter_s_reg_997.read() | ap_const_lv14_1);
}

void sampleRNN_GRU::thread_tmp_137_fu_4293_p4() {
    tmp_137_fu_4293_p4 = p_Val2_23_13_fu_4255_p2.read().range(47, 16);
}

void sampleRNN_GRU::thread_tmp_13_fu_1401_p3() {
    tmp_13_fu_1401_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_50_reg_4567.read());
}

void sampleRNN_GRU::thread_tmp_142_fu_1948_p1() {
    tmp_142_fu_1948_p1 = ireg_V_3_fu_1922_p1.read().range(52-1, 0);
}

void sampleRNN_GRU::thread_tmp_143_fu_2023_p1() {
    tmp_143_fu_2023_p1 = man_V_11_fu_1978_p3.read().range(32-1, 0);
}

void sampleRNN_GRU::thread_tmp_144_fu_2027_p4() {
    tmp_144_fu_2027_p4 = sh_amt_3_fu_2009_p3.read().range(11, 5);
}

void sampleRNN_GRU::thread_tmp_145_fu_2100_p1() {
    tmp_145_fu_2100_p1 = tmp_57_fu_2095_p2.read().range(32-1, 0);
}

void sampleRNN_GRU::thread_tmp_146_fu_2206_p1() {
    tmp_146_fu_2206_p1 = ireg_V_4_fu_2202_p1.read().range(63-1, 0);
}

void sampleRNN_GRU::thread_tmp_148_fu_2228_p1() {
    tmp_148_fu_2228_p1 = ireg_V_4_fu_2202_p1.read().range(52-1, 0);
}

void sampleRNN_GRU::thread_tmp_149_fu_2303_p1() {
    tmp_149_fu_2303_p1 = man_V_14_fu_2258_p3.read().range(32-1, 0);
}

void sampleRNN_GRU::thread_tmp_14_fu_1251_p1() {
    tmp_14_fu_1251_p1 = esl_zext<54,32>(sh_amt_cast_fu_1243_p1.read());
}

void sampleRNN_GRU::thread_tmp_150_fu_2307_p4() {
    tmp_150_fu_2307_p4 = sh_amt_4_fu_2289_p3.read().range(11, 5);
}

void sampleRNN_GRU::thread_tmp_151_fu_2380_p1() {
    tmp_151_fu_2380_p1 = tmp_73_fu_2375_p2.read().range(32-1, 0);
}

void sampleRNN_GRU::thread_tmp_152_fu_2486_p1() {
    tmp_152_fu_2486_p1 = ireg_V_5_fu_2482_p1.read().range(63-1, 0);
}

void sampleRNN_GRU::thread_tmp_154_fu_2508_p1() {
    tmp_154_fu_2508_p1 = ireg_V_5_fu_2482_p1.read().range(52-1, 0);
}

void sampleRNN_GRU::thread_tmp_155_fu_2583_p1() {
    tmp_155_fu_2583_p1 = man_V_17_fu_2538_p3.read().range(32-1, 0);
}

void sampleRNN_GRU::thread_tmp_156_fu_2587_p4() {
    tmp_156_fu_2587_p4 = sh_amt_5_fu_2569_p3.read().range(11, 5);
}

void sampleRNN_GRU::thread_tmp_157_fu_2660_p1() {
    tmp_157_fu_2660_p1 = tmp_87_fu_2655_p2.read().range(32-1, 0);
}

void sampleRNN_GRU::thread_tmp_159_fu_4414_p1() {
    tmp_159_fu_4414_p1 = num_zeros_fu_4400_p3.read().range(8-1, 0);
}

void sampleRNN_GRU::thread_tmp_15_fu_1392_p2() {
    tmp_15_fu_1392_p2 = (!tmp_40_fu_1366_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_40_fu_1366_p1.read() == ap_const_lv63_0);
}

void sampleRNN_GRU::thread_tmp_160_fu_2800_p1() {
    tmp_160_fu_2800_p1 = j_reg_986.read().range(6-1, 0);
}

void sampleRNN_GRU::thread_tmp_16_fu_1255_p2() {
    tmp_16_fu_1255_p2 = (!man_V_2_reg_4513.read().is_01() || !tmp_14_fu_1251_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_2_reg_4513.read()) >> (unsigned short)tmp_14_fu_1251_p1.read().to_uint();
}

void sampleRNN_GRU::thread_tmp_17_fu_1271_p2() {
    tmp_17_fu_1271_p2 = (!sh_amt_cast_fu_1243_p1.read().is_01())? sc_lv<32>(): tmp_24_reg_4529.read() << (unsigned short)sh_amt_cast_fu_1243_p1.read().to_uint();
}

void sampleRNN_GRU::thread_tmp_18_fu_1431_p2() {
    tmp_18_fu_1431_p2 = (!F2_1_fu_1425_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_1_fu_1425_p2.read()) > sc_bigint<12>(ap_const_lv12_10));
}

void sampleRNN_GRU::thread_tmp_19_fu_1437_p2() {
    tmp_19_fu_1437_p2 = (!ap_const_lv12_FF0.is_01() || !F2_1_fu_1425_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FF0) + sc_biguint<12>(F2_1_fu_1425_p2.read()));
}

void sampleRNN_GRU::thread_tmp_1_fu_1151_p2() {
    tmp_1_fu_1151_p2 = (!F2_fu_1145_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_fu_1145_p2.read()) > sc_bigint<12>(ap_const_lv12_10));
}

void sampleRNN_GRU::thread_tmp_20_fu_1443_p2() {
    tmp_20_fu_1443_p2 = (!ap_const_lv12_10.is_01() || !F2_1_fu_1425_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_10) - sc_biguint<12>(F2_1_fu_1425_p2.read()));
}

void sampleRNN_GRU::thread_tmp_21_fu_1457_p2() {
    tmp_21_fu_1457_p2 = (!F2_1_fu_1425_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): sc_lv<1>(F2_1_fu_1425_p2.read() == ap_const_lv12_10);
}

void sampleRNN_GRU::thread_tmp_22_fu_1108_p1() {
    tmp_22_fu_1108_p1 = ireg_V_fu_1082_p1.read().range(52-1, 0);
}

void sampleRNN_GRU::thread_tmp_23_fu_1526_p2() {
    tmp_23_fu_1526_p2 = (!sh_amt_1_reg_4583.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_1_reg_4583.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void sampleRNN_GRU::thread_tmp_24_fu_1183_p1() {
    tmp_24_fu_1183_p1 = man_V_2_fu_1138_p3.read().range(32-1, 0);
}

void sampleRNN_GRU::thread_tmp_25_fu_1798_p1() {
    tmp_25_fu_1798_p1 = esl_zext<64,14>(i_2_reg_891_pp2_iter2_reg.read());
}

void sampleRNN_GRU::thread_tmp_27_fu_1678_p1() {
    tmp_27_fu_1678_p1 = esl_zext<12,11>(exp_tmp_V_2_reg_4627.read());
}

void sampleRNN_GRU::thread_tmp_28_fu_1681_p3() {
    tmp_28_fu_1681_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_77_reg_4632.read());
}

void sampleRNN_GRU::thread_tmp_29_fu_1531_p1() {
    tmp_29_fu_1531_p1 = esl_zext<54,32>(sh_amt_1_cast_fu_1523_p1.read());
}

void sampleRNN_GRU::thread_tmp_30_fu_1672_p2() {
    tmp_30_fu_1672_p2 = (!tmp_72_fu_1646_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_72_fu_1646_p1.read() == ap_const_lv63_0);
}

void sampleRNN_GRU::thread_tmp_31_fu_1187_p4() {
    tmp_31_fu_1187_p4 = sh_amt_fu_1169_p3.read().range(11, 5);
}

void sampleRNN_GRU::thread_tmp_32_fu_1535_p2() {
    tmp_32_fu_1535_p2 = (!man_V_5_reg_4578.read().is_01() || !tmp_29_fu_1531_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_5_reg_4578.read()) >> (unsigned short)tmp_29_fu_1531_p1.read().to_uint();
}

void sampleRNN_GRU::thread_tmp_33_fu_1551_p2() {
    tmp_33_fu_1551_p2 = (!sh_amt_1_cast_fu_1523_p1.read().is_01())? sc_lv<32>(): tmp_56_reg_4594.read() << (unsigned short)sh_amt_1_cast_fu_1523_p1.read().to_uint();
}

void sampleRNN_GRU::thread_tmp_34_fu_1260_p1() {
    tmp_34_fu_1260_p1 = tmp_16_fu_1255_p2.read().range(32-1, 0);
}

void sampleRNN_GRU::thread_tmp_35_fu_1711_p2() {
    tmp_35_fu_1711_p2 = (!F2_2_fu_1705_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_2_fu_1705_p2.read()) > sc_bigint<12>(ap_const_lv12_10));
}

void sampleRNN_GRU::thread_tmp_36_fu_1717_p2() {
    tmp_36_fu_1717_p2 = (!ap_const_lv12_FF0.is_01() || !F2_2_fu_1705_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FF0) + sc_biguint<12>(F2_2_fu_1705_p2.read()));
}

void sampleRNN_GRU::thread_tmp_37_fu_1723_p2() {
    tmp_37_fu_1723_p2 = (!ap_const_lv12_10.is_01() || !F2_2_fu_1705_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_10) - sc_biguint<12>(F2_2_fu_1705_p2.read()));
}

void sampleRNN_GRU::thread_tmp_38_fu_1737_p2() {
    tmp_38_fu_1737_p2 = (!F2_2_fu_1705_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): sc_lv<1>(F2_2_fu_1705_p2.read() == ap_const_lv12_10);
}

void sampleRNN_GRU::thread_tmp_39_fu_1806_p2() {
    tmp_39_fu_1806_p2 = (!sh_amt_2_reg_4648.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_2_reg_4648.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void sampleRNN_GRU::thread_tmp_3_fu_1157_p2() {
    tmp_3_fu_1157_p2 = (!ap_const_lv12_FF0.is_01() || !F2_fu_1145_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FF0) + sc_biguint<12>(F2_fu_1145_p2.read()));
}

void sampleRNN_GRU::thread_tmp_40_fu_1366_p1() {
    tmp_40_fu_1366_p1 = ireg_V_1_fu_1362_p1.read().range(63-1, 0);
}

void sampleRNN_GRU::thread_tmp_41_fu_1811_p1() {
    tmp_41_fu_1811_p1 = esl_zext<54,32>(sh_amt_2_cast_fu_1803_p1.read());
}

void sampleRNN_GRU::thread_tmp_42_fu_1815_p2() {
    tmp_42_fu_1815_p2 = (!man_V_8_reg_4643.read().is_01() || !tmp_41_fu_1811_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_8_reg_4643.read()) >> (unsigned short)tmp_41_fu_1811_p1.read().to_uint();
}

void sampleRNN_GRU::thread_tmp_43_fu_1831_p2() {
    tmp_43_fu_1831_p2 = (!sh_amt_2_cast_fu_1803_p1.read().is_01())? sc_lv<32>(): tmp_88_reg_4659.read() << (unsigned short)sh_amt_2_cast_fu_1803_p1.read().to_uint();
}

void sampleRNN_GRU::thread_tmp_45_fu_2078_p1() {
    tmp_45_fu_2078_p1 = esl_zext<64,14>(i_3_reg_903_pp3_iter2_reg.read());
}

void sampleRNN_GRU::thread_tmp_46_fu_1958_p1() {
    tmp_46_fu_1958_p1 = esl_zext<12,11>(exp_tmp_V_3_reg_4692.read());
}

void sampleRNN_GRU::thread_tmp_47_fu_1961_p3() {
    tmp_47_fu_1961_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_142_reg_4697.read());
}

void sampleRNN_GRU::thread_tmp_48_fu_1952_p2() {
    tmp_48_fu_1952_p2 = (!tmp_101_fu_1926_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_fu_1926_p1.read() == ap_const_lv63_0);
}

void sampleRNN_GRU::thread_tmp_49_fu_1991_p2() {
    tmp_49_fu_1991_p2 = (!F2_3_fu_1985_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_3_fu_1985_p2.read()) > sc_bigint<12>(ap_const_lv12_10));
}

void sampleRNN_GRU::thread_tmp_4_fu_1118_p1() {
    tmp_4_fu_1118_p1 = esl_zext<12,11>(exp_tmp_V_reg_4497.read());
}

void sampleRNN_GRU::thread_tmp_50_fu_1388_p1() {
    tmp_50_fu_1388_p1 = ireg_V_1_fu_1362_p1.read().range(52-1, 0);
}

void sampleRNN_GRU::thread_tmp_51_fu_1997_p2() {
    tmp_51_fu_1997_p2 = (!ap_const_lv12_FF0.is_01() || !F2_3_fu_1985_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FF0) + sc_biguint<12>(F2_3_fu_1985_p2.read()));
}

void sampleRNN_GRU::thread_tmp_52_fu_2003_p2() {
    tmp_52_fu_2003_p2 = (!ap_const_lv12_10.is_01() || !F2_3_fu_1985_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_10) - sc_biguint<12>(F2_3_fu_1985_p2.read()));
}

void sampleRNN_GRU::thread_tmp_53_fu_2017_p2() {
    tmp_53_fu_2017_p2 = (!F2_3_fu_1985_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): sc_lv<1>(F2_3_fu_1985_p2.read() == ap_const_lv12_10);
}

void sampleRNN_GRU::thread_tmp_54_fu_2086_p2() {
    tmp_54_fu_2086_p2 = (!sh_amt_3_reg_4713.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_3_reg_4713.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void sampleRNN_GRU::thread_tmp_55_fu_2091_p1() {
    tmp_55_fu_2091_p1 = esl_zext<54,32>(sh_amt_3_cast_fu_2083_p1.read());
}

void sampleRNN_GRU::thread_tmp_56_fu_1463_p1() {
    tmp_56_fu_1463_p1 = man_V_5_fu_1418_p3.read().range(32-1, 0);
}

void sampleRNN_GRU::thread_tmp_57_fu_2095_p2() {
    tmp_57_fu_2095_p2 = (!man_V_11_reg_4708.read().is_01() || !tmp_55_fu_2091_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_11_reg_4708.read()) >> (unsigned short)tmp_55_fu_2091_p1.read().to_uint();
}

void sampleRNN_GRU::thread_tmp_58_fu_1467_p4() {
    tmp_58_fu_1467_p4 = sh_amt_1_fu_1449_p3.read().range(11, 5);
}

void sampleRNN_GRU::thread_tmp_59_fu_2111_p2() {
    tmp_59_fu_2111_p2 = (!sh_amt_3_cast_fu_2083_p1.read().is_01())? sc_lv<32>(): tmp_143_reg_4724.read() << (unsigned short)sh_amt_3_cast_fu_2083_p1.read().to_uint();
}

void sampleRNN_GRU::thread_tmp_5_fu_1163_p2() {
    tmp_5_fu_1163_p2 = (!ap_const_lv12_10.is_01() || !F2_fu_1145_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_10) - sc_biguint<12>(F2_fu_1145_p2.read()));
}

void sampleRNN_GRU::thread_tmp_61_fu_1540_p1() {
    tmp_61_fu_1540_p1 = tmp_32_fu_1535_p2.read().range(32-1, 0);
}

void sampleRNN_GRU::thread_tmp_62_fu_2358_p1() {
    tmp_62_fu_2358_p1 = esl_zext<64,8>(i_4_reg_915_pp4_iter2_reg.read());
}

void sampleRNN_GRU::thread_tmp_63_fu_2238_p1() {
    tmp_63_fu_2238_p1 = esl_zext<12,11>(exp_tmp_V_4_reg_4757.read());
}

void sampleRNN_GRU::thread_tmp_64_fu_2241_p3() {
    tmp_64_fu_2241_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_148_reg_4762.read());
}

void sampleRNN_GRU::thread_tmp_65_fu_2232_p2() {
    tmp_65_fu_2232_p2 = (!tmp_146_fu_2206_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_146_fu_2206_p1.read() == ap_const_lv63_0);
}

void sampleRNN_GRU::thread_tmp_66_fu_2271_p2() {
    tmp_66_fu_2271_p2 = (!F2_4_fu_2265_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_4_fu_2265_p2.read()) > sc_bigint<12>(ap_const_lv12_10));
}

void sampleRNN_GRU::thread_tmp_67_fu_2277_p2() {
    tmp_67_fu_2277_p2 = (!ap_const_lv12_FF0.is_01() || !F2_4_fu_2265_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FF0) + sc_biguint<12>(F2_4_fu_2265_p2.read()));
}

void sampleRNN_GRU::thread_tmp_68_fu_2283_p2() {
    tmp_68_fu_2283_p2 = (!ap_const_lv12_10.is_01() || !F2_4_fu_2265_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_10) - sc_biguint<12>(F2_4_fu_2265_p2.read()));
}

void sampleRNN_GRU::thread_tmp_69_fu_2297_p2() {
    tmp_69_fu_2297_p2 = (!F2_4_fu_2265_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): sc_lv<1>(F2_4_fu_2265_p2.read() == ap_const_lv12_10);
}

void sampleRNN_GRU::thread_tmp_6_fu_1177_p2() {
    tmp_6_fu_1177_p2 = (!F2_fu_1145_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): sc_lv<1>(F2_fu_1145_p2.read() == ap_const_lv12_10);
}

void sampleRNN_GRU::thread_tmp_70_fu_2366_p2() {
    tmp_70_fu_2366_p2 = (!sh_amt_4_reg_4778.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_4_reg_4778.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void sampleRNN_GRU::thread_tmp_71_fu_2371_p1() {
    tmp_71_fu_2371_p1 = esl_zext<54,32>(sh_amt_4_cast_fu_2363_p1.read());
}

void sampleRNN_GRU::thread_tmp_72_fu_1646_p1() {
    tmp_72_fu_1646_p1 = ireg_V_2_fu_1642_p1.read().range(63-1, 0);
}

void sampleRNN_GRU::thread_tmp_73_fu_2375_p2() {
    tmp_73_fu_2375_p2 = (!man_V_14_reg_4773.read().is_01() || !tmp_71_fu_2371_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_14_reg_4773.read()) >> (unsigned short)tmp_71_fu_2371_p1.read().to_uint();
}

void sampleRNN_GRU::thread_tmp_74_fu_2391_p2() {
    tmp_74_fu_2391_p2 = (!sh_amt_4_cast_fu_2363_p1.read().is_01())? sc_lv<32>(): tmp_149_reg_4789.read() << (unsigned short)sh_amt_4_cast_fu_2363_p1.read().to_uint();
}

void sampleRNN_GRU::thread_tmp_76_fu_2638_p1() {
    tmp_76_fu_2638_p1 = esl_zext<64,8>(i_5_reg_927_pp5_iter2_reg.read());
}

void sampleRNN_GRU::thread_tmp_77_fu_1668_p1() {
    tmp_77_fu_1668_p1 = ireg_V_2_fu_1642_p1.read().range(52-1, 0);
}

void sampleRNN_GRU::thread_tmp_78_fu_2518_p1() {
    tmp_78_fu_2518_p1 = esl_zext<12,11>(exp_tmp_V_5_reg_4822.read());
}

void sampleRNN_GRU::thread_tmp_79_fu_2521_p3() {
    tmp_79_fu_2521_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_154_reg_4827.read());
}

void sampleRNN_GRU::thread_tmp_7_fu_1518_p1() {
    tmp_7_fu_1518_p1 = esl_zext<64,7>(i_1_reg_879_pp1_iter2_reg.read());
}

void sampleRNN_GRU::thread_tmp_80_fu_2512_p2() {
    tmp_80_fu_2512_p2 = (!tmp_152_fu_2486_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_152_fu_2486_p1.read() == ap_const_lv63_0);
}

void sampleRNN_GRU::thread_tmp_81_fu_2551_p2() {
    tmp_81_fu_2551_p2 = (!F2_5_fu_2545_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_5_fu_2545_p2.read()) > sc_bigint<12>(ap_const_lv12_10));
}

void sampleRNN_GRU::thread_tmp_82_fu_2557_p2() {
    tmp_82_fu_2557_p2 = (!ap_const_lv12_FF0.is_01() || !F2_5_fu_2545_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FF0) + sc_biguint<12>(F2_5_fu_2545_p2.read()));
}

void sampleRNN_GRU::thread_tmp_83_fu_2563_p2() {
    tmp_83_fu_2563_p2 = (!ap_const_lv12_10.is_01() || !F2_5_fu_2545_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_10) - sc_biguint<12>(F2_5_fu_2545_p2.read()));
}

void sampleRNN_GRU::thread_tmp_84_fu_2577_p2() {
    tmp_84_fu_2577_p2 = (!F2_5_fu_2545_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): sc_lv<1>(F2_5_fu_2545_p2.read() == ap_const_lv12_10);
}

void sampleRNN_GRU::thread_tmp_85_fu_2646_p2() {
    tmp_85_fu_2646_p2 = (!sh_amt_5_reg_4843.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_5_reg_4843.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void sampleRNN_GRU::thread_tmp_86_fu_2651_p1() {
    tmp_86_fu_2651_p1 = esl_zext<54,32>(sh_amt_5_cast_fu_2643_p1.read());
}

void sampleRNN_GRU::thread_tmp_87_fu_2655_p2() {
    tmp_87_fu_2655_p2 = (!man_V_17_reg_4838.read().is_01() || !tmp_86_fu_2651_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_17_reg_4838.read()) >> (unsigned short)tmp_86_fu_2651_p1.read().to_uint();
}

void sampleRNN_GRU::thread_tmp_88_fu_1743_p1() {
    tmp_88_fu_1743_p1 = man_V_8_fu_1698_p3.read().range(32-1, 0);
}

void sampleRNN_GRU::thread_tmp_89_fu_2671_p2() {
    tmp_89_fu_2671_p2 = (!sh_amt_5_cast_fu_2643_p1.read().is_01())? sc_lv<32>(): tmp_155_reg_4854.read() << (unsigned short)sh_amt_5_cast_fu_2643_p1.read().to_uint();
}

void sampleRNN_GRU::thread_tmp_8_fu_1086_p1() {
    tmp_8_fu_1086_p1 = ireg_V_fu_1082_p1.read().range(63-1, 0);
}

void sampleRNN_GRU::thread_tmp_90_fu_1747_p4() {
    tmp_90_fu_1747_p4 = sh_amt_2_fu_1729_p3.read().range(11, 5);
}

void sampleRNN_GRU::thread_tmp_91_fu_2766_p1() {
    tmp_91_fu_2766_p1 = esl_zext<64,8>(i_6_reg_939.read());
}

void sampleRNN_GRU::thread_tmp_93_fu_1820_p1() {
    tmp_93_fu_1820_p1 = tmp_42_fu_1815_p2.read().range(32-1, 0);
}

void sampleRNN_GRU::thread_tmp_94_fu_4360_p1() {
    tmp_94_fu_4360_p1 = esl_zext<64,9>(i_7_reg_1008.read());
}

void sampleRNN_GRU::thread_tmp_95_fu_4380_p2() {
    tmp_95_fu_4380_p2 = (!p_Val2_10_reg_5528.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Val2_10_reg_5528.read() == ap_const_lv32_0);
}

void sampleRNN_GRU::thread_tmp_96_fu_4374_p2() {
    tmp_96_fu_4374_p2 = (!ap_const_lv32_0.is_01() || !out1_V_q0.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_0) - sc_biguint<32>(out1_V_q0.read()));
}

void sampleRNN_GRU::thread_tmp_97_fu_4432_p2() {
    tmp_97_fu_4432_p2 = (!p_Result_4_fu_4422_p4.read().is_01() || !ap_const_lv8_9E.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_4_fu_4422_p4.read() != ap_const_lv8_9E);
}

void sampleRNN_GRU::thread_tmp_98_fu_4438_p2() {
    tmp_98_fu_4438_p2 = (!ap_const_lv8_8E.is_01() || !tmp_159_reg_5560_pp6_iter8_reg.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_8E) - sc_biguint<8>(tmp_159_reg_5560_pp6_iter8_reg.read()));
}

void sampleRNN_GRU::thread_tmp_99_fu_4443_p1() {
    tmp_99_fu_4443_p1 = esl_zext<8,1>(tmp_97_reg_5570.read());
}

void sampleRNN_GRU::thread_tmp_9_fu_1112_p2() {
    tmp_9_fu_1112_p2 = (!tmp_8_fu_1086_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_8_fu_1086_p1.read() == ap_const_lv63_0);
}

void sampleRNN_GRU::thread_tmp_fu_1238_p1() {
    tmp_fu_1238_p1 = esl_zext<64,7>(i_reg_867_pp0_iter2_reg.read());
}

void sampleRNN_GRU::thread_tmp_s_fu_1121_p3() {
    tmp_s_fu_1121_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_22_reg_4502.read());
}

void sampleRNN_GRU::thread_w_hh_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        w_hh_V_address0 =  (sc_lv<14>) (tmp_124_14_fu_3926_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        w_hh_V_address0 =  (sc_lv<14>) (tmp_124_12_fu_3734_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        w_hh_V_address0 =  (sc_lv<14>) (tmp_124_10_fu_3542_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        w_hh_V_address0 =  (sc_lv<14>) (tmp_124_9_fu_3350_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        w_hh_V_address0 =  (sc_lv<14>) (tmp_124_7_fu_3158_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        w_hh_V_address0 =  (sc_lv<14>) (tmp_124_5_fu_2964_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        w_hh_V_address0 =  (sc_lv<14>) (tmp_124_3_fu_2862_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        w_hh_V_address0 =  (sc_lv<14>) (tmp_104_fu_2782_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp3_iter3.read(), ap_const_logic_1))) {
        w_hh_V_address0 =  (sc_lv<14>) (tmp_45_fu_2078_p1.read());
    } else {
        w_hh_V_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void sampleRNN_GRU::thread_w_hh_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        w_hh_V_address1 =  (sc_lv<14>) (tmp_124_13_fu_3903_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        w_hh_V_address1 =  (sc_lv<14>) (tmp_124_11_fu_3711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        w_hh_V_address1 =  (sc_lv<14>) (tmp_124_s_fu_3519_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        w_hh_V_address1 =  (sc_lv<14>) (tmp_124_8_fu_3327_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        w_hh_V_address1 =  (sc_lv<14>) (tmp_124_6_fu_3135_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        w_hh_V_address1 =  (sc_lv<14>) (tmp_124_4_fu_2941_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        w_hh_V_address1 =  (sc_lv<14>) (tmp_124_2_fu_2839_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        w_hh_V_address1 =  (sc_lv<14>) (tmp_124_1_fu_2810_p1.read());
    } else {
        w_hh_V_address1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void sampleRNN_GRU::thread_w_hh_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter3.read(), ap_const_logic_1)))) {
        w_hh_V_ce0 = ap_const_logic_1;
    } else {
        w_hh_V_ce0 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_w_hh_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        w_hh_V_ce1 = ap_const_logic_1;
    } else {
        w_hh_V_ce1 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_w_hh_V_d0() {
    w_hh_V_d0 = (!or_cond11_fu_2175_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond11_fu_2175_p2.read()[0].to_bool())? newSel14_fu_2167_p3.read(): ap_const_lv32_0);
}

void sampleRNN_GRU::thread_w_hh_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter3.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_4677_pp3_iter2_reg.read()))) {
        w_hh_V_we0 = ap_const_logic_1;
    } else {
        w_hh_V_we0 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_w_ih_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        w_ih_V_address0 =  (sc_lv<14>) (tmp_124_14_fu_3926_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        w_ih_V_address0 =  (sc_lv<14>) (tmp_124_12_fu_3734_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        w_ih_V_address0 =  (sc_lv<14>) (tmp_124_10_fu_3542_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        w_ih_V_address0 =  (sc_lv<14>) (tmp_124_9_fu_3350_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        w_ih_V_address0 =  (sc_lv<14>) (tmp_124_7_fu_3158_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        w_ih_V_address0 =  (sc_lv<14>) (tmp_124_5_fu_2964_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        w_ih_V_address0 =  (sc_lv<14>) (tmp_124_3_fu_2862_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        w_ih_V_address0 =  (sc_lv<14>) (tmp_104_fu_2782_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp2_iter3.read(), ap_const_logic_1))) {
        w_ih_V_address0 =  (sc_lv<14>) (tmp_25_fu_1798_p1.read());
    } else {
        w_ih_V_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void sampleRNN_GRU::thread_w_ih_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        w_ih_V_address1 =  (sc_lv<14>) (tmp_124_13_fu_3903_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        w_ih_V_address1 =  (sc_lv<14>) (tmp_124_11_fu_3711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        w_ih_V_address1 =  (sc_lv<14>) (tmp_124_s_fu_3519_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        w_ih_V_address1 =  (sc_lv<14>) (tmp_124_8_fu_3327_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        w_ih_V_address1 =  (sc_lv<14>) (tmp_124_6_fu_3135_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        w_ih_V_address1 =  (sc_lv<14>) (tmp_124_4_fu_2941_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        w_ih_V_address1 =  (sc_lv<14>) (tmp_124_2_fu_2839_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        w_ih_V_address1 =  (sc_lv<14>) (tmp_124_1_fu_2810_p1.read());
    } else {
        w_ih_V_address1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void sampleRNN_GRU::thread_w_ih_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp2_iter3.read(), ap_const_logic_1)))) {
        w_ih_V_ce0 = ap_const_logic_1;
    } else {
        w_ih_V_ce0 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_w_ih_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        w_ih_V_ce1 = ap_const_logic_1;
    } else {
        w_ih_V_ce1 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_w_ih_V_d0() {
    w_ih_V_d0 = (!or_cond8_fu_1895_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond8_fu_1895_p2.read()[0].to_bool())? newSel10_fu_1887_p3.read(): ap_const_lv32_0);
}

void sampleRNN_GRU::thread_w_ih_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp2_iter3.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_4612_pp2_iter2_reg.read()))) {
        w_ih_V_we0 = ap_const_logic_1;
    } else {
        w_ih_V_we0 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_x_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        x_V_address0 =  (sc_lv<6>) (tmp_125_14_fu_3932_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        x_V_address0 =  (sc_lv<6>) (tmp_125_12_fu_3740_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        x_V_address0 =  (sc_lv<6>) (tmp_125_10_fu_3548_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        x_V_address0 =  (sc_lv<6>) (tmp_125_9_fu_3356_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        x_V_address0 =  (sc_lv<6>) (tmp_125_7_fu_3164_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        x_V_address0 =  (sc_lv<6>) (tmp_125_5_fu_2970_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        x_V_address0 =  (sc_lv<6>) (tmp_125_3_fu_2868_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        x_V_address0 =  (sc_lv<6>) (tmp_105_fu_2788_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        x_V_address0 =  (sc_lv<6>) (tmp_fu_1238_p1.read());
    } else {
        x_V_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void sampleRNN_GRU::thread_x_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        x_V_address1 =  (sc_lv<6>) (tmp_125_13_fu_3909_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        x_V_address1 =  (sc_lv<6>) (tmp_125_11_fu_3717_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        x_V_address1 =  (sc_lv<6>) (tmp_125_s_fu_3525_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        x_V_address1 =  (sc_lv<6>) (tmp_125_8_fu_3333_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        x_V_address1 =  (sc_lv<6>) (tmp_125_6_fu_3141_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        x_V_address1 =  (sc_lv<6>) (tmp_125_4_fu_2947_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        x_V_address1 =  (sc_lv<6>) (tmp_125_2_fu_2845_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        x_V_address1 =  (sc_lv<6>) (tmp_125_1_fu_2816_p1.read());
    } else {
        x_V_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void sampleRNN_GRU::thread_x_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1)))) {
        x_V_ce0 = ap_const_logic_1;
    } else {
        x_V_ce0 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_x_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        x_V_ce1 = ap_const_logic_1;
    } else {
        x_V_ce1 = ap_const_logic_0;
    }
}

void sampleRNN_GRU::thread_x_V_d0() {
    x_V_d0 = (!or_cond2_fu_1335_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond2_fu_1335_p2.read()[0].to_bool())? newSel2_fu_1327_p3.read(): ap_const_lv32_0);
}

void sampleRNN_GRU::thread_x_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_4482_pp0_iter2_reg.read()))) {
        x_V_we0 = ap_const_logic_1;
    } else {
        x_V_we0 = ap_const_logic_0;
    }
}

}

