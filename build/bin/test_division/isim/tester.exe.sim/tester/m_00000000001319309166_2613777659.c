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
static const char *ng12 = "C:/Users/Alexandra/Downloads/tester_tema_1_nou/tester_tema_1/build/bin/tester/tester.v";
static const char *ng13 = "test.config";
static const char *ng14 = "r";
static const char *ng15 = "error opening config file\n";
static const char *ng16 = "name=%16s\n";
static const char *ng17 = "error reading test name\n";
static const char *ng18 = "value=%f\n";
static const char *ng19 = "error reading test value\n";
static const char *ng20 = "penalty=%f\n";
static const char *ng21 = "error reading test penalty\n";
static int ng22[] = {1936289646, 0, 1684633193, 0, 1702065247, 0, 116, 0};
static int ng23[] = {2, 0};
static const char *ng24 = "\tok\n";
static const char *ng25 = "\n";
static const char *ng26 = "\terror: ";
static const char *ng27 = ", expected ";
static const char *ng28 = "\t.\n";
static int ng29[] = {1937007981, 0, 1952412537, 0, 7628147, 0, 0, 0};
static int ng30[] = {292, 0};
static const char *ng31 = "test ok\n";
static const char *ng32 = "result.tester";
static const char *ng33 = "%6.2f: %0d correct out of %0d (%6.2f%% completed)\n";



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

LAB2:    t4 = (t1 + 1392);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t5 = (t1 + 1392);
    xsi_vlogfile_write(0, 0, 1, ng1, 1, t5);
    xsi_set_current_line(31, ng0);
    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 8200);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t4 = (t1 + 8200);
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
    t4 = (t1 + 1392);
    xsi_vlogfile_write(0, 0, 1, ng7, 1, t4);
    xsi_set_current_line(37, ng0);
    t4 = (t1 + 8040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8520);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    xsi_set_current_line(38, ng0);
    t4 = (t1 + 8520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1392);
    xsi_vlogfile_write(0, 0, 1, ng8, 2, t7, (char)118, t6, 5);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(32, ng0);

LAB9:    xsi_set_current_line(33, ng0);
    t16 = (t1 + 7880);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t1 + 7880);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng4)));
    t23 = (t1 + 8200);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    xsi_vlog_signed_multiply(t26, 32, t22, 32, t25, 32);
    t27 = ((char*)((ng5)));
    memset(t28, 0, 8);
    xsi_vlog_signed_minus(t28, 32, t26, 32, t27, 32);
    t29 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t15, 8, t18, ((int*)(t21)), 2, t28, 32, 1, t29, 32, 1, 0);
    t30 = (t1 + 8360);
    xsi_vlogvar_assign_value(t30, t15, 0, 0, 8);
    xsi_set_current_line(34, ng0);
    t4 = (t1 + 8360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1392);
    xsi_vlogfile_write(0, 0, 1, ng6, 2, t7, (char)118, t6, 8);
    xsi_set_current_line(31, ng0);
    t4 = (t1 + 8200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8200);
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

LAB2:    t4 = (t1 + 1824);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t5 = (t1 + 8680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 9000);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(52, ng0);
    t4 = (t1 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9160);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t4 = (t1 + 9000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9160);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 1824);
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

LAB2:    t4 = (t1 + 2256);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t5 = (t1 + 9320);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 9640);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    xsi_set_current_line(67, ng0);
    t4 = (t1 + 9480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9800);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(68, ng0);
    t4 = (t1 + 9640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9800);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 2256);
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

LAB2:    t4 = (t1 + 2688);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t5 = (t1 + 9960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 10280);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    xsi_set_current_line(83, ng0);
    t4 = (t1 + 10120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10440);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(84, ng0);
    t4 = (t1 + 10280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10440);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 2688);
    xsi_vlogfile_write(0, 0, 1, ng11, 3, t10, (char)118, t6, 16, (char)118, t9, 16);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static void Initial_77_0(char *t0)
{
    char t4[8];
    char t19[32];
    char t23[8];
    char t26[8];
    char t44[8];
    char t48[8];
    char t79[8];
    char t85[2920];
    char t86[368];
    char t87[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    double t25;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    double t88;
    double t89;
    double t90;
    double t91;
    double t92;

LAB0:    t1 = (t0 + 11360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng12);

LAB4:    xsi_set_current_line(78, ng12);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(79, ng12);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(82, ng12);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng13, ng14);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 7720);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(83, ng12);
    t2 = (t0 + 7720);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t6) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(87, ng12);
    t2 = (t0 + 7720);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7240);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_bit_copy(t19, 0, t13, 0, 128);
    *((int *)t4) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng16, 2, t0, (char)118, t19, 128);
    t20 = (t4 + 4);
    *((int *)t20) = 0;
    t21 = (t0 + 7240);
    xsi_vlogvar_assign_value(t21, t19, 0, 0, 128);
    t22 = ((char*)((ng5)));
    memset(t23, 0, 8);
    xsi_vlog_signed_not_equal(t23, 32, t4, 32, t22, 32);
    t24 = (t23 + 4);
    t7 = *((unsigned int *)t24);
    t8 = (~(t7));
    t9 = *((unsigned int *)t23);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(91, ng12);
    t2 = (t0 + 7720);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7400);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t25 = *((double *)t13);
    t20 = xsi_vlog_convert_real_to_bits(t25, t4, 64);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng18, 2, t0, (char)101, t4, 64);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 7400);
    xsi_vlogvar_assign_value_double(t22, *((double *)t4), 0);
    t24 = ((char*)((ng5)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(95, ng12);
    t2 = (t0 + 7720);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7560);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t25 = *((double *)t13);
    t20 = xsi_vlog_convert_real_to_bits(t25, t4, 64);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng20, 2, t0, (char)101, t4, 64);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 7560);
    xsi_vlogvar_assign_value_double(t22, *((double *)t4), 0);
    t24 = ((char*)((ng5)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(99, ng12);
    t2 = (t0 + 7720);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(102, ng12);
    t2 = (t0 + 7240);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB25:    t6 = ((char*)((ng22)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 128, t6, 128);
    if (t28 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng29)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 128, t2, 128);
    if (t28 == 1)
        goto LAB28;

LAB29:
LAB31:
LAB30:    xsi_set_current_line(201, ng12);

LAB268:
LAB32:    xsi_set_current_line(204, ng12);
    t2 = (t0 + 6440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 6600);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t6, 32, t20, 32);
    t21 = (t4 + 4);
    t7 = *((unsigned int *)t21);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB269;

LAB270:
LAB271:    xsi_set_current_line(207, ng12);
    t2 = (t0 + 6440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t25 = xsi_vlog_convert_to_real(t6, 32, 1);
    t88 = (t25 * 1.0000000000000000);
    t12 = (t0 + 6600);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t89 = xsi_vlog_convert_to_real(t20, 32, 1);
    t90 = (t88 / t89);
    t21 = (t0 + 6760);
    xsi_vlogvar_assign_value_double(t21, t90, 0);
    xsi_set_current_line(208, ng12);
    t2 = (t0 + 6440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t25 = xsi_vlog_convert_to_real(t6, 32, 1);
    t88 = (t25 * 1.0000000000000000);
    t12 = (t0 + 6600);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t89 = xsi_vlog_convert_to_real(t20, 32, 1);
    t90 = (t88 / t89);
    t21 = (t0 + 6920);
    xsi_vlogvar_assign_value_double(t21, t90, 0);
    xsi_set_current_line(211, ng12);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname(ng32);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 7080);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(212, ng12);
    t2 = (t0 + 7080);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 7400);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t25 = *((double *)t20);
    t21 = (t0 + 6920);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t88 = *((double *)t24);
    t89 = (t88 - 1.0000000000000000);
    t90 = (t25 * t89);
    *((double *)t4) = t90;
    t27 = (t0 + 6440);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 6600);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 6760);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t91 = *((double *)t36);
    t92 = (100.00000000000000 * t91);
    *((double *)t23) = t92;
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng33, 5, t0, (char)114, t4, 64, (char)119, t30, 32, (char)119, t33, 32, (char)114, t23, 64);
    xsi_set_current_line(213, ng12);
    t2 = (t0 + 7080);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t6));

