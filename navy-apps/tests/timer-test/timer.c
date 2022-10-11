#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
int main() {

    struct timeval tv_begin;
    struct timeval tv_end;
    gettimeofday(&tv_begin,NULL);
    gettimeofday(&tv_end,NULL);
    for(int i = 0 ;i < 10 ; i++){
        int cha = tv_end.tv_sec - tv_begin.tv_sec;
        while(cha != 1)
            gettimeofday(&tv_end,NULL);
        gettimeofday(&tv_begin,NULL);
        printf("gettimeofday 1s\n");
    }
    return 0;
}
