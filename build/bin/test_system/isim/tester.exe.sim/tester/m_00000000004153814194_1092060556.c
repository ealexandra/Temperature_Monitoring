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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Alexandra/Downloads/tester_tema_1_nou/tester_tema_1/build/bin/tester/adapter.inc";
static const char *ng1 = "Testing inputs: \nTEMP:";
static int ng2[] = {5, 0};
static int ng3[] = {0, 0};
static int ng4[] = {8, 0};
static int ng5[] = {1, 0};
static const char *ng6 = "%d ";
static const char *ng7 = ", ";
static const char *ng8 = "Enable: %b";
static const char *ng9 = "Results: LED = %b, alert = %d";
static const char *ng10 = "testing: N = %d, D = %d";
static const char *ng11 = "results: Q = %d, R = %d";



static int sp_print_input(char *t1, char *t2)
{
    char t8[8];
    char t15[8];
    char t26[8];
    char t28[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t29;
    char *t30;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t5 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 1, ng1, 1, t5);
    xsi_set_current_line(31, ng0);
    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5256);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t4 = (t1 + 5256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greater(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(36, ng0);
    t4 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 1, ng7, 1, t4);
    xsi_set_current_line(37, ng0);
    t4 = (t1 + 5096);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5576);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    xsi_set_current_line(38, ng0);
    t4 = (t1 + 5576);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 1, ng8, 2, t7, (char)118, t6, 5);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(32, ng0);

LAB9:    xsi_set_current_line(33, ng0);
    t16 = (t1 + 4936);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t1 + 4936);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng4)));
    t23 = (t1 + 5256);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    xsi_vlog_signed_multiply(t26, 32, t22, 32, t25, 32);
    t27 = ((char*)((ng5)));
    memset(t28, 0, 8);
    xsi_vlog_signed_minus(t28, 32, t26, 32, t27, 32);
    t29 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t15, 8, t18, ((int*)(t21)), 2, t28, 32, 1, t29, 32, 1, 0);
    t30 = (t1 + 5416);
    xsi_vlogvar_assign_value(t30, t15, 0, 0, 8);
    xsi_set_current_line(34, ng0);
    t4 = (t1 + 5416);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 1, ng6, 2, t7, (char)118, t6, 8);
    xsi_set_current_line(31, ng0);
    t4 = (t1 + 5256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 5256);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB6;

}

static int sp_print_output(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t5 = (t1 + 5736);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 6056);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(52, ng0);
    t4 = (t1 + 5896);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6216);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t4 = (t1 + 6056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6216);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 1280);
    xsi_vlogfile_write(0, 0, 1, ng9, 3, t10, (char)118, t6, 8, (char)118, t9, 1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_print_division_input(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t5 = (t1 + 6376);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 6696);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    xsi_set_current_line(67, ng0);
    t4 = (t1 + 6536);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6856);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(68, ng0);
    t4 = (t1 + 6696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6856);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 1712);
    xsi_vlogfile_write(0, 0, 1, ng10, 3, t10, (char)118, t6, 16, (char)118, t9, 16);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_print_division_output(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t5 = (t1 + 7016);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 7336);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    xsi_set_current_line(83, ng0);
    t4 = (t1 + 7176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 7496);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(84, ng0);
    t4 = (t1 + 7336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 7496);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng11, 3, t10, (char)118, t6, 16, (char)118, t9, 16);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}


extern void tester_m_00000000004153814194_1092060556_init()
{
	static char *se[] = {(void *)sp_print_input,(void *)sp_print_output,(void *)sp_print_division_input,(void *)sp_print_division_output};
	xsi_register_didat("tester_m_00000000004153814194_1092060556", "isim/tester.exe.sim/tester/m_00000000004153814194_1092060556.didat");
	xsi_register_subprogram_executes(se);
}
