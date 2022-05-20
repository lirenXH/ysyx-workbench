`include"./vsrc/ysyx_22040759_inst.v"
`include"./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_data_ram(
    input                 mem_wen     ,
    input                 mem_ren     , //读使能
    input       [2:0]     func3       ,
    input                 clk         ,
    input       [63:0]    raddr       ,
    input       [63:0]    waddr       ,
    input       [63:0]    mem_wdata       ,//中转wdata
    output reg  [63:0]    mem_rdata
);
import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
wire[3:0]  data_yu = {raddr%8}[3:0];
reg [63:0] wdata;
reg [63:0] rdata;  //中转rdata
reg [7:0]  wmask = 8'd0;
    always @(*)begin
        case(func3)
            3'b000: begin wmask = ({8{data_yu==0}} & 8'b0000_0001)
                                 |({8{data_yu==1}} & 8'b0000_0010)
                                 |({8{data_yu==2}} & 8'b0000_0100)
                                 |({8{data_yu==3}} & 8'b0000_1000)
                                 |({8{data_yu==4}} & 8'b0001_0000)
                                 |({8{data_yu==5}} & 8'b0010_0000)
                                 |({8{data_yu==6}} & 8'b0100_0000)
                                 |({8{data_yu==7}} & 8'b1000_0000);
                          wdata = {56'b0,mem_wdata[7:0] } ;end
            3'b001: begin wmask = 8'h3 ;wdata = {48'b0,mem_wdata[15:0]};end
            3'b010: begin wmask = 8'hf ;wdata = {32'b0,mem_wdata[31:0]};end
            3'b011: begin wmask = 8'hff;wdata = mem_wdata      ;end
            default:begin wmask = 8'hff;wdata = mem_wdata      ;end
        endcase
        if(mem_ren)begin
            pmem_read(raddr, rdata);
        end  
        else       begin
            rdata = 64'd0;          
        end
        case(func3)
            3'b100: mem_rdata =  ({64{data_yu==0}} & {56'b0,rdata[7 :0] })
                                |({64{data_yu==1}} & {56'b0,rdata[15:8] })
                                |({64{data_yu==2}} & {56'b0,rdata[23:16]})
                                |({64{data_yu==3}} & {56'b0,rdata[31:24]})
                                |({64{data_yu==4}} & {56'b0,rdata[39:32]})
                                |({64{data_yu==5}} & {56'b0,rdata[47:40]})
                                |({64{data_yu==6}} & {56'b0,rdata[55:48]})
                                |({64{data_yu==7}} & {56'b0,rdata[63:56]});
            3'b011: mem_rdata = rdata;
            3'b010: mem_rdata = (data_yu==0) ? {{32{rdata[31]}},rdata[31:0]} : {{32{rdata[63]}},rdata[63:32]};
            default:mem_rdata = rdata;
        endcase
    end

    always @(posedge clk) begin                           
        if(mem_wen)begin
            //$display(".v wmask = %h",wmask);
            pmem_write(waddr,wdata,wmask);
        end
    end
    
endmodule
