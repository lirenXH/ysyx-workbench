`include"ysyx_22040759_inst.v"
module ysyx_22040759_npc(
    input           clk ,
    input           rst ,
    input [31:0]    inst,
    output[31:0]    pc_out 
    );
//------------------------------------------------------------
// to test  
import "DPI-C" function void c_ebreak();
always@(inst)begin
  if(inst == 32'h100073)
    c_ebreak();
end
//------------------------------------------------------------
    wire [31:0] pc_new;
    wire [31:0] pc_alu;
    wire [31:0] pc_pc ;
    wire        pc_sel;
    wire [6:0]  opcode;
    wire [2:0]  func3;
    wire [4:0]  rs1;
    wire [4:0]  rs2;
    wire [4:0]  rd;
    wire [31:0] imme;
    wire        immsel;
    wire        regwen;
    wire        alusel;
    wire [31:0] src1;
    wire [31:0] src2;
    wire [31:0] result;
    wire [31:0] alu2;
    assign alu2 = (immsel == 1'b1)? imme:src2;

    ysyx_22040759_pc_i_sel pc_i_sel(        //pc写回选择器
    pc_sel   (pc_sel),
    pc_alu   (pc_alu),
    pc_pc    (pc_pc ),
    pc_new   (pc_new)
    );

    ysyx_22040759_PC PC(
    .clk       (clk),
    .rst       (rst),
    .pc_out    (pc_out),
    .pc_new    (pc_new)
    );
    
    ysyx_22040759_32add add32(
    .a         (pc_out),
    .b         (32'h4),
    .c         (pc_pc)
    );
    
    ysyx_22040759_inst_control inst_control(
    .inst      (inst),
    .opcode    (opcode),
    .func3     (func3),
    .rs1       (rs1),
    .rs2       (rs2),
    .rd        (rd),
    .imme      (imme)
    );
    
    ysyx_22040759_ALU ALU(
    .src1   (src1),
    .src2   (alu2),
    .alusel (alusel),      //ALU功能选择 
    .result (result)   
    );  
    
   ysyx_22040759_GPR GPR (
  .clk      (clk),
  .rst      (rst),
  .wdata    (result),
  .waddr    (rd),
  .raddr1   (rs1),
  .raddr2   (rs2),
  .wen      (regwen),
  .rdata1   (src1),
  .rdata2   (src2)
    );
endmodule
