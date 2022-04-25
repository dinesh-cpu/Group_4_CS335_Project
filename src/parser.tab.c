/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

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

#include <bits/stdc++.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include "parser.tab.h"
#include "ast.h"
#include "type_checking.h"
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

extern int line;
fstream ast_output;

int yyerror(const string&);
int yylex();

#line 91 "parser.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    STRING_VAL = 259,
    CONSTANT = 260,
    CHAR_CONSTANT = 261,
    POINTER_OPERATOR = 262,
    DECREMENT = 263,
    EQUAL_LOGICAL = 264,
    GREATER_EQUAL_OPERATOR = 265,
    INCREMENT = 266,
    LESS_EQUAL_OPERATOR = 267,
    AND_LOGICAL = 268,
    OR_LOGICAL = 269,
    NOT_EQUAL_OPERATOR = 270,
    LEFT_SHIFT_OPERATOR = 271,
    RIGHT_SHIFT_OPERATOR = 272,
    PRODUCT_ASSIGNMENT = 273,
    DIVIDE_ASSIGNMENT = 274,
    MOD_ASSIGNMENT = 275,
    AND_ASSIGNMENT = 276,
    ADD_ASSIGNMENT = 277,
    OR_ASSIGNMENT = 278,
    SUBTRACT_ASSIGNMENT = 279,
    XOR_ASSIGNMENT = 280,
    BOOL = 281,
    CHAR = 282,
    SHORT = 283,
    INT = 284,
    LONG = 285,
    SIGNED = 286,
    UNSIGNED = 287,
    STRING = 288,
    FLOAT = 289,
    DOUBLE = 290,
    VOID = 291,
    STRUCT = 292,
    CONST = 293,
    TYPEDEF = 294,
    AUTO = 295,
    USING = 296,
    CASE = 297,
    CONTINUE = 298,
    DEFAULT = 299,
    BREAK = 300,
    DELETE = 301,
    DO = 302,
    NEW = 303,
    FOR = 304,
    IF = 305,
    ELSE = 306,
    GOTO = 307,
    RETURN = 308,
    SWITCH = 309,
    WHILE = 310,
    SIZEOF = 311,
    SCANF = 312,
    PRINTF = 313
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "parser.y"

    int num;
	long long int instr;
    char *Str;
    struct node* Node;

#line 209 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   949

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  390

#define YYUNDEFTOK  2
#define YYMAXUTOK   313


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,     2,     2,    14,     7,     2,
      15,    16,    13,    10,    26,    11,    24,    12,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    17,    25,
       4,     9,     3,    23,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    21,     2,    22,     8,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    19,     6,    20,     5,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    68,    68,    91,   112,   121,   138,   144,   145,   189,
     219,   278,   313,   318,   350,   381,   402,   419,   420,   462,
     501,   557,   567,   576,   580,   584,   588,   592,   596,   603,
     618,   630,   631,   663,   695,   725,   726,   749,   780,   781,
     804,   829,   830,   863,   894,   926,   963,   964,   995,  1028,
    1029,  1059,  1060,  1087,  1088,  1127,  1128,  1170,  1186,  1192,
    1193,  1241,  1256,  1257,  1294,  1305,  1306,  1381,  1385,  1389,
    1393,  1397,  1401,  1405,  1409,  1416,  1417,  1423,  1427,  1428,
    1432,  1437,  1438,  1439,  1440,  1444,  1445,  1449,  1469,  1505,
    1509,  1513,  1517,  1521,  1525,  1530,  1535,  1540,  1545,  1550,
    1555,  1560,  1567,  1574,  1582,  1583,  1590,  1597,  1598,  1605,
    1620,  1627,  1637,  1644,  1652,  1658,  1664,  1671,  1725,  1741,
    1759,  1765,  1768,  1775,  1779,  1780,  1784,  1788,  1799,  1800,
    1804,  1805,  1809,  1810,  1814,  1815,  1816,  1820,  1821,  1822,
    1823,  1824,  1825,  1826,  1827,  1828,  1832,  1833,  1834,  1835,
    1839,  1840,  1844,  1845,  1846,  1847,  1848,  1849,  1850,  1851,
    1852,  1856,  1880,  1892,  1903,  1914,  1915,  1916,  1917,  1929,
    1939,  1947,  1948,  1952,  1956,  1968,  1969,  1974,  1981,  1991,
    1998,  2005,  2021,  2038,  2039,  2043,  2044,  2048,  2053,  2059,
    2063,  2067,  2070,  2074,  2081,  2084,  2090,  2100,  2110,  2122,
    2138,  2150,  2158,  2165,  2170,  2178,  2184,  2187,  2194,  2195,
    2196,  2200,  2207,  2208
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'>'", "'<'", "'~'", "'|'", "'&'", "'^'",
  "'='", "'+'", "'-'", "'/'", "'*'", "'%'", "'('", "')'", "':'", "'!'",
  "'{'", "'}'", "'['", "']'", "'?'", "'.'", "';'", "','", "IDENTIFIER",
  "STRING_VAL", "CONSTANT", "CHAR_CONSTANT", "POINTER_OPERATOR",
  "DECREMENT", "EQUAL_LOGICAL", "GREATER_EQUAL_OPERATOR", "INCREMENT",
  "LESS_EQUAL_OPERATOR", "AND_LOGICAL", "OR_LOGICAL", "NOT_EQUAL_OPERATOR",
  "LEFT_SHIFT_OPERATOR", "RIGHT_SHIFT_OPERATOR", "PRODUCT_ASSIGNMENT",
  "DIVIDE_ASSIGNMENT", "MOD_ASSIGNMENT", "AND_ASSIGNMENT",
  "ADD_ASSIGNMENT", "OR_ASSIGNMENT", "SUBTRACT_ASSIGNMENT",
  "XOR_ASSIGNMENT", "BOOL", "CHAR", "SHORT", "INT", "LONG", "SIGNED",
  "UNSIGNED", "STRING", "FLOAT", "DOUBLE", "VOID", "STRUCT", "CONST",
  "TYPEDEF", "AUTO", "USING", "CASE", "CONTINUE", "DEFAULT", "BREAK",
  "DELETE", "DO", "NEW", "FOR", "IF", "ELSE", "GOTO", "RETURN", "SWITCH",
  "WHILE", "SIZEOF", "SCANF", "PRINTF", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression", "new_and", "M",
  "logical_or_expression", "new_or", "conditional_expression", "N",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "typevar_NULL",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_specifier", "S1",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list", "declarator",
  "direct_declarator", "B2", "pointer", "parameter_type_list",
  "parameter_list", "k1", "parameter_declaration", "identifier_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "initializer_list", "statement", "case",
  "labeled_statement", "compound_statement", "A1", "A2",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "S2", "E1", "E2", "new_stmt", "delete_stmt",
  "printf_stmt", "printf_helper", "scanf_stmt", "scanf_helper",
  "iteration_statement", "jump_statement", "program", "translation_unit",
  "external_declaration", "external_struct_declaration",
  "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,    62,    60,   126,   124,    38,    94,    61,
      43,    45,    47,    42,    37,    40,    41,    58,    33,   123,
     125,    91,    93,    63,    46,    59,    44,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313
};
# endif

#define YYPACT_NINF (-329)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-206)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     840,    61,    74,  -329,  -329,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,    72,  -329,  -329,    74,   545,
     545,  -329,   105,    23,    27,   173,   221,  -329,  -329,  -329,
    -329,   207,   206,  -329,   212,   214,  -329,    63,   211,  -329,
    -329,   223,  -329,   403,  -329,   510,    23,  -329,   840,  -329,
     225,  -329,    74,   220,   279,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,   559,  -329,  -329,   231,  -329,  -329,  -329,
     752,   752,   781,   233,   239,   234,    70,  -329,   245,   246,
     236,   616,   250,  -329,   807,   251,   252,  -329,   155,   204,
     781,  -329,   144,   123,   174,    66,   135,   262,   263,   264,
     235,   237,    10,    26,  -329,  -329,   191,  -329,    74,  -329,
     256,  -329,  -329,   325,   255,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,   886,  -329,  -329,  -329,  -329,   257,  -329,   864,
    -329,   268,  -329,   279,   864,  -329,  -329,  -329,    79,   864,
     110,   265,   261,   781,  -329,  -329,  -329,  -329,   481,  -329,
     258,   260,   481,   642,   781,   270,  -329,   202,   781,   267,
     559,  -329,   259,   271,   671,   781,   273,   275,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,   781,  -329,
     781,   781,   781,   781,   781,   781,   781,   781,   781,   781,
     781,   781,   781,   781,   781,   781,  -329,  -329,  -329,  -329,
     781,   481,  -329,  -329,  -329,   255,   481,  -329,  -329,  -329,
      58,   288,   286,  -329,   100,  -329,   389,  -329,    74,  -329,
     152,   284,  -329,  -329,   148,   697,   167,  -329,   168,   781,
     481,  -329,   289,  -329,   238,  -329,   287,   299,  -329,  -329,
     287,   302,   781,   304,   296,   101,  -329,   106,  -329,    21,
    -329,  -329,  -329,  -329,  -329,  -329,   144,   144,   123,   123,
     174,   174,   174,   174,    66,    66,   135,   262,   263,   781,
     781,   781,  -329,  -329,  -329,  -329,   825,  -329,   150,  -329,
    -329,  -329,   545,  -329,   297,   298,  -329,   300,  -329,  -329,
      48,   254,  -329,   309,   315,  -329,   319,   168,   311,   726,
    -329,  -329,   308,   322,   642,  -329,   481,   326,  -329,   339,
     323,   320,  -329,   781,  -329,   264,   287,   235,  -329,  -329,
    -329,    74,   324,  -329,  -329,   334,  -329,  -329,  -329,  -329,
     342,  -329,   351,  -329,  -329,  -329,   371,   481,  -329,  -329,
     362,   374,  -329,    25,   381,  -329,   383,  -329,  -329,  -329,
    -329,  -329,   781,  -329,   781,   336,   481,   386,   390,   388,
     320,   394,  -329,  -329,   481,   287,   345,  -329,   339,  -329,
     401,  -329,  -329,   781,   408,  -329,   409,  -329,  -329,   400,
    -329,   402,  -329,   481,   320,  -329,   481,  -329,  -329,  -329
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   121,     0,   113,    93,    91,    92,    94,    95,    98,
      99,   100,    96,    97,    90,     0,    89,   209,    80,    81,
      83,   101,     0,   112,     0,     0,    80,   206,   210,   208,
     122,     0,   102,    80,     0,    80,    85,    87,     0,    82,
      84,   169,   213,     0,   120,     0,   111,     1,     0,   114,
       0,    78,     0,     0,     0,   212,   102,   165,    27,    23,
      25,    26,    24,     0,    28,   175,     2,     5,     3,     4,
       0,     0,     0,     0,     0,     0,     0,    58,     0,     0,
       0,     0,     0,    58,     0,     0,     0,     7,    17,    29,
       0,    31,    35,    38,    41,    46,    49,    51,    53,    55,
      59,     0,    62,     0,    65,    75,     0,   171,    80,   173,
       0,   152,   153,     0,    58,   154,   155,   160,   158,   159,
     156,   157,     0,   116,     2,    29,    77,     0,   207,     0,
      86,    87,    79,     0,     0,   146,    88,   147,     0,   108,
     132,     0,     0,     0,    19,    18,   161,   201,     0,   202,
       0,     0,     0,     0,     0,     0,   203,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,    14,    13,
      67,    68,    69,    72,    70,    74,    71,    73,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,    58,    58,   176,
       0,     0,   170,   172,   167,    58,     0,   166,   119,   130,
     129,     0,   123,   124,     0,   115,     0,   104,     0,   150,
       0,   184,     6,   107,     0,     0,   134,   133,   135,     0,
       0,   164,     0,   185,     0,    58,   181,     0,   200,   204,
     180,     0,     0,     0,     0,     0,     9,     0,    15,     0,
      11,    12,    66,    33,    32,    34,    36,    37,    39,    40,
      43,    42,    45,    44,    47,    48,    50,    52,    54,     0,
       0,     0,    76,   163,   168,   174,     0,   127,   134,   128,
     117,   126,     0,   118,     0,     0,   105,    80,   109,   148,
       0,     0,   142,     0,     0,   138,     0,   136,     0,     0,
      30,   162,     0,     0,     0,    58,     0,     0,    22,     0,
       0,     0,    10,     0,     8,    56,    64,    60,   125,   131,
     211,     0,     0,   149,   151,     0,   143,   137,   139,   144,
       0,   140,     0,   186,    58,   182,    58,     0,   179,    58,
       0,     0,   187,   189,     0,    16,     0,   110,   106,   183,
     145,   141,     0,    58,     0,   177,     0,   194,     0,     0,
       0,     0,    58,    64,     0,    64,     0,   196,     0,   193,
       0,   190,   188,     0,     0,   198,     0,    58,   195,   191,
      63,     0,    58,     0,     0,   197,     0,   178,   192,   199
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -329,  -329,  -329,  -329,   -45,  -329,   -69,    46,    49,     7,
      40,   241,   242,   272,   160,   166,  -329,   -43,  -329,  -329,
     -44,  -259,   -49,  -329,   -51,   -66,   -23,   -19,    17,  -329,
     399,  -329,   -41,  -329,  -329,  -329,   249,   -98,  -329,     0,
     -21,  -329,    12,  -113,  -329,  -329,   170,  -329,   318,  -116,
    -197,  -123,  -329,  -144,  -329,  -329,    13,  -329,   -95,  -329,
     355,  -138,  -329,  -329,  -231,  -329,  -329,  -329,  -329,  -328,
    -329,   107,  -329,  -329,  -329,  -329,   439,  -329,  -329
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    87,    88,   247,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   206,   102,   103,
     104,   346,   105,   178,   106,   127,    17,    34,   210,    35,
      36,    19,    20,    21,    33,   216,   217,   140,   287,    22,
      23,   122,    24,   293,   212,   282,   213,   214,   141,   294,
     228,   136,   220,   109,   110,   111,   112,    43,   204,   113,
     114,   115,   116,   241,   237,   336,   137,   117,   118,   344,
     119,   341,   120,   121,    25,    26,    27,    28,    29
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     125,   126,    31,    46,   231,   135,   146,    48,   234,   211,
     219,   307,   138,    30,    50,   235,    53,    18,    37,   207,
     107,   179,   139,   142,   227,   144,   145,   125,   126,   297,
     157,   218,   371,   -61,   152,    42,    39,    40,    44,   161,
     159,   223,     2,   314,    45,   125,   359,   200,   -61,   197,
      55,   360,   131,    58,     3,    59,   388,   273,    60,    61,
     108,    62,   275,    63,   198,    18,    64,   133,   323,   187,
     188,     1,    54,   276,     1,   124,    67,    68,    69,   225,
      70,   297,    41,    71,   135,     3,   301,     1,   139,     2,
     203,   150,   138,   221,   279,   222,   366,   151,   139,    32,
     189,     3,   190,   236,   374,   200,   376,   240,   131,   138,
     274,   253,   254,   255,   249,   248,   283,   310,   218,   139,
     134,   363,   312,     1,    41,   224,   284,   311,    84,   252,
     108,   225,   313,   183,   184,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   272,   226,   269,   270,   271,   180,   181,   182,   296,
     300,     1,   338,   224,   292,   276,   335,   324,   191,   225,
     164,   225,   289,    47,   192,   139,   165,     3,   290,   166,
     125,   126,   224,   298,   125,   330,   167,   168,   225,   299,
     169,   236,   304,   355,   260,   261,   262,   263,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    38,
     277,    16,   367,   170,   185,   186,   199,   200,   288,   316,
     375,  -205,   278,    49,   125,  -103,   125,   239,   200,   256,
     257,   264,   265,   332,   258,   259,   226,    51,    56,   387,
      52,   135,   389,    57,   129,   132,   171,   172,   -58,   173,
     174,   175,   176,   177,   125,   126,   148,    46,   147,   149,
     153,   154,   337,   155,   345,   158,   162,   163,   322,   193,
     195,   194,   -57,   201,   196,   202,    31,    54,   230,   215,
     232,   229,   242,   325,    58,   233,    59,   244,   278,    60,
      61,   352,    62,   354,    63,   238,   356,    64,   133,   245,
     250,   236,   251,   365,   280,   291,   124,    67,    68,    69,
     364,    70,   281,   200,    71,   305,   302,   303,   306,   373,
     308,   347,   309,   320,   319,   326,   321,   329,   125,   380,
      58,   327,    59,   333,   383,    60,    61,   334,    62,   386,
      63,   328,   339,    64,    41,   202,   340,   343,   342,   348,
      65,   134,    66,    67,    68,    69,   349,    70,   350,    84,
      71,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    38,   351,    16,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    38,   353,    16,   357,
     358,    72,    73,    74,    75,    76,    77,   361,    78,    79,
     362,    80,    81,    82,    83,    84,    85,    86,    58,   285,
      59,   -64,   368,    60,    61,   369,    62,   370,    63,   372,
     377,    64,    41,   379,   381,   382,   384,   385,    65,   315,
      66,    67,    68,    69,   266,    70,   267,   317,    71,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      38,   130,   318,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    38,   286,    16,   268,   205,    72,
      73,    74,    75,    76,    77,   378,    78,    79,   243,    80,
      81,    82,    83,    84,    85,    86,    58,   128,    59,     0,
       0,    60,    61,     0,    62,     0,    63,     0,     0,    64,
      41,     0,     0,     0,     0,     0,    65,     0,    66,    67,
      68,    69,     0,    70,     0,    58,    71,    59,     0,     0,
      60,    61,     0,    62,     0,    63,     0,     0,    64,     0,
       0,     0,   123,     0,     0,     0,     0,   124,    67,    68,
      69,     0,    70,     0,     0,    71,     0,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,    80,    81,    82,
      83,    84,    85,    86,    58,     0,    59,     0,     0,    60,
      61,     0,    62,     0,    63,     0,     0,    64,     0,     0,
       0,     0,     0,     0,     0,     0,   124,    67,    68,    69,
      84,    70,     0,     0,    71,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    38,     0,    16,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      38,    58,     0,    59,     0,     0,    60,    61,     0,    62,
       0,    63,     0,     0,    64,     0,     0,     0,     0,    84,
       0,   156,     0,   124,    67,    68,    69,    58,    70,    59,
       0,    71,    60,    61,     0,    62,     0,    63,     0,     0,
      64,     0,     0,     0,     0,     0,     0,    65,     0,   124,
      67,    68,    69,     0,    70,     0,    58,    71,    59,     0,
       0,    60,    61,     0,    62,     0,    63,   246,     0,    64,
       0,     0,     0,     0,     0,     0,    84,     0,   124,    67,
      68,    69,    58,    70,    59,     0,    71,    60,    61,     0,
      62,     0,    63,     0,     0,    64,     0,     0,     0,   295,
       0,     0,    84,     0,   124,    67,    68,    69,     0,    70,
       0,    58,    71,    59,     0,     0,    60,    61,     0,    62,
       0,    63,     0,     0,    64,     0,     0,     0,   331,     0,
       0,    84,     0,   124,    67,    68,    69,    58,    70,    59,
       0,    71,    60,    61,     0,    62,     0,   143,     0,     0,
      64,     0,     0,     0,     0,     0,     0,    84,     0,   124,
      67,    68,    69,     0,    70,     0,    58,    71,    59,     0,
       0,    60,    61,     0,    62,     0,    63,     0,     0,    64,
       0,     0,     0,     0,     0,     0,    84,     0,   124,    67,
      68,    69,    58,    70,    59,     0,    71,    60,    61,     0,
      62,     0,   160,     0,     0,    64,     0,     0,     0,     0,
       0,     0,    84,     0,   124,    67,    68,    69,     1,    70,
     276,   292,    71,     0,     0,     0,   225,     0,     0,     0,
       0,     0,     3,     1,     0,     2,     0,     0,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    38,    84,    16,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,   208,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   209,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    38,     0,    16
};

