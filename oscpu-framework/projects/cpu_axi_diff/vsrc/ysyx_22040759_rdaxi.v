`include"./ysyx_22040759_define.v"
module ysyx_22040759_rdaxi # (
    parameter RD_DATA_WIDTH     = 64,
    parameter RD_ADDR_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 64,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_USER_WIDTH    = 1
)(
    input                               clk             ,
    input                               rst             ,
    //from arbiter
    input                               rd_addr_valid_i,
    input      [AXI_ADDR_WIDTH:0]       rd_addr_i       ,
    input      [1:0]                    rd_size_i       ,
    output                              rd_data_valid_o ,             //ready
    output reg [63:0]                   data_read_o     ,       
    //ar
    input                               axi_ar_ready_i  ,
    output                              axi_ar_valid_o  ,
    output [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o   ,
    output [2:0]                        axi_ar_prot_o   ,
    output [AXI_ID_WIDTH-1:0]           axi_ar_id_o     ,
    output [AXI_USER_WIDTH-1:0]         axi_ar_user_o   ,
    output [7:0]                        axi_ar_len_o    ,
    output [2:0]                        axi_ar_size_o   ,
    output [1:0]                        axi_ar_burst_o  ,
    output                              axi_ar_lock_o   ,
    output [3:0]                        axi_ar_cache_o  ,
    output [3:0]                        axi_ar_qos_o    ,
    //r
    output                              axi_r_ready_o   ,
    input                               axi_r_valid_i   ,
    input  [1:0]                        axi_r_resp_i    ,   //悬空
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i    ,
    input                               axi_r_last_i    ,
    input  [AXI_ID_WIDTH-1:0]           axi_r_id_i      ,   //悬空
    input  [AXI_USER_WIDTH-1:0]         axi_r_user_i        //悬空
);

wire  ar_hs = axi_ar_ready_i && axi_ar_valid_o;
wire  r_hs  = axi_r_ready_o && axi_r_valid_i;

reg [1:0] r_state;

parameter [1:0] R_STATE_IDLE = 2'b00, R_STATE_ADDR = 2'b01, R_STATE_READ  = 2'b10, R_STATE_WAIT = 2'b11;
wire  r_state_idle = r_state == R_STATE_IDLE , r_state_addr = r_state == R_STATE_ADDR;
wire  r_state_read = r_state == R_STATE_READ , r_state_wait = r_state == R_STATE_WAIT;
always @(posedge clk) begin
        if (rst)
            r_state <= R_STATE_IDLE;
        else begin
            case (r_state)
                R_STATE_IDLE: if (rd_addr_valid_i)  r_state <= R_STATE_ADDR;
                R_STATE_ADDR: if (ar_hs)            r_state <= R_STATE_READ;
                R_STATE_READ: if (r_hs)             r_state <= R_STATE_WAIT;
                R_STATE_WAIT:                       r_state <= R_STATE_IDLE;
                default:                            r_state <= R_STATE_IDLE;
            endcase
        end
    end


// ------------------Number of transmission------------------
reg [7:0] len;
wire len_rst      = rst | (w_trans & w_state_idle) | (r_trans & r_state_idle);//在idle下rst len
wire len_incr_en    = (len != axi_len) & (w_hs | r_hs);
    always @(posedge clk) begin
        if (len_rst) begin
            len <= 0;
        end
        else if (len_incr_en) begin
            len <= len + 1;
        end
    end

///
    parameter ALIGNED_WIDTH = $clog2(AXI_DATA_WIDTH / 8);
    parameter OFFSET_WIDTH  = $clog2(AXI_DATA_WIDTH);
    parameter AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);
    parameter MASK_WIDTH    = AXI_DATA_WIDTH * 2;
    parameter TRANS_LEN     = RD_DATA_WIDTH / AXI_DATA_WIDTH;
    parameter BLOCK_TRANS   = TRANS_LEN > 1 ? 1'b1 : 1'b0;

    wire aligned            = BLOCK_TRANS | rd_addr_i[ALIGNED_WIDTH-1:0] == 0;
    wire size_b             = rd_size_i == `SIZE_B;
    wire size_h             = rd_size_i == `SIZE_H;
    wire size_w             = rd_size_i == `SIZE_W;
    wire size_d             = rd_size_i == `SIZE_D;
    wire [3:0] addr_op1     = {{4-ALIGNED_WIDTH{1'b0}}, rd_addr_i[ALIGNED_WIDTH-1:0]};
    wire [3:0] addr_op2     = ({4{size_b}} & {4'b0})
                                | ({4{size_h}} & {4'b1})
                                | ({4{size_w}} & {4'b11})
                                | ({4{size_d}} & {4'b111})
                                ;
    wire [3:0] addr_end     = addr_op1 + addr_op2;
    wire       overstep     = addr_end[3:ALIGNED_WIDTH] != 0;

    wire [7:0] axi_len      = aligned ? TRANS_LEN - 1 : {{7{1'b0}}, overstep};
    wire [2:0] axi_size     = AXI_SIZE[2:0];
    
    wire [AXI_ADDR_WIDTH-1:0] axi_raddr           = {rd_addr_i[AXI_ADDR_WIDTH-1:ALIGNED_WIDTH], {ALIGNED_WIDTH{1'b0}}};
    wire [OFFSET_WIDTH-1:0]   aligned_offset_l    = {{OFFSET_WIDTH-ALIGNED_WIDTH{1'b0}}, {rd_addr_i[ALIGNED_WIDTH-1:0]}} << 3;
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

// ------------------Read Transaction------------------  读数据注意有无符号
 // Read address channel signals
    assign axi_ar_valid_o   = r_state_addr;
    assign axi_ar_addr_o    = axi_raddr;
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
            always @(posedge clk) begin
                if (rst) begin
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

reg data_ok;
    always@(posedge clk)begin
      if(rst)
        data_ok <= 1'b0;
      else if(r_hs && axi_r_last_i)
        data_ok <= 1'b1;
      else
        data_ok <= 1'b0;
    end

assign rd_data_valid_o = data_ok ;

endmodule
