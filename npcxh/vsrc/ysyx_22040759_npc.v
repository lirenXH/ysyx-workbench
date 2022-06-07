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
wire ds_allowin;
wire es_allowin;
wire ms_allowin;
wire ws_allowin;
wire ;
wire ;
wire ;
wire ;

ysyx_22040759_IF IF(
    .clk            (clk),
    .rst            (rst),
    .ds_allowin     (ds_allowin), //译码的allowin
    .blu_to_fs_bus  (), //跳转总线
    .fs_to_ds_valid (),
    .fs_to_ds_bus   (), //IF输出总线
    .i_ram_en       (),
    .inst_raddr     (),
    .inst           (), //给i-ram
    .blu_brush_flag ()
);



endmodule