static const yytype_int16 yycheck[] =
{
      45,    45,     2,    24,   148,    54,    72,    26,   152,   122,
     133,   242,    63,     1,    33,   153,    35,     0,    18,   114,
      43,    90,    63,    66,   140,    70,    71,    72,    72,   226,
      81,   129,   360,    23,    77,    22,    19,    20,    15,    84,
      83,   139,    15,    22,    21,    90,    21,    26,    38,    23,
      37,    26,    52,     5,    27,     7,   384,   201,    10,    11,
      43,    13,   206,    15,    38,    48,    18,    19,    20,     3,
       4,    13,     9,    15,    13,    27,    28,    29,    30,    21,
      32,   278,    19,    35,   133,    27,   230,    13,   129,    15,
     113,    21,   143,   134,   210,    16,   355,    27,   139,    27,
      34,    27,    36,   154,   363,    26,   365,   158,   108,   160,
     205,   180,   181,   182,   165,   164,    16,    16,   216,   160,
      72,   352,    16,    13,    19,    15,    26,    26,    80,   178,
     113,    21,    26,    10,    11,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   200,   140,   196,   197,   198,    12,    13,    14,   225,
     229,    13,   306,    15,    16,    15,   304,   290,    33,    21,
      15,    21,    20,     0,    39,   216,    21,    27,    26,    24,
     225,   225,    15,    15,   229,   298,    31,    32,    21,    21,
      35,   242,   235,   337,   187,   188,   189,   190,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
     210,    63,   356,     9,    40,    41,    25,    26,   218,   270,
     364,     0,   210,    16,   269,    19,   271,    25,    26,   183,
     184,   191,   192,   299,   185,   186,   224,    25,    27,   383,
      26,   290,   386,    20,    19,    25,    42,    43,    17,    45,
      46,    47,    48,    49,   299,   299,    17,   278,    25,    25,
      15,    15,   305,    27,   313,    15,    15,    15,   287,     7,
       6,     8,    37,    17,    37,    20,   276,     9,    17,    22,
      22,    16,    15,    29,     5,    25,     7,    28,   276,    10,
      11,   334,    13,   336,    15,    25,   339,    18,    19,    28,
      27,   352,    27,   354,    16,    21,    27,    28,    29,    30,
     353,    32,    26,    26,    35,    16,    27,    79,    16,   362,
      16,   321,    26,    25,    27,    16,    26,    16,   373,   373,
       5,    16,     7,    25,   377,    10,    11,    15,    13,   382,
      15,    22,    16,    18,    19,    20,     7,    27,    25,    25,
      25,    72,    27,    28,    29,    30,    22,    32,    16,    80,
      35,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    22,    63,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    16,    63,    27,
      16,    66,    67,    68,    69,    70,    71,    16,    73,    74,
      17,    76,    77,    78,    79,    80,    81,    82,     5,    20,
       7,    75,    26,    10,    11,    25,    13,    29,    15,    25,
      75,    18,    19,    22,    16,    16,    26,    25,    25,   269,
      27,    28,    29,    30,   193,    32,   194,   271,    35,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    52,   282,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,   216,    63,   195,   113,    66,
      67,    68,    69,    70,    71,   368,    73,    74,   160,    76,
      77,    78,    79,    80,    81,    82,     5,    48,     7,    -1,
      -1,    10,    11,    -1,    13,    -1,    15,    -1,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    -1,    32,    -1,     5,    35,     7,    -1,    -1,
      10,    11,    -1,    13,    -1,    15,    -1,    -1,    18,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    32,    -1,    -1,    35,    -1,    66,    67,    68,
      69,    70,    71,    -1,    73,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,     5,    -1,     7,    -1,    -1,    10,
      11,    -1,    13,    -1,    15,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      80,    32,    -1,    -1,    35,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     5,    -1,     7,    -1,    -1,    10,    11,    -1,    13,
      -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    80,
      -1,    25,    -1,    27,    28,    29,    30,     5,    32,     7,
      -1,    35,    10,    11,    -1,    13,    -1,    15,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    -1,    32,    -1,     5,    35,     7,    -1,
      -1,    10,    11,    -1,    13,    -1,    15,    16,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    27,    28,
      29,    30,     5,    32,     7,    -1,    35,    10,    11,    -1,
      13,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    22,
      -1,    -1,    80,    -1,    27,    28,    29,    30,    -1,    32,
      -1,     5,    35,     7,    -1,    -1,    10,    11,    -1,    13,
      -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,
      -1,    80,    -1,    27,    28,    29,    30,     5,    32,     7,
      -1,    35,    10,    11,    -1,    13,    -1,    15,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    27,
      28,    29,    30,    -1,    32,    -1,     5,    35,     7,    -1,
      -1,    10,    11,    -1,    13,    -1,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    27,    28,
      29,    30,     5,    32,     7,    -1,    35,    10,    11,    -1,
      13,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    27,    28,    29,    30,    13,    32,
      15,    16,    35,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    27,    13,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    80,    63,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    16,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    15,    27,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    63,   109,   111,   114,
     115,   116,   122,   123,   125,   157,   158,   159,   160,   161,
     125,   122,    27,   117,   110,   112,   113,   122,    61,   111,
     111,    19,   139,   140,    15,    21,   123,     0,   110,    16,
     110,    25,    26,   110,     9,   139,    27,    20,     5,     7,
      10,    11,    13,    15,    18,    25,    27,    28,    29,    30,
      32,    35,    66,    67,    68,    69,    70,    71,    73,    74,
      76,    77,    78,    79,    80,    81,    82,    84,    85,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   101,   102,   103,   105,   107,   109,   111,   136,
     137,   138,   139,   142,   143,   144,   145,   150,   151,   153,
     155,   156,   124,    22,    27,    87,   103,   108,   159,    19,
     113,   122,    25,    19,    72,   105,   134,   149,   107,   115,
     120,   131,   100,    15,    87,    87,   108,    25,    17,    25,
      21,    27,   100,    15,    15,    27,    25,   107,    15,   100,
      15,    87,    15,    15,    15,    21,    24,    31,    32,    35,
       9,    42,    43,    45,    46,    47,    48,    49,   106,    89,
      12,    13,    14,    10,    11,    40,    41,     3,     4,    34,
      36,    33,    39,     7,     8,     6,    37,    23,    38,    25,
      26,    17,    20,   109,   141,   143,   100,   141,    16,    27,
     111,   126,   127,   129,   130,    22,   118,   119,   120,   134,
     135,   115,    16,   120,    15,    21,   125,   132,   133,    16,
      17,   136,    22,    25,   136,   144,   107,   147,    25,    25,
     107,   146,    15,   131,    28,    28,    16,    86,   105,   107,
      27,    27,   105,    89,    89,    89,    90,    90,    91,    91,
      92,    92,    92,    92,    93,    93,    94,    95,    96,   100,
     100,   100,   105,   136,   141,   136,    15,   122,   125,   132,
      16,    26,   128,    16,    26,    20,   119,   121,   122,    20,
      26,    21,    16,   126,   132,    22,   108,   133,    15,    21,
      89,   136,    27,    79,   100,    16,    16,   147,    16,    26,
      16,    26,    16,    26,    22,    97,   107,    98,   129,    27,
      25,    26,   110,    20,   134,    29,    16,    16,    22,    16,
     126,    22,   108,    25,    15,   144,   148,   100,   136,    16,
       7,   154,    25,    27,   152,   105,   104,   122,    25,    22,
      16,    22,   100,    16,   100,   136,   100,    27,    16,    21,
      26,    16,    17,   147,   100,   107,   104,   136,    26,    25,
      29,   152,    25,   100,   104,   136,   104,    75,   154,    22,
     103,    16,    16,   100,    26,    25,   100,   136,   152,   136
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    83,    84,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85,    85,    85,    86,    86,    87,    87,    87,
      87,    87,    87,    88,    88,    88,    88,    88,    88,    89,
      89,    90,    90,    90,    90,    91,    91,    91,    92,    92,
      92,    93,    93,    93,    93,    93,    94,    94,    94,    95,
      95,    96,    96,    97,    97,    98,    98,    99,   100,   101,
     101,   102,   103,   103,   104,   105,   105,   106,   106,   106,
     106,   106,   106,   106,   106,   107,   107,   108,   109,   109,
     110,   111,   111,   111,   111,   112,   112,   113,   113,   114,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   116,   117,   118,   118,   119,   120,   120,   121,
     121,   122,   122,   123,   123,   123,   123,   123,   123,   123,
     124,   125,   125,   126,   127,   127,   128,   129,   129,   129,
     130,   130,   131,   131,   132,   132,   132,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   134,   134,   134,   134,
     135,   135,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   137,   138,   138,   138,   139,   139,   139,   139,   140,
     141,   142,   142,   143,   143,   144,   144,   145,   145,   145,
     146,   147,   148,   149,   149,   150,   150,   151,   151,   152,
     152,   152,   152,   153,   154,   154,   155,   155,   155,   155,
     156,   156,   156,   156,   156,   157,   158,   158,   159,   159,
     159,   160,   161,   161
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     4,     1,     0,     1,
       4,     1,     1,     8,     0,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     4,
       0,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     2,     4,     2,     1,     1,
       3,     2,     1,     1,     3,     4,     3,     5,     5,     4,
       0,     1,     2,     1,     1,     3,     1,     2,     2,     1,
       1,     3,     1,     2,     1,     1,     2,     3,     2,     3,
       3,     4,     2,     3,     3,     4,     1,     1,     3,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     3,     3,     2,     3,     3,     4,     1,
       1,     1,     2,     1,     3,     1,     2,     6,    10,     5,
       1,     1,     1,     5,     2,     3,     5,     5,     7,     1,
       3,     4,     6,     7,     2,     4,     7,    10,     8,    11,
       3,     2,     2,     2,     3,     1,     1,     3,     1,     1,
       1,     7,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 68 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																								tEntry* entry = find_entry(scope_st,(yyvsp[0].Str));
																								if(!entry){
																												(yyval.Node)->type = "incorrect";
																												yyerror(string((yyvsp[0].Str)) + " is not declared");
																										}
																								else{	
																									if(entry->type == ""){
																										(yyval.Node)->type = "incorrect";
																										yyerror(string((yyvsp[0].Str)) + " is not declared in this scope.");
																									}
																									else{
																										//entry with defined type
																										(yyval.Node)->size = entry->size;
																										(yyval.Node)->init = entry->init;
																										(yyval.Node)->type = entry->type;
																										(yyval.Node)->key = (yyval.Node)->s;
																										(yyval.Node)->isidentifier = 1;
																										// opd place
																										(yyval.Node)->place = create_opd((yyval.Node)->key,entry);	
																									}
																								}
																							}
#line 1933 "parser.tab.c"
    break;

  case 3:
#line 91 "parser.y"
                                                                                                                                                                                {
																								(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->init = 1;
																								float num = stof((yyval.Node)->s);
																								int a = num;
																								if(a == num){
																									// int
																									(yyval.Node)->val_type = 1;
																									(yyval.Node)->num = num;
																									(yyval.Node)->type = "int";
																									(yyval.Node)->place = opd((yyvsp[0].Str));
																								}
																								else {
																									// float
																									(yyval.Node)->val_type = 3;
																									(yyval.Node)->num = num;
																									(yyval.Node)->type = "float";
																									(yyval.Node)->place = opd((yyvsp[0].Str));
																								}
																							}
#line 1959 "parser.tab.c"
    break;

  case 4:
#line 112 "parser.y"
                                                                                                                                                                        {
																								(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->init = 1;
																								(yyval.Node)->type = "char";
																																															
																								(yyval.Node)->place = opd((yyvsp[0].Str));
																							}
#line 1972 "parser.tab.c"
    break;

  case 5:
#line 121 "parser.y"
                                                                                                                                                                        {	// cout << "string called"<<endl;
																								(yyval.Node)=new_leaf_node((yyvsp[0].Str));

																								// for dot file "\"name\""
																								string a = "\\";
																								string b = (yyval.Node)->s;
																								b.pop_back();
																								string c = "\\\"";
																								// update s
																								(yyval.Node)->s = a + b + c;

																								(yyval.Node)->init=1;	
																								(yyval.Node)->type = "string";
																								(yyval.Node)->key = (yyval.Node)->s;
																								
																								(yyval.Node)->place = opd((yyvsp[0].Str));
																							}
#line 1994 "parser.tab.c"
    break;

  case 6:
#line 138 "parser.y"
                                                                                                                                        {
																								(yyval.Node)=(yyvsp[-1].Node);
																							}
#line 2002 "parser.tab.c"
    break;

  case 7:
#line 144 "parser.y"
                                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node); }
#line 2008 "parser.tab.c"
    break;

  case 8:
#line 145 "parser.y"
                                                                                                                                        {	
																							// printf("postfix called\n");
																							(yyval.Node) = new_2_node("[]", (yyvsp[-3].Node), (yyvsp[-1].Node));
																							// array
                                                                                            (yyval.Node)->flag = 1;
																				
																							if((yyvsp[-1].Node)->s.substr(0,1) == "-"){
																								yyerror( "Index of array " + (yyvsp[-3].Node)->key + " cannot be negative.");

																							}
																							else{ 
																								tEntry* entry = find_entry(scope_st, (yyvsp[-3].Node)->key);
																								if(entry){
																									(yyval.Node)->type = entry->type;
																								}
																								else{
																									(yyval.Node)->type = "incorrect";
																									yyerror((yyvsp[-3].Node)->key + " is not declared");
																								}

																								int curr_idx = stoi((yyvsp[-1].Node)->key);
																								int arr_length = entry->size/getSize(entry->type);

																								if(curr_idx > arr_length){
																									yyerror("Array " + (yyvsp[-3].Node)->key + " index is out of bound.");
																								}
																								else{
																									(yyval.Node)->key = (yyvsp[-3].Node)->key;
																									(yyval.Node)->val_type = (yyvsp[-3].Node)->val_type;
																									if((yyvsp[-3].Node)->init == 1 && (yyvsp[-1].Node)->init == 1)
																										(yyval.Node)->init = 1;
	
																									string var_0 = create_tmp_var( (yyvsp[-1].Node)->type , offset, curr_scope);
																									align_offset( getSize((yyvsp[-1].Node)->type) );
																									emit((yyvsp[-1].Node)->place, "*", opd(to_string(getSize((yyval.Node)->type))), var_0, instruction_num);
	
																									string var_1 = create_tmp_var((yyval.Node)->type + " *", offset, curr_scope);
																									align_offset( getSize((yyval.Node)->type + " *") );
																									emit((yyvsp[-3].Node)->place , "+", var_0, var_1, instruction_num );
																									(yyval.Node)->place = var_1;
																								}
																							}
																						}
#line 2056 "parser.tab.c"
    break;

  case 9:
#line 189 "parser.y"
                                                                                                                                                        {	
																								(yyval.Node) = new_1_node("()", (yyvsp[-2].Node));

																							 	tEntry* entry=find_entry(scope_st,(yyvsp[-2].Node)->key);
																								if(entry){
																									(yyval.Node)->type = entry->type;
																									(yyval.Node)->key = (yyvsp[-2].Node)->key;
																									(yyval.Node)->val_type = (yyvsp[-2].Node)->val_type;
																									(yyval.Node)->num = (yyvsp[-2].Node)->num;
																									(yyval.Node)->init = (yyvsp[-2].Node)->init;

																									if(entry->type == ""){
																										yyerror("Incorrect function call.");
																									}

																									string funcname = (yyval.Node)->type+" "+(yyvsp[-2].Node)->key;
																									if(FUNC_PARAM.find(funcname) == FUNC_PARAM.end()){
																										yyerror("The Function " + (yyvsp[-2].Node)->key + " is not yet declared");
																									}
																									else{
																										emit(call_opd, "", (yyvsp[-2].Node)->place, empty_opd,-1);
																									}
																									// no function arguments
																									func_args="";
																								}
																								else{
																									(yyval.Node)->type = "incorrect";
																									yyerror((yyvsp[-2].Node)->key +  " is not yet declared");
																								}
																							}
#line 2091 "parser.tab.c"
    break;

  case 10:
#line 219 "parser.y"
                                                                                                                                {	
																								(yyval.Node) = new_2_node("()", (yyvsp[-3].Node),(yyvsp[-1].Node));
																							 	tEntry* entry = find_entry(scope_st,(yyvsp[-3].Node)->key);

																								if(entry){
																									if((yyvsp[-3].Node)->init == 1 && (yyvsp[-1].Node)->init == 1)
																										(yyval.Node)->init = (yyvsp[-3].Node)->init;
																									(yyval.Node)->type = entry->type;
																									(yyval.Node)->key = (yyvsp[-3].Node)->key;
																									(yyval.Node)->val_type = (yyvsp[-3].Node)->val_type;
																									(yyval.Node)->num = (yyvsp[-3].Node)->num;
																									(yyval.Node)->place = opd((yyvsp[-3].Node)->key,find_entry(scope_st,(yyvsp[-3].Node)->key));

																									string funcname = (yyval.Node)->type+" "+(yyvsp[-3].Node)->key;

																									if(FUNC_PARAM.find(funcname) == FUNC_PARAM.end()){
																										yyerror("Function " + (yyvsp[-3].Node)->key + " is not declared");
																									}
																									else {
																										string param = FUNC_PARAM[funcname];
																										// cout << "param: " <<param << " " << endl;
																										const char delim = ',';
																										vector<string> param1;
																										size_t start;
																										size_t end = 0;
																										while ((start = param.find_first_not_of(delim, end)) != string::npos){
																										    end = param.find(delim, start);
																										    param1.push_back(param.substr(start, end - start));
																										}
																										
																										vector<string> arg1;
																										// cout << "args: " << func_args << " " << endl;
																										end = 0;
																										while ((start = func_args.find_first_not_of(delim, end)) != string::npos){
																										    end = func_args.find(delim, start);
																										    arg1.push_back(func_args.substr(start, end - start));
																										}																							

																										if(arg1.size() == param1.size()){
                                                            								                for(int i = 0 ; i < param1.size() ;i++){
																											    if( param1[i].substr( 0, arg1[i].size()) != arg1[i]){
																											       yyerror("Invalid arguments");
																												}										
																												opd parameters = create_opd( "__argument"+to_string(i) + "__", param_place[i].entry);
																												emit( empty_opd , "" , param_place[i] , parameters , -1);
																											}
																											// call function
																											emit(call_opd , "" , (yyvsp[-3].Node)->place , empty_opd , -1);
																											param_place.clear();
																										}
																										else 
																											yyerror("Invalid number of arguments");
																									}
																								}
																								else{
																									(yyval.Node)->type = "incorrect";
																									yyerror((yyvsp[-3].Node)->key + " is not yet declared");
																								}
																							}
#line 2155 "parser.tab.c"
    break;

  case 11:
#line 278 "parser.y"
                                                                                                                                                        {	

																								(yyval.Node) = new_2_node("." , (yyvsp[-2].Node) , new_leaf_node((yyvsp[0].Str)));
																								tEntry* entry = find_entry(scope_st,(yyvsp[-2].Node)->key);
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;

																								// struct
																								(yyval.Node)->flag=1;
																								if(entry){
																									tEntry* struct_entry= find_struct_entry((yyvsp[-2].Node)->type , (yyvsp[0].Str));
																									if(struct_entry){
																										if(struct_entry->key != (yyvsp[0].Str))
																											yyerror("Type Mismatch");
																										(yyval.Node)->type = struct_entry->type;
																									}
																									else{
																										     yyerror("Invalid attribute " + string((yyvsp[0].Str)) + " for " + (yyvsp[-2].Node)->key);
																											 (yyval.Node)->type = "error_type";
																									}
																									
																									// var_0 = struct name + offset
																									string var_0 = create_tmp_var((yyval.Node)->type + " *",offset,curr_scope);
																									align_offset( getSize((yyval.Node)->type + " *") );
																									emit( (yyvsp[-2].Node)->place ,"+" , opd(to_string(struct_entry->offset)) , var_0 , instruction_num);
																									
																									(yyval.Node)->place = var_0;

																								}	

																								else{
																									(yyval.Node)->type = "incorrect";
																									yyerror((yyvsp[-2].Node)->key + " is not yet declared.");
																								}
																							}
#line 2194 "parser.tab.c"
    break;

  case 12:
#line 313 "parser.y"
                                                                                                                                        {
																								(yyval.Node) = new_2_node("->", (yyvsp[-2].Node), new_leaf_node((yyvsp[0].Str)));
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																							}
#line 2203 "parser.tab.c"
    break;

  case 13:
#line 318 "parser.y"
                                                                                                                                                        {
																								// cout << "increment" << $1->init << endl;
    												    										(yyval.Node) = new_1_node("++", (yyvsp[-1].Node));
																								(yyval.Node)->key  = (yyvsp[-1].Node)->key;
																								(yyval.Node)->init = (yyvsp[-1].Node)->init;
																								if((yyval.Node)->init != 1){
																									yyerror("First initialise the variable " + (yyvsp[-1].Node)->key);
																								}
																								(yyval.Node)->type = (yyvsp[-1].Node)->type;
																								(yyval.Node)->val_type = (yyvsp[-1].Node)->val_type;
																								(yyval.Node)->num = (yyvsp[-1].Node)->num + 1;

																								string typecheck = postfix_expr( (yyvsp[-1].Node)->type );
																								// type is not integer
																								if(typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																								    yyerror((yyvsp[-1].Node)->key + " doesn't have suitable type for increment operation");
																								}
																								// integer
																								else{
																								   	(yyval.Node)->type = typecheck;

																								   	string var_0 = create_tmp_var( (yyval.Node)->type, offset, curr_scope);
																								   	align_offset( getSize((yyval.Node)->type) );

																								   	(yyval.Node)->place = create_opd(var_0, find_entry( scope_st, var_0));
																									// var_0 = variable
																								   	emit(empty_opd , "" , (yyvsp[-1].Node)->place , (yyval.Node)->place , instruction_num);
																									// variable = var_0 + 1
																									emit((yyval.Node)->place, "+" , one_opd , (yyvsp[-1].Node)->place , instruction_num);
																								}
																							}
#line 2240 "parser.tab.c"
    break;

  case 14:
#line 350 "parser.y"
                                                                                                                                                        {
																								(yyval.Node) = new_1_node("--", (yyvsp[-1].Node));
																								(yyval.Node)->key = (yyvsp[-1].Node)->key;
																								(yyval.Node)->val_type = (yyvsp[-1].Node)->val_type;
																								(yyval.Node)->num = (yyvsp[-1].Node)->num-1;
																								(yyval.Node)->init = (yyvsp[-1].Node)->init;
																								(yyval.Node)->type = (yyvsp[-1].Node)->type;

																								string typecheck = postfix_expr((yyvsp[-1].Node) -> type);
																								// type is not integer
																								if(typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																								    yyerror((yyvsp[-1].Node)->key + " doesn't have suitable type for decrement operation");
																								}
																							
																								else{
																								   	(yyval.Node)->type = typecheck;

																								   	string var_0 = create_tmp_var( (yyval.Node)->type, offset , curr_scope);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = create_opd( var_0, find_entry(scope_st , var_0));
																									// var_0 = variable
																									emit(empty_opd ,"" , (yyvsp[-1].Node)->place , (yyval.Node)->place, instruction_num);
																									// variable = var_0 + 1
																									emit((yyval.Node)->place , "-", one_opd, (yyvsp[-1].Node)->place, instruction_num);
																								}
																							}
#line 2273 "parser.tab.c"
    break;

  case 15:
#line 381 "parser.y"
                                                                                                                                                                {	
																								(yyval.Node)=(yyvsp[0].Node);
																							 	// func_args
																								(yyval.Node)->init = (yyvsp[0].Node)->init;
																								(yyval.Node)->key = (yyvsp[0].Node)->key;
																								(yyval.Node)->num = (yyvsp[0].Node)->num;
																								(yyval.Node)->val_type = (yyvsp[0].Node)->val_type;
																								(yyval.Node)->init = (yyvsp[0].Node)->init;
																								func_args = (yyvsp[0].Node)->type;

																								// lists
																								(yyval.Node)->nextlist = (yyvsp[0].Node)->nextlist;
																								(yyval.Node)->continuelist = (yyvsp[0].Node)->continuelist;
																								(yyval.Node)->breaklist = (yyvsp[0].Node)->breaklist;
																								(yyval.Node)->truelist = (yyvsp[0].Node)->truelist;
																								(yyval.Node)->falselist = (yyvsp[0].Node)->falselist;

																								(yyval.Node)->place = (yyvsp[0].Node)->place;
																								param_place.push_back((yyvsp[0].Node)->place);

																							}
#line 2299 "parser.tab.c"
    break;

  case 16:
#line 402 "parser.y"
                                                                                                                                {
																								(yyval.Node)=new_2_node(",", (yyvsp[-2].Node) , (yyvsp[0].Node));

																								func_args = func_args + " ," + (yyvsp[0].Node)->type;
																							 	(yyval.Node)->type = "";
																							 	if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1)
																								 	(yyval.Node)->init = 1;
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								(yyval.Node)->num = (yyvsp[-2].Node)->num + 1;
																								(yyval.Node)->val_type = (yyvsp[-2].Node)->val_type;
																								
																								param_place.push_back((yyvsp[0].Node)->place);

																							}
#line 2318 "parser.tab.c"
    break;

  case 17:
#line 419 "parser.y"
                                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node); }
#line 2324 "parser.tab.c"
    break;

  case 18:
#line 420 "parser.y"
                                                                                                                                                        {   
																								(yyval.Node) = new_1_node("++", (yyvsp[0].Node));
																								tEntry* entry = find_entry( scope_st , (yyvsp[0].Node)->key );

																								if(entry){
																									(yyval.Node)->num = (yyvsp[0].Node)->num+1;

																									if((yyvsp[0].Node)->init == 1){
																										(yyval.Node)->init = 1;
																									}
																								    else{
																										yyerror("Variable " + (yyvsp[0].Node)->key + " is not initialised.");
																									}
																									
																									if((yyvsp[0].Node)->init){
																										(yyval.Node)->type = entry->type;
																										(yyval.Node)->key = (yyvsp[0].Node)->key;
																										(yyval.Node)->val_type = (yyvsp[0].Node)->val_type;
																										(yyval.Node)->num = (yyvsp[0].Node)->num+1;

											 															string typecheck = postfix_expr((yyvsp[0].Node)->type);
																										if(typecheck == ""){
																												 (yyval.Node)->type = "incorrect";
																												 yyerror((yyvsp[0].Node)->key + " doesnot have suitable type for increment operation");
											 															}
																										else{
																											(yyval.Node)->type = typecheck;

																											string var_0 = create_tmp_var((yyval.Node)->type , offset ,  curr_scope);
																											align_offset( getSize((yyval.Node)->type) );

																											(yyval.Node)->place = create_opd(var_0 , find_entry(scope_st, var_0));
																											// var_0 = variable + 1	
																											emit((yyvsp[0].Node)->place , "+" , one_opd,  (yyval.Node)->place, instruction_num);
																											// variable = var_0
																											emit(empty_opd , "", (yyval.Node)->place, (yyvsp[0].Node)->place, instruction_num);
											 															}
																									}
																									
																								}
																							}
#line 2370 "parser.tab.c"
    break;

  case 19:
#line 462 "parser.y"
                                                                                                                                                        {	(yyval.Node) = new_1_node("--", (yyvsp[0].Node));
																								tEntry* entry=find_entry(scope_st,(yyvsp[0].Node)->key);

																								if(entry){
																									(yyval.Node)->num = (yyvsp[0].Node)->num-1;

																									if((yyvsp[0].Node)->init == 1){
																										(yyval.Node)->init = 1;
																									}
																									else
																										yyerror("Variable " + (yyvsp[0].Node)->key + " is not initialised.");

																									if((yyvsp[0].Node)->init){
																										(yyval.Node)->type = (yyvsp[0].Node)->type;
																										(yyval.Node)->key = (yyvsp[0].Node)->key;
																										(yyval.Node)->val_type = (yyvsp[0].Node)->val_type;
																										(yyval.Node)->num = (yyvsp[0].Node)->num-1;

																										string typecheck = postfix_expr((yyvsp[0].Node) -> type);
																										if(typecheck == ""){
																											(yyval.Node)->type = "incorrect";
																											yyerror((yyvsp[0].Node)->key + " doesnot have suitable type for decrement operation");
																										}
																										else{
																											(yyval.Node)->type = typecheck;

																											string var_0 = create_tmp_var( (yyval.Node)->type , offset, curr_scope);
																											align_offset( getSize((yyval.Node)->type) );

																											(yyval.Node)->place = create_opd(var_0 ,find_entry(scope_st, var_0));	
																											// var_0 = variable + 1
																											emit((yyvsp[0].Node)->place, "-" , one_opd , (yyval.Node)->place , instruction_num);
																											// variable = var_0
																											emit(empty_opd, "" , (yyval.Node)->place , (yyvsp[0].Node)->place , instruction_num);  
																										}	
																									}
																								}
																							}
#line 2413 "parser.tab.c"
    break;

  case 20:
#line 501 "parser.y"
                                                                                                                                                {
																								make_children((yyvsp[-1].Node), (yyvsp[0].Node), NULL, NULL); 
																								(yyval.Node) = (yyvsp[-1].Node);
																								tEntry* entry=find_entry(scope_st , (yyvsp[0].Node)->s);

																								if(!entry){
																									yyerror((yyvsp[0].Node)->key+" is not declared");
																								}
																								else{
																									if((yyvsp[0].Node)->init == 1){
																										(yyval.Node)->init = 1;
																									}

																									(yyval.Node)->type = (yyvsp[0].Node)->type;
																									(yyval.Node)->key = (yyvsp[0].Node)->key;
																									(yyval.Node)->num = (yyvsp[0].Node)->num;
																									(yyval.Node)->val_type = (yyvsp[0].Node)->val_type;

											 														string typecheck = unary_expr((yyvsp[-1].Node)->s, (yyvsp[0].Node)->type, 1);

																									if(typecheck == ""){
												 														yyerror("Not consistent with the operator " + (yyvsp[-1].Node)->key);
																									}
	
																									if((yyvsp[-1].Node)->s=="*"){
																										if((yyvsp[0].Node)->type[(yyvsp[0].Node)->type.size()-1] != '*'){
																											yyerror((yyvsp[0].Node)->key + " is not a pointer type");
																										}
																										
																										// * (int *) = int
																										(yyval.Node)->type = (yyvsp[0].Node)->type.substr(0,(yyvsp[0].Node)->type.size()-2);
																									}

																									else if((yyvsp[-1].Node)->s == "&"){
																										if( (yyvsp[0].Node)->type[(yyvsp[0].Node)->type.size()-1] == '*'){
																											yyerror((yyvsp[0].Node)->key + " is not a pointer type");
																										}
																										
																										(yyval.Node)->type = (yyvsp[0].Node)->type + " *";
																									}

																									if((yyvsp[-1].Node)->s == "*"){
																										(yyval.Node)->flag = 1;
																										(yyval.Node)->place = (yyvsp[0].Node)->place;
																									}

																									else {
																										string var_0 = create_tmp_var((yyval.Node)->type , offset,  curr_scope);
																										align_offset( getSize((yyval.Node)->type) );

																										(yyval.Node)->place = create_opd( var_0 , find_entry(scope_st, var_0));
																										emit(empty_opd , (yyvsp[-1].Node)->s , (yyvsp[0].Node)->place , (yyval.Node)->place , instruction_num);
																									}	
																								}
																							}
#line 2473 "parser.tab.c"
    break;

  case 21:
#line 557 "parser.y"
                                                                                                                                                                {	
																								(yyval.Node) = new_1_node("SIZEOF", (yyvsp[0].Node));
																							 	(yyval.Node)->type = "int";
																							 	(yyval.Node)->init = 1;
																								(yyval.Node)->num = (yyvsp[0].Node)->num;
																							 	(yyval.Node)->key = (yyvsp[0].Node)->key;
																								(yyval.Node)->val_type = (yyvsp[0].Node)->val_type;
																								
																							}
#line 2487 "parser.tab.c"
    break;

  case 22:
#line 567 "parser.y"
                                                                                                                                                                {
																								(yyval.Node) = new_1_node( "SIZEOF" , (yyvsp[-1].Node));
																								(yyval.Node)->type = "int";
																								(yyval.Node)->init = 1;
																								(yyval.Node)->key = (yyvsp[-1].Node)->key;
																							}
#line 2498 "parser.tab.c"
    break;

  case 23:
#line 576 "parser.y"
                                                                                                                                                                                { 	(yyval.Node) = new_1_node( "&" , NULL) ;
																							 	(yyval.Node)->key = (yyval.Node)->s ; 
																								(yyval.Node)->type="&" ; 
																							}
#line 2507 "parser.tab.c"
    break;

  case 24:
#line 580 "parser.y"
                                                                                                                                                                                { 	(yyval.Node) = new_1_node( "*" , NULL) ; 
																								(yyval.Node)->key = (yyval.Node)->s ; 
																								(yyval.Node)->type="*" ; 
																							}
#line 2516 "parser.tab.c"
    break;

  case 25:
#line 584 "parser.y"
                                                                                                                                                                                { 	(yyval.Node) = new_1_node( "+" , NULL) ; 
																								(yyval.Node)->key = (yyval.Node)->s ; 
																								(yyval.Node)->type="+" ; 
																							}
#line 2525 "parser.tab.c"
    break;

  case 26:
#line 588 "parser.y"
                                                                                                                                                                                { 	(yyval.Node) = new_1_node( "-" , NULL) ; 
																								(yyval.Node)->key = (yyval.Node)->s ; 
																								(yyval.Node)->type="-" ; 
																							}
#line 2534 "parser.tab.c"
    break;

  case 27:
#line 592 "parser.y"
                                                                                                                                                                                { 	(yyval.Node) = new_1_node( "~" , NULL) ; 
																								(yyval.Node)->key = (yyval.Node)->s ; 
																								(yyval.Node)->type="~" ; 
																							}
#line 2543 "parser.tab.c"
    break;

  case 28:
#line 596 "parser.y"
                                                                                                                                                                                { 	(yyval.Node) = new_1_node( "!" , NULL) ; 
																								(yyval.Node)->key = (yyval.Node)->s ; 
																								(yyval.Node)->type="!" ; 
																							}
#line 2552 "parser.tab.c"
    break;

  case 29:
#line 603 "parser.y"
                                                                                                                                                                        {
		 																						(yyval.Node) = (yyvsp[0].Node);

																								if((yyvsp[0].Node)->flag == 1){		
																									string var_0 = create_tmp_var( (yyvsp[0].Node)->type , offset , curr_scope);
																									align_offset( getSize( (yyvsp[0].Node)->type) );

																									opd var_1 = create_opd(var_0 , find_entry(scope_st, var_0));
																									emit(empty_opd, "*", (yyvsp[0].Node)->place, var_1, instruction_num);
																									(yyval.Node)->place = var_1;
																								}

																								// reset flag
																								(yyval.Node)->flag = 0;
																							}
#line 2572 "parser.tab.c"
    break;

  case 30:
#line 618 "parser.y"
                                                                                                                                {
		 																						(yyval.Node) =  new_2_node("CAST_EXPRESSION", (yyvsp[-2].Node), (yyvsp[0].Node));
	 																							(yyval.Node)->type = (yyvsp[-2].Node)->type;

																								if((yyvsp[0].Node)->init == 1){
																									(yyval.Node)->init = 1;
																								}
																								(yyval.Node)->key=(yyvsp[0].Node)->key;
														 									}
#line 2586 "parser.tab.c"
    break;

  case 31:
#line 630 "parser.y"
                                                                                                                        {(yyval.Node) = (yyvsp[0].Node);}
#line 2592 "parser.tab.c"
    break;

  case 32:
#line 631 "parser.y"
                                                                                                                        {
																								(yyval.Node) = new_2_node("*", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) {
																									(yyval.Node)->init=1;
																								}

																								string typecheck = multiplicative_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type, '*'); 
																								// cout<< typecheck<< endl;
																								if(typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																									yyerror("Cannot apply * operator on these variables.");
																								}
																								else{
																									if(typecheck == "int"){
																										(yyval.Node)->type = "int";
																									}
																									else if(typecheck == "float"){
																										(yyval.Node)->type = "float";
																									}
																									else 
																										(yyval.Node)->type = typecheck;

																									string var_0 = create_tmp_var ( (yyval.Node)->type , offset , curr_scope);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = create_opd(var_0 , find_entry(scope_st , var_0));	
																									// var_0 = exp * exp
																									emit( (yyvsp[-2].Node)->place , "*" , (yyvsp[0].Node)->place , (yyval.Node)->place , instruction_num);
																								} 	
																							}
#line 2628 "parser.tab.c"
    break;

  case 33:
#line 663 "parser.y"
                                                                                                                        {	
																								(yyval.Node) = new_2_node("/", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) {
																									(yyval.Node)->init=1;
																								}

																								string typecheck = multiplicative_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type, '/'); 
																								if(typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																									yyerror("Cannot apply / operator on these variables");
																								}
																								else{
																									if(typecheck == "int")
																										(yyval.Node)->type = "int";
																									else if( typecheck == "float")
																										(yyval.Node)->type = "float";
																									else 
																										(yyval.Node)->type = typecheck;
																									
																									string var_0 = create_tmp_var( (yyval.Node)->type, offset, curr_scope);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = create_opd(var_0 , find_entry(scope_st , var_0));
																									// var_0 = exp / exp
																									emit((yyvsp[-2].Node)->place, "/", (yyvsp[0].Node)->place, (yyval.Node)->place, instruction_num);	
																								} 	
																							}
#line 2661 "parser.tab.c"
    break;

  case 34:
#line 695 "parser.y"
                                                                                                                        {	
																								(yyval.Node) = new_2_node("%", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1){
																									(yyval.Node)->init = 1;
																								} 

																								string typecheck = multiplicative_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type, '%'); 
																								if(typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																									yyerror("Cannot apply % operator on these variables.");
																								}
																								else{
																									if(typecheck == "int"){
																										(yyval.Node)->type = "int";
																									}
																									else 
																										(yyval.Node)->type = typecheck;

																									string var_0 = create_tmp_var( (yyval.Node)->type ,offset ,curr_scope);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = create_opd(var_0 , find_entry(scope_st , var_0));
																									// var_0 = exp % exp
																									emit((yyvsp[-2].Node)->place, "%" ,(yyvsp[0].Node)->place , (yyval.Node)->place ,instruction_num);
																								}
																							}
#line 2693 "parser.tab.c"
    break;

  case 35:
#line 725 "parser.y"
                                                                                                                        {(yyval.Node) = (yyvsp[0].Node);}
#line 2699 "parser.tab.c"
    break;

  case 36:
#line 726 "parser.y"
                                                                                                                        {	
																								(yyval.Node) = new_2_node("+", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) {
																									(yyval.Node)->init=1;
																								}
																									
																								string typecheck = additive_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type,'+');
																								if(typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																									yyerror("Cannot apply + operator on these variables.");
																								}
																								else{
																									(yyval.Node)->type = typecheck;
																									string var_0 = create_tmp_var( (yyval.Node)->type, offset, curr_scope);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = create_opd(var_0 , find_entry(scope_st, var_0));
																									// var_0 = exp + exp
																									emit((yyvsp[-2].Node)->place, "+", (yyvsp[0].Node)->place, (yyval.Node)->place, instruction_num);
																								} 
																								
																 							}
#line 2727 "parser.tab.c"
    break;

  case 37:
#line 749 "parser.y"
                                                                                                                        {
																								(yyval.Node) = new_2_node("-", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) {
																									(yyval.Node)->init=1;
																								}
																									
																								string typecheck = additive_expr((yyvsp[-2].Node)->type , (yyvsp[0].Node)->type, '-');
																								if(typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																									yyerror("Cannot apply - operator on these variables.");
																								}
																								else {
																									if( typecheck == "int")
																										(yyval.Node)->type = "int";
																									else if( typecheck == "float")
																										(yyval.Node)->type = "float";
																									else 
																										(yyval.Node)->type = typecheck;

																									string tmp=create_tmp_var((yyval.Node)->type,offset,curr_scope);
																									align_offset(getSize((yyval.Node)->type));

																									(yyval.Node)->place = create_opd(tmp,find_entry(scope_st,tmp));	
																									// var_0 = exp - exp
																									emit((yyvsp[-2].Node)->place , "-" , (yyvsp[0].Node)->place , (yyval.Node)->place , instruction_num);
																								}
																							}
#line 2760 "parser.tab.c"
    break;

  case 38:
#line 780 "parser.y"
                                                                                                                        { (yyval.Node) = (yyvsp[0].Node); }
#line 2766 "parser.tab.c"
    break;

  case 39:
#line 781 "parser.y"
                                                                                                                        {
																								(yyval.Node) = new_2_node("<<", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init ==1){
																									(yyval.Node)->init = 1;
																								}
																  								 	
																  								string typecheck = shift_expr( (yyvsp[-2].Node)->type , (yyvsp[0].Node)->type);
																  								if( typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																								 	yyerror("Cannot apply << operator on these variables.");
																 								}
																								else{
																								  	(yyval.Node)->type = (yyvsp[-2].Node)->type;
																									string var_0 = create_tmp_var((yyval.Node)->type , offset , curr_scope);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = create_opd(var_0 , find_entry(scope_st, var_0));
																									// var_0 = exp << exp
																									emit((yyvsp[-2].Node)->place,"<<", (yyvsp[0].Node)->place , (yyval.Node)->place , instruction_num);
																 								}
																								
																 							}
#line 2794 "parser.tab.c"
    break;

  case 40:
#line 804 "parser.y"
                                                                                                                                {
																								(yyval.Node) = new_2_node(">>", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																   								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init ==1){
																									(yyval.Node)->init = 1;
																								}
																   									
																  								string typecheck = shift_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type);
																  								if(typecheck == ""){
																									  (yyval.Node)->type = "incorrect";
																									  yyerror("Cannot apply >> operator on these variables.");
																  								}
																								else{
																									(yyval.Node)->type = (yyvsp[-2].Node)->type;
																									string var_0 = create_tmp_var((yyval.Node)->type ,offset, curr_scope);
																		                 			align_offset( getSize((yyval.Node)->type) );

																		                 			(yyval.Node)->place = create_opd(var_0 , find_entry(scope_st ,var_0));																												
																		                 			// var_0 = exp >> exp
																		                 			emit((yyvsp[-2].Node)->place,">>" , (yyvsp[0].Node)->place , (yyval.Node)->place , instruction_num);
																  								}
																							}
#line 2821 "parser.tab.c"
    break;

  case 41:
#line 829 "parser.y"
                                                                                                                                                                {(yyval.Node) = (yyvsp[0].Node);}
#line 2827 "parser.tab.c"
    break;

  case 42:
#line 830 "parser.y"
                                                                                                                        {
																								(yyval.Node) = new_2_node("<", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1){
																									(yyval.Node)->init=1;
																								}

																								string typecheck = relational_expr((yyvsp[-2].Node)->type , (yyvsp[0].Node)->type);
																								if(typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																									yyerror("Cannot apply < operator on these variables.");
																								}
																								else{
																									if( typecheck == "int"){
																										(yyval.Node)->type = "int";

																										string var_0 = create_tmp_var( (yyval.Node)->type,offset ,curr_scope);
																										align_offset( getSize((yyval.Node)->type) );

																										(yyval.Node)->place = create_opd(var_0 , find_entry(scope_st , var_0));																												
																										// var_0 = exp < exp
																										emit((yyvsp[-2].Node)->place,"<",(yyvsp[0].Node)->place,(yyval.Node)->place,instruction_num);	
																									}
																									else if(typecheck == "Bool"){
																										(yyval.Node)->type = "Bool";
																										yyerror("Warning : Comparison between pointer and integer");
																									}
																									else{
																										yyerror("error in comparing");
																									}
																								}
																								
																							}
#line 2865 "parser.tab.c"
    break;

  case 43:
#line 863 "parser.y"
                                                                                                                                        {	(yyval.Node) = new_2_node(">", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;	
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) 
																									(yyval.Node)->init=1;

																								string typecheck = relational_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																								if(typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																								  	yyerror("Cannot apply > operator on these variables.");
																								}
																								else{
																									if(typecheck == "int"){
																										(yyval.Node)->type = "int";

																										string var_0 = create_tmp_var((yyval.Node)->type ,offset ,curr_scope);
																										align_offset( getSize((yyval.Node)->type) );

																										(yyval.Node)->place = create_opd(var_0 ,find_entry(scope_st ,var_0));
																										// var_0 = exp > exp
																										emit((yyvsp[-2].Node)->place, ">", (yyvsp[0].Node)->place, (yyval.Node)->place, instruction_num);
																									}
																									else if(typecheck == "Bool"){
																										(yyval.Node)->type = "Bool";
																										yyerror("Warning : Comparison between pointer and integer");
																									}
																									else{
																										yyerror("error in comparing");
																									}
																								}														
																							}
#line 2900 "parser.tab.c"
    break;

  case 44:
