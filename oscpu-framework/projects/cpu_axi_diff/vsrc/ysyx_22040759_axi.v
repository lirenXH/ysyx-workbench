
`include"./ysyx_22040759_define.v"

module ysyx_22040759_axi # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 64,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_USER_WIDTH    = 1
)(
    input                               clock,
    input                               reset,

    //to IF state
	input                               if_rw_valid_i,
	output                              if_rw_ready_o,
    input                               if_rw_req_i,    //只读
    output reg [RW_DATA_WIDTH:0]        if_data_read_o,
    input      [RW_DATA_WIDTH:0]        if_data_write_i,//没用
    input      [AXI_DATA_WIDTH:0]       if_rw_addr_i,
    input      [1:0]                    if_rw_size_i,
    output     [1:0]                    if_rw_resp_o,
    //to MEM state
    input                               mem_rw_valid_i,
	output                              mem_rw_ready_o,
    input                               mem_rw_req_i,
    output reg [RW_DATA_WIDTH:0]        mem_data_read_o,
    input      [RW_DATA_WIDTH:0]        mem_data_write_i,
    input      [AXI_DATA_WIDTH:0]       mem_rw_addr_i,
    input      [1:0]                    mem_rw_size_i,         //func3[1:0]
    output     [1:0]                    mem_rw_resp_o,
    
    // Advanced eXtensible Interface
    input                               axi_aw_ready_i,
    output                              axi_aw_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o,
    output [2:0]                        axi_aw_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_aw_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_aw_user_o,
    output [7:0]                        axi_aw_len_o,
    output [2:0]                        axi_aw_size_o,
    output [1:0]                        axi_aw_burst_o,
    output                              axi_aw_lock_o,
    output [3:0]                        axi_aw_cache_o,
    output [3:0]                        axi_aw_qos_o,
    output [3:0]                        axi_aw_region_o,

    input                               axi_w_ready_i,
    output                              axi_w_valid_o,
    output [AXI_DATA_WIDTH-1:0]         axi_w_data_o,
    output [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o,  //字节选通 1bit对应8bit
    output                              axi_w_last_o,
    output [AXI_USER_WIDTH-1:0]         axi_w_user_o,
    
    output                              axi_b_ready_o,
    input                               axi_b_valid_i,
    input  [1:0]                        axi_b_resp_i,
    input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,    //悬空
    input  [AXI_USER_WIDTH-1:0]         axi_b_user_i,  //悬空

    input                               axi_ar_ready_i,
    output                              axi_ar_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o,
    output [2:0]                        axi_ar_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_ar_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_ar_user_o,
    output [7:0]                        axi_ar_len_o,
    output [2:0]                        axi_ar_size_o,
    output [1:0]                        axi_ar_burst_o,
    output                              axi_ar_lock_o,
    output [3:0]                        axi_ar_cache_o,
    output [3:0]                        axi_ar_qos_o,
    output [3:0]                        axi_ar_region_o,
    
    output                              axi_r_ready_o,
    input                               axi_r_valid_i,
    input  [1:0]                        axi_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i,
    input                               axi_r_last_i,
    input  [AXI_ID_WIDTH-1:0]           axi_r_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_r_user_i
);

    wire if_w_trans    = if_rw_req_i == `REQ_WRITE;      //1      判断读写请求
    wire if_r_trans    = if_rw_req_i == `REQ_READ;       //0      始终为1     
    wire if_w_valid    = if_rw_valid_i & if_w_trans;     //写有效  （特化valid）
    wire if_r_valid    = if_rw_valid_i & if_r_trans;     //读有效   需要仲裁

    wire mem_w_trans   = mem_rw_req_i == `REQ_WRITE;      //1           
    wire mem_r_trans   = mem_rw_req_i == `REQ_READ;       //0        
    wire mem_w_valid   = mem_rw_valid_i & mem_w_trans;    //写有效  
    wire mem_r_valid   = mem_rw_valid_i & mem_r_trans;    //读有效     需要仲裁
    
    //-------------------Arbiter------------------------
    wire arbiter_en    = if_r_valid  &&  mem_r_valid ;
    wire [63:0]  rw_addr_i;
    wire [2 :0]  rw_size_i;    
    wire         r_valid;  
    ysyx_22040759_arbiter arbiter(
    .clk                    (clock),
    .rst                    (reset),

    .if_addr_valid          (if_r_valid),
    .if_rw_addr             (if_rw_addr),
    .if_data_valid_o        (),
    .if_data                (),

    .mem_addr_valid         (),
    .mem_rw_addr            (),
    .mem_data_valid_o       (),
    .mem_data               (),     
    
    .rd_addr_valid          (),
    .rd_addr                (),
    .rd_data_valid_i        (),
    .rd_data
     
    );
    // handshake
    wire aw_hs      = axi_aw_ready_i & axi_aw_valid_o;    //写地址握手
    wire w_hs       = axi_w_ready_i  & axi_w_valid_o;     //写数据握手
    wire b_hs       = axi_b_ready_o  & axi_b_valid_i;     //写响应握手
    wire ar_hs      = axi_ar_ready_i & axi_ar_valid_o;    //读地址握手
    wire r_hs       = axi_r_ready_o  & axi_r_valid_i;     //读数据握手

    wire w_done     = w_hs & axi_w_last_o;              //读完成
    wire r_done     = r_hs & axi_r_last_i;              //写完成
    wire trans_done = w_trans ? b_hs : r_done;          //事务完成

    
    // ------------------State Machine------------------
    parameter [1:0] W_STATE_IDLE = 2'b00, W_STATE_ADDR = 2'b01, W_STATE_WRITE = 2'b10, W_STATE_RESP = 2'b11;
    parameter [1:0] R_STATE_IDLE = 2'b00, R_STATE_ADDR = 2'b01, R_STATE_READ  = 2'b10, R_STATE_WAIT = 2'b11;

    reg [1:0] w_state, r_state;
    wire w_state_idle = w_state == W_STATE_IDLE, w_state_addr = w_state == W_STATE_ADDR, w_state_write = w_state == W_STATE_WRITE, w_state_resp = w_state == W_STATE_RESP;
    wire r_state_idle = r_state == R_STATE_IDLE, r_state_addr = r_state == R_STATE_ADDR, r_state_read  = r_state == R_STATE_READ , r_state_wait = r_state == R_STATE_WAIT;

    // Wirte State Machine
    always @(posedge clock) begin
        if (reset) begin
            w_state <= W_STATE_IDLE;
        end
        else begin
            if (mem_w_valid) begin
                case (w_state)
                    W_STATE_IDLE:               w_state <= W_STATE_ADDR;
                    W_STATE_ADDR:  if (aw_hs)   w_state <= W_STATE_WRITE;
                    W_STATE_WRITE: if (w_done)  w_state <= W_STATE_RESP;
                    W_STATE_RESP:  if (b_hs)    w_state <= W_STATE_IDLE;
                endcase
            end
        end
    end

    // Read State Machine
    always @(posedge clock) begin
        if (reset) begin
            r_state <= R_STATE_IDLE;
        end
        else begin
            if (r_valid) begin
                case (r_state)
                    R_STATE_IDLE:               r_state <= R_STATE_ADDR;
                    R_STATE_ADDR: if (ar_hs)    r_state <= R_STATE_READ;
                    R_STATE_READ: if (r_done)   r_state <= R_STATE_WAIT;
                    R_STATE_WAIT:               r_state <= R_STATE_IDLE;
                    default:;
                endcase
            end
        end
    end


    // ------------------Number of transmission------------------
    reg [7:0] len;
    wire len_reset      = reset | (w_trans & w_state_idle) | (r_trans & r_state_idle);//在idle下reset len
    wire len_incr_en    = (len != axi_len) & (w_hs | r_hs);
    always @(posedge clock) begin
        if (len_reset) begin
            len <= 0;
        end
        else if (len_incr_en) begin
            len <= len + 1;
        end
    end


    // ------------------Process Data------------------
    parameter ALIGNED_WIDTH = $clog2(AXI_DATA_WIDTH / 8);
    parameter OFFSET_WIDTH  = $clog2(AXI_DATA_WIDTH);
    parameter AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);
    parameter MASK_WIDTH    = AXI_DATA_WIDTH * 2;
    parameter TRANS_LEN     = RW_DATA_WIDTH / AXI_DATA_WIDTH;
    parameter BLOCK_TRANS   = TRANS_LEN > 1 ? 1'b1 : 1'b0;

    wire aligned            = BLOCK_TRANS | rw_addr_i[ALIGNED_WIDTH-1:0] == 0;
    wire size_b             = rw_size_i == `SIZE_B;
    wire size_h             = rw_size_i == `SIZE_H;
    wire size_w             = rw_size_i == `SIZE_W;
    wire size_d             = rw_size_i == `SIZE_D;
    wire [3:0] addr_op1     = {{4-ALIGNED_WIDTH{1'b0}}, rw_addr_i[ALIGNED_WIDTH-1:0]};
    wire [3:0] addr_op2     = ({4{size_b}} & {4'b0})
                                | ({4{size_h}} & {4'b1})
                                | ({4{size_w}} & {4'b11})
                                | ({4{size_d}} & {4'b111})
                                ;
    wire [3:0] addr_end     = addr_op1 + addr_op2;
    wire       overstep     = addr_end[3:ALIGNED_WIDTH] != 0;

    wire [7:0] axi_len      = aligned ? TRANS_LEN - 1 : {{7{1'b0}}, overstep};
    wire [2:0] axi_size     = AXI_SIZE[2:0];
    
    wire [AXI_ADDR_WIDTH-1:0] axi_raddr           = {rw_addr_i[AXI_ADDR_WIDTH-1:ALIGNED_WIDTH], {ALIGNED_WIDTH{1'b0}}};
    wire [AXI_ADDR_WIDTH-1:0] axi_waddr           = {rw_addr_i[AXI_ADDR_WIDTH-1:ALIGNED_WIDTH], {ALIGNED_WIDTH{1'b0}}};
    wire [OFFSET_WIDTH-1:0]   aligned_offset_l    = {{OFFSET_WIDTH-ALIGNED_WIDTH{1'b0}}, {rw_addr_i[ALIGNED_WIDTH-1:0]}} << 3;
    wire [OFFSET_WIDTH-1:0]   aligned_offset_h    = AXI_DATA_WIDTH - aligned_offset_l;
    wire [MASK_WIDTH-1:0]     mask                = (({MASK_WIDTH{size_b}} & {{MASK_WIDTH-8{1'b0}} , 8'hff})
                                                   | ({MASK_WIDTH{size_h}} & {{MASK_WIDTH-16{1'b0}}, 16'hffff})
                                                   | ({MASK_WIDTH{size_w}} & {{MASK_WIDTH-32{1'b0}}, 32'hffffffff})
                                                   | ({MASK_WIDTH{size_d}} & {{MASK_WIDTH-64{1'b0}}, 64'hffffffff_ffffffff})
                                                   ) << aligned_offset_l;                                           
    wire [AXI_DATA_WIDTH-1:0] mask_l            = mask[AXI_DATA_WIDTH-1:0];
    wire [AXI_DATA_WIDTH-1:0] mask_h            = mask[MASK_WIDTH-1:AXI_DATA_WIDTH];

    wire [AXI_ID_WIDTH-1:0]   axi_id            = {AXI_ID_WIDTH{1'b0}};
    wire [AXI_USER_WIDTH-1:0] axi_user          = {AXI_USER_WIDTH{1'b0}};

    reg rw_ready;
    wire rw_ready_nxt = trans_done;
    wire rw_ready_en      = trans_done | rw_ready;
    always @(posedge clock) begin
        if (reset) begin
            rw_ready <= 0;
        end
        else if (rw_ready_en) begin
            rw_ready <= rw_ready_nxt;
        end
    end
    assign if_rw_ready_o     = rw_ready;

    //-----------------Read and Write Resp------------------
    reg [1:0] rw_resp;
    wire rw_resp_nxt = w_trans ? axi_b_resp_i : axi_r_resp_i;
    wire resp_en = trans_done;
    always @(posedge clock) begin
        if (reset) begin
            rw_resp <= 0;
        end
        else if (resp_en) begin
            rw_resp <= rw_resp_nxt;
        end
    end
    assign rw_resp_o      = rw_resp;//两份？


    // ------------------Write Transaction------------------
    wire  [2:0]  data_yu
    assign axi_aw_valid_o   = w_state_addr;
    assign axi_aw_addr_o    = axi_waddr;
    assign axi_aw_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;
    assign axi_aw_id_o      = axi_id;       //0 读写共用
    assign axi_aw_user_o    = axi_user;     //0 读写共用
    assign axi_aw_len_o     = axi_len;      //  读写共用
    assign axi_aw_size_o    = mem_rw_size_i;
    assign axi_aw_burst_o   = `AXI_BURST_TYPE_INCR;
    assign axi_aw_lock_o    = 1'b0;
    assign axi_aw_cache_o   = `AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
    assign axi_aw_qos_o     = 4'h0;

    assign axi_w_last_o     = 1'b1;
    assign data_yu          = rw_addr_temp[2:0];
    reg   [63:0] rw_addr_temp;  //地址打一拍 得到strb
    
    always @(*)begin
        case(mem_rw_size_i)         //注意 地址时序问题
            2'b00:   axi_w_strb_o = ({8{data_yu==0}} & 8'b0000_0001)                                     //sb
                                   |({8{data_yu==1}} & 8'b0000_0010)
                                   |({8{data_yu==2}} & 8'b0000_0100)
                                   |({8{data_yu==3}} & 8'b0000_1000)
                                   |({8{data_yu==4}} & 8'b0001_0000)
                                   |({8{data_yu==5}} & 8'b0010_0000)
                                   |({8{data_yu==6}} & 8'b0100_0000)
                                   |({8{data_yu==7}} & 8'b1000_0000);

            2'b01:   axi_w_strb_o = ({8{data_yu==0}} & 8'b0000_0011)                                     //sh
                                   |({8{data_yu==2}} & 8'b0000_1100)
                                   |({8{data_yu==4}} & 8'b0011_0000)
                                   |({8{data_yu==6}} & 8'b1100_0000);

            2'b10:   axi_w_strb_o = ({8{data_yu==0}} & 8'b0000_1111)                                     //sw
                                   |({8{data_yu==4}} & 8'b1111_0000);

            2'b11:   axi_w_strb_o = 8'b1111_1111;                                                        //sd
            default: axi_w_strb_o = 8'b1111_1111;                     
        endcase
    end                                          

    // Write data channel signals
    assign axi_w_valid_o    = w_state_write;
    reg [63:0] axi_w_data_temp;
    generate
        for (genvar i = 0; i < TRANS_LEN; i += 1) begin
            always @(posedge clock) begin
                if (reset) begin
                    axi_w_data_o    <= 64'b0;
                    rw_addr_temp    <= 64'b0;
                end
                else if (axi_w_ready_i & axi_w_valid_o) begin 
                    axi_w_data_o    <= axi_w_data_temp;
                end
                else begin
                    axi_w_data_temp <= mem_data_write_i;
                    rw_addr_temp    <= rw_addr_i;
                end
            end
        end
    endgenerate
    
    assign axi_b_ready_o    = w_state_resp;
    // ------------------Read Transaction------------------  读数据注意有无符号

    // Read address channel signals
    assign axi_ar_valid_o   = r_state_addr;
    assign axi_ar_addr_o    =  ;
    assign axi_ar_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;
    assign axi_ar_id_o      = axi_id;
    assign axi_ar_user_o    = axi_user;
    assign axi_ar_len_o     = axi_len;
    assign axi_ar_size_o    = axi_size;
    assign axi_ar_burst_o   = `AXI_BURST_TYPE_INCR;
    assign axi_ar_lock_o    = 1'b0;
    assign axi_ar_cache_o   = `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
    assign axi_ar_qos_o     = 4'h0;

    // Read data channel signals
    assign axi_r_ready_o    = r_state_read;

    wire [AXI_DATA_WIDTH-1:0] axi_r_data_l  = (axi_r_data_i & mask_l) >> aligned_offset_l;
    wire [AXI_DATA_WIDTH-1:0] axi_r_data_h  = (axi_r_data_i & mask_h) << aligned_offset_h;

    generate
        for (genvar i = 0; i < TRANS_LEN; i += 1) begin
            always @(posedge clock) begin
                if (reset) begin
                    data_read_o[i*AXI_DATA_WIDTH+:AXI_DATA_WIDTH] <= 0;
                end
                else if (axi_r_ready_o & axi_r_valid_i) begin
                    if (~aligned & overstep) begin
                        if (len[0]) begin
                            data_read_o[AXI_DATA_WIDTH-1:0] <= data_read_o[AXI_DATA_WIDTH-1:0] | axi_r_data_h;
                        end
                        else begin
                            data_read_o[AXI_DATA_WIDTH-1:0] <= axi_r_data_l;
                        end
                    end
                    else if (len == i) begin
                        data_read_o[i*AXI_DATA_WIDTH+:AXI_DATA_WIDTH] <= axi_r_data_l;
                    end
                end
            end
        end
    endgenerate

endmodule
