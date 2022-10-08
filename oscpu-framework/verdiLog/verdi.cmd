verdiWindowResize -win $_Verdi_1 "71" "26" "3766" "1856"
debImport "-f" "./flist.f"
wvCreateWindow
wvOpenFile -win $_nWave2 \
           {/home/xuhao/learngit/ysyx-workbench/oscpu-framework/wave.fsdb}
wvRestoreSignal -win $_nWave2 "signal.rc" -overWriteAutoAlias on
wvSelectGroup -win $_nWave2 {pc}
wvSetPosition -win $_nWave2 {("pc" 0)}
wvSetPosition -win $_nWave2 {("AXI_write" 10)}
wvSetPosition -win $_nWave2 {("AXI_write" 4)}
wvSetPosition -win $_nWave2 {("AXI_write" 0)}
wvSetPosition -win $_nWave2 {("G2" 6)}
wvSetPosition -win $_nWave2 {("G2" 2)}
wvSetPosition -win $_nWave2 {("G1" 4)}
wvSetPosition -win $_nWave2 {("G1" 1)}
wvSetPosition -win $_nWave2 {("AXI_read" 9)}
wvSetPosition -win $_nWave2 {("AXI_read" 7)}
wvSetPosition -win $_nWave2 {("AXI_read" 6)}
wvSetPosition -win $_nWave2 {("AXI_read" 5)}
wvSetPosition -win $_nWave2 {("AXI_read" 4)}
wvSetPosition -win $_nWave2 {("AXI_read" 3)}
wvSetPosition -win $_nWave2 {("AXI_read" 2)}
wvSetPosition -win $_nWave2 {("AXI_read" 1)}
wvSetPosition -win $_nWave2 {("AXI_read" 0)}
wvSetPosition -win $_nWave2 {("normal" 5)}
wvSetPosition -win $_nWave2 {("normal" 4)}
wvSetPosition -win $_nWave2 {("normal" 3)}
wvSetPosition -win $_nWave2 {("normal" 2)}
wvSetPosition -win $_nWave2 {("normal" 1)}
wvSetPosition -win $_nWave2 {("inst" 6)}
wvSetPosition -win $_nWave2 {("inst" 4)}
wvSetPosition -win $_nWave2 {("inst" 3)}
wvSetPosition -win $_nWave2 {("inst" 2)}
wvSetPosition -win $_nWave2 {("inst" 1)}
wvSetPosition -win $_nWave2 {("inst" 0)}
wvSetPosition -win $_nWave2 {("G3" 0)}
wvMoveSelected -win $_nWave2
wvSetPosition -win $_nWave2 {("G3" 0)}
wvSelectSignal -win $_nWave2 {( "pc" 5 )} 
wvSetSearchMode -win $_nWave2 -value 80000040
wvSearchPrev -win $_nWave2
wvZoom -win $_nWave2 13466.131885 13473.565142
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvSelectGroup -win $_nWave2 {cache}
wvSelectGroup -win $_nWave2 {cache}
wvScrollDown -win $_nWave2 0
wvGetSignalOpen -win $_nWave2
wvGetSignalSetScope -win $_nWave2 "/TOP/SimTop"
wvGetSignalSetScope -win $_nWave2 "/TOP/SimTop/u_cpu"
wvGetSignalSetScope -win $_nWave2 "/TOP/SimTop/u_cpu/dcache"
wvSetPosition -win $_nWave2 {("G3" 4)}
wvSetPosition -win $_nWave2 {("G3" 4)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G3" \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} \
{/TOP/SimTop/u_cpu/dcache/ram_dcache_data_read\[63:0\]} \
{/TOP/SimTop/u_cpu/dcache/out_data\[127:0\]} \
}
wvAddSignal -win $_nWave2 -group {"pc" \
{/TOP/SimTop/u_cpu/IF/fs_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/ID/ds_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/EXE/es_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/MEM/ms_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/WB/ws_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/cmt_pc\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"inst" \
{/TOP/SimTop/u_cpu/IF/fs_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/ID/ds_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/EXE/es_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/MEM/ms_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/WB/ws_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/cmt_inst\[31:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"normal" \
{/TOP/SimTop/u_cpu/IF/fs_to_ds_valid} -height 20 \
{/TOP/SimTop/u_cpu/EXE/ds_to_es_valid} -height 20 \
{/TOP/SimTop/u_cpu/EXE/es_to_ms_valid} -height 20 \
{/TOP/SimTop/u_cpu/MEM/ms_to_ws_valid} -height 20 \
{/TOP/SimTop/u_cpu/WB/ws_valid} -height 20 \
{/TOP/SimTop/u_cpu/cmt_valid} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"AXI_read" \
{/TOP/SimTop/u_axi/rdaxi/r_state\[1:0\]} -height 20 \
{/TOP/SimTop/u_axi/axi_ar_ready_i} -height 20 \
{/TOP/SimTop/u_axi/axi_ar_valid_o} -height 20 \
{/TOP/SimTop/u_axi/axi_r_ready_o} -height 20 \
{/TOP/SimTop/u_axi/axi_r_valid_i} -height 20 \
{/TOP/SimTop/u_axi/axi_r_data_i\[63:0\]} -height 20 \
{/TOP/SimTop/u_axi/rdaxi/rdaxi_data_o\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_data_valid} -height 20 \
{/TOP/SimTop/u_cpu/icache/ram_icache_rdata\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"cache" \
{/TOP/SimTop/u_cpu/icache/icache_ren} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_if_data_o\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_if_ready} -height 20 \
{/TOP/SimTop/u_cpu/icache/ram_icache_rdata\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_data_valid} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_ram_ren} -height 20 \
}
wvCollapseGroup -win $_nWave2 "cache"
wvAddSignal -win $_nWave2 -group {"G1" \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_data_write\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/lsu_dcache_invalidate_i} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_size\[2:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_data_write\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/lsu_dcache_invalidate_i} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_size\[2:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_data_write\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_size\[2:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/ram_dcache_data_read\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"AXI_write" \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_axi/wraxi/w_state\[1:0\]} -height 20 \
{/TOP/SimTop/u_axi/axi_aw_ready_i} -height 20 \
{/TOP/SimTop/u_axi/axi_aw_valid_o} -height 20 \
{/TOP/SimTop/u_axi/axi_w_ready_i} -height 20 \
{/TOP/SimTop/u_axi/axi_w_valid_o} -height 20 \
{/TOP/SimTop/u_axi/axi_w_data_o\[63:0\]} -height 20 \
{/TOP/SimTop/u_axi/axi_b_ready_o} -height 20 \
{/TOP/SimTop/u_axi/axi_b_valid_i} -height 20 \
{/TOP/SimTop/u_axi/axi_b_resp_i\[1:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"G7" \
}
wvSelectSignal -win $_nWave2 {( "G3" 4 )} 
wvSetPosition -win $_nWave2 {("G3" 4)}
wvGetSignalClose -win $_nWave2
wvSelectSignal -win $_nWave2 {( "G3" 4 )} 
wvSelectSignal -win $_nWave2 {( "G3" 3 )} 
wvSelectSignal -win $_nWave2 {( "G3" 1 )} 
wvCut -win $_nWave2
wvSetPosition -win $_nWave2 {("pc" 0)}
wvSetPosition -win $_nWave2 {("G3" 3)}
wvGetSignalOpen -win $_nWave2
wvGetSignalSetScope -win $_nWave2 "/TOP"
wvGetSignalSetScope -win $_nWave2 "/TOP/SimTop"
wvGetSignalSetScope -win $_nWave2 "/TOP/SimTop/u_cpu"
wvGetSignalSetScope -win $_nWave2 "/TOP/SimTop/u_cpu/dcache"
wvGetSignalSetScope -win $_nWave2 "/TOP/SimTop/u_cpu/dcache"
wvSetPosition -win $_nWave2 {("G3" 4)}
wvSetPosition -win $_nWave2 {("G3" 4)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G3" \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} \
{/TOP/SimTop/u_cpu/dcache/ram_dcache_data_read\[63:0\]} \
{/TOP/SimTop/u_cpu/dcache/out_data\[127:0\]} \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_data_write\[63:0\]} \
}
wvAddSignal -win $_nWave2 -group {"pc" \
{/TOP/SimTop/u_cpu/IF/fs_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/ID/ds_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/EXE/es_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/MEM/ms_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/WB/ws_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/cmt_pc\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"inst" \
{/TOP/SimTop/u_cpu/IF/fs_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/ID/ds_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/EXE/es_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/MEM/ms_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/WB/ws_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/cmt_inst\[31:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"normal" \
{/TOP/SimTop/u_cpu/IF/fs_to_ds_valid} -height 20 \
{/TOP/SimTop/u_cpu/EXE/ds_to_es_valid} -height 20 \
{/TOP/SimTop/u_cpu/EXE/es_to_ms_valid} -height 20 \
{/TOP/SimTop/u_cpu/MEM/ms_to_ws_valid} -height 20 \
{/TOP/SimTop/u_cpu/WB/ws_valid} -height 20 \
{/TOP/SimTop/u_cpu/cmt_valid} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"AXI_read" \
{/TOP/SimTop/u_axi/rdaxi/r_state\[1:0\]} -height 20 \
{/TOP/SimTop/u_axi/axi_ar_ready_i} -height 20 \
{/TOP/SimTop/u_axi/axi_ar_valid_o} -height 20 \
{/TOP/SimTop/u_axi/axi_r_ready_o} -height 20 \
{/TOP/SimTop/u_axi/axi_r_valid_i} -height 20 \
{/TOP/SimTop/u_axi/axi_r_data_i\[63:0\]} -height 20 \
{/TOP/SimTop/u_axi/rdaxi/rdaxi_data_o\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_data_valid} -height 20 \
{/TOP/SimTop/u_cpu/icache/ram_icache_rdata\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"cache" \
{/TOP/SimTop/u_cpu/icache/icache_ren} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_if_data_o\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_if_ready} -height 20 \
{/TOP/SimTop/u_cpu/icache/ram_icache_rdata\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_data_valid} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_ram_ren} -height 20 \
}
wvCollapseGroup -win $_nWave2 "cache"
wvAddSignal -win $_nWave2 -group {"G1" \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_data_write\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/lsu_dcache_invalidate_i} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_size\[2:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_data_write\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/lsu_dcache_invalidate_i} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_size\[2:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_data_write\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_size\[2:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/ram_dcache_data_read\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"AXI_write" \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_axi/wraxi/w_state\[1:0\]} -height 20 \
{/TOP/SimTop/u_axi/axi_aw_ready_i} -height 20 \
{/TOP/SimTop/u_axi/axi_aw_valid_o} -height 20 \
{/TOP/SimTop/u_axi/axi_w_ready_i} -height 20 \
{/TOP/SimTop/u_axi/axi_w_valid_o} -height 20 \
{/TOP/SimTop/u_axi/axi_w_data_o\[63:0\]} -height 20 \
{/TOP/SimTop/u_axi/axi_b_ready_o} -height 20 \
{/TOP/SimTop/u_axi/axi_b_valid_i} -height 20 \
{/TOP/SimTop/u_axi/axi_b_resp_i\[1:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"G7" \
}
wvSelectSignal -win $_nWave2 {( "G3" 4 )} 
wvSetPosition -win $_nWave2 {("G3" 4)}
wvSetPosition -win $_nWave2 {("G3" 5)}
wvSetPosition -win $_nWave2 {("G3" 5)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G3" \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} \
{/TOP/SimTop/u_cpu/dcache/ram_dcache_data_read\[63:0\]} \
{/TOP/SimTop/u_cpu/dcache/out_data\[127:0\]} \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_data_write\[63:0\]} \
{/TOP/SimTop/u_cpu/dcache/ram_dcache_data_read\[63:0\]} \
}
wvAddSignal -win $_nWave2 -group {"pc" \
{/TOP/SimTop/u_cpu/IF/fs_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/ID/ds_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/EXE/es_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/MEM/ms_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/WB/ws_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/cmt_pc\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"inst" \
{/TOP/SimTop/u_cpu/IF/fs_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/ID/ds_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/EXE/es_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/MEM/ms_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/WB/ws_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/cmt_inst\[31:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"normal" \
{/TOP/SimTop/u_cpu/IF/fs_to_ds_valid} -height 20 \
{/TOP/SimTop/u_cpu/EXE/ds_to_es_valid} -height 20 \
{/TOP/SimTop/u_cpu/EXE/es_to_ms_valid} -height 20 \
{/TOP/SimTop/u_cpu/MEM/ms_to_ws_valid} -height 20 \
{/TOP/SimTop/u_cpu/WB/ws_valid} -height 20 \
{/TOP/SimTop/u_cpu/cmt_valid} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"AXI_read" \
{/TOP/SimTop/u_axi/rdaxi/r_state\[1:0\]} -height 20 \
{/TOP/SimTop/u_axi/axi_ar_ready_i} -height 20 \
{/TOP/SimTop/u_axi/axi_ar_valid_o} -height 20 \
{/TOP/SimTop/u_axi/axi_r_ready_o} -height 20 \
{/TOP/SimTop/u_axi/axi_r_valid_i} -height 20 \
{/TOP/SimTop/u_axi/axi_r_data_i\[63:0\]} -height 20 \
{/TOP/SimTop/u_axi/rdaxi/rdaxi_data_o\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_data_valid} -height 20 \
{/TOP/SimTop/u_cpu/icache/ram_icache_rdata\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"cache" \
{/TOP/SimTop/u_cpu/icache/icache_ren} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_if_data_o\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_if_ready} -height 20 \
{/TOP/SimTop/u_cpu/icache/ram_icache_rdata\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_data_valid} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_ram_ren} -height 20 \
}
wvCollapseGroup -win $_nWave2 "cache"
wvAddSignal -win $_nWave2 -group {"G1" \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_data_write\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/lsu_dcache_invalidate_i} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_size\[2:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_data_write\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/lsu_dcache_invalidate_i} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_size\[2:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_data_write\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_size\[2:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/ram_dcache_data_read\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"AXI_write" \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_axi/wraxi/w_state\[1:0\]} -height 20 \
{/TOP/SimTop/u_axi/axi_aw_ready_i} -height 20 \
{/TOP/SimTop/u_axi/axi_aw_valid_o} -height 20 \
{/TOP/SimTop/u_axi/axi_w_ready_i} -height 20 \
{/TOP/SimTop/u_axi/axi_w_valid_o} -height 20 \
{/TOP/SimTop/u_axi/axi_w_data_o\[63:0\]} -height 20 \
{/TOP/SimTop/u_axi/axi_b_ready_o} -height 20 \
{/TOP/SimTop/u_axi/axi_b_valid_i} -height 20 \
{/TOP/SimTop/u_axi/axi_b_resp_i\[1:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"G7" \
}
wvSelectSignal -win $_nWave2 {( "G3" 5 )} 
wvSetPosition -win $_nWave2 {("G3" 5)}
wvSetPosition -win $_nWave2 {("G3" 5)}
wvSetPosition -win $_nWave2 {("G3" 5)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G3" \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} \
{/TOP/SimTop/u_cpu/dcache/ram_dcache_data_read\[63:0\]} \
{/TOP/SimTop/u_cpu/dcache/out_data\[127:0\]} \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_data_write\[63:0\]} \
{/TOP/SimTop/u_cpu/dcache/ram_dcache_data_read\[63:0\]} \
}
wvAddSignal -win $_nWave2 -group {"pc" \
{/TOP/SimTop/u_cpu/IF/fs_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/ID/ds_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/EXE/es_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/MEM/ms_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/WB/ws_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/cmt_pc\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"inst" \
{/TOP/SimTop/u_cpu/IF/fs_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/ID/ds_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/EXE/es_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/MEM/ms_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/WB/ws_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/cmt_inst\[31:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"normal" \
{/TOP/SimTop/u_cpu/IF/fs_to_ds_valid} -height 20 \
{/TOP/SimTop/u_cpu/EXE/ds_to_es_valid} -height 20 \
{/TOP/SimTop/u_cpu/EXE/es_to_ms_valid} -height 20 \
{/TOP/SimTop/u_cpu/MEM/ms_to_ws_valid} -height 20 \
{/TOP/SimTop/u_cpu/WB/ws_valid} -height 20 \
{/TOP/SimTop/u_cpu/cmt_valid} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"AXI_read" \
{/TOP/SimTop/u_axi/rdaxi/r_state\[1:0\]} -height 20 \
{/TOP/SimTop/u_axi/axi_ar_ready_i} -height 20 \
{/TOP/SimTop/u_axi/axi_ar_valid_o} -height 20 \
{/TOP/SimTop/u_axi/axi_r_ready_o} -height 20 \
{/TOP/SimTop/u_axi/axi_r_valid_i} -height 20 \
{/TOP/SimTop/u_axi/axi_r_data_i\[63:0\]} -height 20 \
{/TOP/SimTop/u_axi/rdaxi/rdaxi_data_o\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_data_valid} -height 20 \
{/TOP/SimTop/u_cpu/icache/ram_icache_rdata\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"cache" \
{/TOP/SimTop/u_cpu/icache/icache_ren} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_if_data_o\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_if_ready} -height 20 \
{/TOP/SimTop/u_cpu/icache/ram_icache_rdata\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_data_valid} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_ram_ren} -height 20 \
}
wvCollapseGroup -win $_nWave2 "cache"
wvAddSignal -win $_nWave2 -group {"G1" \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_data_write\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/lsu_dcache_invalidate_i} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_size\[2:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_data_write\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/lsu_dcache_invalidate_i} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_size\[2:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_data_write\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_size\[2:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/ram_dcache_data_read\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"AXI_write" \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_axi/wraxi/w_state\[1:0\]} -height 20 \
{/TOP/SimTop/u_axi/axi_aw_ready_i} -height 20 \
{/TOP/SimTop/u_axi/axi_aw_valid_o} -height 20 \
{/TOP/SimTop/u_axi/axi_w_ready_i} -height 20 \
{/TOP/SimTop/u_axi/axi_w_valid_o} -height 20 \
{/TOP/SimTop/u_axi/axi_w_data_o\[63:0\]} -height 20 \
{/TOP/SimTop/u_axi/axi_b_ready_o} -height 20 \
{/TOP/SimTop/u_axi/axi_b_valid_i} -height 20 \
{/TOP/SimTop/u_axi/axi_b_resp_i\[1:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"G7" \
}
wvSelectSignal -win $_nWave2 {( "G3" 5 )} 
wvSetPosition -win $_nWave2 {("G3" 5)}
wvGetSignalClose -win $_nWave2
wvGetSignalOpen -win $_nWave2
wvGetSignalSetScope -win $_nWave2 "/TOP"
wvGetSignalSetScope -win $_nWave2 "/TOP/SimTop"
wvGetSignalSetScope -win $_nWave2 "/TOP/SimTop/u_cpu"
wvGetSignalSetScope -win $_nWave2 "/TOP/SimTop/u_cpu/dcache"
wvGetSignalSetScope -win $_nWave2 "/TOP/SimTop/u_cpu/dcache"
wvGetSignalSetScope -win $_nWave2 "/TOP/SimTop/u_cpu"
wvGetSignalSetScope -win $_nWave2 "/TOP/SimTop/u_axi"
wvSetPosition -win $_nWave2 {("G3" 6)}
wvSetPosition -win $_nWave2 {("G3" 6)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G3" \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} \
{/TOP/SimTop/u_cpu/dcache/ram_dcache_data_read\[63:0\]} \
{/TOP/SimTop/u_cpu/dcache/out_data\[127:0\]} \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_data_write\[63:0\]} \
{/TOP/SimTop/u_cpu/dcache/ram_dcache_data_read\[63:0\]} \
{/TOP/SimTop/u_axi/axi_w_data_o\[63:0\]} \
}
wvAddSignal -win $_nWave2 -group {"pc" \
{/TOP/SimTop/u_cpu/IF/fs_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/ID/ds_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/EXE/es_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/MEM/ms_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/WB/ws_pc\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/cmt_pc\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"inst" \
{/TOP/SimTop/u_cpu/IF/fs_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/ID/ds_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/EXE/es_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/MEM/ms_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/WB/ws_inst\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/cmt_inst\[31:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"normal" \
{/TOP/SimTop/u_cpu/IF/fs_to_ds_valid} -height 20 \
{/TOP/SimTop/u_cpu/EXE/ds_to_es_valid} -height 20 \
{/TOP/SimTop/u_cpu/EXE/es_to_ms_valid} -height 20 \
{/TOP/SimTop/u_cpu/MEM/ms_to_ws_valid} -height 20 \
{/TOP/SimTop/u_cpu/WB/ws_valid} -height 20 \
{/TOP/SimTop/u_cpu/cmt_valid} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"AXI_read" \
{/TOP/SimTop/u_axi/rdaxi/r_state\[1:0\]} -height 20 \
{/TOP/SimTop/u_axi/axi_ar_ready_i} -height 20 \
{/TOP/SimTop/u_axi/axi_ar_valid_o} -height 20 \
{/TOP/SimTop/u_axi/axi_r_ready_o} -height 20 \
{/TOP/SimTop/u_axi/axi_r_valid_i} -height 20 \
{/TOP/SimTop/u_axi/axi_r_data_i\[63:0\]} -height 20 \
{/TOP/SimTop/u_axi/rdaxi/rdaxi_data_o\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_data_valid} -height 20 \
{/TOP/SimTop/u_cpu/icache/ram_icache_rdata\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"cache" \
{/TOP/SimTop/u_cpu/icache/icache_ren} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_if_data_o\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_if_ready} -height 20 \
{/TOP/SimTop/u_cpu/icache/ram_icache_rdata\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_data_valid} -height 20 \
{/TOP/SimTop/u_cpu/icache/icache_ram_ren} -height 20 \
}
wvCollapseGroup -win $_nWave2 "cache"
wvAddSignal -win $_nWave2 -group {"G1" \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_data_write\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/lsu_dcache_invalidate_i} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_size\[2:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_data_write\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/lsu_dcache_invalidate_i} -height 20 \
{/TOP/SimTop/u_cpu/dcache/mem_dcache_size\[2:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_mem_data_read\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_data_write\[63:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_size\[2:0\]} -height 20 \
{/TOP/SimTop/u_cpu/dcache/ram_dcache_data_read\[63:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"AXI_write" \
{/TOP/SimTop/u_cpu/dcache/dcache_ram_addr\[31:0\]} -height 20 \
{/TOP/SimTop/u_axi/wraxi/w_state\[1:0\]} -height 20 \
{/TOP/SimTop/u_axi/axi_aw_ready_i} -height 20 \
{/TOP/SimTop/u_axi/axi_aw_valid_o} -height 20 \
{/TOP/SimTop/u_axi/axi_w_ready_i} -height 20 \
{/TOP/SimTop/u_axi/axi_w_valid_o} -height 20 \
{/TOP/SimTop/u_axi/axi_w_data_o\[63:0\]} -height 20 \
{/TOP/SimTop/u_axi/axi_b_ready_o} -height 20 \
{/TOP/SimTop/u_axi/axi_b_valid_i} -height 20 \
{/TOP/SimTop/u_axi/axi_b_resp_i\[1:0\]} -height 20 \
}
wvAddSignal -win $_nWave2 -group {"G7" \
}
wvSelectSignal -win $_nWave2 {( "G3" 6 )} 
wvSetPosition -win $_nWave2 {("G3" 6)}
wvGetSignalClose -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomOut -win $_nWave2
wvSetCursor -win $_nWave2 13469.097796 -snap {("pc" 3)}
wvSetCursor -win $_nWave2 13469.010020 -snap {("pc" 2)}
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomIn -win $_nWave2
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvSelectSignal -win $_nWave2 {( "pc" 5 )} 
wvSearchPrev -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvSetMarker -win $_nWave2 13537.000000
wvSetCursor -win $_nWave2 13470.016471 -snap {("pc" 1)}
wvSearchPrev -win $_nWave2
wvSetCursor -win $_nWave2 13470.023978 -snap {("pc" 5)}
wvSetMarker -win $_nWave2 13470.000000
wvSetCursor -win $_nWave2 13468.996073 -snap {("pc" 6)}
wvSetMarker -win $_nWave2 13469.000000
wvSetCursor -win $_nWave2 13469.996260 -snap {("pc" 6)}
wvSearchNext -win $_nWave2
wvSearchPrev -win $_nWave2
wvSearchPrev -win $_nWave2
wvSearchPrev -win $_nWave2
wvSearchPrev -win $_nWave2
wvSearchPrev -win $_nWave2
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvScrollDown -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollDown -win $_nWave2 0
wvSetCursor -win $_nWave2 13488.948062 -snap {("inst" 0)}
wvSetCursor -win $_nWave2 13489.225249 -snap {("pc" 4)}
wvSetCursor -win $_nWave2 13488.670874 -snap {("G1" 1)}
wvSetCursor -win $_nWave2 13489.169812 -snap {("G1" 1)}
wvSelectSignal -win $_nWave2 {( "G2" 1 )} 
wvSelectSignal -win $_nWave2 {( "G2" 2 )} 
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvSelectSignal -win $_nWave2 {( "G3" 6 )} 
wvSetSearchMode -win $_nWave2 -value 8000018c
wvSearchNext -win $_nWave2
wvSearchNext -win $_nWave2
wvSearchPrev -win $_nWave2
wvSearchPrev -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomOut -win $_nWave2
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvZoom -win $_nWave2 665865.584777 665892.007095
wvScrollDown -win $_nWave2 1
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvScrollDown -win $_nWave2 3
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvZoom -win $_nWave2 9615.501933 17558.742660
wvZoom -win $_nWave2 13421.740964 13522.944466
wvZoom -win $_nWave2 13468.757507 13470.581560
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvSetCursor -win $_nWave2 13472.028446 -snap {("normal" 4)}
wvSetCursor -win $_nWave2 13473.041935 -snap {("normal" 4)}
wvSetCursor -win $_nWave2 13471.974030 -snap {("normal" 3)}
wvSetCursor -win $_nWave2 13471.974030 -snap {("normal" 4)}
wvSetMarker -win $_nWave2 13470.000000
wvSetCursor -win $_nWave2 13472.008040 -snap {("normal" 3)}
wvSetCursor -win $_nWave2 13471.992169 -snap {("normal" 4)}
wvSetCursor -win $_nWave2 13471.992169 -snap {("normal" 4)}
wvSelectUserMarker -win $_nWave2 -previous
wvSetMarker -win $_nWave2 -keepViewRange -name "write 018c" 13472.000000 \
           ID_GREEN5 long_dashed
wvSetCursor -win $_nWave2 13471.980832 -snap {("AXI_read" 8)}
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoom -win $_nWave2 13420.572119 13485.580512
wvZoom -win $_nWave2 13469.419321 13470.308186
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvSetCursor -win $_nWave2 13471.944958 -snap {("cache" 0)}
wvSetCursor -win $_nWave2 13472.079203 -snap {("cache" 0)}
wvSetCursor -win $_nWave2 13472.049370 -snap {("cache" 0)}
wvSetCursor -win $_nWave2 13472.019538 -snap {("cache" 0)}
wvSetCursor -win $_nWave2 13471.930042 -snap {("normal" 4)}
wvSetCursor -win $_nWave2 13472.084175 -snap {("normal" 4)}
wvSelectSignal -win $_nWave2 {( "AXI_read" 1 )} 
wvSetCursor -win $_nWave2 13470.115250 -snap {("AXI_read" 8)}
wvSaveSignal -win $_nWave2 \
           "/home/xuhao/learngit/ysyx-workbench/oscpu-framework/signal.rc"
debExit
