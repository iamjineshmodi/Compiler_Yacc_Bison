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
#line 1 "parser.y"

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

#line 85 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BEGIN_TOK = 3,                  /* BEGIN_TOK  */
  YYSYMBOL_END_TOK = 4,                    /* END_TOK  */
  YYSYMBOL_PROGRAM = 5,                    /* PROGRAM  */
  YYSYMBOL_VARDECL = 6,                    /* VARDECL  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_WHILE = 9,                      /* WHILE  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_TO = 11,                        /* TO  */
  YYSYMBOL_DO = 12,                        /* DO  */
  YYSYMBOL_INC = 13,                       /* INC  */
  YYSYMBOL_DEC = 14,                       /* DEC  */
  YYSYMBOL_PRINT = 15,                     /* PRINT  */
  YYSYMBOL_SCAN = 16,                      /* SCAN  */
  YYSYMBOL_ASSIGN = 17,                    /* ASSIGN  */
  YYSYMBOL_PLUS_ASSIGN = 18,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 19,              /* MINUS_ASSIGN  */
  YYSYMBOL_MULT_ASSIGN = 20,               /* MULT_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 21,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 22,                /* MOD_ASSIGN  */
  YYSYMBOL_PLUS = 23,                      /* PLUS  */
  YYSYMBOL_MINUS = 24,                     /* MINUS  */
  YYSYMBOL_MULT = 25,                      /* MULT  */
  YYSYMBOL_DIV = 26,                       /* DIV  */
  YYSYMBOL_MOD = 27,                       /* MOD  */
  YYSYMBOL_EQ = 28,                        /* EQ  */
  YYSYMBOL_GT = 29,                        /* GT  */
  YYSYMBOL_LT = 30,                        /* LT  */
  YYSYMBOL_GE = 31,                        /* GE  */
  YYSYMBOL_LE = 32,                        /* LE  */
  YYSYMBOL_NE = 33,                        /* NE  */
  YYSYMBOL_LPAREN = 34,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 35,                    /* RPAREN  */
  YYSYMBOL_COMMA = 36,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 37,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 38,                     /* COLON  */
  YYSYMBOL_LBRACKET = 39,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 40,                  /* RBRACKET  */
  YYSYMBOL_AT = 41,                        /* AT  */
  YYSYMBOL_IDENTIFIER = 42,                /* IDENTIFIER  */
  YYSYMBOL_STRING = 43,                    /* STRING  */
  YYSYMBOL_INT = 44,                       /* INT  */
  YYSYMBOL_CHAR = 45,                      /* CHAR  */
  YYSYMBOL_DECIMAL = 46,                   /* DECIMAL  */
  YYSYMBOL_BINARY = 47,                    /* BINARY  */
  YYSYMBOL_OCTAL = 48,                     /* OCTAL  */
  YYSYMBOL_CHAR_CONST = 49,                /* CHAR_CONST  */
  YYSYMBOL_UMINUS = 50,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_program = 52,                   /* program  */
  YYSYMBOL_var_decl_section = 53,          /* var_decl_section  */
  YYSYMBOL_var_decl_list = 54,             /* var_decl_list  */
  YYSYMBOL_var_decl = 55,                  /* var_decl  */
  YYSYMBOL_statement_list = 56,            /* statement_list  */
  YYSYMBOL_statement = 57,                 /* statement  */
  YYSYMBOL_assignment_stmt = 58,           /* assignment_stmt  */
  YYSYMBOL_expression = 59,                /* expression  */
  YYSYMBOL_term = 60,                      /* term  */
  YYSYMBOL_factor = 61,                    /* factor  */
  YYSYMBOL_constant = 62,                  /* constant  */
  YYSYMBOL_if_stmt = 63,                   /* if_stmt  */
  YYSYMBOL_while_stmt = 64,                /* while_stmt  */
  YYSYMBOL_for_stmt = 65,                  /* for_stmt  */
  YYSYMBOL_print_stmt = 66,                /* print_stmt  */
  YYSYMBOL_print_arg_list = 67,            /* print_arg_list  */
  YYSYMBOL_scan_stmt = 68,                 /* scan_stmt  */
  YYSYMBOL_scan_arg_list = 69,             /* scan_arg_list  */
  YYSYMBOL_block = 70                      /* block  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   255

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    54,    54,    61,    68,    69,    73,    75,    77,    79,
      84,    85,    89,    90,    91,    92,    93,    94,    98,   100,
     102,   104,   106,   108,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   125,   126,   127,   128,   132,   133,   134,
     135,   139,   140,   144,   146,   151,   156,   161,   169,   171,
     176,   177,   183,   189,   190,   194,   195
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
  "\"end of file\"", "error", "\"invalid token\"", "BEGIN_TOK", "END_TOK",
  "PROGRAM", "VARDECL", "IF", "ELSE", "WHILE", "FOR", "TO", "DO", "INC",
  "DEC", "PRINT", "SCAN", "ASSIGN", "PLUS_ASSIGN", "MINUS_ASSIGN",
  "MULT_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "PLUS", "MINUS", "MULT",
  "DIV", "MOD", "EQ", "GT", "LT", "GE", "LE", "NE", "LPAREN", "RPAREN",
  "COMMA", "SEMICOLON", "COLON", "LBRACKET", "RBRACKET", "AT",
  "IDENTIFIER", "STRING", "INT", "CHAR", "DECIMAL", "BINARY", "OCTAL",
  "CHAR_CONST", "UMINUS", "$accept", "program", "var_decl_section",
  "var_decl_list", "var_decl", "statement_list", "statement",
  "assignment_stmt", "expression", "term", "factor", "constant", "if_stmt",
  "while_stmt", "for_stmt", "print_stmt", "print_arg_list", "scan_stmt",
  "scan_arg_list", "block", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-74)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,    24,    40,    14,   -74,    52,    50,    21,    26,    28,
      49,    43,    53,    55,   226,    82,    21,   -74,   -74,   -74,
     -74,   -74,   -74,    56,     9,     9,    74,    61,    62,     9,
       9,     9,     9,     9,     9,    87,   -74,    66,    93,    56,
       9,     8,   -74,   -74,   181,    -3,   -74,   -74,   194,     9,
      -1,    94,   115,   126,   137,   148,   159,   170,   -74,   -20,
     123,   -74,   -74,    95,   207,     9,     9,     9,     9,     9,
       9,     9,     9,    11,     9,     9,     9,    11,    48,   103,
       9,    99,   -74,   -74,   -74,   -74,   -74,   -74,    -6,    96,
     -74,   105,   -74,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    21,   -74,     4,   -74,   -74,   -74,   116,     9,   -74,
      37,   127,   128,   138,   140,   149,   146,   160,   193,    11,
     -74,   -74,   104,     9,   169,    99,   171,   178,   182,   184,
     -74,   -74,   191,     9,     9,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -74,    70,    83,   186,   197,    11,    11,   196,
     204,   212,   213,   -74,   -74,   -74,   -74
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    12,    13,    14,
      15,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     0,     0,     4,
       0,     0,    37,    42,     0,    24,    33,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     5,    40,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,    19,    20,    21,    22,    23,     0,     0,
       3,     0,    39,    25,    26,    31,    27,    28,    29,    30,
      32,     0,    56,     0,    34,    35,    36,     0,     0,    48,
      50,     0,    53,     0,     0,     0,     0,     0,     0,     0,
      43,    45,     0,     0,     0,     0,     0,     0,     0,     0,
      41,    55,     0,     0,     0,    51,    49,    54,    52,     6,
       7,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    46,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -74,   -74,   -74,   195,   -74,   -13,    -5,   -74,   -24,    54,
     -27,   -74,   -74,   -74,   -74,   -74,   129,   -74,   130,   -73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     7,    38,    39,    15,   102,    17,   110,    45,
      46,    47,    18,    19,    20,    21,   111,    22,   113,   103
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      44,    48,    16,    36,   107,    52,    53,    54,    55,    56,
      57,    16,   119,    62,   101,     1,    88,    64,     9,    89,
      10,    11,    74,    75,    76,    78,    12,    13,     9,     3,
      10,    11,    40,    40,    79,    80,    12,    13,   114,   115,
       4,   120,    41,    41,   145,   146,   132,   104,   105,   106,
      42,    42,     5,    14,    63,     6,     8,    43,    43,   108,
      65,    66,    24,    14,    23,    67,    68,    69,    70,    71,
      72,    65,    66,   123,   151,   152,    67,    68,    69,    70,
      71,    72,   147,    25,   122,    26,    35,    27,   118,    28,
      37,    49,    58,    65,    66,   148,    16,    60,    67,    68,
      69,    70,    71,    72,    50,    51,    65,    66,    59,   143,
     144,    67,    68,    69,    70,    71,    72,   133,   134,    93,
      94,    95,    96,    97,    98,    99,   100,    65,    66,    90,
      81,    91,    67,    68,    69,    70,    71,    72,    65,    66,
     109,   112,   116,    67,    68,    69,    70,    71,    72,    65,
      66,   117,    82,   121,    67,    68,    69,    70,    71,    72,
      65,    66,   124,    83,   125,    67,    68,    69,    70,    71,
      72,    65,    66,   126,    84,   127,    67,    68,    69,    70,
      71,    72,    65,    66,   128,    85,   129,    67,    68,    69,
      70,    71,    72,    65,    66,   130,    86,   131,    67,    68,
      69,    70,    71,    72,    65,    66,   136,    87,   138,    67,
      68,    69,    70,    71,    72,   139,    73,    65,    66,   140,
     141,   149,    67,    68,    69,    70,    71,    72,   142,    77,
      65,    66,   150,   153,    61,    67,    68,    69,    70,    71,
      72,   154,    92,    29,    30,    31,    32,    33,    34,   155,
     156,     0,   135,     0,     0,   137
};

static const yytype_int16 yycheck[] =
{
      24,    25,     7,    16,    77,    29,    30,    31,    32,    33,
      34,    16,     8,    40,     3,     3,    36,    41,     7,    39,
       9,    10,    25,    26,    27,    49,    15,    16,     7,     5,
       9,    10,    24,    24,    35,    36,    15,    16,    44,    45,
       0,    37,    34,    34,    44,    45,   119,    74,    75,    76,
      42,    42,    38,    42,    46,     3,     6,    49,    49,    11,
      23,    24,    34,    42,    38,    28,    29,    30,    31,    32,
      33,    23,    24,    36,   147,   148,    28,    29,    30,    31,
      32,    33,    12,    34,   108,    42,     4,    34,   101,    34,
      34,    17,     5,    23,    24,    12,   101,     4,    28,    29,
      30,    31,    32,    33,    43,    43,    23,    24,    42,   133,
     134,    28,    29,    30,    31,    32,    33,    13,    14,    65,
      66,    67,    68,    69,    70,    71,    72,    23,    24,     6,
      36,    36,    28,    29,    30,    31,    32,    33,    23,    24,
      37,    42,    46,    28,    29,    30,    31,    32,    33,    23,
      24,    46,    37,    37,    28,    29,    30,    31,    32,    33,
      23,    24,    35,    37,    36,    28,    29,    30,    31,    32,
      33,    23,    24,    35,    37,    35,    28,    29,    30,    31,
      32,    33,    23,    24,    35,    37,    40,    28,    29,    30,
      31,    32,    33,    23,    24,    35,    37,     4,    28,    29,
      30,    31,    32,    33,    23,    24,    37,    37,    37,    28,
      29,    30,    31,    32,    33,    37,    35,    23,    24,    37,
      36,    35,    28,    29,    30,    31,    32,    33,    37,    35,
      23,    24,    35,    37,    39,    28,    29,    30,    31,    32,
      33,    37,    35,    17,    18,    19,    20,    21,    22,    37,
      37,    -1,   123,    -1,    -1,   125
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    52,     5,     0,    38,     3,    53,     6,     7,
       9,    10,    15,    16,    42,    56,    57,    58,    63,    64,
      65,    66,    68,    38,    34,    34,    42,    34,    34,    17,
      18,    19,    20,    21,    22,     4,    56,    34,    54,    55,
      24,    34,    42,    49,    59,    60,    61,    62,    59,    17,
      43,    43,    59,    59,    59,    59,    59,    59,     5,    42,
       4,    54,    61,    46,    59,    23,    24,    28,    29,    30,
      31,    32,    33,    35,    25,    26,    27,    35,    59,    35,
      36,    36,    37,    37,    37,    37,    37,    37,    36,    39,
       6,    36,    35,    60,    60,    60,    60,    60,    60,    60,
      60,     3,    57,    70,    61,    61,    61,    70,    11,    37,
      59,    67,    42,    69,    44,    45,    46,    46,    56,     8,
      37,    37,    59,    36,    35,    36,    35,    35,    35,    40,
      35,     4,    70,    13,    14,    67,    37,    69,    37,    37,
      37,    36,    37,    59,    59,    44,    45,    12,    12,    35,
      35,    70,    70,    37,    37,    37,    37
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    54,    54,    55,    55,    55,    55,
      56,    56,    57,    57,    57,    57,    57,    57,    58,    58,
      58,    58,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    60,    60,    60,    60,    61,    61,    61,
      61,    62,    62,    63,    63,    64,    65,    65,    66,    66,
      67,    67,    68,    69,    69,    70,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     6,     1,     2,     6,     6,     9,     9,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     1,     1,     3,
       2,     5,     1,     6,     8,     6,    11,    11,     5,     7,
       1,     3,     7,     1,     3,     3,     1
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
  case 2: /* program: BEGIN_TOK PROGRAM COLON var_decl_section statement_list END_TOK PROGRAM  */
