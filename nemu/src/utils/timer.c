#include <common.h>
#include MUXDEF(CONFIG_TIMER_GETTIMEOFDAY, <sys/time.h>, <time.h>)

IFDEF(CONFIG_TIMER_CLOCK_GETTIME,
    static_assert(CLOCKS_PER_SEC == 1000000, "CLOCKS_PER_SEC != 1000000"));
IFDEF(CONFIG_TIMER_CLOCK_GETTIME,
    static_assert(sizeof(clock_t) == 8, "sizeof(clock_t) != 8"));

static uint64_t boot_time = 0;

static uint64_t get_time_internal() {  //选择时钟源来自哪里
#if defined(CONFIG_TARGET_AM)
  uint64_t us = io_read(AM_TIMER_UPTIME).us;
#elif defined(CONFIG_TIMER_GETTIMEOFDAY)
  struct timeval now;
  gettimeofday(&now, NULL);     //liunx-gnu库函数 获取时间
  uint64_t us = now.tv_sec * 1000000 + now.tv_usec;//转换为us
#else
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
#endif
  return us;
}

uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();  //仅在nemu开始运行时获取系统时间 
  uint64_t now = get_time_internal();                   //每次执行get_time都获取系统时间
  //I DO
  //printf("boot_time:%ld now:%ld\n",boot_time,now);
  //  
  return now - boot_time;               //当前时间 - 开始时间 = 指令执行时间
}
