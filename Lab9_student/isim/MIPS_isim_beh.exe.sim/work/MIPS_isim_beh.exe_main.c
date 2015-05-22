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
    work_m_12409885217671080171_2138213552_init();
    xilinxcorelib_ver_m_05769234041398285004_3147990368_init();
    work_m_13000090779020966128_2444367839_init();
    work_m_08411396109087165749_3674772129_init();
    work_m_02697705546880449254_0886308060_init();
    work_m_05882749618405858208_2461264495_init();
    work_m_13504675853904023561_1938225339_init();
    work_m_04992591749888529979_3515808994_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_04992591749888529979_3515808994");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
