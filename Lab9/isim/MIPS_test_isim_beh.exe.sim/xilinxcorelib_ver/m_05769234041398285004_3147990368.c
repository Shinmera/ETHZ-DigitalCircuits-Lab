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
static int ng0[] = {0, 0};
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {48U, 0U};
static unsigned int ng4[] = {49U, 0U};
static unsigned int ng5[] = {1U, 0U};
static const char *ng6 = "ERROR in %m at time %d ns: NOT A BINARY CHARACTER";
static unsigned int ng7[] = {1U, 1U};
static int ng8[] = {8, 0};
static const char *ng9 = "WARNING: This core is supplied with a behavioral model. To model cycle-accurate behavior you must run timing simulation.";
static int ng10[] = {48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng11[] = {1633969508, 0, 1700752495, 0, 1600547180, 0, 1600352101, 0, 28271, 0};
static int ng12[] = {2, 0};
static int ng13[] = {1952806965, 0, 7760242, 0};
static int ng14[] = {1952542262, 0, 1936744818, 0};
static int ng15[] = {15, 0};
static int ng16[] = {3, 0};
static int ng17[] = {4, 0};
static int ng18[] = {16, 0};
static const char *ng19 = "WARNING in %m at time %d ns";
static const char *ng20 = "Writing to out of range address. ";
static const char *ng21 = "Max address in %m is %d";
static const char *ng22 = "Write will be ignored.";
static const char *ng23 = "WARNING in %m at time %d ns: ";
static const char *ng24 = "Reading from out-of-range address. ";
static unsigned int ng25[] = {4294967295U, 4294967295U};



static int sp_binstr_conv(char *t1, char *t2)
{
    char t5[8];
    char t14[8];
    char t28[8];
    char t32[16];
    char t33[64];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    int t27;
    char *t29;
    char *t30;
    int t31;

LAB0:    t0 = 1;

LAB2:    t3 = ((char*)((ng0)));
    t4 = (t1 + 15832);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 15512);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    t3 = (t1 + 4552);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_minus(t5, 32, t4, 32, t3, 32);
    t6 = (t1 + 15992);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB3:    t3 = (t1 + 15992);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_greatereq(t5, 32, t6, 32, t7, 32);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:
LAB6:    t15 = (t1 + 15672);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t14, 0, 8);
    t18 = (t14 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t14) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t24 & 255U);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 255U);

LAB7:    t26 = ((char*)((ng1)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t26, 8);
    if (t27 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng3)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng4)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:
LAB21:    t3 = xsi_vlog_time(t32, 1.0000000000000000, 1.0000000000000000);
    t4 = (t1 + 5200);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t4, (char)118, t32, 64);
    t3 = ((char*)((ng7)));
    t4 = (t1 + 15512);
    t6 = (t1 + 15512);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t15 = (t1 + 15832);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t17, 32, 1);
    t18 = (t5 + 4);
    t9 = *((unsigned int *)t18);
    t27 = (!(t9));
    if (t27 == 1)
        goto LAB22;

LAB23:
LAB16:    t3 = (t1 + 15832);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t6, 32, t7, 32);
    t8 = (t1 + 15832);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    t3 = (t1 + 15672);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng8)));
    xsi_vlog_unsigned_rshift(t33, 256, t6, 256, t7, 32);
    t8 = (t1 + 15672);
    xsi_vlogvar_assign_value(t8, t33, 0, 0, 256);
    t3 = (t1 + 15992);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_minus(t5, 32, t6, 32, t7, 32);
    t8 = (t1 + 15992);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    goto LAB3;

LAB8:    t29 = ((char*)((ng2)));
    memset(t28, 0, 8);
    xsi_vlog_signed_unary_minus(t28, 32, t29, 32);
    t30 = (t1 + 15992);
    xsi_vlogvar_assign_value(t30, t28, 0, 0, 32);
    goto LAB16;

LAB10:    t4 = ((char*)((ng1)));
    t6 = (t1 + 15512);
    t7 = (t1 + 15512);
    t8 = (t7 + 72U);
    t15 = *((char **)t8);
    t16 = (t1 + 15832);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_generic_convert_bit_index(t5, t15, 2, t18, 32, 1);
    t19 = (t5 + 4);
    t9 = *((unsigned int *)t19);
    t31 = (!(t9));
    if (t31 == 1)
        goto LAB17;

LAB18:    goto LAB16;

LAB12:    t4 = ((char*)((ng5)));
    t6 = (t1 + 15512);
    t7 = (t1 + 15512);
    t8 = (t7 + 72U);
    t15 = *((char **)t8);
    t16 = (t1 + 15832);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_generic_convert_bit_index(t5, t15, 2, t18, 32, 1);
    t19 = (t5 + 4);
    t9 = *((unsigned int *)t19);
    t31 = (!(t9));
    if (t31 == 1)
        goto LAB19;

LAB20:    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t6, t4, 0, *((unsigned int *)t5), 1);
    goto LAB18;

LAB19:    xsi_vlogvar_assign_value(t6, t4, 0, *((unsigned int *)t5), 1);
    goto LAB20;

LAB22:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB23;

}

static void Initial_212_0(char *t0)
{
    char t3[64];
    char t20[8];
    char t30[8];
    char t31[8];
    char t40[8];
    char t49[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
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
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;

LAB0:
LAB2:    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 14552);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng10)));
    memcpy(t3, t1, 8);
    t2 = (t3 + 8);
    memset(t2, 0, 56);
    t4 = (t0 + 16712);
    t5 = (t0 + 5200);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    t7 = (t0 + 15672);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 256);

LAB3:    t8 = (t0 + 16808);
    t9 = *((char **)t8);
    t10 = (t9 + 80U);
    t11 = *((char **)t10);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t16 = ((int  (*)(char *, char *))t15)(t0, t9);
    if (t16 != 0)
        goto LAB5;

LAB4:    t9 = (t0 + 16808);
    t17 = *((char **)t9);
    t9 = (t0 + 15512);
    t18 = (t9 + 56U);
    t19 = *((char **)t18);
    memcpy(t20, t19, 8);
    t21 = (t0 + 5200);
    t22 = (t0 + 16712);
    t23 = 0;
    xsi_delete_subprogram_invocation(t21, t17, t0, t22, t23);
    t24 = (t0 + 14552);
    xsi_vlogvar_assign_value(t24, t20, 0, 0, 32);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 14872);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB6:    t1 = (t0 + 14872);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 880);
    t6 = *((char **)t5);
    memset(t20, 0, 8);
    xsi_vlog_signed_less(t20, 32, t4, 32, t6, 32);
    t5 = (t20 + 4);
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB7;

LAB8:    t1 = (t0 + 4008);
    t2 = *((char **)t1);
    t1 = (t2 + 4);
    t25 = *((unsigned int *)t1);
    t26 = (~(t25));
    t27 = *((unsigned int *)t2);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB14;

LAB15:
LAB16:    t1 = (t0 + 880);
    t2 = *((char **)t1);
    t1 = ((char*)((ng12)));
    t4 = (t0 + 608);
    t5 = *((char **)t4);
    memset(t20, 0, 8);
    xsi_vlog_signed_power(t20, 32, t1, 32, t5, 32, 1);
    memset(t30, 0, 8);
    xsi_vlog_signed_not_equal(t30, 32, t2, 32, t20, 32);
    t4 = (t30 + 4);
    t25 = *((unsigned int *)t4);
    t26 = (~(t25));
    t27 = *((unsigned int *)t30);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB23;

LAB24:
LAB25:    t1 = ((char*)((ng1)));
    t2 = (t0 + 12632);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 12472);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 12792);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 12952);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 13112);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 13272);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 13432);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    t1 = ((char*)((ng13)));
    t2 = ((char*)((ng14)));
    xsi_vlog_unsigned_equal(t49, 64, t1, 56, t2, 64);
    memset(t30, 0, 8);
    t4 = (t49 + 4);
    t25 = *((unsigned int *)t4);
    t26 = (~(t25));
    t27 = *((unsigned int *)t49);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t4) != 0)
        goto LAB34;

LAB35:    t6 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t6);
    t36 = (t32 || t33);
    if (t36 > 0)
        goto LAB36;

LAB37:    t37 = *((unsigned int *)t30);
    t50 = (~(t37));
    t51 = *((unsigned int *)t6);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t6) > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t30) > 0)
        goto LAB42;

LAB43:    memcpy(t20, t10, 8);

LAB44:    t11 = (t0 + 13592);
    xsi_vlogvar_assign_value(t11, t20, 0, 0, 32);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 13752);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng13)));
    t2 = ((char*)((ng14)));
    xsi_vlog_unsigned_equal(t49, 64, t1, 56, t2, 64);
    memset(t30, 0, 8);
    t4 = (t49 + 4);
    t25 = *((unsigned int *)t4);
    t26 = (~(t25));
    t27 = *((unsigned int *)t49);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t4) != 0)
        goto LAB47;

