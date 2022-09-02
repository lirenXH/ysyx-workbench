`include"./ysyx_22040759_define.v"
module rdAXI(
  input clk,
  input rst,

  input  rd_addr_valid_i,
  input  [`ADDR_W-1:0]rd_addr_i,
  output rd_data_valid_o,
  output [127:0]rd_data_o,

  input                               axi_ar_ready     ,
  output                              axi_ar_valid     ,
  output [`AXI_ADDR_WIDTH-1:0]        axi_ar_bits_addr ,
  output [2:0]                        axi_ar_bits_prot ,
  output [`AXI_ID_WIDTH-1:0]          axi_ar_bits_id   ,
  output [`AXI_USER_WIDTH-1:0]        axi_ar_bits_user ,
  output [7:0]                        axi_ar_bits_len  ,
  output [2:0]                        axi_ar_bits_size ,
  output [1:0]                        axi_ar_bits_burst,
  output                              axi_ar_bits_lock ,
  output [3:0]                        axi_ar_bits_cache,
  output [3:0]                        axi_ar_bits_qos  ,

  output                              axi_r_ready      ,
  input                               axi_r_valid      ,
  input  [1:0]                        axi_r_bits_resp  ,
  input  [`AXI_DATA_WIDTH-1:0]        axi_r_bits_data  ,
  input                               axi_r_bits_last  ,
  input  [`AXI_ID_WIDTH-1:0]          axi_r_bits_id    ,
  input  [`AXI_USER_WIDTH-1:0]        axi_r_bits_user  
);

ar_hs = axi_ar_ready && axi_ar_valid;
r_hs  = axi_r_ready  && axi_r_valid;

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

// ------------------Read Transaction------------------  读数据注意有无符号

wire [63:0] axi_raddr           = {rd_addr_i[63:3], 3'b0};///?????



    assign axi_ar_valid_o   = r_state_addr;
    assign axi_ar_addr_o    = axi_raddr;
    assign axi_ar_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;
    assign axi_ar_id_o      = 4'b0;
    assign axi_ar_user_o    = 1'b0;
    assign axi_ar_len_o     = axi_len;
    assign axi_ar_size_o    = axi_size;
    assign axi_ar_burst_o   = `AXI_BURST_TYPE_INCR;
    assign axi_ar_lock_o    = 1'b0;
    assign axi_ar_cache_o   = `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
    assign axi_ar_qos_o     = 4'h0;
    assign axi_r_ready_o    = r_state_read;


endmodule