#line 894 "parser.y"
                                                                                                                {
																								(yyval.Node) = new_2_node("<=", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;	

																								string typecheck = relational_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																								if(typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																								  	yyerror("Cannot apply <= operator on these variables.");
																								}
																								else{
																									if(typecheck == "int"){
																										(yyval.Node)->type = "int";

																										string var_0 = create_tmp_var((yyval.Node)->type, offset, curr_scope);
																										align_offset( getSize((yyval.Node)->type) );

																										(yyval.Node)->place = create_opd(var_0 , find_entry( scope_st, var_0));
																										// var_0 = exp <= exp
																										emit((yyvsp[-2].Node)->place, "<=", (yyvsp[0].Node)->place, (yyval.Node)->place, instruction_num);
																									}
																									else if(typecheck == "Bool"){
																										(yyval.Node)->type = "Bool";
																										yyerror("Warning : Comparison between pointer and integer");
																									}
																									else{
																										yyerror("error in comparing");
																									}
																								}	
																																							
																							}
#line 2937 "parser.tab.c"
    break;

  case 45:
#line 926 "parser.y"
                                                                                                                        {
																								(yyval.Node) = new_2_node(">=", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;

																								string typecheck = relational_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																								if( typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																									yyerror("Cannot apply >= operator on these variables.");
																								}
																								else{
																									if( typecheck == "int"){
																										(yyval.Node)->type = "int";

																										string var_0 = create_tmp_var((yyval.Node)->type, offset, curr_scope);
																										align_offset( getSize((yyval.Node)->type) );

																										(yyval.Node)->place = create_opd(var_0 ,find_entry(scope_st, var_0));																												
																										// var_0 = exp >= exp
																										emit((yyvsp[-2].Node)->place , ">=" ,(yyvsp[0].Node)->place , (yyval.Node)->place , instruction_num);

																									}
																									else if(typecheck == "Bool"){
																										(yyval.Node)->type = "Bool";
																										yyerror("Warning : Comparison between pointer and integer");
																									}
																									else{
																										yyerror ("error in comparing.");
																									}
																								}	
																								
																																								
																							}
#line 2976 "parser.tab.c"
    break;

  case 46:
#line 963 "parser.y"
                                                                                                                                                                {(yyval.Node) = (yyvsp[0].Node);}
#line 2982 "parser.tab.c"
    break;

  case 47:
#line 964 "parser.y"
                                                                                                                                {
																								(yyval.Node) = new_2_node("==", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;	

																								string typecheck = equality_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																								if( typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																								    yyerror("Cannot apply == operator on these variables.");
																								}
																								else{
																									if(typecheck == "True"){
																										(yyval.Node)->type = "int";

																										string var_0 = create_tmp_var((yyval.Node)->type ,offset, curr_scope);
																										align_offset( getSize((yyval.Node)->type) );

																										(yyval.Node)->place = create_opd(var_0 , find_entry(scope_st, var_0) );
																										// var_0 = exp == exp
																										emit((yyvsp[-2].Node)->place, "==", (yyvsp[0].Node)->place, (yyval.Node)->place, instruction_num);

																									}
																									else if( typecheck == "true"){
																										yyerror("Comparison between pointer and integer");
																									}
																									else{
																										yyerror("Cannot compute equality operation.");
																									}
																								}																
																							}
#line 3018 "parser.tab.c"
    break;

  case 48:
#line 995 "parser.y"
                                                                                                                        {
																								(yyval.Node) = new_2_node("!=", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init ==1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;	

																								string typecheck = equality_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type);
																								if( typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																								  	yyerror("Cannot apply != operator on these variables.");
																								}
																								else{
																									if( typecheck == "True"){
																										(yyval.Node)->type="int";

																										string var_0 = create_tmp_var((yyval.Node)->type, offset, curr_scope);
																										align_offset( getSize((yyval.Node)->type) );

																										(yyval.Node)->place = create_opd(var_0,find_entry( scope_st, var_0));																												
																										// var_0 = exp == exp
																										emit( (yyvsp[-2].Node)->place, "!=", (yyvsp[0].Node)->place, (yyval.Node)->place, instruction_num);	
																									}
																									else if( typecheck == "true"){
																										yyerror("Comparison between pointer and integer");
																									}
																									else{
																										yyerror("Cannot compute the != operation.");
																									}
																								}																
																							}
#line 3053 "parser.tab.c"
    break;

  case 49:
#line 1028 "parser.y"
                                                                                                                                                                {(yyval.Node) = (yyvsp[0].Node);}
#line 3059 "parser.tab.c"
    break;

  case 50:
#line 1029 "parser.y"
                                                                                                                                                {
																								(yyval.Node) = new_2_node("&", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;

																								string typecheck = bitwise_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																								if(typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																									yyerror("Invalid type for '&' expression");
																								}
																								
																								else if(typecheck=="true"){
																									(yyval.Node)->type = "int";

																									string var_0 = create_tmp_var((yyval.Node)->type, offset, curr_scope);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = create_opd(var_0 ,find_entry(scope_st, var_0));
																									// var_0 = exp & exp	
																									emit((yyvsp[-2].Node)->place, "&", (yyvsp[0].Node)->place, (yyval.Node)->place, instruction_num);
																								}

																								else{
																									yyerror("Cannot compute & operator.");
																								}
																							}
#line 3091 "parser.tab.c"
    break;

  case 51:
#line 1059 "parser.y"
                                                                                                                                                                        {(yyval.Node) = (yyvsp[0].Node);}
#line 3097 "parser.tab.c"
    break;

  case 52:
#line 1060 "parser.y"
                                                                                                                                        {
																								(yyval.Node) = new_2_node("^", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;

																								string typecheck = bitwise_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type);
																								if( typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																									yyerror("Invalid type for '^' expression");
																								}
																								else if( typecheck == "true"){
																									(yyval.Node)->type = "int";

																									string var_0 = create_tmp_var( (yyval.Node)->type, offset, curr_scope);
																									align_offset( getSize((yyval.Node)->type) );
																									(yyval.Node)->place = create_opd( var_0 ,find_entry(scope_st, var_0));																												
																									// var_0 = exp ^ exp
																									emit((yyvsp[-2].Node)->place,"^",(yyvsp[0].Node)->place,(yyval.Node)->place,instruction_num);
																								}	
																								else {
																									yyerror("Cannot compute xor operator.");
																								}
																							}
#line 3126 "parser.tab.c"
    break;

  case 53:
#line 1087 "parser.y"
                                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node);}
#line 3132 "parser.tab.c"
    break;

  case 54:
#line 1088 "parser.y"
                                                                                                                                {
																								(yyval.Node) = new_2_node("|", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;

																								string typecheck = bitwise_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type);
																								if( typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																									yyerror("Invalid type for '|' expression");
																								}
																								else if( typecheck == "true"){
																		  							(yyval.Node)->type = "int";
							
																		                            string var_0 = create_tmp_var( (yyval.Node)->type, offset, curr_scope);
																		                            align_offset( getSize((yyval.Node)->type) );

																		                            (yyval.Node)->place = create_opd( var_0 ,find_entry(scope_st, var_0));																												
																									// var_0 = exp | exp 	
																		                            emit((yyvsp[-2].Node)->place,"|",(yyvsp[0].Node)->place,(yyval.Node)->place,instruction_num);
																
																	                            }
																								else if(typecheck == "True"){
																									(yyval.Node)->type = "long long";

																									string var_0 = create_tmp_var((yyval.Node)->type, offset, curr_scope);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = create_opd(var_0 ,find_entry(scope_st, var_0));
																									// var_0 = exp | exp	
																									emit( (yyvsp[-2].Node)->place, "|", (yyvsp[0].Node)->place, (yyval.Node)->place, instruction_num);
																								}
																								else{
																									yyerror("Cannot compute | operation.");
																								}
																							}
#line 3173 "parser.tab.c"
    break;

  case 55:
#line 1127 "parser.y"
                                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node);}
#line 3179 "parser.tab.c"
    break;

  case 56:
#line 1128 "parser.y"
                                                                                                                                {
																								(yyval.Node) = new_2_node("&&", (yyvsp[-3].Node), (yyvsp[0].Node));
																								(yyval.Node)->type = "int";
																								(yyval.Node)->key = (yyvsp[-3].Node)->key;
																								if((yyvsp[-3].Node)->init == 1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;

																								backpatch( (yyvsp[-3].Node)->truelist, (yyvsp[-1].instr));
																								(yyvsp[0].Node)->falselist = makelist( instruction_num);

																								// if var_1 == var_2 goto ___
																								emit(IF_opd,"==",(yyvsp[0].Node)->place,GOTO_opd,-1);

																								(yyvsp[0].Node)->truelist = makelist( instruction_num);

																								// goto ____
																								emit(GOTO_opd,"",empty_opd,empty_opd,-1);

																								string var_0 = create_tmp_var( (yyval.Node)->type, offset, curr_scope);
																								align_offset( getSize((yyval.Node)->type) );

																								(yyval.Node)->place = create_opd(var_0 ,find_entry(scope_st, var_0));																												

																								backpatch((yyvsp[0].Node)->truelist, instruction_num); 
																								// var_0 = exp
																								emit(empty_opd,"", one_opd , (yyval.Node)->place, instruction_num);

																								(yyval.Node)->truelist = makelist(instruction_num);
																								// goto ___
																								emit(GOTO_opd,"", empty_opd, empty_opd,-1);

																								backpatch(merging((yyvsp[-3].Node)->falselist ,(yyvsp[0].Node)->falselist), instruction_num);  
																								// var_0 = 0
																								emit(empty_opd,"",zero_opd , (yyval.Node)->place, instruction_num);
																								
																								(yyval.Node)->falselist = makelist( instruction_num);
																								// goto ___
																								emit( GOTO_opd,"", empty_opd, empty_opd,-1);	
																  							}
#line 3223 "parser.tab.c"
    break;

  case 57:
#line 1170 "parser.y"
                                  {
										(yyval.Node)=(yyvsp[0].Node);
	
										(yyval.Node)->falselist=merging(makelist(instruction_num),(yyvsp[0].Node)->falselist);
										// if var_1 == var_2 goto ___
										emit(IF_opd,"==",(yyvsp[0].Node)->place,GOTO_opd,-1);
														
										(yyval.Node)->truelist=merging(makelist(instruction_num),(yyvsp[0].Node)->truelist);
										// goto ____
										emit(GOTO_opd,"",empty_opd,empty_opd,-1);		

									}
#line 3240 "parser.tab.c"
    break;

  case 58:
#line 1186 "parser.y"
                                                {	
								(yyval.instr) = instruction_num;
							}
#line 3248 "parser.tab.c"
    break;

  case 59:
#line 1192 "parser.y"
                                                                                                                                                                {(yyval.Node) = (yyvsp[0].Node);}
#line 3254 "parser.tab.c"
    break;

  case 60:
#line 1193 "parser.y"
                                                                                                                {
																							(yyval.Node) = new_2_node("||", (yyvsp[-3].Node), (yyvsp[0].Node));
																							(yyval.Node)->type = "int";
																							(yyval.Node)->key = (yyvsp[-3].Node)->key;
																							if((yyvsp[-3].Node)->init == 1 && (yyvsp[0].Node)->init == 1)
																								(yyval.Node)->init = 1;
																							
																							backpatch((yyvsp[-3].Node)->falselist, (yyvsp[-1].instr));
					
																							if( (yyvsp[0].Node)->falselist.size() == 0)
																								(yyvsp[0].Node)->falselist=makelist(instruction_num);
																							else
																								backpatch((yyvsp[0].Node)->falselist, instruction_num);
																							
																							// if var_1 == var_2 goto ___
																							emit(IF_opd,"==",(yyvsp[0].Node)->place,GOTO_opd,-1);
					
																							if( (yyvsp[0].Node)->truelist.size() == 0)
																								(yyvsp[0].Node)->truelist=makelist(instruction_num);
																							else
																								backpatch((yyvsp[0].Node)->truelist, instruction_num);
																							
																							// goto ___
																							emit(GOTO_opd,"",empty_opd,empty_opd,-1);
																							
																							string var_0 = create_tmp_var( (yyval.Node)->type, offset, curr_scope);
																							align_offset( getSize((yyval.Node)->type) );
																							(yyval.Node)->place = create_opd( var_0 ,find_entry(scope_st, var_0));																												
																							
																							backpatch((yyvsp[0].Node)->falselist, instruction_num);
																							// var_0 = 0
																							emit( empty_opd, "", zero_opd , (yyval.Node)->place, instruction_num);

																							(yyval.Node)->falselist = makelist(instruction_num);
																							// goto __
																							emit(GOTO_opd,"",empty_opd,empty_opd,-1);
																							
																							backpatch( merging((yyvsp[-3].Node)->truelist, (yyvsp[0].Node)->truelist) , instruction_num);  
																							// var_0 = 1
																							emit(empty_opd,"",one_opd , (yyval.Node)->place, instruction_num);
																							
																							(yyval.Node)->truelist = makelist( instruction_num);
																							// goto __ 
																							emit(GOTO_opd,"",empty_opd,empty_opd,-1);
																						}
#line 3304 "parser.tab.c"
    break;

  case 61:
#line 1241 "parser.y"
                                        {					
									(yyval.Node)=(yyvsp[0].Node);					
					
									(yyval.Node)->falselist= merging( makelist(instruction_num) , (yyvsp[0].Node)->falselist);
									// if var_0 == 0 goto ___
									emit(IF_opd, "==", (yyvsp[0].Node)->place, GOTO_opd, -1);
									
									(yyval.Node)->truelist = merging( makelist(instruction_num), (yyvsp[0].Node)->truelist);
									// goto ___
									emit(GOTO_opd, "", empty_opd, empty_opd, -1);		
								}
#line 3320 "parser.tab.c"
    break;

  case 62:
#line 1256 "parser.y"
                                                                                                                                                        {(yyval.Node) = (yyvsp[0].Node);}
#line 3326 "parser.tab.c"
    break;

  case 63:
#line 1257 "parser.y"
                                                                                                        {
																								(yyval.Node) = new_3_node("?:", (yyvsp[-7].Node), (yyvsp[-4].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[0].Node)->key;
																								if((yyvsp[-7].Node)->init == 1 && (yyvsp[0].Node)->init == 1 && (yyvsp[-4].Node)->init == 1) 
																									(yyval.Node)->init = 1;

																								string typecheck = conditional_expr((yyvsp[-7].Node)->type, (yyvsp[0].Node)->type);
																								if(typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																									yyerror("The types are not compatible for conditional expression.");
																								}
																								else{
																									(yyval.Node)->type = typecheck;

																									backpatch( (yyvsp[-7].Node)->truelist, (yyvsp[-5].instr));
																						         	backpatch( (yyvsp[-7].Node)->falselist, (yyvsp[-1].instr));
																						         	
																						         	string var_0 = create_tmp_var( (yyval.Node)->type, offset, curr_scope);
																						         	align_offset( getSize((yyval.Node)->type) );
																						         	(yyval.Node)->place = create_opd( var_0 , find_entry(scope_st, var_0));	
																						         	
																									// var_0 = var_1
																						         	emit(empty_opd,"",(yyvsp[0].Node)->place , (yyval.Node)->place, instruction_num);
																									// goto ___
																						         	emit(GOTO_opd,"",empty_opd,empty_opd,instruction_num+2);
																						         	backpatch( (yyvsp[0].Node)->truelist,  instruction_num + 2);					
																						         	backpatch( (yyvsp[0].Node)->falselist, instruction_num + 2);						
																						         	backpatch( (yyvsp[-4].Node)->truelist , (yyvsp[-3].Node)->instruction_number);					
																						         	backpatch( (yyvsp[-4].Node)->falselist , (yyvsp[-3].Node)->instruction_number);					
																						         	backpatch( (yyvsp[-3].Node)->nextlist, instruction_num);
																									// var_0 = var_1
																						         	emit(empty_opd,"",(yyvsp[-4].Node)->place , (yyval.Node)->place, instruction_num);
																						        }
																							}
#line 3365 "parser.tab.c"
    break;

  case 64:
#line 1294 "parser.y"
                                        {
							(yyval.Node) = new node();
							(yyval.Node)->instruction_number = instruction_num;														
							(yyval.Node)->nextlist = makelist(instruction_num);
							
							// goto ___
							emit(GOTO_opd,"",empty_opd,empty_opd,-1);
						}
#line 3378 "parser.tab.c"
    break;

  case 65:
#line 1305 "parser.y"
                                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node); }
#line 3384 "parser.tab.c"
    break;

  case 66:
