
`include"./ysyx_22040759_define.v"

module ysyx_22040759_axi # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_USER_WIDTH    = 1
)(
    input                               clock,
    input                               reset,

    //to i-cache
    input                               icache_addr_valid_i ,
    input    [AXI_ADDR_WIDTH-1:0]       icache_rd_addr_i    ,
    output                              icache_data_valid_o ,
    output   [63:0]                     icache_data_o       ,
    //to MEM state              
    input                               mem_addr_valid_i,
    input                               mem_wen_i       ,
    input    [AXI_ADDR_WIDTH-1:0]       mem_addr_i      ,
    input    [2:0]                      mem_size_i      ,
    input    [63:0]                     mem_wdata_i     ,
    output                              ram_data_valid_o,
    output   [63:0]                     ram_rdata_o     , 
    
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
wire                            mem_rd_addr_valid;
wire  [AXI_ADDR_WIDTH-1:0]      mem_rd_addr      ;
wire  [2:0]                     mem_rd_size      ;
wire                            mem_rd_data_valid;
wire  [63:0]                    mem_rd_data      ;

wire                            rd_addr_valid;
wire  [AXI_ADDR_WIDTH-1:0]      rd_addr      ;
wire  [2:0]                     rd_size      ;
wire                            rd_data_valid;
wire  [63:0]                    rd_data      ;

wire                            mem_wr_addr_valid;
wire  [AXI_ADDR_WIDTH-1:0]      mem_wr_addr      ;
wire  [2:0]                     mem_wr_size      ;
wire  [63:0]                    mem_wr_data      ;
wire                            mem_wr_data_valid;

//------------------reqDispute----------------------
    ysyx_22040759_reqDispute reqDispute(
    //request                                           npc to req
    .mem_addr_valid_i            (mem_addr_valid_i), 
    .mem_wen_i                   (mem_wen_i       ),
    .mem_addr_i                  (mem_addr_i      ),
    .mem_wdata_i                 (mem_wdata_i     ),
    .mem_size_i                  (mem_size_i      ),
    .ram_data_valid_o            (ram_data_valid_o),
    .ram_rdata_o                 (ram_rdata_o     ),
    //read                                              req to arbiter
    .mem_rd_addr_valid_o         (mem_rd_addr_valid),
    .mem_rd_addr_o               (mem_rd_addr      ),
    .mem_rd_size_o               (mem_rd_size      ),
    .mem_rd_data_valid_i         (mem_rd_data_valid),
    .mem_rd_data_i               (mem_rd_data      ),
    //write                                             req to wraxi
    .mem_wr_addr_valid_o         (mem_wr_addr_valid),
    .mem_wr_addr_o               (mem_wr_addr      ),
    .mem_wr_size_o               (mem_wr_size      ),
    .mem_wr_data_o               (mem_wr_data      ),
    .mem_wr_data_valid_i         (mem_wr_data_valid)
    );

//-------------------Arbiter------------------------
    ysyx_22040759_arbiter arbiter(
    .clk                         (clock),
    .rst                         (reset),
    //from icache                                           npc to arbiter
    .icache_addr_valid_i          (icache_addr_valid_i),
    .icache_rd_addr_i             (icache_rd_addr_i   ),
    .icache_data_valid_o          (icache_data_valid_o),
    .icache_data_o                (icache_data_o      ),
    //from reqDispute mem                               req to arbiter
    .mem_rd_addr_valid_i         (mem_rd_addr_valid),
    .mem_rd_addr_i               (mem_rd_addr      ),
    .mem_rd_size_i               (mem_rd_size      ),
    .mem_rd_data_valid_o         (mem_rd_data_valid),
    .mem_rd_data_o               (mem_rd_data      ),     
    //to rdaxi                                          arbiter to rdaxi
    .rd_addr_valid_o             (rd_addr_valid),
    .rd_addr_o                   (rd_addr      ),
    .rd_size_o                   (rd_size      ),
    .rd_data_valid_i             (rd_data_valid),
    .rd_data_i                   (rd_data      )             
    );
    
//------------------rdaxi----------------------

    ysyx_22040759_rdaxi rdaxi(
        .clk                     (clock),
        .rst                     (reset),
        //from arbiter
        .rd_addr_valid_i         (rd_addr_valid),
        .rd_addr_i               (rd_addr      ),
        .rd_size_i               (rd_size      ),
        .rd_data_valid_o         (rd_data_valid),   //ready
        .rdaxi_data_o            (rd_data      ),       
        //ar
        .axi_ar_ready_i          (axi_ar_ready_i),
        .axi_ar_valid_o          (axi_ar_valid_o),
        .axi_ar_addr_o           (axi_ar_addr_o ),
        .axi_ar_prot_o           (axi_ar_prot_o ),
        .axi_ar_id_o             (axi_ar_id_o   ),
        .axi_ar_user_o           (axi_ar_user_o ),
        .axi_ar_len_o            (axi_ar_len_o  ),
        .axi_ar_size_o           (axi_ar_size_o ),
        .axi_ar_burst_o          (axi_ar_burst_o),
        .axi_ar_lock_o           (axi_ar_lock_o ),
        .axi_ar_cache_o          (axi_ar_cache_o),
        .axi_ar_qos_o            (axi_ar_qos_o  ),
        //r
        .axi_r_ready_o           (axi_r_ready_o),
        .axi_r_valid_i           (axi_r_valid_i),
        .axi_r_resp_i            (axi_r_resp_i ),   //悬空
        .axi_r_data_i            (axi_r_data_i ),
        .axi_r_last_i            (axi_r_last_i ),
        .axi_r_id_i              (axi_r_id_i   ),   //悬空
        .axi_r_user_i            (axi_r_user_i )    //悬空
    );

//------------------wraxi----------------------

    ysyx_22040759_wraxi wraxi(
        .clk                     (clock),
        .rst                     (reset),
         
        .wr_addr_valid_i         (mem_wr_addr_valid),
        .wr_addr_i               (mem_wr_addr      ),
        .wr_size_i               (mem_wr_size      ),
        .wr_data_valid_o         (mem_wr_data_valid),
        .wr_data_i               (mem_wr_data      ),  
         
        .axi_aw_ready_i          (axi_aw_ready_i),
        .axi_aw_valid_o          (axi_aw_valid_o),
        .axi_aw_addr_o           (axi_aw_addr_o ),
        .axi_aw_prot_o           (axi_aw_prot_o ),
        .axi_aw_id_o             (axi_aw_id_o   ),
        .axi_aw_user_o           (axi_aw_user_o ),
        .axi_aw_len_o            (axi_aw_len_o  ),
        .axi_aw_size_o           (axi_aw_size_o ),
        .axi_aw_burst_o          (axi_aw_burst_o),
        .axi_aw_lock_o           (axi_aw_lock_o ),
        .axi_aw_cache_o          (axi_aw_cache_o),
        .axi_aw_qos_o            (axi_aw_qos_o  ),
         
        .axi_w_ready_i           (axi_w_ready_i),
        .axi_w_valid_o           (axi_w_valid_o),
        .axi_w_data_o            (axi_w_data_o ),
        .axi_w_strb_o            (axi_w_strb_o ),  //字节选通
        .axi_w_last_o            (axi_w_last_o ),
         
        .axi_b_ready_o           (axi_b_ready_o),
        .axi_b_valid_i           (axi_b_valid_i),
        .axi_b_resp_i            (axi_b_resp_i ),
        .axi_b_id_i              (axi_b_id_i   ),  //悬空
        .axi_b_user_i            (axi_b_user_i )   //悬空
    );

endmodule
