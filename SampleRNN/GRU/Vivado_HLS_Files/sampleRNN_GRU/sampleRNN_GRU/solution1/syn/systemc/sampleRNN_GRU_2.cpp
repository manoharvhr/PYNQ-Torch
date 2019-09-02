#include "sampleRNN_GRU.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sampleRNN_GRU::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()) && 
             esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read())) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read())) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read())) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
            ap_enable_reg_pp0_iter3 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state7.read()) && 
             esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp1_stage0_subdone.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp1_stage0_subdone.read())) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state7.read())) {
                ap_enable_reg_pp1_iter1 = (ap_condition_pp1_exit_iter0_state7.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp1_stage0_subdone.read())) {
            ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp1_stage0_subdone.read())) {
            ap_enable_reg_pp1_iter3 = ap_enable_reg_pp1_iter2.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
            ap_enable_reg_pp1_iter3 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp2_exit_iter0_state12.read()) && 
             esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_subdone.read()))) {
            ap_enable_reg_pp2_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
            ap_enable_reg_pp2_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_subdone.read())) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp2_exit_iter0_state12.read())) {
                ap_enable_reg_pp2_iter1 = (ap_condition_pp2_exit_iter0_state12.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp2_iter1 = ap_enable_reg_pp2_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_subdone.read())) {
            ap_enable_reg_pp2_iter2 = ap_enable_reg_pp2_iter1.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_subdone.read())) {
            ap_enable_reg_pp2_iter3 = ap_enable_reg_pp2_iter2.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
            ap_enable_reg_pp2_iter3 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp3_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp3_exit_iter0_state17.read()) && 
             esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp3_stage0_subdone.read()))) {
            ap_enable_reg_pp3_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
            ap_enable_reg_pp3_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp3_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp3_stage0_subdone.read())) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp3_exit_iter0_state17.read())) {
                ap_enable_reg_pp3_iter1 = (ap_condition_pp3_exit_iter0_state17.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp3_iter1 = ap_enable_reg_pp3_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp3_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp3_stage0_subdone.read())) {
            ap_enable_reg_pp3_iter2 = ap_enable_reg_pp3_iter1.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp3_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp3_stage0_subdone.read())) {
            ap_enable_reg_pp3_iter3 = ap_enable_reg_pp3_iter2.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
            ap_enable_reg_pp3_iter3 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp4_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp4_exit_iter0_state22.read()) && 
             esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp4_stage0_subdone.read()))) {
            ap_enable_reg_pp4_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
            ap_enable_reg_pp4_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp4_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp4_stage0_subdone.read())) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp4_exit_iter0_state22.read())) {
                ap_enable_reg_pp4_iter1 = (ap_condition_pp4_exit_iter0_state22.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp4_iter1 = ap_enable_reg_pp4_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp4_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp4_stage0_subdone.read())) {
            ap_enable_reg_pp4_iter2 = ap_enable_reg_pp4_iter1.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp4_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp4_stage0_subdone.read())) {
            ap_enable_reg_pp4_iter3 = ap_enable_reg_pp4_iter2.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
            ap_enable_reg_pp4_iter3 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp5_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp5_exit_iter0_state27.read()) && 
             esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp5_stage0_subdone.read()))) {
            ap_enable_reg_pp5_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
            ap_enable_reg_pp5_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp5_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp5_stage0_subdone.read())) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp5_exit_iter0_state27.read())) {
                ap_enable_reg_pp5_iter1 = (ap_condition_pp5_exit_iter0_state27.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp5_iter1 = ap_enable_reg_pp5_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp5_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp5_stage0_subdone.read())) {
            ap_enable_reg_pp5_iter2 = ap_enable_reg_pp5_iter1.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp5_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp5_stage0_subdone.read())) {
            ap_enable_reg_pp5_iter3 = ap_enable_reg_pp5_iter2.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
            ap_enable_reg_pp5_iter3 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp6_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp6_exit_iter0_state46.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
             esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_subdone.read()))) {
            ap_enable_reg_pp6_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(exitcond7_fu_2754_p2.read(), ap_const_lv1_1) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
            ap_enable_reg_pp6_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp6_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_subdone.read())) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp6_exit_iter0_state46.read())) {
                ap_enable_reg_pp6_iter1 = (ap_condition_pp6_exit_iter0_state46.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp6_iter1 = ap_enable_reg_pp6_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp6_iter10 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_subdone.read())) {
            ap_enable_reg_pp6_iter10 = ap_enable_reg_pp6_iter9.read();
        } else if ((esl_seteq<1,1,1>(exitcond7_fu_2754_p2.read(), ap_const_lv1_1) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
            ap_enable_reg_pp6_iter10 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp6_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_subdone.read())) {
            ap_enable_reg_pp6_iter2 = ap_enable_reg_pp6_iter1.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp6_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_subdone.read())) {
            ap_enable_reg_pp6_iter3 = ap_enable_reg_pp6_iter2.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp6_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_subdone.read())) {
            ap_enable_reg_pp6_iter4 = ap_enable_reg_pp6_iter3.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp6_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_subdone.read())) {
            ap_enable_reg_pp6_iter5 = ap_enable_reg_pp6_iter4.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp6_iter6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_subdone.read())) {
            ap_enable_reg_pp6_iter6 = ap_enable_reg_pp6_iter5.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp6_iter7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_subdone.read())) {
            ap_enable_reg_pp6_iter7 = ap_enable_reg_pp6_iter6.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp6_iter8 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_subdone.read())) {
            ap_enable_reg_pp6_iter8 = ap_enable_reg_pp6_iter7.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp6_iter9 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_subdone.read())) {
            ap_enable_reg_pp6_iter9 = ap_enable_reg_pp6_iter8.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        counter_reg_950 = ap_const_lv14_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        counter_reg_950 = counter_1_reg_4893.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        counter_s_reg_997 = tmp_136_15_reg_5424.read();
    } else if ((esl_seteq<1,1,1>(exitcond7_fu_2754_p2.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        counter_s_reg_997 = counter_reg_950.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        i_1_reg_879 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_4547.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        i_1_reg_879 = i_9_reg_4551.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        i_2_reg_891 = ap_const_lv14_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_4612.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0))) {
        i_2_reg_891 = i_10_reg_4616.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        i_3_reg_903 = ap_const_lv14_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_4677.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0))) {
        i_3_reg_903 = i_11_reg_4681.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        i_4_reg_915 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_4742.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0))) {
        i_4_reg_915 = i_12_reg_4746.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        i_5_reg_927 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_4807.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0))) {
        i_5_reg_927 = i_13_reg_4811.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        i_6_reg_939 = ap_const_lv8_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        i_6_reg_939 = i_15_reg_4881.read();
    }
    if ((esl_seteq<1,1,1>(exitcond7_fu_2754_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        i_7_reg_1008 = ap_const_lv9_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_4348_p2.read()))) {
        i_7_reg_1008 = i_14_fu_4354_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        i_reg_867 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_4482.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        i_reg_867 = i_8_reg_4486.read();
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_data_0_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_data_0_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_data_0_vld_out.read()))) {
            input_data_0_sel_rd =  (sc_logic) (~input_data_0_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_data_0_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_data_0_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_data_0_ack_in.read()))) {
            input_data_0_sel_wr =  (sc_logic) (~input_data_0_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_data_0_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, input_data_0_ack_out.read()) && 
              esl_seteq<1,2,2>(input_data_0_state.read(), ap_const_lv2_3)) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_in.read()) && 
              esl_seteq<1,2,2>(input_data_0_state.read(), ap_const_lv2_2)))) {
            input_data_0_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_data_0_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(input_data_0_state.read(), ap_const_lv2_3)) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(input_data_0_state.read(), ap_const_lv2_1)))) {
            input_data_0_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_data_0_vld_in.read()) && 
                     esl_seteq<1,2,2>(input_data_0_state.read(), ap_const_lv2_2)) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, input_data_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(input_data_0_state.read(), ap_const_lv2_1)) || 
                    (esl_seteq<1,2,2>(input_data_0_state.read(), ap_const_lv2_3) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, input_data_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, input_data_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, input_data_0_ack_out.read()))))) {
            input_data_0_state = ap_const_lv2_3;
        } else {
            input_data_0_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_last_0_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, input_last_0_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, input_last_0_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, input_last_0_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, input_last_0_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, input_last_0_state.read())))) {
            input_last_0_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_last_0_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, input_last_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, input_last_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, input_last_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, input_last_0_state.read())))) {
            input_last_0_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_last_0_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, input_last_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, input_last_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, input_last_0_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, input_last_0_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, input_last_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_last_0_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, input_last_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, input_last_0_ack_out.read()))))) {
            input_last_0_state = ap_const_lv2_3;
        } else {
            input_last_0_state = ap_const_lv2_2;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        j_reg_986 = j_1_15_reg_4959.read();
    } else if ((esl_seteq<1,1,1>(exitcond7_fu_2754_p2.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        j_reg_986 = ap_const_lv7_0;
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        output_data_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, output_data_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, output_data_1_vld_out.read()))) {
            output_data_1_sel_rd =  (sc_logic) (~output_data_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        output_data_1_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, output_data_1_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, output_data_1_ack_in.read()))) {
            output_data_1_sel_wr =  (sc_logic) (~output_data_1_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        output_data_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, output_data_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, output_data_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, output_data_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, output_data_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, output_data_1_state.read())))) {
            output_data_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, output_data_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, output_data_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, output_data_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, output_data_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, output_data_1_state.read())))) {
            output_data_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, output_data_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, output_data_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, output_data_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, output_data_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, output_data_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, output_data_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, output_data_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, output_data_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, output_data_1_ack_out.read()))))) {
            output_data_1_state = ap_const_lv2_3;
        } else {
            output_data_1_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        output_last_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, output_last_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, output_last_1_vld_out.read()))) {
            output_last_1_sel_rd =  (sc_logic) (~output_last_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        output_last_1_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, output_last_1_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, output_last_1_ack_in.read()))) {
            output_last_1_sel_wr =  (sc_logic) (~output_last_1_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        output_last_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, output_last_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, output_last_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, output_last_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, output_last_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, output_last_1_state.read())))) {
            output_last_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, output_last_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, output_last_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, output_last_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, output_last_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, output_last_1_state.read())))) {
            output_last_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, output_last_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, output_last_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, output_last_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, output_last_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, output_last_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, output_last_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, output_last_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, output_last_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, output_last_1_ack_out.read()))))) {
            output_last_1_state = ap_const_lv2_3;
        } else {
            output_last_1_state = ap_const_lv2_2;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        p_Val2_6_reg_974 = p_Val2_23_14_fu_4311_p2.read().range(47, 16);
    } else if ((esl_seteq<1,1,1>(exitcond7_fu_2754_p2.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        p_Val2_6_reg_974 = ap_const_lv32_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        p_Val2_9_reg_962 = p_Val2_20_14_fu_4278_p2.read().range(47, 16);
    } else if ((esl_seteq<1,1,1>(exitcond7_fu_2754_p2.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        p_Val2_9_reg_962 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        reg_1030 = w_ih_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        reg_1030 = w_ih_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        reg_1035 = x_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        reg_1035 = x_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        reg_1040 = w_hh_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        reg_1040 = w_hh_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        reg_1045 = h0_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        reg_1045 = h0_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        reg_1050 = w_ih_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        reg_1050 = w_ih_V_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        reg_1055 = x_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        reg_1055 = x_V_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        reg_1060 = w_hh_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        reg_1060 = w_hh_V_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        reg_1065 = h0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        reg_1065 = h0_V_q1.read();
    }
    if ((esl_seteq<1,1,1>(exitcond7_fu_2754_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        counter_1_reg_4893 = counter_1_fu_2770_p2.read();
        tmp_91_reg_4886 = tmp_91_fu_2766_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond1_reg_4482 = exitcond1_fu_1070_p2.read();
        exitcond1_reg_4482_pp0_iter1_reg = exitcond1_reg_4482.read();
        i_reg_867_pp0_iter1_reg = i_reg_867.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        exitcond1_reg_4482_pp0_iter2_reg = exitcond1_reg_4482_pp0_iter1_reg.read();
        i_reg_867_pp0_iter2_reg = i_reg_867_pp0_iter1_reg.read();
        isneg_reg_4491_pp0_iter2_reg = isneg_reg_4491.read();
        tmp_9_reg_4507_pp0_iter2_reg = tmp_9_reg_4507.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond2_reg_4547 = exitcond2_fu_1350_p2.read();
        exitcond2_reg_4547_pp1_iter1_reg = exitcond2_reg_4547.read();
        i_1_reg_879_pp1_iter1_reg = i_1_reg_879.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) {
        exitcond2_reg_4547_pp1_iter2_reg = exitcond2_reg_4547_pp1_iter1_reg.read();
        i_1_reg_879_pp1_iter2_reg = i_1_reg_879_pp1_iter1_reg.read();
        isneg_1_reg_4556_pp1_iter2_reg = isneg_1_reg_4556.read();
        tmp_15_reg_4572_pp1_iter2_reg = tmp_15_reg_4572.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond3_reg_4612 = exitcond3_fu_1630_p2.read();
        exitcond3_reg_4612_pp2_iter1_reg = exitcond3_reg_4612.read();
        i_2_reg_891_pp2_iter1_reg = i_2_reg_891.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) {
        exitcond3_reg_4612_pp2_iter2_reg = exitcond3_reg_4612_pp2_iter1_reg.read();
        i_2_reg_891_pp2_iter2_reg = i_2_reg_891_pp2_iter1_reg.read();
        isneg_2_reg_4621_pp2_iter2_reg = isneg_2_reg_4621.read();
        tmp_30_reg_4637_pp2_iter2_reg = tmp_30_reg_4637.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond4_reg_4677 = exitcond4_fu_1910_p2.read();
        exitcond4_reg_4677_pp3_iter1_reg = exitcond4_reg_4677.read();
        i_3_reg_903_pp3_iter1_reg = i_3_reg_903.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) {
        exitcond4_reg_4677_pp3_iter2_reg = exitcond4_reg_4677_pp3_iter1_reg.read();
        i_3_reg_903_pp3_iter2_reg = i_3_reg_903_pp3_iter1_reg.read();
        isneg_3_reg_4686_pp3_iter2_reg = isneg_3_reg_4686.read();
        tmp_48_reg_4702_pp3_iter2_reg = tmp_48_reg_4702.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond5_reg_4742 = exitcond5_fu_2190_p2.read();
        exitcond5_reg_4742_pp4_iter1_reg = exitcond5_reg_4742.read();
        i_4_reg_915_pp4_iter1_reg = i_4_reg_915.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) {
        exitcond5_reg_4742_pp4_iter2_reg = exitcond5_reg_4742_pp4_iter1_reg.read();
        i_4_reg_915_pp4_iter2_reg = i_4_reg_915_pp4_iter1_reg.read();
        isneg_4_reg_4751_pp4_iter2_reg = isneg_4_reg_4751.read();
        tmp_65_reg_4767_pp4_iter2_reg = tmp_65_reg_4767.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond6_reg_4807 = exitcond6_fu_2470_p2.read();
        exitcond6_reg_4807_pp5_iter1_reg = exitcond6_reg_4807.read();
        i_5_reg_927_pp5_iter1_reg = i_5_reg_927.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) {
        exitcond6_reg_4807_pp5_iter2_reg = exitcond6_reg_4807_pp5_iter1_reg.read();
        i_5_reg_927_pp5_iter2_reg = i_5_reg_927_pp5_iter1_reg.read();
        isneg_5_reg_4816_pp5_iter2_reg = isneg_5_reg_4816.read();
        tmp_80_reg_4832_pp5_iter2_reg = tmp_80_reg_4832.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond_reg_5509 = exitcond_fu_4348_p2.read();
        exitcond_reg_5509_pp6_iter1_reg = exitcond_reg_5509.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) {
        exitcond_reg_5509_pp6_iter2_reg = exitcond_reg_5509_pp6_iter1_reg.read();
        exitcond_reg_5509_pp6_iter3_reg = exitcond_reg_5509_pp6_iter2_reg.read();
        exitcond_reg_5509_pp6_iter4_reg = exitcond_reg_5509_pp6_iter3_reg.read();
        exitcond_reg_5509_pp6_iter5_reg = exitcond_reg_5509_pp6_iter4_reg.read();
        exitcond_reg_5509_pp6_iter6_reg = exitcond_reg_5509_pp6_iter5_reg.read();
        exitcond_reg_5509_pp6_iter7_reg = exitcond_reg_5509_pp6_iter6_reg.read();
        exitcond_reg_5509_pp6_iter8_reg = exitcond_reg_5509_pp6_iter7_reg.read();
        exitcond_reg_5509_pp6_iter9_reg = exitcond_reg_5509_pp6_iter8_reg.read();
        is_neg_reg_5534_pp6_iter2_reg = is_neg_reg_5534.read();
        is_neg_reg_5534_pp6_iter3_reg = is_neg_reg_5534_pp6_iter2_reg.read();
        is_neg_reg_5534_pp6_iter4_reg = is_neg_reg_5534_pp6_iter3_reg.read();
        is_neg_reg_5534_pp6_iter5_reg = is_neg_reg_5534_pp6_iter4_reg.read();
        is_neg_reg_5534_pp6_iter6_reg = is_neg_reg_5534_pp6_iter5_reg.read();
        is_neg_reg_5534_pp6_iter7_reg = is_neg_reg_5534_pp6_iter6_reg.read();
        is_neg_reg_5534_pp6_iter8_reg = is_neg_reg_5534_pp6_iter7_reg.read();
        last_load_reg_5545_pp6_iter2_reg = last_load_reg_5545.read();
        last_load_reg_5545_pp6_iter3_reg = last_load_reg_5545_pp6_iter2_reg.read();
        last_load_reg_5545_pp6_iter4_reg = last_load_reg_5545_pp6_iter3_reg.read();
        last_load_reg_5545_pp6_iter5_reg = last_load_reg_5545_pp6_iter4_reg.read();
        last_load_reg_5545_pp6_iter6_reg = last_load_reg_5545_pp6_iter5_reg.read();
        last_load_reg_5545_pp6_iter7_reg = last_load_reg_5545_pp6_iter6_reg.read();
        last_load_reg_5545_pp6_iter8_reg = last_load_reg_5545_pp6_iter7_reg.read();
        tmp_159_reg_5560_pp6_iter3_reg = tmp_159_reg_5560.read();
        tmp_159_reg_5560_pp6_iter4_reg = tmp_159_reg_5560_pp6_iter3_reg.read();
        tmp_159_reg_5560_pp6_iter5_reg = tmp_159_reg_5560_pp6_iter4_reg.read();
        tmp_159_reg_5560_pp6_iter6_reg = tmp_159_reg_5560_pp6_iter5_reg.read();
        tmp_159_reg_5560_pp6_iter7_reg = tmp_159_reg_5560_pp6_iter6_reg.read();
        tmp_159_reg_5560_pp6_iter8_reg = tmp_159_reg_5560_pp6_iter7_reg.read();
        tmp_95_reg_5550_pp6_iter3_reg = tmp_95_reg_5550.read();
        tmp_95_reg_5550_pp6_iter4_reg = tmp_95_reg_5550_pp6_iter3_reg.read();
        tmp_95_reg_5550_pp6_iter5_reg = tmp_95_reg_5550_pp6_iter4_reg.read();
        tmp_95_reg_5550_pp6_iter6_reg = tmp_95_reg_5550_pp6_iter5_reg.read();
        tmp_95_reg_5550_pp6_iter7_reg = tmp_95_reg_5550_pp6_iter6_reg.read();
        tmp_95_reg_5550_pp6_iter8_reg = tmp_95_reg_5550_pp6_iter7_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_4547.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        exp_tmp_V_1_reg_4562 = ireg_V_1_fu_1362_p1.read().range(62, 52);
        isneg_1_reg_4556 = ireg_V_1_fu_1362_p1.read().range(63, 63);
        tmp_15_reg_4572 = tmp_15_fu_1392_p2.read();
        tmp_50_reg_4567 = tmp_50_fu_1388_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_4612.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0))) {
        exp_tmp_V_2_reg_4627 = ireg_V_2_fu_1642_p1.read().range(62, 52);
        isneg_2_reg_4621 = ireg_V_2_fu_1642_p1.read().range(63, 63);
        tmp_30_reg_4637 = tmp_30_fu_1672_p2.read();
        tmp_77_reg_4632 = tmp_77_fu_1668_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_4677.read()) && esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0))) {
        exp_tmp_V_3_reg_4692 = ireg_V_3_fu_1922_p1.read().range(62, 52);
        isneg_3_reg_4686 = ireg_V_3_fu_1922_p1.read().range(63, 63);
        tmp_142_reg_4697 = tmp_142_fu_1948_p1.read();
        tmp_48_reg_4702 = tmp_48_fu_1952_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_4742.read()) && esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0))) {
        exp_tmp_V_4_reg_4757 = ireg_V_4_fu_2202_p1.read().range(62, 52);
        isneg_4_reg_4751 = ireg_V_4_fu_2202_p1.read().range(63, 63);
        tmp_148_reg_4762 = tmp_148_fu_2228_p1.read();
        tmp_65_reg_4767 = tmp_65_fu_2232_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_4807.read()) && esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0))) {
        exp_tmp_V_5_reg_4822 = ireg_V_5_fu_2482_p1.read().range(62, 52);
        isneg_5_reg_4816 = ireg_V_5_fu_2482_p1.read().range(63, 63);
        tmp_154_reg_4827 = tmp_154_fu_2508_p1.read();
        tmp_80_reg_4832 = tmp_80_fu_2512_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_4482.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        exp_tmp_V_reg_4497 = ireg_V_fu_1082_p1.read().range(62, 52);
        isneg_reg_4491 = ireg_V_fu_1082_p1.read().range(63, 63);
        tmp_22_reg_4502 = tmp_22_fu_1108_p1.read();
        tmp_9_reg_4507 = tmp_9_fu_1112_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1))) {
        i_10_reg_4616 = i_10_fu_1636_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1))) {
        i_11_reg_4681 = i_11_fu_1916_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1))) {
        i_12_reg_4746 = i_12_fu_2196_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1))) {
        i_13_reg_4811 = i_13_fu_2476_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        i_15_reg_4881 = i_15_fu_2760_p2.read();
        i_6_cast_reg_4872 = i_6_cast_fu_2750_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        i_8_reg_4486 = i_8_fu_1076_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1))) {
        i_9_reg_4551 = i_9_fu_1356_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_data_0_load_A.read())) {
        input_data_0_payload_A = input_r_TDATA.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_data_0_load_B.read())) {
        input_data_0_payload_B = input_r_TDATA.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_5509.read()))) {
        is_neg_reg_5534 = out1_V_q0.read().range(31, 31);
        last_load_reg_5545 = last_q0.read();
        tmp_96_reg_5540 = tmp_96_fu_4374_p2.read();
    }
    if ((esl_seteq<1,1,1>(exitcond8_fu_2776_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        j_1_15_reg_4959 = j_1_15_fu_2822_p2.read();
        tmp_160_reg_4921 = tmp_160_fu_2800_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_4677_pp3_iter1_reg.read()))) {
        man_V_11_reg_4708 = man_V_11_fu_1978_p3.read();
        sel_tmp30_reg_4730 = sel_tmp30_fu_2054_p2.read();
        sel_tmp35_reg_4736 = sel_tmp35_fu_2072_p2.read();
        sh_amt_3_reg_4713 = sh_amt_3_fu_2009_p3.read();
        tmp_143_reg_4724 = tmp_143_fu_2023_p1.read();
        tmp_53_reg_4719 = tmp_53_fu_2017_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_4742_pp4_iter1_reg.read()))) {
        man_V_14_reg_4773 = man_V_14_fu_2258_p3.read();
        sel_tmp39_reg_4795 = sel_tmp39_fu_2334_p2.read();
        sel_tmp44_reg_4801 = sel_tmp44_fu_2352_p2.read();
        sh_amt_4_reg_4778 = sh_amt_4_fu_2289_p3.read();
        tmp_149_reg_4789 = tmp_149_fu_2303_p1.read();
        tmp_69_reg_4784 = tmp_69_fu_2297_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_4807_pp5_iter1_reg.read()))) {
        man_V_17_reg_4838 = man_V_17_fu_2538_p3.read();
        sel_tmp48_reg_4860 = sel_tmp48_fu_2614_p2.read();
        sel_tmp53_reg_4866 = sel_tmp53_fu_2632_p2.read();
        sh_amt_5_reg_4843 = sh_amt_5_fu_2569_p3.read();
        tmp_155_reg_4854 = tmp_155_fu_2583_p1.read();
        tmp_84_reg_4849 = tmp_84_fu_2577_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_4482_pp0_iter1_reg.read()))) {
        man_V_2_reg_4513 = man_V_2_fu_1138_p3.read();
        sel_tmp4_reg_4541 = sel_tmp4_fu_1232_p2.read();
        sel_tmp7_reg_4535 = sel_tmp7_fu_1214_p2.read();
        sh_amt_reg_4518 = sh_amt_fu_1169_p3.read();
        tmp_24_reg_4529 = tmp_24_fu_1183_p1.read();
        tmp_6_reg_4524 = tmp_6_fu_1177_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_4547_pp1_iter1_reg.read()))) {
        man_V_5_reg_4578 = man_V_5_fu_1418_p3.read();
        sel_tmp12_reg_4600 = sel_tmp12_fu_1494_p2.read();
        sel_tmp17_reg_4606 = sel_tmp17_fu_1512_p2.read();
        sh_amt_1_reg_4583 = sh_amt_1_fu_1449_p3.read();
        tmp_21_reg_4589 = tmp_21_fu_1457_p2.read();
        tmp_56_reg_4594 = tmp_56_fu_1463_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_4612_pp2_iter1_reg.read()))) {
        man_V_8_reg_4643 = man_V_8_fu_1698_p3.read();
        sel_tmp21_reg_4665 = sel_tmp21_fu_1774_p2.read();
        sel_tmp26_reg_4671 = sel_tmp26_fu_1792_p2.read();
        sh_amt_2_reg_4648 = sh_amt_2_fu_1729_p3.read();
        tmp_38_reg_4654 = tmp_38_fu_1737_p2.read();
        tmp_88_reg_4659 = tmp_88_fu_1743_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, output_data_1_load_A.read())) {
        output_data_1_payload_A = p_03_i_fu_4474_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, output_data_1_load_B.read())) {
        output_data_1_payload_B = p_03_i_fu_4474_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, output_last_1_load_A.read())) {
        output_last_1_payload_A =  (sc_logic) (last_load_reg_5545_pp6_iter8_reg.read()[0]);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, output_last_1_load_B.read())) {
        output_last_1_payload_B =  (sc_logic) (last_load_reg_5545_pp6_iter8_reg.read()[0]);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_5509.read()))) {
        p_Val2_10_reg_5528 = out1_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        p_Val2_12_reg_5019 = p_Val2_12_fu_2896_p2.read();
        p_Val2_19_1_reg_5024 = p_Val2_19_1_fu_2910_p2.read();
        p_Val2_22_1_reg_5029 = p_Val2_22_1_fu_2924_p2.read();
        p_Val2_8_reg_5014 = p_Val2_8_fu_2882_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        p_Val2_19_10_reg_5374 = p_Val2_19_10_fu_3872_p2.read();
        p_Val2_19_s_reg_5354 = p_Val2_19_s_fu_3824_p2.read();
        p_Val2_22_10_reg_5379 = p_Val2_22_10_fu_3886_p2.read();
        p_Val2_22_s_reg_5364 = p_Val2_22_s_fu_3848_p2.read();
        tmp_126_reg_5359 = p_Val2_20_9_fu_3788_p2.read().range(47, 16);
        tmp_127_reg_5369 = p_Val2_23_9_fu_3811_p2.read().range(47, 16);
        tmp_136_15_reg_5424 = tmp_136_15_fu_3938_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        p_Val2_19_11_reg_5429 = p_Val2_19_11_fu_4022_p2.read();
        p_Val2_19_12_reg_5449 = p_Val2_19_12_fu_4070_p2.read();
        p_Val2_22_11_reg_5439 = p_Val2_22_11_fu_4046_p2.read();
        p_Val2_22_12_reg_5454 = p_Val2_22_12_fu_4084_p2.read();
        tmp_130_reg_5434 = p_Val2_20_10_fu_3986_p2.read().range(47, 16);
        tmp_131_reg_5444 = p_Val2_23_10_fu_4009_p2.read().range(47, 16);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        p_Val2_19_13_reg_5459 = p_Val2_19_13_fu_4168_p2.read();
        p_Val2_19_14_reg_5479 = p_Val2_19_14_fu_4216_p2.read();
        p_Val2_22_13_reg_5469 = p_Val2_22_13_fu_4192_p2.read();
        p_Val2_22_14_reg_5484 = p_Val2_22_14_fu_4230_p2.read();
        tmp_134_reg_5464 = p_Val2_20_12_fu_4132_p2.read().range(47, 16);
        tmp_135_reg_5474 = p_Val2_23_12_fu_4155_p2.read().range(47, 16);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        p_Val2_19_2_reg_5074 = p_Val2_19_2_fu_3056_p2.read();
        p_Val2_19_3_reg_5094 = p_Val2_19_3_fu_3104_p2.read();
        p_Val2_22_2_reg_5084 = p_Val2_22_2_fu_3080_p2.read();
        p_Val2_22_3_reg_5099 = p_Val2_22_3_fu_3118_p2.read();
        tmp_110_reg_5079 = p_Val2_20_1_fu_3020_p2.read().range(47, 16);
        tmp_111_reg_5089 = p_Val2_23_1_fu_3043_p2.read().range(47, 16);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        p_Val2_19_4_reg_5144 = p_Val2_19_4_fu_3248_p2.read();
        p_Val2_19_5_reg_5164 = p_Val2_19_5_fu_3296_p2.read();
        p_Val2_22_4_reg_5154 = p_Val2_22_4_fu_3272_p2.read();
        p_Val2_22_5_reg_5169 = p_Val2_22_5_fu_3310_p2.read();
        tmp_114_reg_5149 = p_Val2_20_3_fu_3212_p2.read().range(47, 16);
        tmp_115_reg_5159 = p_Val2_23_3_fu_3235_p2.read().range(47, 16);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        p_Val2_19_6_reg_5214 = p_Val2_19_6_fu_3440_p2.read();
        p_Val2_19_7_reg_5234 = p_Val2_19_7_fu_3488_p2.read();
        p_Val2_22_6_reg_5224 = p_Val2_22_6_fu_3464_p2.read();
        p_Val2_22_7_reg_5239 = p_Val2_22_7_fu_3502_p2.read();
        tmp_118_reg_5219 = p_Val2_20_5_fu_3404_p2.read().range(47, 16);
        tmp_119_reg_5229 = p_Val2_23_5_fu_3427_p2.read().range(47, 16);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        p_Val2_19_8_reg_5284 = p_Val2_19_8_fu_3632_p2.read();
        p_Val2_19_9_reg_5304 = p_Val2_19_9_fu_3680_p2.read();
        p_Val2_22_8_reg_5294 = p_Val2_22_8_fu_3656_p2.read();
        p_Val2_22_9_reg_5309 = p_Val2_22_9_fu_3694_p2.read();
        tmp_122_reg_5289 = p_Val2_20_7_fu_3596_p2.read().range(47, 16);
        tmp_123_reg_5299 = p_Val2_23_7_fu_3619_p2.read().range(47, 16);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        p_Val2_19_reg_5499 = b_ih_V_q0.read();
        p_Val2_20_reg_5504 = b_hh_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_5509_pp6_iter1_reg.read()))) {
        tmp32_V_1_reg_5555 = tmp32_V_1_fu_4408_p2.read();
        tmp_159_reg_5560 = tmp_159_fu_4414_p1.read();
        tmp_95_reg_5550 = tmp_95_fu_4380_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_5509_pp6_iter7_reg.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_95_reg_5550_pp6_iter7_reg.read()))) {
        tmp32_V_reg_5565 = tmp32_V_fu_4418_p1.read();
        tmp_97_reg_5570 = tmp_97_fu_4432_p2.read();
    }
}