LAB1:    return;
LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(83, ng12);

LAB12:    xsi_set_current_line(84, ng12);
    xsi_vlogfile_write(0, 0, 1, ng15, 1, t0);
    xsi_set_current_line(85, ng12);
    xsi_vlog_finish(1);
    goto LAB11;

LAB13:    xsi_set_current_line(87, ng12);

LAB16:    xsi_set_current_line(88, ng12);
    xsi_vlogfile_write(0, 0, 1, ng17, 1, t0);
    xsi_set_current_line(89, ng12);
    xsi_vlog_finish(1);
    goto LAB15;

LAB17:    xsi_set_current_line(91, ng12);

LAB20:    xsi_set_current_line(92, ng12);
    xsi_vlogfile_write(0, 0, 1, ng19, 1, t0);
    xsi_set_current_line(93, ng12);
    xsi_vlog_finish(1);
    goto LAB19;

LAB21:    xsi_set_current_line(95, ng12);

LAB24:    xsi_set_current_line(96, ng12);
    xsi_vlogfile_write(0, 0, 1, ng21, 1, t0);
    xsi_set_current_line(97, ng12);
    xsi_vlog_finish(1);
    goto LAB23;

LAB26:    xsi_set_current_line(103, ng12);

LAB33:    xsi_set_current_line(104, ng12);
    xsi_set_current_line(104, ng12);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 6120);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);

LAB34:    t2 = (t0 + 6120);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng23)));
    t13 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_power(t4, 32, t12, 32, t13, 32, 1);
    memset(t23, 0, 8);
    xsi_vlog_signed_less(t23, 32, t6, 32, t4, 32);
    t20 = (t23 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t23);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB35;

LAB36:    goto LAB32;

LAB28:    xsi_set_current_line(151, ng12);

LAB152:    xsi_set_current_line(152, ng12);
    t3 = (t0 + 11168);
    xsi_process_wait(t3, 1000LL);
    *((char **)t1) = &&LAB153;
    goto LAB1;

LAB35:    xsi_set_current_line(104, ng12);

LAB37:    xsi_set_current_line(105, ng12);
    xsi_set_current_line(105, ng12);
    t21 = ((char*)((ng5)));
    t22 = (t0 + 6280);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);

LAB38:    t2 = (t0 + 6280);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng23)));
    t13 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_power(t4, 32, t12, 32, t13, 32, 1);
    memset(t23, 0, 8);
    xsi_vlog_signed_less(t23, 32, t6, 32, t4, 32);
    t20 = (t23 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t23);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(104, ng12);
    t2 = (t0 + 6120);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 6120);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    goto LAB34;

LAB39:    xsi_set_current_line(105, ng12);

LAB41:    xsi_set_current_line(106, ng12);
    t21 = (t0 + 6600);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t27 = ((char*)((ng5)));
    memset(t26, 0, 8);
    xsi_vlog_signed_add(t26, 32, t24, 32, t27, 32);
    t29 = (t0 + 6600);
    xsi_vlogvar_assign_value(t29, t26, 0, 0, 32);
    xsi_set_current_line(108, ng12);
    t2 = (t0 + 6120);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 5480);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 16);
    xsi_set_current_line(109, ng12);
    t2 = (t0 + 6280);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 5640);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 16);
    xsi_set_current_line(110, ng12);
    t2 = (t0 + 11168);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(112, ng12);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB43;

LAB44:
LAB45:    xsi_set_current_line(115, ng12);
    t2 = (t0 + 3960U);
    t3 = *((char **)t2);
    t2 = (t0 + 4120U);
    t6 = *((char **)t2);
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t6))
        goto LAB54;

LAB52:    t2 = (t3 + 4);
    t12 = (t6 + 4);
    if (*((unsigned int *)t2) != *((unsigned int *)t12))
        goto LAB54;

LAB53:    *((unsigned int *)t4) = 1;

LAB54:    memset(t23, 0, 8);
    t13 = (t4 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t13) != 0)
        goto LAB57;

LAB58:    t21 = (t23 + 4);
    t14 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB59;

LAB60:    memcpy(t48, t23, 8);

LAB61:    t37 = (t48 + 4);
    t74 = *((unsigned int *)t37);
    t75 = (~(t74));
    t76 = *((unsigned int *)t48);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(124, ng12);

LAB86:    xsi_set_current_line(125, ng12);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB87;

LAB88:
LAB89:    xsi_set_current_line(128, ng12);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t2) != 0)
        goto LAB92;

