`timescale 1ns / 1ps

module clk_div(
               input  clk, 
               input  rst,
               output clk_en
               );
   reg [24:0]         clk_count;
   
   always @ (posedge clk, posedge rst)
     begin
        if (rst) clk_count <= 0;
        else clk_count <= clk_count+1'b1;
     end
   
   assign clk_en = &clk_count;
   
endmodule
