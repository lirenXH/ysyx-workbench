`include"./ysyx_22040759_define.v"
module reqDispute(                              //处理来自访存阶段的读写请求
  //  request
  input                 mem_addr_valid_i        ,  //mem -> from mem state
  input                 mem_wen_i               ,
  input  [7 :0]         mem_strb_i              ,
  input  [63:0]         mem_addr_i              ,
  input  [127:0]        mem_wdata_i             ,
  output                ram_data_valid_o        ,  //ram -> from ram
  output [127:0]        ram_rdata_o             ,
  // read 
  output                rd_addr_valid_o             ,
  output  [63:0]        rd_addr_o                   ,
  input                 rd_data_valid_i             ,
  input   [127:0]       rd_data_i                   ,
  // write 
  output                wr_addr_valid_o             ,
  output   [63:0]       wr_addr_o                   ,
  output   [7:0]        wr_strb_o                   ,
  output   [127:0]      wr_data_o                   ,
  input                 wr_data_valid_i
);

assign  rd_addr_valid_o = ~mem_wen_i && mem_addr_valid_i;   
assign  wr_addr_valid_o =  mem_wen_i && mem_addr_valid_i;
assign  rd_addr_o       = mem_addr_i;
assign  wr_addr_o       = mem_addr_i;
assign  wr_strb_o       = mem_strb_i;
assign  wr_data_o       = mem_wdata_i;

assign ram_data_valid_o = mem_wen_i ? wr_data_valid_i : rd_data_valid_i;  
assign ram_rdata_o      = rd_data_i; 

endmodule