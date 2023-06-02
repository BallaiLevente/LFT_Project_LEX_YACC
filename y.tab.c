/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "project.y"

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


#line 105 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 221 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_VARIABLE = 4,                   /* VARIABLE  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_WHILE = 6,                      /* WHILE  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_DISPLAY = 8,                    /* DISPLAY  */
  YYSYMBOL_FOR = 9,                        /* FOR  */
  YYSYMBOL_TO = 10,                        /* TO  */
  YYSYMBOL_IS = 11,                        /* IS  */
  YYSYMBOL_STEP = 12,                      /* STEP  */
  YYSYMBOL_DO = 13,                        /* DO  */
  YYSYMBOL_CASE = 14,                      /* CASE  */
  YYSYMBOL_SWITCH = 15,                    /* SWITCH  */
  YYSYMBOL_DEFAULT = 16,                   /* DEFAULT  */
  YYSYMBOL_SAVE = 17,                      /* SAVE  */
  YYSYMBOL_PLOT = 18,                      /* PLOT  */
  YYSYMBOL_CMMMC = 19,                     /* CMMMC  */
  YYSYMBOL_CMMDC = 20,                     /* CMMDC  */
  YYSYMBOL_SHOW = 21,                      /* SHOW  */
  YYSYMBOL_IFX = 22,                       /* IFX  */
  YYSYMBOL_ELSE = 23,                      /* ELSE  */
  YYSYMBOL_GE = 24,                        /* GE  */
  YYSYMBOL_LE = 25,                        /* LE  */
  YYSYMBOL_EQ = 26,                        /* EQ  */
  YYSYMBOL_NE = 27,                        /* NE  */
  YYSYMBOL_28_ = 28,                       /* '>'  */
  YYSYMBOL_29_ = 29,                       /* '<'  */
  YYSYMBOL_30_ = 30,                       /* '+'  */
  YYSYMBOL_31_ = 31,                       /* '-'  */
  YYSYMBOL_32_ = 32,                       /* '*'  */
  YYSYMBOL_33_ = 33,                       /* '/'  */
  YYSYMBOL_34_ = 34,                       /* '%'  */
  YYSYMBOL_UMINUS = 35,                    /* UMINUS  */
  YYSYMBOL_36_ = 36,                       /* '.'  */
  YYSYMBOL_37_ = 37,                       /* ';'  */
  YYSYMBOL_38_ = 38,                       /* '='  */
  YYSYMBOL_39_ = 39,                       /* '('  */
  YYSYMBOL_40_ = 40,                       /* ')'  */
  YYSYMBOL_41_ = 41,                       /* ':'  */
  YYSYMBOL_42_ = 42,                       /* '{'  */
  YYSYMBOL_43_ = 43,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_function = 46,                  /* function  */
  YYSYMBOL_statement = 47,                 /* statement  */
  YYSYMBOL_case = 48,                      /* case  */
  YYSYMBOL_case_list = 49,                 /* case_list  */
  YYSYMBOL_stmt_list = 50,                 /* stmt_list  */
  YYSYMBOL_expr = 51                       /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   446

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  8
/* YYNRULES -- Number of rules.  */
#define YYNRULES  42
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  114

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   283


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    34,     2,     2,
      39,    40,    32,    30,     2,    31,    36,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    41,    37,
      29,    38,    28,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    61,    61,    64,    65,    68,    69,    70,    71,    73,
      74,    75,    77,    79,    81,    83,    85,    87,    88,    90,
      94,    96,   100,   101,   104,   105,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER", "VARIABLE",
  "STRING", "WHILE", "IF", "DISPLAY", "FOR", "TO", "IS", "STEP", "DO",
  "CASE", "SWITCH", "DEFAULT", "SAVE", "PLOT", "CMMMC", "CMMDC", "SHOW",
  "IFX", "ELSE", "GE", "LE", "EQ", "NE", "'>'", "'<'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "UMINUS", "'.'", "';'", "'='", "'('", "')'", "':'", "'{'",
  "'}'", "$accept", "program", "function", "statement", "case",
  "case_list", "stmt_list", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-39)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -39,     1,   141,   -39,   -39,    -5,   -35,   -30,    -1,     6,
     178,   -26,    -1,   -21,    -1,    -1,    20,    -1,   -39,   -39,
      -1,   178,   -39,   367,    24,    -1,    -1,    -1,   -39,   381,
       2,    22,    -1,   395,   -39,   199,   199,    21,   -39,   282,
     -39,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   -39,    27,   409,   299,   316,   -39,    -1,
      -2,   333,   -39,    -1,    23,    23,   -39,   -39,   -39,   -39,
      23,    23,    23,    23,    23,    23,   -11,   -11,   -39,   -39,
     -39,   -39,   -39,   178,   178,   224,    -1,    18,   -39,   -39,
      38,    -1,   350,    25,   178,   235,    28,    -1,    26,   -39,
      -9,   -39,    -1,   -39,   246,   178,   -39,   -39,   264,   178,
     -39,   178,   -39,   -39
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     1,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     5,
       0,     0,     3,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    18,     0,     0,     0,    28,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     0,     0,     0,     0,     7,     0,
       0,     0,    19,     0,    41,    42,     8,    40,    17,    25,
      36,    37,    39,    38,    35,    34,    29,    30,    31,    33,
      32,    10,     9,     0,     0,     0,     0,     0,    28,    11,
      14,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,    15,     0,    13,     0,     0,    16,    23,     0,     0,
      21,     0,    20,    12
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -39,   -39,   -39,   -10,   -38,   -39,   -39,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    22,    99,   100,    41,    23
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      31,     3,     4,    28,    26,    97,    24,    98,    29,    27,
      30,    40,    33,    32,    35,    36,    34,    38,    14,    15,
      39,    50,    51,    52,    37,    55,    56,    57,    60,    54,
      17,    69,    61,    25,   106,    64,    65,    86,    20,    97,
      59,    98,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    48,    49,    50,    51,    52,    66,    85,
      93,    94,   107,    88,    81,   103,     0,   105,     0,     0,
       0,     0,     0,    89,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,    92,     0,     0,     0,
       0,    95,     0,     0,     0,   110,     0,   104,     0,   112,
       0,   113,   108,     4,     5,     0,     6,     7,     8,     9,
       0,     0,     0,    10,     0,    11,     0,    12,    13,    14,
      15,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,     0,     0,    19,     0,    20,
       0,     0,    21,    68,     4,     5,     0,     6,     7,     8,
       9,     0,     0,     0,    10,     0,    11,     0,    12,    13,
      14,    15,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,    18,    19,     0,
      20,     4,     5,    21,     6,     7,     8,     9,     0,     0,
       0,    10,     0,    11,     0,    12,    13,    14,    15,    16,
       0,     0,     4,    28,     0,     0,     0,     0,     0,    17,
       0,     0,     0,     0,     0,    19,     0,    20,    14,    15,
      21,     0,     0,    42,    43,    44,    45,    46,    47,    48,
      63,    50,    51,    52,    91,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,   102,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,     0,     0,     0,     0,     0,   109,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
       0,     0,     0,     0,     0,   111,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,     0,     0,
       0,     0,    67,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,     0,     0,     0,     0,    83,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,     0,     0,     0,     0,    84,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,     0,
       0,     0,     0,    87,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,     0,     0,     0,     0,
      96,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,     0,    53,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,     0,    58,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,     0,    62,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,     0,    82
};

