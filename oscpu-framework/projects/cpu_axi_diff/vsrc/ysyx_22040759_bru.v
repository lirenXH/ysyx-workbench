`include"./ysyx_22040759_define.v"
module ysyx_22040759_bru(                               //B系指令跳转模块
    input       [63:0]  src1        ,
    input       [63:0]  src2        ,
    input       [4 :0]  bru_sel     ,
    input       [63:0]  imme_b      ,
    input       [63:0]  pc_out      ,
    input               jump_flag   ,
    input       [1 :0]  bru_wreg_sel,
    input               bru_valid   ,
    output      [63:0]  bru_pc      ,
    output              br_taken       //bru_brush_flag
);

    wire equ = src1 == src2;
    wire lt  = $signed(src1) < $signed(src2);
    wire ltu = src1 < src2;
    wire br_valid;
    assign bru_pc = (((bru_sel == `bru_jalr) ? src1 : pc_out) + imme_b ) & ~((bru_sel == `bru_jalr) ? 64'd1 : 64'd0);
    // JAL   PC + imm          out = PC+4
    // JALR (rs1 + imm ) & ~1  out = PC+4
    // B     PC + imm
    assign  br_valid =   ((bru_sel == `bru_jal  ) &&(bru_wreg_sel == `wreg_pc))|| 
                         ((bru_sel == `bru_jalr ) &&(bru_wreg_sel == `wreg_pc))||
                         ((bru_sel == `bru_beq  ) &&  equ )||
                         ((bru_sel == `bru_bne  ) && ~equ )||
                         ((bru_sel == `bru_blt  ) &&  lt  )||
                         ((bru_sel == `bru_bge  ) && ~lt  )||
                         ((bru_sel == `bru_bgeu ) && ~ltu )||
                         ((bru_sel == `bru_bltu ) &&  ltu ); 
    assign br_taken= br_valid && jump_flag && bru_valid;//es阶段有效，是跳转指令，条件生效
    //assign br_taken= br_valid && jump_flag;
endmodule 
