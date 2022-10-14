#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
#include <NDL.h>
int main() {

    struct timeval tv_begin;
    struct timeval tv_end;
    gettimeofday(&tv_begin,NULL);
    //gettimeofday(&tv_end,NULL);
    printf("tv_begin_sec:%ld\n",tv_begin.tv_usec);
    //printf("tv_end___sec:%d\n",tv_end.tv_sec);
    NDL_Init(0);

    for(int i = 0 ;i < 10 ; i++){
        while(1){
            long cha = 0;
            //gettimeofday(&tv_end,NULL);
            tv_end.tv_usec = NDL_GetTicks();
            cha = tv_end.tv_usec - (tv_begin.tv_sec * 1000000 + tv_begin.tv_usec); 
            //printf("\ntv_begin.tv_sec * 1000000 + tv_begin.tv_usec = %ld\n",tv_begin.tv_sec * 1000000 + tv_begin.tv_usec);
            //printf("cha = %ld\n",cha);
            if(cha >= 1000000)
            break;
        }
        gettimeofday(&tv_begin,NULL);
        printf("gettimeofday %ds NDL_GetTicks() = %ld\n",i,NDL_GetTicks());
    }

    
    return 0;
}

