#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <stdlib.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUMBER ,TK_HEX_NUMBER ,TK_REG ,TK_NEQ ,TK_AND 

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {
  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {" +", TK_NOTYPE},    // spaces
  {"\\(uint\\)", TK_NOTYPE}, //consider it as space
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"\\-", '-'},         // minus
  {"\\*", '*'},         // multiply
  {"\\/", '/'},         // divide
  {"\\(", '('},         // left parentheses
  {"\\)", ')'},         // right parentheses
  {"0x0|(0x([1-9]|[a-f]|[A-F])([0-9]|[a-f]|[A-F])*)",TK_HEX_NUMBER },         // hex number
  {"0|([1-9][0-9]*)",TK_NUMBER },         // number
  {"\\$0|\\$ra|\\$sp|\\$gp|\\$tp|\\$t0|\\$t1|\\$t2|\\s0|\\$s1|\\$a0|\
    \\$a1|\\$a2|\\$a3|\\$a4|\\$a5|\\a6|\\$a7|\\$s2|\\$s3|\\$s4|\\$s5|\
    \\$s6|\\$s7|\\s8|\\$s9|\\$s10|\\$s11|\\$t3|\\$t4|\\$t5|\\$t6",TK_REG},//register
  {"!=", TK_NEQ},         // not equal
  {"&&", TK_AND},         // and
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

word_t isa_reg_str2val(const char *s, bool *success);
word_t vaddr_read(vaddr_t addr, int len);

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[30];
} Token;

static Token tokens[100] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        //char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        //Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //    i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        int type = rules[i].token_type;
        if(type == TK_NUMBER)
        {
          assert(substr_len < 32);
          for(int i=0;i<substr_len;i++)
          {
            tokens[nr_token].str[i] = *(e + position - substr_len + i);
          }
          tokens[nr_token].str[substr_len] = '\0';
          //printf("num:%s\n",tokens[nr_token].str);
        }
        if(type == TK_HEX_NUMBER)
        {
          assert(substr_len < 32);
          for(int i=0;i<substr_len;i++)
          {
            tokens[nr_token].str[i] = *(e + position - substr_len + i);
          }
          tokens[nr_token].str[substr_len] = '\0';
          //printf("num:%s\n",tokens[nr_token].str);
        }
        if(type == TK_REG)
        {
          assert(substr_len < 32);
          for(int i=0;i<substr_len;i++)
          {
            tokens[nr_token].str[i] = *(e + position - substr_len + i);
          }
          tokens[nr_token].str[substr_len] = '\0';
          //printf("num:%s\n",tokens[nr_token].str);
        }
        tokens[nr_token].type = type;
        nr_token++;
        // switch (rules[i].token_type) {
        //   default: TODO();
        // }
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

bool is_depointer(int search_point ,int start)//to judge if a '*' is a depointer
{
  bool is_pointer;
  if(search_point == start)
  { 
    is_pointer = true;
  }
  search_point--;

  while(tokens[search_point].type == TK_NOTYPE )
  {
    if(search_point == 0)
    {
      is_pointer = true;
      return is_pointer;
      break;
    }
    search_point--;
  }

  if((tokens[search_point].type == TK_HEX_NUMBER) || (tokens[search_point].type == TK_NUMBER) || (tokens[search_point].type == ')'))
  {
    is_pointer = false;
  }
  else{
    is_pointer = true;
  }
  
  return is_pointer;
}

int get_inferior(int begin ,int end){
  //printf("begin:%d end:%d \n",begin,end);
  int temp_end = end;
  int want_left_para = 0;
  while(temp_end > begin){
    //printf("temp_end:%d want_left:%d \n",temp_end,want_left_para);
    //judge &&
  if(want_left_para > 0){
      if(tokens[temp_end].type == '('){
        want_left_para--;
      }
      if(tokens[temp_end].type == ')'){
        want_left_para++;
      }
      temp_end--;
      continue;

    }
    switch(tokens[temp_end].type){
      case ')':
        want_left_para++;
        temp_end--;
        continue;
      case TK_AND:
        return temp_end;
      default:
        temp_end--;
        continue;
    }
  }
  // jude == or !=
  want_left_para = 0;
  temp_end = end;
  while(temp_end > begin){
  if(want_left_para > 0){
      if(tokens[temp_end].type == '('){
        want_left_para--;
      }
      if(tokens[temp_end].type == ')'){
        want_left_para++;
      }
      temp_end--;
      continue;

    }
    switch(tokens[temp_end].type){
      case ')':
        want_left_para++;
        temp_end--;
        continue;
      case TK_EQ:
        return temp_end;
      case TK_NEQ:
        return temp_end;
      default:
        temp_end--;
        continue;
    }
  }
    want_left_para = 0;
    temp_end = end;
    //+ -
    while(temp_end > begin)
    {
    if(want_left_para > 0){
      if(tokens[temp_end].type == '('){
        want_left_para--;
      }
      if(tokens[temp_end].type == ')'){
        want_left_para++;
      }
      temp_end--;
      continue;

    }
    switch(tokens[temp_end].type){
      case TK_NUMBER:
        temp_end--;
        continue;
      case ')':
        want_left_para++;
        temp_end--;
        continue;
      case '+':
        return temp_end;
      case '-':
        return temp_end;
      default:
        temp_end--;
        continue;
    }
  }
    //* /
    want_left_para = 0;
    temp_end = end;
    while(temp_end > begin)
    {
    //printf("temp_end:%d want_left:%d \n",temp_end,want_left_para);
    if(want_left_para > 0){
      if(tokens[temp_end].type == '('){
        want_left_para--;
      }
      if(tokens[temp_end].type == ')'){
        want_left_para++;
      }
      temp_end--;
      continue;
    }
    switch(tokens[temp_end].type){
      case TK_NUMBER:
        temp_end--;
        continue;
      case ')':
        want_left_para++;
        temp_end--;
        continue;
      case '*':
        if(is_depointer(temp_end , begin))
        {
          temp_end--;
          continue;
        }
        else
        {
        return temp_end;
        }
      case '/':
        return temp_end;
      default:
        temp_end--;
        continue;
    } 
  }

  want_left_para = 0;
  temp_end = end;
  while(temp_end > begin){
  if(want_left_para > 0){
      if(tokens[temp_end].type == '('){
        want_left_para--;
      }
      if(tokens[temp_end].type == ')'){
        want_left_para++;
      }
      temp_end--;
      continue;

    }
    switch(tokens[temp_end].type){
      case ')':
        want_left_para++;
        temp_end--;
        continue;
      case '*':
      if(is_depointer(temp_end ,begin))
        {
          return temp_end;
        }
        temp_end--;
        continue;
        
      default:
        temp_end--;
        continue;
    }
  }
  //printf("token end type %c want_left %d\n",tokens[end].type,want_left_para);    
    assert(0);  
}

