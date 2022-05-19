`include "./vsrc/ysyx_22040759_inst.v"
`include "./vsrc/ysyx_22040759_define.v"
module ysyx_22040759_inst_control(                     //译码+控制
    input    [31:0]    inst         ,
    output   [63:0]    imme_o       ,
    output   [4:0]     rs1_o        ,                          //rs1_addr
    output   [4:0]     rs2_o        ,                          //rs2_addr
    output   [4:0]     rd_o         ,                          //rd _addr
    output   [1:0]     alu_a_sel    ,
    output   [1:0]     alu_b_sel    ,
    output   [3:0]     alu_sel      ,
    output   [1:0]     pc_sel       ,
    output             reg_wen      ,
    output             mem_wen      ,
    output             mem_ren      ,
    output   [2:0]     func3        ,
    output   [1:0]     wreg_sel     
    );

    assign rs1_o=inst[19:15];
    assign rs2_o=inst[24:20];
    assign rd_o =inst[11:7] ;
    assign func3=inst[14:12];
    //立即数拓展
    wire [63:0] imme_u  ={{32{inst[31]}},inst[31:12],12'b0};                         //U-type
    wire [63:0] imme_i  ={{52{inst[31]}},inst[31:20]};                               //I-type   
    wire [63:0] imme_j  ={{44{inst[31]}},inst[19:12],inst[20],inst[30:21],1'b0};     //J-type
    wire [63:0] imme_s  ={{52{inst[31]}},inst[31:25],inst[11:7]};                    //S-type
    wire [63:0] imme_b  ={{52{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0};       //B-type
    //wire [6:0]  opcode  =inst[6:0]  ;
    reg  [17:0] con_signal;
    //译码
    always@(*)begin
        casez(inst)
                                   //     3        4       2          2          1         2       2            1       1     
                                   // imme_sel alu_sel    alu_a_sel  alu_b_sel  reg_wen   pc_sel  wreg_sel    mem_wen mem_ren  
            `addi   :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `auipc  :      con_signal={`imm_u,`alu_add  ,`alu_a_pc ,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `lui    :      con_signal={`imm_u,`alu_add  ,`alu_a_0  ,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `jal    :      con_signal={`imm_j,`alu_add  ,`alu_a_pc ,`alu_b_imm,`reg_wen ,`pc_alu,`wreg_pc ,    `N   ,  `N    };
            `jalr   :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_alu,`wreg_pc ,    `N   ,  `N    };
            `sd     :      con_signal={`imm_s,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_nwen,`pc_pc ,`wreg_xx ,    `Y   ,  `N    };
            `ld     :      con_signal={`imm_i,`alu_add  ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_ram,    `N   ,  `Y    };
            `add    :      con_signal={`imm_x,`alu_add  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `addiw  :      con_signal={`imm_i,`alu_addw ,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `sub    :      con_signal={`imm_x,`alu_sub  ,`alu_a_reg,`alu_b_reg,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    };
            `sltiu  :      con_signal={`imm_i,`alu_sltiu,`alu_a_reg,`alu_b_imm,`reg_wen ,`pc_pc ,`wreg_alu,    `N   ,  `N    }; 
            //fenzhi
            `bne    :      con_signal={`imm_b,`blu_bne  ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`blu_pc,`wreg_xx ,    `N   ,  `N    };
            `beq    :      con_signal={`imm_b,`blu_beq  ,`alu_a_x  ,`alu_b_x  ,`reg_nwen,`blu_pc,`wreg_xx ,    `N   ,  `N    };
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
            mem_ren     } = con_signal[14:0];
    //立即数选择
    assign imme_o      = ({64{con_signal[17:15] == `imm_i}} & imme_i) | 
                         ({64{con_signal[17:15] == `imm_u}} & imme_u) | 
                         ({64{con_signal[17:15] == `imm_j}} & imme_j) |
                         ({64{con_signal[17:15] == `imm_s}} & imme_s) |
                         ({64{con_signal[17:15] == `imm_b}} & imme_b) ;
                         
endmodule
