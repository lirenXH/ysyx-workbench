module ysyx_22040759_inst_decode(
    input    [31:0]    inst,
    output   [6:0]     opcode,
    output   [2:0]     func3,
    output   [4:0]     rs1,
    output   [4:0]     rs2,
    output   [4:0]     rd,
    output   [31:0]    imme
    );
    assign imme    ={{20{inst[31]}},inst[31:20]};  //I-type
    assign opcode  =inst[6:0];
	assign func3   =inst[14:12];
	assign rs1     =inst[19:15];
	assign rs2     =inst[24:20];
	assign rd      =inst[11:7];

endmodule

