
`define ZERO_WORD  64'h00000000_00000000
`define PC_START   64'h00000000_80000000  
`define REG_BUS    63 : 0     
`define INST_ADD   8'h11

`define AXI_ADDR_WIDTH      64
`define AXI_DATA_WIDTH      64
`define AXI_ID_WIDTH        4
`define AXI_USER_WIDTH      1

`define SIZE_B              2'b00
`define SIZE_H              2'b01
`define SIZE_W              2'b10
`define SIZE_D              2'b11

`define REQ_READ            1'b0
`define REQ_WRITE           1'b1

`define RISCV_PRIV_MODE_U   0
`define RISCV_PRIV_MODE_S   1
`define RISCV_PRIV_MODE_M   3

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
`define imm_r       3'd0
//alu_sel
`define alu_xxx     5'd0
`define alu_add     5'd0
`define alu_or      5'd1
`define alu_sub     5'd2
`define alu_slt     5'd3
`define alu_sra     5'd4   //右移
`define alu_srl     5'd5   //左移
`define alu_sll     5'd6   //逻辑左移
`define alu_and     5'd7
`define alu_xor     5'd8
`define alu_sltu    5'd9
`define alu_mul     5'd10
`define alu_rem     5'd11
`define alu_remu    5'd12
`define alu_div     5'd13  
`define alu_divu    5'd14   //01101

`define alu_addw    5'b10000//最高位为1时  代表32位w   16
`define alu_sllw    5'b10001
`define alu_mulw    5'b10010
`define alu_divw    5'b10011
`define alu_remw    5'b10100
`define alu_subw    5'b10101
`define alu_sraw    5'b10110
`define alu_srlw    5'b10111
//bru_sel
`define bru_beq     5'd6
`define bru_bne     5'd1
`define bru_bge     5'd2
`define bru_blt     5'd3
`define bru_bltu    5'd4
`define bru_bgeu    5'd5
`define bru_jal     5'd0
`define bru_jalr    5'd7
//alu_a_sel
`define alu_a_x     2'd0
`define alu_a_reg   2'd0
`define alu_a_pc    2'd1
`define alu_a_0     2'd2

//alu_b_sel
`define alu_b_x     2'd0
`define alu_b_reg   2'd0
`define alu_b_imm   2'd1
`define alu_b_0     2'd2
//reg_wen

`define reg_wen     1'd1
`define reg_nwen    1'd0

//pc_sel

`define pc_pc       2'd0
`define pc_alu      2'd1
`define bru_pc      2'd2

//wreg_sel

`define wreg_pc     2'd1
`define wreg_alu    2'd0
`define wreg_xx     2'd0
`define wreg_ram    2'd2
