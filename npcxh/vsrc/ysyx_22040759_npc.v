`include"./vsrc/ysyx_22040759_inst.v"
`include"./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_npc(
    input           clk ,
    input           rst ,
    //input [31:0]    inst,
    output[63:0]    pc_out 
    );
//------------------------------------------------------------
// to test  
import "DPI-C" function void c_ebreak();
import "DPI-C" function void c_npctrap(input longint pc,input longint code);
always@(inst)begin
  $display(".v inst is %h",inst);
  c_npctrap(pc_out,a0);
  if(inst == 32'h100073)
    c_ebreak();
end
//------------------------------------------------------------
    wire [63:0] pc_new;
    wire [63:0] pc_pc ;
    wire [31:0] inst;
    wire        pc_sel;
    wire [4:0]  rs1_o;
    wire [4:0]  rs2_o;
    wire [2:0]  func3;
    wire [4:0]  rd_o;
    wire [63:0] imme_o;
    wire        reg_wen;
    wire [2:0]  alu_sel;
    wire [63:0] src1;
    wire [63:0] src2;
    wire [63:0] alu_result;
    wire [1:0]  alu_a_sel;
    wire [1:0]  alu_b_sel;
    wire [63:0] alu_a;
    wire [63:0] alu_b;
    wire [63:0] wreg_data;
    wire [1:0]  wreg_sel;
    wire [63:0] mem_rdata;
    wire        mem_wen;
    wire        mem_ren;
    wire [63:0] a0;   //sim test
    ysyx_22040759_pc_i_sel pc_i_sel(        //pc写回/寄存器写回选择器
    .wreg_sel      (wreg_sel),
    .alu_result    (alu_result),
    .wreg_data     (wreg_data),
    .mem_rdata     (mem_rdata),
    .pc_sel        (pc_sel),
    .pc_pc         (pc_pc),
    .pc_new        (pc_new)
    );

    ysyx_22040759_PC PC(
    .clk          (clk),
    .rst          (rst),
    .pc_out       (pc_out),
    .pc_new       (pc_new)
    );
    
    ysyx_22040759_64add add64(
    .a            (pc_out),
    .b            (64'h4),
    .c            (pc_pc)
    );
    
    ysyx_22040759_inst_control inst_control(
    .inst         (inst),
    .imme_o       (imme_o),
    .rs1_o        (rs1_o),  
    .rs2_o        (rs2_o),  
    .rd_o         (rd_o),  
    .alu_a_sel    (alu_a_sel),
    .alu_b_sel    (alu_b_sel),
    .alu_sel      (alu_sel),
    .pc_sel       (pc_sel),
    .reg_wen      (reg_wen),
    .mem_wen      (mem_wen),
    .mem_ren      (mem_ren),
    .func3        (func3),
    .wreg_sel     (wreg_sel)
    );

    ysyx_22040759_alu_sele alu_sele(
    .src1         (src1),
    .src2         (src2),
    .pc_out       (pc_out),
    .imme_i       (imme_o),
    .alu_a_sel    (alu_a_sel),
    .alu_b_sel    (alu_b_sel),
    .alu_a        (alu_a),
    .alu_b        (alu_b)
    );

    ysyx_22040759_alu alu(
    .alu_a        (alu_a),
    .alu_b        (alu_b),
    .alu_sel       (alu_sel),      //ALU功能选择 
    .alu_result   (alu_result)   
    );  
    
   ysyx_22040759_GPR GPR (
  .clk            (clk),
  .rst            (rst),
  .wdata          (wreg_data),
  .waddr          (rd_o),
  .raddr1         (rs1_o),
  .raddr2         (rs2_o),
  .wen            (reg_wen),
  .rdata1         (src1),
  .rdata2         (src2),
  .a0             (a0)  //sim test
    );

  ysyx_22040759_inst_ram inst_ram(
  .inst_raddr     (pc_out),
  .inst           (inst)
  );
  ysyx_22040759_data_ram data_ram(
  .mem_wen      (mem_wen),
  .mem_ren      (mem_ren),
  .func3        (func3),
  .clk          (clk),
  .raddr        (alu_result),
  .waddr        (alu_result),
  .wdata        (src2),
  .rdata        (mem_rdata)
  );
endmodule
