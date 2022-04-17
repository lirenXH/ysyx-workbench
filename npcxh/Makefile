$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace
VERILATOR_FLAGS += --top ysyx_22040759_npc
VERILATOR_INPUT = npcxh.cpp vsrc/ysyx_22040759_npc.v vsrc/ysyx_22040759_32add.v vsrc/ysyx_22040759_inst_decode.v \
vsrc/ysyx_22040759_control.v vsrc/ysyx_22040759_ALU.v \
vsrc/ysyx_22040759_GPR.v vsrc/ysyx_22040759_PC.v

######################################################################
default: run

run:
	@echo "makefile is running!"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	@echo "makefile is completed"
