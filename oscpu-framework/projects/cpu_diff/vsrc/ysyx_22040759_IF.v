`include"./ysyx_22040759_inst.v"
`include"./ysyx_22040759_define.v"
module ysyx_22040759_IF(
    input         clk            ,
    input         rst            ,
    //allwoin
    input         ds_allowin     , //译码的allowin
    //brbus
    input  [130:0]bru_to_fs_bus  , //跳转总线
    //form fazard
    input         pcwrite        ,
    //to ds
    output        fs_to_ds_valid ,
    output [95:0] fs_to_ds_bus   , //IF输出总线
    // inst sram interface
    output        i_ram_en       ,
    output [63:0] inst_raddr     ,
    //to difftest
    output reg    fetched        ,    
    input  [31:0] inst             //给i-ram
);


reg         fs_valid;
wire        fs_ready_go;
wire        fs_allowin;
wire        to_fs_valid;

wire [63:0] seq_pc;
wire [63:0] wait_jump_pc;
wire [63:0] nextpc;
wire [63:0] fs_pc_final;
wire        br_taken;                   
wire [63:0] fs_bru_pc;
wire [63:0] fs_alu_result;
wire [1 :0] fs_pc_sel;
assign {fs_alu_result,//64
        fs_pc_sel    ,//2
        br_taken     ,//1
        fs_bru_pc     //64
        }  = bru_to_fs_bus;    //跳转使能，跳转目标 
assign nextpc =  fs_allowin? ({64{fs_pc_sel==`pc_pc }} & seq_pc       )|
                             ({64{fs_pc_sel==`pc_alu}} & fs_alu_result)|
                             ({64{fs_pc_sel==`bru_pc}} & wait_jump_pc )   :fs_pc; 


wire [31:0] fs_inst;
reg  [63:0] fs_pc;
assign fs_to_ds_bus = fs_valid ? {fs_inst ,fs_pc_final} : {32'h13,64'h0};  //所取指令，PC    32+64

// pre-IF stage
assign to_fs_valid  = ~rst;              //新IF有效位
assign seq_pc       = fs_pc + 64'd4;      //下一阶段的PC   pre-IF 阶段只负责产生nextPC
assign wait_jump_pc    = br_taken ? fs_bru_pc : seq_pc; //如果分支失败 使用seq_pc

// IF stage
assign fs_ready_go    = 1'b1;            //IF阶段完成
assign fs_allowin     = (!fs_valid || fs_ready_go && ds_allowin) && !pcwrite;//IF可进
assign fs_to_ds_valid =  fs_valid && fs_ready_go; //IF-ID阶段有效=IF有效且IF完成
always @(posedge clk) begin
    if (rst) begin
        fs_valid <= 1'b0;       //复位为无数据
    end
    else if (fs_allowin) begin
        fs_valid <= to_fs_valid;//如果IF可进 更新数据有效位
    end

    if (rst) begin              //复位PC
        fs_pc <= 64'h7FFFFFFC;  //trick: to make nextpc be 0xbfc00000 during rst 
    end
    else if (to_fs_valid && fs_allowin) begin //更新PC
        fs_pc <= nextpc;
        fetched <= 1'b1;
    end
end

//assign i_ram_en        = fs_valid;//同时取指
assign i_ram_en        = 1;
assign inst_raddr      = nextpc;

assign fs_inst         = br_taken ? 32'h13 : inst ; //nop:inst brush
assign fs_pc_final     = br_taken ? 64'h0  : fs_pc; //nop:inst brush
endmodule
