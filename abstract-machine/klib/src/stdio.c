#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

bool is_num(char in)
{
  return ((in >= '0') && (in <= '9'));
}

void printch(const char ch)   //输出字符
{  
    putch(ch);  
}  
 
 
void printint(const long long int dec)     //输出整型数
{  
    if(dec == 0)  
    {  
        putch((char)'0');
        return;  
    }  
    printint(dec / 10);  
    putch((char)(dec % 10 + '0'));  
}

void printhex(const long long unsigned int dec)     //output hex
{  
    if(dec == 0)  
    {  
        return;  
    }  
    printhex(dec / 16); 
    if(dec % 16 < 10){
      putch((char)(dec % 16 + '0'));  
    } 
    else
    {
      putch((char)((dec % 16 - 10) + 'A'));  
    }
} 
 
 
void printstr(const char *ptr)        //输出字符串
{  
    while(*ptr)  
    {  
        putch(*ptr);  
        ptr++;  
    }  
}  
 
 
void printfloat(const float flt)     //输出浮点数，小数点第5位四舍五入
{  
    int tmpint = (int)flt;  
    int tmpflt = (int)(100000 * (flt - tmpint));  
    if(tmpflt % 10 >= 5)  
    {  
        tmpflt = tmpflt / 10 + 1;  
    }  
    else  
    {  
        tmpflt = tmpflt / 10;  
    }  
    printint(tmpint);  
    putch('.');  
    printint(tmpflt);  
 
}  
 

int printf(const char *fmt, ...) {
  bool is_long = false;
  va_list ap;  
  va_start(ap,fmt);     //将ap指向第一个实际参数的地址
    while(*fmt)  
    {  
        if(*fmt != '%' && !is_long)  
        {  
            putch(*fmt);  
            fmt++;  
        }  
        else  
        {  
            fmt++;  
            switch(*fmt)  
            {  
                case 'l':
                {
                  is_long = true;
                  //fmt++;  
                  break;
                }
                case 'c':  
                {  
                    char valch = va_arg(ap,int);  //记录当前实践参数所在地址
                    printch(valch);  
                    fmt++;  
                    break;  
                }  
                case 'd':  
                {  
                    if(is_long)
                    {
                      is_long = false;
                      long long int valint = va_arg(ap,long long int);  
                      printint((long long int)valint);
                    }
                    else
                    {
                      int valint = va_arg(ap,int);  
                      printint((long long int)valint);
                    }
                      
                    fmt++;  
                    break;  
                }  
                case 'p':  
                {  
                    int valint = va_arg(ap,unsigned int );  
                    printhex((long long unsigned int)valint);  
                    fmt++;  
                    break;  
                } 
                case 'x':  
                {  
                    if(is_long)
                    {
                      is_long = false;
                      long unsigned int valint = va_arg(ap,long long unsigned int ); 
                      printhex((long long unsigned int)valint); 
                    }
                    else
                    {
                      int valint = va_arg(ap,unsigned int );  
                      printhex((long long unsigned int)valint);  
                    }
                    fmt++;  
                    break;  
                } 
                case 's':  
                {  
                    char *valstr = va_arg(ap,char *);  
                    printstr(valstr);  
                    fmt++;  
                    break;  
                }  
                case 'f':  
                {  
                    float valflt = va_arg(ap,double);  
                    printfloat(valflt);  
                    fmt++;  
                    break;  
                }  
                default:  
                {  
                    printch(*fmt);  
                    fmt++;  
                }  
          }    
      }  
  }
    va_end(ap);
    return 1;
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

  char origin_str[1000];
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
  va_list ap;
  char *s;
  long int d;

  va_start(ap,fmt);

  char origin_str[1000];
  int i = 0;
  while(*(fmt+i) != '\0')
  {
    origin_str[i] = *(fmt+i);
    i++;
  }
  origin_str[i] = '\0';
  i = 0;
  int num = 0;
  int width = 0;
  bool fill_zero = false;//%02x zero means fill with zero
  bool is_long = false;
  while(i < n)
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
      if(origin_str[i] == '0')
      {
        fill_zero = true;
        i++;
      }
      else{
        while((origin_str[i] >= '0') && (origin_str[i] <= '9'))
        {
          width = width*10 + (origin_str[i] - '0');
          i++;
        }
      }
      if(origin_str[i] == 'l')
      {
        is_long = true;
        i++;
      }
      if(origin_str[i] == 'd')
      {
        if(!is_long)
        {
          d = va_arg(ap, int);
        }
        else
        {
          d = va_arg(ap, long int);
          is_long = false;
        }  
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
        if(width > 0)
        {
          for(int j=0;j < (width-len);j++)
          {
            if(fill_zero)
            {
              *out = '0';
              out++;
            }
            else
            {
              *out = ' ';
              out++;
            }
          }
          fill_zero = false;
          width = 0;
        }
        while(len > 0)
        {
          *out = inverted_num[len-1];
          out++;
          len--;
        }
      }

    if(origin_str[i] == 'x')
      {
        if(!is_long)
        {
          d = va_arg(ap, int);
        }
        else
        {
          d = va_arg(ap, long int);
          is_long = false;
        }  
        num++;
        i++;
        char inverted_num[20];
        int len = 0;
        while(d != 0)
        {
          int res = d % 16;
          if(res < 10)
          {
            inverted_num[len] = (char)(res + 48);
          }
          else
          {
            inverted_num[len] = (char)(res + 55);
          }
          len++;
          d = (d - res)/16;
        }
        if(width > 0)
        {
          for(int j=0;j < (width-len);j++)
          {
            if(fill_zero)
            {
              *out = '0';
              out++;
            }
            else
            {
              *out = ' ';
              out++;
            }
          }
          fill_zero = false;
          width = 0;
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
  *out = '\0';
  return num;

}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
