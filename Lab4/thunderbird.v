`timescale 1ns / 1ps

module thunderbird(
                   input            rst,
                   input            clk,
                   input            activate,
                   input            left,
                   input            right,
                   output reg [2:0] L,
                   output reg [2:0] R
                   );
   reg                              lr;
   reg [2:0]                        s;
   
   always @ (posedge clk) begin
         if (activate == 1) begin
            // Handle state switching
            if (rst == 1) begin
               lr = 0;
               s = 3'b000;
            end else begin
               if (s == 0) begin
                  if(left == 1)  lr = 0;
                  if(right == 1) lr = 1;
                  if(left^right == 1) s = 3'b100;
               end else begin
                  case (s)
                    3'b100: s = 3'b110;
                    3'b110: s = 3'b111;
                    3'b111: s = 3'b000;
                    default: s = 3'b000;
                  endcase // case (s)
               end // else: !if(s == 0)
            end // else: !if(rst == 1)

            // Set ouptput
            if (s == 0) begin
               L = 3'b000;
               R = 3'b000;
            end else begin
               if (lr == 0) L = s;
               else         R = s;
            end
         end // if (clk == 1)
   end
endmodule
