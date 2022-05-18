`include"./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_pc_i_sel(
    input  [1:0]   wreg_sel  ,
    input  [63:0]  alu_result,
    input  [63:0]  mem_rdata  ,
    output [63:0]  wreg_data ,
    input          pc_sel    ,
    input  [63:0]  pc_pc     ,            //pc+4
    output [63:0]  pc_new
);

assign pc_new =  ({64{pc_sel==`pc_pc }} & pc_pc ) |
                 ({64{pc_sel==`pc_alu}} & alu_result);

assign wreg_data=({64{wreg_sel==`wreg_pc }} & pc_pc   )  |
                 ({64{wreg_sel==`wreg_alu}} & alu_result)|
                 ({64{wreg_sel==`wreg_ram}} & mem_rdata)  ;
endmodule