LAB48:    t6 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t6);
    t36 = (t32 || t33);
    if (t36 > 0)
        goto LAB49;

LAB50:    t37 = *((unsigned int *)t30);
    t50 = (~(t37));
    t51 = *((unsigned int *)t6);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t6) > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t30) > 0)
        goto LAB55;

LAB56:    memcpy(t20, t10, 8);

LAB57:    t11 = (t0 + 13912);
    xsi_vlogvar_assign_value(t11, t20, 0, 0, 32);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 14072);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = (t0 + 880);
    t2 = *((char **)t1);
    t1 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t2, 32, t1, 32);
    t4 = (t0 + 14712);
    xsi_vlogvar_assign_value(t4, t20, 0, 0, 5);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 15192);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng15)));
    t2 = (t0 + 15352);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
LAB5:    t8 = (t0 + 16904U);
    *((char **)t8) = &&LAB3;
    goto LAB1;

LAB7:
LAB9:    t7 = (t0 + 14552);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 14232);
    t11 = (t0 + 14232);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 14232);
    t15 = (t14 + 64U);
    t17 = *((char **)t15);
    t18 = (t0 + 14872);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    xsi_vlog_generic_convert_array_indices(t30, t31, t13, t17, 2, 1, t21, 32, 1);
    t22 = (t30 + 4);
    t32 = *((unsigned int *)t22);
    t16 = (!(t32));
    t23 = (t31 + 4);
    t33 = *((unsigned int *)t23);
    t34 = (!(t33));
    t35 = (t16 && t34);
    if (t35 == 1)
        goto LAB10;

LAB11:    t1 = (t0 + 14552);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 14392);
    t6 = (t0 + 14392);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14392);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 14872);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_convert_array_indices(t20, t30, t8, t11, 2, 1, t14, 32, 1);
    t15 = (t20 + 4);
    t25 = *((unsigned int *)t15);
    t16 = (!(t25));
    t17 = (t30 + 4);
    t26 = *((unsigned int *)t17);
    t34 = (!(t26));
    t35 = (t16 && t34);
    if (t35 == 1)
        goto LAB12;

LAB13:    t1 = (t0 + 14872);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t4, 32, t5, 32);
    t6 = (t0 + 14872);
    xsi_vlogvar_assign_value(t6, t20, 0, 0, 32);
    goto LAB6;

LAB10:    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t10, t9, 0, *((unsigned int *)t31), t39);
    goto LAB11;

LAB12:    t27 = *((unsigned int *)t20);
    t28 = *((unsigned int *)t30);
    t38 = (t27 - t28);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t30), t39);
    goto LAB13;

LAB14:
LAB17:    t4 = ((char*)((ng11)));
    t5 = (t0 + 14392);
    t6 = ((char*)((ng0)));
    t7 = (t0 + 880);
    t8 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t8, 32, t7, 32);
    xsi_vlogfile_readmemb(t4, 144, t5, 1, *((unsigned int *)t6), 1, *((unsigned int *)t20));
    t1 = ((char*)((ng0)));
    t2 = (t0 + 14872);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB18:    t1 = (t0 + 14872);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 880);
    t6 = *((char **)t5);
    memset(t20, 0, 8);
    xsi_vlog_signed_less(t20, 32, t4, 32, t6, 32);
    t5 = (t20 + 4);
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB19;

LAB20:    goto LAB16;

LAB19:    t7 = (t0 + 14392);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 14392);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 14392);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t17 = (t0 + 14872);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t30, 32, t9, t12, t15, 2, 1, t19, 32, 1);
    t21 = (t0 + 14232);
    t22 = (t0 + 14232);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t41 = (t0 + 14232);
    t42 = (t41 + 64U);
    t43 = *((char **)t42);
    t44 = (t0 + 14872);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    xsi_vlog_generic_convert_array_indices(t31, t40, t24, t43, 2, 1, t46, 32, 1);
    t47 = (t31 + 4);
    t32 = *((unsigned int *)t47);
    t16 = (!(t32));
    t48 = (t40 + 4);
    t33 = *((unsigned int *)t48);
    t34 = (!(t33));
    t35 = (t16 && t34);
    if (t35 == 1)
        goto LAB21;

LAB22:    t1 = (t0 + 14872);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t4, 32, t5, 32);
    t6 = (t0 + 14872);
    xsi_vlogvar_assign_value(t6, t20, 0, 0, 32);
    goto LAB18;

LAB21:    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t40);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t21, t30, 0, *((unsigned int *)t40), t39);
    goto LAB22;

LAB23:
LAB26:    t6 = (t0 + 880);
    t7 = *((char **)t6);
    t6 = (t0 + 14872);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);

LAB27:    t1 = (t0 + 14872);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng12)));
    t6 = (t0 + 608);
    t7 = *((char **)t6);
    memset(t20, 0, 8);
    xsi_vlog_signed_power(t20, 32, t5, 32, t7, 32, 1);
    memset(t30, 0, 8);
    xsi_vlog_signed_less(t30, 32, t4, 32, t20, 32);
    t6 = (t30 + 4);
    t25 = *((unsigned int *)t6);
    t26 = (~(t25));
    t27 = *((unsigned int *)t30);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB28;

LAB29:    goto LAB25;

LAB28:    t8 = ((char*)((ng1)));
    t9 = (t0 + 14232);
    t10 = (t0 + 14232);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 14232);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t17 = (t0 + 14872);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t31, t40, t12, t15, 2, 1, t19, 32, 1);
    t21 = (t31 + 4);
    t32 = *((unsigned int *)t21);
    t16 = (!(t32));
    t22 = (t40 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (!(t33));
    t35 = (t16 && t34);
    if (t35 == 1)
        goto LAB30;

LAB31:    t1 = (t0 + 14872);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t4, 32, t5, 32);
    t6 = (t0 + 14872);
    xsi_vlogvar_assign_value(t6, t20, 0, 0, 32);
    goto LAB27;

LAB30:    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t40);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t9, t8, 0, *((unsigned int *)t40), t39);
    goto LAB31;

LAB32:    *((unsigned int *)t30) = 1;
    goto LAB35;

LAB34:    t5 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB35;

LAB36:    t7 = ((char*)((ng0)));
    goto LAB37;

LAB38:    t8 = (t0 + 14552);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t20, 32, t7, 32, t10, 32);
    goto LAB44;

LAB42:    memcpy(t20, t7, 8);
    goto LAB44;

LAB45:    *((unsigned int *)t30) = 1;
    goto LAB48;

LAB47:    t5 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB48;

LAB49:    t7 = ((char*)((ng0)));
    goto LAB50;

LAB51:    t8 = (t0 + 14552);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    goto LAB52;

LAB53:    xsi_vlog_unsigned_bit_combine(t20, 32, t7, 32, t10, 32);
    goto LAB57;

LAB55:    memcpy(t20, t7, 8);
    goto LAB57;

}

static void Always_268_1(char *t0)
{
    char t6[8];
    char t7[8];
    char t21[8];
    char t28[8];
    char t68[8];
    char t77[8];
    char t86[8];
    char t98[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    int t95;
    int t96;
    int t97;

LAB0:    t1 = (t0 + 17152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 25656);
    *((int *)t2) = 1;
    t3 = (t0 + 17184);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 3464);
    t5 = *((char **)t4);
    t4 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_not_equal(t6, 32, t5, 32, t4, 32);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB9:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB10;

LAB11:    memcpy(t28, t7, 8);

LAB12:    t60 = (t28 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t28);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB9;

LAB10:    t19 = (t0 + 9192U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t19 = (t20 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t19) != 0)
        goto LAB15;

LAB16:    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t21);
    t31 = (t29 & t30);
    *((unsigned int *)t28) = t31;
    t32 = (t7 + 4);
    t33 = (t21 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t21) = 1;
    goto LAB16;

LAB15:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB16;

LAB17:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    t42 = (t7 + 4);
    t43 = (t21 + 4);
    t44 = *((unsigned int *)t7);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t21);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t55);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t54);
    t59 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t59 & t55);
    goto LAB19;

LAB20:
LAB23:    t66 = (t0 + 3464);
    t67 = *((char **)t66);
    t66 = ((char*)((ng16)));
    memset(t68, 0, 8);
    xsi_vlog_signed_equal(t68, 32, t67, 32, t66, 32);
    t69 = (t68 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t68);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB24;

LAB25:    t2 = (t0 + 11752U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB43;

LAB44:    t2 = (t0 + 9032U);
    t3 = *((char **)t2);
    t2 = (t0 + 14232);
    t4 = (t0 + 14232);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t14 = (t0 + 14232);
    t15 = (t14 + 64U);
    t19 = *((char **)t15);
    t20 = (t0 + 8712U);
    t27 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t19, 2, 1, t27, 5, 2);
    t20 = (t6 + 4);
    t9 = *((unsigned int *)t20);
    t52 = (!(t9));
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t53 = (!(t10));
    t95 = (t52 && t53);
    if (t95 == 1)
        goto LAB47;

