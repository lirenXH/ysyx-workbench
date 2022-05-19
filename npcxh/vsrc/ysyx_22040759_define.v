//yes/no
`define Y  1'd1
`define N  1'd0

//immsel
`define imm_x       3'd0
`define imm_i       3'd0
`define imm_u       3'd1
`define imm_j       3'd2
`define imm_s       3'd3
`define imm_b       3'd4

//alu_sel
`define alu_xxx     4'd0
`define alu_add     4'd0
`define alu_or      4'd1
`define alu_sub     4'd2
`define alu_sltiu   4'd3
`define bru_beq     4'd14
`define bru_bne     4'd15

//alu_a_sel
`define alu_a_x     2'd0
`define alu_a_reg   2'd0
`define alu_a_pc    2'd1
`define alu_a_0     2'd2

//alu_b_sel
`define alu_b_x     2'd0
`define alu_b_reg   2'd0
`define alu_b_imm   2'd1

//reg_wen

`define reg_wen     1'd1
`define reg_nwen    1'd0

//pc_sel

`define pc_pc       1'd0
`define pc_alu      1'd1

//wreg_sel

`define wreg_pc     2'd1
`define wreg_alu    2'd0
`define wreg_xx     2'd0
`define wreg_ram    2'd2
