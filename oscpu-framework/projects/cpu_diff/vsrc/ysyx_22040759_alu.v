`include"./ysyx_22040759_define.v"
module ysyx_22040759_alu(
    input    [63:0]     alu_a,
    input    [63:0]     alu_b,
    input    [4 :0]     alu_sel,     //ALU   功能选择
    output   [63:0]     alu_result   
    );  
    
    wire    [5 :0]     shamt = alu_b[5:0];
    wire    [63:0]     sel_result;
    wire    [63:0]     add_result;
    wire    [63:0]     xor_result;
    wire    [63:0]     and_result;
    wire    [63:0]     sub_result;
    wire    [63:0]     slt_result;
    wire    [63:0]     or_result;
    wire    [63:0]     div_result;
    wire    [63:0]     divu_result;
    wire    [63:0]     mul_result;
    wire    [63:0]     rem_result;
    wire    [63:0]     remu_result;
    wire    [63:0]     sltu_result;
    wire               risc32_mode = alu_sel[4];

    wire [31:0] srl_32 = alu_a[31:0] >> shamt[4:0]          ;   
    wire [31:0] sra_32 = $signed(alu_a[31:0]) >>> shamt[4:0];
    wire [31:0] sll_32 = alu_a[31:0] << shamt[4:0]          ;
    wire [63:0] sll_64 = alu_a << shamt                     ;
    wire [63:0] sra_64 = $signed(alu_a) >>> shamt           ;
    wire [63:0] srl_64 = alu_a >> shamt                     ;
    

    wire [63:0] sll_result = risc32_mode ? {32'd0,sll_32} : sll_64 ;
    wire [63:0] srl_result = risc32_mode ? {32'd0,srl_32} : srl_64 ;
    wire [63:0] sra_result = risc32_mode ? {32'd0,sra_32} : sra_64 ;

    //
    assign add_result   = alu_a + alu_b;
    assign sub_result   = alu_a - alu_b;
    assign or_result    = alu_a | alu_b;
    assign and_result   = alu_a & alu_b;
    assign xor_result   = alu_a ^ alu_b;
    assign div_result   = $signed(alu_a) / $signed(alu_b);
    assign divu_result  = alu_a / alu_b;
    assign mul_result   = alu_a * alu_b;
    assign remu_result   = alu_a % alu_b;
    assign rem_result   = $signed(alu_a) % $signed(alu_b);
    assign slt_result   = {63'b0,{$signed(alu_a) < $signed(alu_b)}};
    assign sltu_result  = {63'b0,{alu_a < alu_b}};

    assign sel_result = ({64{alu_sel == `alu_add  }} & add_result  )
                      | ({64{alu_sel == `alu_addw }} & add_result  )
                      | ({64{alu_sel == `alu_sub  }} & sub_result  )
                      | ({64{alu_sel == `alu_subw }} & sub_result  )
                      | ({64{alu_sel == `alu_or   }} & or_result   )
                      | ({64{alu_sel == `alu_and  }} & and_result  )
                      | ({64{alu_sel == `alu_xor  }} & xor_result  )
                      | ({64{alu_sel == `alu_div  }} & div_result  )
                      | ({64{alu_sel == `alu_divw }} & div_result  )
                      | ({64{alu_sel == `alu_divu }} & divu_result )
                      | ({64{alu_sel == `alu_mul  }} & mul_result  )
                      | ({64{alu_sel == `alu_mulw }} & mul_result  )
                      | ({64{alu_sel == `alu_rem  }} & rem_result  )
                      | ({64{alu_sel == `alu_remw }} & rem_result  )
                      | ({64{alu_sel == `alu_remu }} & remu_result  )
                      | ({64{alu_sel == `alu_sltu }} & sltu_result )
                      | ({64{alu_sel == `alu_slt  }} & slt_result  )
                      | ({64{alu_sel == `alu_sra  }} & sra_result  )
                      | ({64{alu_sel == `alu_sraw }} & sra_result  )
                      | ({64{alu_sel == `alu_srl  }} & srl_result  )
                      | ({64{alu_sel == `alu_srlw }} & srl_result  )
                      | ({64{alu_sel == `alu_sll  }} & sll_result  )
                      | ({64{alu_sel == `alu_sllw }} & sll_result  );  // w 分开

    assign alu_result = risc32_mode ? {{32{sel_result[31]}},sel_result[31:0]} : sel_result;

endmodule

