#include <isa.h>
#include <string.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ  

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
  {"0" , '0'}, //48
  {"1" , '1'}, //49
  {"2" , '2'}, //50
  {"3" , '3'}, //51
  {"4" , '4'}, //52
  {"5" , '5'}, //53
  {"6" , '6'}, //54
  {"7" , '7'}, //55
  {"8" , '8'}, //56
  {"9" , '9'}, //57
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


int valve(int a){
	int aa;
	sscanf(tokens[a-1].str, "%d", &aa);
	printf("aa = %d,nr_token = %d\n",aa,a);
	return 0;
}






static bool make_token(char *e) {
  int position = 0;
  int i,j;
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
          case 48 : {tokens[nr_token].type = 48;strcpy(tokens[nr_token].str,"0");nr_token++;break;};
          case 49 : {tokens[nr_token].type = 49;strcpy(tokens[nr_token].str,"1");nr_token++;break;};
          case 50 : {tokens[nr_token].type = 50;strcpy(tokens[nr_token].str,"2");nr_token++;break;};
          case 51 : {tokens[nr_token].type = 51;strcpy(tokens[nr_token].str,"3");nr_token++;break;};
          case 52 : {tokens[nr_token].type = 52;strcpy(tokens[nr_token].str,"4");nr_token++;break;};
          case 53 : {tokens[nr_token].type = 53;strcpy(tokens[nr_token].str,"5");nr_token++;break;};
          case 54 : {tokens[nr_token].type = 54;strcpy(tokens[nr_token].str,"6");nr_token++;break;};
          case 55 : {tokens[nr_token].type = 55;strcpy(tokens[nr_token].str,"7");nr_token++;break;};
          case 56 : {tokens[nr_token].type = 56;strcpy(tokens[nr_token].str,"8");nr_token++;break;};
          case 57 : {tokens[nr_token].type = 57;strcpy(tokens[nr_token].str,"9");nr_token++;break;};
          default: valve(nr_token);
        }

        break;
      }
    }
		
		for(j=0;j<10;j++)
							printf("type:%d		str:%s\n",tokens[j].type,tokens[j].str);
    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  valve(nr_token);
  return true;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  
//----------------------------------------------------------------------------

//-----------------------------------------------------------------------------  

  return 0;
}
