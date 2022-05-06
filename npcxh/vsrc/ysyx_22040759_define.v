//yes/no
`define Y  1'b1
`define N  1'b0

//immsel
`define imm_x       3'd0
`define imm_i       3'd0
`define imm_u       3'd1
`define imm_j       3'd2

//alu_sel
`define alu_xxx     3'd0
`define alu_add     3'd0
`define alu_or      3'd1


//alu_a_sel
`define alu_a_x     2'd0
`define alu_a_reg   2'd0
`define alu_a_pc    2'd1
`define alu_a_0     2'd2

//alu_b_sel
`define alu_b_x     2'd0
`define alu_b_reg   2'd0
`define alu_b_imm   2'b1

//reg_wen

`define reg_wen     1'b1
`define reg_nwen    1'b0

//pc_sel

`define pc_pc       1'b0
`define pc_alu      1'b1

//wreg_sel

`define wreg_pc     1'b1
`define wreg_alu    1'b0
