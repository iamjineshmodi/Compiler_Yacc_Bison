
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 ".\\parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

extern FILE* yyin;
extern int line_num;
extern int yylex();
extern int yydebug;
void yyerror(const char* s);
ASTNode* root = NULL;


/* Line 189 of yacc.c  */
#line 88 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BEGIN_TOK = 258,
     END_TOK = 259,
     PROGRAM = 260,
     VARDECL = 261,
     IF = 262,
     ELSE = 263,
     WHILE = 264,
     FOR = 265,
     TO = 266,
     DO = 267,
     INC = 268,
     DEC = 269,
     PRINT = 270,
     SCAN = 271,
     ASSIGN = 272,
     PLUS_ASSIGN = 273,
     MINUS_ASSIGN = 274,
     MULT_ASSIGN = 275,
     DIV_ASSIGN = 276,
     MOD_ASSIGN = 277,
     PLUS = 278,
     MINUS = 279,
     MULT = 280,
     DIV = 281,
     MOD = 282,
     EQ = 283,
     GT = 284,
     LT = 285,
     GE = 286,
     LE = 287,
     NE = 288,
     LPAREN = 289,
     RPAREN = 290,
     COMMA = 291,
     SEMICOLON = 292,
     COLON = 293,
     LBRACKET = 294,
     RBRACKET = 295,
     AT = 296,
     IDENTIFIER = 297,
     STRING = 298,
     INT = 299,
     CHAR = 300,
     DECIMAL = 301,
     BINARY = 302,
     OCTAL = 303,
     CHAR_CONST = 304,
     UMINUS = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 15 ".\\parser.y"

    struct {
        int value;
        int base;
    } intval;
    char ch;
    char* str;
    struct ASTNode* ast;



