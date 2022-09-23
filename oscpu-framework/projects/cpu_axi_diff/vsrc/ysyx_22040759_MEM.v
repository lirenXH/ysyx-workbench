`include"./ysyx_22040759_define.v"
module ysyx_22040759_MEM(                   
    input          clk           ,
    input          rst           ,
    //allowin
    input          ws_allowin    ,
    output         ms_allowin    ,
    //from es
    input          es_to_ms_valid   ,
    input  [140:0] es_to_ms_bus     ,
    input  [63:0]  es_to_alu_result ,
    input  [31:0]  es_to_ms_inst    ,
    //to ws
    output         ms_to_ws_valid   ,
    output [231:0] ms_to_ws_bus     ,
    output reg     ms_isload        ,
    //to forward
    output [63:0]  ms_load_data     ,
    //to fazard
    output         ms_mem_ren       ,
    //to dcache
    output         mem_valid       ,
    input          mem_ready       ,
    output         mem_req         ,
    input  [63:0]  mem_data_read   ,
    output [63:0]  mem_data_write  ,
    output [31:0]  mem_addr        ,
    output [2:0]   mem_size            
);

reg         ms_valid;
reg [172:0] es_to_ms_bus_r;
reg [63:0]  es_to_alu_result_r;
reg         ms_stop;
reg [1:0]   ms_state;
wire        ms_ready_go;

wire [63:0] ms_pc;  
wire [63:0] ms_alu_result;
wire [4 :0] ms_rd_o;
wire        ms_reg_wen;
wire [1:0]  ms_wreg_sel;
wire [2:0]  ms_func3;
wire        ms_mem_wen;
wire [63:0] ms_src2;
wire [63:0] ms_rdata;
wire [31:0] ms_inst;
wire        ms_hs_done;
assign  { 
          ms_inst        ,  //172:141   32
          ms_src2        ,  //140:77    64
          ms_mem_wen     ,  //76:76     1
          ms_mem_ren     ,  //75:75     1
          ms_func3       ,  //74:72     3
          ms_wreg_sel    ,  //71:70     2
          ms_reg_wen     ,  //69:69     1
          ms_rd_o        ,  //68:64     5
          ms_pc             //63:0      64
        } = es_to_ms_bus_r;
assign ms_alu_result  = es_to_alu_result_r;
//assign ms_ready_go    = ms_hs_done | ~mem_valid;
assign ms_ready_go    = ~ms_stop && ~mem_valid;
assign ms_allowin     = !ms_valid || ms_ready_go && ws_allowin;
assign ms_to_ws_valid = ms_valid && ms_ready_go;
always @(posedge clk) begin
    if (rst) begin
        ms_valid <= 1'b0;
    end
    else if (ms_allowin) begin
        ms_valid <= es_to_ms_valid;
    end

    if (es_to_ms_valid && ms_allowin) begin
        es_to_ms_bus_r  <= {es_to_ms_inst,es_to_ms_bus};
        es_to_alu_result_r <= es_to_alu_result;
    end 
    //else if(!es_to_ms_valid)begin
    //    es_to_ms_bus_r  <= {32'h13,141'b0};
    //    es_to_alu_result_r <= 0;
    //end 
    ms_isload <= ms_mem_ren && !ms_mem_wen;//判断是load指令 解决load相关
end

assign ms_to_ws_bus ={ 
                       ms_inst        ,  //231:200   31
                       ms_reg_wen     ,  //199:199   1 写寄存器使能
                       ms_rd_o        ,  //198:194   5 目标寄存器
                       ms_wreg_sel    ,  //193:192   2
                       ms_rdata       ,  //191:128   64
                       ms_alu_result  ,  //127:64    64 写寄存器值
                       ms_pc             //63 :0     64 PC 支持jal/jalr
                      };


    assign   ms_hs_done     = mem_valid & mem_ready;    //读/写握手
    assign   mem_valid      = ms_mem_ren;
    assign   mem_req        = ms_mem_wen;
    assign   mem_size       = ms_func3;
    assign   mem_addr       = ms_alu_result[31:0];
    assign   mem_data_write = ms_src2;
    assign   ms_rdata       = mem_data_read;

    assign   ms_load_data   = mem_data_read;

parameter [1:0] IDLE = 2'b00,SET = 2'b01,DONE = 2'b10;
always @(posedge clk) begin
        if (rst)
            ms_state <= IDLE;
        else begin
            case (ms_state)
                IDLE: if (mem_valid) begin 
                    ms_stop <= 1'b1;
                    ms_state <= SET;
                end
                SET : if (ms_hs_done)begin
                    //es_to_ms_bus_r  <= {32'h13,141'b0};
                    es_to_ms_bus_r[76:75]  <= 2'b0;      
                    //es_to_alu_result_r <= 0;
                    ms_stop <= 1'b0;
                    ms_state <= DONE;
                end
                DONE:                 ms_state <= IDLE;
                default:              ms_state <= IDLE;
            endcase
        end
    end

//assign ms_stop = ms_state == SET;
//always@(posedge clk)begin
//    if(ms_hs_done)begin
//        if(mem_req)
//        $display("mem_hs_done write addr = %x ,data = %x",ms_alu_result,ms_src2);
//        else
//        $display("mem_hs_done read  addr = %x ,data = %x",ms_alu_result,mem_data_read);
//    end
//end
endmodule