LAB48:
LAB45:
LAB26:    goto LAB22;

LAB24:
LAB27:    t75 = (t0 + 608);
    t76 = *((char **)t75);
    t75 = ((char*)((ng17)));
    memset(t77, 0, 8);
    xsi_vlog_signed_greater(t77, 32, t76, 32, t75, 32);
    t78 = (t77 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB28;

LAB29:
LAB35:    t2 = ((char*)((ng0)));
    t3 = (t0 + 15192);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 15352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB30:    t2 = (t0 + 15352);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB36:    t2 = (t0 + 14872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15192);
    t8 = (t5 + 56U);
    t14 = *((char **)t8);
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t14, 32);
    t15 = (t6 + 4);
    t9 = *((unsigned int *)t15);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB37;

LAB38:    t2 = (t0 + 9032U);
    t3 = *((char **)t2);
    t2 = (t0 + 14232);
    t4 = (t0 + 14232);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t14 = (t0 + 14232);
    t15 = (t14 + 64U);
    t19 = *((char **)t15);
    t20 = (t0 + 15192);
    t27 = (t20 + 56U);
    t32 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t19, 2, 1, t32, 32, 1);
    t33 = (t6 + 4);
    t9 = *((unsigned int *)t33);
    t52 = (!(t9));
    t34 = (t7 + 4);
    t10 = *((unsigned int *)t34);
    t53 = (!(t10));
    t95 = (t52 && t53);
    if (t95 == 1)
        goto LAB41;

LAB42:    goto LAB26;

LAB28:
LAB31:    t84 = (t0 + 8712U);
    t85 = *((char **)t84);
    t84 = ((char*)((ng18)));
    memset(t86, 0, 8);
    xsi_vlog_unsigned_multiply(t86, 32, t85, 5, t84, 32);
    t87 = (t0 + 15192);
    xsi_vlogvar_assign_value(t87, t86, 0, 0, 32);
    t2 = (t0 + 15192);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng18)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 880);
    t14 = *((char **)t8);
    memset(t7, 0, 8);
    xsi_vlog_signed_greater(t7, 32, t6, 32, t14, 32);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB32;

LAB33:    t2 = (t0 + 8712U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng18)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t3, 5, t2, 32);
    t4 = ((char*)((ng15)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t6, 32, t4, 32);
    t5 = (t0 + 15352);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 32);

LAB34:    goto LAB30;

LAB32:    t15 = (t0 + 880);
    t19 = *((char **)t15);
    t15 = ((char*)((ng2)));
    memset(t21, 0, 8);
    xsi_vlog_signed_minus(t21, 32, t19, 32, t15, 32);
    t20 = (t0 + 15352);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 32);
    goto LAB34;

LAB37:    t19 = (t0 + 14232);
    t20 = (t19 + 56U);
    t27 = *((char **)t20);
    t32 = (t0 + 14232);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t42 = (t0 + 14232);
    t43 = (t42 + 64U);
    t60 = *((char **)t43);
    t66 = (t0 + 14872);
    t67 = (t66 + 56U);
    t69 = *((char **)t67);
    t75 = ((char*)((ng2)));
    memset(t21, 0, 8);
    xsi_vlog_signed_minus(t21, 32, t69, 32, t75, 32);
    xsi_vlog_generic_get_array_select_value(t7, 32, t27, t34, t60, 2, 1, t21, 32, 1);
    t76 = (t0 + 14232);
    t78 = (t0 + 14232);
    t84 = (t78 + 72U);
    t85 = *((char **)t84);
    t87 = (t0 + 14232);
    t88 = (t87 + 64U);
    t89 = *((char **)t88);
    t90 = (t0 + 14872);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    xsi_vlog_generic_convert_array_indices(t28, t68, t85, t89, 2, 1, t92, 32, 1);
    t93 = (t28 + 4);
    t16 = *((unsigned int *)t93);
    t52 = (!(t16));
    t94 = (t68 + 4);
    t17 = *((unsigned int *)t94);
    t53 = (!(t17));
    t95 = (t52 && t53);
    if (t95 == 1)
        goto LAB39;

LAB40:    t2 = (t0 + 14872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 14872);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB36;

LAB39:    t18 = *((unsigned int *)t28);
    t22 = *((unsigned int *)t68);
    t96 = (t18 - t22);
    t97 = (t96 + 1);
    xsi_vlogvar_wait_assign_value(t76, t7, 0, *((unsigned int *)t68), t97, 100LL);
    goto LAB40;

LAB41:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t96 = (t11 - t12);
    t97 = (t96 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t7), t97, 100LL);
    goto LAB42;

LAB43:
LAB46:    t4 = xsi_vlog_time(t98, 1.0000000000000000, 1.0000000000000000);
    xsi_vlogfile_write(1, 0, 0, ng19, 2, t0, (char)118, t98, 64);
    xsi_vlogfile_write(0, 0, 1, ng20, 1, t0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t3, 32, t2, 32);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t0, (char)119, t6, 32);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    goto LAB45;

LAB47:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t96 = (t11 - t12);
    t97 = (t96 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t7), t97, 100LL);
    goto LAB48;

}

static void Always_306_2(char *t0)
{
    char t4[8];
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
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 17400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 25672);
    *((int *)t2) = 1;
    t3 = (t0 + 17432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t5 = (t0 + 1560);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    t2 = (t0 + 3872);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t2) == 0)
        goto LAB14;

LAB16:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB17:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    t2 = (t0 + 3872);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB20:
LAB12:    t2 = (t0 + 6952U);
    t3 = *((char **)t2);
    t2 = (t0 + 13112);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 100LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:
LAB13:    t19 = (t0 + 6632U);
    t20 = *((char **)t19);
    t19 = (t0 + 12472);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 1, 100LL);
    t2 = (t0 + 5832U);
    t3 = *((char **)t2);
    t2 = (t0 + 12632);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 100LL);
    t2 = (t0 + 6312U);
    t3 = *((char **)t2);
    t2 = (t0 + 12792);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 100LL);
    t2 = (t0 + 5992U);
    t3 = *((char **)t2);
    t2 = (t0 + 12952);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 100LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:
LAB21:    t12 = (t0 + 6632U);
    t13 = *((char **)t12);
    t12 = (t0 + 12472);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 1, 100LL);
    t2 = (t0 + 6792U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB22;

LAB23:
LAB24:    goto LAB20;

LAB22:
LAB25:    t5 = (t0 + 5832U);
    t6 = *((char **)t5);
    t5 = (t0 + 12632);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 5, 100LL);
    t2 = (t0 + 6312U);
    t3 = *((char **)t2);
    t2 = (t0 + 12792);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 100LL);
    t2 = (t0 + 5992U);
    t3 = *((char **)t2);
    t2 = (t0 + 12952);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 100LL);
    goto LAB24;

LAB26:    t5 = (t0 + 6792U);
    t6 = *((char **)t5);
    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB28;

LAB29:
LAB32:    t12 = (t0 + 6632U);
    t13 = *((char **)t12);
    t12 = (t0 + 12472);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 1, 100LL);
    t2 = (t0 + 5832U);
    t3 = *((char **)t2);
    t2 = (t0 + 12632);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 100LL);
    t2 = (t0 + 6312U);
    t3 = *((char **)t2);
    t2 = (t0 + 12792);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 100LL);
    t2 = (t0 + 5992U);
    t3 = *((char **)t2);
    t2 = (t0 + 12952);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 100LL);
    goto LAB31;

}

static void Cont_338_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 17648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3192);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t12);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t37, 8);

LAB16:    t43 = (t0 + 26216);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t47, 0, 8);
    t48 = 1U;
    t49 = t48;
    t50 = (t3 + 4);
    t51 = *((unsigned int *)t3);
    t48 = (t48 & t51);
    t52 = *((unsigned int *)t50);
    t49 = (t49 & t52);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 | t48);
    t55 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t55 | t49);
    xsi_driver_vfirst_trans(t43, 0, 0);
    t56 = (t0 + 25688);
    *((int *)t56) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 4144);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 4294967295U);
    if (t24 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t18) != 0)
        goto LAB19;

LAB20:    t26 = (t17 + 4);
    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB21;

LAB22:    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t26);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t26) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t17) > 0)
        goto LAB27;

LAB28:    memcpy(t16, t38, 8);

LAB29:    goto LAB9;

LAB10:    t37 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t37, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t17) = 1;
    goto LAB20;

LAB19:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB20;

LAB21:    t30 = (t0 + 12472);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    goto LAB22;

LAB23:    t37 = (t0 + 6632U);
    t38 = *((char **)t37);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t16, 1, t32, 1, t38, 1);
    goto LAB29;

LAB27:    memcpy(t16, t32, 8);
    goto LAB29;

}

static void Cont_339_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t18[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    t1 = (t0 + 17896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3464);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t41 = *((unsigned int *)t4);
    t42 = (~(t41));
    t43 = *((unsigned int *)t14);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t39, 8);

