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
static const char *ng0 = "C:/Users/Alexandra/Downloads/tester_tema_1_nou/tester_tema_1/build/bin/output_display.v";
static int ng1[] = {2, 0};
static int ng2[] = {1, 0};
static int ng3[] = {26, 0};
static unsigned int ng4[] = {255U, 0U};
static int ng5[] = {19, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {0, 0};
static unsigned int ng8[] = {19U, 0U};
static unsigned int ng9[] = {20U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {21U, 0U};
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {22U, 0U};
static unsigned int ng14[] = {15U, 0U};
static unsigned int ng15[] = {23U, 0U};
static unsigned int ng16[] = {31U, 0U};
static unsigned int ng17[] = {24U, 0U};
static unsigned int ng18[] = {63U, 0U};
static unsigned int ng19[] = {25U, 0U};
static unsigned int ng20[] = {127U, 0U};
static unsigned int ng21[] = {26U, 0U};



static void Always_34_0(char *t0)
{
    char t6[8];
    char t9[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t21;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t5, 16, t4, 32);
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;

LAB9:    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(38, ng0);

LAB15:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);

LAB13:    goto LAB2;

LAB7:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(35, ng0);

LAB14:    xsi_set_current_line(36, ng0);
    t18 = (t0 + 1048U);
    t19 = *((char **)t18);
    t18 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t19, 16, t18, 32);
    t21 = (t0 + 2728);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 8);
    goto LAB13;

}

static void Always_43_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    int t20;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4232);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) > *((unsigned int *)t7))
        goto LAB8;

LAB9:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB16;

LAB15:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB17;

LAB18:    t10 = (t8 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(52, ng0);

LAB24:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB22:
LAB13:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB25:    t5 = ((char*)((ng8)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 8);
    if (t20 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng9)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t20 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng11)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t20 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng13)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t20 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng15)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t20 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng17)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t20 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng19)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t20 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng21)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t20 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(44, ng0);

LAB14:    xsi_set_current_line(45, ng0);
    t18 = ((char*)((ng2)));
    t19 = (t0 + 2568);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB13;

LAB16:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t8) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(48, ng0);

LAB23:    xsi_set_current_line(49, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2568);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB22;

LAB26:    xsi_set_current_line(57, ng0);
    t6 = ((char*)((ng6)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB42;

LAB28:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB42;

LAB30:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB42;

LAB32:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB42;

LAB34:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB42;

LAB36:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB42;

LAB38:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB42;

LAB40:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB42;

}


extern void uut_m_00000000003067269801_3488864514_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Always_43_1};
	xsi_register_didat("uut_m_00000000003067269801_3488864514", "isim/tester.exe.sim/uut/m_00000000003067269801_3488864514.didat");
	xsi_register_executes(pe);
}
