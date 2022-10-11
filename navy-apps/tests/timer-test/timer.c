#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
int main() {

    struct timeval tv_begin;
    struct timeval tv_end;
    gettimeofday(&tv_begin,NULL);
    gettimeofday(&tv_end,NULL);
    printf("tv_begin_sec:%d\n",tv_begin.tv_sec);
    printf("tv_end___sec:%d\n",tv_end.tv_sec);
    for(int i = 0 ;i < 10 ; i++){
        int cha = tv_end.tv_sec - tv_begin.tv_sec;
        printf("tv_begin_usec:%d\n",tv_begin.tv_usec);
        printf("tv_end___usec:%d\n",tv_end.tv_usec);
        while(cha != 1){
            gettimeofday(&tv_end,NULL);
            //printf("cha = %d\n",cha);
        }
        gettimeofday(&tv_begin,NULL);
        printf("gettimeofday 1s\n");
    }
    return 0;
}
