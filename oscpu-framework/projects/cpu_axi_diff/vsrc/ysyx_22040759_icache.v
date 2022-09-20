`include"./ysyx_22040759_define.v"

//cache
`define TAG 31:11		// position of tag in icache_addr
`define INDEX 10:3		// position of index in address
`define OFFSET 2:0	

module ysyx_22040759_icache#(
  parameter NWAYS = 2,			//两路组相联
  parameter NSETS = 256,		//cache set 数量
  parameter MWIDTH = 64,		// same as block size  内存数据位宽
  parameter INDEX_WIDTH = 8,	//index位宽
  parameter TAG_WIDTH = 21		//tag位宽
)(
    input           clk              ,
    input           rst              ,
    //to or from if
    input  [31:0]   icache_addr      ,      //cache读地址
    input           icache_ren       ,      //一直为1
    output [63:0]   icache_if_data_o ,      //所取指令
    output  reg     icache_if_ready  ,
    //to or from ram
    input  [63:0]   ram_icache_rdata ,      //ram回填数据
    input           icache_data_valid,      //回填数据有效
    output [31:0]   icache_ram_raddr ,      //读ram地址
    output          icache_ram_ren          //不一定为1
);

// 对物理地址 8000_0000 以上的地址缓存 以下地址为外设
// addr 32  -> |外设位 1bit| Tag 21bit | index 6bit | word 2bit | Byte 2bit  
// Meta | V 1 | TAG 21 |  D 1
reg       meta0V   [0:63];
reg       meta1V   [0:63];
reg       meta2V   [0:63];
reg       meta3V   [0:63];
reg [22:0]meta0Tag [0:63];
reg [22:0]meta1Tag [0:63];
reg [22:0]meta2Tag [0:63];
reg [22:0]meta3Tag [0:63];
reg [2:0] plru[0:63];
// Data 
wire [127:0]sram_dout [3:0];
wire refill_bypass;
// 查询路径
wire [5:0] index = icache_addr[8:3];
wire [3:0]hit_vector;
// 命中逻辑 meta中的entry有效 且 tag比较成功
assign hit_vector[0]  = meta0V[index] && (meta0Tag[index] == icache_addr[31:9]);
assign hit_vector[1]  = meta1V[index] && (meta1Tag[index] == icache_addr[31:9]);
assign hit_vector[2]  = meta2V[index] && (meta2Tag[index] == icache_addr[31:9]);
assign hit_vector[3]  = meta3V[index] && (meta3Tag[index] == icache_addr[31:9]);
wire hit = |hit_vector;

// 根据命中的way选择相应的数据
wire [127:0] out_data = ({128{hit_vector[0]}} & sram_dout[0] )| 
                        ({128{hit_vector[1]}} & sram_dout[1] )| 
                        ({128{hit_vector[2]}} & sram_dout[2] )| 
                        ({128{hit_vector[3]}} & sram_dout[3] );
