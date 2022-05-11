`include "./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_PC(
    input clk,
    input rst,
    input [63:0] pc_new,
    output reg [63:0] pc_out
    );
    
    always @(posedge clk) begin
        if(rst) pc_out <= 64'h80000000;        //reset key
        else begin
            pc_out <= pc_new;       
        end
    end
endmodule

