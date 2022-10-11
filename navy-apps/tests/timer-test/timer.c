#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
int main() {

    struct timeval tv_begin;
    gettimeofday(&tv_begin,NULL);
    printf("tv__sec_:%ld\n",tv_begin.tv_sec);
    printf("tv__usec:%ld\n",tv_begin.tv_usec);
    return 0;
}
