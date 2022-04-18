module ysyx_22040759_ALU(
    input    [31:0]     src1,src2,
    input               alusel,     //ALU   功能选择
    output   [31:0]     result   
    );  
    wire     [31:0]     add_result;
    wire     [31:0]     or_result;
    assign add_result = src1 + src2;
    assign or_result  = src1 | src2;
    
    assign result = ({32{alusel == 1'b1}} & add_result)
                  | ({32{alusel == 1'b0}} & or_result);
endmodule
