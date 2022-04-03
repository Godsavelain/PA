#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

bool is_num(char in)
{
  return ((in >= '0') && (in <= '9'));
}

int printf(const char *fmt, ...) {
  va_list ap;
  char *s;
  int d;
  long long int l;
  int std_len = 0;
  bool has_std_width = false;

  va_start(ap,fmt);

  char origin_str[100];
  int i = 0;
  while(*(fmt+i) != '\0')
  {
    origin_str[i] = *(fmt+i);
    i++;
  }
  origin_str[i] = '\0';
  i = 0;
  int num = 0;
  while(1)
  {
    if(origin_str[i] == '\0')
    {
      va_end(ap);
      return num;
    }
    if((origin_str[i] != '%') && (origin_str[i] != '\\') )
    {
      putch(origin_str[i]);
      i++;
      continue;
    }
    else
    {
      if((origin_str[i] == '\\'))
      {
        i++;
        switch (origin_str[i])
        {
        case  'n':
          putch('\n');
          break;
        
        default:
          break;
        }
      }
      else
      {
        i++;
      if(is_num(origin_str[i]))
      {
        std_len = origin_str[i] - '0';
        has_std_width = true;
        i++;
        while(is_num(origin_str[i]))
        {
          putch(origin_str[i]);
          std_len = std_len * 10 + (origin_str[i] - '0');
          i++;
        }
      }
      if((origin_str[i] == 'l') && (origin_str[i+1] == 'd'))
      {
        l = va_arg(ap, long long int);
        num++;
        i = i+2;
        char inverted_num[20];
        int len = 0;
        if(l == 0)
        {
          putch('0');
        }
        else
        {
          while(l != 0)
        {
          int res = l % 10;
          inverted_num[len] = (char)(res + 48);
          len++;
          l = (l - res)/10;
        }
        if(has_std_width)
        {
          for(int i=0;i<(std_len - len);i++)
          {
            putch('0');
          }
        }
        while(len > 0)
        {
          putch(inverted_num[len-1]);
          len--;
        }
        }
        has_std_width = false;
        std_len = 0;
      }
      if(origin_str[i] == 'd')
      {
        d = va_arg(ap, int);
        num++;
        i++;
        char inverted_num[20];
        int len = 0;
        if(d == 0)
        {
          putch('0');
        }
        else
        {
          while(d != 0)
        {
          int res = d % 10;
          inverted_num[len] = (char)(res + 48);
          len++;
          d = (d - res)/10;
        }
        if(has_std_width)
        {
          for(int i=0;i<(std_len - len);i++)
          {
            putch('0');
          }
        }
        while(len > 0)
        {
          putch(inverted_num[len-1]);
          len--;
        }
        }
        has_std_width = false;
        std_len = 0;
      }
      if(origin_str[i] == 's')
      {
        s = va_arg(ap, char *);
        num++;
        i++;
        while(*s != '\0')
        {
          putch(*s);
          s++;
        }
      }
      }
      

    }
    
  }
  
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) 
{
  va_list ap;
  char *s;
  int d;

  va_start(ap,fmt);

  char origin_str[100];
  int i = 0;
  while(*(fmt+i) != '\0')
  {
    origin_str[i] = *(fmt+i);
    i++;
  }
  origin_str[i] = '\0';
  i = 0;
  int num = 0;
  while(1)
  {
    if(origin_str[i] == '\0')
    {
      va_end(ap);
      *out = '\0';
      return num;
    }
    if(origin_str[i] != '%') 
    {
      *out = origin_str[i];
      out++;
      i++;
      continue;
    }
    else
    {
      i++;
      if(origin_str[i] == 'd')
      {
        d = va_arg(ap, int);
        num++;
        i++;
        char inverted_num[20];
        int len = 0;
        while(d != 0)
        {
          int res = d % 10;
          inverted_num[len] = (char)(res + 48);
          len++;
          d = (d - res)/10;
        }
        while(len > 0)
        {
          *out = inverted_num[len-1];
          out++;
          len--;
        }
      }
      if(origin_str[i] == 's')
      {
        s = va_arg(ap, char *);
        num++;
        i++;
        while(*s != '\0')
        {
          *out = *s;
          out++;
          s++;
        }
      }

    }
    
  }

}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
