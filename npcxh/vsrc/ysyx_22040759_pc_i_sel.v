`include"ysyx_22040759_define.v"
module ysyx_22040759_pc_i_sel(
    input          pc_sel   ,
    input  [31:0]  pc_alu   ,           //jal/jalr
    input  [31:0]  pc_pc    ,            //pc+4
    output [31:0]  pc_new
);

assign pc_new =  ({32{pc_sel==`pc_pc }} & pc_pc ) |
                 ({32{pc_sel==`pc_alu}} & pc_alu);