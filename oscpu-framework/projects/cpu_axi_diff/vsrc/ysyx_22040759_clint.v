`include"./ysyx_22040759_define.v"
module ysyx_22040759_clint(
  input  clk,
  input  rst,

  input              wen  ,
  input  [31:0]      addr ,     
  input  [63:0]      wdata,
  output [63:0]      rdata,

  input              clintEn,
  output             clintInterrupt
);
reg [63:0] mtime;
reg [63:0] mtimecmp;
wire selMtime = ( addr == 32'h0200_BFF8);
wire selCmp   = ( addr == 32'h0200_4000);
reg [6:0] sec;
assign rdata = selMtime ? mtime :
               selCmp   ? mtimecmp : 'd0;

always@(posedge clk)
  if(rst)
    mtimecmp <= 'd0;
  else if(wen && selCmp)
    mtimecmp <= wdata;

always@(posedge clk)
  if(rst)
    mtime <= 'd0;
  else if(selMtime && wen)
    mtime <= wdata;
  else if(clintEn && (sec >= 99))
    mtime <= mtime + 'd1;
  
always@(posedge clk)
  if(rst)
    sec <= 'd0;
  else if(sec >= 99)
    sec <= 'd0;
  else 
    sec <= sec + 1'b1;
assign clintInterrupt = clintEn && (mtime >= mtimecmp);

endmodule