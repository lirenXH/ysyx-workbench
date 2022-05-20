`include "./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_blu(
    input       [63:0]  src1     ,
    input       [63:0]  src2     ,
    input       [4 :0]  blu_sel  ,
    input       [63:0]  imme_b   ,
    input       [63:0]  pc_out   ,
    output      [63:0]  blu_pc   
);

    wire equ = src1 == src2;
    wire lt  = $signed(src1) < $signed(src2);
    //wire ltu = src1 < src2;
    reg [63:0] wait_pc ;
    assign wait_pc = imme_b + pc_out;
    wire  br_valid =   ((blu_sel == `blu_beq  ) &&  equ )||  
                       ((blu_sel == `blu_bne  ) && ~equ )||
                       ((blu_sel == `blu_blt  ) &&  lt  )||
                       ((blu_sel == `blu_bge  ) && ~lt  );  
                       //((blu_sel == `BRU_BGEU ) && ~ltu )|| 
                       //((blu_sel == `BRU_BLTU ) &&  ltu ); 
    assign blu_pc = br_valid ? wait_pc : (pc_out + 4);

endmodule
