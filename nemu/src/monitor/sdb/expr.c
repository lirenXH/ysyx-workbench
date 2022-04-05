#include <isa.h>
#include <string.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,NUM = 1

  /* TODO: Add more token types */

};


static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +" , TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus 43
  {"==" , TK_EQ},        // equal
  {"-"  , '-'},		//reduce 45
  {"\\(", '('},		//( 40
  {"\\)", ')'},		//) 41
  {"\\*" , '*'},   // * 42
  {"/" , '/'},   /// 47
  {"[0-9]+" , NUM}, //NUM
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

//----------------------------------------------------------------------------

int check_parentheses(int p,int q){
int count_l=0;// qingling 00!!!!
int count_r=0;
  if(tokens[p].type==40&&tokens[q].type==41){
  	for(int ii=p+1;ii<q;ii++){				//判断左右两侧括号是否匹配
  		if(tokens[ii].type==40)
  			count_l++;
  		if(tokens[ii].type==41)
  			count_r++;
  	}
  	if(count_l==count_r){
  		//printf("YES ()\n");
  		count_l=0;
  		count_r=0;
    	return 1;
    	}
    else{
			//printf("NO1 () count_l:%d  count_r:%d\n",count_l,count_r);
			count_l=0;
			count_r=0;
		  return 0;
  	}
   }
  else{
  	//printf("NO2 ()\n");
    return 0;
  }
}

int find_op(int p, int q){
 	int i;
 	int op_place = 0;
 	int youxian = 0;
 	int zuiyou = 0;
 	int count_l=0;
 	for(i=p;i<=q;i++){
			if(tokens[i].type==40){
  			count_l++;i++;
  			while(1){
  				if(tokens[i].type==40)
  					count_l++;
  				else if(tokens[i].type==41)
  					count_l--;
  				if(count_l==0)
  					break;
  				i++;	
  			}
  		}
  		else if(tokens[i].type==43||tokens[i].type==45||tokens[i].type==42||tokens[i].type==47){
				if(tokens[i].type==43||tokens[i].type==45)
					youxian = 2;
				else
					youxian = 1;
				if(youxian >= zuiyou){
					zuiyou = youxian;
					op_place = i;
				}
  		}
 	}
 	return op_place;
}




 int eval(int p, int q) {
  int op = 0;
  int val1,val2;
  int aa,op1;
  //printf("p=%d,q=%d\n",p,q);
  if (p > q) {
    /* Bad expression */
    printf("p > q! error~\n");
    assert(0);
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
	  sscanf(tokens[p].str, "%d", &aa);
	  printf("NUM : %d\n",aa);
    return aa;
  }
  else if (check_parentheses(p, q) == 1) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    printf("去括号\n");
    return eval(p + 1, q - 1);
  }
  else {
    
  	op = find_op(p,q);
    val1 = eval(p, op - 1);
    val2 = eval(op + 1, q);
    printf("val1= %d val2= %d\n",val1,val2);
    if(val1==0||val2==0){
    	return -65530;   //暂定
    	}
		op1 = tokens[op].type;
    switch (op1) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;/* ... */
      case '*': return val1 * val2;/* ... */
      case '/': return val1 / val2;/* ... */
      default: assert(0);
    }
  }
}


//----------------------------------------------------------------------------

static bool make_token(char *e) {
  int position = 0;
  int i;
  int result;
  //int j;
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

        switch (rules[i].token_type) {
        	case 256 : break;
          case 43 : {tokens[nr_token].type = 43;nr_token++;break;};
          case 42 : {tokens[nr_token].type = 42;nr_token++;break;};
          case 45 : {tokens[nr_token].type = 45;nr_token++;break;};
          case 40 : {tokens[nr_token].type = 40;nr_token++;break;};
          case 41 : {tokens[nr_token].type = 41;nr_token++;break;};
          case 47 : {tokens[nr_token].type = 47;nr_token++;break;};
          case NUM  : {tokens[nr_token].type = 1 ;strncpy(tokens[nr_token].str,substr_start,substr_len);nr_token++;break;};
          default: return 0;
        }

        break;
      }
    }
		
		//for(j=0;j<nr_token;j++)
							//printf("type:%d		str:%s\n",tokens[j].type,tokens[j].str);
    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  result = eval(0,nr_token-1);
  if(result<-65000){
  	printf("出现除0 error\n");
  	return false;
  	}
  else
  	printf("结果为:%d\n",result);
  for(int qing=0;qing<32;qing++){					//每次运算后清空结构体 防止溢出
  	tokens[qing].type = 0;
  	for(int qing2=0;qing2<32;qing2++)
  		tokens[qing].str[qing2] = 0;
  }
  return true;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    //*success = false;       除0是否跳出 
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  
//----------------------------------------------------------------------------

//-----------------------------------------------------------------------------  

  return 0;
}
