`include"./ysyx_22040759_define.v"
module ysyx_22040759_GPR (
  input clk,
  input rst,
  input [63:0] wdata,
  input [4:0] waddr,
  input [4:0] raddr1,
  input [4:0] raddr2,
  input wen,
  output [63:0] rdata1,
  output [63:0] rdata2,
  output [63:0] regs_o [31:0]        // difftest
    );
  reg  [63:0] register [31:0];
  wire [63:0] rf_rdata1;
  wire [63:0] rf_rdata2;

  assign rf_rdata1 = ((waddr==raddr1)&& wen) ? wdata : register[raddr1];
  assign rf_rdata2 = ((waddr==raddr2)&& wen) ? wdata : register[raddr2];
  assign rdata1 = (raddr1==5'b0) ? 64'b0 : rf_rdata1;
  assign rdata2 = (raddr2==5'b0) ? 64'b0 : rf_rdata2;
  integer i;
  always @(posedge clk) begin                           
    if(rst)begin
        for(i = 0;i < 64;i = i + 1)
            register[i] <= 64'b0; 
    end
    else if((waddr != 5'b0) && wen)begin
        register[waddr] <= wdata;
    end
  end

  genvar j;   //to test
	generate
		for (j = 0; j < 32; j = j + 1) begin
			assign regs_o[j] = (wen & waddr == j & j != 0) ? wdata : register[j];
		end
	endgenerate

endmodule
