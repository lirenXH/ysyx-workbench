`include"./ysyx_22040759_define.v"
module ysyx_22040759_arbiter(
    input               clk,
    input               rst,

    input               if_addr_valid   ,
    input    [63:0]     if_rw_addr      ,
    output              if_data_valid_o ,
    output   [63:0]     if_data         ,

    input               mem_addr_valid  ,
    input    [63:0]     mem_rw_addr     ,
    output              mem_data_valid_o,
    output   [63:0]     mem_data        ,     
    
    output              rd_addr_valid   ,
    output   [63:0]     rd_addr         ,
    input               rd_data_valid_i ,
    input    [63:0]     rd_data
    );  

parameter IDLE = 3'b001,
      USR1 = 3'b010,
      USR2 = 3'b100;

reg [2:0] cstate;
reg [2:0] nstate;

always@(posedge clk)begin
    if(rst)
        cstate <= IDLE;
    else
        cstate <= nstate;
end

reg arbiter_handshake;

always@(posedge clk)begin
    if(rst)
        arbiter_handshake <= 1'b0;
    else
        arbiter_handshake <= rd_data_valid_i && rd_addr_valid;
end

always@(posedge clk)begin
    case(cstate)
    IDLE:
        if(mem_addr_valid)     //USR2优先级大于USR1 USR2MEM USR1IF
            nstate <= USR2;
        else if(if_addr_valid)
            nstate <= USR1;
        else    
            nstate <= IDLE;
    USR1:
        if(arbiter_handshake)begin
            if(mem_addr_valid) //USR2连续发起请求
                nstate <= USR2;
            else if(if_addr_valid)
                nstate <= USR1;
            else
                nstate <= IDLE;
        end else
            nstate = USR1;    
    USR2:
        if(arbiter_handshake)begin
            if(if_addr_valid) //USR2连续发起请求
                nstate <= USR1;
            else if(mem_addr_valid)
                nstate <= USR2;
            else
                nstate <= IDLE;
        end else
            nstate = USR2; 
    default:nstate = IDLE;
    endcase
end
wire final_signal = (cstate == USR2);

assign rd_addr_valid = final_signal ? mem_addr_valid : if_addr_valid;
assign rd_addr       = final_signal ? mem_addr       : if_addr;

assign if_data  = rd_data;
assign mem_data = rd_data;

assign if_data_valid_o  = !final_signal & rd_addr_valid;
assign mem_data_valid_o =  final_signal & rd_addr_valid;

endmodule