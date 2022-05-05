`include"ysyx_22040759_define.v"
module ysyx_22040759_ALU(
    input    [31:0]     src1,
    input    [31:0]     src2
    input    [2 :0]     alusel,     //ALU   功能选择
    output   [31:0]     result   
    );  
    wire    [31:0]     add_result;
    wire    [31:0]     or_result;

    assign add_result = src1 + src2;
    assign or_result  = src1 | src2;


    assign result = ({32{alusel == `alu_add}} & add_result)
                  | ({32{alusel == `alu_or }} & or_result);
endmodule