LAB16:    t45 = (t0 + 26280);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memcpy(t49, t3, 8);
    xsi_driver_vfirst_trans(t45, 0, 31);
    t50 = (t0 + 25704);
    *((int *)t50) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 4144);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 4294967295U);
    if (t26 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t20) != 0)
        goto LAB19;

LAB20:    t28 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB21;

LAB22:    t35 = *((unsigned int *)t19);
    t36 = (~(t35));
    t37 = *((unsigned int *)t28);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t28) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t19) > 0)
        goto LAB27;

LAB28:    memcpy(t18, t40, 8);

LAB29:    goto LAB9;

LAB10:    t39 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t39, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t19) = 1;
    goto LAB20;

LAB19:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB20;

LAB21:    t32 = (t0 + 12952);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    goto LAB22;

LAB23:    t39 = (t0 + 5992U);
    t40 = *((char **)t39);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t18, 32, t34, 32, t40, 32);
    goto LAB29;

LAB27:    memcpy(t18, t34, 8);
    goto LAB29;

}

static void Cont_340_5(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 18144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4144);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t23 = (t0 + 26344);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 31U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t23, 0, 4);
    t37 = (t0 + 25720);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 12632);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = (t0 + 5832U);
    t24 = *((char **)t23);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 5, t18, 5, t24, 5);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_342_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t18[8];
    char t19[8];
    char t35[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;

LAB0:    t1 = (t0 + 18392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3464);
    t5 = *((char **)t2);
    t2 = ((char*)((ng16)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t43 = *((unsigned int *)t4);
    t44 = (~(t43));
    t45 = *((unsigned int *)t14);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t40, 8);

LAB16:    t47 = (t0 + 26408);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memset(t51, 0, 8);
    t52 = 31U;
    t53 = t52;
    t54 = (t3 + 4);
    t55 = *((unsigned int *)t3);
    t52 = (t52 & t55);
    t56 = *((unsigned int *)t54);
    t53 = (t53 & t56);
    t57 = (t51 + 4);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t58 | t52);
    t59 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t59 | t53);
    xsi_driver_vfirst_trans(t47, 0, 4);
    t60 = (t0 + 25736);
    *((int *)t60) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 4144);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 4294967295U);
    if (t26 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t20) != 0)
        goto LAB19;

LAB20:    t28 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB21;

LAB22:    t36 = *((unsigned int *)t19);
    t37 = (~(t36));
    t38 = *((unsigned int *)t28);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t28) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t19) > 0)
        goto LAB27;

LAB28:    memcpy(t18, t42, 8);

LAB29:    goto LAB9;

LAB10:    t40 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t40, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t19) = 1;
    goto LAB20;

LAB19:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB20;

LAB21:    t32 = (t0 + 12792);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t35, t34, 8);
    goto LAB22;

LAB23:    t40 = (t0 + 6312U);
    t41 = *((char **)t40);
    memcpy(t42, t41, 8);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t18, 32, t35, 32, t42, 32);
    goto LAB29;

LAB27:    memcpy(t18, t35, 8);
    goto LAB29;

}

static void Cont_343_7(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 18640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2512);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t12);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t37, 8);

LAB16:    t43 = (t0 + 26472);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t47, 0, 8);
    t48 = 1U;
    t49 = t48;
    t50 = (t3 + 4);
    t51 = *((unsigned int *)t3);
    t48 = (t48 & t51);
    t52 = *((unsigned int *)t50);
    t49 = (t49 & t52);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 | t48);
    t55 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t55 | t49);
    xsi_driver_vfirst_trans(t43, 0, 0);
    t56 = (t0 + 25752);
    *((int *)t56) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 4144);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 4294967295U);
    if (t24 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t18) != 0)
        goto LAB19;

LAB20:    t26 = (t17 + 4);
    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB21;

LAB22:    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t26);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t26) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t17) > 0)
        goto LAB27;

LAB28:    memcpy(t16, t38, 8);

LAB29:    goto LAB9;

LAB10:    t37 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t37, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t17) = 1;
    goto LAB20;

LAB19:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB20;

LAB21:    t30 = (t0 + 13112);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    goto LAB22;

LAB23:    t37 = (t0 + 6952U);
    t38 = *((char **)t37);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t16, 1, t32, 1, t38, 1);
    goto LAB29;

LAB27:    memcpy(t16, t32, 8);
    goto LAB29;

}

static void Cont_345_8(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t18[8];
    char t19[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;

LAB0:    t1 = (t0 + 18888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3464);
    t5 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t41 = *((unsigned int *)t4);
    t42 = (~(t41));
    t43 = *((unsigned int *)t14);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t34, 8);

LAB16:    t45 = (t0 + 26536);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t49, 0, 8);
    t50 = 1U;
    t51 = t50;
    t52 = (t3 + 4);
    t53 = *((unsigned int *)t3);
    t50 = (t50 & t53);
    t54 = *((unsigned int *)t52);
    t51 = (t51 & t54);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 | t50);
    t57 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t57 | t51);
    xsi_driver_vfirst_trans(t45, 0, 0);
    t58 = (t0 + 25768);
    *((int *)t58) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 1968);
    t21 = *((char **)t20);
    t20 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_signed_equal(t22, 32, t21, 32, t20, 32);
    memset(t19, 0, 8);
    t23 = (t22 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t23) != 0)
        goto LAB19;

LAB20:    t30 = (t19 + 4);
    t31 = *((unsigned int *)t19);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB21;

LAB22:    t36 = *((unsigned int *)t19);
    t37 = (~(t36));
    t38 = *((unsigned int *)t30);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t30) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t19) > 0)
        goto LAB27;

LAB28:    memcpy(t18, t40, 8);

LAB29:    goto LAB9;

LAB10:    t34 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t34, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t19) = 1;
    goto LAB20;

LAB19:    t29 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB20;

LAB21:    t34 = (t0 + 7272U);
    t35 = *((char **)t34);
    goto LAB22;

LAB23:    t34 = (t0 + 6472U);
    t40 = *((char **)t34);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t18, 1, t35, 1, t40, 1);
    goto LAB29;

LAB27:    memcpy(t18, t35, 8);
    goto LAB29;

}

static void Always_348_9(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 19136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 25784);
    *((int *)t2) = 1;
    t3 = (t0 + 19168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 3736);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB20:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t2) == 0)
        goto LAB21;

LAB23:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB24:    t5 = (t11 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB25;

LAB26:    t2 = (t0 + 7112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB28;

LAB29:
LAB30:
LAB27:
LAB8:    t2 = (t0 + 7112U);
    t3 = *((char **)t2);
    t2 = (t0 + 13432);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 100LL);
    goto LAB2;

LAB6:
LAB9:    t12 = (t0 + 2512);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 & 4294967295U);
    if (t18 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t12) == 0)
        goto LAB10;

LAB12:    t19 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t19) = 1;

LAB13:    t20 = (t11 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t11);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB14;

LAB15:    t2 = (t0 + 6952U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB16:    goto LAB8;

LAB10:    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    t26 = (t0 + 6152U);
    t27 = *((char **)t26);
    t26 = (t0 + 13272);
    xsi_vlogvar_wait_assign_value(t26, t27, 0, 0, 5, 100LL);
    goto LAB16;

LAB17:    t4 = (t0 + 6152U);
    t5 = *((char **)t4);
    t4 = (t0 + 13272);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 5, 100LL);
    goto LAB19;

LAB21:    *((unsigned int *)t11) = 1;
    goto LAB24;

LAB25:    t12 = (t0 + 6152U);
    t13 = *((char **)t12);
    t12 = (t0 + 13272);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 5, 100LL);
    goto LAB27;

LAB28:    t4 = (t0 + 6152U);
    t5 = *((char **)t4);
    t4 = (t0 + 13272);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 5, 100LL);
    goto LAB30;

}

static void Cont_369_10(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t18[8];
    char t19[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;

LAB0:    t1 = (t0 + 19384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3464);
    t5 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t43 = *((unsigned int *)t4);
    t44 = (~(t43));
    t45 = *((unsigned int *)t14);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t41, 8);

LAB16:    t47 = (t0 + 26600);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memset(t51, 0, 8);
    t52 = 31U;
    t53 = t52;
    t54 = (t3 + 4);
    t55 = *((unsigned int *)t3);
    t52 = (t52 & t55);
    t56 = *((unsigned int *)t54);
    t53 = (t53 & t56);
    t57 = (t51 + 4);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t58 | t52);
    t59 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t59 | t53);
    xsi_driver_vfirst_trans(t47, 0, 4);
    t60 = (t0 + 25800);
    *((int *)t60) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 4280);
    t21 = *((char **)t20);
    t20 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_signed_equal(t22, 32, t21, 32, t20, 32);
    memset(t19, 0, 8);
    t23 = (t22 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t23) != 0)
        goto LAB19;

LAB20:    t30 = (t19 + 4);
    t31 = *((unsigned int *)t19);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB21;

