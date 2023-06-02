%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "types.h"
#define YYDEBUG 0


nodeType *opr(int oper, int nops, ...);
nodeType *id(int i);
nodeType *con(int value);
nodeType *conS(char* value);
nodeType *idS(int i);
void freeNode(nodeType *p);
void createPlot();
void yyerror(char *s);

int sym[26];
char* strings[26];

int size = 5;
int contor = 0;
int* x;
int* y;

int a;
int b;
int cmmmc;
int cmmdc;
int c;
int d;

%}

%union {
  int iValue;
  char sIndex;
  char* string;
  nodeType *nPtr;
};


%token <iValue> INTEGER
%token <sIndex> VARIABLE
%token <string> STRING
%token WHILE IF DISPLAY FOR TO IS STEP DO CASE SWITCH DEFAULT SAVE PLOT CMMMC CMMDC SHOW
%nonassoc IFX
%nonassoc ELSE

%left GE LE EQ NE '>' '<' CMMMC CMMDC
%left '+' '-'
%left '*' '/' '%'
%nonassoc UMINUS

%type <nPtr> statement expr stmt_list case_list case

%start      program

%%

program   : function '.'          { exit(0); }
          ;

function  : function statement    { ex($2); freeNode($2); }
          | /* NULL */
          ;

statement :  ';'                   { $$ = opr(';', 2, NULL, NULL); }
          | expr ';'              { $$ = $1; }
          | DISPLAY expr ';'        { $$ = opr(DISPLAY, 1, $2); }
          | SHOW VARIABLE ';'       { $$ = opr(SHOW, 1, idS($2)); }
          // | SHOW STRING;            { $$ = opr(SHOW, 1, conS($2)); }
          | VARIABLE '=' expr ';' { $$ = opr('=', 2, id($1), $3); }
          | VARIABLE IS STRING ';' { $$ = opr(IS, 2, idS($1), conS($3)); }
          | WHILE '(' expr ')' statement
                { $$ = opr(WHILE, 2, $3, $5); }
          | FOR VARIABLE '=' expr TO expr STEP expr ':' statement
                { $$ = opr(FOR, 5, id($2), $4, $6, $8, $10); }
          | DO statement WHILE '(' expr ')' ';'
                { $$ = opr(DO, 2, $2, $5); }
          | IF '(' expr ')' statement %prec IFX
                { $$ = opr(IF, 2, $3, $5); }
          | IF '(' expr ')' statement ELSE statement
                { $$ = opr(IF, 3, $3, $5, $7); }
          | SWITCH '(' expr ')' '{' case_list '}'
                { $$ = opr(SWITCH, 2, $3, $6); }
          | '{' stmt_list '}' { $$ = $2; }
          | PLOT ';'
                { $$ = opr(PLOT, 0); }
          | SAVE expr ';'
                { $$ = opr(SAVE, 1, $2); }
          ;

case  :     CASE expr ':' statement
              { $$ = opr(CASE, 2, $2, $4); }
          | DEFAULT ':' statement
              { $$ = opr(DEFAULT, 1, $3); }
          ;

case_list : case
          | case_list case  { $$ = opr(';', 2, $1, $2); }
          ;

stmt_list : statement
          | stmt_list statement   { $$ = opr(';', 2, $1, $2); }
          ;

expr      : INTEGER               { $$ = con($1); }
          | VARIABLE              { $$ = id($1); }
          | '-' expr %prec UMINUS { $$ = opr(UMINUS, 1, $2); }
          | expr '+' expr         { $$ = opr('+', 2, $1, $3); }
          | expr '-' expr         { $$ = opr('-', 2, $1, $3); }
          | expr '*' expr         { $$ = opr('*', 2, $1, $3); }
          | expr '%' expr         { $$ = opr('%', 2, $1, $3); }
          | expr '/' expr         { $$ = opr('/', 2, $1, $3); }
          | expr '<' expr         { $$ = opr('<', 2, $1, $3); }
          | expr '>' expr         { $$ = opr('>', 2, $1, $3); }
          | expr GE expr          { $$ = opr(GE, 2, $1, $3); }
          | expr LE expr          { $$ = opr(LE, 2, $1, $3); }
          | expr NE expr          { $$ = opr(NE, 2, $1, $3); }
          | expr EQ expr          { $$ = opr(EQ, 2, $1, $3); }
          | '(' expr ')'          { $$ = $2; }
          | CMMMC expr expr       { $$ = opr(CMMMC, 2, $2, $3); }
          | CMMDC expr expr       { $$ = opr(CMMDC, 2, $2, $3); }
          ;

