/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    uut_m_00000000003859104238_3166864719_init();
    uut_m_00000000003293221746_2798683080_init();
    uut_m_00000000003067269801_3488864514_init();
    uut_m_00000000000794795686_3605049799_init();
    reference_m_00000000003154977213_4178520475_init();
    reference_m_00000000003372449214_0660710882_init();
    reference_m_00000000000618131062_0435659796_init();
    reference_m_00000000000229315898_2941619921_init();
    reference_m_00000000003372449214_3906931325_init();
    tester_m_00000000004153814194_1092060556_init();
    tester_m_00000000000979521695_2045002757_init();
    tester_m_00000000001319309166_2613777659_init();


    xsi_register_tops("tester_m_00000000001319309166_2613777659");


    return xsi_run_simulation(argc, argv);

}
