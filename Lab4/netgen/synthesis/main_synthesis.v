////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.58f
//  \   \         Application: netgen
//  /   /         Filename: main_synthesis.v
// /___/   /\     Timestamp: Fri Mar 27 14:35:47 2015
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim main.ngc main_synthesis.v 
// Device	: xc3s200-4-ft256
// Input file	: main.ngc
// Output file	: /home/linus/Projects/ISE/Lab4/netgen/synthesis/main_synthesis.v
// # of Modules	: 1
// Design Name	: main
// Xilinx        : /opt/Xilinx/14.5/ISE_DS/ISE/
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module main (
  clk, rst, right, left, L, R
);
  input clk;
  input rst;
  input right;
  input left;
  output [2 : 0] L;
  output [2 : 0] R;
  wire N0;
  wire N01;
  wire N1;
  wire N2;
  wire clk_BUFGP_36;
  wire \divider/Mcount_clk_count_cy<10>_rt_39 ;
  wire \divider/Mcount_clk_count_cy<11>_rt_41 ;
  wire \divider/Mcount_clk_count_cy<12>_rt_43 ;
  wire \divider/Mcount_clk_count_cy<13>_rt_45 ;
  wire \divider/Mcount_clk_count_cy<14>_rt_47 ;
  wire \divider/Mcount_clk_count_cy<15>_rt_49 ;
  wire \divider/Mcount_clk_count_cy<16>_rt_51 ;
  wire \divider/Mcount_clk_count_cy<17>_rt_53 ;
  wire \divider/Mcount_clk_count_cy<18>_rt_55 ;
  wire \divider/Mcount_clk_count_cy<19>_rt_57 ;
  wire \divider/Mcount_clk_count_cy<1>_rt_59 ;
  wire \divider/Mcount_clk_count_cy<20>_rt_61 ;
  wire \divider/Mcount_clk_count_cy<21>_rt_63 ;
  wire \divider/Mcount_clk_count_cy<22>_rt_65 ;
  wire \divider/Mcount_clk_count_cy<23>_rt_67 ;
  wire \divider/Mcount_clk_count_cy<2>_rt_69 ;
  wire \divider/Mcount_clk_count_cy<3>_rt_71 ;
  wire \divider/Mcount_clk_count_cy<4>_rt_73 ;
  wire \divider/Mcount_clk_count_cy<5>_rt_75 ;
  wire \divider/Mcount_clk_count_cy<6>_rt_77 ;
  wire \divider/Mcount_clk_count_cy<7>_rt_79 ;
  wire \divider/Mcount_clk_count_cy<8>_rt_81 ;
  wire \divider/Mcount_clk_count_cy<9>_rt_83 ;
  wire \divider/Mcount_clk_count_xor<24>_rt_85 ;
  wire \divider/clk_en_wg_cy<0>_rt_112 ;
  wire internal_clk;
  wire left_IBUF_126;
  wire right_IBUF_128;
  wire rst_IBUF_130;
  wire \thunderbird/L_not0001_inv ;
  wire \thunderbird/_old_lr_2_138 ;
  wire \thunderbird/_old_lr_2_inv ;
  wire \thunderbird/lr_140 ;
  wire \thunderbird/lr_not0001 ;
  wire \thunderbird/s_FSM_FFd1_142 ;
  wire \thunderbird/s_FSM_FFd2_143 ;
  wire \thunderbird/s_FSM_FFd3_144 ;
  wire \thunderbird/s_FSM_FFd4_145 ;
  wire \thunderbird/s_cmp_eq0001 ;
  wire [24 : 0] Result;
  wire [23 : 0] \divider/Mcount_clk_count_cy ;
  wire [0 : 0] \divider/Mcount_clk_count_lut ;
  wire [24 : 0] \divider/clk_count ;
  wire [5 : 0] \divider/clk_en_wg_cy ;
  wire [6 : 1] \divider/clk_en_wg_lut ;
  wire [2 : 0] \thunderbird/L ;
  wire [2 : 0] \thunderbird/R ;
  GND   XST_GND (
    .G(N0)
  );
  VCC   XST_VCC (
    .P(N1)
  );
  FDC   \divider/clk_count_0  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[0]),
    .Q(\divider/clk_count [0])
  );
  FDC   \divider/clk_count_1  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[1]),
    .Q(\divider/clk_count [1])
  );
  FDC   \divider/clk_count_2  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[2]),
    .Q(\divider/clk_count [2])
  );
  FDC   \divider/clk_count_3  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[3]),
    .Q(\divider/clk_count [3])
  );
  FDC   \divider/clk_count_4  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[4]),
    .Q(\divider/clk_count [4])
  );
  FDC   \divider/clk_count_5  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[5]),
    .Q(\divider/clk_count [5])
  );
  FDC   \divider/clk_count_6  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[6]),
    .Q(\divider/clk_count [6])
  );
  FDC   \divider/clk_count_7  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[7]),
    .Q(\divider/clk_count [7])
  );
  FDC   \divider/clk_count_8  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[8]),
    .Q(\divider/clk_count [8])
  );
  FDC   \divider/clk_count_9  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[9]),
    .Q(\divider/clk_count [9])
  );
  FDC   \divider/clk_count_10  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[10]),
    .Q(\divider/clk_count [10])
  );
  FDC   \divider/clk_count_11  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[11]),
    .Q(\divider/clk_count [11])
  );
  FDC   \divider/clk_count_12  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[12]),
    .Q(\divider/clk_count [12])
  );
  FDC   \divider/clk_count_13  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[13]),
    .Q(\divider/clk_count [13])
  );
  FDC   \divider/clk_count_14  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[14]),
    .Q(\divider/clk_count [14])
  );
  FDC   \divider/clk_count_15  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[15]),
    .Q(\divider/clk_count [15])
  );
  FDC   \divider/clk_count_16  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[16]),
    .Q(\divider/clk_count [16])
  );
  FDC   \divider/clk_count_17  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[17]),
    .Q(\divider/clk_count [17])
  );
  FDC   \divider/clk_count_18  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[18]),
    .Q(\divider/clk_count [18])
  );
  FDC   \divider/clk_count_19  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[19]),
    .Q(\divider/clk_count [19])
  );
  FDC   \divider/clk_count_20  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[20]),
    .Q(\divider/clk_count [20])
  );
  FDC   \divider/clk_count_21  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[21]),
    .Q(\divider/clk_count [21])
  );
  FDC   \divider/clk_count_22  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[22]),
    .Q(\divider/clk_count [22])
  );
  FDC   \divider/clk_count_23  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[23]),
    .Q(\divider/clk_count [23])
  );
  FDC   \divider/clk_count_24  (
    .C(clk_BUFGP_36),
    .CLR(rst_IBUF_130),
    .D(Result[24]),
    .Q(\divider/clk_count [24])
  );
  MUXCY   \divider/Mcount_clk_count_cy<0>  (
    .CI(N0),
    .DI(N1),
    .S(\divider/Mcount_clk_count_lut [0]),
    .O(\divider/Mcount_clk_count_cy [0])
  );
  XORCY   \divider/Mcount_clk_count_xor<0>  (
    .CI(N0),
    .LI(\divider/Mcount_clk_count_lut [0]),
    .O(Result[0])
  );
  MUXCY   \divider/Mcount_clk_count_cy<1>  (
    .CI(\divider/Mcount_clk_count_cy [0]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<1>_rt_59 ),
    .O(\divider/Mcount_clk_count_cy [1])
  );
  XORCY   \divider/Mcount_clk_count_xor<1>  (
    .CI(\divider/Mcount_clk_count_cy [0]),
    .LI(\divider/Mcount_clk_count_cy<1>_rt_59 ),
    .O(Result[1])
  );
  MUXCY   \divider/Mcount_clk_count_cy<2>  (
    .CI(\divider/Mcount_clk_count_cy [1]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<2>_rt_69 ),
    .O(\divider/Mcount_clk_count_cy [2])
  );
  XORCY   \divider/Mcount_clk_count_xor<2>  (
    .CI(\divider/Mcount_clk_count_cy [1]),
    .LI(\divider/Mcount_clk_count_cy<2>_rt_69 ),
    .O(Result[2])
  );
  MUXCY   \divider/Mcount_clk_count_cy<3>  (
    .CI(\divider/Mcount_clk_count_cy [2]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<3>_rt_71 ),
    .O(\divider/Mcount_clk_count_cy [3])
  );
  XORCY   \divider/Mcount_clk_count_xor<3>  (
    .CI(\divider/Mcount_clk_count_cy [2]),
    .LI(\divider/Mcount_clk_count_cy<3>_rt_71 ),
    .O(Result[3])
  );
  MUXCY   \divider/Mcount_clk_count_cy<4>  (
    .CI(\divider/Mcount_clk_count_cy [3]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<4>_rt_73 ),
    .O(\divider/Mcount_clk_count_cy [4])
  );
  XORCY   \divider/Mcount_clk_count_xor<4>  (
    .CI(\divider/Mcount_clk_count_cy [3]),
    .LI(\divider/Mcount_clk_count_cy<4>_rt_73 ),
    .O(Result[4])
  );
  MUXCY   \divider/Mcount_clk_count_cy<5>  (
    .CI(\divider/Mcount_clk_count_cy [4]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<5>_rt_75 ),
    .O(\divider/Mcount_clk_count_cy [5])
  );
  XORCY   \divider/Mcount_clk_count_xor<5>  (
    .CI(\divider/Mcount_clk_count_cy [4]),
    .LI(\divider/Mcount_clk_count_cy<5>_rt_75 ),
    .O(Result[5])
  );
  MUXCY   \divider/Mcount_clk_count_cy<6>  (
    .CI(\divider/Mcount_clk_count_cy [5]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<6>_rt_77 ),
    .O(\divider/Mcount_clk_count_cy [6])
  );
  XORCY   \divider/Mcount_clk_count_xor<6>  (
    .CI(\divider/Mcount_clk_count_cy [5]),
    .LI(\divider/Mcount_clk_count_cy<6>_rt_77 ),
    .O(Result[6])
  );
  MUXCY   \divider/Mcount_clk_count_cy<7>  (
    .CI(\divider/Mcount_clk_count_cy [6]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<7>_rt_79 ),
    .O(\divider/Mcount_clk_count_cy [7])
  );
  XORCY   \divider/Mcount_clk_count_xor<7>  (
    .CI(\divider/Mcount_clk_count_cy [6]),
    .LI(\divider/Mcount_clk_count_cy<7>_rt_79 ),
    .O(Result[7])
  );
  MUXCY   \divider/Mcount_clk_count_cy<8>  (
    .CI(\divider/Mcount_clk_count_cy [7]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<8>_rt_81 ),
    .O(\divider/Mcount_clk_count_cy [8])
  );
  XORCY   \divider/Mcount_clk_count_xor<8>  (
    .CI(\divider/Mcount_clk_count_cy [7]),
    .LI(\divider/Mcount_clk_count_cy<8>_rt_81 ),
    .O(Result[8])
  );
  MUXCY   \divider/Mcount_clk_count_cy<9>  (
    .CI(\divider/Mcount_clk_count_cy [8]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<9>_rt_83 ),
    .O(\divider/Mcount_clk_count_cy [9])
  );
  XORCY   \divider/Mcount_clk_count_xor<9>  (
    .CI(\divider/Mcount_clk_count_cy [8]),
    .LI(\divider/Mcount_clk_count_cy<9>_rt_83 ),
    .O(Result[9])
  );
  MUXCY   \divider/Mcount_clk_count_cy<10>  (
    .CI(\divider/Mcount_clk_count_cy [9]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<10>_rt_39 ),
    .O(\divider/Mcount_clk_count_cy [10])
  );
  XORCY   \divider/Mcount_clk_count_xor<10>  (
    .CI(\divider/Mcount_clk_count_cy [9]),
    .LI(\divider/Mcount_clk_count_cy<10>_rt_39 ),
    .O(Result[10])
  );
  MUXCY   \divider/Mcount_clk_count_cy<11>  (
    .CI(\divider/Mcount_clk_count_cy [10]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<11>_rt_41 ),
    .O(\divider/Mcount_clk_count_cy [11])
  );
  XORCY   \divider/Mcount_clk_count_xor<11>  (
    .CI(\divider/Mcount_clk_count_cy [10]),
    .LI(\divider/Mcount_clk_count_cy<11>_rt_41 ),
    .O(Result[11])
  );
  MUXCY   \divider/Mcount_clk_count_cy<12>  (
    .CI(\divider/Mcount_clk_count_cy [11]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<12>_rt_43 ),
    .O(\divider/Mcount_clk_count_cy [12])
  );
  XORCY   \divider/Mcount_clk_count_xor<12>  (
    .CI(\divider/Mcount_clk_count_cy [11]),
    .LI(\divider/Mcount_clk_count_cy<12>_rt_43 ),
    .O(Result[12])
  );
  MUXCY   \divider/Mcount_clk_count_cy<13>  (
    .CI(\divider/Mcount_clk_count_cy [12]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<13>_rt_45 ),
    .O(\divider/Mcount_clk_count_cy [13])
  );
  XORCY   \divider/Mcount_clk_count_xor<13>  (
    .CI(\divider/Mcount_clk_count_cy [12]),
    .LI(\divider/Mcount_clk_count_cy<13>_rt_45 ),
    .O(Result[13])
  );
  MUXCY   \divider/Mcount_clk_count_cy<14>  (
    .CI(\divider/Mcount_clk_count_cy [13]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<14>_rt_47 ),
    .O(\divider/Mcount_clk_count_cy [14])
  );
  XORCY   \divider/Mcount_clk_count_xor<14>  (
    .CI(\divider/Mcount_clk_count_cy [13]),
    .LI(\divider/Mcount_clk_count_cy<14>_rt_47 ),
    .O(Result[14])
  );
  MUXCY   \divider/Mcount_clk_count_cy<15>  (
    .CI(\divider/Mcount_clk_count_cy [14]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<15>_rt_49 ),
    .O(\divider/Mcount_clk_count_cy [15])
  );
  XORCY   \divider/Mcount_clk_count_xor<15>  (
    .CI(\divider/Mcount_clk_count_cy [14]),
    .LI(\divider/Mcount_clk_count_cy<15>_rt_49 ),
    .O(Result[15])
  );
  MUXCY   \divider/Mcount_clk_count_cy<16>  (
    .CI(\divider/Mcount_clk_count_cy [15]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<16>_rt_51 ),
    .O(\divider/Mcount_clk_count_cy [16])
  );
  XORCY   \divider/Mcount_clk_count_xor<16>  (
    .CI(\divider/Mcount_clk_count_cy [15]),
    .LI(\divider/Mcount_clk_count_cy<16>_rt_51 ),
    .O(Result[16])
  );
  MUXCY   \divider/Mcount_clk_count_cy<17>  (
    .CI(\divider/Mcount_clk_count_cy [16]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<17>_rt_53 ),
    .O(\divider/Mcount_clk_count_cy [17])
  );
  XORCY   \divider/Mcount_clk_count_xor<17>  (
    .CI(\divider/Mcount_clk_count_cy [16]),
    .LI(\divider/Mcount_clk_count_cy<17>_rt_53 ),
    .O(Result[17])
  );
  MUXCY   \divider/Mcount_clk_count_cy<18>  (
    .CI(\divider/Mcount_clk_count_cy [17]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<18>_rt_55 ),
    .O(\divider/Mcount_clk_count_cy [18])
  );
  XORCY   \divider/Mcount_clk_count_xor<18>  (
    .CI(\divider/Mcount_clk_count_cy [17]),
    .LI(\divider/Mcount_clk_count_cy<18>_rt_55 ),
    .O(Result[18])
  );
  MUXCY   \divider/Mcount_clk_count_cy<19>  (
    .CI(\divider/Mcount_clk_count_cy [18]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<19>_rt_57 ),
    .O(\divider/Mcount_clk_count_cy [19])
  );
  XORCY   \divider/Mcount_clk_count_xor<19>  (
    .CI(\divider/Mcount_clk_count_cy [18]),
    .LI(\divider/Mcount_clk_count_cy<19>_rt_57 ),
    .O(Result[19])
  );
  MUXCY   \divider/Mcount_clk_count_cy<20>  (
    .CI(\divider/Mcount_clk_count_cy [19]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<20>_rt_61 ),
    .O(\divider/Mcount_clk_count_cy [20])
  );
  XORCY   \divider/Mcount_clk_count_xor<20>  (
    .CI(\divider/Mcount_clk_count_cy [19]),
    .LI(\divider/Mcount_clk_count_cy<20>_rt_61 ),
    .O(Result[20])
  );
  MUXCY   \divider/Mcount_clk_count_cy<21>  (
    .CI(\divider/Mcount_clk_count_cy [20]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<21>_rt_63 ),
    .O(\divider/Mcount_clk_count_cy [21])
  );
  XORCY   \divider/Mcount_clk_count_xor<21>  (
    .CI(\divider/Mcount_clk_count_cy [20]),
    .LI(\divider/Mcount_clk_count_cy<21>_rt_63 ),
    .O(Result[21])
  );
  MUXCY   \divider/Mcount_clk_count_cy<22>  (
    .CI(\divider/Mcount_clk_count_cy [21]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<22>_rt_65 ),
    .O(\divider/Mcount_clk_count_cy [22])
  );
  XORCY   \divider/Mcount_clk_count_xor<22>  (
    .CI(\divider/Mcount_clk_count_cy [21]),
    .LI(\divider/Mcount_clk_count_cy<22>_rt_65 ),
    .O(Result[22])
  );
  MUXCY   \divider/Mcount_clk_count_cy<23>  (
    .CI(\divider/Mcount_clk_count_cy [22]),
    .DI(N0),
    .S(\divider/Mcount_clk_count_cy<23>_rt_67 ),
    .O(\divider/Mcount_clk_count_cy [23])
  );
  XORCY   \divider/Mcount_clk_count_xor<23>  (
    .CI(\divider/Mcount_clk_count_cy [22]),
    .LI(\divider/Mcount_clk_count_cy<23>_rt_67 ),
    .O(Result[23])
  );
  XORCY   \divider/Mcount_clk_count_xor<24>  (
    .CI(\divider/Mcount_clk_count_cy [23]),
    .LI(\divider/Mcount_clk_count_xor<24>_rt_85 ),
    .O(Result[24])
  );
  FDR   \thunderbird/s_FSM_FFd1  (
    .C(internal_clk),
    .D(\thunderbird/s_FSM_FFd2_143 ),
    .R(rst_IBUF_130),
    .Q(\thunderbird/s_FSM_FFd1_142 )
  );
  FDR   \thunderbird/s_FSM_FFd2  (
    .C(internal_clk),
    .D(\thunderbird/s_FSM_FFd3_144 ),
    .R(rst_IBUF_130),
    .Q(\thunderbird/s_FSM_FFd2_143 )
  );
  FDS   \thunderbird/s_FSM_FFd4  (
    .C(internal_clk),
    .D(\thunderbird/L_not0001_inv ),
    .S(rst_IBUF_130),
    .Q(\thunderbird/s_FSM_FFd4_145 )
  );
  FDR   \thunderbird/s_FSM_FFd3  (
    .C(internal_clk),
    .D(\thunderbird/s_cmp_eq0001 ),
    .R(rst_IBUF_130),
    .Q(\thunderbird/s_FSM_FFd3_144 )
  );
  FDRE   \thunderbird/R_2  (
    .C(internal_clk),
    .CE(\thunderbird/_old_lr_2_138 ),
    .D(\thunderbird/s_cmp_eq0001 ),
    .R(\thunderbird/L_not0001_inv ),
    .Q(\thunderbird/R [2])
  );
  FDRE   \thunderbird/R_1  (
    .C(internal_clk),
    .CE(\thunderbird/_old_lr_2_138 ),
    .D(\thunderbird/s_FSM_FFd3_144 ),
    .R(\thunderbird/L_not0001_inv ),
    .Q(\thunderbird/R [1])
  );
  FDRE   \thunderbird/R_0  (
    .C(internal_clk),
    .CE(\thunderbird/_old_lr_2_138 ),
    .D(\thunderbird/s_FSM_FFd2_143 ),
    .R(\thunderbird/L_not0001_inv ),
    .Q(\thunderbird/R [0])
  );
  FDRE   \thunderbird/L_2  (
    .C(internal_clk),
    .CE(\thunderbird/_old_lr_2_inv ),
    .D(\thunderbird/s_cmp_eq0001 ),
    .R(\thunderbird/L_not0001_inv ),
    .Q(\thunderbird/L [2])
  );
  FDRE   \thunderbird/L_1  (
    .C(internal_clk),
    .CE(\thunderbird/_old_lr_2_inv ),
    .D(\thunderbird/s_FSM_FFd3_144 ),
    .R(\thunderbird/L_not0001_inv ),
    .Q(\thunderbird/L [1])
  );
  FDRE   \thunderbird/L_0  (
    .C(internal_clk),
    .CE(\thunderbird/_old_lr_2_inv ),
    .D(\thunderbird/s_FSM_FFd2_143 ),
    .R(\thunderbird/L_not0001_inv ),
    .Q(\thunderbird/L [0])
  );
  FDRE   \thunderbird/lr  (
    .C(internal_clk),
    .CE(\thunderbird/lr_not0001 ),
    .D(right_IBUF_128),
    .R(rst_IBUF_130),
    .Q(\thunderbird/lr_140 )
  );
  MUXCY   \divider/clk_en_wg_cy<0>  (
    .CI(N1),
    .DI(N0),
    .S(\divider/clk_en_wg_cy<0>_rt_112 ),
    .O(\divider/clk_en_wg_cy [0])
  );
  LUT4 #(
    .INIT ( 16'h8000 ))
  \divider/clk_en_wg_lut<1>  (
    .I0(\divider/clk_count [15]),
    .I1(\divider/clk_count [17]),
    .I2(\divider/clk_count [20]),
    .I3(\divider/clk_count [16]),
    .O(\divider/clk_en_wg_lut [1])
  );
  MUXCY   \divider/clk_en_wg_cy<1>  (
    .CI(\divider/clk_en_wg_cy [0]),
    .DI(N0),
    .S(\divider/clk_en_wg_lut [1]),
    .O(\divider/clk_en_wg_cy [1])
  );
  LUT4 #(
    .INIT ( 16'h8000 ))
  \divider/clk_en_wg_lut<2>  (
    .I0(\divider/clk_count [12]),
    .I1(\divider/clk_count [14]),
    .I2(\divider/clk_count [18]),
    .I3(\divider/clk_count [13]),
    .O(\divider/clk_en_wg_lut [2])
  );
  MUXCY   \divider/clk_en_wg_cy<2>  (
    .CI(\divider/clk_en_wg_cy [1]),
    .DI(N0),
    .S(\divider/clk_en_wg_lut [2]),
    .O(\divider/clk_en_wg_cy [2])
  );
  LUT4 #(
    .INIT ( 16'h8000 ))
  \divider/clk_en_wg_lut<3>  (
    .I0(\divider/clk_count [9]),
    .I1(\divider/clk_count [11]),
    .I2(\divider/clk_count [21]),
    .I3(\divider/clk_count [10]),
    .O(\divider/clk_en_wg_lut [3])
  );
  MUXCY   \divider/clk_en_wg_cy<3>  (
    .CI(\divider/clk_en_wg_cy [2]),
    .DI(N0),
    .S(\divider/clk_en_wg_lut [3]),
    .O(\divider/clk_en_wg_cy [3])
  );
  LUT4 #(
    .INIT ( 16'h8000 ))
  \divider/clk_en_wg_lut<4>  (
    .I0(\divider/clk_count [6]),
    .I1(\divider/clk_count [8]),
    .I2(\divider/clk_count [22]),
    .I3(\divider/clk_count [7]),
    .O(\divider/clk_en_wg_lut [4])
  );
  MUXCY   \divider/clk_en_wg_cy<4>  (
    .CI(\divider/clk_en_wg_cy [3]),
    .DI(N0),
    .S(\divider/clk_en_wg_lut [4]),
    .O(\divider/clk_en_wg_cy [4])
  );
  LUT4 #(
    .INIT ( 16'h8000 ))
  \divider/clk_en_wg_lut<5>  (
    .I0(\divider/clk_count [3]),
    .I1(\divider/clk_count [5]),
    .I2(\divider/clk_count [23]),
    .I3(\divider/clk_count [4]),
    .O(\divider/clk_en_wg_lut [5])
  );
  MUXCY   \divider/clk_en_wg_cy<5>  (
    .CI(\divider/clk_en_wg_cy [4]),
    .DI(N0),
    .S(\divider/clk_en_wg_lut [5]),
    .O(\divider/clk_en_wg_cy [5])
  );
  LUT4 #(
    .INIT ( 16'h8000 ))
  \divider/clk_en_wg_lut<6>  (
    .I0(\divider/clk_count [0]),
    .I1(\divider/clk_count [2]),
    .I2(\divider/clk_count [24]),
    .I3(\divider/clk_count [1]),
    .O(\divider/clk_en_wg_lut [6])
  );
  MUXCY   \divider/clk_en_wg_cy<6>  (
    .CI(\divider/clk_en_wg_cy [5]),
    .DI(N0),
    .S(\divider/clk_en_wg_lut [6]),
    .O(internal_clk)
  );
  LUT3 #(
    .INIT ( 8'h28 ))
  \thunderbird/s_FSM_FFd3-In1  (
    .I0(\thunderbird/s_FSM_FFd4_145 ),
    .I1(left_IBUF_126),
    .I2(right_IBUF_128),
    .O(\thunderbird/s_cmp_eq0001 )
  );
  LUT3 #(
    .INIT ( 8'hA8 ))
  \thunderbird/lr_not00011  (
    .I0(\thunderbird/s_FSM_FFd4_145 ),
    .I1(left_IBUF_126),
    .I2(right_IBUF_128),
    .O(\thunderbird/lr_not0001 )
  );
  LUT4 #(
    .INIT ( 16'hF9F0 ))
  \thunderbird/s_FSM_FFd4-In1  (
    .I0(right_IBUF_128),
    .I1(left_IBUF_126),
    .I2(\thunderbird/s_FSM_FFd1_142 ),
    .I3(\thunderbird/s_FSM_FFd4_145 ),
    .O(\thunderbird/L_not0001_inv )
  );
  LUT4 #(
    .INIT ( 16'h0454 ))
  \thunderbird/_old_lr_2  (
    .I0(rst_IBUF_130),
    .I1(\thunderbird/lr_140 ),
    .I2(\thunderbird/s_FSM_FFd4_145 ),
    .I3(N2),
    .O(\thunderbird/_old_lr_2_138 )
  );
  IBUF   rst_IBUF (
    .I(rst),
    .O(rst_IBUF_130)
  );
  IBUF   right_IBUF (
    .I(right),
    .O(right_IBUF_128)
  );
  IBUF   left_IBUF (
    .I(left),
    .O(left_IBUF_126)
  );
  OBUF   L_2_OBUF (
    .I(\thunderbird/L [2]),
    .O(L[2])
  );
  OBUF   L_1_OBUF (
    .I(\thunderbird/L [1]),
    .O(L[1])
  );
  OBUF   L_0_OBUF (
    .I(\thunderbird/L [0]),
    .O(L[0])
  );
  OBUF   R_2_OBUF (
    .I(\thunderbird/R [2]),
    .O(R[2])
  );
  OBUF   R_1_OBUF (
    .I(\thunderbird/R [1]),
    .O(R[1])
  );
  OBUF   R_0_OBUF (
    .I(\thunderbird/R [0]),
    .O(R[0])
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<1>_rt  (
    .I0(\divider/clk_count [1]),
    .O(\divider/Mcount_clk_count_cy<1>_rt_59 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<2>_rt  (
    .I0(\divider/clk_count [2]),
    .O(\divider/Mcount_clk_count_cy<2>_rt_69 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<3>_rt  (
    .I0(\divider/clk_count [3]),
    .O(\divider/Mcount_clk_count_cy<3>_rt_71 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<4>_rt  (
    .I0(\divider/clk_count [4]),
    .O(\divider/Mcount_clk_count_cy<4>_rt_73 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<5>_rt  (
    .I0(\divider/clk_count [5]),
    .O(\divider/Mcount_clk_count_cy<5>_rt_75 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<6>_rt  (
    .I0(\divider/clk_count [6]),
    .O(\divider/Mcount_clk_count_cy<6>_rt_77 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<7>_rt  (
    .I0(\divider/clk_count [7]),
    .O(\divider/Mcount_clk_count_cy<7>_rt_79 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<8>_rt  (
    .I0(\divider/clk_count [8]),
    .O(\divider/Mcount_clk_count_cy<8>_rt_81 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<9>_rt  (
    .I0(\divider/clk_count [9]),
    .O(\divider/Mcount_clk_count_cy<9>_rt_83 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<10>_rt  (
    .I0(\divider/clk_count [10]),
    .O(\divider/Mcount_clk_count_cy<10>_rt_39 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<11>_rt  (
    .I0(\divider/clk_count [11]),
    .O(\divider/Mcount_clk_count_cy<11>_rt_41 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<12>_rt  (
    .I0(\divider/clk_count [12]),
    .O(\divider/Mcount_clk_count_cy<12>_rt_43 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<13>_rt  (
    .I0(\divider/clk_count [13]),
    .O(\divider/Mcount_clk_count_cy<13>_rt_45 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<14>_rt  (
    .I0(\divider/clk_count [14]),
    .O(\divider/Mcount_clk_count_cy<14>_rt_47 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<15>_rt  (
    .I0(\divider/clk_count [15]),
    .O(\divider/Mcount_clk_count_cy<15>_rt_49 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<16>_rt  (
    .I0(\divider/clk_count [16]),
    .O(\divider/Mcount_clk_count_cy<16>_rt_51 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<17>_rt  (
    .I0(\divider/clk_count [17]),
    .O(\divider/Mcount_clk_count_cy<17>_rt_53 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<18>_rt  (
    .I0(\divider/clk_count [18]),
    .O(\divider/Mcount_clk_count_cy<18>_rt_55 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<19>_rt  (
    .I0(\divider/clk_count [19]),
    .O(\divider/Mcount_clk_count_cy<19>_rt_57 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<20>_rt  (
    .I0(\divider/clk_count [20]),
    .O(\divider/Mcount_clk_count_cy<20>_rt_61 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<21>_rt  (
    .I0(\divider/clk_count [21]),
    .O(\divider/Mcount_clk_count_cy<21>_rt_63 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<22>_rt  (
    .I0(\divider/clk_count [22]),
    .O(\divider/Mcount_clk_count_cy<22>_rt_65 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_cy<23>_rt  (
    .I0(\divider/clk_count [23]),
    .O(\divider/Mcount_clk_count_cy<23>_rt_67 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/clk_en_wg_cy<0>_rt  (
    .I0(\divider/clk_count [19]),
    .O(\divider/clk_en_wg_cy<0>_rt_112 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \divider/Mcount_clk_count_xor<24>_rt  (
    .I0(\divider/clk_count [24]),
    .O(\divider/Mcount_clk_count_xor<24>_rt_85 )
  );
  LUT4 #(
    .INIT ( 16'hFBAB ))
  \thunderbird/_old_lr_2_inv1  (
    .I0(rst_IBUF_130),
    .I1(\thunderbird/lr_140 ),
    .I2(\thunderbird/s_FSM_FFd4_145 ),
    .I3(N01),
    .O(\thunderbird/_old_lr_2_inv )
  );
  BUFGP   clk_BUFGP (
    .I(clk),
    .O(clk_BUFGP_36)
  );
  INV   \divider/Mcount_clk_count_lut<0>_INV_0  (
    .I(\divider/clk_count [0]),
    .O(\divider/Mcount_clk_count_lut [0])
  );
  LUT3_D #(
    .INIT ( 8'h45 ))
  \thunderbird/_old_lr_2_SW0  (
    .I0(right_IBUF_128),
    .I1(left_IBUF_126),
    .I2(\thunderbird/lr_140 ),
    .LO(N2),
    .O(N01)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

