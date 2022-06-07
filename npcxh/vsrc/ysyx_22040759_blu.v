`include "./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_blu(                               //B系指令跳转模块
    input       [63:0]  src1        ,
    input       [63:0]  src2        ,
    input       [4 :0]  blu_sel     ,
    input       [63:0]  imme_b      ,
    input       [63:0]  pc_out      ,
    input               jump_flag   ,
    input       [1 :0]  blu_wreg_sel,
    output      [63:0]  blu_pc      ,
    output              br_taken    ,  //blu_brush_flag
);

    wire br_taken;
    wire equ = src1 == src2;
    wire lt  = $signed(src1) < $signed(src2);
    wire ltu = src1 < src2;

    wire [63:0] blu_pc = (((blu_sel == `blu_jalr) ? src1 : pc_out) + imme_b ) & ~((blu_sel == `blu_jalr) ? 64'd1 : 64'd0);
    // JAL   PC + imm          out = PC+4
    // JALR (rs1 + imm ) & ~1  out = PC+4
    // B     PC + imm
    wire  br_valid =   ((blu_sel == `blu_jal  ) &(blu_wreg_sel == `wreg_pc))|| 
                       ((blu_sel == `blu_jalr ) &(blu_wreg_sel == `wreg_pc))||
                       ((blu_sel == `blu_beq  ) &&  equ )||
                       ((blu_sel == `blu_bne  ) && ~equ )||
                       ((blu_sel == `blu_blt  ) &&  lt  )||
                       ((blu_sel == `blu_bge  ) && ~lt  )||
                       ((blu_sel == `blu_bgeu ) && ~ltu )||
                       ((blu_sel == `blu_bltu ) &&  ltu ); 
    assign br_taken= br_valid&&jump_flag;
endmodule 