LAB93:    t12 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (!(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB94;

LAB95:    memcpy(t48, t4, 8);

LAB96:    t37 = (t48 + 4);
    t71 = *((unsigned int *)t37);
    t72 = (~(t71));
    t73 = *((unsigned int *)t48);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB104;

LAB105:
LAB106:    xsi_set_current_line(137, ng12);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB129;

LAB127:    if (*((unsigned int *)t2) == 0)
        goto LAB126;

LAB128:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;

LAB129:    memset(t23, 0, 8);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t12) != 0)
        goto LAB132;

LAB133:    t20 = (t23 + 4);
    t45 = *((unsigned int *)t23);
    t46 = *((unsigned int *)t20);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB134;

LAB135:    memcpy(t79, t23, 8);

LAB136:    t39 = (t79 + 4);
    t80 = *((unsigned int *)t39);
    t81 = (~(t80));
    t82 = *((unsigned int *)t79);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB144;

LAB145:
LAB146:    xsi_set_current_line(143, ng12);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB148;

LAB149:
LAB150:
LAB74:    xsi_set_current_line(105, ng12);
    t2 = (t0 + 6280);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 6280);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    goto LAB38;

LAB43:    xsi_set_current_line(113, ng12);
    t6 = (t0 + 5480);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 5640);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t24 = (t0 + 11168);
    t27 = (t0 + 2256);
    t29 = xsi_create_subprogram_invocation(t24, 0, t0, t27, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t27, t29);
    t30 = (t0 + 9320);
    xsi_vlogvar_assign_value(t30, t13, 0, 0, 16);
    t31 = (t0 + 9480);
    xsi_vlogvar_assign_value(t31, t22, 0, 0, 16);

LAB48:    t32 = (t0 + 11264);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t36 = (t35 + 272U);
    t37 = *((char **)t36);
    t38 = (t37 + 0U);
    t39 = *((char **)t38);
    t28 = ((int  (*)(char *, char *))t39)(t0, t33);

LAB50:    if (t28 != 0)
        goto LAB51;

LAB46:    t33 = (t0 + 2256);
    xsi_vlog_subprogram_popinvocation(t33);

LAB47:    t40 = (t0 + 11264);
    t41 = *((char **)t40);
    t40 = (t0 + 2256);
    t42 = (t0 + 11168);
    t43 = 0;
    xsi_delete_subprogram_invocation(t40, t41, t0, t42, t43);
    goto LAB45;

LAB49:;
LAB51:    t32 = (t0 + 11360U);
    *((char **)t32) = &&LAB48;
    goto LAB1;

LAB55:    *((unsigned int *)t23) = 1;
    goto LAB58;

LAB57:    t20 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB58;

LAB59:    t22 = (t0 + 4280U);
    t24 = *((char **)t22);
    t22 = (t0 + 4440U);
    t27 = *((char **)t22);
    memset(t26, 0, 8);
    if (*((unsigned int *)t24) != *((unsigned int *)t27))
        goto LAB64;

LAB62:    t22 = (t24 + 4);
    t29 = (t27 + 4);
    if (*((unsigned int *)t22) != *((unsigned int *)t29))
        goto LAB64;

LAB63:    *((unsigned int *)t26) = 1;

LAB64:    memset(t44, 0, 8);
    t30 = (t26 + 4);
    t17 = *((unsigned int *)t30);
    t18 = (~(t17));
    t45 = *((unsigned int *)t26);
    t46 = (t45 & t18);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t30) != 0)
        goto LAB67;

LAB68:    t49 = *((unsigned int *)t23);
    t50 = *((unsigned int *)t44);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t32 = (t23 + 4);
    t33 = (t44 + 4);
    t34 = (t48 + 4);
    t52 = *((unsigned int *)t32);
    t53 = *((unsigned int *)t33);
    t54 = (t52 | t53);
    *((unsigned int *)t34) = t54;
    t55 = *((unsigned int *)t34);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB61;

LAB65:    *((unsigned int *)t44) = 1;
    goto LAB68;

LAB67:    t31 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB68;

LAB69:    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t34);
    *((unsigned int *)t48) = (t57 | t58);
    t35 = (t23 + 4);
    t36 = (t44 + 4);
    t59 = *((unsigned int *)t23);
    t60 = (~(t59));
    t61 = *((unsigned int *)t35);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (~(t63));
    t65 = *((unsigned int *)t36);
    t66 = (~(t65));
    t28 = (t60 & t62);
    t67 = (t64 & t66);
    t68 = (~(t28));
    t69 = (~(t67));
    t70 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t70 & t68);
    t71 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t71 & t69);
    t72 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t72 & t68);
    t73 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t73 & t69);
    goto LAB71;

LAB72:    xsi_set_current_line(115, ng12);

LAB75:    xsi_set_current_line(116, ng12);
    t38 = (t0 + 6440);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng5)));
    memset(t79, 0, 8);
    xsi_vlog_signed_add(t79, 32, t40, 32, t41, 32);
    t42 = (t0 + 6440);
    xsi_vlogvar_assign_value(t42, t79, 0, 0, 32);
    xsi_set_current_line(118, ng12);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB76;

LAB77:
LAB78:    goto LAB74;

LAB76:    xsi_set_current_line(118, ng12);

LAB79:    xsi_set_current_line(119, ng12);
    xsi_vlogfile_write(0, 0, 1, ng7, 1, t0);
    xsi_set_current_line(120, ng12);
    t2 = (t0 + 4120U);
    t3 = *((char **)t2);
    t2 = (t0 + 4440U);
    t6 = *((char **)t2);
    t2 = (t0 + 11168);
    t12 = (t0 + 2688);
    t13 = xsi_create_subprogram_invocation(t2, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);
    t20 = (t0 + 9960);
    xsi_vlogvar_assign_value(t20, t3, 0, 0, 16);
    t21 = (t0 + 10120);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);