#line 1306 "parser.y"
                                                                                                                        {
																									make_children((yyvsp[-1].Node), (yyvsp[-2].Node), (yyvsp[0].Node), NULL); 
																									(yyval.Node) = (yyvsp[-1].Node);
																									(yyval.Node)->key=(yyvsp[0].Node)->key;

																									string typecheck = assignment_expr((yyvsp[-2].Node)->type , (yyvsp[0].Node)->type, (yyvsp[-1].Node)->s);

																									if( typecheck == ""){
																										(yyval.Node)->type = "incorrect";
																										yyerror("Cannot assign type " + (yyvsp[0].Node)->type + " to " + (yyvsp[-2].Node)->type);
																									}
																									else{
																										if( typecheck == "true"){
																											(yyval.Node)->type = (yyvsp[-2].Node)->type;

																											if((yyvsp[-1].Node)->s == "="){
																												backpatch( (yyvsp[0].Node)->falselist, instruction_num);
																												backpatch( (yyvsp[0].Node)->truelist, instruction_num);
																												
																												if((yyvsp[-2].Node)->flag == 1){
																													// var_0 = **var_1
																													emit(star_opd,"",(yyvsp[0].Node)->place,(yyvsp[-2].Node)->place,instruction_num);
																												}
																												else if((yyvsp[0].Node)->flag == 1){
																													// var_0 = *var_1
																													emit(empty_opd,"*",(yyvsp[0].Node)->place,(yyvsp[-2].Node)->place,instruction_num);
																												}
																												else{
																													// var_0 = var_1
																													emit(empty_opd,"",(yyvsp[0].Node)->place,(yyvsp[-2].Node)->place,instruction_num);
																												} 
																											}
																											else{
																						  						string var_0 = create_tmp_var( (yyval.Node)->type, offset, curr_scope);
																						  						align_offset( getSize((yyval.Node)->type) );

																						  						(yyval.Node)->place = create_opd( var_0, find_entry(scope_st, var_0));

																						  						backpatch( (yyvsp[0].Node)->falselist, instruction_num);
																						  						backpatch( (yyvsp[0].Node)->truelist, instruction_num);

																						  						string var_1 = create_tmp_var( (yyval.Node)->type,offset,curr_scope);
																						  						align_offset( getSize((yyval.Node)->type) );

																						  						opd tmp_opd = create_opd(var_1 ,find_entry(scope_st, var_1));

																						  						string str="";
																						  						str = str + (yyvsp[-1].Node)->s[0] ;
																						  						if( (yyvsp[-1].Node)->s[1] != '=')
																												  	str = str+(yyvsp[-1].Node)->s[1];

																						  						emit( (yyvsp[-2].Node)->place , str , (yyvsp[0].Node)->place, (yyval.Node)->place, instruction_num);
																												// var_0 = var_1
																						  						emit(empty_opd, "", (yyval.Node)->place, (yyvsp[-2].Node)->place ,instruction_num);
																				                          	}

																										}		
																										else if( typecheck == "warning"){
																											(yyval.Node)->type = (yyvsp[-2].Node)->type;
																											yyerror("Assignment with incompatible pointer type");
																										}	
																										if((yyvsp[-2].Node)->isidentifier == 1){
																											if((yyvsp[0].Node)->init == 1){
																												tEntry* entry = find_entry(scope_st, (yyvsp[-2].Node)->s);
																												if(entry){
																													entry->init = 1;
																												}
																											}
																										}	
																									}
																  							}
#line 3460 "parser.tab.c"
    break;

  case 67:
#line 1381 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = new_2_node("=", NULL, NULL); 
																							 	(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3469 "parser.tab.c"
    break;

  case 68:
#line 1385 "parser.y"
                                                                                                                                                                {	(yyval.Node) = new_2_node("*=", NULL, NULL); 
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3478 "parser.tab.c"
    break;

  case 69:
#line 1389 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = new_2_node("/=", NULL, NULL); 
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3487 "parser.tab.c"
    break;

  case 70:
#line 1393 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = new_2_node("+=", NULL, NULL); 
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3496 "parser.tab.c"
    break;

  case 71:
#line 1397 "parser.y"
                                                                                                                                                                {	(yyval.Node) = new_2_node("-=", NULL, NULL); 
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3505 "parser.tab.c"
    break;

  case 72:
#line 1401 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = new_2_node("&=", NULL, NULL); 
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3514 "parser.tab.c"
    break;

  case 73:
#line 1405 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = new_2_node("^=", NULL, NULL); 
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3523 "parser.tab.c"
    break;

  case 74:
#line 1409 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = new_2_node("|=", NULL, NULL); 
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3532 "parser.tab.c"
    break;

  case 75:
#line 1416 "parser.y"
                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node);}
#line 3538 "parser.tab.c"
    break;

  case 76:
#line 1417 "parser.y"
                                                                                                                                        {
																								(yyval.Node) = new_2_node(",", (yyvsp[-2].Node), (yyvsp[0].Node));
																							}
#line 3546 "parser.tab.c"
    break;

  case 77:
#line 1423 "parser.y"
                                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node); }
#line 3552 "parser.tab.c"
    break;

  case 78:
#line 1427 "parser.y"
                                                                                                                                                                { (yyval.Node) = (yyvsp[-2].Node); }
#line 3558 "parser.tab.c"
    break;

  case 79:
#line 1428 "parser.y"
                                                                                                                                        { (yyval.Node) = new_2_node("Declaration", (yyvsp[-3].Node), (yyvsp[-2].Node)); }
#line 3564 "parser.tab.c"
    break;

  case 80:
#line 1432 "parser.y"
                        { type_var = ""; }
#line 3570 "parser.tab.c"
    break;

  case 81:
#line 1437 "parser.y"
                                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node); }
#line 3576 "parser.tab.c"
    break;

  case 82:
#line 1438 "parser.y"
                                                                                                                                        { (yyval.Node) = new_2_node("Declaration Specifier", (yyvsp[-1].Node), (yyvsp[0].Node));}
#line 3582 "parser.tab.c"
    break;

  case 83:
#line 1439 "parser.y"
                                                                                                                                                                        { (yyval.Node) = (yyvsp[0].Node);}
#line 3588 "parser.tab.c"
    break;

  case 84:
#line 1440 "parser.y"
                                                                                                                                                { (yyval.Node) = new_2_node("Declaration Specifier", (yyvsp[-1].Node), (yyvsp[0].Node));}
#line 3594 "parser.tab.c"
    break;

  case 85:
#line 1444 "parser.y"
                                                                                                                                                                        { (yyval.Node) = (yyvsp[0].Node);}
#line 3600 "parser.tab.c"
    break;

  case 86:
#line 1445 "parser.y"
                                                                                                                                                { (yyval.Node) = new_2_node(",", (yyvsp[-2].Node), (yyvsp[0].Node));}
#line 3606 "parser.tab.c"
    break;

  case 87:
#line 1449 "parser.y"
                                                                                                                                                        {
																									(yyval.Node) = (yyvsp[0].Node);
																									if( is_valid_var_type((yyvsp[0].Node)->type) ){
																										if( (find_entry(scope_st, (yyvsp[0].Node)->key)) ){
																											yyerror((yyvsp[0].Node)->key + " is redeclared.");
																										}
																									    else{
																									    	insert_entry((yyvsp[0].Node)->key , (yyvsp[0].Node)->type , 0, (yyvsp[0].Node)->size, offset, curr_scope);
																											align_offset((yyvsp[0].Node)->size);
																									    }
																							     	}
																									else{
																										(yyval.Node)->type = "incorrect";
																										yyerror("Invalid type specification.");
																									}
																									(yyval.Node)->place = create_opd((yyvsp[0].Node)->key,find_entry(scope_st,(yyvsp[0].Node)->key));																												
																									// var_0 = 
																									emit(empty_opd,"",empty_opd,(yyval.Node)->place,instruction_num);

																							}
#line 3631 "parser.tab.c"
    break;

  case 88:
#line 1469 "parser.y"
                                                                                                                                                        {
																								(yyval.Node) = new_2_node("=", (yyvsp[-2].Node), (yyvsp[0].Node));

																								string typecheck = assignment_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type, "=");
																								if(typecheck == ""){
																									(yyval.Node)->type = "incorrect";
																									yyerror("Cannot assign type " + (yyvsp[0].Node)->type + " to " + (yyvsp[-2].Node)->type);
																								}
																								else{			
																									if( is_valid_var_type((yyvsp[-2].Node)->type) ){
																										// cout << "aaya " << endl;
																										(yyval.Node)->type = (yyvsp[-2].Node)->type;
																										(yyval.Node)->init = (yyvsp[0].Node)->init;
																										(yyvsp[-2].Node)->init = (yyvsp[0].Node)->init;

																										if( !(find_entry(scope_st,(yyvsp[-2].Node)->key)) ){
																											insert_entry((yyvsp[-2].Node)->key ,(yyvsp[-2].Node)->type ,1 ,(yyvsp[-2].Node)->size ,offset ,curr_scope);
																											align_offset((yyvsp[-2].Node)->size);

																											(yyval.Node)->place = create_opd((yyvsp[-2].Node)->key ,find_entry(scope_st , (yyvsp[-2].Node)->key));																												
																											// var_0 = var_1
																											emit(empty_opd,"",(yyvsp[0].Node)->place,(yyval.Node)->place,instruction_num);
																										}
																										else{
																											yyerror((yyvsp[-2].Node)->key + " is redeclared.");
																										}
																										
																									}else{
																										(yyval.Node)->type = "incorrect";
																										yyerror("Invalid type specification.");
																									}
																								}
																							}
#line 3669 "parser.tab.c"
    break;

  case 89:
#line 1505 "parser.y"
                                                                                                                                                                {(yyval.Node)=new_leaf_node((yyvsp[0].Str));}
#line 3675 "parser.tab.c"
    break;

  case 90:
#line 1509 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "void";
																									else type_var += "void";
																								}
#line 3684 "parser.tab.c"
    break;

  case 91:
#line 1513 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "char";
																									else type_var += " char";
																								}
#line 3693 "parser.tab.c"
    break;

  case 92:
#line 1517 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "short";
																									else type_var += " short";
																								}
#line 3702 "parser.tab.c"
    break;

  case 93:
#line 1521 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "bool";
																									else type_var += " bool";
																								}
#line 3711 "parser.tab.c"
    break;

  case 94:
