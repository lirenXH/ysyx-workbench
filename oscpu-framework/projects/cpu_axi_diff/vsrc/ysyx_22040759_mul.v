`include"./ysyx_22040759_define.v"
//-------------booth-2--------------------
module ysyx_22040759_mul#(
  parameter XLEN = 64		//乘法位宽
)(
    input               clock           ,
    input               reset           ,

    input               mul_valid       ,//为高表示输入的数据有效，如果没有新的乘法输入，在乘法被接受的下一个周期要置低
    input               flush           ,//为高表示取消乘法
    input               mulw            ,//为高表示是 32 位乘法
    input   [1:0]       mul_signed      ,//2’b11（signed x signed）；2’b10（signed x unsigned）；2’b00（unsigned x unsigned）；
    input   [XLEN-1:0]  multiplicand    ,//被乘数
    input   [XLEN-1:0]  multiplier      ,//乘数

    output              mul_ready       ,//表示可以输入数据
    output              out_valid       ,//表示输出有效
    output  [XLEN-1:0]  result_hi       ,//高 xlen bits 结果
    output  [XLEN-1:0]  result_lo       ,//低 xlen bits 结果
);







endmodule