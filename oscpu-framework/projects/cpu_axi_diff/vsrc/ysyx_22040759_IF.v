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
    output reg    jump_r         ,
    // to axi 
    input  [63:0] if_data_read   ,
    input         if_ready       ,
    output   reg  if_valid       ,
    output [31:0] inst_addr          
);


reg         fs_valid;
//reg         jump_r = 0;
reg  [63:0] pc_r;
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

wire handshake_done = if_valid & if_ready;    //握手
assign {fs_alu_result,//64
        fs_pc_sel    ,//2
        br_taken     ,//1
        fs_bru_pc     //64
        }  = bru_to_fs_bus;    //跳转使能，跳转目标 
assign nextpc =  ({64{fs_pc_sel==`pc_pc }} & seq_pc       )|
                 ({64{fs_pc_sel==`pc_alu}} & fs_alu_result)|
                 ({64{fs_pc_sel==`bru_pc}} & wait_jump_pc ); 
reg  [63:0]pc_to_axi;

wire [31:0] fs_inst;
reg  [63:0] fs_pc;
assign fs_to_ds_bus = fs_valid ? {fs_inst ,fs_pc_final} : {32'h13,64'h0};  //所取指令，PC    32+64

// pre-IF stage
assign to_fs_valid  = ~rst ;              //新IF有效位
assign seq_pc       = fs_pc + 64'd4;      //下一阶段的PC   pre-IF 阶段只负责产生nextPC
assign wait_jump_pc    = br_taken ? fs_bru_pc : seq_pc; //如果分支失败 使用seq_pc

// IF stage
assign fs_ready_go    = 1'b1;            //IF阶段完成
assign fs_allowin     = (!fs_valid || fs_ready_go && ds_allowin) && !pcwrite;//IF可进
assign fs_to_ds_valid =  fs_valid && fs_ready_go && handshake_done; //IF-ID阶段有效=IF有效且IF完成
always @(posedge clk) begin
    if (rst) begin
        fs_valid <= 1'b0;       //复位为无数据
    end
    else if (fs_allowin) begin
        fs_valid <= to_fs_valid;//如果IF可进 更新数据有效位
    end

    if (rst) begin              //复位PC
        fs_pc <= 64'h80000000;  
        pc_to_axi <= 64'h80000000;
    end
    //else if (to_fs_valid && fs_allowin && handshake_done) begin //更新PC
    //    fs_pc <= nextpc;
    //end
    if (~jump_r && br_taken) begin
        jump_r <= 1;
        pc_r <= nextpc;
    end
    if (to_fs_valid && fs_allowin && handshake_done ) begin
        if (~jump_r)begin
            fs_pc <= nextpc;
            pc_to_axi <= pc_to_axi + 'h4;
        end
        else begin
            fs_pc <= pc_r;
            pc_to_axi <= pc_r;
            jump_r <= 0;
        end
    end
end

assign if_valid        = fs_valid && !pcwrite;//取指有效

assign inst_addr       = pc_to_axi[31:0];

//assign fs_inst         = br_taken ? 32'h13 : if_data_read[31:0] ; //nop:inst brush
assign fs_inst         = (jump_r || !handshake_done) ? 32'h13 : if_data_read[31:0] ;     //nop:inst brush
assign fs_pc_final     = (jump_r || !handshake_done) ? 64'h0  : fs_pc;                   //nop:inst brush
endmodule
