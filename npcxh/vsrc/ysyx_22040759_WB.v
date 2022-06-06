`include"./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_WB(
    input           clk           ,
    input           rst           ,
    //allowin
    output          ws_allowin    ,
    //from ms
    input           ms_to_ws_valid,
    input  [200:0]  ms_to_ws_bus  ,
    //to rf: for write back
    output [69:0]   ws_to_rf_bus  ,
);

reg         ws_valid;
wire        ws_ready_go;

reg [200:0] ms_to_ws_bus_r;

wire            ws_reg_wen    ;
wire  [4:0]     ws_rd_o       ;
wire  [1:0]     ws_wreg_sel   ;
wire  [63:0]    ws_rdata      ;
wire  [63:0]    ws_alu_result ;
wire  [63:0]    ws_pc         ;
wire            rf_wen        ;
wire  [4:0]     rf_waddr      ;
wire  [63:0]    rf_wreg_data  ;
assign { ws_reg_wen     ,  //200:199    写寄存器使能
         ws_rd_o        ,  //198:194    目标寄存器
         ws_wreg_sel    ,  //193:192
         ws_rdata       ,  //191:128
         ws_alu_result  ,  //127:64    写寄存器值
         ws_pc             //63 :0     PC 支持jal/jalr
        } = ms_to_ws_bus_r;

assign ws_ready_go = 1'b1;
assign ws_allowin  = !ws_valid || ws_ready_go;
always @(posedge clk) begin
    if (rst) begin
        ws_valid <= 1'b0;
    end
    else if (ws_allowin) begin
        ws_valid <= ms_to_ws_valid;
    end

    if (ms_to_ws_valid && ws_allowin) begin
        ms_to_ws_bus_r <= ms_to_ws_bus;
    end
end
assign rf_waddr = ws_rd_o;
assign rf_wen   = ws_reg_wen&&ws_valid;//目标寄存器写使能

assign rf_wreg_data=({64{ws_wreg_sel==`wreg_pc }} & ws_pc      )  |
                    ({64{ws_wreg_sel==`wreg_alu}} & ws_alu_result)|
                    ({64{ws_wreg_sel==`wreg_ram}} & ws_rdata   )  ;

assign ws_to_rf_bus = {rf_wen      ,  //69:69
                       rf_waddr    ,  //68:64
                       rf_wreg_data   //63:0
                      };

endmodule


module wb_stage(
    input                           clk           ,
    input                           rst         ,
    //allowin
    output                          ws_allowin    ,
    //from ms
    input                           ms_to_ws_valid,
    input  [`MS_TO_WS_BUS_WD -1:0]  ms_to_ws_bus  ,
    //to rf: for write back
    output [`WS_TO_RF_BUS_WD -1:0]  ws_to_rf_bus  ,

);

reg         ws_valid;
wire        ws_ready_go;

reg [`MS_TO_WS_BUS_WD -1:0] ms_to_ws_bus_r;
wire        ws_gr_we;
wire [ 4:0] ws_dest;
wire [31:0] ws_final_result;
wire [31:0] ws_pc;
assign {ws_gr_we       ,  //69:69
        ws_dest        ,  //68:64
        ws_final_result,  //63:32
        ws_pc             //31:0
       } = ms_to_ws_bus_r;

wire        rf_we;
wire [4 :0] rf_waddr;
wire [31:0] rf_wdata;
assign ws_to_rf_bus = {rf_we   ,  //37:37
                       rf_waddr,  //36:32
                       rf_wdata   //31:0
                      };

assign ws_ready_go = 1'b1;
assign ws_allowin  = !ws_valid || ws_ready_go;
always @(posedge clk) begin
    if (rst) begin
        ws_valid <= 1'b0;
    end
    else if (ws_allowin) begin
        ws_valid <= ms_to_ws_valid;
    end

    if (ms_to_ws_valid && ws_allowin) begin
        ms_to_ws_bus_r <= ms_to_ws_bus;
    end
end

assign rf_we    = ws_gr_we&&ws_valid;//目标寄存器写使能
assign rf_waddr = ws_dest;
assign rf_wdata = ws_final_result;

endmodule
