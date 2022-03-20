#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <stdlib.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUMBER

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"\\-", '-'},         // minus
  {"\\*", '*'},         // multiply
  {"\\/", '/'},         // divide
  {"\\(", '('},         // left parentheses
  {"\\)", ')'},         // right parentheses
  {"0|([1-9][0-9]*)",TK_NUMBER },         // number
  
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

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
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
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
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        int type = rules[i].token_type;
        if(type == TK_NUMBER){
          assert(substr_len < 32);
          strcpy(tokens[nr_token].str, e + position - substr_len);
          tokens[nr_token].str[substr_len] = '\0';
          printf("num:%s\n",tokens[nr_token].str);
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

int get_inferior(int begin ,int end){
  int temp_end = end;
  int want_left_para = 0;
  while(temp_end > begin){
    printf("temp_end:%d want_left:%d \n",temp_end,want_left_para);
    if(want_left_para > 0){
      if(tokens[temp_end].type == '('){
        want_left_para--;
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
      case '-':
        return temp_end;
      default:
        temp_end--;
        continue;
    }
  }
    assert(want_left_para == 0);
    temp_end = end;
    while(temp_end > begin){
    printf("temp_end:%d want_left:%d \n",temp_end,want_left_para);
    if(want_left_para > 0){
      if(tokens[temp_end].type == '('){
        want_left_para--;
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
      case '/':
        return temp_end;
      default:
        temp_end--;
        continue;
    } 
  }
  assert(0);
}

word_t eval(int p, int q){
  assert(p <= q);
  if(q == p)
  {
    assert(tokens[p].type == TK_NUMBER);
    return (word_t)atoi(tokens[p].str);
  }
  if((tokens[p].type == '(') && (tokens[q].type == ')'))
  {
    p = p+1;
    q = q-1;
    return eval(p,q);
  }
  int split_point;
  split_point = get_inferior(p,q);
  printf("split_point:%d\n",split_point);
  word_t num_1 = eval(p , split_point-1);
  word_t num_2 = eval(split_point+1 , q);
  switch (tokens[split_point].type )
  {
  case '+':
    return num_1 + num_2;
    break;
  case '-':
    return num_1 - num_2;
    break;
  case '*':
    return num_1 * num_2;
    break;
  case '/':
    return num_1 / num_2;
    break;
  
  default:
    assert(0);
  }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  word_t ans = eval(0,nr_token-1);

  return ans;
}
