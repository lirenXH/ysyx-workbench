`include"./ysyx_22040759_define.v"
module ysyx_22040759_wraxi # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_USER_WIDTH    = 1
)(
    input                               clk               ,
    input                               rst               ,
    
    input                               wr_addr_valid_i   ,
    input  [AXI_ADDR_WIDTH-1:0]         wr_addr_i         ,
    input  [2:0]                        wr_size_i         ,
    output                              wr_data_valid_o   ,
    input  [63:0]                       wr_data_i         ,  

    input                               axi_aw_ready_i    ,
    output                              axi_aw_valid_o    ,
    output [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o     ,
    output [2:0]                        axi_aw_prot_o     ,
    output [AXI_ID_WIDTH-1:0]           axi_aw_id_o       ,
    output [AXI_USER_WIDTH-1:0]         axi_aw_user_o     ,
    output [7:0]                        axi_aw_len_o      ,
    output [2:0]                        axi_aw_size_o     ,
    output [1:0]                        axi_aw_burst_o    ,
    output                              axi_aw_lock_o     ,
    output [3:0]                        axi_aw_cache_o    ,
    output [3:0]                        axi_aw_qos_o      ,

    input                               axi_w_ready_i     ,
    output                              axi_w_valid_o     ,
    output [AXI_DATA_WIDTH-1:0]         axi_w_data_o      ,
    output reg[AXI_DATA_WIDTH/8-1:0]    axi_w_strb_o      ,  //字节选通
    output                              axi_w_last_o      ,
    
    output                              axi_b_ready_o     ,
    input                               axi_b_valid_i     ,
    input  [1:0]                        axi_b_resp_i      ,
    input  [AXI_ID_WIDTH-1:0]           axi_b_id_i        ,  //悬空
    input  [AXI_USER_WIDTH-1:0]         axi_b_user_i         //悬空
);

    // handshake
    wire aw_hs      = axi_aw_ready_i & axi_aw_valid_o;    //写地址握手
    wire w_hs       = axi_w_ready_i  & axi_w_valid_o;     //写数据握手
    wire b_hs       = axi_b_ready_o  & axi_b_valid_i;     //写响应握手
    wire w_done     = w_hs & axi_w_last_o;
reg [1:0] w_state;

//---------------------Wirte State Machine------------------ 
parameter [1:0] W_STATE_IDLE = 2'b00, W_STATE_ADDR = 2'b01, W_STATE_WRITE = 2'b10, W_STATE_RESP = 2'b11;
wire w_state_idle  = w_state == W_STATE_IDLE , w_state_addr = w_state == W_STATE_ADDR;
wire w_state_write = w_state == W_STATE_WRITE, w_state_resp = w_state == W_STATE_RESP;

    always @(posedge clk) begin
        if (rst) begin
            w_state <= W_STATE_IDLE;
        end
        else begin
            case (w_state)
                W_STATE_IDLE : if (wr_addr_valid_i) w_state <= W_STATE_ADDR;
                W_STATE_ADDR : if (aw_hs)           w_state <= W_STATE_WRITE;
                W_STATE_WRITE: if (w_done)          w_state <= W_STATE_RESP;
                W_STATE_RESP : if (b_hs)            w_state <= W_STATE_IDLE;
                default      :                      w_state <= W_STATE_IDLE;
            endcase
        end
    end
//---------------------------------------------------------
    parameter ALIGNED_WIDTH = $clog2(AXI_DATA_WIDTH / 8);
    parameter OFFSET_WIDTH  = $clog2(AXI_DATA_WIDTH);
    parameter AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);
    parameter MASK_WIDTH    = AXI_DATA_WIDTH * 2;
    parameter TRANS_LEN     = RW_DATA_WIDTH / AXI_DATA_WIDTH;
    parameter BLOCK_TRANS   = TRANS_LEN > 1 ? 1'b1 : 1'b0;

    wire aligned            = BLOCK_TRANS | wr_addr_i[ALIGNED_WIDTH-1:0] == 0;
    wire size_b             = wr_size_i[1:0] == `SIZE_B;
    wire size_h             = wr_size_i[1:0] == `SIZE_H;
    wire size_w             = wr_size_i[1:0] == `SIZE_W;
    wire size_d             = wr_size_i[1:0] == `SIZE_D;
    wire [3:0] addr_op1     = {{4-ALIGNED_WIDTH{1'b0}}, wr_addr_i[ALIGNED_WIDTH-1:0]};
    wire [3:0] addr_op2     = ({4{size_b}} & {4'b0})
                                | ({4{size_h}} & {4'b1})
                                | ({4{size_w}} & {4'b11})
                                | ({4{size_d}} & {4'b111})
                                ;
    wire [3:0] addr_end     = addr_op1 + addr_op2;
    wire       overstep     = addr_end[3:ALIGNED_WIDTH] != 0;

    wire [7:0] axi_len      = aligned ? TRANS_LEN - 1 : {{7{1'b0}}, overstep};
    wire [2:0] axi_size     = AXI_SIZE[2:0];
    
    wire [AXI_ADDR_WIDTH-1:0] axi_waddr           = {wr_addr_i[AXI_ADDR_WIDTH-1:ALIGNED_WIDTH], {ALIGNED_WIDTH{1'b0}}};
    wire  [2:0]  addr_yu;
    assign axi_aw_valid_o   = w_state_addr;
    assign axi_aw_addr_o    = axi_waddr;
    assign axi_aw_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;
    assign axi_aw_id_o      = 4'b0;     
    assign axi_aw_user_o    = 1'b0;     
    assign axi_aw_len_o     = axi_len;  
    assign axi_aw_size_o    = axi_size;
    assign axi_aw_burst_o   = `AXI_BURST_TYPE_INCR;
    assign axi_aw_lock_o    = 1'b0;
    assign axi_aw_cache_o   = `AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
    assign axi_aw_qos_o     = 4'h0;

    assign addr_yu          = wr_addr_i[2:0];

    always @(*)begin
        case(wr_size_i[1:0])         //注意 地址时序问题
            2'b00:   axi_w_strb_o = ({8{addr_yu==0}} & 8'b0000_0001)                                     //sb
                                   |({8{addr_yu==1}} & 8'b0000_0010)
                                   |({8{addr_yu==2}} & 8'b0000_0100)
                                   |({8{addr_yu==3}} & 8'b0000_1000)
                                   |({8{addr_yu==4}} & 8'b0001_0000)
                                   |({8{addr_yu==5}} & 8'b0010_0000)
                                   |({8{addr_yu==6}} & 8'b0100_0000)
                                   |({8{addr_yu==7}} & 8'b1000_0000);

            2'b01:   axi_w_strb_o = ({8{addr_yu==0}} & 8'b0000_0011)                                     //sh
                                   |({8{addr_yu==2}} & 8'b0000_1100)
                                   |({8{addr_yu==4}} & 8'b0011_0000)
                                   |({8{addr_yu==6}} & 8'b1100_0000);

            2'b10:   axi_w_strb_o = ({8{addr_yu==0}} & 8'b0000_1111)                                     //sw
                                   |({8{addr_yu==4}} & 8'b1111_0000);

            2'b11:   axi_w_strb_o = 8'b1111_1111;                                                        //sd
            default: axi_w_strb_o = 8'b1111_1111;                     
        endcase
    end                          

    assign axi_w_valid_o     = w_state == W_STATE_WRITE;
    assign axi_w_data_o      = wr_data_i << (addr_yu * 8);
    assign axi_w_last_o     = 1'b1;

    assign axi_b_ready_o     = w_state == W_STATE_RESP;
    assign wr_data_valid_o   = b_hs && (axi_b_resp_i == 1'b0);

endmodule