LAB22:    t37 = *((unsigned int *)t19);
    t38 = (~(t37));
    t39 = *((unsigned int *)t30);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t30) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t19) > 0)
        goto LAB27;

LAB28:    memcpy(t18, t42, 8);

LAB29:    goto LAB9;

LAB10:    t41 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 5, t18, 5, t41, 5);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t19) = 1;
    goto LAB20;

LAB19:    t29 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB20;

LAB21:    t34 = (t0 + 13272);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    goto LAB22;

LAB23:    t41 = (t0 + 6152U);
    t42 = *((char **)t41);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t18, 5, t36, 5, t42, 5);
    goto LAB29;

LAB27:    memcpy(t18, t36, 8);
    goto LAB29;

}

static void Cont_372_11(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t18[8];
    char t19[8];
    char t32[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;

LAB0:    t1 = (t0 + 19632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3464);
    t5 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t59 = *((unsigned int *)t4);
    t60 = (~(t59));
    t61 = *((unsigned int *)t14);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t63, 8);

LAB16:    t64 = (t0 + 26664);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    memset(t68, 0, 8);
    t69 = 1U;
    t70 = t69;
    t71 = (t3 + 4);
    t72 = *((unsigned int *)t3);
    t69 = (t69 & t72);
    t73 = *((unsigned int *)t71);
    t70 = (t70 & t73);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t75 | t69);
    t76 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t76 | t70);
    xsi_driver_vfirst_trans(t64, 0, 0);
    t77 = (t0 + 25816);
    *((int *)t77) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 1832);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 4294967295U);
    if (t26 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t20) != 0)
        goto LAB19;

LAB20:    t28 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB21;

LAB22:    t55 = *((unsigned int *)t19);
    t56 = (~(t55));
    t57 = *((unsigned int *)t28);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t28) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t19) > 0)
        goto LAB27;

LAB28:    memcpy(t18, t53, 8);

LAB29:    goto LAB9;

LAB10:    t63 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t63, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t19) = 1;
    goto LAB20;

LAB19:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB20;

LAB21:    t34 = (t0 + 4280);
    t35 = *((char **)t34);
    memset(t33, 0, 8);
    t34 = (t35 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (~(t36));
    t38 = *((unsigned int *)t35);
    t39 = (t38 & t37);
    t40 = (t39 & 4294967295U);
    if (t40 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t34) != 0)
        goto LAB32;

LAB33:    t42 = (t33 + 4);
    t43 = *((unsigned int *)t33);
    t44 = *((unsigned int *)t42);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB34;

LAB35:    t49 = *((unsigned int *)t33);
    t50 = (~(t49));
    t51 = *((unsigned int *)t42);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t42) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t33) > 0)
        goto LAB40;

LAB41:    memcpy(t32, t54, 8);

LAB42:    goto LAB22;

LAB23:    t53 = ((char*)((ng1)));
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t18, 1, t32, 1, t53, 1);
    goto LAB29;

LAB27:    memcpy(t18, t32, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t33) = 1;
    goto LAB33;

LAB32:    t41 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB33;

LAB34:    t46 = (t0 + 13432);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    goto LAB35;

LAB36:    t53 = (t0 + 7112U);
    t54 = *((char **)t53);
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t32, 1, t48, 1, t54, 1);
    goto LAB42;

LAB40:    memcpy(t32, t48, 8);
    goto LAB42;

}

static void Always_375_12(char *t0)
{
    char t6[8];
    char t13[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;

LAB0:    t1 = (t0 + 19880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 25832);
    *((int *)t2) = 1;
    t3 = (t0 + 19912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 3464);
    t5 = *((char **)t4);
    t4 = ((char*)((ng16)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t4, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:
LAB9:    t14 = xsi_vlog_time(t13, 1.0000000000000000, 1.0000000000000000);
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)118, t13, 64);
    xsi_vlogfile_write(0, 0, 1, ng24, 1, t0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t3, 32, t2, 32);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t0, (char)119, t6, 32);
    goto LAB8;

}

static void Always_385_13(char *t0)
{
    char t6[8];
    char t13[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;

LAB0:    t1 = (t0 + 20128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 25848);
    *((int *)t2) = 1;
    t3 = (t0 + 20160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 3464);
    t5 = *((char **)t4);
    t4 = ((char*)((ng16)));
    memset(t6, 0, 8);
    xsi_vlog_signed_not_equal(t6, 32, t5, 32, t4, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:
LAB9:    t14 = xsi_vlog_time(t13, 1.0000000000000000, 1.0000000000000000);
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)118, t13, 64);
    xsi_vlogfile_write(0, 0, 1, ng24, 1, t0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t3, 32, t2, 32);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t0, (char)119, t6, 32);
    goto LAB8;

}

static void Cont_395_14(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 20376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2920);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t16, 8);

LAB16:    t22 = (t0 + 26728);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t3, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 25864);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 9992U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = ((char*)((ng25)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t17, 32, t16, 32);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Always_397_15(char *t0)
{
    char t6[8];
    char t13[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;

LAB0:    t1 = (t0 + 20624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 25880);
    *((int *)t2) = 1;
    t3 = (t0 + 20656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 3464);
    t5 = *((char **)t4);
    t4 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t4, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:
LAB9:    t14 = xsi_vlog_time(t13, 1.0000000000000000, 1.0000000000000000);
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)118, t13, 64);
    xsi_vlogfile_write(0, 0, 1, ng24, 1, t0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t3, 32, t2, 32);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t0, (char)119, t6, 32);
    goto LAB8;

}

static void Cont_407_16(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t18[8];
    char t19[8];
    char t43[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;

LAB0:    t1 = (t0 + 20872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3464);
    t5 = *((char **)t2);
    t2 = ((char*)((ng16)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t14);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t43, 8);

LAB16:    t56 = (t0 + 26792);
    t63 = (t56 + 56U);
    t64 = *((char **)t63);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memcpy(t66, t3, 8);
    xsi_driver_vfirst_trans(t56, 0, 31);
    t67 = (t0 + 25896);
    *((int *)t67) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 12072U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t20) != 0)
        goto LAB19;

LAB20:    t28 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB21;

LAB22:    t34 = *((unsigned int *)t19);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t28) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t19) > 0)
        goto LAB27;

LAB28:    memcpy(t18, t38, 8);

LAB29:    goto LAB9;

LAB10:    t32 = (t0 + 11752U);
    t45 = *((char **)t32);
    memset(t44, 0, 8);
    t32 = (t45 + 4);
    t46 = *((unsigned int *)t32);
    t47 = (~(t46));
    t48 = *((unsigned int *)t45);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t32) != 0)
        goto LAB32;

LAB33:    t52 = (t44 + 4);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t52);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB34;

LAB35:    t58 = *((unsigned int *)t44);
    t59 = (~(t58));
    t60 = *((unsigned int *)t52);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t52) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t44) > 0)
        goto LAB40;

LAB41:    memcpy(t43, t62, 8);

LAB42:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t43, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t19) = 1;
    goto LAB20;

LAB19:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB20;

LAB21:    t32 = (t0 + 11112U);
    t33 = *((char **)t32);
    goto LAB22;

LAB23:    t32 = (t0 + 10632U);
    t38 = *((char **)t32);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t18, 32, t33, 32, t38, 32);
    goto LAB29;

LAB27:    memcpy(t18, t33, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t44) = 1;
    goto LAB33;

LAB32:    t51 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB33;

LAB34:    t56 = (t0 + 10792U);
    t57 = *((char **)t56);
    goto LAB35;

LAB36:    t56 = (t0 + 10312U);
    t62 = *((char **)t56);
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t43, 32, t57, 32, t62, 32);
    goto LAB42;

LAB40:    memcpy(t43, t57, 8);
    goto LAB42;

}

static void Cont_410_17(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t18[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 21120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3464);
    t5 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t14);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t32, 8);

LAB16:    t43 = (t0 + 26856);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t3, 8);
    xsi_driver_vfirst_trans(t43, 0, 31);
    t48 = (t0 + 25912);
    *((int *)t48) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 11912U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t20) != 0)
        goto LAB19;

LAB20:    t28 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB21;

LAB22:    t34 = *((unsigned int *)t19);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t28) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t19) > 0)
        goto LAB27;

LAB28:    memcpy(t18, t38, 8);

LAB29:    goto LAB9;

LAB10:    t32 = ((char*)((ng25)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t32, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t19) = 1;
    goto LAB20;

LAB19:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB20;

LAB21:    t32 = (t0 + 10952U);
    t33 = *((char **)t32);
    goto LAB22;

LAB23:    t32 = (t0 + 10472U);
    t38 = *((char **)t32);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t18, 32, t33, 32, t38, 32);
    goto LAB29;

LAB27:    memcpy(t18, t33, 8);
    goto LAB29;

}

