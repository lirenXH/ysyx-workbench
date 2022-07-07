 Nemu
    include
        cpu
            difftest.h
            //difftest_check_reg用于进行ref与dut的寄存器比较
	src 
		cpu
            difftest 

            cpu-exec.c -> Nemu cpu的主循环
                //通过调用execute使nemu运行n条指令
                    exec_once()
                        //execute通过n次调用exec_once来实现一次运行n步 
                        //exec_once传递当前pc和next_pc
                    //同时使指令计数器++ 最后输出运行的指令数目，并且每步都进行difftest
                    //更新外设
                //通过get_time获取程序运行时间
                //通过判断nemu.state来决定nemu的运行状态，以及程序执行对错的判断
        device 外设的实现 (我的外设是在AM里实现的 感觉Nemu里差不多 但是不清除具体的实现方式)
        engine 解释器的实现
            hostcall.c
            //invalid_inst()未知未知的处理 报错跳出
            init.c
            //进入sdb的主循环 等待接受指令
		isa
			riscv64
				difftest 
                    dut.c 
					isa_difftest_checkregs() 
                    //用于NEMU作为DUT进行difftest 功能为检查两边的regs和pc是否完全相等，
                    //不等则difftest异常，同时返回bool，决定是否将Nemu.state切换至NEMU_ABORT
                    ref.c
                    isa_difftest_regcpy()
                    //用于NEMU作为REF与其他cpu进行difftest 功能为获取REF的寄存器状态到dut
                system
                    init.c 复位 初始化
                        //若不启动其他程序 则向内存中写入一段默认代码 并将pc复位
                    instr 包括了香山实现的各个riscv指令集
                        //香山版本
                        在各个文件夹里，在头文件中定义了 各指令的op匹配和译码操作以及执行
                        //简化版本
                        isa_exec_once()  取指函数
                            //调用inst_fetch(&s->snpc, 4)取出当前pc对应指令
                            vaddr_ifetch(pc,len)
                                //访存 取出pc地址对应数据 并让pc + len(4) 返回inst
                        decode_operand() 译码函数
                            //根据指令类型的不同 进行译码 得出不同的立即数和dest,src1,src2
                        decode_exec()    执行(译码)函数
                            //调用operand函数译码 将译码结果记录到相应的操作数变量 s->dnpc = s->snpc pc 更新pc
                            //识别opcode 并执行各个指令的行为
                    "在此文件中添加指令" 前提是需要编译出对应指令
                    reg.c 寄存器堆的实现
                        //定义了32个通用reg的名称 以及浮点寄存器fpregs 8个M模式的CSR 以及S模式下的异常处理CSR
                        isa_reg_display()
                        //打印所有的寄存器值
                            对于8个M模式的CSR 记录下功能 之前没用过
                            //mtvec（Machine Trap Vector）它保存发生异常时处理器需要跳转到的地址。
                            //mepc（Machine Exception PC）它指向发生异常的指令。
                            //mcause（Machine Exception Cause）它指示发生异常的种类。
                            //mie（Machine Interrupt Enable）它指出处理器目前能处理和必须忽略的中断。
                            //mip（Machine Interrupt Pending）它列出目前正准备处理的中断。
                            //mtval（Machine Trap Value）它保存了陷入（trap）的附加信息：地址例外中出错
                            //的地址、发生非法指令例外的指令本身，对于其他异常，它的值为 0。
                            //mscratch（Machine Scratch）它暂时存放一个字大小的数据。
                            //mstatus（Machine Status）它保存全局中断使能
                        isa_reg_str2val() 
                        //若存在名称为name的寄存器, 则返回其当前值, 并设置success为true; 否则设置success为false.
                    mmu.c 进行地址映射
                    //访存地址被执行单元发出，MMU拦截并转换为物理地址
        memory
            paddr.c Nemu的物理内存
                //init_mem初始化内存[0x80000000, 0x88000000]
                //pmem_write向内存/IO中写 通过指针实现  判断是否越界 虚实地址转换
                //pmem_read从向内存/IO中读
                //先判断读取数据大小 1/2/4/8字节 地址转换 调用host_read()访存
            vaddr.c 虚拟内存
                vaddr_ifetch()
                //调用vaddr_read_internal()用于取指
                vaddr_read()
                //与ifetch()相似
                vaddr_write()
                //先调用isa_mmu_check()检查当前系统状态下对内存区间, 类型为type的是否需要经过地址转换
                //调用paddr_write()写数据
                //根据MMU不同的模式，来决定addr如何访存，如：mmu_mode == MMU_DIRECT 则直接调用paddr_read(addr...）
                //由于ysyx的nemu比较简单 vaddr = paddr 所有读写函数均调用paddr_xx实现
        monitor  监视器 调试工具的实现
            sdb nemu的试工具 类似于gdb
                expr.c 表达式求值
                //可用表达式对reg进行求值
                sdb.c  nemu下各个终端指令的实现
                watchpoint.c 监视点
            monitor.c 监视器 各种指令和路径的传输 输出log文件
                //各个组件的初始化 指令集的选择
                load_img()     
                "将指令写入内存" 
                parse_args()
                    //通过getopt_long()函数 获取到终端指令中的.bin文件路径 读取并到memory中
                    //获取到终端指令中的llvm的.so文件路径
                    "用于difftest"
                sdb_set_batch_mode()
                    //可开启批处理模式
        utils
            rand.c 
                //用于
            state.c nemu状态
                //默认状态为stop（暂停）
                //与makefile联动显示 nemu是否正常退出
            timer.c nemu的系统计时器
                get_time_internal()
                //调用gunC库函数gettimeofday()获取系统时间
                //在get_time中获得当前指令执行时间
