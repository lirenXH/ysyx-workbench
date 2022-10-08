`include"./ysyx_22040759_define.v"
module ysyx_22040759_dcache (
  input clk,
  input rst,
  input invalidate, // 刷新meta中的有效位
  //from or to MEM
  input               mem_dcache_valid       ,  //1请求 
  input [31:0]        mem_dcache_addr        ,  //1地址
  input               mem_dcache_req         ,  //1写使能
  input               lsu_dcache_invalidate_i,  //先置零    !!  
  input [63:0]        mem_dcache_data_write  ,  //1写数据
  input [2:0]         mem_dcache_size        ,  //
  output[63:0]        dcache_mem_data_read   ,  //1读数据
  output              dcache_mem_ready       ,  //1ready
  //output              load_hit               ,
  //from or to AXI
  output              dcache_ram_valid       ,  //1访存地址有效
  output              dcache_ram_req         ,  //1访存写使能
  output[31:0]        dcache_ram_addr        ,  //1访存地址
  output[63:0]        dcache_ram_data_write  ,  //1访存写数据
  output[2:0]         dcache_ram_size        ,  //1读写数据大小         
  input               ram_dcache_ready       ,  //1访存数据有效
  input [63:0]        ram_dcache_data_read      //1回填数据
);
wire [127:0] ram_dcache_data_read_temp = mem_dcache_addr[3] ? {ram_dcache_data_read,64'd0} : {64'd0,ram_dcache_data_read};
wire flushUse;
wire flush_addr_valid;
wire flush_wen;
wire [31:0] flush_addr;
wire [63:0] flush_wdata;
wire [127:0] temp_flush_wdata;
wire flush_resp_valid;
wire needWB;
wire curMetaV;
wire curMetaD;
wire [22:0] curMetaTag;
wire [127:0] curData;
reg  [2:0] cur_flush_state;
reg  [2:0] nxt_flush_state;
reg  [6+2:0] flushCnt; // ways2 + index6
wire [1:0] flushWay;
wire [5:0] flushIndex;
wire [5:0] flushSramAddr;
// 对物理地址 8000_0000 以上的地址缓存 以下地址为外设
// addr 32  -> |外设位 1bit| Tag 21bit | index 6bit | word 2bit | Byte 2bit  
// Meta | V 1 | TAG 21 |  D 1
reg       meta0V   [0:63];
reg       meta1V   [0:63];
reg       meta2V   [0:63];
reg       meta3V   [0:63];
reg       meta0D   [0:63];
reg       meta1D   [0:63];
reg       meta2D   [0:63];
reg       meta3D   [0:63];
reg [22:0]meta3Tag [0:63];
reg [22:0]meta0Tag [0:63];
reg [22:0]meta1Tag [0:63];
reg [22:0]meta2Tag [0:63];
reg [2:0] plru[0:63];
// Data 
wire [127:0]sram_dout [3:0];
reg [63:0] dcache_mem_data_read_r;
wire [63:0]dcache_mem_data_read_1 ;
wire [63:0]dcache_mem_data_read_2 ;
wire [63:0]dcache_mem_data_read_3 ;
reg load_hit ;
wire refill_bypass;
reg refill_bypassR ; // 因为访问SRAM要有两个周期 bypass 也要维持至少两个周期
// 查询路径
wire [5:0] index = {6{mem_dcache_valid}} & mem_dcache_addr[8:3];
wire [3:0]hit_vector;
// 命中逻辑 meta中的entry有效 且 tag比较成功
assign hit_vector[0]  = meta0V[index] && (meta0Tag[index] == mem_dcache_addr[31:9]);
assign hit_vector[1]  = meta1V[index] && (meta1Tag[index] == mem_dcache_addr[31:9]);
assign hit_vector[2]  = meta2V[index] && (meta2Tag[index] == mem_dcache_addr[31:9]);
assign hit_vector[3]  = meta3V[index] && (meta3Tag[index] == mem_dcache_addr[31:9]);
wire hit = |hit_vector;
// 根据命中的way选择相应的数据
wire [127:0] hit_data = ({128{hit_vector[0]}} & sram_dout[0] )| 
                        ({128{hit_vector[1]}} & sram_dout[1] )| 
                        ({128{hit_vector[2]}} & sram_dout[2] )| 
                        ({128{hit_vector[3]}} & sram_dout[3] );
// refill 旁路的数据选择
wire [127:0] out_data = (refill_bypass || refill_bypassR) ? ram_dcache_data_read_temp : hit_data;
// 根据地址选择最终输出的64bit数据
assign dcache_mem_data_read_1 = mem_dcache_addr[3] ? out_data[127:64] : out_data[63:0];//分开高低64bit
assign dcache_mem_data_read_2 = dcache_mem_data_read_1 >> (addr_yu * 8);//对齐最低位
assign dcache_mem_data_read_3 = ({64{mem_dcache_size==3'b000}} & {{56{dcache_mem_data_read_2[7 ]}},dcache_mem_data_read_2[7 :0]})                                      
                               |({64{mem_dcache_size==3'b001}} & {{48{dcache_mem_data_read_2[15]}},dcache_mem_data_read_2[15:0]})
                               |({64{mem_dcache_size==3'b010}} & {{32{dcache_mem_data_read_2[31]}},dcache_mem_data_read_2[31:0]})
                               |({64{mem_dcache_size==3'b011}} & dcache_mem_data_read_2)
                               |({64{mem_dcache_size==3'b100}} & {56'b0,dcache_mem_data_read_2[7:0] })                                      
                               |({64{mem_dcache_size==3'b101}} & {48'b0,dcache_mem_data_read_2[15:0]})
                               |({64{mem_dcache_size==3'b110}} & {32'b0,dcache_mem_data_read_2[31:0]});
assign dcache_mem_data_read = load_hit ? dcache_mem_data_read_r : dcache_mem_data_read_3;
always@(posedge clk)
  if(rst)
    refill_bypassR <= 1'b0;
  else 
    refill_bypassR <= refill_bypass;
reg hitR;
always@(posedge clk)begin
  load_hit <= hit && !mem_dcache_req && mem_dcache_valid;
  dcache_mem_data_read_r <= dcache_mem_data_read_3;
  if(rst)
    hitR <= 1'b0;
  else if(hit && mem_dcache_valid && ~lsu_dcache_invalidate_i)
    hitR <= 1'b1;
  else
    hitR <= 1'b0;
end
// 命令有效且数据准备好了
reg invalidateOK;
assign dcache_mem_ready = (hitR  || refill_bypass || refill_bypassR || invalidateOK) && mem_dcache_valid;
// 写命中信号处理
wire  hit_wen           = mem_dcache_valid && hit && mem_dcache_req && ~lsu_dcache_invalidate_i;
wire [2:0]   addr_yu    = mem_dcache_addr[2:0];
reg  [63:0]  wmask = 64'd0;
always @(*)begin
    case(mem_dcache_size[1:0])       
        2'b00:   wmask =        ({64{addr_yu==0}} & 64'h0000_0000_0000_00ff)        //sb
                               |({64{addr_yu==1}} & 64'h0000_0000_0000_ff00)
                               |({64{addr_yu==2}} & 64'h0000_0000_00ff_0000)
                               |({64{addr_yu==3}} & 64'h0000_0000_ff00_0000)
                               |({64{addr_yu==4}} & 64'h0000_00ff_0000_0000)
                               |({64{addr_yu==5}} & 64'h0000_ff00_0000_0000)
                               |({64{addr_yu==6}} & 64'h00ff_0000_0000_0000)
                               |({64{addr_yu==7}} & 64'hff00_0000_0000_0000);

        2'b01:   wmask =        ({64{addr_yu==0}} & 64'h0000_0000_0000_ffff)        //sh
                               |({64{addr_yu==2}} & 64'h0000_0000_ffff_0000)
                               |({64{addr_yu==4}} & 64'h0000_ffff_0000_0000)
                               |({64{addr_yu==6}} & 64'hffff_0000_0000_0000);
                               
        2'b10:   wmask =        ({64{addr_yu==0}} & 64'h0000_0000_ffff_ffff)        //sw
                               |({64{addr_yu==4}} & 64'hffff_ffff_0000_0000);
        2'b11:   wmask = 64'hffff_ffff_ffff_ffff;                                                       
        default: wmask = 64'h0000_0000_0000_0000;                     
    endcase
end  
wire [63:0]  mem_dcache_data_write_1 = mem_dcache_data_write << (addr_yu * 8);//对齐最低位
wire [127:0] hit_wmask  = mem_dcache_addr[3] ? {wmask,64'h0} : {64'h0,wmask};
wire [127:0] hit_wdata  = mem_dcache_addr[3] ? {mem_dcache_data_write_1,64'h0} : {64'h0,mem_dcache_data_write_1};
// 更新路径
// findout invalid way
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
parameter IDLE    = 4'b0001,
          READ    = 4'b0010,
          WRITE   = 4'b0100,
          REFILL  = 4'b1000;

reg  [3:0] cur_state;
reg  [3:0] nxt_state;
always@(posedge clk)begin
  if(rst)
    cur_state <= IDLE;
  else 
    cur_state <= nxt_state;
end
wire miss  = ~hit & mem_dcache_valid;  //地址有效且未命中
wire dirty = (replace_way[0] & meta0D[index]) | 
             (replace_way[1] & meta1D[index]) | 
             (replace_way[2] & meta2D[index]) | 
             (replace_way[3] & meta3D[index]) ;
// find replace tag
wire [22:0]replaceWaddr = ({23{replace_way[0]}} & meta0Tag[index] ) |
                          ({23{replace_way[1]}} & meta1Tag[index] ) |
                          ({23{replace_way[2]}} & meta2Tag[index] ) |
                          ({23{replace_way[3]}} & meta3Tag[index] ) ;

always@(*)begin
  case(cur_state)
    IDLE:
      if(miss && dirty && ~lsu_dcache_invalidate_i) 
        nxt_state = WRITE;
      else if(miss && ~dirty && ~lsu_dcache_invalidate_i) 
        nxt_state = READ;
      else
        nxt_state = IDLE;
    WRITE:
      if(ram_dcache_ready) 
        nxt_state = READ;
      else 
        nxt_state = WRITE;
    READ:
      if(ram_dcache_ready) 
        nxt_state = REFILL;
      else
        nxt_state = READ;
    REFILL:
      nxt_state = IDLE;
    default:
      nxt_state = IDLE;
  endcase
end
// 操作内存信号逻辑
wire  normal_dcache_ram_valid       = (cur_state == READ) || (cur_state == WRITE);     //内存使能信号
wire  normal_dcache_ram_req         = cur_state == WRITE;                              //写使能
wire [31:0] normal_dcache_ram_addr  = (cur_state == READ ) ? {mem_dcache_addr[31:3],3'd0} :
                                      (cur_state == WRITE) ? {replaceWaddr,index,3'd0} :
                                      'd0;// 64bit 对齐
wire [127:0] temp_dcache_ram_data_write    = ({128{replace_way[0]}} & sram_dout[0] )| 
                                              ({128{replace_way[1]}} & sram_dout[1] )| 
                                              ({128{replace_way[2]}} & sram_dout[2] )| 
                                              ({128{replace_way[3]}} & sram_dout[3] );
wire [63:0]  normal_dcache_ram_data_write  = normal_dcache_ram_addr[3] ? temp_dcache_ram_data_write[127:64] : temp_dcache_ram_data_write[63:0];
assign refill_bypass           = (cur_state == REFILL);
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
  for(i=0;i<64;i=i+1)begin
    always@(posedge clk) //lru
        if(rst)
          plru[i] <= 'd0;
        else if(invalidate)begin
          plru[i] <= 'd0;
        end else if((index == i))begin
          if(refill_bypass)
            plru[i] <= UpdatePlru(replace_way,plru[i]);
          else if(hitR)
            plru[i] <= UpdatePlru(hit_vector,plru[i]);
        end 
    
    always@(posedge clk)  //valid
      if(rst || invalidateOK)begin
        meta0V[i] <= 'd0;
        meta1V[i] <= 'd0;
        meta2V[i] <= 'd0;
        meta3V[i] <= 'd0;
      end else if((cur_state == REFILL) && (index == i))begin // refill 时 把替换的路写为一 其他路不变
        meta0V[i] <= replace_way[0] | meta0V[i];
        meta1V[i] <= replace_way[1] | meta1V[i];
        meta2V[i] <= replace_way[2] | meta2V[i];
        meta3V[i] <= replace_way[3] | meta3V[i];
      end
    always@(posedge clk)   //dirty
      if(rst || invalidateOK)begin
        meta0D[i] <= 'd0;
        meta1D[i] <= 'd0;
        meta2D[i] <= 'd0;
        meta3D[i] <= 'd0;
      end else if((cur_state == IDLE) && (index == i) && hit_wen)begin // 写命中 将命中路写dirty位 其他不变
        meta0D[i] <= hit_vector[0] | meta0D[i];
        meta1D[i] <= hit_vector[1] | meta1D[i];
        meta2D[i] <= hit_vector[2] | meta2D[i];
        meta3D[i] <= hit_vector[3] | meta3D[i];
      end else if((cur_state == WRITE) && (index == i))begin  // 写回内存 将替换路dirty清零 其他不变
        meta0D[i] <= ~replace_way[0] & meta0D[i];
        meta1D[i] <= ~replace_way[1] & meta1D[i];
        meta2D[i] <= ~replace_way[2] & meta2D[i];
        meta3D[i] <= ~replace_way[3] & meta3D[i];
      end else if ((cur_state == REFILL) && (index == i))begin // 从内存读回时 如果上层为写的话 要设置dirty位
        meta0D[i] <= replace_way[0] | meta0D[i];
        meta1D[i] <= replace_way[1] | meta1D[i];
        meta2D[i] <= replace_way[2] | meta2D[i];
        meta3D[i] <= replace_way[3] | meta3D[i];
      end

    always@(posedge clk) //tag
      if(rst)begin
        meta0Tag[i] <= 'd0;
        meta1Tag[i] <= 'd0;
        meta2Tag[i] <= 'd0;
        meta3Tag[i] <= 'd0;
      end else if((cur_state == REFILL) && (index == i))begin  // refill 时 写入tag信息
        if(replace_way[0])  meta0Tag[i] <= mem_dcache_addr[31:9];
        if(replace_way[1])  meta1Tag[i] <= mem_dcache_addr[31:9];
        if(replace_way[2])  meta2Tag[i] <= mem_dcache_addr[31:9];
        if(replace_way[3])  meta3Tag[i] <= mem_dcache_addr[31:9];
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
    // 1. refill 并且为替换路时  2.命中写 并且为命中路时  
    assign sram_wen[i]   = ((cur_state == REFILL) && replace_way[i]) || (hit_wen && hit_vector[i]);
    // 下面三个是数据信号 不需要像wen那么精细的控制 只要 区分 refill 写 和 命中写即可
    // addr 要根据invalidate 状态机选择相应的控制通路
    assign sram_addr[i]  = flushUse ? flushSramAddr : mem_dcache_addr[8:3];  //??
    // 重填写要注意 如果lsu请求为写 要将内存来的数据和请求拼接后写入
    assign sram_din[i]   = (hit_wen&&(cur_state == IDLE)) ? hit_wdata : 
                           mem_dcache_req ? ((ram_dcache_data_read_temp & ~hit_wmask) | (hit_wdata & hit_wmask)) :
                           ram_dcache_data_read_temp;
    assign sram_wmask[i] = (hit_wen&&(cur_state == IDLE)) ? ~hit_wmask : mem_dcache_addr[3] ? {64'b0,~64'b0} : {~64'b0,64'b0};
    SRAM sram(
      .clk(clk),
      .cs (mem_dcache_valid),
      .wen(sram_wen[i]),
      .mask(sram_wmask[i]),
      .addr(sram_addr[i]),
      .din(sram_din[i]),
      .dout(sram_dout[i])
    );
  end
endgenerate

// Invalidate state machine

assign flushWay   = flushCnt[7:6];
assign flushIndex = flushCnt[5:0];

assign curMetaV = ({flushWay == 2'd0} & meta0V[flushIndex])|
                  ({flushWay == 2'd1} & meta1V[flushIndex])|
                  ({flushWay == 2'd2} & meta2V[flushIndex])|
                  ({flushWay == 2'd3} & meta3V[flushIndex]);

assign curMetaD = ({flushWay == 2'd0} & meta0D[flushIndex])|
                  ({flushWay == 2'd1} & meta1D[flushIndex])|
                  ({flushWay == 2'd2} & meta2D[flushIndex])|
                  ({flushWay == 2'd3} & meta3D[flushIndex]);

assign curMetaTag = ({23{flushWay == 2'd0}} & meta0Tag[flushIndex])|
                    ({23{flushWay == 2'd1}} & meta1Tag[flushIndex])|
                    ({23{flushWay == 2'd2}} & meta2Tag[flushIndex])|
                    ({23{flushWay == 2'd3}} & meta3Tag[flushIndex]);
assign needWB    = curMetaV && curMetaD;

parameter FLUSH_IDLE  = 3'b001,
          FLUSH_READ  = 3'b010,
          FLUSH_WRITE = 3'b100;

always@(posedge clk)
  if(rst)
    cur_flush_state <= FLUSH_IDLE;
  else 
    cur_flush_state <= nxt_flush_state;

always@(*)begin
  case(cur_flush_state)
    FLUSH_IDLE:
      if(lsu_dcache_invalidate_i && ~invalidateOK) 
        nxt_flush_state=FLUSH_READ;
      else 
        nxt_flush_state=FLUSH_IDLE;
    FLUSH_READ:
      if(flushCnt[8]) 
        nxt_flush_state=FLUSH_IDLE; 
      else if(needWB) 
        nxt_flush_state=FLUSH_WRITE; 
      else 
        nxt_flush_state=FLUSH_READ;
    FLUSH_WRITE:
      if(flush_resp_valid)
        nxt_flush_state=FLUSH_READ;
      else  
        nxt_flush_state=FLUSH_WRITE;
    default:
      nxt_flush_state=FLUSH_IDLE;
  endcase
end

always@(posedge clk)
  if(rst)
    flushCnt <= 'd0;
  else if(flushCnt[8])
    flushCnt <= 'd0;
  else if((cur_flush_state == FLUSH_READ) && ~needWB) // 当拍没有要写回的信息 自动加一
    flushCnt <= flushCnt + 1'b1;
  else if ((cur_flush_state == FLUSH_WRITE) && (nxt_flush_state == FLUSH_READ)) // 写回完成自动加一
    flushCnt <= flushCnt + 1'b1;

// TO Sram Data
assign flushUse         = (cur_flush_state == FLUSH_READ) || (cur_flush_state == FLUSH_WRITE);
assign flushSramAddr    = flushIndex;
// TO Write Mem
assign flush_addr_valid = (cur_flush_state == FLUSH_WRITE);
assign flush_wen        = (cur_flush_state == FLUSH_WRITE);
assign flush_addr       = {curMetaTag, flushIndex , 3'd0};
assign temp_flush_wdata  = ({127{flushWay == 2'd0}} & sram_dout[0])|
                           ({127{flushWay == 2'd1}} & sram_dout[1])|
                           ({127{flushWay == 2'd2}} & sram_dout[2])|
                           ({127{flushWay == 2'd3}} & sram_dout[3]);
wire [63:0]  flush_wdata  = flush_addr[3] ? temp_flush_wdata[127:64] : temp_flush_wdata[63:0];
assign flush_resp_valid = ram_dcache_ready;

always@(posedge clk)
  if(rst)
    invalidateOK <= 1'b0;
  else if((cur_flush_state == FLUSH_READ) && (nxt_flush_state == FLUSH_IDLE))
    invalidateOK <= 1'b1;
  else 
    invalidateOK <= 1'b0;

//
assign  dcache_ram_valid      = flushUse ? flush_addr_valid : normal_dcache_ram_valid     ;
assign  dcache_ram_req        = flushUse ? flush_wen        : normal_dcache_ram_req       ;
assign  dcache_ram_addr       = flushUse ? flush_addr       : normal_dcache_ram_addr      ;
assign  dcache_ram_data_write = flushUse ? flush_wdata      : normal_dcache_ram_data_write; 
assign  dcache_ram_size       = 3'b011;
endmodule