static void Cont_412_18(char *t0)
{
    char t5[8];
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

LAB0:    t1 = (t0 + 21368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14232);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14232);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 8712U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 26920);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 25928);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_413_19(char *t0)
{
    char t5[8];
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

LAB0:    t1 = (t0 + 21616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14232);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14232);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 9672U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 26984);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 25944);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_414_20(char *t0)
{
    char t5[8];
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

LAB0:    t1 = (t0 + 21864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14232);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14232);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 8872U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 27048);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 25960);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_416_21(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
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
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 22112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8712U);
    t5 = *((char **)t2);
    t2 = (t0 + 14712);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB4:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB12:    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB13;

LAB14:    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t28, 8);

LAB21:    t29 = (t0 + 27112);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t3 + 4);
    t37 = *((unsigned int *)t3);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 25976);
    *((int *)t42) = 1;

LAB1:    return;
LAB5:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB13:    t23 = ((char*)((ng5)));
    goto LAB14;

LAB15:    t28 = ((char*)((ng1)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 1, t23, 1, t28, 1);
    goto LAB21;

LAB19:    memcpy(t3, t23, 8);
    goto LAB21;

}

static void Cont_417_22(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
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
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 22360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 9672U);
    t5 = *((char **)t2);
    t2 = (t0 + 14712);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB4:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB12:    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB13;

LAB14:    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t28, 8);

LAB21:    t29 = (t0 + 27176);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t3 + 4);
    t37 = *((unsigned int *)t3);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 25992);
    *((int *)t42) = 1;

LAB1:    return;
LAB5:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB13:    t23 = ((char*)((ng5)));
    goto LAB14;

LAB15:    t28 = ((char*)((ng1)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 1, t23, 1, t28, 1);
    goto LAB21;

LAB19:    memcpy(t3, t23, 8);
    goto LAB21;

}

static void Cont_418_23(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
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
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 22608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8872U);
    t5 = *((char **)t2);
    t2 = (t0 + 14712);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB4:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB12:    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB13;

LAB14:    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t28, 8);

LAB21:    t29 = (t0 + 27240);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t3 + 4);
    t37 = *((unsigned int *)t3);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 26008);
    *((int *)t42) = 1;

LAB1:    return;
LAB5:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB13:    t23 = ((char*)((ng5)));
    goto LAB14;

LAB15:    t28 = ((char*)((ng1)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 1, t23, 1, t28, 1);
    goto LAB21;

LAB19:    memcpy(t3, t23, 8);
    goto LAB21;

}

static void Cont_420_24(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;

LAB0:    t1 = (t0 + 22856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8712U);
    t3 = *((char **)t2);
    t2 = (t0 + 14712);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t10 = (t3 + 4);
    t11 = (t5 + 4);
    t12 = (t6 + 4);
    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    t38 = (t0 + 27304);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t42, 0, 8);
    t43 = 31U;
    t44 = t43;
    t45 = (t6 + 4);
    t46 = *((unsigned int *)t6);
    t43 = (t43 & t46);
    t47 = *((unsigned int *)t45);
    t44 = (t44 & t47);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t49 | t43);
    t50 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t50 | t44);
    xsi_driver_vfirst_trans(t38, 0, 4);
    t51 = (t0 + 26024);
    *((int *)t51) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = (t3 + 4);
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t33);
    goto LAB6;

}

static void Cont_421_25(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;

LAB0:    t1 = (t0 + 23104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 9672U);
    t3 = *((char **)t2);
    t2 = (t0 + 14712);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t10 = (t3 + 4);
    t11 = (t5 + 4);
    t12 = (t6 + 4);
    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    t38 = (t0 + 27368);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t42, 0, 8);
    t43 = 31U;
    t44 = t43;
    t45 = (t6 + 4);
    t46 = *((unsigned int *)t6);
    t43 = (t43 & t46);
    t47 = *((unsigned int *)t45);
    t44 = (t44 & t47);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t49 | t43);
    t50 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t50 | t44);
    xsi_driver_vfirst_trans(t38, 0, 4);
    t51 = (t0 + 26040);
    *((int *)t51) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = (t3 + 4);
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t33);
    goto LAB6;

}

static void Cont_422_26(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;

LAB0:    t1 = (t0 + 23352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8872U);
    t3 = *((char **)t2);
    t2 = (t0 + 14712);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t10 = (t3 + 4);
    t11 = (t5 + 4);
    t12 = (t6 + 4);
    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    t38 = (t0 + 27432);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t42, 0, 8);
    t43 = 31U;
    t44 = t43;
    t45 = (t6 + 4);
    t46 = *((unsigned int *)t6);
    t43 = (t43 & t46);
    t47 = *((unsigned int *)t45);
    t44 = (t44 & t47);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t49 | t43);
    t50 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t50 | t44);
    xsi_driver_vfirst_trans(t38, 0, 4);
    t51 = (t0 + 26056);
    *((int *)t51) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = (t3 + 4);
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t33);
    goto LAB6;

}

static void Cont_424_27(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 23600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng25)));
    t3 = (t0 + 27496);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_425_28(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 23848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng25)));
    t3 = (t0 + 27560);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_426_29(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 24096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng25)));
    t3 = (t0 + 27624);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_428_30(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 24344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1288);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t16, 8);

LAB16:    t22 = (t0 + 27688);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t3, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 26072);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 10152U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = ((char*)((ng25)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t17, 32, t16, 32);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Always_430_31(char *t0)
{
    char t6[8];
    char t19[8];
    char t26[8];
    char t66[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;

LAB0:    t1 = (t0 + 24592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 26088);
    *((int *)t2) = 1;
    t3 = (t0 + 24624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2648);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t26, t6, 8);

LAB12:    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB20;

LAB21:    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t2) != 0)
        goto LAB26;

LAB27:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB28;

LAB29:    memcpy(t26, t6, 8);

LAB30:    t40 = (t26 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB38;

LAB39:    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t2) != 0)
        goto LAB78;

LAB79:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB80;

LAB81:    memcpy(t26, t6, 8);

LAB82:    t40 = (t26 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB90;

LAB91:    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB102;

LAB100:    if (*((unsigned int *)t2) == 0)
        goto LAB99;

LAB101:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB102:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t20 = (t16 & t15);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB103;

LAB104:
LAB105:
LAB92:
LAB40:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 7432U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t17) != 0)
        goto LAB15;

LAB16:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB15:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB16;

LAB17:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB19;

LAB20:
LAB23:    t64 = ((char*)((ng1)));
    t65 = (t0 + 13752);
    xsi_vlogvar_wait_assign_value(t65, t64, 0, 0, 32, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB22;

LAB24:    *((unsigned int *)t6) = 1;
    goto LAB27;

LAB26:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB27;

LAB28:    t12 = (t0 + 7752U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t12) != 0)
        goto LAB33;

LAB34:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t18 = (t6 + 4);
    t25 = (t19 + 4);
    t30 = (t26 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB30;

LAB31:    *((unsigned int *)t19) = 1;
    goto LAB34;

LAB33:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB34;

LAB35:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t38 | t39);
    t31 = (t6 + 4);
    t32 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB37;

LAB38:
LAB41:    t41 = (t0 + 2512);
    t58 = *((char **)t41);
    memset(t66, 0, 8);
    t41 = (t58 + 4);
    t67 = *((unsigned int *)t41);
    t68 = (~(t67));
    t69 = *((unsigned int *)t58);
    t70 = (t69 & t68);
    t71 = (t70 & 4294967295U);
    if (t71 != 0)
        goto LAB45;

LAB43:    if (*((unsigned int *)t41) == 0)
        goto LAB42;

LAB44:    t64 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t64) = 1;

LAB45:    t65 = (t66 + 4);
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = *((unsigned int *)t66);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB46;

LAB47:    t2 = (t0 + 4416);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB53;

LAB51:    if (*((unsigned int *)t2) == 0)
        goto LAB50;

LAB52:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB53:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t20 = (t16 & t15);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB54;

LAB55:    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t2) != 0)
        goto LAB60;

LAB61:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB62;

LAB63:    memcpy(t26, t6, 8);

LAB64:    t40 = (t26 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB72;

LAB73:
LAB74:
LAB56:
LAB48:    goto LAB40;

LAB42:    *((unsigned int *)t66) = 1;
    goto LAB45;

LAB46:
LAB49:    t77 = ((char*)((ng1)));
    t78 = (t0 + 13752);
    xsi_vlogvar_wait_assign_value(t78, t77, 0, 0, 32, 100LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 100LL);
    goto LAB48;

LAB50:    *((unsigned int *)t6) = 1;
    goto LAB53;

LAB54:
LAB57:    t12 = ((char*)((ng1)));
    t13 = (t0 + 13752);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 32, 100LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 100LL);
    goto LAB56;

LAB58:    *((unsigned int *)t6) = 1;
    goto LAB61;

LAB60:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB61;

LAB62:    t12 = (t0 + 9352U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t12) != 0)
        goto LAB67;