%%

nodeType *con(int value)
{
  nodeType *p;

  /* allocate node */
  if ((p = malloc(sizeof(conNodeType))) == NULL)
    yyerror("out of memory");
  /* copy information */
  p->type = typeCon;
  p->con.value = value;
  return p;
}

nodeType *conS(char* value)
{
  nodeType *p;

  /* allocate node */
  if ((p = malloc(sizeof(conNodeType))) == NULL)
    yyerror("out of memory");
  /* copy information */
  p->type = typeScon;
  p->conS.value = value;
  return p;
}

nodeType *id(int i)
{
  nodeType *p;
  /* allocate node */
  if ((p = malloc(sizeof(idNodeType))) == NULL)
    yyerror("out of memory");
  /* copy information */
  p->type = typeId;
  p->id.i = i;
  return p;
}

nodeType *idS(int i)
{
  nodeType *p;
  /* allocate node */
  if ((p = malloc(sizeof(idNodeType))) == NULL)
    yyerror("out of memory");
  /* copy information */
  p->type = typeSid;
  p->id.i = i;
  return p;
}

nodeType *opr(int oper, int nops, ...)
{
  va_list ap;
  nodeType *p;
  size_t size;
  int i;

  /* allocate node */
  size = sizeof(oprNodeType) + (nops - 1) * sizeof(nodeType*);
  if ((p = malloc(size)) == NULL)
    yyerror("out of memory");
  /* copy information */
  p->type = typeOpr;
  p->opr.oper = oper;
  p->opr.nops = nops;
  va_start(ap, nops);
  for (i = 0; i < nops; i++)
    p->opr.op[i] = va_arg(ap, nodeType*);
  va_end(ap);

  return p;
}

void freeNode(nodeType *p)
{
  int i;
  if (!p)
    return;
  if (p->type == typeOpr) {
    for (i = 0; i < p->opr.nops; i++)
      freeNode(p->opr.op[i]);
  }
  free(p);
}

nodeType *root = NULL;