#line 1525 "parser.y"
                                                                                                                                                                                        {
																									(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "int";
																									else type_var += " int";
																								}
#line 3721 "parser.tab.c"
    break;

  case 95:
#line 1530 "parser.y"
                                                                                                                                                                                        {
																									(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "long";
																									else type_var += " long";
																								}
#line 3731 "parser.tab.c"
    break;

  case 96:
#line 1535 "parser.y"
                                                                                                                                                                                        {
																									(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "float";
																									else type_var += " float";
																								}
#line 3741 "parser.tab.c"
    break;

  case 97:
#line 1540 "parser.y"
                                                                                                                                                                                        {
																									(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "double";
																									else type_var += " double";
																								}
#line 3751 "parser.tab.c"
    break;

  case 98:
#line 1545 "parser.y"
                                                                                                                                                                                        {
																									(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "signed";
																									else type_var += " signed";
																								}
#line 3761 "parser.tab.c"
    break;

  case 99:
#line 1550 "parser.y"
                                                                                                                                                                                        {
																									(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "unsigned";
																									else type_var += " unsigned";
																								}
#line 3771 "parser.tab.c"
    break;

  case 100:
#line 1555 "parser.y"
                                                                                                                                                                                        {
																									(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "")type_var = "string";
																									else type_var += " string";
																								}
#line 3781 "parser.tab.c"
    break;

  case 101:
#line 1560 "parser.y"
                                                                                                                                                                {
																									(yyval.Node)=(yyvsp[0].Node);
																									if(type_var == "") type_var = "struct " + (yyval.Node)->child1->s;
																									else type_var += "struct " + (yyval.Node)->child1->s;
																								}
#line 3791 "parser.tab.c"
    break;

  case 102:
#line 1567 "parser.y"
                                                                                                                                        {	
																									(yyval.Node) = new_1_node( "STRUCT" , new_leaf_node((yyvsp[0].Str)));
																									(yyval.Node)->size = getSize( "struct " + string((yyvsp[-1].Str)));
																								}
#line 3800 "parser.tab.c"
    break;

  case 103:
#line 1574 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									struct_name = string("struct " + (yyval.Node)->s);
																									struct_offset = 0;
																								}
#line 3809 "parser.tab.c"
    break;

  case 104:
#line 1582 "parser.y"
                                                                                                                                                                        { (yyval.Node)=(yyvsp[0].Node);}
#line 3815 "parser.tab.c"
    break;

  case 105:
#line 1583 "parser.y"
                                                                                                                                                {
																									(yyval.Node) = new_2_node("struct_declaration_list", (yyvsp[-1].Node), (yyvsp[0].Node));
																									(yyval.Node)->size = (yyvsp[-1].Node)->size + (yyvsp[0].Node)->size;
																								}
#line 3824 "parser.tab.c"
    break;

  case 106:
#line 1590 "parser.y"
                                                                                                                                                {
																									(yyval.Node) = new_2_node("struct_declaration",(yyvsp[-3].Node),(yyvsp[-2].Node));
																									(yyval.Node)->size = (yyvsp[-2].Node)->size;
																								}
#line 3833 "parser.tab.c"
    break;

  case 107:
#line 1597 "parser.y"
                                                                                                                                                        { (yyval.Node)=new_2_node("specifier_qualifier_list",(yyvsp[-1].Node),(yyvsp[0].Node)); }
#line 3839 "parser.tab.c"
    break;

  case 108:
#line 1598 "parser.y"
                                                                                                                                                                                {	
																									(yyval.Node)=(yyvsp[0].Node);
																									(yyval.Node)->type=(yyvsp[0].Node)->type;
																								}
#line 3848 "parser.tab.c"
    break;

  case 109:
#line 1605 "parser.y"
                                                                                                                                                                                {
																									(yyval.Node)=(yyvsp[0].Node);
																									if( (find_struct_entry(struct_name,(yyvsp[0].Node)->key)) )
																										yyerror("Line " + to_string(line) + ": " + (yyvsp[0].Node)->key + " is already declared");
																									else{
																										insert_struct_entry(struct_name, (yyvsp[0].Node)->key, (yyvsp[0].Node)->type, struct_offset, (yyvsp[0].Node)->size);
																										align_struct_offset( getSize((yyvsp[0].Node)->type) );
																										if(((yyval.Node)->size)%4 == 0){
            																						
            																							}
            																							else {
            																							    (yyval.Node)->size = ((yyval.Node)->size - ((yyval.Node)->size)%4) + 4;
            																							} 
																									}
																								}
#line 3868 "parser.tab.c"
    break;

  case 110:
#line 1620 "parser.y"
                                                                                                                                                        {
																									(yyval.Node)=new_2_node(",",(yyvsp[-2].Node),(yyvsp[0].Node));
																									(yyval.Node)->size = (yyvsp[-2].Node)->size + (yyvsp[0].Node)->size;
																								}
#line 3877 "parser.tab.c"
    break;

  case 111:
#line 1627 "parser.y"
                                                                                                                                                                {	
																									make_children((yyvsp[-1].Node),(yyvsp[0].Node),NULL,NULL);
																									(yyval.Node) = new_2_node("declarator", (yyvsp[-1].Node), (yyvsp[0].Node));
																									(yyval.Node)->type = (yyvsp[-1].Node)->type + " " + (yyvsp[0].Node)->type;
																									(yyval.Node)->key = (yyvsp[0].Node)->key;
																									(yyval.Node)->size = getSize((yyval.Node)->type);

																									(yyval.Node)->place = opd((yyvsp[0].Node)->s);
																								}
#line 3891 "parser.tab.c"
    break;

  case 112:
#line 1637 "parser.y"
                                                                                                                                                                                {
																									(yyval.Node) = (yyvsp[0].Node);
																									(yyval.Node)->place = opd((yyvsp[0].Node)->s);
																								}
#line 3900 "parser.tab.c"
    break;

  case 113:
#line 1644 "parser.y"
                                                                                                                                                                                {
																									(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									(yyval.Node)->type = type_var;
																									(yyval.Node)->key = (yyvsp[0].Str);
																									(yyval.Node)->size = getSize((yyval.Node)->type);

																									(yyval.Node)->place = opd((yyvsp[0].Str));
																								}
#line 3913 "parser.tab.c"
    break;

  case 114:
#line 1652 "parser.y"
                                                                                                                                                                        {
																									(yyval.Node) = new_1_node("()", (yyvsp[-1].Node));
																									(yyval.Node)->type = (yyvsp[-1].Node)->type;
																									(yyval.Node)->key = (yyvsp[-1].Node)->s;
																									(yyval.Node)->size = (yyvsp[-1].Node)->size;
																								}
#line 3924 "parser.tab.c"
    break;

  case 115:
#line 1658 "parser.y"
                                                                                                                                                {	
																									(yyval.Node) = new_2_node("[]",(yyvsp[-3].Node),(yyvsp[-1].Node));
																									(yyval.Node)->type = (yyvsp[-3].Node)->type;
																									(yyval.Node)->key = (yyvsp[-3].Node)->s;	
																									(yyval.Node)->size = getSize( (yyval.Node)->type ) * stoi((yyvsp[-1].Node)->s);
																								}
#line 3935 "parser.tab.c"
    break;

  case 116:
#line 1664 "parser.y"
                                                                                                                                                                        {
																									(yyval.Node) = new_1_node("[]",(yyvsp[-2].Node));
																									(yyval.Node)->type = (yyvsp[-2].Node)->type;
																									(yyval.Node)->key = (yyvsp[-2].Node)->s;
																									(yyval.Node)->size = getSize((yyval.Node)->type);
																									(yyval.Node)->size = getSize((yyval.Node)->type);
																								}
#line 3947 "parser.tab.c"
    break;

  case 117:
#line 1671 "parser.y"
                                                                                                                                                {
																									(yyval.Node) = new_2_node("()",(yyvsp[-4].Node),(yyvsp[-1].Node));
																									(yyval.Node)->type = (yyvsp[-4].Node)->type;
																									(yyval.Node)->key = (yyvsp[-4].Node)->s;
																									(yyval.Node)->size = getSize((yyval.Node)->type);
																									FUNC_PARAM.insert( make_pair( (yyvsp[-4].Node)->type + " " + (yyvsp[-4].Node)->key , func_params));
																									
																									const char delim = ',';
																									vector<std::string> args;
																									size_t start;
																									size_t end = 0;
																								
																									while ((start = func_params.find_first_not_of(delim, end)) != string::npos){
																									    end = func_params.find(delim, start);
																									    args.push_back(func_params.substr(start, end - start));
																									}
																									
																									insert_entry((yyvsp[-4].Node)->key , type_var, 0, (yyvsp[-4].Node)->size, -1, 0);
																									(yyvsp[-4].Node)->place = create_opd((yyvsp[-4].Node)->key, find_entry(scope_st, (yyvsp[-4].Node)->key));
																									// func name
																									emit(func_opd,"",(yyvsp[-4].Node)->place,empty_opd,-1);

																									for(int i=0;i<args.size();i++){
																										const char delim1 = ' ';
																										vector<std::string> arg;
																										size_t start;
																										size_t end = 0;

																										while ((start = args[i].find_first_not_of(delim1, end)) != string::npos){
																										    end = args[i].find(delim1, start);
																										    arg.push_back(args[i].substr(start, end - start));
																										}
																										string t = "";
																										
																										for(int j = 0;j < arg.size() - 1 ; j++){
																											if(t == "") 
																												t = arg[j];
																											else 
																												t += " " + arg[j];
																										}
																										int size = getSize(t);																
																										insert_entry(arg[arg.size()-1], t, 1, size, offset, num_scopes+1);
																										align_offset( size);
																		
																										opd opd1 = create_opd(arg[arg.size()-1], find_entry(scope_st, arg[arg.size()-1]));
																										
																										emit(empty_opd, "", empty_opd, opd1, instruction_num);
																									}			
																									
																									func_params = "";
																									insert_entry((yyvsp[-4].Node)->key, type_var, 0, (yyvsp[-4].Node)->size, -1, 0);
    																								entry_map.insert( make_pair(num_scopes+1 , (yyvsp[-4].Node)->key) );
																								}
#line 4005 "parser.tab.c"
    break;

  case 118:
#line 1725 "parser.y"
                                                                                                                                                {
																									(yyval.Node) = new_2_node("()",(yyvsp[-4].Node),(yyvsp[-1].Node));

																									(yyval.Node)->type = (yyvsp[-4].Node)->type;
																									(yyval.Node)->key = (yyvsp[-4].Node)->s;
																									(yyval.Node)->size = getSize( (yyval.Node)->type );
																									FUNC_PARAM.insert( make_pair( (yyvsp[-4].Node)->type + " " + (yyvsp[-4].Node)->key , func_params) );
																									
																									func_params="";
																									insert_entry((yyvsp[-4].Node)->key , type_var, 0, (yyvsp[-4].Node)->size, -1, 0);
    																								entry_map.insert(make_pair( num_scopes + 1, (yyvsp[-4].Node)->key));

																									(yyvsp[-4].Node)->place = create_opd((yyvsp[-4].Node)->key, find_entry(scope_st, (yyvsp[-4].Node)->key));
																									// func name
																									emit( func_opd, "", (yyvsp[-4].Node)->place, empty_opd, -1);
																								}
#line 4026 "parser.tab.c"
    break;

  case 119:
#line 1741 "parser.y"
                                                                                                                                                                {
																									(yyval.Node) = new_1_node("()", (yyvsp[-3].Node));
																									(yyval.Node)->type = (yyvsp[-3].Node)->type;
																									(yyval.Node)->key = (yyvsp[-3].Node)->s;
																									(yyval.Node)->size = getSize((yyval.Node)->type);
																									FUNC_PARAM.insert( make_pair( (yyvsp[-3].Node)->type+ " " + (yyvsp[-3].Node)->key ,func_params));
																									
																									func_params="";
																									insert_entry((yyvsp[-3].Node)->key,(yyvsp[-3].Node)->type,0,(yyvsp[-3].Node)->size,-1,0);
    																								entry_map.insert(make_pair(num_scopes+1,(yyvsp[-3].Node)->key));

																									(yyvsp[-3].Node)->place = create_opd((yyvsp[-3].Node)->key, find_entry(scope_st,(yyvsp[-3].Node)->key));
																									// func name
																									emit(func_opd,"",(yyvsp[-3].Node)->place,empty_opd,-1);
																								}
#line 4046 "parser.tab.c"
    break;

  case 120:
#line 1759 "parser.y"
                                        {
							type_var = "";
							offset = 0;
						}
#line 4055 "parser.tab.c"
    break;

  case 121:
#line 1765 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = new_leaf_node("*");
																									(yyval.Node)->type = "*";
																								}
#line 4063 "parser.tab.c"
    break;

  case 122:
#line 1768 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = new_1_node("*",(yyvsp[0].Node));
																									(yyval.Node)->type = "* "+ (yyvsp[0].Node)->type;
																								}
#line 4071 "parser.tab.c"
    break;

  case 123:
#line 1775 "parser.y"
                                                                                                                                                                                { (yyval.Node)=(yyvsp[0].Node); }
#line 4077 "parser.tab.c"
    break;

  case 124:
#line 1779 "parser.y"
                                                                                                                                                                        { (yyval.Node) = (yyvsp[0].Node); }
#line 4083 "parser.tab.c"
    break;

  case 125:
#line 1780 "parser.y"
                                                                                                                                                        { (yyval.Node) = new_2_node(",", (yyvsp[-2].Node), (yyvsp[0].Node));}
#line 4089 "parser.tab.c"
    break;

  case 126:
#line 1784 "parser.y"
                        {type_var="";}
#line 4095 "parser.tab.c"
    break;

  case 127:
#line 1788 "parser.y"
                                                                                                                                                        {	
																									(yyval.Node) = new_2_node("parameter_declaration", (yyvsp[-1].Node), (yyvsp[0].Node));
																									
																									if(func_params=="")
																									    func_params += (yyvsp[0].Node)->type + " " + (yyvsp[0].Node)->key;
																									else
																									    func_params += "," + (yyvsp[0].Node)->type + " " + (yyvsp[0].Node)->key;

																									(yyval.Node) = new_2_node("parameter_declaration", (yyvsp[-1].Node), (yyvsp[0].Node));
																								}
#line 4110 "parser.tab.c"
    break;

  case 128:
#line 1799 "parser.y"
                                                                                                                                                {	(yyval.Node)=new_2_node("parameter_declaration",(yyvsp[-1].Node),(yyvsp[0].Node)); }
#line 4116 "parser.tab.c"
    break;

  case 129:
#line 1800 "parser.y"
                                                                                                                                                                        {	(yyval.Node)=(yyvsp[0].Node); }
#line 4122 "parser.tab.c"
    break;

  case 130:
#line 1804 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = new_leaf_node((yyvsp[0].Str)); }
#line 4128 "parser.tab.c"
    break;

  case 131:
#line 1805 "parser.y"
                                                                                                                                                                {	(yyval.Node) = new_2_node("," , (yyvsp[-2].Node), new_leaf_node((yyvsp[0].Str))); }
#line 4134 "parser.tab.c"
    break;

  case 132:
#line 1809 "parser.y"
                                                                                                                                                                        {	(yyval.Node)=(yyvsp[0].Node); }
#line 4140 "parser.tab.c"
    break;

  case 133:
#line 1810 "parser.y"
                                                                                                                                                {	(yyval.Node)=new_2_node("type_name", (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 4146 "parser.tab.c"
    break;

  case 134:
#line 1814 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = (yyvsp[0].Node); }
#line 4152 "parser.tab.c"
    break;

  case 135:
#line 1815 "parser.y"
                                                                                                                                                                {	(yyval.Node) = (yyvsp[0].Node); }
#line 4158 "parser.tab.c"
    break;

  case 136:
#line 1816 "parser.y"
                                                                                                                                                        {	(yyval.Node) = new_2_node("pointer direct_abstract_declarator", (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 4164 "parser.tab.c"
    break;

  case 137:
#line 1820 "parser.y"
                                                                                                                                                                {	(yyval.Node)=new_1_node("()",(yyvsp[-1].Node));	}
#line 4170 "parser.tab.c"
    break;

  case 138:
#line 1821 "parser.y"
                                                                                                                                                                                        {	(yyval.Node)=new_leaf_node("[]");	}
#line 4176 "parser.tab.c"
    break;

  case 139:
#line 1822 "parser.y"
                                                                                                                                                                {	(yyval.Node)=new_1_node("[]",(yyvsp[-1].Node));	}
#line 4182 "parser.tab.c"
    break;

  case 140:
#line 1823 "parser.y"
                                                                                                                                                        {	(yyval.Node)=new_1_node("[]",(yyvsp[-2].Node));	}
#line 4188 "parser.tab.c"
    break;

  case 141:
#line 1824 "parser.y"
                                                                                                                                        {	(yyval.Node)=new_2_node("[]",(yyvsp[-3].Node),(yyvsp[-1].Node));	}
#line 4194 "parser.tab.c"
    break;

  case 142:
#line 1825 "parser.y"
                                                                                                                                                                                        {	(yyval.Node)=new_leaf_node("()");	}
#line 4200 "parser.tab.c"
    break;

  case 143:
#line 1826 "parser.y"
                                                                                                                                                                {	(yyval.Node)=new_1_node("()",(yyvsp[-1].Node));	}
#line 4206 "parser.tab.c"
    break;

  case 144:
#line 1827 "parser.y"
                                                                                                                                                        {	(yyval.Node)=new_1_node("()",(yyvsp[-2].Node));	}
#line 4212 "parser.tab.c"
    break;

  case 145:
#line 1828 "parser.y"
                                                                                                                                        {	(yyval.Node)=new_2_node("()",(yyvsp[-3].Node),(yyvsp[-1].Node));	}
#line 4218 "parser.tab.c"
    break;

  case 146:
#line 1832 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4224 "parser.tab.c"
    break;

  case 147:
#line 1833 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4230 "parser.tab.c"
    break;

  case 148:
#line 1834 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[-1].Node);	}
#line 4236 "parser.tab.c"
    break;

  case 149:
#line 1835 "parser.y"
                                                                                                                                                                {	(yyval.Node) = new_1_node(",", (yyvsp[-2].Node));	}
#line 4242 "parser.tab.c"
    break;

  case 150:
#line 1839 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4248 "parser.tab.c"
    break;

  case 151:
#line 1840 "parser.y"
                                                                                                                                                                {	(yyval.Node) = new_2_node(",", (yyvsp[-2].Node), (yyvsp[0].Node));	}
#line 4254 "parser.tab.c"
    break;

  case 152:
#line 1844 "parser.y"
                                                                                                                                                                {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4260 "parser.tab.c"
    break;

  case 153:
#line 1845 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4266 "parser.tab.c"
    break;

  case 154:
#line 1846 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4272 "parser.tab.c"
    break;

  case 155:
#line 1847 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4278 "parser.tab.c"
    break;

  case 156:
#line 1848 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4284 "parser.tab.c"
    break;

  case 157:
#line 1849 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4290 "parser.tab.c"
    break;

  case 158:
#line 1850 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4296 "parser.tab.c"
    break;

  case 159:
#line 1851 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4302 "parser.tab.c"
    break;

  case 160:
#line 1852 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4308 "parser.tab.c"
    break;

  case 161:
#line 1856 "parser.y"
                                        {
									(yyval.Node)=(yyvsp[0].Node);

									string var_0 = create_tmp_var( (yyval.Node)->type, offset, curr_scope);
									align_offset(getSize((yyval.Node)->type));

									opd case_opd = create_opd( var_0 , find_entry(scope_st, var_0) );
									// case var_0																											
									emit( empty_opd,"", (yyvsp[0].Node)->place, case_opd, instruction_num);
									
									string var_1 = create_tmp_var( (yyval.Node)->type , offset,curr_scope);
									align_offset( getSize((yyval.Node)->type) );
									(yyval.Node)->place = create_opd(var_1 , find_entry(scope_st, var_1));
									
									// var_0 = case - switch
									emit( case_opd , "-" , switch_opd, (yyval.Node)->place , instruction_num);
									(yyval.Node)->nextlist = makelist( instruction_num);
									// if var_1 != 0 goto __
									emit( IF_opd, "!=" , (yyval.Node)->place , GOTO_opd ,-1);
									
								}
#line 4334 "parser.tab.c"
    break;

  case 162:
#line 1880 "parser.y"
                                                                                                                                                        {	
																									(yyval.Node) = new_2_node("LABELLED_STATEMENT", new_leaf_node((yyvsp[-3].Str)), (yyvsp[0].Node));
																									label_tabel.insert(make_pair((yyvsp[-3].Str), (yyvsp[-2].instr)));
												
																									(yyval.Node)->truelist = (yyvsp[0].Node)->truelist;
																									(yyval.Node)->falselist = (yyvsp[0].Node)->falselist;
																									(yyval.Node)->nextlist = (yyvsp[0].Node)->nextlist;
																									(yyval.Node)->continuelist = (yyvsp[0].Node)->continuelist;
																									(yyval.Node)->breaklist = (yyvsp[0].Node)->breaklist;

																									(yyval.Node)->place = (yyvsp[0].Node)->place;
																								}
#line 4351 "parser.tab.c"
    break;

  case 163:
#line 1892 "parser.y"
                                                                                                                                                                        {	
																									(yyval.Node) = new_2_node("CASE", (yyvsp[-2].Node), (yyvsp[0].Node));

																									(yyval.Node)->nextlist = merging((yyvsp[-2].Node)->nextlist, (yyvsp[0].Node)->nextlist);
																									(yyval.Node)->truelist = (yyvsp[0].Node)->truelist;
																									(yyval.Node)->falselist = (yyvsp[0].Node)->falselist;
																									(yyval.Node)->breaklist = (yyvsp[0].Node)->breaklist;
																									(yyval.Node)->continuelist = (yyvsp[0].Node)->continuelist;

																								}
#line 4366 "parser.tab.c"
    break;

  case 164:
#line 1903 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = new_1_node("DEFAULT", (yyvsp[0].Node));

																									(yyval.Node)->nextlist = (yyvsp[0].Node)->nextlist;
																									(yyval.Node)->truelist = (yyvsp[0].Node)->truelist;
																									(yyval.Node)->falselist = (yyvsp[0].Node)->falselist;
																									(yyval.Node)->breaklist = (yyvsp[0].Node)->breaklist;
																									(yyval.Node)->continuelist = (yyvsp[0].Node)->continuelist;
																								}
#line 4379 "parser.tab.c"
    break;

  case 165:
#line 1914 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = NULL;	}
#line 4385 "parser.tab.c"
    break;

  case 166:
#line 1915 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[-1].Node);	}
#line 4391 "parser.tab.c"
    break;

  case 167:
#line 1916 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[-1].Node);	}
#line 4397 "parser.tab.c"
    break;

  case 168:
#line 1917 "parser.y"
                                                                                                                                                        {	if((yyvsp[-2].Node))
																									{
																										(yyval.Node) = new_2_node("INIT_LIST--STATEMENT_LIST", (yyvsp[-2].Node), (yyvsp[-1].Node));
																									}
																									else
																									{
																										(yyval.Node) = new_2_node("compound_statement",(yyvsp[-2].Node),(yyvsp[-1].Node));
																									}
																								}
#line 4411 "parser.tab.c"
    break;

  case 169:
#line 1930 "parser.y"
                                                                                                                                                                                                {
																									type_var = "";
																									num_scopes++;
																									curr_scope = num_scopes;
																									scope_st.push(curr_scope);
																								}
#line 4422 "parser.tab.c"
    break;

  case 170:
#line 1940 "parser.y"
                                                                                                                                                                                                {
																									scope_st.pop();
																									curr_scope = scope_st.top();
																								}
#line 4431 "parser.tab.c"
    break;

  case 171:
#line 1947 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4437 "parser.tab.c"
    break;

  case 172:
#line 1948 "parser.y"
                                                                                                                                                                {	(yyval.Node) = new_2_node("declaration_list", (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 4443 "parser.tab.c"
    break;

  case 173:
#line 1952 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);
																									(yyval.Node)->nextlist = merging( (yyvsp[0].Node)->nextlist, merging((yyvsp[0].Node)->truelist, (yyvsp[0].Node)->falselist));
																								}
#line 4451 "parser.tab.c"
    break;

  case 174:
#line 1956 "parser.y"
                                                                                                                                                                        {	
																										(yyval.Node) = new_2_node( "statement_list" , (yyvsp[-2].Node), (yyvsp[0].Node));
																										backpatch( (yyvsp[-2].Node)->nextlist , (yyvsp[-1].instr) );

																										(yyval.Node)->continuelist = merging((yyvsp[-2].Node)->continuelist, (yyvsp[0].Node)->continuelist);
																										(yyval.Node)->breaklist=merging((yyvsp[0].Node)->breaklist, (yyvsp[-2].Node)->breaklist);
																										(yyval.Node)->nextlist = merging((yyvsp[0].Node)->nextlist, merging((yyvsp[0].Node)->truelist, (yyvsp[0].Node)->falselist));
																										
																									}
#line 4465 "parser.tab.c"
    break;

  case 175:
#line 1968 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = NULL;	}
#line 4471 "parser.tab.c"
    break;

  case 176:
#line 1969 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = (yyvsp[-1].Node);	}
#line 4477 "parser.tab.c"
    break;

  case 177:
#line 1974 "parser.y"
                                                                                        {	
															(yyval.Node) = new_2_node("IF", (yyvsp[-3].Node), (yyvsp[0].Node));
															backpatch( (yyvsp[-3].Node)->truelist , (yyvsp[-1].instr));

															(yyval.Node)->nextlist = merging( (yyvsp[-3].Node)->falselist , (yyvsp[0].Node)->nextlist);
															
														}
#line 4489 "parser.tab.c"
    break;

  case 178:
#line 1981 "parser.y"
                                                                {
															(yyval.Node) = new_3_node("IF", (yyvsp[-7].Node), (yyvsp[-4].Node), new_1_node("ELSE", (yyvsp[0].Node)));
															
															backpatch((yyvsp[-7].Node)->truelist , (yyvsp[-5].instr));
															backpatch((yyvsp[-7].Node)->falselist , (yyvsp[-1].instr));

															(yyval.Node)->nextlist = merging((yyvsp[-4].Node)->nextlist , (yyvsp[-3].Node)->nextlist);
															(yyval.Node)->nextlist = merging((yyval.Node)->nextlist , (yyvsp[0].Node)->nextlist);

															}
#line 4504 "parser.tab.c"
    break;

  case 179:
#line 1991 "parser.y"
                                                                                        {
																(yyval.Node) = new_2_node("SWITCH-CASE", (yyvsp[-2].Node), (yyvsp[0].Node));
																(yyval.Node)->nextlist=merging((yyvsp[0].Node)->nextlist , (yyvsp[0].Node)->breaklist);
															}
#line 4513 "parser.tab.c"
    break;

  case 180:
#line 1998 "parser.y"
                        {
						(yyval.Node)=(yyvsp[0].Node);
						switch_opd = (yyvsp[0].Node)->place;
					}
#line 4522 "parser.tab.c"
    break;

  case 181:
#line 2005 "parser.y"
                                {
							(yyval.Node) = (yyvsp[0].Node);
							
							(yyval.Node)->truelist = makelist(instruction_num);
							(yyval.Node)->truelist = merging((yyval.Node)->truelist,(yyvsp[0].Node)->truelist);
							// if var_0 != 0 goto ___
							emit(IF_opd , "!=" , (yyvsp[0].Node)->place , GOTO_opd , -1);
																
							(yyval.Node)->falselist = makelist(instruction_num);
							(yyval.Node)->falselist = merging((yyval.Node)->falselist , (yyvsp[0].Node)->falselist);
							// goto ___
							emit(GOTO_opd , "" , empty_opd , empty_opd , -1);
						}
#line 4540 "parser.tab.c"
    break;

  case 182:
#line 2021 "parser.y"
                                        {
									(yyval.Node)=(yyvsp[0].Node);
									
									(yyval.Node)->truelist = makelist(instruction_num);
									(yyval.Node)->truelist = merging((yyval.Node)->truelist , (yyvsp[0].Node)->truelist);
									// if var_0 != 0 goto ___
									emit(IF_opd , "!=" , (yyvsp[0].Node)->place , GOTO_opd , -1);
																		
									(yyval.Node)->falselist = makelist(instruction_num);
									(yyval.Node)->falselist = merging((yyval.Node)->falselist , (yyvsp[0].Node)->falselist);
									// goto ___
									emit(GOTO_opd, "", empty_opd, empty_opd, -1);
								}
#line 4558 "parser.tab.c"
    break;

  case 183:
#line 2038 "parser.y"
                                                                                                                                                        {(yyval.Node)=new_2_node("NEW", (yyvsp[-3].Node), new_leaf_node((yyvsp[-1].Str)));}
#line 4564 "parser.tab.c"
    break;

  case 184:
#line 2039 "parser.y"
                                                                                                                                                                        {(yyval.Node)=new_2_node("NEW", (yyvsp[0].Node), NULL);}
#line 4570 "parser.tab.c"
    break;

  case 185:
#line 2043 "parser.y"
                                                                                                                                                                {(yyval.Node)=new_1_node("DELETE", new_leaf_node((yyvsp[-1].Str)));}
#line 4576 "parser.tab.c"
    break;

  case 186:
#line 2044 "parser.y"
                                                                                                                                                                {(yyval.Node)=new_1_node("DELETE", new_leaf_node((yyvsp[-3].Str)));}
#line 4582 "parser.tab.c"
    break;

  case 187:
#line 2048 "parser.y"
                                                                                                                                                                {
																									(yyval.Node) = new_2_Stringval_node("PRINTF", new_leaf_node((yyvsp[-2].Str)), NULL);
																									// printf stringval
																									emit(PRINTF_opd, "", opd((yyvsp[-2].Str)), empty_opd, instruction_num);
																								}
#line 4592 "parser.tab.c"
    break;

  case 188:
#line 2053 "parser.y"
                                                                                                                                        {
																									(yyval.Node) = new_2_Stringval_node("PRINTF", new_leaf_node((yyvsp[-4].Str)), (yyvsp[-2].Node));
																									emit(PRINTF_opd, "", opd((yyvsp[-4].Str)), zero_opd, instruction_num);
																								}
#line 4601 "parser.tab.c"
    break;

  case 189:
#line 2059 "parser.y"
                                                                                                                                {
																									(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									printf_helpers.push_back((yyvsp[0].Str));
																								}
#line 4610 "parser.tab.c"
    break;

  case 190:
#line 2063 "parser.y"
                                                                                                                {
																									(yyval.Node) = new_2_node(",", new_leaf_node((yyvsp[-2].Str)),(yyvsp[0].Node));
																									printf_helpers.push_back((yyvsp[-2].Str));
																								}
#line 4619 "parser.tab.c"
    break;

  case 191:
#line 2067 "parser.y"
                                                                                                                {
																									(yyval.Node) = new_2_node("[]", new_leaf_node((yyvsp[-3].Str)), new_leaf_node((yyvsp[-1].Str)));
																								}
#line 4627 "parser.tab.c"
    break;

  case 192:
#line 2070 "parser.y"
                                                                                                                {(yyval.Node) = new_3_node("[]",new_leaf_node((yyvsp[-5].Str)),new_leaf_node((yyvsp[-3].Str)),(yyvsp[0].Node));}
#line 4633 "parser.tab.c"
    break;

  case 193:
#line 2074 "parser.y"
                                                                                                                                                {
																									(yyval.Node) = new_2_Stringval_node("SCANF", new_leaf_node((yyvsp[-4].Str)), (yyvsp[-2].Node));
																									emit(SCANF_opd, "", opd((yyvsp[-4].Str)), zero_opd, instruction_num);
																								}
#line 4642 "parser.tab.c"
    break;

  case 194:
#line 2081 "parser.y"
                                                                                                    {(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									scanf_helpers.push_back((yyvsp[0].Str));
																								}
#line 4650 "parser.tab.c"
    break;

  case 195:
#line 2084 "parser.y"
                                                                                                    {(yyval.Node) = new_2_node(",", new_leaf_node((yyvsp[-2].Str)),(yyvsp[0].Node));
																									scanf_helpers.push_back((yyvsp[-2].Str));
																								}
#line 4658 "parser.tab.c"
    break;

  case 196:
#line 2090 "parser.y"
                                                                                                                                                        {
																								(yyval.Node) = new_2_node("WHILE", (yyvsp[-3].Node), (yyvsp[0].Node));
																								
																								backpatch((yyvsp[0].Node)->continuelist , (yyvsp[-5].instr));
																								backpatch((yyvsp[-3].Node)->truelist , (yyvsp[-1].instr));

																								(yyval.Node)->nextlist = merging( (yyvsp[-3].Node)->falselist , (yyvsp[0].Node)->breaklist);
																								// goto ___
																								emit(GOTO_opd , "" , empty_opd , empty_opd , (yyvsp[-5].instr));
																							}
#line 4673 "parser.tab.c"
    break;

  case 197:
#line 2100 "parser.y"
                                                                                                                                                {
																								(yyval.Node) = new_2_node("DO-WHILE", (yyvsp[-7].Node), (yyvsp[-3].Node));
																								
																								backpatch( (yyvsp[-2].Node)->nextlist, (yyvsp[-8].instr));
																								backpatch( (yyvsp[-7].Node)->continuelist, (yyvsp[-4].instr));
																								backpatch( (yyvsp[-3].Node)->truelist, (yyvsp[-2].Node)->instruction_number);

																								(yyval.Node)->nextlist = merging( (yyvsp[-7].Node)->breaklist, (yyvsp[-3].Node)->falselist);
																								
																							}
#line 4688 "parser.tab.c"
    break;

  case 198:
#line 2110 "parser.y"
                                                                                                                                {
																								(yyval.Node) = new_2_node("FOR", new_3_node("CONTROL_STATEMENTS", (yyvsp[-5].Node), (yyvsp[-3].Node), NULL), (yyvsp[0].Node));
																								
																								backpatch((yyvsp[0].Node)->nextlist,(yyvsp[-4].instr));
																								backpatch((yyvsp[0].Node)->continuelist,(yyvsp[-4].instr));

																								(yyval.Node)->nextlist=merging((yyvsp[0].Node)->breaklist,(yyvsp[-3].Node)->falselist);

																								backpatch((yyvsp[-3].Node)->truelist,(yyvsp[-1].instr));
																								// goto ____
																								emit(GOTO_opd,"",empty_opd,empty_opd, (yyvsp[-4].instr));
																							}
#line 4705 "parser.tab.c"
    break;

  case 199:
#line 2122 "parser.y"
                                                                                                                        {
																								(yyval.Node) = new_2_node("FOR", new_3_node("CONTROL_STATEMENTS", (yyvsp[-8].Node), (yyvsp[-6].Node), (yyvsp[-4].Node)), (yyvsp[0].Node));
																								
																								backpatch( (yyvsp[0].Node)->nextlist , (yyvsp[-5].instr));
																								backpatch( (yyvsp[0].Node)->continuelist , (yyvsp[-5].instr));

																								(yyval.Node)->nextlist = merging( (yyvsp[-6].Node)->falselist , (yyvsp[0].Node)->breaklist );
																								backpatch( (yyvsp[-6].Node)->truelist , (yyvsp[-1].instr));
																								backpatch( (yyvsp[-3].Node)->nextlist , (yyvsp[-7].instr));
																								// goto ___
																								emit( GOTO_opd , "" , empty_opd , empty_opd, (yyvsp[-5].instr));
																							}
#line 4722 "parser.tab.c"
    break;

  case 200:
#line 2138 "parser.y"
                                        {
									(yyval.Node) = new_1_node("GOTO", new_leaf_node((yyvsp[-1].Str)));

									if( label_tabel.find((yyvsp[-1].Str)) != label_tabel.end()){
										auto label = label_tabel.find((yyvsp[-1].Str));
										// goto ___
										emit(GOTO_opd, "", empty_opd, empty_opd, label->second);
									}
									else{
										yyerror("Label does not exist");
									}
								}
#line 4739 "parser.tab.c"
    break;

  case 201:
#line 2150 "parser.y"
                                                {
									(yyval.Node) = new_leaf_node("CONTINUE");

									(yyval.Node)->continuelist=makelist(instruction_num);
									// goto ___
									emit(GOTO_opd,"",empty_opd,empty_opd,-1);
								
								}
#line 4752 "parser.tab.c"
    break;

  case 202:
#line 2158 "parser.y"
                                                        {
									(yyval.Node) = new_leaf_node("BREAK");

									(yyval.Node)->breaklist=makelist(instruction_num);
									// goto ___
									emit(GOTO_opd,"",empty_opd,empty_opd,-1);
								}
#line 4764 "parser.tab.c"
    break;

  case 203:
#line 2165 "parser.y"
                                                {
									(yyval.Node) = new_1_node("RETURN", NULL);
									// return
									emit(return_opd,"",empty_opd,empty_opd,-1);
								}
#line 4774 "parser.tab.c"
    break;

  case 204:
#line 2170 "parser.y"
                                        {
									(yyval.Node) = new_1_node("RETURN", (yyvsp[-1].Node));
									// return var_0
									emit(return_opd, "", (yyvsp[-1].Node)->place, empty_opd,-1);
								}
#line 4784 "parser.tab.c"
    break;

  case 205:
#line 2178 "parser.y"
                                                                                                                                                                        {
																									
																								}
#line 4792 "parser.tab.c"
    break;

  case 206:
#line 2184 "parser.y"
                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node); 
																									type_var = "";
																								}
#line 4800 "parser.tab.c"
    break;

  case 207:
#line 2187 "parser.y"
                                                                                                                                                        {	(yyval.Node) = new_2_node("<>", (yyvsp[-2].Node), (yyvsp[0].Node));
																									type_var = "";
																								}
#line 4808 "parser.tab.c"
    break;

  case 208:
#line 2194 "parser.y"
                                                                                                                                                                        {(yyval.Node) = (yyvsp[0].Node);}
#line 4814 "parser.tab.c"
    break;

  case 209:
#line 2195 "parser.y"
                                                                                                                                                                                {(yyval.Node) = (yyvsp[0].Node);}
#line 4820 "parser.tab.c"
    break;

  case 210:
#line 2196 "parser.y"
                                                                                                                                                                {(yyval.Node) = (yyvsp[0].Node);}
#line 4826 "parser.tab.c"
    break;

  case 211:
#line 2200 "parser.y"
                                                                                                                                                        {
																									(yyval.Node) = new_2_node("STRUCT", (yyvsp[-5].Node), (yyvsp[-2].Node));
																									(yyval.Node)->size = (yyvsp[-2].Node)->size;
																								}
#line 4835 "parser.tab.c"
    break;

  case 212:
#line 2207 "parser.y"
                                                                                                                                        {(yyval.Node) = new_3_node("function_definition",(yyvsp[-2].Node),(yyvsp[-1].Node),(yyvsp[0].Node));}
#line 4841 "parser.tab.c"
    break;

  case 213:
#line 2208 "parser.y"
                                                                                                                                                                {(yyval.Node) = new_2_node("function_definition",(yyvsp[-1].Node), (yyvsp[0].Node));}
#line 4847 "parser.tab.c"
    break;


#line 4851 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp);
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
  return yyresult;
}
#line 2211 "parser.y"


extern char yytext[];

stack<int> scope_st;
int curr_scope = 0;
int num_scopes = 0;

string type_var;
string struct_name;	// for struct name
unordered_map <string, sym_table_t*> struct_symbol_tables;
string func_params;
vector<opd> param_place;
vector<string> printf_helpers;
vector<string> scanf_helpers;
string func_args;

sym_table_t sym_table;
unordered_map <int,sym_table_t*> global_scope_table;

// global
unordered_map <string,tEntry*> GST;
unordered_map <int,string> entry_map;
unordered_map <string,string> FUNC_PARAM;
unordered_map<string,int> label_tabel;
sym_table_t *curr;

// offsets
long offset=0;
long struct_offset=0;

int yyerror(const string& s) {
		cout << "ERROR: Line number " << line << ": " << s << "\n";
       	return 0;
}

int main(int argc, char *argv[]) 
{

	FILE* input;
    if (argc != 4) {
        cout << "Usage from src directory: ./bin/parser <inputfile> -o <.dot file>\n";
        exit(1);
    }

	input = fopen(argv[1], "r");
    if (input == NULL) {
        cout << "Cannot open file: %s.\n", argv[1];
        exit(1);
    }

	yyin = input;
	
	// starting scope
	scope_st.push(0);
	init_symtable();
	initialise();
    init_basic_func();


	// for writing in dotfile
	ast_output.open(argv[3], fstream::out);
	ast_output << "digraph tree {\n" ;
	yyparse();
    ast_output << "}";
	ast_output.close();


	// for dumping symtable
	dump_symtable();


	// memory clear
	FUNC_PARAM.clear();
	global_scope_table.clear();
	GST.clear();
	entry_map.clear();

	dump_emit_list();
//	print_asm("codegem.asm");

    return 0;
}
