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
wire [2:0]  data_yu = waddr[2:0];
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
                            //wdata = {56'b0,mem_wdata[7:0] };end
            3'b001:  wmask = ({64{data_yu==0}} & 64'h0000_0000_0000_ffff)                                     //sh
                            |({64{data_yu==2}} & 64'h0000_0000_ffff_0000)
                            |({64{data_yu==4}} & 64'h0000_ffff_0000_0000)
                            |({64{data_yu==6}} & 64'hffff_0000_0000_0000);
                            //wdata = {48'b0,mem_wdata[15:0]};end
            3'b010:  wmask = ({64{data_yu==0}} & 64'h0000_0000_ffff_ffff)                                     //sw
                            |({64{data_yu==4}} & 64'hffff_ffff_0000_0000);
                            //wdata = {32'b0,mem_wdata[31:0]};end
            3'b011:  wmask = 64'hffff_ffff_ffff_ffff;//wdata = mem_wdata;end                                    //sd
            default: wmask = 64'hffff_ffff_ffff_ffff;//wdata = mem_wdata;end
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

    //    case(func3)                     
    //        3'b001: mem_rdata =  ({64{data_yu==0}} & {{48{rdata[15]}},rdata[15:0] })                             //lh
    //                            |({64{data_yu==2}} & {{48{rdata[31]}},rdata[31:16]})
    //                            |({64{data_yu==4}} & {{48{rdata[47]}},rdata[47:32]})
    //                            |({64{data_yu==6}} & {{48{rdata[63]}},rdata[63:48]});
    //        3'b010: mem_rdata =  (data_yu==0) ? {{32{rdata[31]}},rdata[31:0]} : {{32{rdata[63]}},rdata[63:32]};  //lw
    //        3'b100: mem_rdata =  ({64{data_yu==0}} & {56'b0,rdata[7 :0] })                                       //lbu
    //                            |({64{data_yu==1}} & {56'b0,rdata[15:8] })
    //                            |({64{data_yu==2}} & {56'b0,rdata[23:16]})
    //                            |({64{data_yu==3}} & {56'b0,rdata[31:24]})
    //                            |({64{data_yu==4}} & {56'b0,rdata[39:32]})
    //                            |({64{data_yu==5}} & {56'b0,rdata[47:40]})
    //                            |({64{data_yu==6}} & {56'b0,rdata[55:48]})
    //                            |({64{data_yu==7}} & {56'b0,rdata[63:56]}); 
    //        3'b101: mem_rdata =  ({64{data_yu==0}} & {48'b0,rdata[15:0] })                                       //lhu
    //                            |({64{data_yu==2}} & {48'b0,rdata[31:16]})
    //                            |({64{data_yu==4}} & {48'b0,rdata[47:32]})
    //                            |({64{data_yu==6}} & {48'b0,rdata[63:48]});
    //        3'b011: mem_rdata = rdata;                                                                           //ld
    //        default:mem_rdata = rdata;
    //    endcase
