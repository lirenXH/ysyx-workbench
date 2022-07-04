 Nemu
	src 
		cpu
            cpu-exec.c -> Nemu cpu的主循环
                                //通过调用execute使nemu运行n条指令
                                    //execute通过n次调用exec_once来实现一次运行n步 
                                    //同时使指令计数器++ 最后输出运行的指令数目，并且每步都进行difftest
                                    //更新外设
                                //通过get_time获取程序运行时间
                                //通过判断nemu.state来决定nemu的运行状态，以及程序执行对错的判断
            engine
		isa
			riscv64
				difftest -> dut.c 1.定义了各reg名字
								isa_difftest_checkregs() 
                                //函数 用于与spike进行difftest 功能为检查两边的regs和pc是否完全相等，
                                //不等则difftest异常，同时返回bool，决定是否将Nemu.state切换至NEMU_ABORT
        utils
            timer.c -> 决定nemu的系统计时器从哪来(内部,io等)
                                //在get_time中获得当前指令执行时间
        monitor  监视器 调试工具的实现
            //init_monitor
            //parse_args
                批处理模式，log，difftest，ftrace
        memory
            paddr.c -> Nemu的物理内存
            //init_mem初始化内存[0x80000000, 0x88000000]
            //pmem_write向内存/IO中写 通过指针实现  判断是否越界 虚实地址转换
            //pmem_read从向内存/IO中读
            //先判断读取数据大小 1/2/4/8字节 地址转换 调用host_read()访存

