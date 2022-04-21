#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return count;
}

char *strcpy(char *dst, const char *src) {
  if (dst == NULL || src == NULL)
		return NULL;
	char *tem = dst;
	while (*src != '\0')
	{
		*dst= *src;
	    dst++;
		src++;
	}
	*dst = '\0';
	return tem;
}

char *strncpy(char *dst, const char *src, size_t n) {
	char* ret = dst;
	while (n&&(*dst++ = *src++))
	{
		n--;
	}
	if (n!= 0)
	{
		while (n)
		{
			*dst++ = '\0';
			n--;
		}
	}
	return ret;
}

char *strcat(char *dst, const char *src) {
  char *p = dst;
	while (*dst != '\0')
	{
		dst++;
	}
	while ((*dst++ = *src++) != '\0')
	{
		;
	}
	return p;
}

int strcmp(const char *s1, const char *s2) {    //Suspicious
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  for (int i = 0; i < n; ++i) {
		if (*(s1 + i) > *(s2 + i)) {
			return 1;
		}
		else if (*(s1 + i) < *(s2 + i)) {
			return -1;
		}
		if (*(s1 + i) == 0 || *(s2 + i) == 0) {
			break;
		}
	}
	return 0;
}

void *memset(void *s, int c, size_t n) {
  panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  panic("Not implemented");
}

#endif
