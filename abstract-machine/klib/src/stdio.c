#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char * out,const char * fmt, ...)
{
	va_list ap;
	char *sval;
    const char *p;
	int ival;
	char buf[30];
    char buff[30];
	int strcnt = 0;
    int count=0;
	///

	char str_buf[64];
	char * str_buf_p = str_buf;
	unsigned char i = 0;
	
	va_start(ap, fmt);
	for (p = fmt; *p; p++)
	{
			if(*p != '%')
			{
					*str_buf_p = *p;
					str_buf_p ++;
					strcnt ++;
                    count++;
					continue;
			}
			memset(buff,'\0',sizeof(buff));
			memset(buf,'\0',sizeof(buf));
			switch(*++p)
			{
			case 'd':
					ival = va_arg(ap, int);
                    //printf("ival=%d\n",ival);
                    int len=0;
                    while(ival>=10){
                        buff[len]=(char)('0'+ival%10);
                        ival=ival/10;
                        //printf("buff=%s|\n",buff);
                        len++;
                    }
                    buff[len]=(char)('0'+ival%10);
                    //printf("buff=%s|\n",buff);
                    int lenn =len;
                    for(int ii = 0; ii <= len ;ii++){
                        buf[ii]=buff[lenn];
                        lenn--;
                    }
					//printf("buf=%s|\n",buf);
					for(i = 0; buf[i] != '\0'; i++)
					{
							*str_buf_p = buf[i];
							str_buf_p ++;
							strcnt ++;
                            count++;
					}
                    memset(buff,'\0',sizeof(buff));
					memset(buf,'\0',sizeof(buf));
					//printf("00:buff=%s\n",buff);
					//printf("00:buf=%s\n",buf);
					break;
			case 's':
					sval = va_arg(ap, char *);
					while(*sval != '\0')
					{
							*str_buf_p = *sval;
							str_buf_p ++;
							strcnt ++;
							sval ++;
                            count++;
					}
					break;
			}
	}
	va_end(ap);           
    memcpy(out,str_buf,strcnt); 
	out[strcnt]='\0';          
    return count-1;
}


int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
