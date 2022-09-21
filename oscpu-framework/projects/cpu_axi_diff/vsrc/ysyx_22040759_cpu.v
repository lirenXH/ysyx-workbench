`include"./ysyx_22040759_define.v"

module ysyx_22040759_cpu(
    input           clock,
    input           reset,
    //to axi
    output          icache_valid,     
    input           icache_ready,
    input  [63:0]   icache_data_read,
    output [31:0]   icache_addr,     

    output          dcache_valid       ,
    input           dcache_ready       ,
    output          dcache_req         ,
    input  [63:0]   dcache_data_read   ,
    output [63:0]   dcache_data_write  ,
    output [31:0]   dcache_addr        ,
    output [2:0]    dcache_size         
);
//difftest
wire [63:0] regs_ds_o[31:0];
wire        ws_valid;
wire [31:0] ws_inst;
wire [63:0] pc_out;
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
wire [130:0] bru_to_fs_bus;
wire [95 :0] fs_to_ds_bus ;
wire [322:0] ds_to_es_bus ;
wire [69 :0] ws_to_rf_bus ;  //ID写回
wire [172:0] es_to_ms_bus ;
wire [231:0] ms_to_ws_bus ;
wire [63:0]  es_alu_result;
//inst_ram
wire [31:0]inst;
wire       jump_r     ;
wire [1:0] ForwardA   ;
wire [1:0] ForwardB   ;
wire       pcwrite    ;
wire       IF_ID_write;
wire       en_control ;
wire [4:0] ds_rs1_o   ;
wire [4:0] ds_rs2_o   ;
wire [4:0] es_rs1     ;
wire [4:0] es_rs2     ;
wire       ms_isload  ;
wire [63:0]ms_load_data;
wire       ms_mem_ren;

wire       if_valid;       
wire       if_ready;
wire [63:0]if_data_read;
wire [31:0]if_addr;  

wire       mem_valid       ;
wire       mem_ready       ;
wire       mem_req         ;
wire [63:0]mem_data_read   ;
wire [63:0]mem_data_write  ;
wire [31:0]mem_addr        ;
wire [2:0] mem_size        ;
ysyx_22040759_IF IF(
    .clk            (clock),
    .rst            (reset),
    .ds_allowin     (ds_allowin),     //译码的allowin
    .bru_to_fs_bus  (bru_to_fs_bus),  //跳转总线
    .pcwrite        (pcwrite),
    .fs_to_ds_valid (fs_to_ds_valid),
    .fs_to_ds_bus   (fs_to_ds_bus),   //IF输出总线
    .jump_r         (jump_r),
    //to axi
    .if_data_read   (if_data_read),
    .if_ready       (if_ready),
    .if_valid       (if_valid),
    .inst_addr      (if_addr) 
);
ysyx_22040759_icache icache(
.clk              (clock),
.rst              (reset),
//to or from if
.icache_addr      (if_addr),
.icache_ren       (if_valid),
.icache_if_data_o (if_data_read),
.icache_if_ready  (if_ready),
//to or from ram
.ram_icache_rdata (icache_data_read),
.icache_data_valid(icache_ready),
.icache_ram_raddr (icache_addr),
.icache_ram_ren   (icache_valid) 
);
ysyx_22040759_hazard hazard(
  //.clk                 (clock),
  .rst                 (reset),
	.IF_ID_rs1           (ds_rs1_o), 
	.IF_ID_rs2           (ds_rs2_o),
	.ID_EX_rd            (es_to_ms_bus[68:64]),
	//.ID_EX_memread       (es_to_ms_bus[75:75]),
  .EX_MEM_memread      (ms_mem_ren),
	.pcwrite             (pcwrite),
	.IF_ID_write         (IF_ID_write),
	.en_control          (en_control)
);
ysyx_22040759_ID ID(
    .clk            (clock),
    .rst            (reset),
    //allowin 
    .es_allowin     (es_allowin),
    .ds_allowin     (ds_allowin),
    //from fs 
    .fs_to_ds_valid (fs_to_ds_valid),
    .fs_to_ds_bus   (fs_to_ds_bus),
    .jump_r         (jump_r),
    //from hazard
    .en_control     (en_control),
    .IF_ID_write    (IF_ID_write),
    //to es 
    .ds_to_es_valid (ds_to_es_valid),  
    .ds_to_es_bus   (ds_to_es_bus),          //control signal bus
    //to hazard
    .rs1_o           (ds_rs1_o),  
    .rs2_o           (ds_rs2_o),
    //to rf: for write back
    .ws_to_rf_bus   (ws_to_rf_bus),
    //to brush      
    .ds_br_taken    (bru_to_fs_bus[64]),          //bru_to_fs_bus[64]
    .regs_ds_o      (regs_ds_o)        // difftest
);
ysyx_22040759_forward forward(
    .ID_EX_RegisterRs1  (es_rs1),
    .ID_EX_RegisterRs2  (es_rs2),
    .EX_MEM_RegisterRd  (ms_to_ws_bus[198:194]), 
    .MEM_WB_RegisterRd  (ws_to_rf_bus[68:64]),
    .EX_MEM_RegWrite    (ms_to_ws_bus[199:199]),
    .MEM_WB_RegWrite    (ws_to_rf_bus[69:69]),
    .EX_MEM_Valid       (es_to_ms_valid),
    .MEM_WB_Valid       (ms_to_ws_valid),
    .ms_isload          (ms_isload),
    .ForwardA           (ForwardA),
    .ForwardB           (ForwardB)
);
ysyx_22040759_EXE EXE(
    .clk           (clock),
    .rst           (reset),
    //allowin
    .ms_allowin    (ms_allowin),
    .es_allowin    (es_allowin),
    //from ds
    .ds_to_es_valid(ds_to_es_valid),
    .ds_to_es_bus  (ds_to_es_bus),
     //for forward
    .ForwardA      (ForwardA),
    .ForwardB      (ForwardB),   
    .ms_alu_result (ms_to_ws_bus[127:64]),
    .ws_alu_result (ws_to_rf_bus[63:0]),
    .ms_load_data  (ms_load_data),
    .es_rs1        (es_rs1),
    .es_rs2        (es_rs2),
    //to ms
    .es_to_ms_valid(es_to_ms_valid),
    .es_to_ms_bus  (es_to_ms_bus),
    .alu_result    (es_alu_result),
    //to fs
    .bru_to_fs_bus (bru_to_fs_bus)
);

ysyx_22040759_MEM MEM(              
    .clk             (clock),
    .rst             (reset),
    //allowin  
    .ws_allowin      (ws_allowin),
    .ms_allowin      (ms_allowin),
    //from es
    .es_to_ms_valid  (es_to_ms_valid),
    .es_to_ms_bus    (es_to_ms_bus[140:0]),
    .es_to_ms_inst   (es_to_ms_bus[172:141]),
    .es_to_alu_result(es_alu_result),
    //to forward 
    .ms_load_data    (ms_load_data),
    //to fazard 
    .ms_mem_ren      (ms_mem_ren),
    //to ws
    .ms_to_ws_valid  (ms_to_ws_valid),
    .ms_to_ws_bus    (ms_to_ws_bus),
    .ms_isload       (ms_isload),
    //to dcache
    .mem_valid       (mem_valid     ),
    .mem_ready       (mem_ready     ),
    .mem_req         (mem_req       ),
    .mem_data_read   (mem_data_read ),
    .mem_data_write  (mem_data_write),
    .mem_addr        (mem_addr      ),
    .mem_size        (mem_size      )
);

ysyx_22040759_dcache dcache (
  .clk                    (clock),
  .rst                    (reset),   
  .invalidate             (1'b0), // 刷新meta中的有效位
  //from or to MEM
  .mem_dcache_valid       (mem_valid        ),  //1请求 
  .mem_dcache_addr        (mem_addr         ),  //1地址
  .mem_dcache_req         (mem_req          ),  //1写使能
  .lsu_dcache_invalidate_i(1'b0             ),  //先置零    !!  
  .mem_dcache_data_write  (mem_data_write   ),  //1写数据
  .mem_dcache_size        (mem_size         ),  //
  .dcache_mem_data_read   (mem_data_read    ),  //1读数据
  .dcache_mem_ready       (mem_ready        ),  //1ready
  //from or to AXI
  .dcache_ram_valid       (dcache_valid     ),  //1访存地址有效
  .dcache_ram_req         (dcache_req       ),  //1访存写使能
  .dcache_ram_addr        (dcache_addr      ),  //1访存地址
  .dcache_ram_data_write  (dcache_data_write),  //1访存写数据
  .dcache_ram_size        (dcache_size      ),  //1读写数据大小         
  .ram_dcache_ready       (dcache_ready     ),  //1访存数据有效
  .ram_dcache_data_read   (dcache_data_read )   //1回填数据
);

ysyx_22040759_WB WB(
    .clk           (clock),
    .rst           (reset),
    //allowin
    .ws_allowin    (ws_allowin),
    //from ms
    .ms_to_ws_valid(ms_to_ws_valid),
    .ms_to_ws_bus  (ms_to_ws_bus),
    //to rf: for write back
    .ws_to_rf_bus  (ws_to_rf_bus),
    .ws_inst       (ws_inst),
    .ws_pc         (pc_out),
    .ws_valid      (ws_valid)
);


// Difftest
reg cmt_wen;
reg [7:0] cmt_wdest;
reg [`REG_BUS] cmt_wdata;
reg [`REG_BUS] cmt_pc;
reg [31:0] cmt_inst;
reg cmt_valid;
reg trap;
reg [7:0] trap_code;
reg [63:0] cycleCnt;
reg [63:0] instrCnt;
reg [`REG_BUS] regs_diff [31 : 0];

