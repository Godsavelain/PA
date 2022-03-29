#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t i = 0;
  while(*s != '\0')
  {
    i++;
    s++;
  }
  return i;
}

char *strcpy(char *dst, const char *src) {
  char *result;
  result = dst;
  while(*src != '\0')
  {
    *dst = *src;
    dst++;
    src++;
  }
  *dst = '\0';
  return result;
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t i = 0;
  char *result;
  result = dst;
  while(i<n)
  {
    if(*src == '\0')
    {
      *dst = ' ';
    }
    else
    {
      *dst = *src;
      dst++;
      src++;
    }
    i++;
  }
  return result;
}

char *strcat(char *dst, const char *src) {
  char *result;
  result = dst;
  while(*dst != '\0')
  {
    dst++;
  }
  while(*src != '\0')
  {
    *dst = *src;
    src++;
    dst++;
  }
  *dst = '\0';
  return result;
}

int strcmp(const char *s1, const char *s2) {
  while(1)
  {
    if((*s1 == '\0') && (*s2 == '\0'))
    {
      return 0;
    }
    if((*s1 == '\0') && (*s2 != '\0'))
    {
      return -1;
    }
    if((*s1 != '\0') && (*s2 == '\0'))
    {
      return 1;
    }
    if(*s1 == *s2)
    {
      s1++;
      s2++;
      continue;
    }
    if(*s1 < *s2)
    {
      return -1;
    }
    if(*s1 > *s2)
    {
      return 1;
    }
    assert(0);
  }
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  char *result;
  result = s;
  size_t i = 0;
  while(i < n)
  {
    *(char*)s = (char)c;
    i++;
    s++;
  }
  return result;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  size_t i = 0;
  while(i < n)
  {
    i++;
    if(*(char*)s1 == *(char*)s2)
    {
      s1++;
      s2++;
      continue;
    }
    if(*(char*)s1 < *(char*)s2)
    {
      return -1;
    }
    if(*(char*)s1 > *(char*)s2)
    {
      return 1;
    }
    assert(0);
  }
  return 0;
}

#endif