/* Line 214 of yacc.c  */
#line 186 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 198 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   267

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNRULES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    11,    18,    20,    23,    30,    37,    39,
      49,    59,    69,    79,    89,    99,   101,   104,   106,   108,
     110,   112,   114,   116,   121,   126,   131,   136,   141,   146,
     148,   152,   156,   160,   164,   168,   172,   176,   180,   182,
     186,   190,   194,   196,   198,   202,   205,   207,   209,   211,
     213,   220,   229,   237,   249,   261,   267,   275,   277,   281,
     289,   291,   295,   299
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,     3,     5,    38,    53,    57,     4,     5,
      -1,     3,     6,    38,    54,     4,     6,    -1,    55,    -1,
      55,    54,    -1,    34,    42,    36,    44,    35,    37,    -1,
      34,    42,    36,    45,    35,    37,    -1,    56,    -1,    34,
      42,    39,    46,    40,    36,    44,    35,    37,    -1,    34,
      42,    39,    47,    40,    36,    44,    35,    37,    -1,    34,
      42,    39,    48,    40,    36,    44,    35,    37,    -1,    34,
      42,    39,    46,    40,    36,    45,    35,    37,    -1,    34,
      42,    39,    47,    40,    36,    45,    35,    37,    -1,    34,
      42,    39,    48,    40,    36,    45,    35,    37,    -1,    58,
      -1,    58,    57,    -1,    59,    -1,    64,    -1,    65,    -1,
      66,    -1,    67,    -1,    69,    -1,    42,    17,    60,    37,
      -1,    42,    18,    60,    37,    -1,    42,    19,    60,    37,
      -1,    42,    20,    60,    37,    -1,    42,    21,    60,    37,
      -1,    42,    22,    60,    37,    -1,    61,    -1,    60,    23,
      61,    -1,    60,    24,    61,    -1,    60,    29,    61,    -1,
      60,    30,    61,    -1,    60,    31,    61,    -1,    60,    32,
      61,    -1,    60,    28,    61,    -1,    60,    33,    61,    -1,
      62,    -1,    61,    25,    62,    -1,    61,    26,    62,    -1,
      61,    27,    62,    -1,    42,    -1,    63,    -1,    34,    60,
      35,    -1,    24,    62,    -1,    46,    -1,    47,    -1,    48,
      -1,    49,    -1,     7,    34,    60,    35,    71,    37,    -1,
       7,    34,    60,    35,    71,     8,    71,    37,    -1,     9,
      34,    60,    35,    12,    71,    37,    -1,    10,    42,    17,
      60,    11,    60,    13,    60,    12,    71,    37,    -1,    10,
      42,    17,    60,    11,    60,    14,    60,    12,    71,    37,
      -1,    15,    34,    43,    35,    37,    -1,    15,    34,    43,
      36,    68,    35,    37,    -1,    60,    -1,    60,    36,    68,
      -1,    16,    34,    43,    36,    70,    35,    37,    -1,    42,
      -1,    42,    36,    70,    -1,     3,    57,     4,    -1,    58,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    54,    54,    61,    68,    69,    76,    78,    80,    85,
      87,    89,    91,    93,    95,   100,   101,   108,   109,   110,
     111,   112,   113,   117,   119,   121,   123,   125,   127,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   144,   145,
     146,   147,   151,   152,   153,   154,   158,   159,   160,   161,
     165,   167,   172,   177,   182,   190,   192,   197,   198,   205,
     210,   211,   218,   219
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BEGIN_TOK", "END_TOK", "PROGRAM",
  "VARDECL", "IF", "ELSE", "WHILE", "FOR", "TO", "DO", "INC", "DEC",
  "PRINT", "SCAN", "ASSIGN", "PLUS_ASSIGN", "MINUS_ASSIGN", "MULT_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "PLUS", "MINUS", "MULT", "DIV", "MOD", "EQ",
  "GT", "LT", "GE", "LE", "NE", "LPAREN", "RPAREN", "COMMA", "SEMICOLON",
  "COLON", "LBRACKET", "RBRACKET", "AT", "IDENTIFIER", "STRING", "INT",
  "CHAR", "DECIMAL", "BINARY", "OCTAL", "CHAR_CONST", "UMINUS", "$accept",
  "program", "var_decl_section", "var_decl_list", "var_decl", "array_decl",
  "statement_list", "statement", "assignment_stmt", "expression", "term",
  "factor", "constant", "if_stmt", "while_stmt", "for_stmt", "print_stmt",
  "print_arg_list", "scan_stmt", "scan_arg_list", "block", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    54,    54,    55,    55,    55,    56,
      56,    56,    56,    56,    56,    57,    57,    58,    58,    58,
      58,    58,    58,    59,    59,    59,    59,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    61,    61,
      61,    61,    62,    62,    62,    62,    63,    63,    63,    63,
      64,    64,    65,    66,    66,    67,    67,    68,    68,    69,
      70,    70,    71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     6,     1,     2,     6,     6,     1,     9,
       9,     9,     9,     9,     9,     1,     2,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     1,     1,     3,     2,     1,     1,     1,     1,
       6,     8,     7,    11,    11,     5,     7,     1,     3,     7,
       1,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    17,    18,    19,
      20,    21,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,     0,     0,     4,
       8,     0,     0,    42,    46,    47,    48,    49,     0,    29,
      38,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     5,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,     0,     0,     3,    44,    30,    31,    36,    32,    33,
      34,    35,    37,     0,    63,     0,    39,    40,    41,     0,
       0,    55,    57,     0,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,     0,    52,     0,     0,
      58,    56,    61,    59,     6,     7,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    12,
      10,    13,    11,    14,    53,    54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,    38,    39,    40,    15,   104,    17,   112,
      49,    50,    51,    18,    19,    20,    21,   113,    22,   115,
     105
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -106
static const yytype_int16 yypact[] =
{
      21,    10,    30,    -4,  -106,    37,    45,    26,    25,    51,
      57,    33,    65,    70,   222,   107,    26,  -106,  -106,  -106,
    -106,  -106,  -106,    82,    13,    13,   110,    93,    95,    13,
      13,    13,    13,    13,    13,   142,  -106,   116,   145,    82,
    -106,    13,    13,  -106,  -106,  -106,  -106,  -106,   177,    19,
    -106,  -106,   190,    13,    -8,   124,   100,   111,   122,   133,
     144,   155,  -106,   -23,   163,  -106,  -106,   203,    13,    13,
      13,    13,    13,    13,    13,    13,    16,    13,    13,    13,
     159,    41,   143,    13,   140,  -106,  -106,  -106,  -106,  -106,
    -106,    -6,   -26,  -106,  -106,    19,    19,    19,    19,    19,
      19,    19,    19,    26,  -106,     6,  -106,  -106,  -106,    16,
      13,  -106,   166,   156,   157,   168,   169,   176,   175,   184,
     188,   212,    16,  -106,   180,    89,    13,   192,   140,   193,
     200,   208,   210,   211,   213,  -106,   214,  -106,    13,    13,
    -106,  -106,  -106,  -106,  -106,  -106,    12,    22,    81,  -106,
      64,    77,   215,   217,   218,   219,   220,   221,    16,    16,
     223,   224,   225,   226,   227,   228,   229,   230,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,  -106,  -106,   209,  -106,  -106,   -13,    -5,  -106,   -24,
       9,   -29,  -106,  -106,  -106,  -106,  -106,   131,  -106,   130,
    -105
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      48,    52,    16,    36,   124,    56,    57,    58,    59,    60,
      61,    16,    66,    91,   122,     3,    92,   136,    67,   103,
     118,   119,   120,     9,     1,    10,    11,    82,    83,    81,
       4,    12,    13,     9,     5,    10,    11,    41,   116,   117,
       6,    12,    13,   123,    77,    78,    79,    42,   106,   107,
     108,     8,   110,   166,   167,    43,   152,   153,    14,    44,
      45,    46,    47,    23,    68,    69,   154,   155,    14,    70,
      71,    72,    73,    74,    75,    26,   158,    95,    96,    97,
      98,    99,   100,   101,   102,    24,   125,    68,    69,   159,
     121,    25,    70,    71,    72,    73,    74,    75,    16,    27,
      68,    69,   138,   139,    28,    70,    71,    72,    73,    74,
      75,    35,    68,    69,   150,   151,    37,    70,    71,    72,
      73,    74,    75,    68,    69,   156,   157,    53,    70,    71,
      72,    73,    74,    75,    68,    69,    54,    85,    55,    70,
      71,    72,    73,    74,    75,    68,    69,    62,    86,    64,
      70,    71,    72,    73,    74,    75,    68,    69,    63,    87,
      84,    70,    71,    72,    73,    74,    75,    68,    69,    93,
      88,   109,    70,    71,    72,    73,    74,    75,    68,    69,
     111,    89,   114,    70,    71,    72,    73,    74,    75,    68,
      69,   127,    90,   128,    70,    71,    72,    73,    74,    75,
      68,    69,   126,   129,   130,    70,    71,    72,    73,    74,
      75,   131,    76,    68,    69,   132,   135,   137,    70,    71,
      72,    73,    74,    75,   133,    80,    68,    69,   134,   141,
     143,    70,    71,    72,    73,    74,    75,   144,    94,    29,
      30,    31,    32,    33,    34,   145,   146,   147,    65,   148,
     160,   149,   161,   162,   163,   164,   165,   140,   142,     0,
     168,   169,   170,   171,   172,   173,   174,   175
};

