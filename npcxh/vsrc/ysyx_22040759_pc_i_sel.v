`include"./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_pc_i_sel(
    input          wreg_sel  ,
    input  [31:0]  alu_result,
    output [31:0]  wreg_data ,
    input          pc_sel    ,
    input  [31:0]  pc_pc     ,            //pc+4
    output [31:0]  pc_new
);

assign pc_new =  ({32{pc_sel==`pc_pc }} & pc_pc ) |
                 ({32{pc_sel==`pc_alu}} & alu_result);

assign wreg_data=({32{wreg_sel==`wreg_pc }} & pc_pc   ) |
                 ({32{wreg_sel==`wreg_alu}} & alu_result);
endmodule
