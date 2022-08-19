deps_config := \
	src/device/Kconfig \
	src/memory/Kconfig \
	src/isa/riscv64/Kconfig \
	src/isa/x86/Kconfig \
	/home/xuhao/learngit/ysyx-workbench/oscpu-framework/libraries/NEMU/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
