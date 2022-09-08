`include"./ysyx_22040759_define.v"
module ysyx_22040759_forward(
    input         [4:0]   ID_EX_RegisterRs1 ,
    input         [4:0]   ID_EX_RegisterRs2 ,
    input         [4:0]   EX_MEM_RegisterRd , 
    input         [4:0]   MEM_WB_RegisterRd ,
    input                 EX_MEM_Valid      ,
    input                 MEM_WB_Valid      ,
    input                 EX_MEM_RegWrite   ,      //来自总线的两个控制信号，寄存器写使能
    input                 MEM_WB_RegWrite   ,
    output    reg [1:0]   ForwardA          ,
    output    reg [1:0]   ForwardB
);

    always@(*)begin
        ForwardA = 2'b00;
        ForwardB = 2'b00;
        if( (MEM_WB_RegWrite) && (MEM_WB_RegisterRd!=0) && (MEM_WB_RegisterRd == ID_EX_RegisterRs1) && EX_MEM_Valid)
            ForwardA = 2'b01;
        if( (MEM_WB_RegWrite) && (MEM_WB_RegisterRd!=0) && (MEM_WB_RegisterRd == ID_EX_RegisterRs2) && EX_MEM_Valid)
            ForwardB = 2'b01;

        if( (EX_MEM_RegWrite) && (EX_MEM_RegisterRd!=0) && (EX_MEM_RegisterRd == ID_EX_RegisterRs1) && MEM_WB_Valid)
            ForwardA = 2'b10;
        if( (EX_MEM_RegWrite) && (EX_MEM_RegisterRd!=0) && (EX_MEM_RegisterRd == ID_EX_RegisterRs2) && MEM_WB_Valid)
            ForwardB = 2'b10;

    end

endmodule
