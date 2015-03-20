`timescale 1ns / 1ps

module Decoder(
               input [3:0]  s,
               output reg [6:0] d
               );

   always @ (*) begin
      case (s)
        4'h0 : d = 7'b0000001;
        4'h1 : d = 7'b1001111;
        4'h2 : d = 7'b0010010;
        4'h3 : d = 7'b0000110;
        4'h4 : d = 7'b1001100;
        4'h5 : d = 7'b0100100;
        4'h6 : d = 7'b0100000;
        4'h7 : d = 7'b0001111;
        4'h8 : d = 7'b0000000;
        4'h9 : d = 7'b0001100;
        4'hA : d = 7'b0001000;
        4'hB : d = 7'b1100000;
        4'hC : d = 7'b1110010;
        4'hD : d = 7'b1000010;
        4'hE : d = 7'b0110000;
        4'hF : d = 7'b0111000;
        default: d = 7'b0000001;
      endcase // case (S)
   end

endmodule