void sampleRNN_GRU::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(exitcond1_fu_1070_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read())) && !(esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read())) || (esl_seteq<1,1,1>(exitcond1_fu_1070_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read())))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            break;
        case 8 : 
            if ((!(esl_seteq<1,1,1>(exitcond2_fu_1350_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp1_stage0_subdone.read())) && !(esl_seteq<1,1,1>(ap_enable_reg_pp1_iter3.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter2.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp1_stage0_subdone.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if (((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter3.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter2.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp1_stage0_subdone.read())) || (esl_seteq<1,1,1>(exitcond2_fu_1350_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp1_stage0_subdone.read())))) {
                ap_NS_fsm = ap_ST_fsm_state11;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            break;
        case 32 : 
            if ((!(esl_seteq<1,1,1>(exitcond3_fu_1630_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_subdone.read())) && !(esl_seteq<1,1,1>(ap_enable_reg_pp2_iter3.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_enable_reg_pp2_iter2.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_subdone.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            } else if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter3.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp2_iter2.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_subdone.read())) || (esl_seteq<1,1,1>(exitcond3_fu_1630_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_subdone.read())))) {
                ap_NS_fsm = ap_ST_fsm_state16;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            }
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_pp3_stage0;
            break;
        case 128 : 
            if ((!(esl_seteq<1,1,1>(exitcond4_fu_1910_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp3_iter1.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp3_stage0_subdone.read())) && !(esl_seteq<1,1,1>(ap_enable_reg_pp3_iter3.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_enable_reg_pp3_iter2.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp3_stage0_subdone.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp3_stage0;
            } else if (((esl_seteq<1,1,1>(ap_enable_reg_pp3_iter3.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp3_iter2.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp3_stage0_subdone.read())) || (esl_seteq<1,1,1>(exitcond4_fu_1910_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp3_iter1.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp3_stage0_subdone.read())))) {
                ap_NS_fsm = ap_ST_fsm_state21;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp3_stage0;
            }
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_pp4_stage0;
            break;
        case 512 : 
            if ((!(esl_seteq<1,1,1>(exitcond5_fu_2190_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp4_iter1.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp4_stage0_subdone.read())) && !(esl_seteq<1,1,1>(ap_enable_reg_pp4_iter3.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_enable_reg_pp4_iter2.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp4_stage0_subdone.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp4_stage0;
            } else if (((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter3.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp4_iter2.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp4_stage0_subdone.read())) || (esl_seteq<1,1,1>(exitcond5_fu_2190_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp4_iter1.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp4_stage0_subdone.read())))) {
                ap_NS_fsm = ap_ST_fsm_state26;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp4_stage0;
            }
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_pp5_stage0;
            break;
        case 2048 : 
            if ((!(esl_seteq<1,1,1>(exitcond6_fu_2470_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp5_iter1.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp5_stage0_subdone.read())) && !(esl_seteq<1,1,1>(ap_enable_reg_pp5_iter3.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_enable_reg_pp5_iter2.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp5_stage0_subdone.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp5_stage0;
            } else if (((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter3.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp5_iter2.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp5_stage0_subdone.read())) || (esl_seteq<1,1,1>(exitcond6_fu_2470_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp5_iter1.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp5_stage0_subdone.read())))) {
                ap_NS_fsm = ap_ST_fsm_state31;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp5_stage0;
            }
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state32;
            break;
        case 8192 : 
            if ((esl_seteq<1,1,1>(exitcond7_fu_2754_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp6_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state33;
            }
            break;
        case 16384 : 
            if ((esl_seteq<1,1,1>(exitcond8_fu_2776_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
                ap_NS_fsm = ap_ST_fsm_state44;
            } else {
                ap_NS_fsm = ap_ST_fsm_state34;
            }
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state35;
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state36;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state37;
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state38;
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state39;
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state40;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state41;
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state42;
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state43;
            break;
        case 16777216 : 
            ap_NS_fsm = ap_ST_fsm_state33;
            break;
        case 33554432 : 
            ap_NS_fsm = ap_ST_fsm_state45;
            break;
        case 67108864 : 
            ap_NS_fsm = ap_ST_fsm_state32;
            break;
        case 134217728 : 
            if ((!(esl_seteq<1,1,1>(exitcond_fu_4348_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_subdone.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp6_iter1.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_enable_reg_pp6_iter9.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_enable_reg_pp6_iter10.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_subdone.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp6_stage0;
            } else if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter9.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp6_iter10.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_subdone.read())) || (esl_seteq<1,1,1>(exitcond_fu_4348_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_subdone.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp6_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state57;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp6_stage0;
            }
            break;
        case 268435456 : 
            if ((!(esl_seteq<1,1,1>(output_last_1_ack_in.read(), ap_const_logic_0) || esl_seteq<1,1,1>(output_data_1_ack_in.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state57;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<29>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

