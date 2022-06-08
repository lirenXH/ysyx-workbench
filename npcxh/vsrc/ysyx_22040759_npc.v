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
wire [63:0] a0; //to test
//allowin
wire ds_allowin;
wire es_allowin;
wire ms_allowin;
wire ws_allowin;
//vaild
wire fs_to_ds_valid;
wire ds_to_es_valid;
wire es_to_ms_valid;
wire ms_to_ws_valid;
//bus
wire [130:0] blu_to_fs_bus;
wire [95 :0] fs_to_ds_bus ;
wire [280:0] ds_to_es_bus ;
wire [69 :0] ws_to_rf_bus ;  //ID写回
wire [204:0] es_to_ms_bus ;
wire [199:0] ms_to_ws_bus ;
//inst_ram
wire        i_ram_en  ;
wire [63 :0]inst_raddr;
wire [31 :0]inst;

ysyx_22040759_IF IF(
    .clk            (clk),
    .rst            (rst),
    .ds_allowin     (ds_allowin),     //译码的allowin
    .blu_to_fs_bus  (blu_to_fs_bus),  //跳转总线
    .fs_to_ds_valid (fs_to_ds_valid),
    .fs_to_ds_bus   (fs_to_ds_bus),   //IF输出总线
    .i_ram_en       (i_ram_en),
    .inst_raddr     (inst_raddr),
    .inst           (inst)            //给i-ram
);
ysyx_22040759_inst_ram inst_ram(
    .inst_raddr     (inst_raddr),
    .clk            (clk),
    .i_ram_en       (i_ram_en),
    .inst           (inst) 
);
ysyx_22040759_ID ID(
    .clk            (clk),
    .rst            (rst),
    //allowin 
    .es_allowin     (es_allowin),
    .ds_allowin     (ds_allowin),
    //from fs 
    .fs_to_ds_valid (fs_to_ds_valid),
    .fs_to_ds_bus   (fs_to_ds_bus),
    //to es 
    .ds_to_es_valid (ds_to_es_valid),  
    .ds_to_es_bus   (ds_to_es_bus),          //control signal bus
    //to rf: for write back
    .ws_to_rf_bus   (ws_to_rf_bus),
    //to brush      
    .ds_br_taken    (blu_to_fs_bus[64]),          //blu_to_fs_bus[64]
    //to test        
    .a0             (a0) 
    );

ysyx_22040759_EXE EXE(
    .clk           (clk),
    .rst           (rst),
    //allowin
    .ms_allowin    (ms_allowin),
    .es_allowin    (es_allowin),
    //from ds
    .ds_to_es_valid(ds_to_es_valid),
    .ds_to_es_bus  (ds_to_es_bus),
    //to ms
    .es_to_ms_valid(es_to_ms_valid),
    .es_to_ms_bus  (es_to_ms_bus),
    //to fs
    .blu_to_fs_bus (blu_to_fs_bus)
);

ysyx_22040759_MEM MEM(              
    .clk           (clk),
    .rst           (rst),
    //allowin
    .ws_allowin    (ws_allowin),
    .ms_allowin    (ms_allowin),
    //from es
    .es_to_ms_valid(es_to_ms_valid),
    .es_to_ms_bus  (es_to_ms_bus),
    //to ws
    .ms_to_ws_valid(ms_to_ws_valid),
    .ms_to_ws_bus  (ms_to_ws_bus)
);

ysyx_22040759_WB WB(
    .clk           (clk),
    .rst           (rst),
    //allowin
    .ws_allowin    (ws_allowin),
    //from ms
    .ms_to_ws_valid(ms_to_ws_valid),
    .ms_to_ws_bus  (ms_to_ws_bus),
    //to rf: for write back
    .ws_to_rf_bus  (ws_to_rf_bus),
    .ws_pc         (pc_out)
);

endmodule