static const yytype_int16 yycheck[] =
{
      24,    25,     7,    16,   109,    29,    30,    31,    32,    33,
      34,    16,    41,    36,     8,     5,    39,   122,    42,     3,
      46,    47,    48,     7,     3,     9,    10,    35,    36,    53,
       0,    15,    16,     7,    38,     9,    10,    24,    44,    45,
       3,    15,    16,    37,    25,    26,    27,    34,    77,    78,
      79,     6,    11,   158,   159,    42,    44,    45,    42,    46,
      47,    48,    49,    38,    23,    24,    44,    45,    42,    28,
      29,    30,    31,    32,    33,    42,    12,    68,    69,    70,
      71,    72,    73,    74,    75,    34,   110,    23,    24,    12,
     103,    34,    28,    29,    30,    31,    32,    33,   103,    34,
      23,    24,    13,    14,    34,    28,    29,    30,    31,    32,
      33,     4,    23,    24,   138,   139,    34,    28,    29,    30,
      31,    32,    33,    23,    24,    44,    45,    17,    28,    29,
      30,    31,    32,    33,    23,    24,    43,    37,    43,    28,
      29,    30,    31,    32,    33,    23,    24,     5,    37,     4,
      28,    29,    30,    31,    32,    33,    23,    24,    42,    37,
      36,    28,    29,    30,    31,    32,    33,    23,    24,     6,
      37,    12,    28,    29,    30,    31,    32,    33,    23,    24,
      37,    37,    42,    28,    29,    30,    31,    32,    33,    23,
      24,    35,    37,    36,    28,    29,    30,    31,    32,    33,
      23,    24,    36,    35,    35,    28,    29,    30,    31,    32,
      33,    35,    35,    23,    24,    40,     4,    37,    28,    29,
      30,    31,    32,    33,    40,    35,    23,    24,    40,    37,
      37,    28,    29,    30,    31,    32,    33,    37,    35,    17,
      18,    19,    20,    21,    22,    37,    36,    36,    39,    36,
      35,    37,    35,    35,    35,    35,    35,   126,   128,    -1,
      37,    37,    37,    37,    37,    37,    37,    37
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    52,     5,     0,    38,     3,    53,     6,     7,
       9,    10,    15,    16,    42,    57,    58,    59,    64,    65,
      66,    67,    69,    38,    34,    34,    42,    34,    34,    17,
      18,    19,    20,    21,    22,     4,    57,    34,    54,    55,
      56,    24,    34,    42,    46,    47,    48,    49,    60,    61,
      62,    63,    60,    17,    43,    43,    60,    60,    60,    60,
      60,    60,     5,    42,     4,    54,    62,    60,    23,    24,
      28,    29,    30,    31,    32,    33,    35,    25,    26,    27,
      35,    60,    35,    36,    36,    37,    37,    37,    37,    37,
      37,    36,    39,     6,    35,    61,    61,    61,    61,    61,
      61,    61,    61,     3,    58,    71,    62,    62,    62,    12,
      11,    37,    60,    68,    42,    70,    44,    45,    46,    47,
      48,    57,     8,    37,    71,    60,    36,    35,    36,    35,
      35,    35,    40,    40,    40,     4,    71,    37,    13,    14,
      68,    37,    70,    37,    37,    37,    36,    36,    36,    37,
      60,    60,    44,    45,    44,    45,    44,    45,    12,    12,
      35,    35,    35,    35,    35,    35,    71,    71,    37,    37,
      37,    37,    37,    37,    37,    37
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 55 ".\\parser.y"
    {
        root = create_program_node((yyvsp[(4) - (7)].ast), (yyvsp[(5) - (7)].ast));
    ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 62 ".\\parser.y"
    {
        (yyval.ast) = (yyvsp[(4) - (6)].ast);
    ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 68 ".\\parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 69 ".\\parser.y"
    { 
        // This creates a right-nested structure for variable declarations
        (yyval.ast) = create_list_node((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); 
    ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 77 ".\\parser.y"
    { (yyval.ast) = create_var_decl_node((yyvsp[(2) - (6)].str), (yyvsp[(4) - (6)].str), 0); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 79 ".\\parser.y"
    { (yyval.ast) = create_var_decl_node((yyvsp[(2) - (6)].str), (yyvsp[(4) - (6)].str), 0); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 81 ".\\parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 86 ".\\parser.y"
    { (yyval.ast) = create_var_decl_node((yyvsp[(2) - (9)].str), (yyvsp[(7) - (9)].str), (yyvsp[(4) - (9)].intval).value); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 88 ".\\parser.y"
    { (yyval.ast) = create_var_decl_node((yyvsp[(2) - (9)].str), (yyvsp[(7) - (9)].str), (yyvsp[(4) - (9)].intval).value); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 90 ".\\parser.y"
    { (yyval.ast) = create_var_decl_node((yyvsp[(2) - (9)].str), (yyvsp[(7) - (9)].str), (yyvsp[(4) - (9)].intval).value); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 92 ".\\parser.y"
    { (yyval.ast) = create_var_decl_node((yyvsp[(2) - (9)].str), (yyvsp[(7) - (9)].str), (yyvsp[(4) - (9)].intval).value); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 94 ".\\parser.y"
    { (yyval.ast) = create_var_decl_node((yyvsp[(2) - (9)].str), (yyvsp[(7) - (9)].str), (yyvsp[(4) - (9)].intval).value); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 96 ".\\parser.y"
    { (yyval.ast) = create_var_decl_node((yyvsp[(2) - (9)].str), (yyvsp[(7) - (9)].str), (yyvsp[(4) - (9)].intval).value); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 100 ".\\parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 101 ".\\parser.y"
    { 
        // This creates a right-nested structure for statements
        (yyval.ast) = create_list_node((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); 
    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 108 ".\\parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 109 ".\\parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 110 ".\\parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 111 ".\\parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 112 ".\\parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 113 ".\\parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 118 ".\\parser.y"
    { (yyval.ast) = create_assign_node(create_identifier_node((yyvsp[(1) - (4)].str)), (yyvsp[(3) - (4)].ast), ASSIGN); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 120 ".\\parser.y"
    { (yyval.ast) = create_assign_node(create_identifier_node((yyvsp[(1) - (4)].str)), (yyvsp[(3) - (4)].ast), PLUS_ASSIGN); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 122 ".\\parser.y"
    { (yyval.ast) = create_assign_node(create_identifier_node((yyvsp[(1) - (4)].str)), (yyvsp[(3) - (4)].ast), MINUS_ASSIGN); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 124 ".\\parser.y"
    { (yyval.ast) = create_assign_node(create_identifier_node((yyvsp[(1) - (4)].str)), (yyvsp[(3) - (4)].ast), MULT_ASSIGN); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 126 ".\\parser.y"
    { (yyval.ast) = create_assign_node(create_identifier_node((yyvsp[(1) - (4)].str)), (yyvsp[(3) - (4)].ast), DIV_ASSIGN); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 128 ".\\parser.y"
    { (yyval.ast) = create_assign_node(create_identifier_node((yyvsp[(1) - (4)].str)), (yyvsp[(3) - (4)].ast), MOD_ASSIGN); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 132 ".\\parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 133 ".\\parser.y"
    { (yyval.ast) = create_binary_op_node((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), PLUS); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 134 ".\\parser.y"
    { (yyval.ast) = create_binary_op_node((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), MINUS); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 135 ".\\parser.y"
    { (yyval.ast) = create_binary_op_node((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), GT); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 136 ".\\parser.y"
    { (yyval.ast) = create_binary_op_node((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), LT); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 137 ".\\parser.y"
    { (yyval.ast) = create_binary_op_node((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), GE); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 138 ".\\parser.y"
    { (yyval.ast) = create_binary_op_node((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), LE); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 139 ".\\parser.y"
    { (yyval.ast) = create_binary_op_node((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), EQ); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 140 ".\\parser.y"
    { (yyval.ast) = create_binary_op_node((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), NE); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 144 ".\\parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 145 ".\\parser.y"
    { (yyval.ast) = create_binary_op_node((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), MULT); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 146 ".\\parser.y"
    { (yyval.ast) = create_binary_op_node((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), DIV); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 147 ".\\parser.y"
    { (yyval.ast) = create_binary_op_node((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), MOD); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 151 ".\\parser.y"
    { (yyval.ast) = create_identifier_node((yyvsp[(1) - (1)].str)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 152 ".\\parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 153 ".\\parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 154 ".\\parser.y"
    { (yyval.ast) = create_binary_op_node(create_int_const_node(0, 10), (yyvsp[(2) - (2)].ast), MINUS); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 158 ".\\parser.y"
    { (yyval.ast) = create_int_const_node((yyvsp[(1) - (1)].intval).value, (yyvsp[(1) - (1)].intval).base); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 159 ".\\parser.y"
    { (yyval.ast) = create_int_const_node((yyvsp[(1) - (1)].intval).value, (yyvsp[(1) - (1)].intval).base); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 160 ".\\parser.y"
    { (yyval.ast) = create_int_const_node((yyvsp[(1) - (1)].intval).value, (yyvsp[(1) - (1)].intval).base); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 161 ".\\parser.y"
    { (yyval.ast) = create_char_const_node((yyvsp[(1) - (1)].ch)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 166 ".\\parser.y"
    { (yyval.ast) = create_if_node((yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), NULL); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 168 ".\\parser.y"
    { (yyval.ast) = create_if_node((yyvsp[(3) - (8)].ast), (yyvsp[(5) - (8)].ast), (yyvsp[(7) - (8)].ast)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 173 ".\\parser.y"
    { (yyval.ast) = create_while_node((yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 178 ".\\parser.y"
    {
            ASTNode* init = create_assign_node(create_identifier_node((yyvsp[(2) - (11)].str)), (yyvsp[(4) - (11)].ast), ASSIGN);
            (yyval.ast) = create_for_node(init, (yyvsp[(6) - (11)].ast), (yyvsp[(8) - (11)].ast), INC, (yyvsp[(10) - (11)].ast));
        ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 183 ".\\parser.y"
    {
            ASTNode* init = create_assign_node(create_identifier_node((yyvsp[(2) - (11)].str)), (yyvsp[(4) - (11)].ast), ASSIGN);
            (yyval.ast) = create_for_node(init, (yyvsp[(6) - (11)].ast), (yyvsp[(8) - (11)].ast), DEC, (yyvsp[(10) - (11)].ast));
        ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 191 ".\\parser.y"
    { (yyval.ast) = create_print_node(create_string_node((yyvsp[(3) - (5)].str)), NULL); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 193 ".\\parser.y"
    { (yyval.ast) = create_print_node(create_string_node((yyvsp[(3) - (7)].str)), (yyvsp[(5) - (7)].ast)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 197 ".\\parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 198 ".\\parser.y"
    { 
        // Create right-nested structure for print arguments
        (yyval.ast) = create_list_node((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); 
    ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 206 ".\\parser.y"
    { (yyval.ast) = create_scan_node(create_string_node((yyvsp[(3) - (7)].str)), (yyvsp[(5) - (7)].ast)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 210 ".\\parser.y"
    { (yyval.ast) = create_identifier_node((yyvsp[(1) - (1)].str)); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 211 ".\\parser.y"
    { 
        // Create right-nested structure for scan arguments
        (yyval.ast) = create_list_node(create_identifier_node((yyvsp[(1) - (3)].str)), (yyvsp[(3) - (3)].ast)); 
    ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 218 ".\\parser.y"
    { (yyval.ast) = create_block_node((yyvsp[(2) - (3)].ast)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 219 ".\\parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2011 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 222 ".\\parser.y"


void yyerror(const char* s) {
    fprintf(stderr, "Syntax error at line %d: %s\n", line_num, s);
}

int main(int argc, char *argv[]) {
    //yydebug=1;
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input file>\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Error opening file");
        return 1;
    }

    int parse_result = yyparse();
    fclose(yyin);

    if (parse_result == 0) {
        printf("Successfully parsed !!!\n");
        printf("AST in the generalized list form\n");
        print_ast(root, 0);
        printf("\n");
        return 0;
    } else {
        printf("Syntax error !!!\n");
        return 1;
    }
}