LAB82:    t22 = (t0 + 11264);
    t24 = *((char **)t22);
    t27 = (t24 + 80U);
    t29 = *((char **)t27);
    t30 = (t29 + 272U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t28 = ((int  (*)(char *, char *))t33)(t0, t24);

LAB84:    if (t28 != 0)
        goto LAB85;

LAB80:    t24 = (t0 + 2688);
    xsi_vlog_subprogram_popinvocation(t24);

LAB81:    t34 = (t0 + 11264);
    t35 = *((char **)t34);
    t34 = (t0 + 2688);
    t36 = (t0 + 11168);
    t37 = 0;
    xsi_delete_subprogram_invocation(t34, t35, t0, t36, t37);
    xsi_set_current_line(121, ng12);
    xsi_vlogfile_write(0, 0, 1, ng24, 1, t0);
    goto LAB78;

LAB83:;
LAB85:    t22 = (t0 + 11360U);
    *((char **)t22) = &&LAB82;
    goto LAB1;

LAB87:    xsi_set_current_line(126, ng12);
    xsi_vlogfile_write(0, 0, 1, ng25, 1, t0);
    goto LAB89;

LAB90:    *((unsigned int *)t4) = 1;
    goto LAB93;

LAB92:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB93;

LAB94:    t13 = (t0 + 6600);
    t20 = (t13 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 6440);
    t24 = (t22 + 56U);
    t27 = *((char **)t24);
    memset(t23, 0, 8);
    xsi_vlog_signed_minus(t23, 32, t21, 32, t27, 32);
    t29 = (t0 + 880);
    t30 = *((char **)t29);
    memset(t26, 0, 8);
    xsi_vlog_signed_leq(t26, 32, t23, 32, t30, 32);
    memset(t44, 0, 8);
    t29 = (t26 + 4);
    t18 = *((unsigned int *)t29);
    t45 = (~(t18));
    t46 = *((unsigned int *)t26);
    t47 = (t46 & t45);
    t49 = (t47 & 1U);
    if (t49 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t29) != 0)
        goto LAB99;

LAB100:    t50 = *((unsigned int *)t4);
    t51 = *((unsigned int *)t44);
    t52 = (t50 | t51);
    *((unsigned int *)t48) = t52;
    t32 = (t4 + 4);
    t33 = (t44 + 4);
    t34 = (t48 + 4);
    t53 = *((unsigned int *)t32);
    t54 = *((unsigned int *)t33);
    t55 = (t53 | t54);
    *((unsigned int *)t34) = t55;
    t56 = *((unsigned int *)t34);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB101;

LAB102:
LAB103:    goto LAB96;

LAB97:    *((unsigned int *)t44) = 1;
    goto LAB100;

LAB99:    t31 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB100;

LAB101:    t58 = *((unsigned int *)t48);
    t59 = *((unsigned int *)t34);
    *((unsigned int *)t48) = (t58 | t59);
    t35 = (t4 + 4);
    t36 = (t44 + 4);
    t60 = *((unsigned int *)t35);
    t61 = (~(t60));
    t62 = *((unsigned int *)t4);
    t28 = (t62 & t61);
    t63 = *((unsigned int *)t36);
    t64 = (~(t63));
    t65 = *((unsigned int *)t44);
    t67 = (t65 & t64);
    t66 = (~(t28));
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t69 & t66);
    t70 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t70 & t68);
    goto LAB103;

LAB104:    xsi_set_current_line(128, ng12);

LAB107:    xsi_set_current_line(129, ng12);
    xsi_vlogfile_write(0, 0, 1, ng26, 1, t0);
    xsi_set_current_line(130, ng12);
    t2 = (t0 + 5480);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 5640);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t21 = (t0 + 11168);
    t22 = (t0 + 2256);
    t24 = xsi_create_subprogram_invocation(t21, 0, t0, t22, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t22, t24);
    t27 = (t0 + 9320);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 16);
    t29 = (t0 + 9480);
    xsi_vlogvar_assign_value(t29, t20, 0, 0, 16);

LAB110:    t30 = (t0 + 11264);
    t31 = *((char **)t30);
    t32 = (t31 + 80U);
    t33 = *((char **)t32);
    t34 = (t33 + 272U);
    t35 = *((char **)t34);
    t36 = (t35 + 0U);
    t37 = *((char **)t36);
    t28 = ((int  (*)(char *, char *))t37)(t0, t31);

LAB112:    if (t28 != 0)
        goto LAB113;

LAB108:    t31 = (t0 + 2256);
    xsi_vlog_subprogram_popinvocation(t31);

LAB109:    t38 = (t0 + 11264);
    t39 = *((char **)t38);
    t38 = (t0 + 2256);
    t40 = (t0 + 11168);
    t41 = 0;
    xsi_delete_subprogram_invocation(t38, t39, t0, t40, t41);
    xsi_set_current_line(131, ng12);
    xsi_vlogfile_write(0, 0, 1, ng7, 1, t0);
    xsi_set_current_line(132, ng12);
    t2 = (t0 + 3960U);
    t3 = *((char **)t2);
    t2 = (t0 + 4280U);
    t6 = *((char **)t2);
    t2 = (t0 + 11168);
    t12 = (t0 + 2688);
    t13 = xsi_create_subprogram_invocation(t2, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);
    t20 = (t0 + 9960);
    xsi_vlogvar_assign_value(t20, t3, 0, 0, 16);
    t21 = (t0 + 10120);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);

LAB116:    t22 = (t0 + 11264);
    t24 = *((char **)t22);
    t27 = (t24 + 80U);
    t29 = *((char **)t27);
    t30 = (t29 + 272U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t28 = ((int  (*)(char *, char *))t33)(t0, t24);

LAB118:    if (t28 != 0)
        goto LAB119;

LAB114:    t24 = (t0 + 2688);
    xsi_vlog_subprogram_popinvocation(t24);

LAB115:    t34 = (t0 + 11264);
    t35 = *((char **)t34);
    t34 = (t0 + 2688);
    t36 = (t0 + 11168);
    t37 = 0;
    xsi_delete_subprogram_invocation(t34, t35, t0, t36, t37);
    xsi_set_current_line(133, ng12);
    xsi_vlogfile_write(0, 0, 1, ng27, 1, t0);
    xsi_set_current_line(134, ng12);
    t2 = (t0 + 4120U);
    t3 = *((char **)t2);
    t2 = (t0 + 4440U);
    t6 = *((char **)t2);
    t2 = (t0 + 11168);
    t12 = (t0 + 2688);
    t13 = xsi_create_subprogram_invocation(t2, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);
    t20 = (t0 + 9960);
    xsi_vlogvar_assign_value(t20, t3, 0, 0, 16);
    t21 = (t0 + 10120);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);

