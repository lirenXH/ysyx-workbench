//`include"./ysyx_22040759_define.v"
//module ysyx_22040759_hazard(
//	input   			 clk 				 ,
//    input                rst                 ,
//	input    [4:0]       IF_ID_rs1           ,  //ds_es
//	input    [4:0]       IF_ID_rs2           ,
//	input    [4:0]       ID_EX_rd            ,
//	input                ID_EX_memread       ,
//	output   reg         pcwrite             ,
//	output   reg         IF_ID_write         ,
//	output   reg         en_control          
//    );
//	reg hazard_reg;
//	wire hazard_take;
//	assign hazard_take = ID_EX_memread && ((ID_EX_rd == IF_ID_rs1) || (ID_EX_rd == IF_ID_rs2));//为load指令 且 下一条指令源操作数是load所读寄存器
//
//	always@(*)begin
//		if(rst)begin
//			pcwrite       = 1'b0;
//			IF_ID_write   = 1'b0;
//			en_control    = 1'b0;
//		end
//		else begin
//		  	if(hazard_take && !hazard_reg)begin 
//		   		pcwrite     = 1'b1;
//		   		IF_ID_write = 1'b1;
//		   		en_control  = 1'b1;
//		   	end
//		   	else begin
//		   		pcwrite  =    1'b0;
//		   		IF_ID_write = 1'b0;
//		   		en_control  = 1'b0;
//		   	end
//		end
//	end
//	always@(posedge clk)begin
//			hazard_reg <= hazard_take;
//	end
//endmodule
`include"./ysyx_22040759_define.v"
module ysyx_22040759_hazard(
    input                rst                 ,
	input    [4:0]       IF_ID_rs1           ,  //ds_es
	input    [4:0]       IF_ID_rs2           ,
	input    [4:0]       ID_EX_rd            ,
	//input                ID_EX_memread       ,
	input 			     EX_MEM_memread		 ,
	output   reg         pcwrite             ,
	output   reg         IF_ID_write         ,
	output   reg         en_control          
    );
	
	always@(*)
	if(rst)begin
	pcwrite       = 1'd0;
	IF_ID_write   = 1'd0;
	en_control    = 1'd0;
	end
	else begin
	  //if(ID_EX_memread && ((ID_EX_rd == IF_ID_rs1) || (ID_EX_rd == IF_ID_rs2)))begin //为load指令 且 下一条指令源操作数是load所读寄存器
	  if(EX_MEM_memread)begin
	   pcwrite     = 1'b1;
	   IF_ID_write = 1'b1;
	   en_control  = 1'b1;
	   end
	   else begin
	   pcwrite  =    1'b0;
	   IF_ID_write = 1'b0;
	   en_control  = 1'b0;
	   end
	end
	
endmodule
