`include "./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_GPR (
  input clk,
  input rst,
  input [31:0] wdata,
  input [4:0] waddr,
  input [4:0] raddr1,
  input [4:0] raddr2,
  input wen,
  output [31:0] rdata1,
  output [31:0] rdata2,
  output [31:0] a0                     //sim test
    );
  reg [31:0] register [31:1];
  import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
  initial set_gpr_ptr(register);  // rf为通用寄存器的二维数组变量
  assign rdata1 = (raddr1==5'b0) ? 32'b0 : register[raddr1];
  assign rdata2 = (raddr2==5'b0) ? 32'b0 : register[raddr2];
  assign a0     = register[5'd10];     //sim test
  integer i;
  always @(posedge clk) begin                           
    if(rst)begin
        for(i = 1;i < 32;i = i + 1)
            register[i] <= 32'b0; 
    end
    else if((waddr != 5'b0) && wen)
        register[waddr] <= wdata;
  end
endmodule
