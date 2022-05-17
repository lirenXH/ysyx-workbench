`include"./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_alu_sele(
    input [63:0]    src1     ,
    input [63:0]    src2     ,
    input [63:0]    pc_out   ,
    input [63:0]    imme_i   ,
    input [1:0]     alu_a_sel,
    input [1:0]     alu_b_sel,
    output[63:0]    alu_a    ,
    output[63:0]    alu_b
);
assign alu_a = ({64{alu_a_sel == `alu_a_reg}} & src1  ) | 
               ({64{alu_a_sel == `alu_a_pc }} & pc_out) | 
               ({64{alu_a_sel == `alu_a_0  }} & 64'b0 ) ;

assign alu_b = ({64{alu_b_sel == `alu_b_reg}} & src2  ) | 
               ({64{alu_b_sel == `alu_b_imm}} & imme_i);
endmodule
