`include"./ysyx_22040759_inst.v"
`include"./ysyx_22040759_define.v"
module ysyx_22040759_ID(
    input              clk           ,
    input              rst           ,
        //allowin
    input              es_allowin    ,
    output             ds_allowin    ,
        //from fs
    input              fs_to_ds_valid,
    input    [95:0]    fs_to_ds_bus  ,
    input              jump_r        ,
        //from hazard
    input              en_control    ,
    input              IF_ID_write   ,
        //to es
    output             ds_to_es_valid,  
    output   [322:0]   ds_to_es_bus  , //control signal bus
        //to hazard
    output   [4:0]     rs1_o         ,    
    output   [4:0]     rs2_o         ,
        //to rf: for write back
    input    [69:0]    ws_to_rf_bus  ,
        //to brush
    input              ds_br_taken,   //bru_to_fs_bus[64]
        //to test
    output [63:0]      regs_ds_o [31:0]        // difftest
    );
    wire   [31:0]    inst          ;
    wire   [63:0]    imme_o        ;  //wire
    //wire   [4:0]     rs1_o         ;  //wire                        //rs1_addr
    //wire   [4:0]     rs2_o         ;  //wire                        //rs2_addr
    wire   [63:0]    src1          ;
    wire   [63:0]    src2          ;
    wire   [4:0]     rd_o          ;  //wire                        //rd _addr
    wire   [1:0]     alu_a_sel     ;  //wire
    wire   [1:0]     alu_b_sel     ;  //wire
    wire   [4:0]     alu_sel       ;  //wire
    wire   [1:0]     pc_sel        ;  //wire
    wire             reg_wen       ;  //wire
    wire             mem_wen       ;  //wire
    wire             mem_ren       ;  //wire
    wire   [2:0]     func3         ;  //to  data ram  wire
    wire   [1:0]     wreg_sel      ;  //wire
    wire             jump_flag     ;

    reg         ds_valid   ;
    wire        ds_ready_go;

    //wire [63:0] fs_pc;
    reg  [95:0] fs_to_ds_bus_r;

    wire [31:0] ds_inst;
    wire [63:0] ds_pc  ;
    wire [63:0] ds_pc_final  ;
    assign {ds_inst,
            ds_pc  
           } = fs_to_ds_bus_r;

    wire        rf_wen   ;
    wire [ 4:0] rf_waddr;
    wire [63:0] rf_wdata;
    assign {rf_wen   ,  //69:69
            rf_waddr,  //68:64
            rf_wdata   //63:0
           } = ws_to_rf_bus;
    
    assign ds_ready_go    = 1'b1;
    assign ds_allowin     = (!ds_valid || ds_ready_go && es_allowin)&& !IF_ID_write;
    //assign ds_ready_go    = !IF_ID_write;
    //assign ds_allowin     = !ds_valid || ds_ready_go && es_allowin;
    assign ds_to_es_valid = ds_valid && ds_ready_go;
    always @(posedge clk) begin
        //---------------------------------
        if (rst) begin
            ds_valid <= 1'b0;
        end
        else if (ds_allowin) begin
            ds_valid <= fs_to_ds_valid;
        end
        //---------------------------------
        if (fs_to_ds_valid && ds_allowin) begin
            fs_to_ds_bus_r <= fs_to_ds_bus;
        end
        //else if(!fs_to_ds_valid)begin
        //    fs_to_ds_bus_r <= {32'h13,64'h0};
        //end
    end

    ///--------------------------------------------------------
    assign rs1_o=inst[19:15];
    assign rs2_o=inst[24:20];
    assign rd_o =inst[11:7] ;
    assign func3=inst[14:12];
    //
    //立即数拓展
    wire [63:0] imme_u  ={{32{inst[31]}},inst[31:12],12'b0};                         //U-type
    wire [63:0] imme_i  ={{52{inst[31]}},inst[31:20]};                               //I-type   
    wire [63:0] imme_j  ={{44{inst[31]}},inst[19:12],inst[20],inst[30:21],1'b0};     //J-type
    wire [63:0] imme_s  ={{52{inst[31]}},inst[31:25],inst[11:7]};                    //S-type
    wire [63:0] imme_b  ={{52{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0};       //B-type
    //wire [6:0]  opcode  =inst[6:0]  ;
    reg  [19:0] con_signal;
    //译码
    assign inst = jump_r ? 32'h13 : ds_inst;

    always@(*)begin
        if(en_control==0)begin
        casez(inst)
                                   //     3        5       2          2          1         2       2            1       1          1
                                   // imme_sel alu_sel    alu_a_sel  alu_b_sel  reg_wen   pc_sel  wreg_sel   mem_wen mem_ren  jump_flag
            `auipc  :      con_signal={`imm_u,`alu_add  ,`alu_a_pc ,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `lui    :      con_signal={`imm_u,`alu_add  ,`alu_a_0  ,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `jal    :      con_signal={`imm_j,`alu_add  ,`alu_a_pc ,`alu_b_imm,`reg_wen ,`pc_alu,`wreg_pc ,   `N   ,  `N    ,   `Y};
            `jalr   :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_alu,`wreg_pc ,   `N   ,  `N    ,   `Y};
            `sh     :      con_signal={`imm_s,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_nwen,`pc_pc ,`wreg_xx ,   `Y   ,  `Y    ,   `N};
            `sd     :      con_signal={`imm_s,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_nwen,`pc_pc ,`wreg_xx ,   `Y   ,  `Y    ,   `N};
            `sw     :      con_signal={`imm_s,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_nwen,`pc_pc ,`wreg_xx ,   `Y   ,  `Y    ,   `N};
            `sb     :      con_signal={`imm_s,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_nwen,`pc_pc ,`wreg_xx ,   `Y   ,  `Y    ,   `N};
            `lb     :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_ram,   `N   ,  `Y    ,   `N};
            `ld     :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_ram,   `N   ,  `Y    ,   `N};
            `lw     :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_ram,   `N   ,  `Y    ,   `N};
            `lh     :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_ram,   `N   ,  `Y    ,   `N};
            `lwu    :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_ram,   `N   ,  `Y    ,   `N};
            `lhu    :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_ram,   `N   ,  `Y    ,   `N};
            `lbu    :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_ram,   `N   ,  `Y    ,   `N};
            `and    :      con_signal={`imm_r,`alu_and  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `andi   :      con_signal={`imm_i,`alu_and  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `add    :      con_signal={`imm_r,`alu_add  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `or     :      con_signal={`imm_r,`alu_or   ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `ori    :      con_signal={`imm_i,`alu_or   ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `xor    :      con_signal={`imm_r,`alu_xor  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `xori   :      con_signal={`imm_i,`alu_xor  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `mul    :      con_signal={`imm_r,`alu_mul  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `mulw   :      con_signal={`imm_r,`alu_mulw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `div    :      con_signal={`imm_r,`alu_div  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `divu   :      con_signal={`imm_r,`alu_divu ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `divw   :      con_signal={`imm_r,`alu_divw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `rem    :      con_signal={`imm_r,`alu_rem  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `remu   :      con_signal={`imm_r,`alu_remu ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `remw   :      con_signal={`imm_r,`alu_remw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `addi   :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `addw   :      con_signal={`imm_r,`alu_addw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `addiw  :      con_signal={`imm_i,`alu_addw ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `sub    :      con_signal={`imm_r,`alu_sub  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `subw   :      con_signal={`imm_r,`alu_subw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `slti   :      con_signal={`imm_i,`alu_slt  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `sltiu  :      con_signal={`imm_i,`alu_sltu ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `slt    :      con_signal={`imm_r,`alu_slt  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N}; 
            `sltu   :      con_signal={`imm_r,`alu_sltu ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N}; 
            `sra    :      con_signal={`imm_r,`alu_sra  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `srai   :      con_signal={`imm_i,`alu_sra  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `sraw   :      con_signal={`imm_r,`alu_sraw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `sraiw  :      con_signal={`imm_i,`alu_sraw ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `slliw  :      con_signal={`imm_i,`alu_sllw ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `sllw   :      con_signal={`imm_r,`alu_sllw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `sll    :      con_signal={`imm_r,`alu_sll  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `slli   :      con_signal={`imm_i,`alu_sll  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `srl    :      con_signal={`imm_r,`alu_srl  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `srli   :      con_signal={`imm_i,`alu_srl  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `srlw   :      con_signal={`imm_r,`alu_srlw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            `srliw  :      con_signal={`imm_i,`alu_srlw ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            //fenzhi
            `bne    :      con_signal={`imm_b,`bru_bne  ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`bru_pc,`wreg_xx ,   `N   ,  `N    ,   `Y};
            `beq    :      con_signal={`imm_b,`bru_beq  ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`bru_pc,`wreg_xx ,   `N   ,  `N    ,   `Y};
            `bge    :      con_signal={`imm_b,`bru_bge  ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`bru_pc,`wreg_xx ,   `N   ,  `N    ,   `Y};
            `blt    :      con_signal={`imm_b,`bru_blt  ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`bru_pc,`wreg_xx ,   `N   ,  `N    ,   `Y};
            `bltu   :      con_signal={`imm_b,`bru_bltu ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`bru_pc,`wreg_xx ,   `N   ,  `N    ,   `Y};
            `bgeu   :      con_signal={`imm_b,`bru_bgeu ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`bru_pc,`wreg_xx ,   `N   ,  `N    ,   `Y};
            `ebreak :      con_signal={`imm_x,`alu_xxx  ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`pc_pc ,`wreg_xx ,   `N   ,  `N    ,   `N};
            `nop    :      con_signal={`imm_i,`alu_add  ,`alu_a_0  ,`alu_b_0  ,`reg_nwen,`pc_pc ,`wreg_alu,   `N   ,  `N    ,   `N};
            default :      con_signal={`imm_x,`alu_xxx  ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`pc_pc ,`wreg_xx ,   `N   ,  `N    ,   `N};
        endcase
        end
        else begin
            con_signal = 20'b0;//$display("hazard!");
        end
    end
    //控制信号产生
    assign {alu_sel     ,
            alu_a_sel   ,
            alu_b_sel   ,
            reg_wen     ,
            pc_sel      ,
            wreg_sel    ,
            mem_wen     ,
            mem_ren     ,
            jump_flag   } = con_signal[16:0];
    //立即数选择
    assign imme_o      = ({64{con_signal[19:17] == `imm_i}} & imme_i) | 
                         ({64{con_signal[19:17] == `imm_u}} & imme_u) | 
                         ({64{con_signal[19:17] == `imm_j}} & imme_j) |
                         ({64{con_signal[19:17] == `imm_s}} & imme_s) |
                         ({64{con_signal[19:17] == `imm_b}} & imme_b) ;
    assign ds_pc_final  = (jump_r || IF_ID_write) ? 64'd0 : ds_pc;
    assign ds_to_es_bus = {
                           inst         ,  //322 : 291 ds_inst
                           rs1_o        ,  //290 ：286 前递
                           rs2_o        ,  //285 ：281 前递                            
                           pc_sel       ,  //280 : 279
                           jump_flag    ,  //278 : 278
                           mem_wen      ,  //277 : 277
                           mem_ren      ,  //276 : 276
                           alu_sel      ,  //275 : 271 alu功能选择       5
                           alu_a_sel    ,  //270 : 269 操作1选择         2
                           alu_b_sel    ,  //268 : 267 操作2选择         2
                           reg_wen      ,  //266 : 266 寄存器堆写回使能   1
                           wreg_sel     ,  //265 : 264 WB写回选择        2
                           rd_o         ,  //263 : 259 WB写回目标寄存器   5
                           imme_o       ,  //258 : 195 EXE立即数        64
                           func3        ,  //194 : 192 d_ram掩码        3
                           src1         ,  //191 : 128 reg_src1        64
                           src2         ,  //127 : 64  reg_src2        64
                           ds_pc_final     //63  : 0   正在运行指令PC    64
                           };

    ysyx_22040759_GPR GPR (
    .clk       (clk),
    .rst       (rst),
    .wdata     (rf_wdata),
    .waddr     (rf_waddr),
    .raddr1    (rs1_o),
    .raddr2    (rs2_o),
    .wen       (rf_wen),
    .rdata1    (src1),
    .rdata2    (src2),
    .regs_o    (regs_ds_o)
    );
endmodule
