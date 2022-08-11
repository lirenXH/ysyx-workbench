$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif
# Input files for Verilator
VSRC_DIR = $(shell find ./vsrc/ -name '*.v')
#-name '*.v')
CSRC_DIR = $(shell find ./csrc/ -name 'npcxh.cpp')
# Find cpp file
IMG = /home/xuhao/learngit/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv64-npc.bin
# Generate C++ in executable form
SO  = /home/xuhao/learngit/ysyx-workbench/nemu/tools/spike-diff/build/riscv64-spike-so
# spike-so file
VERILATOR_FLAGS += -cc --exe
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace
VERILATOR_FLAGS += --build
VERILATOR_FLAGS += -LDFLAGS
VERILATOR_FLAGS += -ldl
VERILATOR_FLAGS += --top ysyx_22040759_npc
VERILATOR_INPUT =  $(VSRC_DIR) $(CSRC_DIR)

######################################################################
default: run

run:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "makefile is running!"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	./obj_dir/Vysyx_22040759_npc -i $(IMG) -d $(SO)
    gtkwave ./obj_dir/dump.vcd
	@echo "makefile is completed"

bianyi:
	@echo "makefile is running!"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	@echo "makefile is completed"