LAB68:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t18 = (t6 + 4);
    t25 = (t19 + 4);
    t30 = (t26 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB64;

LAB65:    *((unsigned int *)t19) = 1;
    goto LAB68;

LAB67:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB68;

LAB69:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t38 | t39);
    t31 = (t6 + 4);
    t32 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB71;

LAB72:
LAB75:    t41 = ((char*)((ng1)));
    t58 = (t0 + 13752);
    xsi_vlogvar_wait_assign_value(t58, t41, 0, 0, 32, 100LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 100LL);
    goto LAB74;

LAB76:    *((unsigned int *)t6) = 1;
    goto LAB79;

LAB78:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB79;

LAB80:    t12 = (t0 + 9352U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t12) != 0)
        goto LAB85;

LAB86:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t18 = (t6 + 4);
    t25 = (t19 + 4);
    t30 = (t26 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB87;

LAB88:
LAB89:    goto LAB82;

LAB83:    *((unsigned int *)t19) = 1;
    goto LAB86;

LAB85:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB86;

LAB87:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t38 | t39);
    t31 = (t6 + 4);
    t32 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB89;

LAB90:
LAB93:    t41 = (t0 + 3600);
    t58 = *((char **)t41);
    t41 = ((char*)((ng2)));
    memset(t66, 0, 8);
    xsi_vlog_signed_equal(t66, 32, t58, 32, t41, 32);
    t64 = (t66 + 4);
    t67 = *((unsigned int *)t64);
    t68 = (~(t67));
    t69 = *((unsigned int *)t66);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB94;

LAB95:
LAB98:    t2 = (t0 + 9992U);
    t3 = *((char **)t2);
    t2 = (t0 + 13592);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 100LL);

LAB96:    t2 = (t0 + 9992U);
    t3 = *((char **)t2);
    t2 = (t0 + 13752);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 100LL);
    goto LAB92;

LAB94:
LAB97:    t65 = (t0 + 13752);
    t77 = (t65 + 56U);
    t78 = *((char **)t77);
    t79 = (t0 + 13592);
    xsi_vlogvar_wait_assign_value(t79, t78, 0, 0, 32, 100LL);
    goto LAB96;

LAB99:    *((unsigned int *)t6) = 1;
    goto LAB102;

LAB103:
LAB106:    t12 = (t0 + 3600);
    t13 = *((char **)t12);
    t12 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_signed_equal(t19, 32, t13, 32, t12, 32);
    t17 = (t19 + 4);
    t22 = *((unsigned int *)t17);
    t23 = (~(t22));
    t24 = *((unsigned int *)t19);
    t27 = (t24 & t23);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB107;

LAB108:
LAB111:    t2 = (t0 + 9992U);
    t3 = *((char **)t2);
    t2 = (t0 + 13592);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 100LL);

LAB109:    t2 = (t0 + 9992U);
    t3 = *((char **)t2);
    t2 = (t0 + 13752);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 100LL);
    goto LAB105;

LAB107:
LAB110:    t18 = (t0 + 13752);
    t25 = (t18 + 56U);
    t30 = *((char **)t25);
    t31 = (t0 + 13592);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 32, 100LL);
    goto LAB109;

}

static void Cont_482_32(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 24840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2376);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 27752);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t3, 8);
    xsi_driver_vfirst_trans(t26, 0, 31);
    t31 = (t0 + 26104);
    *((int *)t31) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 13592);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = ((char*)((ng25)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t25, 32);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Always_484_33(char *t0)
{
    char t6[8];
    char t19[8];
    char t26[8];
    char t66[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;

LAB0:    t1 = (t0 + 25088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 26120);
    *((int *)t2) = 1;
    t3 = (t0 + 25120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2104);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t26, t6, 8);

LAB12:    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB20;

LAB21:    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t2) != 0)
        goto LAB26;

LAB27:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB28;

LAB29:    memcpy(t26, t6, 8);

LAB30:    t40 = (t26 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB38;

LAB39:    t2 = (t0 + 3736);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB114;

LAB112:    if (*((unsigned int *)t2) == 0)
        goto LAB111;

LAB113:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB114:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t20 = (t16 & t15);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB115;

LAB116:    t2 = (t0 + 3736);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB155;

LAB156:
LAB157:
LAB117:
LAB40:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 7592U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t17) != 0)
        goto LAB15;

LAB16:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB15:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB16;

LAB17:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB19;

LAB20:
LAB23:    t64 = ((char*)((ng1)));
    t65 = (t0 + 14072);
    xsi_vlogvar_wait_assign_value(t65, t64, 0, 0, 32, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB22;

LAB24:    *((unsigned int *)t6) = 1;
    goto LAB27;

LAB26:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB27;

LAB28:    t12 = (t0 + 7912U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t12) != 0)
        goto LAB33;

LAB34:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t18 = (t6 + 4);
    t25 = (t19 + 4);
    t30 = (t26 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB30;

LAB31:    *((unsigned int *)t19) = 1;
    goto LAB34;

LAB33:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB34;

LAB35:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t38 | t39);
    t31 = (t6 + 4);
    t32 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB37;

LAB38:
LAB41:    t41 = (t0 + 4416);
    t58 = *((char **)t41);
    memset(t66, 0, 8);
    t41 = (t58 + 4);
    t67 = *((unsigned int *)t41);
    t68 = (~(t67));
    t69 = *((unsigned int *)t58);
    t70 = (t69 & t68);
    t71 = (t70 & 4294967295U);
    if (t71 != 0)
        goto LAB45;

LAB43:    if (*((unsigned int *)t41) == 0)
        goto LAB42;

LAB44:    t64 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t64) = 1;

LAB45:    t65 = (t66 + 4);
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = *((unsigned int *)t66);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB46;

LAB47:    t2 = (t0 + 3736);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB53;

LAB51:    if (*((unsigned int *)t2) == 0)
        goto LAB50;

LAB52:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB53:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t20 = (t16 & t15);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB54;

LAB55:
LAB84:    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB88;

LAB86:    if (*((unsigned int *)t2) == 0)
        goto LAB85;

LAB87:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB88:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t20 = (t16 & t15);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB89;

LAB90:    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t2) != 0)
        goto LAB95;

LAB96:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB97;

LAB98:    memcpy(t26, t6, 8);

LAB99:    t40 = (t26 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB107;

LAB108:
LAB109:
LAB91:
LAB56:
LAB48:    goto LAB40;

LAB42:    *((unsigned int *)t66) = 1;
    goto LAB45;

LAB46:
LAB49:    t77 = ((char*)((ng1)));
    t78 = (t0 + 14072);
    xsi_vlogvar_wait_assign_value(t78, t77, 0, 0, 32, 100LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 100LL);
    goto LAB48;

LAB50:    *((unsigned int *)t6) = 1;
    goto LAB53;

LAB54:
LAB57:    t12 = (t0 + 1832);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t27 = (t24 & t23);
    t28 = (t27 & 4294967295U);
    if (t28 != 0)
        goto LAB61;

LAB59:    if (*((unsigned int *)t12) == 0)
        goto LAB58;

LAB60:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;

LAB61:    t18 = (t19 + 4);
    t29 = *((unsigned int *)t18);
    t33 = (~(t29));
    t34 = *((unsigned int *)t19);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB62;

LAB63:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t2) != 0)
        goto LAB68;

LAB69:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB70;

LAB71:    memcpy(t26, t6, 8);

LAB72:    t40 = (t26 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB80;

LAB81:
LAB82:
LAB64:    goto LAB56;

LAB58:    *((unsigned int *)t19) = 1;
    goto LAB61;

LAB62:
LAB65:    t25 = ((char*)((ng1)));
    t30 = (t0 + 14072);
    xsi_vlogvar_wait_assign_value(t30, t25, 0, 0, 32, 100LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 100LL);
    goto LAB64;

LAB66:    *((unsigned int *)t6) = 1;
    goto LAB69;

LAB68:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB69;

LAB70:    t12 = (t0 + 9832U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t12) != 0)
        goto LAB75;

LAB76:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t18 = (t6 + 4);
    t25 = (t19 + 4);
    t30 = (t26 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB72;

LAB73:    *((unsigned int *)t19) = 1;
    goto LAB76;

LAB75:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB76;

LAB77:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t38 | t39);
    t31 = (t6 + 4);
    t32 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB79;

LAB80:
LAB83:    t41 = ((char*)((ng1)));
    t58 = (t0 + 14072);
    xsi_vlogvar_wait_assign_value(t58, t41, 0, 0, 32, 100LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 100LL);
    goto LAB82;

LAB85:    *((unsigned int *)t6) = 1;
    goto LAB88;

LAB89:
LAB92:    t12 = ((char*)((ng1)));
    t13 = (t0 + 14072);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 32, 100LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 100LL);
    goto LAB91;

LAB93:    *((unsigned int *)t6) = 1;
    goto LAB96;

LAB95:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB96;

LAB97:    t12 = (t0 + 9352U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t12) != 0)
        goto LAB102;