//wire inst_valid = ws_valid && (pc_out != 64'b0);
wire inst_valid = ws_valid && (pc_out != 64'b0);
always @(negedge clock) begin
  if (reset) begin
    {cmt_wen, cmt_wdest, cmt_wdata, cmt_pc, cmt_inst, cmt_valid, trap, trap_code, cycleCnt, instrCnt} <= 0;
  end
  else if (~trap) begin
    cmt_wen <= ws_to_rf_bus[69:69];
    cmt_wdest <= {3'd0, ws_to_rf_bus[68:64]};
    cmt_wdata <= ws_to_rf_bus[63:0];  //gai
    cmt_pc <=   pc_out;               //gai
    cmt_inst <= ws_inst;              //gai
    cmt_valid <= inst_valid;          //gai

		regs_diff <= regs_ds_o;           //gai

    trap <= ws_inst[6:0] == 7'h6b;
    trap_code <= regs_ds_o[10][7:0];
    cycleCnt <= cycleCnt + 1;
    instrCnt <= instrCnt + inst_valid;
  end
end

DifftestInstrCommit DifftestInstrCommit(
  .clock              (clock),
  .coreid             (0),
  .index              (0),
  .valid              (cmt_valid),
  .pc                 (cmt_pc),
  .instr              (cmt_inst),
  .skip               (0),
  .isRVC              (0),
  .scFailed           (0),
  .wen                (cmt_wen),
  .wdest              (cmt_wdest),
  .wdata              (cmt_wdata)
);

DifftestArchIntRegState DifftestArchIntRegState (
  .clock              (clock),
  .coreid             (0),
  .gpr_0              (regs_diff[0]),
  .gpr_1              (regs_diff[1]),
  .gpr_2              (regs_diff[2]),
  .gpr_3              (regs_diff[3]),
  .gpr_4              (regs_diff[4]),
  .gpr_5              (regs_diff[5]),
  .gpr_6              (regs_diff[6]),
  .gpr_7              (regs_diff[7]),
  .gpr_8              (regs_diff[8]),
  .gpr_9              (regs_diff[9]),
  .gpr_10             (regs_diff[10]),
  .gpr_11             (regs_diff[11]),
  .gpr_12             (regs_diff[12]),
  .gpr_13             (regs_diff[13]),
  .gpr_14             (regs_diff[14]),
  .gpr_15             (regs_diff[15]),
  .gpr_16             (regs_diff[16]),
  .gpr_17             (regs_diff[17]),
  .gpr_18             (regs_diff[18]),
  .gpr_19             (regs_diff[19]),
  .gpr_20             (regs_diff[20]),
  .gpr_21             (regs_diff[21]),
  .gpr_22             (regs_diff[22]),
  .gpr_23             (regs_diff[23]),
  .gpr_24             (regs_diff[24]),
  .gpr_25             (regs_diff[25]),
  .gpr_26             (regs_diff[26]),
  .gpr_27             (regs_diff[27]),
  .gpr_28             (regs_diff[28]),
  .gpr_29             (regs_diff[29]),
  .gpr_30             (regs_diff[30]),
  .gpr_31             (regs_diff[31])
);

DifftestTrapEvent DifftestTrapEvent(
  .clock              (clock),
  .coreid             (0),
  .valid              (trap),
  .code               (trap_code),
  .pc                 (cmt_pc),
  .cycleCnt           (cycleCnt),
  .instrCnt           (instrCnt)
);

DifftestCSRState DifftestCSRState(
  .clock              (clock),
  .coreid             (0),
  .priviledgeMode     (`RISCV_PRIV_MODE_M),
  .mstatus            (0),
  .sstatus            (0),
  .mepc               (0),
  .sepc               (0),
  .mtval              (0),
  .stval              (0),
  .mtvec              (0),
  .stvec              (0),
  .mcause             (0),
  .scause             (0),
  .satp               (0),
  .mip                (0),
  .mie                (0),
  .mscratch           (0),
  .sscratch           (0),
  .mideleg            (0),
  .medeleg            (0)
);

DifftestArchFpRegState DifftestArchFpRegState(
  .clock              (clock),
  .coreid             (0),
  .fpr_0              (0),
  .fpr_1              (0),
  .fpr_2              (0),
  .fpr_3              (0),
  .fpr_4              (0),
  .fpr_5              (0),
  .fpr_6              (0),
  .fpr_7              (0),
  .fpr_8              (0),
  .fpr_9              (0),
  .fpr_10             (0),
  .fpr_11             (0),
  .fpr_12             (0),
  .fpr_13             (0),
  .fpr_14             (0),
  .fpr_15             (0),
  .fpr_16             (0),
  .fpr_17             (0),
  .fpr_18             (0),
  .fpr_19             (0),
  .fpr_20             (0),
  .fpr_21             (0),
  .fpr_22             (0),
  .fpr_23             (0),
  .fpr_24             (0),
  .fpr_25             (0),
  .fpr_26             (0),
  .fpr_27             (0),
  .fpr_28             (0),
  .fpr_29             (0),
  .fpr_30             (0),
  .fpr_31             (0)
);

endmodule