`timescale 1ns / 1ps

module ALU(
           input [31:0]  A,
           input [31:0]  B,
           input [3:0]   AluOP,
           output reg [31:0] out,
           output        zero
           );
   
   assign zero = (out == 32'b0);

   always @ (*) begin
      case (AluOP)
        4'b0000: out <= A + B;
        4'b0010: out <= A - B;
        4'b0100: out <= A & B;
        4'b0101: out <= A | B;
        4'b0110: out <= A ^ B;
        4'b0111: out <= ~(A | B);
        4'b1010: out <= {{31{1'b0}}, (A-B)}; // (A-B) >> 31
        default: out <= 32'b0;
      endcase // case (AluOp)
   end // always @ (*)
   
endmodule
