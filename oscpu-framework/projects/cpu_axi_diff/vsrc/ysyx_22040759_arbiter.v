`include"./ysyx_22040759_define.v"
module ysyx_22040759_arbiter(
    input               clk,
    input               rst,

    input               if_addr_valid_i   ,
    input    [63:0]     if_rd_addr_i      ,
    output              if_data_valid_o   ,
    output   [63:0]     if_data_o         ,

    input               mem_rd_addr_valid_i  ,
    input    [63:0]     mem_rd_addr_i     ,
    input    [1:0]      mem_rd_size_i     ,
    output              mem_rd_data_valid_o  ,
    output   [63:0]     mem_rd_data_o        ,     
    
    output              rd_addr_valid_o   ,
    output   [63:0]     rd_addr_o         ,
    output   [1:0]      rd_size_o         ,
    input               rd_data_valid_i   ,
    input    [63:0]     rd_data_i
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
        arbiter_handshake <= rd_data_valid_i && rd_addr_valid_o;
end

always@(posedge clk)begin
    case(cstate)
    IDLE:
        if(mem_rd_addr_valid_i)     //USR2优先级大于USR1 USR2MEM USR1IF
            nstate <= USR2;
        else if(if_addr_valid_i)
            nstate <= USR1;
        else    
            nstate <= IDLE;
    USR1:
        if(arbiter_handshake)begin
            if(mem_rd_addr_valid_i) //USR2连续发起请求
                nstate <= USR2;
            else if(if_addr_valid_i)
                nstate <= USR1;
            else
                nstate <= IDLE;
        end else
            nstate <= USR1;    
    USR2:
        if(arbiter_handshake)begin
            if(if_addr_valid_i) //USR2连续发起请求
                nstate <= USR1;
            else if(mem_rd_addr_valid_i)
                nstate <= USR2;
            else
                nstate <= IDLE;
        end else
            nstate <= USR2; 
    default:nstate <= IDLE;
    endcase
end
wire final_signal = (cstate == USR2);

assign rd_addr_valid_o = final_signal ? mem_rd_addr_valid_i    : if_addr_valid_i;
assign rd_addr_o       = final_signal ? mem_rd_addr_i          : if_rd_addr_i   ;
assign rd_size_o       = final_signal ? mem_rd_size_i          : 2'b10     ;

assign if_data_o  = rd_data_i;
assign mem_rd_data_o = rd_data_i;

assign if_data_valid_o     = !final_signal & rd_data_valid_i;
assign mem_rd_data_valid_o =  final_signal & rd_data_valid_i;

endmodule
