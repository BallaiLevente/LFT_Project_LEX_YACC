%{
#include <stdlib.h>
#include <stdio.h>
#include "types.h"
#include "y.tab.h"
%}

%%
 
  /* variables (int)*/
[a-z]           {
                   yylval.sIndex = *yytext - 'a';
                   return VARIABLE;
                }
  /* variables (string)*/
[A-Z]           {
                   yylval.sIndex = *yytext - 'A';
                   return VARIABLE;
                }

  /* integers */                 
[0-9]+          {
                   yylval.iValue = atoi(yytext);
                   return INTEGER;
                }

  /* strings */
\"[^\"\n]*\"    {
                   yylval.string = strdup(yytext);
                   return STRING;
                }

  /* operators */
[-()<>=+/*;{}.:] return *yytext;

">="            return GE;
"<="            return LE;
"=="            return EQ;
"!="            return NE;
"while"         return WHILE;
"do"            return DO;
"switch"        return SWITCH;
"case"          return CASE;
"default"       return DEFAULT;
"if"            return IF;
"else"          return ELSE;
"display"       return DISPLAY;
"show"          return SHOW;
"for"           return FOR;
"to"            return TO;
"is"            return IS;
"step"          return STEP;
"plot"          return PLOT;
"save"          return SAVE;
"cmmmc"         return CMMMC;
"cmmdc"         return CMMDC;

[ \t\n]+        ;      // Skip whitespaces.

.               yyerror("Unknown character.\n");

%%

int yywrap(void)
{
    return 1;
}