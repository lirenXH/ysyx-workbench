#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
			
void printNum(unsigned long num, int base);
void printDeci(int dec);	
void printHex(int dec);
void printDeci_long(long int dec_long);			
void printStr(char *str);	
int printf_count;
int printf(const char *fmt, ...) {
  	int i = 0;
	printf_count = 0;
    va_list va_ptr;
    va_start(va_ptr, fmt);
    while (fmt[i] != '\0')
    {
		if (fmt[i] != '%')
		{
    	    putch(fmt[i++]);
			printf_count ++;
			continue;
		}
		switch (fmt[++i]) 
		{
			case 'd': printDeci(va_arg(va_ptr,int));           
			  		  break; 
			case 'x': printHex(va_arg(va_ptr,int));           
			  		  break;
			case 'p': printHex(va_arg(va_ptr,int));           
			  		  break;  
			case 'l': printDeci_long(va_arg(va_ptr,int));     //mean ld      
			  		  break; 
		    case 'c': putch(va_arg(va_ptr,int));            
			  		  break;
		    case 's': printStr(va_arg(va_ptr,char *));
					  break;
			default : break;
		}

		i++; 
    }
    va_end(va_ptr);
	return printf_count;				//return the long of string
}

void printNum(unsigned long num, int base)
{
	if (num == 0)
    {
        return;
    }
	printNum(num/base, base);
    putch("0123456789abcdef"[num%base]);
	printf_count ++;
}
void printDeci(int dec)
{
	if (dec < 0)
    {
        putch('-');
		dec = -dec;  	 
    }
    if (dec == 0)
    {
        putch('0');
		return;
    }
    else
    {
        printNum(dec, 10); 
    }
}

void printHex(int dec)
{
	if (dec < 0)
    {
        putch('-');
		dec = -dec;  	 
    }
    if (dec == 0)
    {
        putch('0');
		return;
    }
    else
    {
        printNum(dec, 16); 
    }
}

void printDeci_long(long int dec_long)
{
	if (dec_long < 0)
    {
        putch('-');
		dec_long = -dec_long;  	 
    }
    if (dec_long == 0)
    {
        putch('0');
		return;
    }
    else
    {
        printNum(dec_long, 10); 
    }
}

void printStr(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        putch(str[i++]);
		printf_count ++;
    }
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
	long int lival;
	//double fval;
	char buf[50];
    char buff[50];
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
					ival = va_arg(ap,int);
					//	printf("fu shu\n");   
                    //printf("ival=%d\n",ival);
                    int len=0;
					if(ival<0){
						while(ival<=-10){
							int fu_ival=0;
							fu_ival=0-ival%10;
							//printf("fu_lival=%d\n",fu_ival);
							buff[len]=(char)('0'+fu_ival%10);
							ival=ival/10;
							//printf("buff=%s|\n",buff);
							len++;
						}
						buff[len]=(char)('0'+0-ival%10);
						len++;
						buff[len]='-';
					}
					else{
						while(ival>=10){
							buff[len]=(char)('0'+ival%10);
							ival=ival/10;
							//printf("buff=%s|\n",buff);
							len++;
						}
						buff[len]=(char)('0'+ival%10);
						//printf("buff=%s|\n",buff);
					}
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
			case 'l':
					if(*++p=='d'){
					int len1=0;
					lival = va_arg(ap,long int);
                    //printf("ival=%ld\n",lival);
					if(lival<0){
						while(lival<=-10){
							int fu_lival=0;
							fu_lival=0-lival%10;
							//printf("fu_lival=%d\n",fu_lival);
							buff[len1]=(char)('0'+fu_lival%10);
							lival=lival/10;
							//printf("buff=%s|\n",buff);
							len1++;
						}
						buff[len1]=(char)('0'+0-lival%10);
						len1++;
						buff[len1]='-';
					}
					else{
						while(lival>=10){
							buff[len1]=(char)('0'+lival%10);
							lival=lival/10;
							//printf("buff=%s|\n",buff);
							len1++;
						}
						buff[len1]=(char)('0'+lival%10);
						//printf("buff=%s\n",buff);
					}
					int lenn1 =len1;
					for(int ii = 0; ii <= len1 ;ii++){
						buf[ii]=buff[lenn1];
						lenn1--;
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
					}
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
    return count;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
