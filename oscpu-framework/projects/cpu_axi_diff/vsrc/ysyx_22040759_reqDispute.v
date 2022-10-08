`include"./ysyx_22040759_define.v"
module ysyx_22040759_reqDispute(                              //处理来自访存阶段的读写请求
  //  request
  input                 mem_addr_valid_i       ,  //mem -> from mem state
  input                 mem_wen_i              ,
  input  [31:0]         mem_addr_i             ,
  input  [63:0]         mem_wdata_i            ,
  input  [2:0]          mem_size_i             ,  //ram -> from ram
  output                ram_data_valid_o       ,
  output [63:0]         ram_rdata_o            ,
  // read 
  output                mem_rd_addr_valid_o             ,
  output  [31:0]        mem_rd_addr_o                   ,
  output  [2:0]         mem_rd_size_o                   ,
  input                 mem_rd_data_valid_i             ,
  input   [63:0]        mem_rd_data_i                   ,
  // write 
  output                mem_wr_addr_valid_o             ,
  output   [31:0]       mem_wr_addr_o                   ,
  output   [63:0]       mem_wr_data_o                   ,
  output   [2:0]        mem_wr_size_o                   ,
  input                 mem_wr_data_valid_i
);

assign  mem_rd_addr_valid_o = ~mem_wen_i && mem_addr_valid_i;   
assign  mem_wr_addr_valid_o =  mem_wen_i && mem_addr_valid_i;
assign  mem_rd_addr_o       = mem_addr_i;
assign  mem_wr_addr_o       = mem_addr_i;
assign  mem_wr_size_o       = mem_size_i;
assign  mem_rd_size_o       = mem_size_i;
assign  mem_wr_data_o       = mem_wdata_i;

assign ram_data_valid_o = mem_wen_i ? mem_wr_data_valid_i : mem_rd_data_valid_i;  
assign ram_rdata_o      = mem_rd_data_i; 

endmodule
