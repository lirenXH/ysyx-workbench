`include"./vsrc/ysyx_22040759_inst.v"
`include"./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_inst_ram(
    input   [63:0]  inst_raddr,
    //input           clk,
    //input           rst,
    output  [31:0]  inst
);
reg [63:0] inst_ext;

assign inst = (inst_raddr%8==0)?inst_ext[31:0]:inst_ext[63:32]; 
import "DPI-C" function void pmem_read(input longint inst_raddr, output longint inst);

    always @(inst_raddr) begin
        pmem_read(inst_raddr, inst_ext);
    end
endmodule
