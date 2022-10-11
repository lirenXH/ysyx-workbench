#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
int main() {

    struct timeval tv_begin;
    struct timeval tv_end;
    gettimeofday(&tv_begin,NULL);
    gettimeofday(&tv_end,NULL);
    //printf("tv_begin_sec:%d\n",tv_begin.tv_sec);
    //printf("tv_end___sec:%d\n",tv_end.tv_sec);
    for(int i = 0 ;i < 10 ; i++){
        while(1){
            int cha = 0;
            gettimeofday(&tv_end,NULL);
            cha = tv_end.tv_sec - tv_begin.tv_sec;
            if(cha == 1)
            break;
        }
        gettimeofday(&tv_begin,NULL);
        printf("gettimeofday %ds\n",i);
    }
    return 0;
}
