`include"./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_alu(
    input    [63:0]     alu_a,
    input    [63:0]     alu_b,
    input    [2 :0]     alu_sel,     //ALU   功能选择
    output   [63:0]     alu_result   
    );  
    wire    [63:0]     add_result;
    wire    [63:0]     sub_result;
    wire    [63:0]     sltiu_result;
    wire    [63:0]     or_result;

    assign add_result   = alu_a + alu_b;
    assign sub_result   = alu_a - alu_b;
    assign or_result    = alu_a | alu_b;
    assign sltiu_result = {63'b0,{alu_a < alu_b}};

    assign alu_result = ({64{alu_sel == `alu_add}} & add_result)
                      | ({64{alu_sel == `alu_sub}} & sub_result)
                      | ({64{alu_sel == `alu_or }} & or_result)
                      | ({64{alu_sel == `alu_sltiu}} & sltiu_result);
endmodule