// 根据地址选择最终输出的64bit数据
//assign icache_if_data_o = icache_addr[3:2] ? out_data[127:64] : out_data[63:0];
assign icache_if_data_o = ({64{icache_addr[3:2] == 2'b00 }} & {32'b0,out_data[31 :0 ]})
                        | ({64{icache_addr[3:2] == 2'b01 }} & {32'b0,out_data[63 :32]})
                        | ({64{icache_addr[3:2] == 2'b10 }} & {32'b0,out_data[95 :64]})
                        | ({64{icache_addr[3:2] == 2'b11 }} & {32'b0,out_data[127:96]});
reg hitR;
always@(posedge clk)begin
  if(rst)
    hitR <= 1'b0;
  else if(hit && icache_ren)
    hitR <= 1'b1;
  else
    hitR <= 1'b0;
end

//assign icache_if_ready = hitR && icache_ren;
// 写命中信号处理
wire  hit_wen           = 1'b0;
wire [127:0] hit_wmask  = 128'd0;
wire [127:0] hit_wdata  = 128'd0;

//替换
wire [3:0] invalid_victor = ~{meta0V[index],meta1V[index],meta2V[index],meta3V[index]};
wire invalid = |invalid_victor;
// PLRU 
wire [3:0] plru_way = { ~plru[index][2] & ~plru[index][1] ,
                        ~plru[index][2] &  plru[index][1] ,
                         plru[index][2] & ~plru[index][0] ,
                         plru[index][2] &  plru[index][0] };

wire [3:0] dec_way = invalid ? invalid_victor : plru_way;

// 找出第一个1
reg [3:0]replace_way ;
always@(*)begin
  replace_way = 4'b1000;
  if(dec_way[0]) replace_way = 4'b1000;
  if(dec_way[1]) replace_way = 4'b0100;
  if(dec_way[2]) replace_way = 4'b0010;
  if(dec_way[3]) replace_way = 4'b0001;
end
parameter IDLE    = 2'b00,
          HIT     = 2'b01,
          READ    = 2'b10,
          REFILL  = 2'b11;

reg  [1:0] cur_state;
reg  [1:0] nxt_state;
always@(posedge clk)begin
  if(rst)
    cur_state <= IDLE;
  else 
    cur_state <= nxt_state;
end
wire miss  = ~hit & icache_ren;  //地址有效且未命中
// find replace tag
wire [20:0]replaceWaddr = ({21{replace_way[0]}} & meta0Tag[index] ) |
                          ({21{replace_way[1]}} & meta1Tag[index] ) |
                          ({21{replace_way[2]}} & meta2Tag[index] ) |
                          ({21{replace_way[3]}} & meta3Tag[index] ) ;

always@(*)begin
    icache_if_ready = 1'b0;
    case(cur_state)
        IDLE:begin
            if(hitR)begin
                icache_if_ready = 1'b1;
                nxt_state = HIT;
            end
            else if(miss) 
                nxt_state = READ;
            else
                nxt_state = IDLE;
        end
        HIT:begin
            icache_if_ready = 1'b0;
            nxt_state = IDLE;
        end
        READ:begin
            if(icache_data_valid) 
                nxt_state = REFILL;
            else
                nxt_state = READ;
        end
        REFILL:begin
            nxt_state = IDLE;
        end
        default:
            nxt_state = IDLE;
    endcase
end
// 操作内存信号逻辑
assign icache_ram_ren    = (cur_state == READ)  ;     //内存读使能信号
assign icache_ram_raddr  = (cur_state == READ)  ? {icache_addr[31:3],3'd0} :'d0;// 128bit 对齐
assign refill_bypass     = (cur_state == REFILL);
function UpdatePlru;
  input [3:0] sel;
  input [2:0] plruVal;
  begin
    UpdatePlru = sel[0] ? {1'b1 , 1'b1 ,  plruVal[0]} :
                 sel[1] ? {1'b1 , 1'b0 ,  plruVal[0]} :
                 sel[2] ? {1'b0 , plruVal[1] ,  1'b1} :
                 sel[3] ? {1'b0 , plruVal[1] ,  1'b0} : plruVal;
  end
endfunction
// write meta
genvar i ;
generate 
  for(i=0;i<64;i=i+1)begin//  !!! 64?
    always@(posedge clk) //lru
        if(rst)begin
          plru[i] <= 'd0; 
        end
        else if((index == i))begin
          if(refill_bypass)
            plru[i] <= UpdatePlru(replace_way,plru[i]);
          else if(hitR)
            plru[i] <= UpdatePlru(hit_vector,plru[i]);
        end 
    
    always@(posedge clk)  //valid
      if(rst)begin
        meta0V[i] <= 'd0;
        meta1V[i] <= 'd0;
        meta2V[i] <= 'd0;
        meta3V[i] <= 'd0;
      end else if((cur_state == REFILL) && (index == i))begin // refill 时 把替换的路valid置一 其他路不变
        meta0V[i] <= replace_way[0] | meta0V[i];
        meta1V[i] <= replace_way[1] | meta1V[i];
        meta2V[i] <= replace_way[2] | meta2V[i];
        meta3V[i] <= replace_way[3] | meta3V[i];
      end

    always@(posedge clk) //tag
      if(rst)begin
        meta0Tag[i] <= 'd0;
        meta1Tag[i] <= 'd0;
        meta2Tag[i] <= 'd0;
        meta3Tag[i] <= 'd0;
      end else if((cur_state == REFILL) && (index == i))begin  // refill 时 写入tag信息
        if(replace_way[0])  meta0Tag[i] <= icache_addr[31:9];
        if(replace_way[1])  meta1Tag[i] <= icache_addr[31:9];
        if(replace_way[2])  meta2Tag[i] <= icache_addr[31:9];
        if(replace_way[3])  meta3Tag[i] <= icache_addr[31:9];
      end 
  end
endgenerate
// sram 信号的控制逻辑
wire sram_wen [3:0];
wire [5:0]   sram_addr [3:0];
wire [127:0] sram_wmask [3:0];
wire [127:0] sram_din [3:0];
generate
  for(i=0;i<4;i=i+1)begin
    // 1. refill 并且为替换路时 
    assign sram_wen[i]   = (cur_state == REFILL) && replace_way[i];
    // 下面三个是数据信号 不需要像wen那么精细的控制 只要 区分 refill 写 和 命中写即可
    // addr 要根据invalidate 状态机选择相应的控制通路
    assign sram_addr[i]  = icache_addr[9:4];
    assign sram_din[i]   = icache_addr[3] ? {ram_icache_rdata,64'b0} : {64'b0,ram_icache_rdata};
    assign sram_wmask[i] = icache_addr[3] ? {64'b0,~64'b0} : {~64'b0,64'b0} ;
    SRAM sram(
    .clk(clk),
    .cs (1),
    .wen(sram_wen[i]),
    .mask(sram_wmask[i]),
    .addr(sram_addr[i]),
    .din(sram_din[i]),
    .dout(sram_dout[i])
    );
  end
endgenerate

endmodule
