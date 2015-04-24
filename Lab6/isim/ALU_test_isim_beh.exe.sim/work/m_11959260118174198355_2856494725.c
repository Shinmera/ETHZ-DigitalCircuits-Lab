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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/linus/Projects/ISE/Lab6_sup/ALU_test.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static const char *ng3 = "/home/linus/Projects/ISE/Lab6_sup/testvectors_hex.txt";
static unsigned int ng4[] = {0U, 0U};
static const char *ng5 = "Error at %5d ns: Aluop %b a=%h b=%h";
static const char *ng6 = "       %h (%h expected)";
static const char *ng7 = " Zero: %b (%b expected)";
static unsigned int ng8[] = {15U, 15U};
static const char *ng9 = "%d tests completed with %d errors";



static void Always_57_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);

LAB4:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Initial_64_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(65, ng0);

LAB2:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 2888);
    xsi_vlogfile_readmemh(ng3, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(71, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 11);
    xsi_set_current_line(72, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 11);

LAB1:    return;
}

static void Cont_78_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 4296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 4960);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 4864);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_81_3(char *t0)
{
    char t5[32];
    char t19[8];
    char t20[8];
    char t21[8];
    char t49[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    t1 = (t0 + 4544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4880);
    *((int *)t2) = 1;
    t3 = (t0 + 4576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(82, ng0);

LAB5:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 4352);
    xsi_process_wait(t4, 20000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2888);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2888);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2568);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t5, 101, t4, t8, t11, 2, 1, t14, 11, 2);
    t15 = (t0 + 2408);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 32);
    t16 = (t0 + 1928);
    xsi_vlogvar_assign_value(t16, t5, 32, 0, 32);
    t17 = (t0 + 1768);
    xsi_vlogvar_assign_value(t17, t5, 64, 0, 32);
    t18 = (t0 + 2088);
    xsi_vlogvar_assign_value(t18, t5, 96, 0, 4);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4352);
    xsi_process_wait(t2, 60000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    memset(t19, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t6))
        goto LAB9;

LAB8:    t7 = (t3 + 4);
    t8 = (t6 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t8))
        goto LAB9;

LAB10:    t9 = (t0 + 1208U);
    t10 = *((char **)t9);
    t9 = (t0 + 1368U);
    t11 = *((char **)t9);
    memset(t20, 0, 8);
    if (*((unsigned int *)t10) != *((unsigned int *)t11))
        goto LAB12;

LAB11:    t9 = (t10 + 4);
    t12 = (t11 + 4);
    if (*((unsigned int *)t9) != *((unsigned int *)t12))
        goto LAB12;

LAB13:    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t20);
    t24 = (t22 | t23);
    *((unsigned int *)t21) = t24;
    t13 = (t19 + 4);
    t14 = (t20 + 4);
    t15 = (t21 + 4);
    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    *((unsigned int *)t15) = t27;
    t28 = *((unsigned int *)t15);
    t29 = (t28 != 0);
    if (t29 == 1)
        goto LAB14;

LAB15:
LAB16:    t18 = (t21 + 4);
    t44 = *((unsigned int *)t18);
    t45 = (~(t44));
    t46 = *((unsigned int *)t21);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t4, 11, t6, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t19, 0, 0, 11);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2888);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2888);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2568);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t5, 101, t4, t8, t11, 2, 1, t14, 11, 2);
    memset(t19, 0, 8);
    t15 = (t19 + 4);
    t16 = (t5 + 24);
    t17 = (t5 + 28);
    t22 = *((unsigned int *)t16);
    t23 = (t22 >> 0);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t17);
    t25 = (t24 >> 0);
    *((unsigned int *)t15) = t25;
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 15U);
    t27 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t27 & 15U);
    t18 = ((char*)((ng8)));
    memset(t20, 0, 8);
    if (*((unsigned int *)t19) != *((unsigned int *)t18))
        goto LAB23;

LAB21:    t50 = (t19 + 4);
    t51 = (t18 + 4);
    if (*((unsigned int *)t50) != *((unsigned int *)t51))
        goto LAB23;

LAB22:    *((unsigned int *)t20) = 1;

LAB23:    t52 = (t20 + 4);
    t28 = *((unsigned int *)t52);
    t29 = (~(t28));
    t30 = *((unsigned int *)t20);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB2;

LAB9:    *((unsigned int *)t19) = 1;
    goto LAB10;

LAB12:    *((unsigned int *)t20) = 1;
    goto LAB13;

LAB14:    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t15);
    *((unsigned int *)t21) = (t30 | t31);
    t16 = (t19 + 4);
    t17 = (t20 + 4);
    t32 = *((unsigned int *)t16);
    t33 = (~(t32));
    t34 = *((unsigned int *)t19);
    t35 = (t34 & t33);
    t36 = *((unsigned int *)t17);
    t37 = (~(t36));
    t38 = *((unsigned int *)t20);
    t39 = (t38 & t37);
    t40 = (~(t35));
    t41 = (~(t39));
    t42 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t42 & t40);
    t43 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t43 & t41);
    goto LAB16;

LAB17:    xsi_set_current_line(94, ng0);

LAB20:    xsi_set_current_line(96, ng0);
    t50 = xsi_vlog_time(t49, 1000.0000000000000, 1000.0000000000000);
    t51 = (t0 + 2088);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = (t0 + 1768);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t0 + 1928);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t49, 64, (char)118, t53, 4, (char)118, t56, 32, (char)118, t59, 32);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)118, t3, 32, (char)118, t6, 32);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)118, t3, 1, (char)118, t4, 1);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t4, 11, t6, 32);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t19, 0, 0, 11);
    goto LAB19;

LAB24:    xsi_set_current_line(106, ng0);

LAB27:    xsi_set_current_line(108, ng0);
    t53 = (t0 + 2568);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = (t0 + 2728);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    xsi_vlogfile_write(1, 0, 0, ng9, 3, t0, (char)118, t55, 11, (char)118, t58, 11);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4352);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(114, ng0);
    xsi_vlog_finish(1);
    goto LAB26;

}


extern void work_m_11959260118174198355_2856494725_init()
{
	static char *pe[] = {(void *)Always_57_0,(void *)Initial_64_1,(void *)Cont_78_2,(void *)Always_81_3};
	xsi_register_didat("work_m_11959260118174198355_2856494725", "isim/ALU_test_isim_beh.exe.sim/work/m_11959260118174198355_2856494725.didat");
	xsi_register_executes(pe);
}
