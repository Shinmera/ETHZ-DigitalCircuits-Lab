`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:  ETH Zurich
// Engineer: Frank K. Gurkaynak
// 
// Create Date:    12:51:05 03/17/2011 
// Design Name:    MIPS processor
// Module Name:    ALU 
// Project Name:   Digital Circuits Lab Exercuse
// Target Devices: 
// Tool versions: 
// Description:    This is one possible solution to the
//                 ALU description from Lab5a
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ALU(
           input         CLK,
           input         RESET, 
           input [31:0]  a,
           input [31:0]  b,
           input [4:0]   sh_amt,
	   input [5:0]   aluop,
	   output [31:0] result,
	   output        zero
           );

   wire [31:0]            logicout;   // output of the logic block
   wire [31:0]            addout;     // adder subtractor out
   wire [31:0]            arithout;   // output after alt
   wire [31:0]            n_b;        // inverted b
   wire [31:0]            sel_b;      // select b or n_b;
   wire [31:0]            slt;        // output of the slt extension
   wire [31:0]            srl;  
   reg [31:0]             lo;            
   
   wire [1:0]             logicsel;    // lower two bits of aluop;

   // logic select 
   assign logicsel = aluop[1:0];
   assign logicout = (logicsel == 2'b00) ? a & b :
                     (logicsel == 2'b01) ? a | b :
		     (logicsel == 2'b10) ? a ^ b :
		     ~(a | b) ;

   // adder subtractor
   assign n_b = ~b ;  // invert b
   assign sel_b = (aluop[1])? n_b : b ;
   assign addout = a + sel_b + aluop[1];
   
   // set less than operator
   assign slt = {30'b0,addout[31]};
   // shift right logic
   assign srl = b >> sh_amt;

   // multiplication
   always @( posedge CLK ) begin
      if (aluop == 1'b011001) lo = a * b;
      if (RESET)              lo = 32'b0;
   end
   
   assign arithout = (aluop[3]) ? slt :
                     (aluop[2]) ? srl :
                     addout;
   
   // final out
   assign result = (aluop == 6'b010010) ? lo :
                   (aluop[2]) ? logicout : arithout;
   // the zero
   assign zero = (result == 32'b0) ? 1: 0;
   
endmodule
