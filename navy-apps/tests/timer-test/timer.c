#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
#include <NDL.h>
int main() {

    struct timeval tv_begin;
    struct timeval tv_end;
    gettimeofday(&tv_begin,NULL);
    NDL_Init(0);

    for(int i = 0 ;i < 10 ; i++){
        while(1){
            long cha = 0;
            tv_end.tv_usec = NDL_GetTicks();
            cha = tv_end.tv_usec - (tv_begin.tv_sec * 1000000 + tv_begin.tv_usec); 
            if(cha >= 1000000)
            break;
        }
        gettimeofday(&tv_begin,NULL);
        printf("gettimeofday %ds NDL_GetTicks() = %ld\n",i,NDL_GetTicks());
    }

    
    return 0;
}

