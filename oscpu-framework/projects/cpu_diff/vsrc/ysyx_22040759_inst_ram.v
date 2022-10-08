`include"./ysyx_22040759_define.v"
module ysyx_22040759_inst_ram(
    input   [63:0]      inst_raddr,
    input               clk       ,
    input               i_ram_en  ,
    output  reg[31:0]   inst
);
reg [63:0] inst_ext;

RAMHelper inst_RAMHelper(
  .clk      (clk),
  .en       (i_ram_en),
  .rIdx     ((inst_raddr - 64'h0000_0000_8000_0000) >> 3),
  .rdata    (inst_ext),
  .wIdx     (0),
  .wdata    (0),
  .wmask    (0),
  .wen      (0)
);
  always @(posedge clk) begin
      if(i_ram_en&&(inst_raddr!=64'd0))begin
          inst <= (inst_raddr%8==0)?inst_ext[31:0]:inst_ext[63:32];
      end
      else if(i_ram_en)
          inst <= 32'h13;//????
  end
endmodule


