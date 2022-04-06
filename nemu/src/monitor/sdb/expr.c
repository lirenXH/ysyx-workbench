#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {                                             // All expres type 
  TK_NOTYPE = 256, TK_EQ,NUMBER,// '+','-','*','/'
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces: will discard
  {"\\+", '+'},         // plus
  {"\\-", '-'},
  {"\\*", '*'},
  {"\\/", '/'},
  {"==", TK_EQ},        // equal
  {"\\(", '('},
  {"\\)", ')'},
  {"\\b[0-9]+\\b", NUMBER}

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};                                               // All rules index.

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);                       // token->pattern.
    if (ret != 0) {                                                            // error
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
static int nr_token __attribute__((used))  = 0;                     // token index

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {             //The length of the array is 1
        char *substr_start = e + position;                                     
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          
          case TK_NOTYPE: { printf("TK_NOTYPE is ok!\n");  break;     }  
          case TK_EQ:  {    printf("TK_EQ is ok!\n");   strncpy(tokens[nr_token].str, substr_start,substr_len); tokens[nr_token].type=rules[i].token_type; nr_token=nr_token+1; break;}
          case NUMBER: {    printf("NUMBER is ok!\n");  strncpy(tokens[nr_token].str, substr_start,substr_len); tokens[nr_token].type=rules[i].token_type; nr_token=nr_token+1; break;}
          case '+':    {    printf("+ is ok!\n");       strncpy(tokens[nr_token].str, substr_start,substr_len); tokens[nr_token].type=rules[i].token_type; nr_token=nr_token+1; break;}
          case '-':    {    printf("- is ok!\n");       strncpy(tokens[nr_token].str, substr_start,substr_len); tokens[nr_token].type=rules[i].token_type; nr_token=nr_token+1; break;}
          case '*':    {    printf("* is ok!\n");       strncpy(tokens[nr_token].str, substr_start,substr_len); tokens[nr_token].type=rules[i].token_type; nr_token=nr_token+1; break;}
          case '/':    {    printf("/ is ok!\n");       strncpy(tokens[nr_token].str, substr_start,substr_len); tokens[nr_token].type=rules[i].token_type; nr_token=nr_token+1; break;}
          case '(':    {    printf("( is ok!\n");       strncpy(tokens[nr_token].str, substr_start,substr_len); tokens[nr_token].type=rules[i].token_type; nr_token=nr_token+1; break;}
          case ')':    {    printf(") is ok!\n");       strncpy(tokens[nr_token].str, substr_start,substr_len); tokens[nr_token].type=rules[i].token_type; nr_token=nr_token+1; break;}
          default: printf("Error!\n"); break;

        }
        
        break;
      }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

}


/*
      printf("--------------------------------------------Tokens array------------------------------------------\n");
      for(int i =0; i<32;i++){
            printf("The %s tokens is %d type!\n",tokens[i].str,tokens[i].type);
      }  
*/
  return true;
}

//---------------
//----------------------------------------------------------------------------


//----------------
word_t eval(int p, int q);

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  int out;//nr_token;
  printf("nr_token is %d!\n",nr_token);
//  out= eval(0,nr_token-1);
//  printf("nr_token = %d\n",nr_token);
  printf(" %s = %d\n",e,out);
  return 0;
}


bool check_parentheses(int p, int q){
  /*To check parentheres*/
  printf("-------------check parentheses-------------\n");
  int left=0;
  if(tokens[p].type!='(' || tokens[q].type!=')'){
    printf("At least two parentheses\n");
    return false;
  }else{
    for(int i=p;i<=q;i++){
      if(tokens[i].type=='(') left++;
      else if(tokens[i].type==')') left--;

      if(left==0 && i<q) {
        printf("This is a state that is ( + )*( - )\n");
        return false;
      }
    }
  }
  if(left!=0) {
    printf("Too more paretheses\n");
    return false;
  }
  return true;
}

word_t pir(int type){
  int i=0;
  if(type=='+' || type=='-') i=2;
  else if(type=='*' || type=='/' ) i=1;

  return i;
}

word_t find_op(int p, int q){
  printf("-------------------Find main op-------------------------\n");
  int op_index=0; // save main op
  int left=0;
  int pr=0;
  if(p>q) assert(0);
  for(int i=p;i<=q;i++){
    if(tokens[i].type=='('){
      left++;  i++;                                       //detect next i;
      while(1){
        if(tokens[i].type=='(') {left++;}
        else if(tokens[i].type==')') {left--;}         
        if(left==0) break;
        i++;
      }                                                   // here is tropuble!
    } else if(tokens[i].type==NUMBER) {printf("This is a number!\n");continue;}
    else if(tokens[i].type=='+' || tokens[i].type=='-' ||tokens[i].type=='*' ||tokens[i].type=='/'){
        printf("This is a op!\n");
        if(pir(tokens[i].type)>=pr){

          pr=pir(tokens[i].type);
          op_index=i;
          printf("pr is %d,op_index is %d\n",pr,op_index);
        }
    
    }
  }

  printf("The main op is %s and position is %d\n",tokens[op_index].str,op_index);            
  return op_index;
}

word_t eval(int p, int q){
  
  int op;
  char val1,val2;
  int op_type=' ';

  if (p > q) {
  printf("Bad expression \n");
  assert(0);
  }
  else if (p == q) {

    int out=0;
    sscanf(tokens[p].str, "%d", &out);
//    printf("val is %d\n",out);
    return out;

  }
  else if (check_parentheses(p, q) == true) {  
    return eval(p + 1, q - 1);
  }
  else {
    printf("-----------Main op and value-----------------------\n");
    printf(" We should do more things here.\n");
    
    op = find_op(p,q)   ;     //the position of 主运算符 in the token expression;
    op_type = tokens[op].type;

    val1 = eval(p, op - 1); printf("val1 is a single number, and value is = %d\n",val1);
    val2 = eval(op + 1, q); printf("val2  is a single number, and value is = %d\n",val2);

    switch (op_type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
      default: assert(0);
    }
//    return 0;
  }
  return 0;
}