#line 55 "parser.y"
    {
        root = create_program_node((yyvsp[-3].ast), (yyvsp[-2].ast));
    }
#line 1257 "parser.tab.c"
    break;

  case 3: /* var_decl_section: BEGIN_TOK VARDECL COLON var_decl_list END_TOK VARDECL  */
#line 62 "parser.y"
    {
        (yyval.ast) = (yyvsp[-2].ast);
    }
#line 1265 "parser.tab.c"
    break;

  case 4: /* var_decl_list: var_decl  */
#line 68 "parser.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 1271 "parser.tab.c"
    break;

  case 5: /* var_decl_list: var_decl var_decl_list  */
#line 69 "parser.y"
                             { (yyval.ast) = create_list_node((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 1277 "parser.tab.c"
    break;

  case 6: /* var_decl: LPAREN IDENTIFIER COMMA INT RPAREN SEMICOLON  */
#line 74 "parser.y"
        { (yyval.ast) = create_var_decl_node((yyvsp[-4].str), (yyvsp[-2].str), 0); }
#line 1283 "parser.tab.c"
    break;

  case 7: /* var_decl: LPAREN IDENTIFIER COMMA CHAR RPAREN SEMICOLON  */
#line 76 "parser.y"
        { (yyval.ast) = create_var_decl_node((yyvsp[-4].str), (yyvsp[-2].str), 0); }
#line 1289 "parser.tab.c"
    break;

  case 8: /* var_decl: LPAREN IDENTIFIER LBRACKET DECIMAL RBRACKET COMMA INT RPAREN SEMICOLON  */
#line 78 "parser.y"
        { (yyval.ast) = create_var_decl_node((yyvsp[-7].str), (yyvsp[-2].str), (yyvsp[-5].intval).value); }
#line 1295 "parser.tab.c"
    break;

  case 9: /* var_decl: LPAREN IDENTIFIER LBRACKET DECIMAL RBRACKET COMMA CHAR RPAREN SEMICOLON  */
#line 80 "parser.y"
        { (yyval.ast) = create_var_decl_node((yyvsp[-7].str), (yyvsp[-2].str), (yyvsp[-5].intval).value); }
#line 1301 "parser.tab.c"
    break;

  case 10: /* statement_list: statement  */
#line 84 "parser.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 1307 "parser.tab.c"
    break;

  case 11: /* statement_list: statement statement_list  */
#line 85 "parser.y"
                               { (yyval.ast) = create_list_node((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 1313 "parser.tab.c"
    break;

  case 12: /* statement: assignment_stmt  */
#line 89 "parser.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 1319 "parser.tab.c"
    break;

  case 13: /* statement: if_stmt  */
#line 90 "parser.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 1325 "parser.tab.c"
    break;

  case 14: /* statement: while_stmt  */
#line 91 "parser.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 1331 "parser.tab.c"
    break;

  case 15: /* statement: for_stmt  */
#line 92 "parser.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 1337 "parser.tab.c"
    break;

  case 16: /* statement: print_stmt  */
#line 93 "parser.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 1343 "parser.tab.c"
    break;

  case 17: /* statement: scan_stmt  */
#line 94 "parser.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 1349 "parser.tab.c"
    break;

  case 18: /* assignment_stmt: IDENTIFIER ASSIGN expression SEMICOLON  */
#line 99 "parser.y"
        { (yyval.ast) = create_assign_node(create_identifier_node((yyvsp[-3].str)), (yyvsp[-1].ast), ASSIGN); }
#line 1355 "parser.tab.c"
    break;

  case 19: /* assignment_stmt: IDENTIFIER PLUS_ASSIGN expression SEMICOLON  */
#line 101 "parser.y"
        { (yyval.ast) = create_assign_node(create_identifier_node((yyvsp[-3].str)), (yyvsp[-1].ast), PLUS_ASSIGN); }
#line 1361 "parser.tab.c"
    break;

  case 20: /* assignment_stmt: IDENTIFIER MINUS_ASSIGN expression SEMICOLON  */
#line 103 "parser.y"
        { (yyval.ast) = create_assign_node(create_identifier_node((yyvsp[-3].str)), (yyvsp[-1].ast), MINUS_ASSIGN); }
#line 1367 "parser.tab.c"
    break;

  case 21: /* assignment_stmt: IDENTIFIER MULT_ASSIGN expression SEMICOLON  */
#line 105 "parser.y"
        { (yyval.ast) = create_assign_node(create_identifier_node((yyvsp[-3].str)), (yyvsp[-1].ast), MULT_ASSIGN); }
#line 1373 "parser.tab.c"
    break;

  case 22: /* assignment_stmt: IDENTIFIER DIV_ASSIGN expression SEMICOLON  */
#line 107 "parser.y"
        { (yyval.ast) = create_assign_node(create_identifier_node((yyvsp[-3].str)), (yyvsp[-1].ast), DIV_ASSIGN); }
#line 1379 "parser.tab.c"
    break;

  case 23: /* assignment_stmt: IDENTIFIER MOD_ASSIGN expression SEMICOLON  */
#line 109 "parser.y"
        { (yyval.ast) = create_assign_node(create_identifier_node((yyvsp[-3].str)), (yyvsp[-1].ast), MOD_ASSIGN); }
#line 1385 "parser.tab.c"
    break;

  case 24: /* expression: term  */
#line 113 "parser.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 1391 "parser.tab.c"
    break;

  case 25: /* expression: expression PLUS term  */
#line 114 "parser.y"
                            { (yyval.ast) = create_binary_op_node((yyvsp[-2].ast), (yyvsp[0].ast), PLUS); }
#line 1397 "parser.tab.c"
    break;

  case 26: /* expression: expression MINUS term  */
#line 115 "parser.y"
                            { (yyval.ast) = create_binary_op_node((yyvsp[-2].ast), (yyvsp[0].ast), MINUS); }
#line 1403 "parser.tab.c"
    break;

  case 27: /* expression: expression GT term  */
#line 116 "parser.y"
                            { (yyval.ast) = create_binary_op_node((yyvsp[-2].ast), (yyvsp[0].ast), GT); }
#line 1409 "parser.tab.c"
    break;

  case 28: /* expression: expression LT term  */
#line 117 "parser.y"
                            { (yyval.ast) = create_binary_op_node((yyvsp[-2].ast), (yyvsp[0].ast), LT); }
#line 1415 "parser.tab.c"
    break;

  case 29: /* expression: expression GE term  */
#line 118 "parser.y"
                            { (yyval.ast) = create_binary_op_node((yyvsp[-2].ast), (yyvsp[0].ast), GE); }
#line 1421 "parser.tab.c"
    break;

  case 30: /* expression: expression LE term  */
#line 119 "parser.y"
                            { (yyval.ast) = create_binary_op_node((yyvsp[-2].ast), (yyvsp[0].ast), LE); }
#line 1427 "parser.tab.c"
    break;

  case 31: /* expression: expression EQ term  */
#line 120 "parser.y"
                            { (yyval.ast) = create_binary_op_node((yyvsp[-2].ast), (yyvsp[0].ast), EQ); }
#line 1433 "parser.tab.c"
    break;

  case 32: /* expression: expression NE term  */
#line 121 "parser.y"
                            { (yyval.ast) = create_binary_op_node((yyvsp[-2].ast), (yyvsp[0].ast), NE); }
#line 1439 "parser.tab.c"
    break;

  case 33: /* term: factor  */
#line 125 "parser.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 1445 "parser.tab.c"
    break;

  case 34: /* term: term MULT factor  */
#line 126 "parser.y"
                       { (yyval.ast) = create_binary_op_node((yyvsp[-2].ast), (yyvsp[0].ast), MULT); }
#line 1451 "parser.tab.c"
    break;

  case 35: /* term: term DIV factor  */
#line 127 "parser.y"
                       { (yyval.ast) = create_binary_op_node((yyvsp[-2].ast), (yyvsp[0].ast), DIV); }
#line 1457 "parser.tab.c"
    break;

  case 36: /* term: term MOD factor  */
#line 128 "parser.y"
                       { (yyval.ast) = create_binary_op_node((yyvsp[-2].ast), (yyvsp[0].ast), MOD); }
#line 1463 "parser.tab.c"
    break;

  case 37: /* factor: IDENTIFIER  */
#line 132 "parser.y"
                 { (yyval.ast) = create_identifier_node((yyvsp[0].str)); }
#line 1469 "parser.tab.c"
    break;

  case 38: /* factor: constant  */
#line 133 "parser.y"
                 { (yyval.ast) = (yyvsp[0].ast); }
#line 1475 "parser.tab.c"
    break;

  case 39: /* factor: LPAREN expression RPAREN  */
#line 134 "parser.y"
                               { (yyval.ast) = (yyvsp[-1].ast); }
#line 1481 "parser.tab.c"
    break;

  case 40: /* factor: MINUS factor  */
#line 135 "parser.y"
                                { (yyval.ast) = create_binary_op_node(create_int_const_node(0, 10), (yyvsp[0].ast), MINUS); }
#line 1487 "parser.tab.c"
    break;

  case 41: /* constant: LPAREN DECIMAL COMMA DECIMAL RPAREN  */
#line 139 "parser.y"
                                          { (yyval.ast) = create_int_const_node((yyvsp[-3].intval).value, (yyvsp[-1].intval).value); }
#line 1493 "parser.tab.c"
    break;

  case 42: /* constant: CHAR_CONST  */
#line 140 "parser.y"
                 { (yyval.ast) = create_char_const_node((yyvsp[0].ch)); }
#line 1499 "parser.tab.c"
    break;

  case 43: /* if_stmt: IF LPAREN expression RPAREN block SEMICOLON  */
#line 145 "parser.y"
        { (yyval.ast) = create_if_node((yyvsp[-3].ast), (yyvsp[-1].ast), NULL); }
#line 1505 "parser.tab.c"
    break;

  case 44: /* if_stmt: IF LPAREN expression RPAREN block ELSE block SEMICOLON  */
#line 147 "parser.y"
        { (yyval.ast) = create_if_node((yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 1511 "parser.tab.c"
    break;

  case 45: /* while_stmt: WHILE LPAREN expression RPAREN block SEMICOLON  */
#line 152 "parser.y"
        { (yyval.ast) = create_while_node((yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 1517 "parser.tab.c"
    break;

  case 46: /* for_stmt: FOR IDENTIFIER ASSIGN expression TO expression INC expression DO block SEMICOLON  */
#line 157 "parser.y"
        {
            ASTNode* init = create_assign_node(create_identifier_node((yyvsp[-9].str)), (yyvsp[-7].ast), ASSIGN);
            (yyval.ast) = create_for_node(init, (yyvsp[-5].ast), (yyvsp[-3].ast), INC, (yyvsp[-1].ast));
        }
#line 1526 "parser.tab.c"
    break;

  case 47: /* for_stmt: FOR IDENTIFIER ASSIGN expression TO expression DEC expression DO block SEMICOLON  */
#line 162 "parser.y"
        {
            ASTNode* init = create_assign_node(create_identifier_node((yyvsp[-9].str)), (yyvsp[-7].ast), ASSIGN);
            (yyval.ast) = create_for_node(init, (yyvsp[-5].ast), (yyvsp[-3].ast), DEC, (yyvsp[-1].ast));
        }
#line 1535 "parser.tab.c"
    break;

  case 48: /* print_stmt: PRINT LPAREN STRING RPAREN SEMICOLON  */
#line 170 "parser.y"
        { (yyval.ast) = create_print_node(create_string_node((yyvsp[-2].str)), NULL); }
#line 1541 "parser.tab.c"
    break;

  case 49: /* print_stmt: PRINT LPAREN STRING COMMA print_arg_list RPAREN SEMICOLON  */
#line 172 "parser.y"
        { (yyval.ast) = create_print_node(create_string_node((yyvsp[-4].str)), (yyvsp[-2].ast)); }
#line 1547 "parser.tab.c"
    break;

  case 50: /* print_arg_list: expression  */
#line 176 "parser.y"
                 { (yyval.ast) = (yyvsp[0].ast); }
#line 1553 "parser.tab.c"
    break;

  case 51: /* print_arg_list: expression COMMA print_arg_list  */
#line 177 "parser.y"
                                      { (yyval.ast) = create_list_node((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 1559 "parser.tab.c"
    break;

  case 52: /* scan_stmt: SCAN LPAREN STRING COMMA scan_arg_list RPAREN SEMICOLON  */
#line 184 "parser.y"
        { (yyval.ast) = create_scan_node(create_string_node((yyvsp[-4].str)), (yyvsp[-2].ast)); }
#line 1565 "parser.tab.c"
    break;

  case 53: /* scan_arg_list: IDENTIFIER  */
#line 189 "parser.y"
                 { (yyval.ast) = create_identifier_node((yyvsp[0].str)); }
#line 1571 "parser.tab.c"
    break;

  case 54: /* scan_arg_list: IDENTIFIER COMMA scan_arg_list  */
#line 190 "parser.y"
                                     { (yyval.ast) = create_list_node(create_identifier_node((yyvsp[-2].str)), (yyvsp[0].ast)); }
#line 1577 "parser.tab.c"
    break;

  case 55: /* block: BEGIN_TOK statement_list END_TOK  */
#line 194 "parser.y"
                                       { (yyval.ast) = create_block_node((yyvsp[-1].ast)); }
#line 1583 "parser.tab.c"
    break;

  case 56: /* block: statement  */
#line 195 "parser.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 1589 "parser.tab.c"
    break;


#line 1593 "parser.tab.c"

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

#line 198 "parser.y"


void yyerror(const char* s) {
    fprintf(stderr, "Syntax error at line %d: %s\n", line_num, s);
}

int main(int argc, char *argv[]) {
    yydebug=1;
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
