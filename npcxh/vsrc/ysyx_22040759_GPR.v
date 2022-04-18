module ysyx_22040759_GPR (
  input clk,
  input rst,
  input [31:0] wdata,
  input [4:0] waddr,
  input [4:0] raddr1,
  input [4:0] raddr2,
  input wen,
  output [31:0] rdata1,
  output [31:0] rdata2
    );
  reg [31:0] register [31:1];
  
  assign rdata1 = (raddr1==5'b0) ? 32'b0 : register[raddr1];
  assign rdata2 = (raddr2==5'b0) ? 32'b0 : register[raddr2];
  
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