LAB103:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t18 = (t6 + 4);
    t25 = (t19 + 4);
    t30 = (t26 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB104;

LAB105:
LAB106:    goto LAB99;

LAB100:    *((unsigned int *)t19) = 1;
    goto LAB103;

LAB102:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB103;

LAB104:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t38 | t39);
    t31 = (t6 + 4);
    t32 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB106;

LAB107:
LAB110:    t41 = ((char*)((ng1)));
    t58 = (t0 + 14072);
    xsi_vlogvar_wait_assign_value(t58, t41, 0, 0, 32, 100LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 100LL);
    goto LAB109;

LAB111:    *((unsigned int *)t6) = 1;
    goto LAB114;

LAB115:
LAB118:    t12 = (t0 + 1832);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t27 = (t24 & t23);
    t28 = (t27 & 4294967295U);
    if (t28 != 0)
        goto LAB122;

LAB120:    if (*((unsigned int *)t12) == 0)
        goto LAB119;

LAB121:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;

LAB122:    t18 = (t19 + 4);
    t29 = *((unsigned int *)t18);
    t33 = (~(t29));
    t34 = *((unsigned int *)t19);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB123;

LAB124:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t2) != 0)
        goto LAB134;

LAB135:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB136;

LAB137:    memcpy(t26, t6, 8);

LAB138:    t40 = (t26 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB146;

LAB147:
LAB148:
LAB125:    goto LAB117;

LAB119:    *((unsigned int *)t19) = 1;
    goto LAB122;

LAB123:
LAB126:    t25 = (t0 + 10152U);
    t30 = *((char **)t25);
    t25 = (t0 + 14072);
    xsi_vlogvar_wait_assign_value(t25, t30, 0, 0, 32, 100LL);
    t2 = (t0 + 3600);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t3, 32, t2, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB127;

LAB128:
LAB131:    t2 = (t0 + 10152U);
    t3 = *((char **)t2);
    t2 = (t0 + 13912);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 100LL);

LAB129:    goto LAB125;

LAB127:
LAB130:    t5 = (t0 + 14072);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t17 = (t0 + 13912);
    xsi_vlogvar_wait_assign_value(t17, t13, 0, 0, 32, 100LL);
    goto LAB129;

LAB132:    *((unsigned int *)t6) = 1;
    goto LAB135;

LAB134:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB135;

LAB136:    t12 = (t0 + 9832U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB139;

LAB140:    if (*((unsigned int *)t12) != 0)
        goto LAB141;

LAB142:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t18 = (t6 + 4);
    t25 = (t19 + 4);
    t30 = (t26 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB143;

LAB144:
LAB145:    goto LAB138;

LAB139:    *((unsigned int *)t19) = 1;
    goto LAB142;

LAB141:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB142;

LAB143:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t38 | t39);
    t31 = (t6 + 4);
    t32 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB145;

LAB146:
LAB149:    t41 = (t0 + 10152U);
    t58 = *((char **)t41);
    t41 = (t0 + 14072);
    xsi_vlogvar_wait_assign_value(t41, t58, 0, 0, 32, 100LL);
    t2 = (t0 + 3600);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t3, 32, t2, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB150;

LAB151:
LAB154:    t2 = (t0 + 10152U);
    t3 = *((char **)t2);
    t2 = (t0 + 13912);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 100LL);

LAB152:    goto LAB148;

LAB150:
LAB153:    t5 = (t0 + 14072);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t17 = (t0 + 13912);
    xsi_vlogvar_wait_assign_value(t17, t13, 0, 0, 32, 100LL);
    goto LAB152;

LAB155:
LAB158:    t4 = (t0 + 2512);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t20 = (t16 & t15);
    t21 = (t20 & 4294967295U);
    if (t21 != 0)
        goto LAB159;

LAB160:    if (*((unsigned int *)t4) != 0)
        goto LAB161;

LAB162:    t13 = (t6 + 4);
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t13);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB163;

LAB164:    memcpy(t26, t6, 8);

LAB165:    t58 = (t26 + 4);
    t67 = *((unsigned int *)t58);
    t68 = (~(t67));
    t69 = *((unsigned int *)t26);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB173;

LAB174:    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB185;

LAB183:    if (*((unsigned int *)t2) == 0)
        goto LAB182;

LAB184:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB185:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t20 = (t16 & t15);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB186;

LAB187:
LAB188:
LAB175:    goto LAB157;

LAB159:    *((unsigned int *)t6) = 1;
    goto LAB162;

LAB161:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB162;

LAB163:    t17 = (t0 + 9352U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t27 = *((unsigned int *)t17);
    t28 = (~(t27));
    t29 = *((unsigned int *)t18);
    t33 = (t29 & t28);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB166;

LAB167:    if (*((unsigned int *)t17) != 0)
        goto LAB168;

LAB169:    t35 = *((unsigned int *)t6);
    t36 = *((unsigned int *)t19);
    t37 = (t35 & t36);
    *((unsigned int *)t26) = t37;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t31);
    t42 = (t38 | t39);
    *((unsigned int *)t32) = t42;
    t43 = *((unsigned int *)t32);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB170;

LAB171:
LAB172:    goto LAB165;

LAB166:    *((unsigned int *)t19) = 1;
    goto LAB169;

LAB168:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB169;

LAB170:    t45 = *((unsigned int *)t26);
    t46 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t45 | t46);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t47 = *((unsigned int *)t6);
    t48 = (~(t47));
    t49 = *((unsigned int *)t40);
    t52 = (~(t49));
    t53 = *((unsigned int *)t19);
    t54 = (~(t53));
    t55 = *((unsigned int *)t41);
    t56 = (~(t55));
    t50 = (t48 & t52);
    t51 = (t54 & t56);
    t57 = (~(t50));
    t59 = (~(t51));
    t60 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t60 & t57);
    t61 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t61 & t59);
    t62 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t62 & t57);
    t63 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t63 & t59);
    goto LAB172;

LAB173:
LAB176:    t64 = (t0 + 10152U);
    t65 = *((char **)t64);
    t64 = (t0 + 14072);
    xsi_vlogvar_wait_assign_value(t64, t65, 0, 0, 32, 100LL);
    t2 = (t0 + 3600);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t3, 32, t2, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB177;

LAB178:
LAB181:    t2 = (t0 + 10152U);
    t3 = *((char **)t2);
    t2 = (t0 + 13912);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 100LL);

LAB179:    goto LAB175;

LAB177:
LAB180:    t5 = (t0 + 14072);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t17 = (t0 + 13912);
    xsi_vlogvar_wait_assign_value(t17, t13, 0, 0, 32, 100LL);
    goto LAB179;

LAB182:    *((unsigned int *)t6) = 1;
    goto LAB185;

LAB186:
LAB189:    t12 = (t0 + 10152U);
    t13 = *((char **)t12);
    t12 = (t0 + 14072);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 32, 100LL);
    t2 = (t0 + 3600);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t3, 32, t2, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB190;

LAB191:
LAB194:    t2 = (t0 + 10152U);
    t3 = *((char **)t2);
    t2 = (t0 + 13912);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 100LL);

LAB192:    goto LAB188;

LAB190:
LAB193:    t5 = (t0 + 14072);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t17 = (t0 + 13912);
    xsi_vlogvar_wait_assign_value(t17, t13, 0, 0, 32, 100LL);
    goto LAB192;

}

static void Cont_582_34(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 25336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1696);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 27816);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t3, 8);
    xsi_driver_vfirst_trans(t26, 0, 31);
    t31 = (t0 + 26136);
    *((int *)t31) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 13912);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = ((char*)((ng25)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t25, 32);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}


extern void xilinxcorelib_ver_m_05769234041398285004_3147990368_init()
{
	static char *pe[] = {(void *)Initial_212_0,(void *)Always_268_1,(void *)Always_306_2,(void *)Cont_338_3,(void *)Cont_339_4,(void *)Cont_340_5,(void *)Cont_342_6,(void *)Cont_343_7,(void *)Cont_345_8,(void *)Always_348_9,(void *)Cont_369_10,(void *)Cont_372_11,(void *)Always_375_12,(void *)Always_385_13,(void *)Cont_395_14,(void *)Always_397_15,(void *)Cont_407_16,(void *)Cont_410_17,(void *)Cont_412_18,(void *)Cont_413_19,(void *)Cont_414_20,(void *)Cont_416_21,(void *)Cont_417_22,(void *)Cont_418_23,(void *)Cont_420_24,(void *)Cont_421_25,(void *)Cont_422_26,(void *)Cont_424_27,(void *)Cont_425_28,(void *)Cont_426_29,(void *)Cont_428_30,(void *)Always_430_31,(void *)Cont_482_32,(void *)Always_484_33,(void *)Cont_582_34};
	static char *se[] = {(void *)sp_binstr_conv};
	xsi_register_didat("xilinxcorelib_ver_m_05769234041398285004_3147990368", "isim/MIPS_test_isim_beh.exe.sim/xilinxcorelib_ver/m_05769234041398285004_3147990368.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