uint eval(int p, int q ,bool* success)
{
  *success = true;
  assert(p <= q);
  while(tokens[p].type == TK_NOTYPE)
  {
    p++;
  }

  while(tokens[q].type == TK_NOTYPE)
  {
    q--;
  }
  if(q == p)
  {
    if((tokens[p].type != TK_NUMBER) && (tokens[p].type != TK_HEX_NUMBER) && (tokens[p].type !=  TK_REG))
    {
    printf("error!\n");
    return 0;
    }
    if(tokens[p].type == TK_HEX_NUMBER)
    {
      uint result = 0;
      sscanf(tokens[p].str, "%x", &result);
      return result;
    }
    if(tokens[p].type == TK_REG)
    {
      uint result;
      bool success;
      result = (uint)isa_reg_str2val(tokens[p].str, &success);
      if(success)
      {
        return result;
      }
      else
      {
        assert(0);
      }
    }
    return (uint)atoi(tokens[p].str);
  }
 
  if((tokens[p].type == '(') && (tokens[q].type == ')'))
  {
    int want_left_para = 1;
    int temp_q = q-1;
    bool wrapped = true;
    while(temp_q > p)
    {
    //printf("temp_end:%d want_left:%d \n",temp_end,want_left_para);
    if(want_left_para > 0){
      if(tokens[temp_q].type == '('){
        want_left_para--;
      }
      else if(tokens[temp_q].type == ')')
      {
        want_left_para++;
      }   
      temp_q--;
      continue;
    }
    if(want_left_para == 0)
      {
        wrapped = false;
        break;
      }
  }
  if(wrapped)
  {
    p = p+1;
    q = q-1;
    //printf("p:%d q:%d\n",p,q);
    return(eval(p,q,success));
  }
  }
  //printf("p:%d q:%d\n",p,q);

  int split_point;
  split_point = get_inferior(p,q);
  bool success1;
  bool success2;
  uint address;
  if(is_depointer(split_point ,p))
  {
    address = eval(split_point+1 , q ,&success2);
    if(success2 == false)
    {
      *success = false;
      return 0;
    }
    word_t res;
    res = (word_t)(vaddr_read(address , 1));
    return res;
  }
  
  //printf("split_point:%d character:%c\n",split_point,tokens[split_point].type);
  
  uint num_1 = eval(p , split_point-1 ,&success1);
  if(success1 == false)
  {
    *success = false;
    return 0;
  }
  uint num_2 = eval(split_point+1 , q ,&success2);
  if(success2 == false)
  {
    *success = false;
    return 0;
  }
  switch (tokens[split_point].type )
  {
  case '+':
  printf("%u + %u = %u\n",num_1,num_2,(uint)(num_1 + num_2));
    return (uint)(num_1 + num_2);
    break;
  case '-':
  printf("%u - %u = %u\n",num_1,num_2,(uint)(num_1 - num_2));
    return (uint)(num_1 - num_2);
    break;
  case '*':
  printf("%u * %u = %u\n",num_1,num_2,(uint)(num_1 * num_2));
    return (uint)(num_1 * num_2);
    break;
  case '/':
    if(num_2 == 0)
    {
    printf("divide zero!\n"); 
    *success = false;
    return 0;
    }
    printf("%u / %u = %u\n",num_1,num_2,(uint)(num_1 / num_2));
    return (uint)(num_1 / num_2);
    break;
  
  case TK_EQ:
    return (uint)(num_1 == num_2);
    break;

  case TK_NEQ:
    return (uint)(num_1 != num_2);
    break;

  case TK_AND:
    return (uint)((num_1 != 0) && (num_2 != 0));
    break;
  default:
    printf("error!\n");
    *success = false;
    return 0;
  }

}

uint expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  uint ans = eval(0,nr_token-1,success);
  //printf("success:%d\n",*success);
  return ans;
}