LAB122:    t22 = (t0 + 11264);
    t24 = *((char **)t22);
    t27 = (t24 + 80U);
    t29 = *((char **)t27);
    t30 = (t29 + 272U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t28 = ((int  (*)(char *, char *))t33)(t0, t24);

LAB124:    if (t28 != 0)
        goto LAB125;

LAB120:    t24 = (t0 + 2688);
    xsi_vlog_subprogram_popinvocation(t24);

LAB121:    t34 = (t0 + 11264);
    t35 = *((char **)t34);
    t34 = (t0 + 2688);
    t36 = (t0 + 11168);
    t37 = 0;
    xsi_delete_subprogram_invocation(t34, t35, t0, t36, t37);
    xsi_set_current_line(135, ng12);
    xsi_vlogfile_write(0, 0, 1, ng25, 1, t0);
    goto LAB106;

LAB111:;
LAB113:    t30 = (t0 + 11360U);
    *((char **)t30) = &&LAB110;
    goto LAB1;

LAB117:;
LAB119:    t22 = (t0 + 11360U);
    *((char **)t22) = &&LAB116;
    goto LAB1;

LAB123:;
LAB125:    t22 = (t0 + 11360U);
    *((char **)t22) = &&LAB122;
    goto LAB1;

LAB126:    *((unsigned int *)t4) = 1;
    goto LAB129;

LAB130:    *((unsigned int *)t23) = 1;
    goto LAB133;

LAB132:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB133;

LAB134:    t21 = (t0 + 6600);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t27 = (t0 + 6440);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    memset(t26, 0, 8);
    xsi_vlog_signed_minus(t26, 32, t24, 32, t30, 32);
    t31 = (t0 + 880);
    t32 = *((char **)t31);
    memset(t44, 0, 8);
    xsi_vlog_signed_equal(t44, 32, t26, 32, t32, 32);
    memset(t48, 0, 8);
    t31 = (t44 + 4);
    t49 = *((unsigned int *)t31);
    t50 = (~(t49));
    t51 = *((unsigned int *)t44);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t31) != 0)
        goto LAB139;

LAB140:    t54 = *((unsigned int *)t23);
    t55 = *((unsigned int *)t48);
    t56 = (t54 & t55);
    *((unsigned int *)t79) = t56;
    t34 = (t23 + 4);
    t35 = (t48 + 4);
    t36 = (t79 + 4);
    t57 = *((unsigned int *)t34);
    t58 = *((unsigned int *)t35);
    t59 = (t57 | t58);
    *((unsigned int *)t36) = t59;
    t60 = *((unsigned int *)t36);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB141;

LAB142:
LAB143:    goto LAB136;

LAB137:    *((unsigned int *)t48) = 1;
    goto LAB140;

LAB139:    t33 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB140;

LAB141:    t62 = *((unsigned int *)t79);
    t63 = *((unsigned int *)t36);
    *((unsigned int *)t79) = (t62 | t63);
    t37 = (t23 + 4);
    t38 = (t48 + 4);
    t64 = *((unsigned int *)t23);
    t65 = (~(t64));
    t66 = *((unsigned int *)t37);
    t68 = (~(t66));
    t69 = *((unsigned int *)t48);
    t70 = (~(t69));
    t71 = *((unsigned int *)t38);
    t72 = (~(t71));
    t28 = (t65 & t68);
    t67 = (t70 & t72);
    t73 = (~(t28));
    t74 = (~(t67));
    t75 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t75 & t73);
    t76 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t76 & t74);
    t77 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t77 & t73);
    t78 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t78 & t74);
    goto LAB143;

LAB144:    xsi_set_current_line(137, ng12);

LAB147:    xsi_set_current_line(138, ng12);
    xsi_vlogfile_write(0, 0, 1, ng28, 1, t0);
    xsi_set_current_line(139, ng12);
    xsi_vlogfile_write(0, 0, 1, ng28, 1, t0);
    xsi_set_current_line(140, ng12);
    xsi_vlogfile_write(0, 0, 1, ng28, 1, t0);
    goto LAB146;

LAB148:    xsi_set_current_line(143, ng12);

LAB151:    xsi_set_current_line(144, ng12);
    t6 = ((char*)((ng23)));
    t12 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_power(t4, 32, t6, 32, t12, 32, 1);
    t13 = (t0 + 6120);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    goto LAB150;

LAB153:    xsi_set_current_line(153, ng12);
    xsi_set_current_line(153, ng12);
    t2 = ((char*)((ng30)));
    t3 = (t0 + 6120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB154:    t2 = (t0 + 6120);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greater(t4, 32, t6, 32, t12, 32);
    t13 = (t4 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB155;

LAB156:    goto LAB32;

LAB155:    xsi_set_current_line(153, ng12);

LAB157:    xsi_set_current_line(154, ng12);
    t20 = (t0 + 6600);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t24 = ((char*)((ng5)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t22, 32, t24, 32);
    t27 = (t0 + 6600);
    xsi_vlogvar_assign_value(t27, t23, 0, 0, 32);
    xsi_set_current_line(156, ng12);
    t2 = (t0 + 4600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_multiply(t4, 32, t2, 32, t6, 32);
    t12 = ((char*)((ng30)));
    t13 = (t0 + 6120);
    t20 = (t13 + 56U);
    t21 = *((char **)t20);
    memset(t23, 0, 8);
    xsi_vlog_signed_minus(t23, 32, t12, 32, t21, 32);
    memset(t26, 0, 8);
    xsi_vlog_signed_multiply(t26, 32, t4, 32, t23, 32);
    xsi_vlog_unsigned_lshift(t85, 11680, t3, 11680, t26, 32);
    t22 = (t0 + 5800);
    xsi_vlogvar_assign_value(t22, t85, 0, 0, 11680);
    xsi_set_current_line(157, ng12);
    t2 = (t0 + 4760U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t6 = ((char*)((ng30)));
    t12 = (t0 + 6120);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 32, t6, 32, t20, 32);
    memset(t23, 0, 8);
    xsi_vlog_signed_multiply(t23, 32, t2, 32, t4, 32);
    xsi_vlog_unsigned_lshift(t86, 1460, t3, 1460, t23, 32);
    t21 = (t0 + 5960);
    xsi_vlogvar_assign_value(t21, t86, 0, 0, 1460);
    xsi_set_current_line(159, ng12);
    t2 = (t0 + 5800);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    xsi_vlog_get_part_select_value(t87, 40, t6, 11679, 11640);
    t12 = (t0 + 5160);
    xsi_vlogvar_assign_value(t12, t87, 0, 0, 40);
    xsi_set_current_line(160, ng12);
    t2 = (t0 + 5960);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 360);
    t20 = (t6 + 364);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 15);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t20);
    t10 = (t9 >> 15);
    *((unsigned int *)t12) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t14 & 31U);
    t21 = (t0 + 5320);
    xsi_vlogvar_assign_value(t21, t4, 0, 0, 5);
    xsi_set_current_line(161, ng12);
    t2 = (t0 + 11168);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB158;
    goto LAB1;

