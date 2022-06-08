`include"./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_EXE(
    input          clk           ,
    input          rst           ,
    //allowin
    input          ms_allowin    ,
    output         es_allowin    ,
    //from ds
    input          ds_to_es_valid,
    input  [280:0] ds_to_es_bus  ,
    //to ms
    output         es_to_ms_valid,
    output [204:0] es_to_ms_bus  ,
    //to fs
    output [130:0] blu_to_fs_bus
);
reg         es_valid      ;
reg  [280:0]ds_to_es_bus_r;
wire        es_ready_go   ;

wire [4:0]  es_alu_sel;
wire [1:0]  es_alu_a_sel;
wire [63:0] es_alu_a;
wire [1:0]  es_alu_b_sel;
wire [63:0] es_alu_b;
wire        es_reg_wen;
wire [1:0]  es_wreg_sel;
wire [4:0]  es_rd_o;
wire [63:0] es_imme;
wire [2:0]  es_func3;
wire [63:0] es_src1;
wire [63:0] es_src2;
wire [63:0] es_pc;
wire [63:0] es_alu_result;
wire [63:0] es_blu_pc;
wire        es_mem_wen;
wire        es_mem_ren;
wire        es_jump_flag;
wire [1:0]  es_pc_sel;
wire        br_taken;
assign es_ready_go    = 1'b1;
assign es_allowin     = !es_valid || es_ready_go && ms_allowin;
assign es_to_ms_valid =  es_valid && es_ready_go;
always @(posedge clk) begin
    if (rst) begin
        es_valid <= 1'b0;
    end
    else if (es_allowin) begin
        es_valid <= ds_to_es_valid;
    end

    if (ds_to_es_valid && es_allowin) begin
        ds_to_es_bus_r <= ds_to_es_bus;
    end
end

assign {es_pc_sel       ,  //280 : 279
        es_jump_flag    ,  //278 : 278
        es_mem_wen      ,  //277 : 277
        es_mem_ren      ,  //276 : 276
        es_alu_sel      ,  //275 : 271 alu功能选择       5
        es_alu_a_sel    ,  //270 : 269 操作1选择         2
        es_alu_b_sel    ,  //268 : 267 操作2选择         2
        es_reg_wen      ,  //266 : 266 寄存器堆写回使能   1
        es_wreg_sel     ,  //265 : 264 WB写回选择        2
        es_rd_o         ,  //263 : 259 WB写回目标寄存器   5
        es_imme         ,  //258 : 195 EXE立即数        64
        es_func3        ,  //194 : 192 d_ram掩码        3
        es_src1         ,  //191 : 128 reg_src1        64
        es_src2         ,  //127 : 64  reg_src2        64
        es_pc              //63  : 0   正在运行指令PC    64
        }  =  ds_to_es_bus_r;

assign es_to_ms_bus = { es_src2        ,  //204 : 141    64
                        es_mem_wen     ,  //140 : 140    1
                        es_mem_ren     ,  //139 : 139    1
                        es_func3       ,  //138 : 136    3
                        es_wreg_sel    ,  //135 : 134    2
                        es_reg_wen     ,  //133 : 133    1
                        es_rd_o        ,  //132 : 128    5
                        es_alu_result  ,  //127 : 64     64
                        es_pc             //63  : 0       64
                      };

assign es_alu_a = ({64{es_alu_a_sel == `alu_a_reg}} & es_src1  ) | 
                  ({64{es_alu_a_sel == `alu_a_pc }} & es_pc    ) | 
                  ({64{es_alu_a_sel == `alu_a_0  }} & 64'b0 ) ;

assign es_alu_b = ({64{es_alu_b_sel == `alu_b_reg}} & es_src2  ) | 
                  ({64{es_alu_b_sel == `alu_b_imm}} & es_imme  ) |
                  ({64{es_alu_b_sel == `alu_b_0  }} & 64'b0 ) ;

ysyx_22040759_alu alu(
    .alu_a          (es_alu_a),
    .alu_b          (es_alu_b),
    .alu_sel        (es_alu_sel),     //ALU   功能选择
    .alu_result     (es_alu_result)
    ); 

ysyx_22040759_blu blu(                //B系指令跳转模块 在跳转的时候 bru送给IF ID冲刷信号即可
    .src1         (es_src1 ),
    .src2         (es_src2 ),
    .blu_sel      (es_alu_sel),
    .imme_b       (es_imme ),
    .pc_out       (es_pc),
    .jump_flag    (es_jump_flag),
    .blu_wreg_sel (es_wreg_sel),
    .blu_pc       (es_blu_pc),
    .br_taken     (br_taken)
);

assign blu_to_fs_bus = {es_alu_result,//130 : 67   64
                        es_pc_sel    ,//66  : 65   2
                        br_taken     ,//64  : 64   1
                        es_blu_pc     //63  : 0    64
                        };

endmodule
