`include"./vsrc/ysyx_22040759_inst.v"
`include"./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_ID(
    input    [31:0]    inst          ,
    input              clk           ,
    input              rst           ,
        //allowin
    input              es_allowin    ,
    output             ds_allowin    ,
        //from fs
    input              fs_to_ds_valid,
    input    [95:0]    fs_to_ds_bus  ,
        //to fs
    output   [64:0]    br_bus        ,
        //to es
    output             ds_to_es_valid,  
    output   [275:0]   ds_to_es_bus  , //control signal bus
        //to rf: for write back
    input    [69:0]    ws_to_rf_bus  ,
        //to test
    output   [63:0]    a0
    );

    wire   [63:0]    imme_o        ;  //wire
    wire   [4:0]     rs1_o         ;  //wire                        //rs1_addr
    wire   [4:0]     rs2_o         ;  //wire                        //rs2_addr
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

    reg         ds_valid   ;
    wire        ds_ready_go;

    wire [63:0] fs_pc;
    reg  [95:0] fs_to_ds_bus_r;
    assign fs_pc = fs_to_ds_bus[63:0];  //fs_pc 比 ds_pc提前一拍获得值

    wire [31:0] ds_inst;
    wire [63:0] ds_pc  ;
    assign {ds_inst,ds_pc  } = fs_to_ds_bus_r;

    wire        rf_we   ;
    wire [ 4:0] rf_waddr;
    wire [63:0] rf_wdata;
    assign {rf_we   ,  //69:69
            rf_waddr,  //68:64
            rf_wdata   //63:0
           } = ws_to_rf_bus;

    wire        br_taken;
    wire [31:0] br_target;

    assign br_bus       = {br_taken,br_target};
    
    assign ds_ready_go    = 1'b1;
    assign ds_allowin     = !ds_valid || ds_ready_go && es_allowin;
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
    reg  [18:0] con_signal;
    //译码
    always@(*)begin
        casez(inst)
                                   //     3        5       2          2          1         2       2            1       1     
                                   // imme_sel alu_sel    alu_a_sel  alu_b_sel  reg_wen   pc_sel  wreg_sel    mem_wen mem_ren  
            `auipc  :      con_signal={`imm_u,`alu_add  ,`alu_a_pc ,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `lui    :      con_signal={`imm_u,`alu_add  ,`alu_a_0  ,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `jal    :      con_signal={`imm_j,`alu_add  ,`alu_a_pc ,`alu_b_imm,`reg_wen ,`pc_alu,`wreg_pc ,    `N   ,  `N    };
            `jalr   :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_alu,`wreg_pc ,    `N   ,  `N    };
            `sh     :      con_signal={`imm_s,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_nwen,`pc_pc ,`wreg_xx ,    `Y   ,  `N    };
            `sd     :      con_signal={`imm_s,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_nwen,`pc_pc ,`wreg_xx ,    `Y   ,  `N    };
            `sw     :      con_signal={`imm_s,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_nwen,`pc_pc ,`wreg_xx ,    `Y   ,  `N    };
            `sb     :      con_signal={`imm_s,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_nwen,`pc_pc ,`wreg_xx ,    `Y   ,  `N    };
            `ld     :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_ram,    `N   ,  `Y    };
            `lw     :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_ram,    `N   ,  `Y    };
            `lh     :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_ram,    `N   ,  `Y    };
            `lhu    :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_ram,    `N   ,  `Y    };
            `lbu    :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_ram,    `N   ,  `Y    };
            `and    :      con_signal={`imm_r,`alu_and  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `andi   :      con_signal={`imm_i,`alu_and  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `add    :      con_signal={`imm_r,`alu_add  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `or     :      con_signal={`imm_r,`alu_or   ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `xori   :      con_signal={`imm_i,`alu_xor  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `mul    :      con_signal={`imm_r,`alu_mul  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `mulw   :      con_signal={`imm_r,`alu_mulw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `div    :      con_signal={`imm_r,`alu_div  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `divw   :      con_signal={`imm_r,`alu_divw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `rem    :      con_signal={`imm_r,`alu_rem  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `remw   :      con_signal={`imm_r,`alu_remw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `addi   :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `addw   :      con_signal={`imm_r,`alu_addw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `addiw  :      con_signal={`imm_i,`alu_addw ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `sub    :      con_signal={`imm_r,`alu_sub  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `subw   :      con_signal={`imm_r,`alu_subw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `sltiu  :      con_signal={`imm_i,`alu_sltu ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `slt    :      con_signal={`imm_r,`alu_slt  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    }; 
            `sltu   :      con_signal={`imm_r,`alu_sltu ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    }; 
            `srai   :      con_signal={`imm_i,`alu_sra  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `sraw   :      con_signal={`imm_r,`alu_sraw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `sraiw  :      con_signal={`imm_i,`alu_sraw ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `slliw  :      con_signal={`imm_i,`alu_sllw ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `sllw   :      con_signal={`imm_r,`alu_sllw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `slli   :      con_signal={`imm_i,`alu_sll  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `srli   :      con_signal={`imm_i,`alu_srl  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `srlw   :      con_signal={`imm_r,`alu_srlw ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `srliw  :      con_signal={`imm_i,`alu_srlw ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            //fenzhi
            `bne    :      con_signal={`imm_b,`blu_bne  ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`blu_pc,`wreg_xx ,    `N   ,  `N    };
            `beq    :      con_signal={`imm_b,`blu_beq  ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`blu_pc,`wreg_xx ,    `N   ,  `N    };
            `bge    :      con_signal={`imm_b,`blu_bge  ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`blu_pc,`wreg_xx ,    `N   ,  `N    };
            `blt    :      con_signal={`imm_b,`blu_blt  ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`blu_pc,`wreg_xx ,    `N   ,  `N    };
            `bltu   :      con_signal={`imm_b,`blu_bltu ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`blu_pc,`wreg_xx ,    `N   ,  `N    };
            `bgeu   :      con_signal={`imm_b,`blu_bgeu ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`blu_pc,`wreg_xx ,    `N   ,  `N    };
            `ebreak :      con_signal={`imm_x,`alu_xxx  ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`pc_pc ,`wreg_xx ,    `N   ,  `N    };
            default :begin con_signal={`imm_x,`alu_xxx  ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`pc_pc ,`wreg_xx ,    `N   ,  `N    };$display("unknown inst!");end
        endcase
    end
    //控制信号产生
    assign {alu_sel     ,
            alu_a_sel   ,
            alu_b_sel   ,
            reg_wen     ,
            pc_sel      ,
            wreg_sel    ,
            mem_wen     ,
            mem_ren     } = con_signal[15:0];
    //立即数选择
    assign imme_o      = ({64{con_signal[18:16] == `imm_i}} & imme_i) | 
                         ({64{con_signal[18:16] == `imm_u}} & imme_u) | 
                         ({64{con_signal[18:16] == `imm_j}} & imme_j) |
                         ({64{con_signal[18:16] == `imm_s}} & imme_s) |
                         ({64{con_signal[18:16] == `imm_b}} & imme_b) ;

    assign ds_to_es_bus = {alu_sel      ,  //275 : 271 alu功能选择       5
                           alu_a_sel    ,  //270 : 269 操作1选择         2
                           alu_b_sel    ,  //268 : 267 操作2选择         2
                           reg_wen      ,  //266 : 266 寄存器堆写回使能   1
                           wreg_sel     ,  //265 : 264 WB写回选择        2
                           rd_o         ,  //263 : 259 WB写回目标寄存器   5
                           imme_o       ,  //258 : 195 EXE立即数        64
                           func3        ,  //194 : 192 d_ram掩码        3
                           src1         ,  //191 : 128 reg_src1        64
                           src2         ,  //127 : 64  reg_src2        64
                           ds_pc           //63  : 0   正在运行指令PC    64
                           };

    ysyx_22040759_GPR GPR (
    .clk       (clk),
    .rst       (rst),
    .wdata     (rf_wdata),
    .waddr     (rf_waddr),
    .raddr1    (rs1_o),
    .raddr2    (rs2_o),
    .wen       (rf_we),
    .rdata1    (src1),
    .rdata2    (src2),
    .a0        (a0)             //sim test
    );
endmodule