LAB158:    xsi_set_current_line(163, ng12);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB159;

LAB160:
LAB161:    xsi_set_current_line(166, ng12);
    t2 = (t0 + 3320U);
    t3 = *((char **)t2);
    t2 = (t0 + 3480U);
    t6 = *((char **)t2);
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t6))
        goto LAB170;

LAB168:    t2 = (t3 + 4);
    t12 = (t6 + 4);
    if (*((unsigned int *)t2) != *((unsigned int *)t12))
        goto LAB170;

LAB169:    *((unsigned int *)t4) = 1;

LAB170:    memset(t23, 0, 8);
    t13 = (t4 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB171;

LAB172:    if (*((unsigned int *)t13) != 0)
        goto LAB173;

LAB174:    t21 = (t23 + 4);
    t14 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB175;

LAB176:    memcpy(t48, t23, 8);

LAB177:    t37 = (t48 + 4);
    t74 = *((unsigned int *)t37);
    t75 = (~(t74));
    t76 = *((unsigned int *)t48);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB188;

LAB189:    xsi_set_current_line(175, ng12);

LAB202:    xsi_set_current_line(176, ng12);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB203;

LAB204:
LAB205:    xsi_set_current_line(179, ng12);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB206;

LAB207:    if (*((unsigned int *)t2) != 0)
        goto LAB208;

LAB209:    t12 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (!(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB210;

LAB211:    memcpy(t48, t4, 8);

LAB212:    t37 = (t48 + 4);
    t71 = *((unsigned int *)t37);
    t72 = (~(t71));
    t73 = *((unsigned int *)t48);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB220;

LAB221:
LAB222:    xsi_set_current_line(188, ng12);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB245;

LAB243:    if (*((unsigned int *)t2) == 0)
        goto LAB242;

LAB244:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;

LAB245:    memset(t23, 0, 8);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB246;

LAB247:    if (*((unsigned int *)t12) != 0)
        goto LAB248;

LAB249:    t20 = (t23 + 4);
    t45 = *((unsigned int *)t23);
    t46 = *((unsigned int *)t20);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB250;

LAB251:    memcpy(t79, t23, 8);

LAB252:    t39 = (t79 + 4);
    t80 = *((unsigned int *)t39);
    t81 = (~(t80));
    t82 = *((unsigned int *)t79);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB260;

LAB261:
LAB262:    xsi_set_current_line(194, ng12);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB264;

LAB265:
LAB266:
LAB190:    xsi_set_current_line(153, ng12);
    t2 = (t0 + 6120);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 6120);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    goto LAB154;

LAB159:    xsi_set_current_line(164, ng12);
    t6 = (t0 + 5160);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 5320);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t24 = (t0 + 11168);
    t27 = (t0 + 1392);
    t29 = xsi_create_subprogram_invocation(t24, 0, t0, t27, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t27, t29);
    t30 = (t0 + 7880);
    xsi_vlogvar_assign_value(t30, t13, 0, 0, 40);
    t31 = (t0 + 8040);
    xsi_vlogvar_assign_value(t31, t22, 0, 0, 5);

LAB164:    t32 = (t0 + 11264);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t36 = (t35 + 272U);
    t37 = *((char **)t36);
    t38 = (t37 + 0U);
    t39 = *((char **)t38);
    t28 = ((int  (*)(char *, char *))t39)(t0, t33);

LAB166:    if (t28 != 0)
        goto LAB167;

LAB162:    t33 = (t0 + 1392);
    xsi_vlog_subprogram_popinvocation(t33);

LAB163:    t40 = (t0 + 11264);
    t41 = *((char **)t40);
    t40 = (t0 + 1392);
    t42 = (t0 + 11168);
    t43 = 0;
    xsi_delete_subprogram_invocation(t40, t41, t0, t42, t43);
    goto LAB161;

LAB165:;
LAB167:    t32 = (t0 + 11360U);
    *((char **)t32) = &&LAB164;
    goto LAB1;

LAB171:    *((unsigned int *)t23) = 1;
    goto LAB174;

LAB173:    t20 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB174;

LAB175:    t22 = (t0 + 3640U);
    t24 = *((char **)t22);
    t22 = (t0 + 3800U);
    t27 = *((char **)t22);
    memset(t26, 0, 8);
    if (*((unsigned int *)t24) != *((unsigned int *)t27))
        goto LAB180;

LAB178:    t22 = (t24 + 4);
    t29 = (t27 + 4);
    if (*((unsigned int *)t22) != *((unsigned int *)t29))
        goto LAB180;

LAB179:    *((unsigned int *)t26) = 1;

LAB180:    memset(t44, 0, 8);
    t30 = (t26 + 4);
    t17 = *((unsigned int *)t30);
    t18 = (~(t17));
    t45 = *((unsigned int *)t26);
    t46 = (t45 & t18);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t30) != 0)
        goto LAB183;

LAB184:    t49 = *((unsigned int *)t23);
    t50 = *((unsigned int *)t44);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t32 = (t23 + 4);
    t33 = (t44 + 4);
    t34 = (t48 + 4);
    t52 = *((unsigned int *)t32);
    t53 = *((unsigned int *)t33);
    t54 = (t52 | t53);
    *((unsigned int *)t34) = t54;
    t55 = *((unsigned int *)t34);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB185;

LAB186:
LAB187:    goto LAB177;

LAB181:    *((unsigned int *)t44) = 1;
    goto LAB184;

LAB183:    t31 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB184;

LAB185:    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t34);
    *((unsigned int *)t48) = (t57 | t58);
    t35 = (t23 + 4);
    t36 = (t44 + 4);
    t59 = *((unsigned int *)t23);
    t60 = (~(t59));
    t61 = *((unsigned int *)t35);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (~(t63));
    t65 = *((unsigned int *)t36);
    t66 = (~(t65));
    t28 = (t60 & t62);
    t67 = (t64 & t66);
    t68 = (~(t28));
    t69 = (~(t67));
    t70 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t70 & t68);
    t71 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t71 & t69);
    t72 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t72 & t68);
    t73 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t73 & t69);
    goto LAB187;

LAB188:    xsi_set_current_line(166, ng12);

