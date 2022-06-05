`include"./vsrc/ysyx_22040759_inst.v"
`include"./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_IF(
    input         clk            ,
    input         rst            ,
    //allwoin
    input         ds_allowin     , //译码的allowin
    //brbus
    input  [64:0] br_bus         , //跳转总线
    //to ds
    output        fs_to_ds_valid ,
    output [95:0] fs_to_ds_bus   , //IF输出总线
    // inst sram interface
    output        i_ram_en   ,
    output [63:0] inst_raddr ,
    input  [31:0] inst             //给i-ram
);

reg         fs_valid;
wire        fs_ready_go;
wire        fs_allowin;
wire        to_fs_valid;

wire [63:0] seq_pc;
wire [63:0] nextpc;

wire        br_taken;                    //这个跳转目标选择得改！！！！!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
wire [63:0] br_target;
assign {br_taken,br_target} = br_bus;    //跳转使能，跳转目标 1+64

wire [31:0] fs_inst;
reg  [63:0] fs_pc;
assign fs_to_ds_bus = {fs_inst ,fs_pc};  //所取指令，PC    32+64

// pre-IF stage
assign to_fs_valid  = ~rst;              //新IF有效位
assign seq_pc       = fs_pc + 3'h4;      //下一阶段的PC   pre-IF 阶段只负责产生nextPC
assign nextpc       = br_taken ? br_target : seq_pc; //是否跳转

// IF stage
assign fs_ready_go    = 1'b1;            //IF阶段完成
assign fs_allowin     = !fs_valid || fs_ready_go && ds_allowin;//IF可进
assign fs_to_ds_valid =  fs_valid && fs_ready_go; //IF-ID阶段有效=IF有效且IF完成
always @(posedge clk) begin
    if (rst) begin
        fs_valid <= 1'b0;       //复位为无数据
    end
    else if (fs_allowin) begin
        fs_valid <= to_fs_valid;//如果IF可进 更新数据有效位
    end

    if (rst) begin            //复位PC
        fs_pc <= 32'h7FFFFFFC;  //trick: to make nextpc be 0xbfc00000 during rst 
    end
    else if (to_fs_valid && fs_allowin) begin //更新PC
        fs_pc <= nextpc;
    end
end

assign i_ram_en        = to_fs_valid && fs_allowin;//同时取指
assign inst_raddr      = nextpc;

assign fs_inst         = inst;

endmodule
