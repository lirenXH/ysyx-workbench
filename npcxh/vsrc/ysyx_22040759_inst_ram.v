`include"./vsrc/ysyx_22040759_inst.v"
`include"./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_inst_ram(
    input   [63:0]      inst_raddr,
    input               clk       ,
    input               i_ram_en  ,
    output  reg[31:0]   inst
);
reg [63:0] inst_ext;


import "DPI-C" function void pmem_read(input longint inst_raddr, output longint inst);

    always @(posedge clk) begin
        if(i_ram_en&&(inst_raddr!=64'd0))begin
            pmem_read(inst_raddr, inst_ext);
            inst <= (inst_raddr%8==0)?inst_ext[31:0]:inst_ext[63:32];
        end
        //else
        //    inst_ext <= 64'h1300000013;
    end
endmodule