LAB191:    xsi_set_current_line(167, ng12);
    t38 = (t0 + 6440);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng5)));
    memset(t79, 0, 8);
    xsi_vlog_signed_add(t79, 32, t40, 32, t41, 32);
    t42 = (t0 + 6440);
    xsi_vlogvar_assign_value(t42, t79, 0, 0, 32);
    xsi_set_current_line(169, ng12);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB192;

LAB193:
LAB194:    goto LAB190;

LAB192:    xsi_set_current_line(169, ng12);

LAB195:    xsi_set_current_line(170, ng12);
    xsi_vlogfile_write(0, 0, 1, ng7, 1, t0);
    xsi_set_current_line(171, ng12);
    t2 = (t0 + 3480U);
    t3 = *((char **)t2);
    t2 = (t0 + 3800U);
    t6 = *((char **)t2);
    t2 = (t0 + 11168);
    t12 = (t0 + 1824);
    t13 = xsi_create_subprogram_invocation(t2, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);
    t20 = (t0 + 8680);
    xsi_vlogvar_assign_value(t20, t3, 0, 0, 8);
    t21 = (t0 + 8840);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 1);

LAB198:    t22 = (t0 + 11264);
    t24 = *((char **)t22);
    t27 = (t24 + 80U);
    t29 = *((char **)t27);
    t30 = (t29 + 272U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t28 = ((int  (*)(char *, char *))t33)(t0, t24);

LAB200:    if (t28 != 0)
        goto LAB201;

LAB196:    t24 = (t0 + 1824);
    xsi_vlog_subprogram_popinvocation(t24);

LAB197:    t34 = (t0 + 11264);
    t35 = *((char **)t34);
    t34 = (t0 + 1824);
    t36 = (t0 + 11168);
    t37 = 0;
    xsi_delete_subprogram_invocation(t34, t35, t0, t36, t37);
    xsi_set_current_line(172, ng12);
    xsi_vlogfile_write(0, 0, 1, ng24, 1, t0);
    goto LAB194;

LAB199:;
LAB201:    t22 = (t0 + 11360U);
    *((char **)t22) = &&LAB198;
    goto LAB1;

LAB203:    xsi_set_current_line(177, ng12);
    xsi_vlogfile_write(0, 0, 1, ng25, 1, t0);
    goto LAB205;

LAB206:    *((unsigned int *)t4) = 1;
    goto LAB209;

LAB208:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB209;

LAB210:    t13 = (t0 + 6600);
    t20 = (t13 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 6440);
    t24 = (t22 + 56U);
    t27 = *((char **)t24);
    memset(t23, 0, 8);
    xsi_vlog_signed_minus(t23, 32, t21, 32, t27, 32);
    t29 = (t0 + 880);
    t30 = *((char **)t29);
    memset(t26, 0, 8);
    xsi_vlog_signed_leq(t26, 32, t23, 32, t30, 32);
    memset(t44, 0, 8);
    t29 = (t26 + 4);
    t18 = *((unsigned int *)t29);
    t45 = (~(t18));
    t46 = *((unsigned int *)t26);
    t47 = (t46 & t45);
    t49 = (t47 & 1U);
    if (t49 != 0)
        goto LAB213;

LAB214:    if (*((unsigned int *)t29) != 0)
        goto LAB215;

LAB216:    t50 = *((unsigned int *)t4);
    t51 = *((unsigned int *)t44);
    t52 = (t50 | t51);
    *((unsigned int *)t48) = t52;
    t32 = (t4 + 4);
    t33 = (t44 + 4);
    t34 = (t48 + 4);
    t53 = *((unsigned int *)t32);
    t54 = *((unsigned int *)t33);
    t55 = (t53 | t54);
    *((unsigned int *)t34) = t55;
    t56 = *((unsigned int *)t34);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB217;

LAB218:
LAB219:    goto LAB212;

LAB213:    *((unsigned int *)t44) = 1;
    goto LAB216;

LAB215:    t31 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB216;

LAB217:    t58 = *((unsigned int *)t48);
    t59 = *((unsigned int *)t34);
    *((unsigned int *)t48) = (t58 | t59);
    t35 = (t4 + 4);
    t36 = (t44 + 4);
    t60 = *((unsigned int *)t35);
    t61 = (~(t60));
    t62 = *((unsigned int *)t4);
    t28 = (t62 & t61);
    t63 = *((unsigned int *)t36);
    t64 = (~(t63));
    t65 = *((unsigned int *)t44);
    t67 = (t65 & t64);
    t66 = (~(t28));
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t69 & t66);
    t70 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t70 & t68);
    goto LAB219;

LAB220:    xsi_set_current_line(179, ng12);

LAB223:    xsi_set_current_line(180, ng12);
    xsi_vlogfile_write(0, 0, 1, ng26, 1, t0);
    xsi_set_current_line(181, ng12);
    t2 = (t0 + 5160);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 5320);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t21 = (t0 + 11168);
    t22 = (t0 + 1392);
    t24 = xsi_create_subprogram_invocation(t21, 0, t0, t22, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t22, t24);
    t27 = (t0 + 7880);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 40);
    t29 = (t0 + 8040);
    xsi_vlogvar_assign_value(t29, t20, 0, 0, 5);

LAB226:    t30 = (t0 + 11264);
    t31 = *((char **)t30);
    t32 = (t31 + 80U);
    t33 = *((char **)t32);
    t34 = (t33 + 272U);
    t35 = *((char **)t34);
    t36 = (t35 + 0U);
    t37 = *((char **)t36);
    t28 = ((int  (*)(char *, char *))t37)(t0, t31);

LAB228:    if (t28 != 0)
        goto LAB229;

LAB224:    t31 = (t0 + 1392);
    xsi_vlog_subprogram_popinvocation(t31);

LAB225:    t38 = (t0 + 11264);
    t39 = *((char **)t38);
    t38 = (t0 + 1392);
    t40 = (t0 + 11168);
    t41 = 0;
    xsi_delete_subprogram_invocation(t38, t39, t0, t40, t41);
    xsi_set_current_line(182, ng12);
    xsi_vlogfile_write(0, 0, 1, ng7, 1, t0);
    xsi_set_current_line(183, ng12);
    t2 = (t0 + 3320U);
    t3 = *((char **)t2);
    t2 = (t0 + 3640U);
    t6 = *((char **)t2);
    t2 = (t0 + 11168);
    t12 = (t0 + 1824);
    t13 = xsi_create_subprogram_invocation(t2, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);
    t20 = (t0 + 8680);
    xsi_vlogvar_assign_value(t20, t3, 0, 0, 8);
    t21 = (t0 + 8840);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 1);

