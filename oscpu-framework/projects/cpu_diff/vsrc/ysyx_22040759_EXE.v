`include"./ysyx_22040759_define.v"
module ysyx_22040759_EXE(
    input          clk           ,
    input          rst           ,
    //allowin
    input          ms_allowin    ,
    output         es_allowin    ,
    //from ds
    input          ds_to_es_valid,
    input  [322:0] ds_to_es_bus  ,
    //for forward
    input  [1:0]   ForwardA      ,
    input  [1:0]   ForwardB      ,   
    input  [63:0]  ms_alu_result ,
    input  [63:0]  ws_alu_result ,
    output [4:0]   es_rs1        ,
    output [4:0]   es_rs2       ,    
    //to ms
    output         es_to_ms_valid,
    output [172:0] es_to_ms_bus  ,
    output [63:0]  alu_result    ,
    //to fs 
    output [130:0] bru_to_fs_bus
);
reg         es_valid      ;
reg  [322:0]ds_to_es_bus_r;
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
wire [63:0] es_for_src1;
wire [63:0] es_for_src2;
wire [63:0] es_pc;
wire [31:0] es_inst;
wire [63:0] es_bru_pc;
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
    else if(!ds_to_es_valid)begin
        ds_to_es_bus_r <= {32'h13,291'b0};
    end
end

assign {
        es_inst         ,  //322 : 291 ds_inst
        es_rs1          ,  //290 ：286 前递
        es_rs2          ,  //285 ：281 前递   
        es_pc_sel       ,  //280 : 279
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

assign es_to_ms_bus = { 
                        es_inst        ,  //172 : 141  ds_inst
                        es_for_src2    ,  //140 : 77    64
                        es_mem_wen     ,  //76  : 76     1
                        es_mem_ren     ,  //75  : 75     1
                        es_func3       ,  //74  : 72     3
                        es_wreg_sel    ,  //71  : 70     2
                        es_reg_wen     ,  //69  : 69     1
                        es_rd_o        ,  //68  : 64     5     -64!!!
                        es_pc             //63  : 0      64
                      };
assign es_for_src1 = ({64{ForwardA == 2'b10}} & ms_alu_result  ) |    //先选是否来自前递
                     ({64{ForwardA == 2'b01}} & ws_alu_result  ) |
                     ({64{ForwardA == 2'b00}} & es_src1 );

assign es_for_src2 = ({64{ForwardB == 2'b10}} & ms_alu_result  ) | 
                     ({64{ForwardB == 2'b01}} & ws_alu_result  ) |
                     ({64{ForwardB == 2'b00}} & es_src2 );

assign es_alu_a = ({64{es_alu_a_sel == `alu_a_reg}} & es_for_src1) |   //再选操作
                  ({64{es_alu_a_sel == `alu_a_pc }} & es_pc      ) | 
                  ({64{es_alu_a_sel == `alu_a_0  }} & 64'b0 ) ;

assign es_alu_b = ({64{es_alu_b_sel == `alu_b_reg}} & es_for_src2) | 
                  ({64{es_alu_b_sel == `alu_b_imm}} & es_imme    ) |
                  ({64{es_alu_b_sel == `alu_b_0  }} & 64'b0 ) ;

ysyx_22040759_alu alu(
    .alu_a          (es_alu_a),
    .alu_b          (es_alu_b),
    .alu_sel        (es_alu_sel),     //ALU   功能选择
    .alu_result     (alu_result)
    ); 

ysyx_22040759_bru bru(                //B系指令跳转模块 在跳转的时候 bru送给IF ID冲刷信号
    .src1         (es_for_src1 ),
    .src2         (es_for_src2 ),
    .bru_sel      (es_alu_sel),
    .imme_b       (es_imme ),
    .pc_out       (es_pc),
    .jump_flag    (es_jump_flag),
    .bru_wreg_sel (es_wreg_sel),
    .bru_pc       (es_bru_pc),
    .br_taken     (br_taken)
);

assign bru_to_fs_bus = {alu_result   ,//130 : 67   64
                        es_pc_sel    ,//66  : 65   2
                        br_taken     ,//64  : 64   1
                        es_bru_pc     //63  : 0    64
                        };

endmodule
