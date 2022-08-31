`include"./ysyx_22040759_inst.v"
`include"./ysyx_22040759_define.v"
module ysyx_22040759_data_ram(
    input                 mem_wen     ,
    input                 mem_en     , //ram使能
    input       [2:0]     func3       ,
    input                 clk         ,
    input       [63:0]    raddr       ,
    input       [63:0]    waddr       ,
    input       [63:0]    mem_wdata       ,//中转wdata
    output reg  [63:0]    mem_rdata
);
wire [3:0]  data_yu = {raddr%8}[3:0];
wire [63:0] rdata_RAMHelper;
wire [63:0] wdata_RAMHelper;
//reg [63:0] wdata;
reg [63:0] rdata;  //中转rdata
reg [63:0]  wmask = 64'd0;
    always @(*)begin
        case(func3)
            3'b000:  wmask = ({64{data_yu==0}} & 64'h0000_0000_0000_00ff)                                     //sb
                            |({64{data_yu==1}} & 64'h0000_0000_0000_ff00)
                            |({64{data_yu==2}} & 64'h0000_0000_00ff_0000)
                            |({64{data_yu==3}} & 64'h0000_0000_ff00_0000)
                            |({64{data_yu==4}} & 64'h0000_00ff_0000_0000)
                            |({64{data_yu==5}} & 64'h0000_ff00_0000_0000)
                            |({64{data_yu==6}} & 64'h00ff_0000_0000_0000)
                            |({64{data_yu==7}} & 64'hff00_0000_0000_0000);

            3'b001:  wmask = ({64{data_yu==0}} & 64'h0000_0000_0000_ffff)                                     //sh
                            |({64{data_yu==2}} & 64'h0000_0000_ffff_0000)
                            |({64{data_yu==4}} & 64'h0000_ffff_0000_0000)
                            |({64{data_yu==6}} & 64'hffff_0000_0000_0000);

            3'b010:  wmask = ({64{data_yu==0}} & 64'h0000_0000_ffff_ffff)                                     //sw
                            |({64{data_yu==4}} & 64'hffff_ffff_0000_0000);

            3'b011:  wmask = 64'hffff_ffff_ffff_ffff;                                                         //sd
            default: wmask = 64'hffff_ffff_ffff_ffff;                     
        endcase
    end
    assign rdata           = rdata_RAMHelper >> (data_yu * 8);
    assign mem_rdata       =  ({64{func3==3'b000}} & {{56{rdata[7 ]}},rdata[7 :0]})                                      
                             |({64{func3==3'b001}} & {{48{rdata[15]}},rdata[15:0]})
                             |({64{func3==3'b010}} & {{32{rdata[31]}},rdata[31:0]})
                             |({64{func3==3'b011}} & rdata)
                             |({64{func3==3'b100}} & {56'b0,rdata[7:0] })                                      
                             |({64{func3==3'b101}} & {48'b0,rdata[15:0]})
                             |({64{func3==3'b110}} & {32'b0,rdata[31:0]});
    assign wdata_RAMHelper = mem_wdata << (data_yu * 8);

RAMHelper data_RAMHelper(
    .clk      (clk),
    .en       (mem_en),
    .rIdx     ((raddr-64'h0000_0000_8000_0000) >> 3),
    .rdata    (rdata_RAMHelper),
    .wIdx     ((waddr-64'h0000_0000_8000_0000) >> 3),
    .wdata    (wdata_RAMHelper),
    .wmask    (wmask),
    .wen      (mem_wen)
);
    
endmodule