static const yytype_int8 yycheck[] =
{
      10,     0,     3,     4,    39,    14,    11,    16,     8,    39,
       4,    21,    12,    39,    14,    15,    37,    17,    19,    20,
      20,    32,    33,    34,     4,    25,    26,    27,     6,     5,
      31,    41,    32,    38,    43,    35,    36,    39,    39,    14,
      38,    16,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    30,    31,    32,    33,    34,    37,    59,
      42,    23,   100,    63,    37,    37,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    86,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,   105,    -1,    97,    -1,   109,
      -1,   111,   102,     3,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,    13,    -1,    15,    -1,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    43,     3,     4,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    15,    -1,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    36,    37,    -1,
      39,     3,     4,    42,     6,     7,     8,     9,    -1,    -1,
      -1,    13,    -1,    15,    -1,    17,    18,    19,    20,    21,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    19,    20,
      42,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    10,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    40,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      40,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    37,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    -1,    37,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    37,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    45,    46,     0,     3,     4,     6,     7,     8,     9,
      13,    15,    17,    18,    19,    20,    21,    31,    36,    37,
      39,    42,    47,    51,    11,    38,    39,    39,     4,    51,
       4,    47,    39,    51,    37,    51,    51,     4,    51,    51,
      47,    50,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    37,     5,    51,    51,    51,    37,    38,
       6,    51,    37,    31,    51,    51,    37,    40,    43,    47,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    37,    37,    40,    40,    51,    39,    40,    51,    47,
      47,    10,    51,    42,    23,    51,    40,    14,    16,    48,
      49,    47,    12,    37,    51,    41,    43,    48,    51,    41,
      47,    41,    47,    47
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      48,    48,    49,    49,    50,    50,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     2,     3,     3,     4,
       4,     5,    10,     7,     5,     7,     7,     3,     2,     3,
       4,     3,     1,     2,     1,     2,     1,     1,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: function '.'  */
#line 61 "project.y"
                                  { exit(0); }
#line 1378 "y.tab.c"
    break;

  case 3: /* function: function statement  */
#line 64 "project.y"
                                  { ex((yyvsp[0].nPtr)); freeNode((yyvsp[0].nPtr)); }
#line 1384 "y.tab.c"
    break;

  case 5: /* statement: ';'  */
#line 68 "project.y"
                                   { (yyval.nPtr) = opr(';', 2, NULL, NULL); }
#line 1390 "y.tab.c"
    break;

  case 6: /* statement: expr ';'  */
#line 69 "project.y"
                                  { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1396 "y.tab.c"
    break;

  case 7: /* statement: DISPLAY expr ';'  */
#line 70 "project.y"
                                    { (yyval.nPtr) = opr(DISPLAY, 1, (yyvsp[-1].nPtr)); }
#line 1402 "y.tab.c"
    break;

  case 8: /* statement: SHOW VARIABLE ';'  */
#line 71 "project.y"
                                    { (yyval.nPtr) = opr(SHOW, 1, idS((yyvsp[-1].sIndex))); }
#line 1408 "y.tab.c"
    break;

  case 9: /* statement: VARIABLE '=' expr ';'  */
#line 73 "project.y"
                                  { (yyval.nPtr) = opr('=', 2, id((yyvsp[-3].sIndex)), (yyvsp[-1].nPtr)); }
#line 1414 "y.tab.c"
    break;

  case 10: /* statement: VARIABLE IS STRING ';'  */
#line 74 "project.y"
                                   { (yyval.nPtr) = opr(IS, 2, idS((yyvsp[-3].sIndex)), conS((yyvsp[-1].string))); }
#line 1420 "y.tab.c"
    break;

  case 11: /* statement: WHILE '(' expr ')' statement  */
#line 76 "project.y"
                { (yyval.nPtr) = opr(WHILE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1426 "y.tab.c"
    break;

  case 12: /* statement: FOR VARIABLE '=' expr TO expr STEP expr ':' statement  */
#line 78 "project.y"
                { (yyval.nPtr) = opr(FOR, 5, id((yyvsp[-8].sIndex)), (yyvsp[-6].nPtr), (yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1432 "y.tab.c"
    break;

  case 13: /* statement: DO statement WHILE '(' expr ')' ';'  */
#line 80 "project.y"
                { (yyval.nPtr) = opr(DO, 2, (yyvsp[-5].nPtr), (yyvsp[-2].nPtr)); }
#line 1438 "y.tab.c"
    break;

  case 14: /* statement: IF '(' expr ')' statement  */
#line 82 "project.y"
                { (yyval.nPtr) = opr(IF, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1444 "y.tab.c"
    break;

  case 15: /* statement: IF '(' expr ')' statement ELSE statement  */
#line 84 "project.y"
                { (yyval.nPtr) = opr(IF, 3, (yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1450 "y.tab.c"
    break;

  case 16: /* statement: SWITCH '(' expr ')' '{' case_list '}'  */
#line 86 "project.y"
                { (yyval.nPtr) = opr(SWITCH, 2, (yyvsp[-4].nPtr), (yyvsp[-1].nPtr)); }
#line 1456 "y.tab.c"
    break;

  case 17: /* statement: '{' stmt_list '}'  */
#line 87 "project.y"
                              { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1462 "y.tab.c"
    break;

  case 18: /* statement: PLOT ';'  */
#line 89 "project.y"
                { (yyval.nPtr) = opr(PLOT, 0); }
#line 1468 "y.tab.c"
    break;

  case 19: /* statement: SAVE expr ';'  */
#line 91 "project.y"
                { (yyval.nPtr) = opr(SAVE, 1, (yyvsp[-1].nPtr)); }
#line 1474 "y.tab.c"
    break;

  case 20: /* case: CASE expr ':' statement  */
#line 95 "project.y"
              { (yyval.nPtr) = opr(CASE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1480 "y.tab.c"
    break;

  case 21: /* case: DEFAULT ':' statement  */
#line 97 "project.y"
              { (yyval.nPtr) = opr(DEFAULT, 1, (yyvsp[0].nPtr)); }
#line 1486 "y.tab.c"
    break;

  case 23: /* case_list: case_list case  */
#line 101 "project.y"
                            { (yyval.nPtr) = opr(';', 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1492 "y.tab.c"
    break;

  case 25: /* stmt_list: stmt_list statement  */
#line 105 "project.y"
                                  { (yyval.nPtr) = opr(';', 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1498 "y.tab.c"
    break;

  case 26: /* expr: INTEGER  */
#line 108 "project.y"
                                  { (yyval.nPtr) = con((yyvsp[0].iValue)); }
#line 1504 "y.tab.c"
    break;

  case 27: /* expr: VARIABLE  */
#line 109 "project.y"
                                  { (yyval.nPtr) = id((yyvsp[0].sIndex)); }
#line 1510 "y.tab.c"
    break;

  case 28: /* expr: '-' expr  */
#line 110 "project.y"
                                  { (yyval.nPtr) = opr(UMINUS, 1, (yyvsp[0].nPtr)); }
#line 1516 "y.tab.c"
    break;

  case 29: /* expr: expr '+' expr  */
#line 111 "project.y"
                                  { (yyval.nPtr) = opr('+', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1522 "y.tab.c"
    break;

  case 30: /* expr: expr '-' expr  */
#line 112 "project.y"
                                  { (yyval.nPtr) = opr('-', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1528 "y.tab.c"
    break;

  case 31: /* expr: expr '*' expr  */
#line 113 "project.y"
                                  { (yyval.nPtr) = opr('*', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1534 "y.tab.c"
    break;

  case 32: /* expr: expr '%' expr  */
#line 114 "project.y"
                                  { (yyval.nPtr) = opr('%', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1540 "y.tab.c"
    break;

  case 33: /* expr: expr '/' expr  */
#line 115 "project.y"
                                  { (yyval.nPtr) = opr('/', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1546 "y.tab.c"
    break;

  case 34: /* expr: expr '<' expr  */
#line 116 "project.y"
                                  { (yyval.nPtr) = opr('<', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1552 "y.tab.c"
    break;

  case 35: /* expr: expr '>' expr  */
#line 117 "project.y"
                                  { (yyval.nPtr) = opr('>', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1558 "y.tab.c"
    break;

  case 36: /* expr: expr GE expr  */
#line 118 "project.y"
                                  { (yyval.nPtr) = opr(GE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1564 "y.tab.c"
    break;

  case 37: /* expr: expr LE expr  */
#line 119 "project.y"
                                  { (yyval.nPtr) = opr(LE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1570 "y.tab.c"
    break;

  case 38: /* expr: expr NE expr  */
#line 120 "project.y"
                                  { (yyval.nPtr) = opr(NE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1576 "y.tab.c"
    break;

  case 39: /* expr: expr EQ expr  */
#line 121 "project.y"
                                  { (yyval.nPtr) = opr(EQ, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1582 "y.tab.c"
    break;

  case 40: /* expr: '(' expr ')'  */
#line 122 "project.y"
                                  { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1588 "y.tab.c"
    break;

  case 41: /* expr: CMMMC expr expr  */
#line 123 "project.y"
                                  { (yyval.nPtr) = opr(CMMMC, 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1594 "y.tab.c"
    break;

  case 42: /* expr: CMMDC expr expr  */
#line 124 "project.y"
                                  { (yyval.nPtr) = opr(CMMDC, 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1600 "y.tab.c"
    break;


#line 1604 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 127 "project.y"


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
