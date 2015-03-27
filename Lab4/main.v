`timescale 1ns / 1ps

module main(
            input rst,
            input clk,
            input left,
            input right,
            output [2:0] L,
            output [2:0] R);
   wire           internal_timer;          

   clk_div divider(.clk(clk), 
                   .rst(rst),
                   .clk_en(internal_timer));

   thunderbird thunderbird(.clk(clk),
                           .activate(internal_timer),
                           .rst(rst),
                           .left(left),
                           .right(right),
                           .L(L),
                           .R(R));
endmodule
