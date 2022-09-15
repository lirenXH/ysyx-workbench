`include"./ysyx_22040759_define.v"

//cache
`define TAG 31:11		// position of tag in icache_addr
`define INDEX 10:3		// position of index in address  11 2^11 2048
`define OFFSET 2:0	

module ysyx_22040759_icache#(
  // Cache parameters
  parameter NWAYS = 2,							//两路组相联
  parameter NSETS = 256,						//cache set 数量
  // Memory related paramter, make sure it matches memory module
  parameter MWIDTH = 64,		// same as block size  内存数据位宽
  // More cache related parameters
  parameter INDEX_WIDTH = 8,	//index位宽
  parameter TAG_WIDTH = 21		//tag位宽
)(
    input           clk              ,
    input           rst              ,
    //to or from if
    input  [63:0]   icache_addr      ,      //cache读地址
    input           icache_ren       ,      //一直为1
    output [63:0]   icache_if_data_o ,      //所取指令
    output  reg     icache_if_ready  ,
    //to or from ram
    input  [63:0]   ram_icache_rdata ,      //ram回填数据
    input           icache_data_valid,      //回填数据有效
    output          hit_miss         ,      //miss即为读ram_addr_valid
    output [63:0]   icache_ram_raddr ,      //读ram地址
    output          icache_ram_ren          //不一定为1
);
// WAY 1 cache data
reg					valid1 [NSETS-1:0];//有效位
reg					lru1   [NSETS-1:0];//LRU
reg [TAG_WIDTH-1:0]	tag1   [NSETS-1:0];
reg [MWIDTH-1:0]	mem1   [NSETS-1:0];

// WAY 2 cache data
reg					valid2 [NSETS-1:0];
reg					lru2   [NSETS-1:0];
reg [TAG_WIDTH-1:0]	tag2   [NSETS-1:0];
reg [MWIDTH-1:0]	mem2   [NSETS-1:0];


reg        hit_miss_r = 1'b0;
reg [63:0] icache_if_data_o_r= 64'b0;

reg        icache_if_ready_temp;
assign     hit_miss = hit_miss_r;
assign     icache_ram_ren = !((valid1[icache_addr[`INDEX]] && (tag1[icache_addr[`INDEX]] == icache_addr[`TAG]))
		                   || (valid2[icache_addr[`INDEX]] && (tag2[icache_addr[`INDEX]] == icache_addr[`TAG])));
//assign icache_if_ready  = !icache_ram_ren && icache_if_ready_temp;
assign icache_ram_raddr = {icache_addr[63:3], {3{1'b0}}};
assign icache_if_data_o = icache_if_data_o_r;

parameter IDLE = 2'b00;
parameter HIT  = 2'b01;
parameter MISS = 2'b10;

reg [1:0] cstate = IDLE;

always@(posedge clk)begin
    case(cstate)
        IDLE:begin
            hit_miss_r <= ((valid1[icache_addr[`INDEX]] && (tag1[icache_addr[`INDEX]] == icache_addr[`TAG]))
		                || (valid2[icache_addr[`INDEX]] && (tag2[icache_addr[`INDEX]] == icache_addr[`TAG])));
            icache_if_ready <= 1'b0;
            if(~icache_ren)
                cstate <= IDLE;
            //way 1
            else if(valid1[icache_addr[`INDEX]] && (tag1[icache_addr[`INDEX]] == icache_addr[`TAG]))begin
                // read hit
				if(icache_ren) begin
                    icache_if_data_o_r <= (icache_addr[`OFFSET] == 3'h4) ? (mem1[icache_addr[`INDEX]] >> 32) : mem1[icache_addr[`INDEX]];
                    //$display("read addr = %016x , data = %x",icache_addr[`INDEX],mem1[icache_addr[`INDEX]]);
                end
                //更新lru
                lru1[icache_addr[`INDEX]] <= 1'b0;
				lru2[icache_addr[`INDEX]] <= 1'b1;
                icache_if_ready <= 1'b1;
                cstate <= HIT;
            end
            //way 2
            else if(valid2[icache_addr[`INDEX]] && (tag2[icache_addr[`INDEX]] == icache_addr[`TAG]))begin
                //read hit
                if(icache_ren) begin
                    icache_if_data_o_r <= (icache_addr[`OFFSET] == 3'h4) ? (mem1[icache_addr[`INDEX]] >> 32) : mem1[icache_addr[`INDEX]];
                    //$display("read addr = %016x , data = %x",icache_addr[`INDEX],mem1[icache_addr[`INDEX]]);
                end
                //更新lru
                lru1[icache_addr[`INDEX]] <= 1'b1;
                lru2[icache_addr[`INDEX]] <= 1'b0;
                icache_if_ready <= 1'b1;
                cstate <= HIT;
            end
            //to MISS
            else begin
                cstate <= MISS;
                icache_if_ready <= 1'b0;
            end
        end
        HIT :begin
            icache_if_ready <= 1'b0;
            cstate <= IDLE;
        end
        MISS:begin
            if(    ~valid1[icache_addr[`INDEX]] && icache_data_valid)begin					//若当前地址所存数据无效 直接写入从DRAM中取的数据
				mem1[icache_addr[`INDEX]] <= ram_icache_rdata;
				tag1[icache_addr[`INDEX]] <= icache_addr[`TAG];
                //$display("load addr = %016x , data = %x",icache_addr[`INDEX],ram_icache_rdata);
				valid1[icache_addr[`INDEX]] <= 1;				//valid需要等指令取到再置1
                cstate <= IDLE;
			end
			
			else if(~valid2[icache_addr[`INDEX]]&& icache_data_valid)begin
				mem2[icache_addr[`INDEX]] <= ram_icache_rdata;
				tag2[icache_addr[`INDEX]] <= icache_addr[`TAG];
                //$display("load addr = %016x , data = %x",icache_addr[`INDEX],ram_icache_rdata);
				valid2[icache_addr[`INDEX]] <= 1;
                cstate <= IDLE;
			end
            //way 1 lru 两路都有效，开始替换
            else if(lru1[icache_addr[`INDEX]] == 1'b1 && icache_data_valid)begin
                mem1[icache_addr[`INDEX]] <= ram_icache_rdata;
				tag1[icache_addr[`INDEX]] <= icache_addr[`TAG];
				valid1[icache_addr[`INDEX]] <= 1'b1;
                cstate <= IDLE;
            end
            // way 2 lru
			else if(lru2[icache_addr[`INDEX]] == 1'b1 && icache_data_valid)begin
				mem2[icache_addr[`INDEX]] <= ram_icache_rdata;
				tag2[icache_addr[`INDEX]] <= icache_addr[`TAG];
				valid2[icache_addr[`INDEX]] <= 1'b1;
                cstate <= IDLE;
			end
            //cstate <= MISS;     //等待回填数据到达
        end

        default:cstate <= IDLE;
    endcase
end
endmodule