int ex(nodeType *p)
{
  if (!p)
    return 0;

  switch (p->type) {
    case typeCon:
      return p->con.value;

    case typeId:
      return sym[p->id.i];

    case typeSid:
      return p->idS.i;

    case typeOpr:

      switch (p->opr.oper) {

        case WHILE:{
          while (ex(p->opr.op[0]))
            ex(p->opr.op[1]);
          return 0;
        }
        case DO:
          do {
            ex(p->opr.op[0]);
          } while (ex(p->opr.op[1]));
          return 0;

        case IF:
          if (ex(p->opr.op[0]))
            ex(p->opr.op[1]);
          else if (p->opr.nops > 2)
            ex(p->opr.op[2]);
          return 0;

        case FOR: {
          int init_value = ex(p->opr.op[1]);
          int end_value = ex(p->opr.op[2]);
          int step_value = ex(p->opr.op[3]);

          contor = 0;
          x = calloc(end_value - init_value + 1, sizeof(int));
          y = calloc(end_value - init_value + 1, sizeof(int));
          int j = 0;
          for(int i = init_value; i <= end_value; i+=step_value){
            x[j] = i;
            j++;
          }
          size = j;
          if (step_value < 0) {
            for (int i = init_value; i >= end_value; i += step_value) {
              sym[p->opr.op[0]->id.i] = i;
              printf("%d\n", sym[p->opr.op[0]->id.i]);
              ex(p->opr.op[4]);
            }
          } else if (step_value > 0) {
            for (int i = init_value; i <= end_value; i += step_value) {
              sym[p->opr.op[0]->id.i] = i;
              ex(p->opr.op[4]);
            }
          }
          return 0;
        }
        case PLOT: {
          createPlot();
          return 0;
        }
        case SAVE: {
          y[contor] = ex(p->opr.op[0]);
          contor++;
          return 0;
        }

        case CMMMC: {
          a = ex(p->opr.op[0]);
          b = ex(p->opr.op[1]);
          cmmmc = calculateCMMMC();
          printf("cmmmc (%d, %d) = %d\n", c, d, cmmmc);
          return cmmmc;
        }

        case CMMDC: {
          a = ex(p->opr.op[0]);
          b = ex(p->opr.op[1]);
          cmmdc = calculateCMMDC();
          printf("cmmdc (%d, %d) = %d\n", c, d, cmmdc);
          return cmmdc;
        }

        case DISPLAY:
          printf("%d\n", ex(p->opr.op[0]));
        return 0;

        case SHOW:
          printf("%s\n", strings[ex(p->opr.op[0])]);
        return 0; 

        case ';':
          ex(p->opr.op[0]);
          return ex(p->opr.op[1]);

        case '=':
          return sym[p->opr.op[0]->id.i] = ex(p->opr.op[1]);
        
        case IS:
          strings[p->opr.op[0]->id.i] = p->opr.op[1]->conS.value;
          return 0;

        case UMINUS:
          return -ex(p->opr.op[0]);

        case '+':
          return ex(p->opr.op[0]) + ex(p->opr.op[1]);

        case '-':
          return ex(p->opr.op[0]) - ex(p->opr.op[1]);

        case '*':
          return ex(p->opr.op[0]) * ex(p->opr.op[1]);

        case '/':
          return ex(p->opr.op[0]) / ex(p->opr.op[1]);

        case '%':
          return ex(p->opr.op[0]) % ex(p->opr.op[1]);

        case '<':
          return ex(p->opr.op[0]) < ex(p->opr.op[1]);

        case '>':
          return ex(p->opr.op[0]) > ex(p->opr.op[1]);

        case GE:
          return ex(p->opr.op[0]) >= ex(p->opr.op[1]);

        case LE:
          return ex(p->opr.op[0]) <= ex(p->opr.op[1]);

        case NE:
          return ex(p->opr.op[0]) != ex(p->opr.op[1]);

        case EQ:
          return ex(p->opr.op[0]) == ex(p->opr.op[1]);
      }
  }
}

void yyerror(char *s)
{
  fprintf(stdout, "%s\n", s);
}

int calculateCMMMC(){
  c = a;
  d = b;
  while(a != b) {
    if(a > b){
      a = a - b;
    }
    else{
      b = b - a;
    };
    
  }
  return a;
}

int calculateCMMDC(){
  cmmmc = calculateCMMMC();
  cmmdc = c * d / cmmmc;
  return cmmdc;
}


void createPlot() {
  FILE *gnuplotPipe;
  gnuplotPipe = popen("gnuplot -persistent", "w");

  if (gnuplotPipe) {
    fprintf(gnuplotPipe, "set term qt title 'YOUR FUNCTION PLOT'\n");
    // fprintf(gnuplotPipe, "set title 'plot'\n");  // Set the window title
    fprintf(gnuplotPipe, "plot '-' with lines\n");
    for (int i = 0; i < size; i++) {
      fprintf(gnuplotPipe, "%d %d\n", x[i], y[i]);
    }
    fprintf(gnuplotPipe, "e\n");
    fflush(gnuplotPipe);
  }
}


int main(void)
{
#if YYDEBUG
  yydebug = 1;
#endif
  yyparse();

  if (yyparse() == 0) {
        printf("Parse OK\n");
    } else {
        printf("Parse Failed\n");
    }

  return 0;
}