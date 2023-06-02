/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INTEGER = 258,                 /* INTEGER  */
    VARIABLE = 259,                /* VARIABLE  */
    STRING = 260,                  /* STRING  */
    WHILE = 261,                   /* WHILE  */
    IF = 262,                      /* IF  */
    DISPLAY = 263,                 /* DISPLAY  */
    FOR = 264,                     /* FOR  */
    TO = 265,                      /* TO  */
    IS = 266,                      /* IS  */
    STEP = 267,                    /* STEP  */
    DO = 268,                      /* DO  */
    CASE = 269,                    /* CASE  */
    SWITCH = 270,                  /* SWITCH  */
    DEFAULT = 271,                 /* DEFAULT  */
    SAVE = 272,                    /* SAVE  */
    PLOT = 273,                    /* PLOT  */
    CMMMC = 274,                   /* CMMMC  */
    CMMDC = 275,                   /* CMMDC  */
    SHOW = 276,                    /* SHOW  */
    IFX = 277,                     /* IFX  */
    ELSE = 278,                    /* ELSE  */
    GE = 279,                      /* GE  */
    LE = 280,                      /* LE  */
    EQ = 281,                      /* EQ  */
    NE = 282,                      /* NE  */
    UMINUS = 283                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INTEGER 258
#define VARIABLE 259
#define STRING 260
#define WHILE 261
#define IF 262
#define DISPLAY 263
#define FOR 264
#define TO 265
#define IS 266
#define STEP 267
#define DO 268
#define CASE 269
#define SWITCH 270
#define DEFAULT 271
#define SAVE 272
#define PLOT 273
#define CMMMC 274
#define CMMDC 275
#define SHOW 276
#define IFX 277
#define ELSE 278
#define GE 279
#define LE 280
#define EQ 281
#define NE 282
#define UMINUS 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 35 "project.y"

  int iValue;
  char sIndex;
  char* string;
  nodeType *nPtr;

#line 130 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