LAB232:    t22 = (t0 + 11264);
    t24 = *((char **)t22);
    t27 = (t24 + 80U);
    t29 = *((char **)t27);
    t30 = (t29 + 272U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t28 = ((int  (*)(char *, char *))t33)(t0, t24);

LAB234:    if (t28 != 0)
        goto LAB235;

LAB230:    t24 = (t0 + 1824);
    xsi_vlog_subprogram_popinvocation(t24);

LAB231:    t34 = (t0 + 11264);
    t35 = *((char **)t34);
    t34 = (t0 + 1824);
    t36 = (t0 + 11168);
    t37 = 0;
    xsi_delete_subprogram_invocation(t34, t35, t0, t36, t37);
    xsi_set_current_line(184, ng12);
    xsi_vlogfile_write(0, 0, 1, ng27, 1, t0);
    xsi_set_current_line(185, ng12);
    t2 = (t0 + 3480U);
    t3 = *((char **)t2);
    t2 = (t0 + 3800U);
    t6 = *((char **)t2);
    t2 = (t0 + 11168);
    t12 = (t0 + 1824);
    t13 = xsi_create_subprogram_invocation(t2, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);
    t20 = (t0 + 8680);
    xsi_vlogvar_assign_value(t20, t3, 0, 0, 8);
    t21 = (t0 + 8840);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 1);

LAB238:    t22 = (t0 + 11264);
    t24 = *((char **)t22);
    t27 = (t24 + 80U);
    t29 = *((char **)t27);
    t30 = (t29 + 272U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t28 = ((int  (*)(char *, char *))t33)(t0, t24);

LAB240:    if (t28 != 0)
        goto LAB241;

LAB236:    t24 = (t0 + 1824);
    xsi_vlog_subprogram_popinvocation(t24);

LAB237:    t34 = (t0 + 11264);
    t35 = *((char **)t34);
    t34 = (t0 + 1824);
    t36 = (t0 + 11168);
    t37 = 0;
    xsi_delete_subprogram_invocation(t34, t35, t0, t36, t37);
    xsi_set_current_line(186, ng12);
    xsi_vlogfile_write(0, 0, 1, ng25, 1, t0);
    goto LAB222;

LAB227:;
LAB229:    t30 = (t0 + 11360U);
    *((char **)t30) = &&LAB226;
    goto LAB1;

LAB233:;
LAB235:    t22 = (t0 + 11360U);
    *((char **)t22) = &&LAB232;
    goto LAB1;

LAB239:;
LAB241:    t22 = (t0 + 11360U);
    *((char **)t22) = &&LAB238;
    goto LAB1;

LAB242:    *((unsigned int *)t4) = 1;
    goto LAB245;

LAB246:    *((unsigned int *)t23) = 1;
    goto LAB249;

LAB248:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB249;

LAB250:    t21 = (t0 + 6600);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t27 = (t0 + 6440);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    memset(t26, 0, 8);
    xsi_vlog_signed_minus(t26, 32, t24, 32, t30, 32);
    t31 = (t0 + 880);
    t32 = *((char **)t31);
    memset(t44, 0, 8);
    xsi_vlog_signed_equal(t44, 32, t26, 32, t32, 32);
    memset(t48, 0, 8);
    t31 = (t44 + 4);
    t49 = *((unsigned int *)t31);
    t50 = (~(t49));
    t51 = *((unsigned int *)t44);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB253;

LAB254:    if (*((unsigned int *)t31) != 0)
        goto LAB255;

LAB256:    t54 = *((unsigned int *)t23);
    t55 = *((unsigned int *)t48);
    t56 = (t54 & t55);
    *((unsigned int *)t79) = t56;
    t34 = (t23 + 4);
    t35 = (t48 + 4);
    t36 = (t79 + 4);
    t57 = *((unsigned int *)t34);
    t58 = *((unsigned int *)t35);
    t59 = (t57 | t58);
    *((unsigned int *)t36) = t59;
    t60 = *((unsigned int *)t36);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB257;

LAB258:
LAB259:    goto LAB252;

LAB253:    *((unsigned int *)t48) = 1;
    goto LAB256;

LAB255:    t33 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB256;

LAB257:    t62 = *((unsigned int *)t79);
    t63 = *((unsigned int *)t36);
    *((unsigned int *)t79) = (t62 | t63);
    t37 = (t23 + 4);
    t38 = (t48 + 4);
    t64 = *((unsigned int *)t23);
    t65 = (~(t64));
    t66 = *((unsigned int *)t37);
    t68 = (~(t66));
    t69 = *((unsigned int *)t48);
    t70 = (~(t69));
    t71 = *((unsigned int *)t38);
    t72 = (~(t71));
    t28 = (t65 & t68);
    t67 = (t70 & t72);
    t73 = (~(t28));
    t74 = (~(t67));
    t75 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t75 & t73);
    t76 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t76 & t74);
    t77 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t77 & t73);
    t78 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t78 & t74);
    goto LAB259;

LAB260:    xsi_set_current_line(188, ng12);

LAB263:    xsi_set_current_line(189, ng12);
    xsi_vlogfile_write(0, 0, 1, ng28, 1, t0);
    xsi_set_current_line(190, ng12);
    xsi_vlogfile_write(0, 0, 1, ng28, 1, t0);
    xsi_set_current_line(191, ng12);
    xsi_vlogfile_write(0, 0, 1, ng28, 1, t0);
    goto LAB262;

LAB264:    xsi_set_current_line(194, ng12);

LAB267:    xsi_set_current_line(195, ng12);
    t6 = ((char*)((ng23)));
    t12 = ((char*)((ng30)));
    memset(t4, 0, 8);
    xsi_vlog_signed_power(t4, 32, t6, 32, t12, 32, 1);
    t13 = (t0 + 6120);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    goto LAB266;

LAB269:    xsi_set_current_line(205, ng12);
    xsi_vlogfile_write(0, 0, 1, ng31, 1, t0);
    goto LAB271;

}


extern void tester_m_00000000001319309166_2613777659_init()
{
	static char *pe[] = {(void *)Initial_77_0};
	static char *se[] = {(void *)sp_print_input,(void *)sp_print_output,(void *)sp_print_division_input,(void *)sp_print_division_output};
	xsi_register_didat("tester_m_00000000001319309166_2613777659", "isim/tester.exe.sim/tester/m_00000000001319309166_2613777659.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
