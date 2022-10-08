`include"./ysyx_22040759_define.v"
module ysyx_22040759_clu(
    input           clu_valid           ,
    input           illegalInst         ,//用于判断取指是否合法 产生异常

    input  [31:0]   csr_inst            ,
    input  [4 :0]   clu_sel             ,
    input  [63:0]   clu_a               ,
    input  [63:0]   clu_b               ,
    output [63:0]   clu_result          ,
    output [16:0]   exception_tpye      ,
    //for csr read
    input  [63:0]   clu_rdata         ,
    output [11:0]   clu_raddr         ,
    //for csr write
    output          clu_wen           ,//1
    output [11:0]   clu_waddr         ,
    output [63:0]   clu_wdata
);
wire [63:0] csr_imme;
wire [63:0] imme_cs = {59'd0,csr_inst[19:15]};                         //C & S-type 零扩展
wire [63:0] imme_w  = {clu_rdata[63:5],csr_inst[19:15]};             //W-type 
wire [63:0] clu_a_final;

assign      csr_imme    = (clu_sel == `clu_c) || (clu_sel == `clu_s) ? imme_cs : imme_w;
assign      clu_a_final = csr_inst[14] ? csr_imme : clu_a;             //指令第15位 可以用来区分是否为立即数

assign      clu_raddr = csr_inst[31:20];  

assign      clu_wen   = (clu_sel == `clu_w) || (clu_sel == `clu_c) || (clu_sel == `clu_s) && clu_valid; //csr 写使能 为CSR指令 且 使能clu
assign      clu_waddr = csr_inst[31:20];                                                                //选择要操作的csr
assign      clu_wdata =  ({64{clu_sel == `clu_w }} & (clu_a_final               ))
                         | ({64{clu_sel == `clu_s }} & (clu_rdata |  clu_a_final))
                         | ({64{clu_sel == `clu_c }} & (clu_rdata & ~clu_a_final));

assign      clu_result  = clu_rdata;

assign      exception_tpye[0] = (clu_sel == `clu_ecall ) && clu_valid;//ecall
assign      exception_tpye[1] = (clu_sel == `clu_ebreak) && clu_valid;//ebreak
assign      exception_tpye[2] = (clu_sel == `clu_mret  ) && clu_valid;//mret
assign      exception_tpye[3] =  clu_valid && illegalInst;            //illegalInst
assign      exception_tpye[4] = 1'b0;                                 //clint
assign      exception_tpye[5] = 1'b0;                                 //fence.i

endmodule
