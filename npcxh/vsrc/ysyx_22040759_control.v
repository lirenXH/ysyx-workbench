module ysyx_22040759_control(
    input   [6:0]     opcode,
    input   [2:0]     func3,   
    output            immsel,   //立即数拓展
    output            regwen,   //读寄存器使能
    output            alusel    //ALU功能选择
    );
    
    assign  immsel = ((func3 == 3'b000)&(opcode == 7'b0010011))?1'b1:1'b0;
    assign  regwen = ((func3 == 3'b000)&(opcode == 7'b0010011))?1'b1:1'b0;
    assign  alusel = ((func3 == 3'b000)&(opcode == 7'b0010011))?1'b1:1'b0;
endmodule
