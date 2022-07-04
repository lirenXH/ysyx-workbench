 Nemu
	src 
		cpu
            cpu-exec.c -> Nemu cpu的主循环
		isa
			riscv64
				difftest -> dut.c 1.定义了各reg名字
								isa_difftest_checkregs() 
                                //函数 用于与spike进行difftest 功能为检查两边的regs和pc是否完全相等，
                                //不等则difftest异常，同时返回bool，决定是否将Nemu.state切换至NEMU_ABORT
        utils
            timer.c -> 决定nemu的系统计时器从哪来（内部，io等）
                                //在get_time中获得当前指令执行时间