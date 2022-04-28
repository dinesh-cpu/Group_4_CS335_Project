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
#include "parser.tab.h"
#include "ast.h"
#include "type_checking.h"

using namespace std;

extern int line;
fstream ast_output;

int yyerror(const string&);
int yylex();

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
#line 18 "parser.y"

	int line_num;
    char *Str;
    struct node* Node;

#line 202 "parser.tab.c"

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
#define YYLAST   944

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  217
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  389

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
       0,    61,    61,    76,    99,   108,   125,   131,   132,   180,
     211,   274,   310,   322,   355,   390,   411,   428,   429,   472,
     512,   569,   579,   588,   592,   596,   600,   604,   608,   615,
     630,   642,   643,   676,   709,   740,   741,   765,   797,   798,
     822,   848,   849,   883,   915,   948,   986,   987,  1019,  1053,
    1054,  1085,  1086,  1115,  1116,  1157,  1158,  1201,  1217,  1223,
    1224,  1274,  1289,  1290,  1329,  1340,  1341,  1419,  1423,  1427,
    1431,  1435,  1439,  1443,  1447,  1454,  1455,  1461,  1465,  1465,
    1466,  1466,  1470,  1471,  1472,  1473,  1477,  1478,  1482,  1509,
    1554,  1558,  1562,  1566,  1570,  1574,  1579,  1584,  1589,  1594,
    1599,  1604,  1609,  1616,  1623,  1631,  1632,  1639,  1639,  1646,
    1647,  1654,  1669,  1676,  1686,  1693,  1701,  1707,  1713,  1719,
    1719,  1773,  1773,  1789,  1789,  1807,  1810,  1817,  1821,  1822,
    1822,  1826,  1836,  1837,  1841,  1842,  1846,  1847,  1851,  1852,
    1853,  1857,  1858,  1859,  1860,  1861,  1862,  1863,  1864,  1865,
    1869,  1870,  1871,  1872,  1876,  1877,  1881,  1882,  1883,  1884,
    1885,  1886,  1887,  1888,  1889,  1893,  1897,  1901,  1907,  1908,
    1909,  1910,  1914,  1918,  1922,  1923,  1927,  1931,  1943,  1944,
    1949,  1956,  1966,  1972,  1988,  2005,  2006,  2010,  2011,  2015,
    2020,  2027,  2031,  2035,  2038,  2042,  2049,  2052,  2058,  2068,
    2078,  2090,  2106,  2118,  2126,  2133,  2138,  2146,  2152,  2155,
    2155,  2162,  2163,  2164,  2168,  2168,  2175,  2176
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
  "constant_expression", "declaration", "$@1", "$@2",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_specifier", "S1",
  "struct_declaration_list", "struct_declaration", "$@3",
  "specifier_qualifier_list", "struct_declarator_list", "declarator",
  "direct_declarator", "$@4", "$@5", "$@6", "pointer",
  "parameter_type_list", "parameter_list", "$@7", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement", "C1", "C2",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "E1", "E2", "new_stmt", "delete_stmt",
  "printf_stmt", "printf_helper", "scanf_stmt", "scanf_helper",
  "iteration_statement", "jump_statement", "program", "translation_unit",
  "$@8", "external_declaration", "external_struct_declaration", "$@9",
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

#define YYPACT_NINF (-344)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-208)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     881,    59,    33,  -344,  -344,  -344,  -344,  -344,  -344,  -344,
    -344,  -344,  -344,  -344,  -344,    47,  -344,  -344,    33,   506,
     506,  -344,    67,   114,    55,    90,   109,  -344,  -344,  -344,
    -344,   115,   103,  -344,   135,   108,  -344,    79,   168,  -344,
    -344,   155,  -344,   364,    20,   577,   114,  -344,   881,  -344,
     187,  -344,    33,   182,    48,  -344,  -344,  -344,  -344,  -344,
    -344,  -344,  -344,   520,  -344,  -344,   206,  -344,  -344,  -344,
     744,   744,   770,   207,   217,   211,   150,  -344,   222,   223,
     212,   603,   225,  -344,   799,   227,   228,  -344,   181,   144,
     770,  -344,   208,    95,   116,    61,   139,   238,   240,   243,
     209,   213,     6,    12,  -344,  -344,   178,  -344,    33,  -344,
    -344,  -344,   286,   231,  -344,  -344,  -344,  -344,  -344,  -344,
    -344,   506,   229,   239,  -344,  -344,  -344,  -344,   232,  -344,
     804,  -344,   248,  -344,    48,   804,  -344,  -344,  -344,    75,
     804,    58,   245,   442,   770,  -344,  -344,   249,  -344,   442,
    -344,   246,   237,   442,   634,   770,   242,  -344,   184,   770,
     250,   520,  -344,   241,   244,   660,   770,   247,   252,  -344,
    -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,   770,
    -344,   770,   770,   770,   770,   770,   770,   770,   770,   770,
     770,   770,   770,   770,   770,   770,   770,  -344,  -344,  -344,
    -344,   770,  -344,  -344,  -344,   231,   442,  -344,   106,   254,
     251,  -344,  -344,    87,  -344,  -344,   350,  -344,    33,  -344,
     153,   255,  -344,  -344,   832,   689,   161,  -344,   173,   770,
    -344,   442,  -344,   253,  -344,   192,  -344,   256,   257,  -344,
    -344,    88,   770,   265,   258,   143,  -344,   148,  -344,    16,
    -344,  -344,  -344,  -344,  -344,  -344,   208,   208,    95,    95,
     116,   116,   116,   116,    61,    61,   139,   238,   240,   770,
     770,   770,  -344,  -344,  -344,   817,  -344,    22,  -344,  -344,
    -344,  -344,   261,   260,  -344,   263,  -344,  -344,   471,   266,
    -344,   267,   274,  -344,   276,   173,   865,   715,  -344,  -344,
     275,   288,   634,  -344,   442,   292,  -344,   302,   285,   290,
    -344,   770,  -344,   243,   256,   209,   506,  -344,  -344,    33,
     287,  -344,  -344,   298,  -344,  -344,  -344,  -344,   306,  -344,
     301,  -344,  -344,  -344,   308,   442,  -344,  -344,   299,   309,
    -344,    30,   313,  -344,   314,  -344,  -344,  -344,  -344,  -344,
    -344,   770,  -344,   770,   259,   442,   304,   307,   319,   290,
     310,  -344,  -344,   442,   256,   283,  -344,   302,  -344,   311,
    -344,  -344,   770,   334,  -344,   335,  -344,  -344,   346,  -344,
     336,  -344,   442,   290,  -344,   442,  -344,  -344,  -344
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   125,     0,   115,    94,    92,    93,    95,    96,    99,
     100,   101,    97,    98,    91,     0,    90,   212,    78,    82,
      84,   102,     0,   114,     0,     0,   209,   208,   213,   211,
     126,     0,   103,   214,     0,    80,    86,    88,     0,    83,
      85,   172,   217,     0,   119,     0,   113,     1,     0,   116,
       0,    79,     0,     0,     0,   216,   103,   168,    27,    23,
      25,    26,    24,     0,    28,   178,     2,     5,     3,     4,
       0,     0,     0,     0,     0,     0,     0,    58,     0,     0,
       0,     0,     0,    58,     0,     0,     0,     7,    17,    29,
       0,    31,    35,    38,    41,    46,    49,    51,    53,    55,
      59,     0,    62,     0,    65,    75,     0,   174,    78,   176,
     156,   157,     0,    58,   158,   159,   164,   162,   163,   160,
     161,     0,     0,     0,   118,     2,    29,    77,     0,   210,
       0,    87,    88,    81,     0,     0,   150,    89,   151,     0,
     110,   136,     0,     0,     0,    19,    18,     0,   203,     0,
     204,     0,     0,     0,     0,     0,     0,   205,     0,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,    14,
      13,    67,    68,    69,    72,    70,    74,    71,    73,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,    58,    58,
     179,     0,   173,   175,   170,    58,     0,   169,   133,     0,
     127,   128,   134,     0,   124,   117,     0,   105,     0,   154,
       0,   186,     6,   109,     0,     0,   138,   137,   139,     0,
     165,     0,   167,     0,   187,     0,    58,   183,     0,   202,
     206,     0,     0,     0,     0,     0,     9,     0,    15,     0,
      11,    12,    66,    33,    32,    34,    36,    37,    39,    40,
      43,    42,    45,    44,    47,    48,    50,    52,    54,     0,
       0,     0,    76,   171,   177,     0,   131,   138,   132,   120,
     129,   122,     0,     0,   106,   107,   111,   152,     0,     0,
     146,     0,     0,   142,     0,   140,     0,     0,    30,   166,
       0,     0,     0,    58,     0,     0,    22,     0,     0,     0,
      10,     0,     8,    56,    64,    60,     0,   135,   215,     0,
       0,   153,   155,     0,   147,   141,   143,   148,     0,   144,
       0,   188,    58,   184,    58,     0,   182,    58,     0,     0,
     189,   191,     0,    16,     0,   130,   112,   108,   185,   149,
     145,     0,    58,     0,   180,     0,   196,     0,     0,     0,
       0,    58,    64,     0,    64,     0,   198,     0,   195,     0,
     192,   190,     0,     0,   200,     0,    58,   197,   193,    63,
       0,    58,     0,     0,   199,     0,   181,   194,   201
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -344,  -344,  -344,  -344,   -45,  -344,   -71,    43,    28,    10,
      38,   179,   183,   180,   111,   110,  -344,   -74,  -344,  -344,
     -44,  -199,   -47,  -344,   -59,   -64,   -20,  -344,  -344,    14,
    -344,   332,  -344,   -46,  -344,  -344,  -344,   169,  -344,   -99,
    -344,     0,   -18,  -344,  -344,  -344,    11,  -111,  -344,  -344,
      70,  -344,   226,  -109,  -196,  -121,  -344,  -138,  -344,    32,
    -344,   -89,  -344,   278,  -134,  -344,  -221,  -344,  -344,  -344,
    -344,  -343,  -344,    21,  -344,  -344,  -344,  -344,  -344,   347,
    -344,  -344,  -344
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    87,    88,   247,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   206,   102,   103,
     104,   344,   105,   179,   106,   128,    17,    34,    53,   208,
      35,    36,    19,    20,    21,    33,   216,   217,   320,   141,
     285,    22,    23,   121,   122,   123,    24,   291,   210,   316,
     211,   213,   142,   292,   228,   137,   220,   109,   110,   111,
      43,   204,   112,   113,   114,   115,   238,   334,   138,   116,
     117,   342,   118,   339,   119,   120,    25,    26,    48,    27,
      28,    50,    29
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     126,   127,    31,   153,   139,   230,    46,   136,   147,   160,
     209,   232,    30,   219,    18,   235,   370,   140,    37,   180,
     236,   305,   158,   107,   207,   145,   146,   126,   127,   -61,
     295,   218,   227,    39,    40,   198,  -123,   275,   312,   162,
     387,   223,   201,   225,   -61,   126,     1,  -121,     2,     3,
     199,   358,   132,    58,    42,    59,   359,   108,    60,    61,
       3,    62,    18,    63,   188,   189,    64,   134,   274,    55,
       2,     1,     1,   224,    32,   125,    67,    68,    69,   225,
      70,   295,     3,    71,   140,   139,    41,   136,    54,   221,
      47,   222,   203,   299,   140,   190,   237,   191,    41,   278,
     241,   201,   139,   281,   304,   184,   185,   249,   132,  -207,
     253,   254,   255,   282,   201,   140,   273,   218,   248,     1,
     135,   275,  -104,   269,   270,   271,   108,   225,    84,    44,
     362,    49,   252,     3,    52,    45,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   226,   171,   272,   365,   186,   187,   298,   308,
      51,   294,   302,   373,   310,   375,   336,   322,   333,   309,
     140,   151,   192,   287,   311,    57,   224,   152,   193,   288,
     126,   127,   225,   237,   126,   328,   172,   173,   296,   174,
     175,   176,   177,   178,   297,    56,   165,   354,   260,   261,
     262,   263,   166,   200,   201,   167,   130,   133,   276,   240,
     201,   314,   168,   169,   258,   259,   170,   366,   286,   277,
     181,   182,   183,   143,   126,   374,   126,   256,   257,   335,
     264,   265,   148,   330,   149,   226,   150,   154,   155,   156,
     159,   136,   163,   164,   386,   194,   -57,   388,   195,   196,
     197,   202,   126,   127,   215,   214,   212,    54,   351,    46,
     353,   229,   234,   355,   343,   242,   231,   239,   233,   244,
     279,   301,   245,   303,   250,    31,   289,   280,   363,   251,
     300,   306,   201,   324,   307,   318,   277,   372,   317,   319,
     325,    58,   237,    59,   364,   323,    60,    61,   326,    62,
     331,    63,   382,   332,    64,    41,   202,   385,   337,   338,
     340,    65,   347,    66,    67,    68,    69,   341,    70,   346,
     348,    71,   349,   350,   352,   357,   356,   126,   379,   360,
     367,   361,   368,   378,   -64,   371,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    38,   369,    16,
     380,   381,    72,    73,    74,    75,    76,    77,   376,    78,
      79,   384,    80,    81,    82,    83,    84,    85,    86,    58,
     283,    59,   383,   266,    60,    61,   268,    62,   267,    63,
     313,   315,    64,    41,   131,   284,   345,   243,   377,    65,
     205,    66,    67,    68,    69,   129,    70,     0,     0,    71,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    38,     0,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    38,     0,    16,     0,     0,
      72,    73,    74,    75,    76,    77,     0,    78,    79,     0,
      80,    81,    82,    83,    84,    85,    86,    58,     0,    59,
       0,     0,    60,    61,     0,    62,     0,    63,     0,     0,
      64,    41,     0,     0,     0,     0,     0,    65,     0,    66,
      67,    68,    69,     0,    70,     0,    58,    71,    59,     0,
       0,    60,    61,     0,    62,     0,    63,     0,     0,    64,
     134,   321,     0,     0,     0,     0,     0,     0,   125,    67,
      68,    69,     0,    70,     0,     0,    71,     0,    72,    73,
      74,    75,    76,    77,     0,    78,    79,     0,    80,    81,
      82,    83,    84,    85,    86,    58,     0,    59,     0,     0,
      60,    61,     0,    62,     0,    63,     0,     0,    64,     0,
       0,     0,     0,   135,     0,     0,     0,   125,    67,    68,
      69,    84,    70,     0,     0,    71,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    38,     0,    16,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    38,    58,     0,    59,     0,     0,    60,    61,     0,
      62,     0,    63,     0,     0,    64,     0,     0,     0,   124,
      84,     0,     0,     0,   125,    67,    68,    69,    58,    70,
      59,     0,    71,    60,    61,     0,    62,     0,    63,     0,
       0,    64,     0,     0,     0,     0,     0,     0,   157,     0,
     125,    67,    68,    69,     0,    70,     0,     0,    71,    58,
       0,    59,     0,     0,    60,    61,     0,    62,     0,    63,
       0,     0,    64,     0,     0,     0,     0,    84,     0,    65,
       0,   125,    67,    68,    69,    58,    70,    59,     0,    71,
      60,    61,     0,    62,     0,    63,   246,     0,    64,     0,
       0,     0,     0,    84,     0,     0,     0,   125,    67,    68,
      69,     0,    70,     0,    58,    71,    59,     0,     0,    60,
      61,     0,    62,     0,    63,     0,     0,    64,     0,     0,
       0,   293,     0,     0,    84,     0,   125,    67,    68,    69,
      58,    70,    59,     0,    71,    60,    61,     0,    62,     0,
      63,     0,     0,    64,     0,     0,     0,   329,     0,     0,
      84,     0,   125,    67,    68,    69,     0,    70,     0,    58,
      71,    59,     0,     0,    60,    61,     0,    62,     0,   144,
       0,     0,    64,     0,     0,     0,     0,     0,     0,    84,
       0,   125,    67,    68,    69,    58,    70,    59,     0,    71,
      60,    61,     0,    62,     0,    63,     0,     0,    64,     0,
       0,     0,     0,     0,     0,    84,     0,   125,    67,    68,
      69,     0,    70,     0,    58,    71,    59,     0,     0,    60,
      61,     0,    62,     0,   161,     0,     0,    64,     0,     0,
       0,     0,     0,     0,    84,     0,   125,    67,    68,    69,
       1,    70,   275,   290,    71,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     3,     1,     0,   224,   290,     0,
      84,     0,     0,   225,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    38,     0,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    38,    84,
      16,   327,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    38,     1,    16,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    38,     0,    16,     0,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     0,    16
};

static const yytype_int16 yycheck[] =
{
      45,    45,     2,    77,    63,   143,    24,    54,    72,    83,
     121,   149,     1,   134,     0,   153,   359,    63,    18,    90,
     154,   242,    81,    43,   113,    70,    71,    72,    72,    23,
     226,   130,   141,    19,    20,    23,    16,    15,    22,    84,
     383,   140,    26,    21,    38,    90,    13,    27,    15,    27,
      38,    21,    52,     5,    22,     7,    26,    43,    10,    11,
      27,    13,    48,    15,     3,     4,    18,    19,   206,    37,
      15,    13,    13,    15,    27,    27,    28,    29,    30,    21,
      32,   277,    27,    35,   130,   144,    19,   134,     9,   135,
       0,    16,   112,   231,   140,    34,   155,    36,    19,   208,
     159,    26,   161,    16,    16,    10,    11,   166,   108,     0,
     181,   182,   183,    26,    26,   161,   205,   216,   165,    13,
      72,    15,    19,   197,   198,   199,   112,    21,    80,    15,
     351,    16,   179,    27,    26,    21,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   141,     9,   201,   354,    40,    41,   229,    16,
      25,   225,   236,   362,    16,   364,   304,   288,   302,    26,
     216,    21,    33,    20,    26,    20,    15,    27,    39,    26,
     225,   225,    21,   242,   229,   296,    42,    43,    15,    45,
      46,    47,    48,    49,    21,    27,    15,   335,   188,   189,
     190,   191,    21,    25,    26,    24,    19,    25,   208,    25,
      26,   270,    31,    32,   186,   187,    35,   355,   218,   208,
      12,    13,    14,    17,   269,   363,   271,   184,   185,   303,
     192,   193,    25,   297,    17,   224,    25,    15,    15,    27,
      15,   288,    15,    15,   382,     7,    37,   385,     8,     6,
      37,    20,   297,   297,    22,    16,    27,     9,   332,   277,
     334,    16,    25,   337,   311,    15,    17,    25,    22,    28,
      16,    79,    28,    16,    27,   275,    21,    26,   352,    27,
      27,    16,    26,    16,    26,    25,   275,   361,    27,    26,
      16,     5,   351,     7,   353,    29,    10,    11,    22,    13,
      25,    15,   376,    15,    18,    19,    20,   381,    16,     7,
      25,    25,    25,    27,    28,    29,    30,    27,    32,   319,
      22,    35,    16,    22,    16,    16,    27,   372,   372,    16,
      26,    17,    25,    22,    75,    25,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    29,    63,
      16,    16,    66,    67,    68,    69,    70,    71,    75,    73,
      74,    25,    76,    77,    78,    79,    80,    81,    82,     5,
      20,     7,    26,   194,    10,    11,   196,    13,   195,    15,
     269,   271,    18,    19,    52,   216,   316,   161,   367,    25,
     112,    27,    28,    29,    30,    48,    32,    -1,    -1,    35,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    63,    -1,    -1,
      66,    67,    68,    69,    70,    71,    -1,    73,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,     5,    -1,     7,
      -1,    -1,    10,    11,    -1,    13,    -1,    15,    -1,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    -1,    32,    -1,     5,    35,     7,    -1,
      -1,    10,    11,    -1,    13,    -1,    15,    -1,    -1,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    32,    -1,    -1,    35,    -1,    66,    67,
      68,    69,    70,    71,    -1,    73,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,     5,    -1,     7,    -1,    -1,
      10,    11,    -1,    13,    -1,    15,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    27,    28,    29,
      30,    80,    32,    -1,    -1,    35,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    63,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,     5,    -1,     7,    -1,    -1,    10,    11,    -1,
      13,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    22,
      80,    -1,    -1,    -1,    27,    28,    29,    30,     5,    32,
       7,    -1,    35,    10,    11,    -1,    13,    -1,    15,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    -1,    32,    -1,    -1,    35,     5,
      -1,     7,    -1,    -1,    10,    11,    -1,    13,    -1,    15,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    80,    -1,    25,
      -1,    27,    28,    29,    30,     5,    32,     7,    -1,    35,
      10,    11,    -1,    13,    -1,    15,    16,    -1,    18,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    32,    -1,     5,    35,     7,    -1,    -1,    10,
      11,    -1,    13,    -1,    15,    -1,    -1,    18,    -1,    -1,
      -1,    22,    -1,    -1,    80,    -1,    27,    28,    29,    30,
       5,    32,     7,    -1,    35,    10,    11,    -1,    13,    -1,
      15,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,    -1,
      80,    -1,    27,    28,    29,    30,    -1,    32,    -1,     5,
      35,     7,    -1,    -1,    10,    11,    -1,    13,    -1,    15,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    27,    28,    29,    30,     5,    32,     7,    -1,    35,
      10,    11,    -1,    13,    -1,    15,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    27,    28,    29,
      30,    -1,    32,    -1,     5,    35,     7,    -1,    -1,    10,
      11,    -1,    13,    -1,    15,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    27,    28,    29,    30,
      13,    32,    15,    16,    35,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    27,    13,    -1,    15,    16,    -1,
      80,    -1,    -1,    21,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    80,
      63,    16,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    13,    63,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    15,    27,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    63,   109,   112,   115,
     116,   117,   124,   125,   129,   159,   160,   162,   163,   165,
     129,   124,    27,   118,   110,   113,   114,   124,    61,   112,
     112,    19,   142,   143,    15,    21,   125,     0,   161,    16,
     164,    25,    26,   111,     9,   142,    27,    20,     5,     7,
      10,    11,    13,    15,    18,    25,    27,    28,    29,    30,
      32,    35,    66,    67,    68,    69,    70,    71,    73,    74,
      76,    77,    78,    79,    80,    81,    82,    84,    85,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   101,   102,   103,   105,   107,   109,   112,   140,
     141,   142,   145,   146,   147,   148,   152,   153,   155,   157,
     158,   126,   127,   128,    22,    27,    87,   103,   108,   162,
      19,   114,   124,    25,    19,    72,   105,   138,   151,   107,
     116,   122,   135,    17,    15,    87,    87,   108,    25,    17,
      25,    21,    27,   100,    15,    15,    27,    25,   107,    15,
     100,    15,    87,    15,    15,    15,    21,    24,    31,    32,
      35,     9,    42,    43,    45,    46,    47,    48,    49,   106,
      89,    12,    13,    14,    10,    11,    40,    41,     3,     4,
      34,    36,    33,    39,     7,     8,     6,    37,    23,    38,
      25,    26,    20,   109,   144,   146,   100,   144,   112,   130,
     131,   133,    27,   134,    16,    22,   119,   120,   122,   138,
     139,   116,    16,   122,    15,    21,   129,   136,   137,    16,
     140,    17,   140,    22,    25,   140,   147,   107,   149,    25,
      25,   107,    15,   135,    28,    28,    16,    86,   105,   107,
      27,    27,   105,    89,    89,    89,    90,    90,    91,    91,
      92,    92,    92,    92,    93,    93,    94,    95,    96,   100,
     100,   100,   105,   144,   140,    15,   124,   129,   136,    16,
      26,    16,    26,    20,   120,   123,   124,    20,    26,    21,
      16,   130,   136,    22,   108,   137,    15,    21,    89,   140,
      27,    79,   100,    16,    16,   149,    16,    26,    16,    26,
      16,    26,    22,    97,   107,    98,   132,    27,    25,    26,
     121,    20,   138,    29,    16,    16,    22,    16,   130,    22,
     108,    25,    15,   147,   150,   100,   140,    16,     7,   156,
      25,    27,   154,   105,   104,   133,   124,    25,    22,    16,
      22,   100,    16,   100,   140,   100,    27,    16,    21,    26,
      16,    17,   149,   100,   107,   104,   140,    26,    25,    29,
     154,    25,   100,   104,   140,   104,    75,   156,    22,   103,
      16,    16,   100,    26,    25,   100,   140,   154,   140
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
     106,   106,   106,   106,   106,   107,   107,   108,   110,   109,
     111,   109,   112,   112,   112,   112,   113,   113,   114,   114,
     115,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   117,   118,   119,   119,   121,   120,   122,
     122,   123,   123,   124,   124,   125,   125,   125,   125,   126,
     125,   127,   125,   128,   125,   129,   129,   130,   131,   132,
     131,   133,   133,   133,   134,   134,   135,   135,   136,   136,
     136,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     138,   138,   138,   138,   139,   139,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   141,   142,   142,
     142,   142,   143,   144,   145,   145,   146,   146,   147,   147,
     148,   148,   148,   149,   150,   151,   151,   152,   152,   153,
     153,   154,   154,   154,   154,   155,   156,   156,   157,   157,
     157,   157,   158,   158,   158,   158,   158,   159,   160,   161,
     160,   162,   162,   162,   164,   163,   165,   165
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
       1,     1,     1,     1,     1,     1,     3,     1,     0,     3,
       0,     4,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     2,     0,     4,     2,
       1,     1,     3,     2,     1,     1,     3,     4,     3,     0,
       5,     0,     5,     0,     4,     1,     2,     1,     1,     0,
       4,     2,     2,     1,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     1,     3,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     3,
       3,     4,     1,     1,     1,     2,     1,     3,     1,     2,
       6,    10,     5,     1,     1,     5,     2,     3,     5,     5,
       7,     1,     3,     4,     6,     7,     2,     4,     7,    10,
       8,    11,     3,     2,     2,     2,     3,     1,     1,     0,
       3,     1,     1,     1,     0,     7,     3,     2
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
#line 61 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = new_leaf_node((yyvsp[0].Str));	
																								tEntry* entry = lookup(scope_st,(yyvsp[0].Str));
																								if(entry == NULL){
																												(yyval.Node)->type = "NULLTYPE";
																												yyerror(string((yyvsp[0].Str)) + " is not declared");
																								}
																								else{
																									(yyval.Node)->size = entry->size;
																									(yyval.Node)->init = entry->init;
																									(yyval.Node)->type = entry->type;
																									(yyval.Node)->key = (yyval.Node)->s;
																									(yyval.Node)->isidentifier = 1;
																									(yyval.Node)->place = {(yyval.Node)->key,entry};	
																								}
																							}
#line 1920 "parser.tab.c"
    break;

  case 3:
#line 76 "parser.y"
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

																									(yyval.Node)->place = {(yyvsp[0].Str), NULL};
																								}
																								else {
																									// float
																									(yyval.Node)->val_type = 3;
																									(yyval.Node)->num = num;
																									(yyval.Node)->type = "float";

																									(yyval.Node)->place = {(yyvsp[0].Str), NULL};
																								}
																							}
#line 1948 "parser.tab.c"
    break;

  case 4:
#line 99 "parser.y"
                                                                                                                                                                        {
																								(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->init = 1;
																								(yyval.Node)->type = "char";
																																															
																								(yyval.Node)->place = {(yyvsp[0].Str), NULL};
																							}
#line 1961 "parser.tab.c"
    break;

  case 5:
#line 108 "parser.y"
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
																								
																								(yyval.Node)->place = {(yyvsp[0].Str), NULL};
																							}
#line 1983 "parser.tab.c"
    break;

  case 6:
#line 125 "parser.y"
                                                                                                                                        {
																								(yyval.Node)=(yyvsp[-1].Node);
																							}
#line 1991 "parser.tab.c"
    break;

  case 7:
#line 131 "parser.y"
                                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node); }
#line 1997 "parser.tab.c"
    break;

  case 8:
#line 132 "parser.y"
                                                                                                                                        {	
																							// printf("postfix called\n");
																							(yyval.Node) = new_2_node("[]", (yyvsp[-3].Node), (yyvsp[-1].Node));
																							// array
                                                                                            (yyval.Node)->flag = 1;
																				
																							if((yyvsp[-1].Node)->s.substr(0,1) == "-"){
																								yyerror( "Index of array " + (yyvsp[-3].Node)->key + " negative is invald.");

																							}
																							else{ 
																								tEntry* entry = lookup(scope_st, (yyvsp[-3].Node)->key);
																								if(entry){
																									(yyval.Node)->type = entry->type;
																								}
																								else{
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror((yyvsp[-3].Node)->key + " is not declared");
																								}

																								int curr_idx = stoi((yyvsp[-1].Node)->key);
																								int arr_length = entry->size/getSize(entry->type);

																								if(curr_idx >= arr_length){
																									yyerror("Array " + (yyvsp[-3].Node)->key + " index is out of bound.");
																								}
																								else{
																									(yyval.Node)->key = (yyvsp[-3].Node)->key;
																									(yyval.Node)->val_type = (yyvsp[-3].Node)->val_type;
																									if((yyvsp[-3].Node)->init == 1 && (yyvsp[-1].Node)->init == 1)
																										(yyval.Node)->init = 1;
	
																									// tmp_0 = n * size
																									string tmp_0 = ir_variable( (yyvsp[-1].Node)->type , offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize((yyvsp[-1].Node)->type) );
																									emit((yyvsp[-1].Node)->place, "*", {to_string(getSize((yyval.Node)->type)), NULL}, {tmp_0, tempen0}, emit_line);
	
																									// tmp_1 = arr + tmp_0
																									string tmp_1 = ir_variable((yyval.Node)->type + " *", offset, curr_scope);
																									tEntry* tempen1 = lookup(scope_st, tmp_1);
																									align_offset( getSize((yyval.Node)->type + " *") );
																									emit((yyvsp[-3].Node)->place , "+", {tmp_0, tempen0}, {tmp_1, tempen1}, emit_line );
																									(yyval.Node)->place = {tmp_1, tempen1};
																								}
																							}
																						}
#line 2049 "parser.tab.c"
    break;

  case 9:
#line 180 "parser.y"
                                                                                                                                                        {	
																								(yyval.Node) = new_1_node("()", (yyvsp[-2].Node));

																							 	tEntry* entry=lookup(scope_st,(yyvsp[-2].Node)->key);
																								if(entry){
																									(yyval.Node)->type = entry->type;
																									(yyval.Node)->key = (yyvsp[-2].Node)->key;
																									(yyval.Node)->val_type = (yyvsp[-2].Node)->val_type;
																									(yyval.Node)->num = (yyvsp[-2].Node)->num;
																									(yyval.Node)->init = (yyvsp[-2].Node)->init;

																									if(entry->type == ""){
																										yyerror("NULLTYPE function call.");
																									}

																									string funcname = (yyval.Node)->type+" "+(yyvsp[-2].Node)->key;
																									// FIND IS FUNCTION IS DECLARED
																									if(FUNC_PARAM.find(funcname) == FUNC_PARAM.end()){
																										yyerror("The Function " + (yyvsp[-2].Node)->key + " is not yet declared");
																									}
																									else{
																										emit({string("call"), NULL}, "", (yyvsp[-2].Node)->place, {"", NULL},-1);
																									}
																									// no function arguments
																									func_args="";
																								}
																								else{
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror((yyvsp[-2].Node)->key +  " is not yet declared");
																								}
																							}
#line 2085 "parser.tab.c"
    break;

  case 10:
#line 211 "parser.y"
                                                                                                                                {	
																								(yyval.Node) = new_2_node("()", (yyvsp[-3].Node),(yyvsp[-1].Node));
																							 	tEntry* entry = lookup(scope_st,(yyvsp[-3].Node)->key);

																								if(entry){
																									if((yyvsp[-3].Node)->init == 1 && (yyvsp[-1].Node)->init == 1)
																										(yyval.Node)->init = (yyvsp[-3].Node)->init;
																									(yyval.Node)->type = entry->type;
																									(yyval.Node)->key = (yyvsp[-3].Node)->key;
																									(yyval.Node)->val_type = (yyvsp[-3].Node)->val_type;
																									(yyval.Node)->num = (yyvsp[-3].Node)->num;
																									(yyval.Node)->place = {(yyvsp[-3].Node)->key,lookup(scope_st,(yyvsp[-3].Node)->key)};

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

																										// for(int i = 0; i<arg1.size(); i++){
																										// 	cout << "k: "<< arg1[i] << " "<< param1[i] << endl;
																										// }																								

																										if(arg1.size() == param1.size()){
                                                            								                for(int i = 0 ; i < param1.size() ;i++){
																											    if( param1[i].substr( 0, arg1[i].size()) != arg1[i]){
																											       yyerror("Invalid arguments");
																												}										
																												pair<string, tEntry*> parameters = {string("__argument"+to_string(i) + "__"), parameter_p[i].second};
																												emit( {"", NULL} , "" , parameter_p[i] , parameters , -1);
																											}
																											// call function
																											emit( {string("call"), NULL} , "" , (yyvsp[-3].Node)->place , { "", NULL} , -1);
																											parameter_p.clear();
																										}
																										else 
																											yyerror("Invalid number of arguments");
																									}
																								}
																								else{
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror((yyvsp[-3].Node)->key + " is not yet declared");
																								}
																							}
#line 2153 "parser.tab.c"
    break;

  case 11:
#line 274 "parser.y"
                                                                                                                                                        {	

																								(yyval.Node) = new_2_node("." , (yyvsp[-2].Node) , new_leaf_node((yyvsp[0].Str)));
																								tEntry* entry = lookup(scope_st,(yyvsp[-2].Node)->key);
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
																									
																									// tmp_0 = struct name + offset
																									string tmp_0 = ir_variable((yyval.Node)->type + " *",offset,curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize((yyval.Node)->type + " *") );
																									emit( (yyvsp[-2].Node)->place ,"+" , {to_string(struct_entry->offset), NULL} , {tmp_0, tempen0} , emit_line);
																									
																									(yyval.Node)->place = { tmp_0, tempen0};

																								}	

																								else{
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror((yyvsp[-2].Node)->key + " is not yet declared.");
																								}
																							}
#line 2193 "parser.tab.c"
    break;

  case 12:
#line 310 "parser.y"
                                                                                                                                        {
																								(yyval.Node) = new_2_node("->", (yyvsp[-2].Node), new_leaf_node((yyvsp[0].Str)));
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																								// ptr not supported
																								//if( isptr($1->type)){
																								// 	tEntry* entry = find_struct_entry(struct_name, $1->key);
																								//}
																								//else{
																								//	yyerror("This operation is not supported.");
																								//}
																							}
#line 2209 "parser.tab.c"
    break;

  case 13:
#line 322 "parser.y"
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
																									(yyval.Node)->type = "NULLTYPE";
																								    yyerror((yyvsp[-1].Node)->key + " doesn't have suitable type for increment operation");
																								}
																								// integer
																								else{
																								   	(yyval.Node)->type = typecheck;

																								   	string tmp_0 = ir_variable( (yyval.Node)->type, offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																								   	align_offset( getSize((yyval.Node)->type) );

																								   	(yyval.Node)->place = {tmp_0, tempen0};
																									// tmp_0 = variable
																								   	emit({ "", NULL} , "" , (yyvsp[-1].Node)->place , (yyval.Node)->place , emit_line);
																									// variable = tmp_0 + 1
																									emit((yyval.Node)->place, "+" , {string("1"), NULL} , (yyvsp[-1].Node)->place , emit_line);
																								}
																							}
#line 2247 "parser.tab.c"
    break;

  case 14:
#line 355 "parser.y"
                                                                                                                                                        {
																								(yyval.Node) = new_1_node("--", (yyvsp[-1].Node));
																								(yyval.Node)->key = (yyvsp[-1].Node)->key;
																								(yyval.Node)->val_type = (yyvsp[-1].Node)->val_type;
																								(yyval.Node)->num = (yyvsp[-1].Node)->num-1;
																								(yyval.Node)->init = (yyvsp[-1].Node)->init;
																								if((yyval.Node)->init != 1){
																									yyerror("First initialise the variable " + (yyvsp[-1].Node)->key);
																								}
																								(yyval.Node)->type = (yyvsp[-1].Node)->type;

																								string typecheck = postfix_expr((yyvsp[-1].Node) -> type);
																								// type is not integer
																								if(typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																								    yyerror((yyvsp[-1].Node)->key + " doesn't have suitable type for decrement operation");
																								}
																							
																								else{
																								   	(yyval.Node)->type = typecheck;

																								   	string tmp_0 = ir_variable( (yyval.Node)->type, offset , curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = {tmp_0, tempen0};
																									// tmp_0 = variable
																									emit({ "", NULL} ,"" , (yyvsp[-1].Node)->place , (yyval.Node)->place, emit_line);
																									// variable = tmp_0 + 1
																									emit((yyval.Node)->place , "-", {string("1"), NULL}, (yyvsp[-1].Node)->place, emit_line);
																								}
																							}
#line 2284 "parser.tab.c"
    break;

  case 15:
#line 390 "parser.y"
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
																								parameter_p.push_back((yyvsp[0].Node)->place);

																							}
#line 2310 "parser.tab.c"
    break;

  case 16:
#line 411 "parser.y"
                                                                                                                                {
																								(yyval.Node)=new_2_node(",", (yyvsp[-2].Node) , (yyvsp[0].Node));

																								func_args = func_args + " ," + (yyvsp[0].Node)->type;
																							 	(yyval.Node)->type = "";
																							 	if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1)
																								 	(yyval.Node)->init = 1;
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								(yyval.Node)->num = (yyvsp[-2].Node)->num + 1;
																								(yyval.Node)->val_type = (yyvsp[-2].Node)->val_type;
																								
																								parameter_p.push_back((yyvsp[0].Node)->place);

																							}
#line 2329 "parser.tab.c"
    break;

  case 17:
#line 428 "parser.y"
                                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node); }
#line 2335 "parser.tab.c"
    break;

  case 18:
#line 429 "parser.y"
                                                                                                                                                        {   
																								(yyval.Node) = new_1_node("++", (yyvsp[0].Node));
																								tEntry* entry = lookup( scope_st , (yyvsp[0].Node)->key );

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
																												 (yyval.Node)->type = "NULLTYPE";
																												 yyerror((yyvsp[0].Node)->key + " doesnot have suitable type for increment operation");
											 															}
																										else{
																											(yyval.Node)->type = typecheck;

																											string tmp_0 = ir_variable((yyval.Node)->type , offset ,  curr_scope);
																											tEntry* tempen0 = lookup(scope_st, tmp_0);
																											align_offset( getSize((yyval.Node)->type) );

																											(yyval.Node)->place = {tmp_0, tempen0};
																											// tmp_0 = variable + 1	
																											emit((yyvsp[0].Node)->place , "+" , {string("1"), NULL},  (yyval.Node)->place, emit_line);
																											// variable = tmp_0
																											emit({ "", NULL} , "", (yyval.Node)->place, (yyvsp[0].Node)->place, emit_line);
											 															}
																									}
																									
																								}
																							}
#line 2382 "parser.tab.c"
    break;

  case 19:
#line 472 "parser.y"
                                                                                                                                                        {	(yyval.Node) = new_1_node("--", (yyvsp[0].Node));
																								tEntry* entry=lookup(scope_st,(yyvsp[0].Node)->key);

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
																											(yyval.Node)->type = "NULLTYPE";
																											yyerror((yyvsp[0].Node)->key + " doesnot have suitable type for decrement operation");
																										}
																										else{
																											(yyval.Node)->type = typecheck;

																											string tmp_0 = ir_variable( (yyval.Node)->type , offset, curr_scope);
																											tEntry* tempen0 = lookup(scope_st, tmp_0);
																											align_offset( getSize((yyval.Node)->type) );

																											(yyval.Node)->place = {tmp_0, tempen0};	
																											// tmp_0 = variable + 1
																											emit((yyvsp[0].Node)->place, "-" , {string("1"), NULL} , (yyval.Node)->place , emit_line);
																											// variable = tmp_0
																											emit({ "", NULL}, "" , (yyval.Node)->place , (yyvsp[0].Node)->place , emit_line);  
																										}	
																									}
																								}
																							}
#line 2426 "parser.tab.c"
    break;

  case 20:
#line 512 "parser.y"
                                                                                                                                                {
																								make_children((yyvsp[-1].Node), (yyvsp[0].Node), NULL, NULL); 
																								(yyval.Node) = (yyvsp[-1].Node);
																								tEntry* entry=lookup(scope_st , (yyvsp[0].Node)->s);

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

											 														string typecheck = unary_expr((yyvsp[-1].Node)->s, (yyvsp[0].Node)->type);

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
																										string tmp_0 = ir_variable((yyval.Node)->type , offset,  curr_scope);
																										tEntry* tempen0 = lookup(scope_st, tmp_0);
																										align_offset( getSize((yyval.Node)->type) );

																										(yyval.Node)->place = {tmp_0, tempen0};
																										emit({ "", NULL} , (yyvsp[-1].Node)->s , (yyvsp[0].Node)->place , (yyval.Node)->place , emit_line);
																									}	
																								}
																							}
#line 2487 "parser.tab.c"
    break;

  case 21:
#line 569 "parser.y"
                                                                                                                                                                {	
																								(yyval.Node) = new_1_node("SIZEOF", (yyvsp[0].Node));
																							 	(yyval.Node)->type = "int";
																							 	(yyval.Node)->init = 1;
																								(yyval.Node)->num = (yyvsp[0].Node)->num;
																							 	(yyval.Node)->key = (yyvsp[0].Node)->key;
																								(yyval.Node)->val_type = (yyvsp[0].Node)->val_type;
																								
																							}
#line 2501 "parser.tab.c"
    break;

  case 22:
#line 579 "parser.y"
                                                                                                                                                                {
																								(yyval.Node) = new_1_node( "SIZEOF" , (yyvsp[-1].Node));
																								(yyval.Node)->type = "int";
																								(yyval.Node)->init = 1;
																								(yyval.Node)->key = (yyvsp[-1].Node)->key;
																							}
#line 2512 "parser.tab.c"
    break;

  case 23:
#line 588 "parser.y"
                                                                                                                                                                                { 	(yyval.Node) = new_1_node( "&" , NULL) ;
																							 	(yyval.Node)->key = (yyval.Node)->s ; 
																								(yyval.Node)->type="&" ; 
																							}
#line 2521 "parser.tab.c"
    break;

  case 24:
#line 592 "parser.y"
                                                                                                                                                                                { 	(yyval.Node) = new_1_node( "*" , NULL) ; 
																								(yyval.Node)->key = (yyval.Node)->s ; 
																								(yyval.Node)->type="*" ; 
																							}
#line 2530 "parser.tab.c"
    break;

  case 25:
#line 596 "parser.y"
                                                                                                                                                                                { 	(yyval.Node) = new_1_node( "+" , NULL) ; 
																								(yyval.Node)->key = (yyval.Node)->s ; 
																								(yyval.Node)->type="+" ; 
																							}
#line 2539 "parser.tab.c"
    break;

  case 26:
#line 600 "parser.y"
                                                                                                                                                                                { 	(yyval.Node) = new_1_node( "-" , NULL) ; 
																								(yyval.Node)->key = (yyval.Node)->s ; 
																								(yyval.Node)->type="-" ; 
																							}
#line 2548 "parser.tab.c"
    break;

  case 27:
#line 604 "parser.y"
                                                                                                                                                                                { 	(yyval.Node) = new_1_node( "~" , NULL) ; 
																								(yyval.Node)->key = (yyval.Node)->s ; 
																								(yyval.Node)->type="~" ; 
																							}
#line 2557 "parser.tab.c"
    break;

  case 28:
#line 608 "parser.y"
                                                                                                                                                                                { 	(yyval.Node) = new_1_node( "!" , NULL) ; 
																								(yyval.Node)->key = (yyval.Node)->s ; 
																								(yyval.Node)->type="!" ; 
																							}
#line 2566 "parser.tab.c"
    break;

  case 29:
#line 615 "parser.y"
                                                                                                                                                                        {
		 																						(yyval.Node) = (yyvsp[0].Node);

																								if((yyvsp[0].Node)->flag == 1){		
																									string tmp_0 = ir_variable( (yyvsp[0].Node)->type , offset , curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize( (yyvsp[0].Node)->type) );

																									emit({ "", NULL}, "*", (yyvsp[0].Node)->place, {tmp_0, tempen0}, emit_line);
																									(yyval.Node)->place = {tmp_0, tempen0};
																								}

																								// reset flag
																								(yyval.Node)->flag = 0;
																							}
#line 2586 "parser.tab.c"
    break;

  case 30:
#line 630 "parser.y"
                                                                                                                                {
		 																						(yyval.Node) =  new_2_node("CAST_EXPRESSION", (yyvsp[-2].Node), (yyvsp[0].Node));
	 																							(yyval.Node)->type = (yyvsp[-2].Node)->type;

																								if((yyvsp[0].Node)->init == 1){
																									(yyval.Node)->init = 1;
																								}
																								(yyval.Node)->key=(yyvsp[0].Node)->key;
														 									}
#line 2600 "parser.tab.c"
    break;

  case 31:
#line 642 "parser.y"
                                                                                                                        {(yyval.Node) = (yyvsp[0].Node);}
#line 2606 "parser.tab.c"
    break;

  case 32:
#line 643 "parser.y"
                                                                                                                        {
																								(yyval.Node) = new_2_node("*", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) {
																									(yyval.Node)->init=1;
																								}

																								string typecheck = multiplicative_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type, '*'); 
																								// cout<< typecheck<< endl;
																								if(typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror(" * operator will not be used");
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

																									string tmp_0 = ir_variable ( (yyval.Node)->type , offset , curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = {tmp_0, tempen0};	
																									// tmp_0 = exp * exp
																									emit( (yyvsp[-2].Node)->place , "*" , (yyvsp[0].Node)->place , (yyval.Node)->place , emit_line);
																								} 	
																							}
#line 2643 "parser.tab.c"
    break;

  case 33:
#line 676 "parser.y"
                                                                                                                        {	
																								(yyval.Node) = new_2_node("/", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) {
																									(yyval.Node)->init=1;
																								}

																								string typecheck = multiplicative_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type, '/'); 
																								if(typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror("/ operator is not applicable");
																								}
																								else{
																									if(typecheck == "int")
																										(yyval.Node)->type = "int";
																									else if( typecheck == "float")
																										(yyval.Node)->type = "float";
																									else 
																										(yyval.Node)->type = typecheck;
																									
																									string tmp_0 = ir_variable( (yyval.Node)->type, offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = {tmp_0, tempen0};
																									// tmp_0 = exp / exp
																									emit((yyvsp[-2].Node)->place, "/", (yyvsp[0].Node)->place, (yyval.Node)->place, emit_line);	
																								} 	
																							}
#line 2677 "parser.tab.c"
    break;

  case 34:
#line 709 "parser.y"
                                                                                                                        {	
																								(yyval.Node) = new_2_node("%", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1){
																									(yyval.Node)->init = 1;
																								} 

																								string typecheck = multiplicative_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type, '%'); 
																								if(typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror("% operator is not applicable");
																								}
																								else{
																									if(typecheck == "int"){
																										(yyval.Node)->type = "int";
																									}
																									else 
																										(yyval.Node)->type = typecheck;

																									string tmp_0 = ir_variable( (yyval.Node)->type ,offset ,curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = {tmp_0, tempen0};
																									// tmp_0 = exp % exp
																									emit((yyvsp[-2].Node)->place, "%" ,(yyvsp[0].Node)->place , (yyval.Node)->place ,emit_line);
																								}
																							}
#line 2710 "parser.tab.c"
    break;

  case 35:
#line 740 "parser.y"
                                                                                                                        {(yyval.Node) = (yyvsp[0].Node);}
#line 2716 "parser.tab.c"
    break;

  case 36:
#line 741 "parser.y"
                                                                                                                        {	
																								(yyval.Node) = new_2_node("+", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) {
																									(yyval.Node)->init=1;
																								}
																									
																								string typecheck = additive_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type,'+');
																								if(typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror("+ operator is not applicable");
																								}
																								else{
																									(yyval.Node)->type = typecheck;
																									string tmp_0 = ir_variable( (yyval.Node)->type, offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = {tmp_0, tempen0};
																									// tmp_0 = exp + exp
																									emit((yyvsp[-2].Node)->place, "+", (yyvsp[0].Node)->place, (yyval.Node)->place, emit_line);
																								} 
																								
																 							}
#line 2745 "parser.tab.c"
    break;

  case 37:
#line 765 "parser.y"
                                                                                                                        {
																								(yyval.Node) = new_2_node("-", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) {
																									(yyval.Node)->init=1;
																								}
																									
																								string typecheck = additive_expr((yyvsp[-2].Node)->type , (yyvsp[0].Node)->type, '-');
																								if(typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror("- operator is not applicable.");
																								}
																								else {
																									if( typecheck == "int")
																										(yyval.Node)->type = "int";
																									else if( typecheck == "float")
																										(yyval.Node)->type = "float";
																									else 
																										(yyval.Node)->type = typecheck;

																									string tmp=ir_variable((yyval.Node)->type,offset,curr_scope);
																									tEntry* tempen = lookup(scope_st, tmp);
																									align_offset(getSize((yyval.Node)->type));

																									(yyval.Node)->place = {tmp, tempen};	
																									// tmp_0 = exp - exp
																									emit((yyvsp[-2].Node)->place , "-" , (yyvsp[0].Node)->place , (yyval.Node)->place , emit_line);
																								}
																							}
#line 2779 "parser.tab.c"
    break;

  case 38:
#line 797 "parser.y"
                                                                                                                        { (yyval.Node) = (yyvsp[0].Node); }
#line 2785 "parser.tab.c"
    break;

  case 39:
#line 798 "parser.y"
                                                                                                                        {
																								(yyval.Node) = new_2_node("<<", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init ==1){
																									(yyval.Node)->init = 1;
																								}
																  								 	
																  								string typecheck = shift_expr( (yyvsp[-2].Node)->type , (yyvsp[0].Node)->type);
																  								if( typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																								 	yyerror("<< operator is not applicable");
																 								}
																								else{
																								  	(yyval.Node)->type = (yyvsp[-2].Node)->type;
																									string tmp_0 = ir_variable((yyval.Node)->type , offset , curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = {tmp_0, tempen0};
																									// tmp_0 = exp << exp
																									emit((yyvsp[-2].Node)->place,"<<", (yyvsp[0].Node)->place , (yyval.Node)->place , emit_line);
																 								}
																								
																 							}
#line 2814 "parser.tab.c"
    break;

  case 40:
#line 822 "parser.y"
                                                                                                                                {
																								(yyval.Node) = new_2_node(">>", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																   								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init ==1){
																									(yyval.Node)->init = 1;
																								}
																   									
																  								string typecheck = shift_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type);
																  								if(typecheck == ""){
																									  (yyval.Node)->type = "NULLTYPE";
																									  yyerror(">> operator is not applicable.");
																  								}
																								else{
																									(yyval.Node)->type = (yyvsp[-2].Node)->type;
																									string tmp_0 = ir_variable((yyval.Node)->type ,offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																		                 			align_offset( getSize((yyval.Node)->type) );

																		                 			(yyval.Node)->place = {tmp_0, tempen0};																												
																		                 			// tmp_0 = exp >> exp
																		                 			emit((yyvsp[-2].Node)->place,">>" , (yyvsp[0].Node)->place , (yyval.Node)->place , emit_line);
																  								}
																							}
#line 2842 "parser.tab.c"
    break;

  case 41:
#line 848 "parser.y"
                                                                                                                                                                {(yyval.Node) = (yyvsp[0].Node);}
#line 2848 "parser.tab.c"
    break;

  case 42:
#line 849 "parser.y"
                                                                                                                        {
																								(yyval.Node) = new_2_node("<", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1){
																									(yyval.Node)->init=1;
																								}

																								string typecheck = relational_expr((yyvsp[-2].Node)->type , (yyvsp[0].Node)->type);
																								if(typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror("< operator is not applicable");
																								}
																								else{
																									if( typecheck == "int"){
																										(yyval.Node)->type = "int";

																										string tmp_0 = ir_variable( (yyval.Node)->type,offset ,curr_scope);
																										tEntry* tempen0 = lookup(scope_st, tmp_0);
																										align_offset( getSize((yyval.Node)->type) );

																										(yyval.Node)->place = {tmp_0, tempen0};																												
																										// tmp_0 = exp < exp
																										emit((yyvsp[-2].Node)->place,"<",(yyvsp[0].Node)->place,(yyval.Node)->place,emit_line);	
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
#line 2887 "parser.tab.c"
    break;

  case 43:
#line 883 "parser.y"
                                                                                                                                        {	(yyval.Node) = new_2_node(">", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;	
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) 
																									(yyval.Node)->init=1;

																								string typecheck = relational_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																								if(typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																								  	yyerror("> operator is not applicable.");
																								}
																								else{
																									if(typecheck == "int"){
																										(yyval.Node)->type = "int";

																										string tmp_0 = ir_variable((yyval.Node)->type ,offset ,curr_scope);
																										tEntry* tempen0 = lookup(scope_st, tmp_0);
																										align_offset( getSize((yyval.Node)->type) );

																										(yyval.Node)->place = {tmp_0, tempen0};
																										// tmp_0 = exp > exp
																										emit((yyvsp[-2].Node)->place, ">", (yyvsp[0].Node)->place, (yyval.Node)->place, emit_line);
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
#line 2923 "parser.tab.c"
    break;

  case 44:
#line 915 "parser.y"
                                                                                                                {
																								(yyval.Node) = new_2_node("<=", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;	

																								string typecheck = relational_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																								if(typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																								  	yyerror("<= is not applicable.");
																								}
																								else{
																									if(typecheck == "int"){
																										(yyval.Node)->type = "int";

																										string tmp_0 = ir_variable((yyval.Node)->type, offset, curr_scope);
																										tEntry* tempen0 = lookup(scope_st, tmp_0);
																										align_offset( getSize((yyval.Node)->type) );

																										(yyval.Node)->place = {tmp_0, tempen0};
																										// tmp_0 = exp <= exp
																										emit((yyvsp[-2].Node)->place, "<=", (yyvsp[0].Node)->place, (yyval.Node)->place, emit_line);
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
#line 2961 "parser.tab.c"
    break;

  case 45:
#line 948 "parser.y"
                                                                                                                        {
																								(yyval.Node) = new_2_node(">=", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;

																								string typecheck = relational_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																								if( typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror(">= operator is not applicable");
																								}
																								else{
																									if( typecheck == "int"){
																										(yyval.Node)->type = "int";

																										string tmp_0 = ir_variable((yyval.Node)->type, offset, curr_scope);
																										tEntry* tempen0 = lookup(scope_st, tmp_0);
																										align_offset( getSize((yyval.Node)->type) );

																										(yyval.Node)->place = {tmp_0, tempen0};																												
																										// tmp_0 = exp >= exp
																										emit((yyvsp[-2].Node)->place , ">=" ,(yyvsp[0].Node)->place , (yyval.Node)->place , emit_line);

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
#line 3001 "parser.tab.c"
    break;

  case 46:
#line 986 "parser.y"
                                                                                                                                                                {(yyval.Node) = (yyvsp[0].Node);}
#line 3007 "parser.tab.c"
    break;

  case 47:
#line 987 "parser.y"
                                                                                                                                {
																								(yyval.Node) = new_2_node("==", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;	

																								string typecheck = equality_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																								if( typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																								    yyerror("== operator is not applicable.");
																								}
																								else{
																									if(typecheck == "True"){
																										(yyval.Node)->type = "int";

																										string tmp_0 = ir_variable((yyval.Node)->type ,offset, curr_scope);
																										tEntry* tempen0 = lookup(scope_st, tmp_0);
																										align_offset( getSize((yyval.Node)->type) );

																										(yyval.Node)->place = {tmp_0 , tempen0 };
																										// tmp_0 = exp == exp
																										emit((yyvsp[-2].Node)->place, "==", (yyvsp[0].Node)->place, (yyval.Node)->place, emit_line);

																									}
																									else if( typecheck == "true"){
																										yyerror("Comparison between pointer and integer");
																									}
																									else{
																										yyerror("equality operation is not valid.");
																									}
																								}																
																							}
#line 3044 "parser.tab.c"
    break;

  case 48:
#line 1019 "parser.y"
                                                                                                                        {
																								(yyval.Node) = new_2_node("!=", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init ==1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;	

																								string typecheck = equality_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type);
																								if( typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																								  	yyerror("!= operator is not valid.");
																								}
																								else{
																									if( typecheck == "True"){
																										(yyval.Node)->type="int";

																										string tmp_0 = ir_variable((yyval.Node)->type, offset, curr_scope);
																										tEntry* tempen0 = lookup(scope_st, tmp_0);
																										align_offset( getSize((yyval.Node)->type) );

																										(yyval.Node)->place = {tmp_0,tempen0};																												
																										// tmp_0 = exp == exp
																										emit( (yyvsp[-2].Node)->place, "!=", (yyvsp[0].Node)->place, (yyval.Node)->place, emit_line);	
																									}
																									else if( typecheck == "true"){
																										yyerror("Comparison between pointer and integer");
																									}
																									else{
																										yyerror("!= operetor is not valid.");
																									}
																								}																
																							}
#line 3080 "parser.tab.c"
    break;

  case 49:
#line 1053 "parser.y"
                                                                                                                                                                {(yyval.Node) = (yyvsp[0].Node);}
#line 3086 "parser.tab.c"
    break;

  case 50:
#line 1054 "parser.y"
                                                                                                                                                {
																								(yyval.Node) = new_2_node("&", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;

																								string typecheck = bitwise_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																								if(typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror("Invalid type for '&' expression");
																								}
																								
																								else if(typecheck=="true"){
																									(yyval.Node)->type = "int";

																									string tmp_0 = ir_variable((yyval.Node)->type, offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = {tmp_0, tempen0};
																									// tmp_0 = exp & exp	
																									emit((yyvsp[-2].Node)->place, "&", (yyvsp[0].Node)->place, (yyval.Node)->place, emit_line);
																								}

																								else{
																									yyerror("& operator is not applicable.");
																								}
																							}
#line 3119 "parser.tab.c"
    break;

  case 51:
#line 1085 "parser.y"
                                                                                                                                                                        {(yyval.Node) = (yyvsp[0].Node);}
#line 3125 "parser.tab.c"
    break;

  case 52:
#line 1086 "parser.y"
                                                                                                                                        {
																								(yyval.Node) = new_2_node("^", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;

																								string typecheck = bitwise_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type);
																								if( typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror("Invalid type for '^' expression");
																								}
																								else if( typecheck == "true"){
																									(yyval.Node)->type = "int";

																									string tmp_0 = ir_variable( (yyval.Node)->type, offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = { tmp_0, tempen0};																												
																									// tmp_0 = exp ^ exp
																									emit((yyvsp[-2].Node)->place,"^",(yyvsp[0].Node)->place,(yyval.Node)->place,emit_line);
																								}	
																								else {
																									yyerror("^ operator is not applicable.");
																								}
																							}
#line 3156 "parser.tab.c"
    break;

  case 53:
#line 1115 "parser.y"
                                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node);}
#line 3162 "parser.tab.c"
    break;

  case 54:
#line 1116 "parser.y"
                                                                                                                                {
																								(yyval.Node) = new_2_node("|", (yyvsp[-2].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;

																								string typecheck = bitwise_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type);
																								if( typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror("Invalid type for '|' expression");
																								}
																								else if( typecheck == "true"){
																		  							(yyval.Node)->type = "int";
							
																		                            string tmp_0 = ir_variable( (yyval.Node)->type, offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																		                            align_offset( getSize((yyval.Node)->type) );

																		                            (yyval.Node)->place = {tmp_0, tempen0};																												
																									// tmp_0 = exp | exp 	
																		                            emit((yyvsp[-2].Node)->place, "|" , (yyvsp[0].Node)->place, (yyval.Node)->place, emit_line);
																
																	                            }
																								else if(typecheck == "True"){
																									(yyval.Node)->type = "long long";

																									string tmp_0 = ir_variable((yyval.Node)->type, offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize((yyval.Node)->type) );

																									(yyval.Node)->place = {tmp_0, tempen0};
																									// tmp_0 = exp | exp	
																									emit( (yyvsp[-2].Node)->place, "|", (yyvsp[0].Node)->place, (yyval.Node)->place, emit_line);
																								}
																								else{
																									yyerror("| operation is not applicable.");
																								}
																							}
#line 3205 "parser.tab.c"
    break;

  case 55:
#line 1157 "parser.y"
                                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node);}
#line 3211 "parser.tab.c"
    break;

  case 56:
#line 1158 "parser.y"
                                                                                                                                {
																								(yyval.Node) = new_2_node("&&", (yyvsp[-3].Node), (yyvsp[0].Node));
																								(yyval.Node)->type = "int";
																								(yyval.Node)->key = (yyvsp[-3].Node)->key;
																								if((yyvsp[-3].Node)->init == 1 && (yyvsp[0].Node)->init == 1) 
																									(yyval.Node)->init = 1;

																								backpatch( (yyvsp[-3].Node)->truelist, (yyvsp[-1].line_num));
																								(yyvsp[0].Node)->falselist = makelist( emit_line);

																								// if tmp_1 == tmp_2 goto ___
																								emit({string("if"), NULL} ,"==", (yyvsp[0].Node)->place, {string("goto"), NULL},-1);

																								(yyvsp[0].Node)->truelist = makelist( emit_line);

																								// goto ____
																								emit({string("goto"), NULL},"",{ "", NULL},{ "", NULL},-1);

																								string tmp_0 = ir_variable( (yyval.Node)->type, offset, curr_scope);
																								tEntry* tempen0 = lookup(scope_st, tmp_0);
																								align_offset( getSize((yyval.Node)->type) );

																								(yyval.Node)->place = {tmp_0, tempen0};																												

																								backpatch((yyvsp[0].Node)->truelist, emit_line); 
																								// tmp_0 = exp
																								emit({ "", NULL},"", {string("1"), NULL} , (yyval.Node)->place, emit_line);

																								(yyval.Node)->truelist = makelist(emit_line);
																								// goto ___
																								emit({string("goto"), NULL} ,"", { "", NULL} , { "", NULL},-1);

																								backpatch(merging((yyvsp[-3].Node)->falselist ,(yyvsp[0].Node)->falselist), emit_line);  
																								// tmp_0 = 0
																								emit({ "", NULL},"",{"0", NULL} , (yyval.Node)->place, emit_line);
																								
																								(yyval.Node)->falselist = makelist( emit_line);
																								// goto ___
																								emit( {string("goto"), NULL},"", { "", NULL}, { "", NULL},-1);	
																  							}
#line 3256 "parser.tab.c"
    break;

  case 57:
#line 1201 "parser.y"
                                  {
										(yyval.Node)=(yyvsp[0].Node);
	
										(yyval.Node)->falselist=merging(makelist(emit_line),(yyvsp[0].Node)->falselist);
										// if tmp_1 == tmp_2 goto ___
										emit({string("if"), NULL},"==", (yyvsp[0].Node)->place ,{string("goto"), NULL},-1);
														
										(yyval.Node)->truelist = merging( makelist(emit_line) , (yyvsp[0].Node)->truelist );
										// goto ____
										emit( {string("goto"), NULL} , "" ,{ "", NULL}, { "", NULL},-1);		

									}
#line 3273 "parser.tab.c"
    break;

  case 58:
#line 1217 "parser.y"
                                                {	
								(yyval.line_num) = emit_line;
							}
#line 3281 "parser.tab.c"
    break;

  case 59:
#line 1223 "parser.y"
                                                                                                                                                                {(yyval.Node) = (yyvsp[0].Node);}
#line 3287 "parser.tab.c"
    break;

  case 60:
#line 1224 "parser.y"
                                                                                                                {
																							(yyval.Node) = new_2_node("||", (yyvsp[-3].Node), (yyvsp[0].Node));
																							(yyval.Node)->type = "int";
																							(yyval.Node)->key = (yyvsp[-3].Node)->key;
																							if((yyvsp[-3].Node)->init == 1 && (yyvsp[0].Node)->init == 1)
																								(yyval.Node)->init = 1;
																							
																							backpatch((yyvsp[-3].Node)->falselist, (yyvsp[-1].line_num));
					
																							if( (yyvsp[0].Node)->falselist.size() == 0)
																								(yyvsp[0].Node)->falselist = makelist(emit_line);
																							else
																								backpatch((yyvsp[0].Node)->falselist , emit_line);
																							
																							// if tmp_1 == tmp_2 goto ___
																							emit({string("if"), NULL},"==" ,(yyvsp[0].Node)->place ,{string("goto"), NULL} ,-1);
					
																							if( (yyvsp[0].Node)->truelist.size() == 0)
																								(yyvsp[0].Node)->truelist=makelist(emit_line);
																							else
																								backpatch((yyvsp[0].Node)->truelist, emit_line);
																							
																							// goto ___
																							emit({string("goto"), NULL},"" ,{ "", NULL} ,{ "", NULL},-1);
																							
																							string tmp_0 = ir_variable( (yyval.Node)->type, offset, curr_scope);
																							tEntry* tempen0 = lookup(scope_st, tmp_0);
																							align_offset( getSize((yyval.Node)->type) );

																							(yyval.Node)->place ={tmp_0 ,tempen0};																												
																							
																							backpatch((yyvsp[0].Node)->falselist, emit_line);
																							// tmp_0 = 0
																							emit( { "", NULL}, "", {"0", NULL} , (yyval.Node)->place, emit_line);

																							(yyval.Node)->falselist = makelist(emit_line);
																							// goto __
																							emit({string("goto"), NULL},"",{ "", NULL}, { "", NULL},-1);
																							
																							backpatch( merging((yyvsp[-3].Node)->truelist, (yyvsp[0].Node)->truelist) , emit_line);  
																							// tmp_0 = 1
																							emit({ "", NULL},"",{string("1"), NULL} , (yyval.Node)->place, emit_line);
																							
																							(yyval.Node)->truelist = makelist( emit_line);
																							// goto __ 
																							emit({string("goto"), NULL},"",{ "", NULL},{ "", NULL},-1);
																						}
#line 3339 "parser.tab.c"
    break;

  case 61:
#line 1274 "parser.y"
                                        {					
									(yyval.Node)=(yyvsp[0].Node);					
					
									(yyval.Node)->falselist= merging( makelist(emit_line) , (yyvsp[0].Node)->falselist);
									// if tmp_0 == 0 goto ___
									emit({string("if"), NULL}, "==", (yyvsp[0].Node)->place, {string("goto"), NULL}, -1);
									
									(yyval.Node)->truelist = merging( makelist(emit_line), (yyvsp[0].Node)->truelist);
									// goto ___
									emit({string("goto"), NULL}, "", { "", NULL}, { "", NULL}, -1);		
								}
#line 3355 "parser.tab.c"
    break;

  case 62:
#line 1289 "parser.y"
                                                                                                                                                        {(yyval.Node) = (yyvsp[0].Node);}
#line 3361 "parser.tab.c"
    break;

  case 63:
#line 1290 "parser.y"
                                                                                                        {
																								(yyval.Node) = new_3_node("?:", (yyvsp[-7].Node), (yyvsp[-4].Node), (yyvsp[0].Node));
																								(yyval.Node)->key = (yyvsp[0].Node)->key;
																								if((yyvsp[-7].Node)->init == 1 && (yyvsp[0].Node)->init == 1 && (yyvsp[-4].Node)->init == 1) 
																									(yyval.Node)->init = 1;

																								string typecheck = conditional_expr((yyvsp[-7].Node)->type, (yyvsp[0].Node)->type);
																								if(typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror("The types are not compatible for conditional expression.");
																								}
																								else{
																									(yyval.Node)->type = typecheck;

																									backpatch( (yyvsp[-7].Node)->truelist, (yyvsp[-5].line_num));
																						         	backpatch( (yyvsp[-7].Node)->falselist, (yyvsp[-1].line_num));
																						         	
																						         	string tmp_0 = ir_variable( (yyval.Node)->type, offset, curr_scope);
																									 tEntry* tempen0 = lookup(scope_st, tmp_0);
																						         	align_offset( getSize((yyval.Node)->type) );

																						         	(yyval.Node)->place = {tmp_0, tempen0};	
																						         	
																									// tmp_0 = tmp_1
																						         	emit({ "", NULL},"", (yyvsp[0].Node)->place , (yyval.Node)->place, emit_line);
																									// goto ___
																						         	emit({string("goto"), NULL},"", { "", NULL}, { "", NULL}, emit_line + 2);
																						         	backpatch( (yyvsp[0].Node)->truelist,  emit_line + 2);					
																						         	backpatch( (yyvsp[0].Node)->falselist, emit_line + 2);						
																						         	backpatch( (yyvsp[-4].Node)->truelist , (yyvsp[-3].Node)->line_used);					
																						         	backpatch( (yyvsp[-4].Node)->falselist , (yyvsp[-3].Node)->line_used);					
																						         	backpatch( (yyvsp[-3].Node)->nextlist, emit_line);
																									// tmp_0 = tmp_1
																						         	emit({ "", NULL}, "", (yyvsp[-4].Node)->place , (yyval.Node)->place, emit_line);
																						        }
																							}
#line 3402 "parser.tab.c"
    break;

  case 64:
#line 1329 "parser.y"
                                        {
							(yyval.Node) = new node();
							(yyval.Node)->line_used = emit_line;														
							(yyval.Node)->nextlist = makelist(emit_line);
							
							// goto ___
							emit({string("goto"), NULL},"",{ "", NULL},{ "", NULL},-1);
						}
#line 3415 "parser.tab.c"
    break;

  case 65:
#line 1340 "parser.y"
                                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node); }
#line 3421 "parser.tab.c"
    break;

  case 66:
#line 1341 "parser.y"
                                                                                                                        {
																									make_children((yyvsp[-1].Node), (yyvsp[-2].Node), (yyvsp[0].Node), NULL); 
																									(yyval.Node) = (yyvsp[-1].Node);
																									(yyval.Node)->key=(yyvsp[0].Node)->key;

																									string typecheck = assignment_expr((yyvsp[-2].Node)->type , (yyvsp[0].Node)->type, (yyvsp[-1].Node)->s);

																									if( typecheck == ""){
																										(yyval.Node)->type = "NULLTYPE";
																										yyerror("invalid assign type " + (yyvsp[0].Node)->type + " to " + (yyvsp[-2].Node)->type);
																									}
																									else{
																										if( typecheck == "true"){
																											(yyval.Node)->type = (yyvsp[-2].Node)->type;

																											if((yyvsp[-1].Node)->s == "="){
																												backpatch( (yyvsp[0].Node)->falselist, emit_line);
																												backpatch( (yyvsp[0].Node)->truelist, emit_line);
																												
																												if((yyvsp[-2].Node)->flag == 1){
																													// tmp_0 = **tmp_1
																													emit({"*", NULL}, "", (yyvsp[0].Node)->place, (yyvsp[-2].Node)->place, emit_line);
																												}
																												else if((yyvsp[0].Node)->flag == 1){
																													// tmp_0 = *tmp_1
																													emit({ "", NULL}, "*", (yyvsp[0].Node)->place, (yyvsp[-2].Node)->place, emit_line);
																												}
																												else{
																													// tmp_0 = tmp_1
																													emit( { "", NULL},"", (yyvsp[0].Node)->place, (yyvsp[-2].Node)->place, emit_line);
																												} 
																											}
																											else{
																						  						string tmp_0 = ir_variable( (yyval.Node)->type, offset, curr_scope);
																												tEntry* tempen0 = lookup(scope_st, tmp_0);
																						  						align_offset( getSize((yyval.Node)->type) );

																						  						(yyval.Node)->place = {tmp_0, tempen0};

																						  						backpatch( (yyvsp[0].Node)->falselist, emit_line);
																						  						backpatch( (yyvsp[0].Node)->truelist, emit_line);

																						  						string tmp_1 = ir_variable( (yyval.Node)->type,offset,curr_scope);
																												tEntry* tempen1 = lookup(scope_st, tmp_1);
																						  						align_offset( getSize((yyval.Node)->type) );

																						  						pair<string, tEntry*> tmp_opd = {tmp_1 , tempen0};

																						  						string str="";
																						  						str = str + (yyvsp[-1].Node)->s[0] ;
																						  						if( (yyvsp[-1].Node)->s[1] != '=')
																												  	str = str+(yyvsp[-1].Node)->s[1];

																						  						emit( (yyvsp[-2].Node)->place , str , (yyvsp[0].Node)->place, (yyval.Node)->place, emit_line);
																												// tmp_0 = tmp_1
																						  						emit({ "", NULL}, "", (yyval.Node)->place, (yyvsp[-2].Node)->place ,emit_line);
																				                          	}

																										}		
																										else if( typecheck == "warning"){
																											(yyval.Node)->type = (yyvsp[-2].Node)->type;
																											yyerror("Assignment with incompatible pointer type");
																										}	

																										if((yyvsp[-2].Node)->isidentifier == 1){
																											if((yyvsp[0].Node)->init == 1){
																												tEntry* entry = lookup(scope_st, (yyvsp[-2].Node)->s);
																												if(entry){
																													entry->init = 1;
																												}
																											}
																										}	
																									}
																  							}
#line 3500 "parser.tab.c"
    break;

  case 67:
#line 1419 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = new_2_node("=", NULL, NULL); 
																							 	(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3509 "parser.tab.c"
    break;

  case 68:
#line 1423 "parser.y"
                                                                                                                                                                {	(yyval.Node) = new_2_node("*=", NULL, NULL); 
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3518 "parser.tab.c"
    break;

  case 69:
#line 1427 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = new_2_node("/=", NULL, NULL); 
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3527 "parser.tab.c"
    break;

  case 70:
#line 1431 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = new_2_node("+=", NULL, NULL); 
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3536 "parser.tab.c"
    break;

  case 71:
#line 1435 "parser.y"
                                                                                                                                                                {	(yyval.Node) = new_2_node("-=", NULL, NULL); 
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3545 "parser.tab.c"
    break;

  case 72:
#line 1439 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = new_2_node("&=", NULL, NULL); 
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3554 "parser.tab.c"
    break;

  case 73:
#line 1443 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = new_2_node("^=", NULL, NULL); 
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3563 "parser.tab.c"
    break;

  case 74:
#line 1447 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = new_2_node("|=", NULL, NULL); 
																								(yyval.Node)->key = (yyval.Node)->s;
																								(yyval.Node)->type = (yyvsp[0].Str);
																							}
#line 3572 "parser.tab.c"
    break;

  case 75:
#line 1454 "parser.y"
                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node);}
#line 3578 "parser.tab.c"
    break;

  case 76:
#line 1455 "parser.y"
                                                                                                                                        {
																								(yyval.Node) = new_2_node(",", (yyvsp[-2].Node), (yyvsp[0].Node));
																							}
#line 3586 "parser.tab.c"
    break;

  case 77:
#line 1461 "parser.y"
                                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node); }
#line 3592 "parser.tab.c"
    break;

  case 78:
#line 1465 "parser.y"
                                 { type_var = ""; }
#line 3598 "parser.tab.c"
    break;

  case 79:
#line 1465 "parser.y"
                                                                                                                                                                        { (yyval.Node) = (yyvsp[-2].Node); }
#line 3604 "parser.tab.c"
    break;

  case 80:
#line 1466 "parser.y"
                                                      { type_var = ""; }
#line 3610 "parser.tab.c"
    break;

  case 81:
#line 1466 "parser.y"
                                                                                                                                                { (yyval.Node) = new_2_node("Declaration", (yyvsp[-3].Node), (yyvsp[-2].Node)); }
#line 3616 "parser.tab.c"
    break;

  case 82:
#line 1470 "parser.y"
                                                                                                                                                                { (yyval.Node) = (yyvsp[0].Node); }
#line 3622 "parser.tab.c"
    break;

  case 83:
#line 1471 "parser.y"
                                                                                                                                        { (yyval.Node) = new_2_node("Declaration Specifier", (yyvsp[-1].Node), (yyvsp[0].Node));}
#line 3628 "parser.tab.c"
    break;

  case 84:
#line 1472 "parser.y"
                                                                                                                                                                        { (yyval.Node) = (yyvsp[0].Node);}
#line 3634 "parser.tab.c"
    break;

  case 85:
#line 1473 "parser.y"
                                                                                                                                                { (yyval.Node) = new_2_node("Declaration Specifier", (yyvsp[-1].Node), (yyvsp[0].Node));}
#line 3640 "parser.tab.c"
    break;

  case 86:
#line 1477 "parser.y"
                                                                                                                                                                        { (yyval.Node) = (yyvsp[0].Node);}
#line 3646 "parser.tab.c"
    break;

  case 87:
#line 1478 "parser.y"
                                                                                                                                                { (yyval.Node) = new_2_node(",", (yyvsp[-2].Node), (yyvsp[0].Node));}
#line 3652 "parser.tab.c"
    break;

  case 88:
#line 1482 "parser.y"
                                                                                                                                                        {
																									(yyval.Node) = (yyvsp[0].Node);
																									if( check_type((yyvsp[0].Node)->type) ){
																										// cout << " if" << endl;
																										if( (lookup(scope_st, (yyvsp[0].Node)->key)) ){
																											if((lookup(scope_st, (yyvsp[0].Node)->key))->scope ==  curr_scope){
																												yyerror((yyvsp[0].Node)->key + " is redeclared.");
																											}
																											else{
																												insert_entry((yyvsp[0].Node)->key , (yyvsp[0].Node)->type , 0, (yyvsp[0].Node)->size, offset, curr_scope);
																												align_offset((yyvsp[0].Node)->size);
																											}
																										}
																									    else{
																									    	insert_entry((yyvsp[0].Node)->key , (yyvsp[0].Node)->type , 0, (yyvsp[0].Node)->size, offset, curr_scope);
																											align_offset((yyvsp[0].Node)->size);
																									    }
																							     	}
																									else{
																										(yyval.Node)->type = "NULLTYPE";
																										yyerror("Invalid type specification.");
																									}
																									(yyval.Node)->place = {(yyvsp[0].Node)->key,lookup(scope_st,(yyvsp[0].Node)->key)};																												
																									// tmp_0 = 
																									emit( { "", NULL},"", { "", NULL}, (yyval.Node)->place , emit_line);

																							}
#line 3684 "parser.tab.c"
    break;

  case 89:
#line 1509 "parser.y"
                                                                                                                                                        {
																								(yyval.Node) = new_2_node("=", (yyvsp[-2].Node), (yyvsp[0].Node));

																								string typecheck = assignment_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type, "=");
																								if(typecheck == ""){
																									(yyval.Node)->type = "NULLTYPE";
																									yyerror("invald assign type " + (yyvsp[0].Node)->type + " to " + (yyvsp[-2].Node)->type);
																								}
																								else{			
																									if( check_type((yyvsp[-2].Node)->type) ){
																										// cout << "aaya " << endl;
																										(yyval.Node)->type = (yyvsp[-2].Node)->type;
																										(yyval.Node)->init = (yyvsp[0].Node)->init;
																										(yyvsp[-2].Node)->init = (yyvsp[0].Node)->init;

																										if( !(lookup(scope_st,(yyvsp[-2].Node)->key)) ){
																											insert_entry((yyvsp[-2].Node)->key ,(yyvsp[-2].Node)->type ,1 ,(yyvsp[-2].Node)->size ,offset ,curr_scope);
																											align_offset((yyvsp[-2].Node)->size);

																											(yyval.Node)->place = {(yyvsp[-2].Node)->key ,lookup(scope_st , (yyvsp[-2].Node)->key)};																												
																											// tmp_0 = tmp_1
																											emit({ "", NULL},"", (yyvsp[0].Node)->place , (yyval.Node)->place , emit_line);
																										}
																										else if ((lookup(scope_st,(yyvsp[-2].Node)->key))->scope == curr_scope){
																											yyerror((yyvsp[-2].Node)->key + " is redeclared.");
																										}
																										else{
																											insert_entry((yyvsp[-2].Node)->key ,(yyvsp[-2].Node)->type ,1 ,(yyvsp[-2].Node)->size ,offset ,curr_scope);
																											align_offset((yyvsp[-2].Node)->size);

																											(yyval.Node)->place = {(yyvsp[-2].Node)->key , lookup(scope_st , (yyvsp[-2].Node)->key)};																												
																											// tmp_0 = tmp_1
																											emit({ "", NULL},"", (yyvsp[0].Node)->place, (yyval.Node)->place, emit_line);
																										}
																										
																									}
																									else{
																										(yyval.Node)->type = "NULLTYPE";
																										yyerror("Invalid type specification.");
																									}
																								}
																							}
#line 3731 "parser.tab.c"
    break;

  case 90:
#line 1554 "parser.y"
                                                                                                                                                                {(yyval.Node)=new_leaf_node((yyvsp[0].Str));}
#line 3737 "parser.tab.c"
    break;

  case 91:
#line 1558 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "void";
																									else type_var += "void";
																								}
#line 3746 "parser.tab.c"
    break;

  case 92:
#line 1562 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "char";
																									else type_var += " char";
																								}
#line 3755 "parser.tab.c"
    break;

  case 93:
#line 1566 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "short";
																									else type_var += " short";
																								}
#line 3764 "parser.tab.c"
    break;

  case 94:
#line 1570 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "bool";
																									else type_var += " bool";
																								}
#line 3773 "parser.tab.c"
    break;

  case 95:
#line 1574 "parser.y"
                                                                                                                                                                                        {
																									(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "int";
																									else type_var += " int";
																								}
#line 3783 "parser.tab.c"
    break;

  case 96:
#line 1579 "parser.y"
                                                                                                                                                                                        {
																									(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "long";
																									else type_var += " long";
																								}
#line 3793 "parser.tab.c"
    break;

  case 97:
#line 1584 "parser.y"
                                                                                                                                                                                        {
																									(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "float";
																									else type_var += " float";
																								}
#line 3803 "parser.tab.c"
    break;

  case 98:
#line 1589 "parser.y"
                                                                                                                                                                                        {
																									(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "double";
																									else type_var += " double";
																								}
#line 3813 "parser.tab.c"
    break;

  case 99:
#line 1594 "parser.y"
                                                                                                                                                                                        {
																									(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "signed";
																									else type_var += " signed";
																								}
#line 3823 "parser.tab.c"
    break;

  case 100:
#line 1599 "parser.y"
                                                                                                                                                                                        {
																									(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "") type_var = "unsigned";
																									else type_var += " unsigned";
																								}
#line 3833 "parser.tab.c"
    break;

  case 101:
#line 1604 "parser.y"
                                                                                                                                                                                        {
																									(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									if(type_var == "")type_var = "string";
																									else type_var += " string";
																								}
#line 3843 "parser.tab.c"
    break;

  case 102:
#line 1609 "parser.y"
                                                                                                                                                                {
																									(yyval.Node)=(yyvsp[0].Node);
																									if(type_var == "") type_var = "struct " + (yyval.Node)->child1->s;
																									else type_var += "struct " + (yyval.Node)->child1->s;
																								}
#line 3853 "parser.tab.c"
    break;

  case 103:
#line 1616 "parser.y"
                                                                                                                                        {	
																									(yyval.Node) = new_1_node( "STRUCT" , new_leaf_node((yyvsp[0].Str)));
																									(yyval.Node)->size = getSize( "struct " + string((yyvsp[-1].Str)));
																								}
#line 3862 "parser.tab.c"
    break;

  case 104:
#line 1623 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									struct_name = string("struct " + (yyval.Node)->s);
																									struct_offset = 0;
																								}
#line 3871 "parser.tab.c"
    break;

  case 105:
#line 1631 "parser.y"
                                                                                                                                                                        { (yyval.Node)=(yyvsp[0].Node);}
#line 3877 "parser.tab.c"
    break;

  case 106:
#line 1632 "parser.y"
                                                                                                                                                {
																									(yyval.Node) = new_2_node("struct_declaration_list", (yyvsp[-1].Node), (yyvsp[0].Node));
																									(yyval.Node)->size = (yyvsp[-1].Node)->size + (yyvsp[0].Node)->size;
																								}
#line 3886 "parser.tab.c"
    break;

  case 107:
#line 1639 "parser.y"
                                                          { type_var = ""; }
#line 3892 "parser.tab.c"
    break;

  case 108:
#line 1639 "parser.y"
                                                                                                                                                        {
																									(yyval.Node) = new_2_node("struct_declaration",(yyvsp[-3].Node),(yyvsp[-2].Node));
																									(yyval.Node)->size = (yyvsp[-2].Node)->size;
																								}
#line 3901 "parser.tab.c"
    break;

  case 109:
#line 1646 "parser.y"
                                                                                                                                                        { (yyval.Node)=new_2_node("specifier_qualifier_list",(yyvsp[-1].Node),(yyvsp[0].Node)); }
#line 3907 "parser.tab.c"
    break;

  case 110:
#line 1647 "parser.y"
                                                                                                                                                                                {	
																									(yyval.Node)=(yyvsp[0].Node);
																									(yyval.Node)->type=(yyvsp[0].Node)->type;
																								}
#line 3916 "parser.tab.c"
    break;

  case 111:
#line 1654 "parser.y"
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
#line 3936 "parser.tab.c"
    break;

  case 112:
#line 1669 "parser.y"
                                                                                                                                                        {
																									(yyval.Node)=new_2_node(",",(yyvsp[-2].Node),(yyvsp[0].Node));
																									(yyval.Node)->size = (yyvsp[-2].Node)->size + (yyvsp[0].Node)->size;
																								}
#line 3945 "parser.tab.c"
    break;

  case 113:
#line 1676 "parser.y"
                                                                                                                                                                {	
																									make_children((yyvsp[-1].Node),(yyvsp[0].Node),NULL,NULL);
																									(yyval.Node) = new_2_node("declarator", (yyvsp[-1].Node), (yyvsp[0].Node));
																									(yyval.Node)->type = (yyvsp[-1].Node)->type + " " + (yyvsp[0].Node)->type;
																									(yyval.Node)->key = (yyvsp[0].Node)->key;
																									(yyval.Node)->size = getSize((yyval.Node)->type);

																									(yyval.Node)->place = {(yyvsp[0].Node)->s, NULL};
																								}
#line 3959 "parser.tab.c"
    break;

  case 114:
#line 1686 "parser.y"
                                                                                                                                                                                {
																									(yyval.Node) = (yyvsp[0].Node);
																									(yyval.Node)->place = {(yyvsp[0].Node)->s, NULL};
																								}
#line 3968 "parser.tab.c"
    break;

  case 115:
#line 1693 "parser.y"
                                                                                                                                                                                {
																									(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									(yyval.Node)->type = type_var;
																									(yyval.Node)->key = (yyvsp[0].Str);
																									(yyval.Node)->size = getSize((yyval.Node)->type);

																									(yyval.Node)->place = {(yyvsp[0].Str), NULL};
																								}
#line 3981 "parser.tab.c"
    break;

  case 116:
#line 1701 "parser.y"
                                                                                                                                                                        {
																									(yyval.Node) = new_1_node("()", (yyvsp[-1].Node));
																									(yyval.Node)->type = (yyvsp[-1].Node)->type;
																									(yyval.Node)->key = (yyvsp[-1].Node)->s;
																									(yyval.Node)->size = (yyvsp[-1].Node)->size;
																								}
#line 3992 "parser.tab.c"
    break;

  case 117:
#line 1707 "parser.y"
                                                                                                                                                {	
																									(yyval.Node) = new_2_node("[]",(yyvsp[-3].Node),(yyvsp[-1].Node));
																									(yyval.Node)->type = (yyvsp[-3].Node)->type;
																									(yyval.Node)->key = (yyvsp[-3].Node)->s;	
																									(yyval.Node)->size = getSize( (yyval.Node)->type ) * stoi((yyvsp[-1].Node)->s);
																								}
#line 4003 "parser.tab.c"
    break;

  case 118:
#line 1713 "parser.y"
                                                                                                                                                                        {
																									(yyval.Node) = new_1_node("[]",(yyvsp[-2].Node));
																									(yyval.Node)->type = (yyvsp[-2].Node)->type;
																									(yyval.Node)->key = (yyvsp[-2].Node)->s;
																									(yyval.Node)->size = getSize((yyval.Node)->type);
																								}
#line 4014 "parser.tab.c"
    break;

  case 119:
#line 1719 "parser.y"
                                {type_var = ""; offset = 0;}
#line 4020 "parser.tab.c"
    break;

  case 120:
#line 1719 "parser.y"
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
																									(yyvsp[-4].Node)->place = {(yyvsp[-4].Node)->key, lookup(scope_st, (yyvsp[-4].Node)->key)};
																									// func name
																									emit({string("func"), NULL},"", (yyvsp[-4].Node)->place, { "", NULL},-1);

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
																										insert_entry( arg[arg.size()-1], t, 1, size, offset, num_scopes + 1);
																										align_offset( size );
																		
																										pair<string, tEntry*> opd1 = {arg[arg.size()-1], lookup(scope_st, arg[arg.size()-1])};
																										
																										emit({ "", NULL}, "", { "", NULL}, opd1, emit_line);
																									}			
																									
																									func_params = "";
																									insert_entry((yyvsp[-4].Node)->key, type_var, 0, (yyvsp[-4].Node)->size, -1, 0);
    																								entry_map.insert( make_pair(num_scopes + 1 , (yyvsp[-4].Node)->key) );
																								}
#line 4078 "parser.tab.c"
    break;

  case 121:
#line 1773 "parser.y"
                                {type_var = ""; offset = 0;}
#line 4084 "parser.tab.c"
    break;

  case 122:
#line 1773 "parser.y"
                                                                                                                                                                                {
																									(yyval.Node) = new_2_node("()",(yyvsp[-4].Node),(yyvsp[-1].Node));

																									(yyval.Node)->type = (yyvsp[-4].Node)->type;
																									(yyval.Node)->key = (yyvsp[-4].Node)->s;
																									(yyval.Node)->size = getSize( (yyval.Node)->type );
																									FUNC_PARAM.insert( make_pair( (yyvsp[-4].Node)->type + " " + (yyvsp[-4].Node)->key , func_params) );
																									
																									func_params="";
																									insert_entry((yyvsp[-4].Node)->key , type_var, 0, (yyvsp[-4].Node)->size, -1, 0);
    																								entry_map.insert(make_pair( num_scopes + 1, (yyvsp[-4].Node)->key));

																									(yyvsp[-4].Node)->place = {(yyvsp[-4].Node)->key, lookup(scope_st, (yyvsp[-4].Node)->key)};
																									// func name
																									emit( {string("func"), NULL}, "", (yyvsp[-4].Node)->place, { "", NULL}, -1);
																								}
#line 4105 "parser.tab.c"
    break;

  case 123:
#line 1789 "parser.y"
                                {type_var = ""; offset = 0;}
#line 4111 "parser.tab.c"
    break;

  case 124:
#line 1789 "parser.y"
                                                                                                                                                                                                {
																									(yyval.Node) = new_1_node("()", (yyvsp[-3].Node));
																									(yyval.Node)->type = (yyvsp[-3].Node)->type;
																									(yyval.Node)->key = (yyvsp[-3].Node)->s;
																									(yyval.Node)->size = getSize((yyval.Node)->type);
																									FUNC_PARAM.insert( make_pair( (yyvsp[-3].Node)->type+ " " + (yyvsp[-3].Node)->key ,func_params));
																									
																									func_params="";
																									insert_entry((yyvsp[-3].Node)->key, (yyvsp[-3].Node)->type, 0, (yyvsp[-3].Node)->size ,-1, 0);
    																								entry_map.insert(make_pair(num_scopes + 1 , (yyvsp[-3].Node)->key));

																									(yyvsp[-3].Node)->place = {(yyvsp[-3].Node)->key, lookup(scope_st,(yyvsp[-3].Node)->key)};
																									// func name
																									emit({string("func"), NULL}, "", (yyvsp[-3].Node)->place, { "", NULL} ,-1);
																								}
#line 4131 "parser.tab.c"
    break;

  case 125:
#line 1807 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = new_leaf_node("*");
																									(yyval.Node)->type = "*";
																								}
#line 4139 "parser.tab.c"
    break;

  case 126:
#line 1810 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = new_1_node("*",(yyvsp[0].Node));
																									(yyval.Node)->type = "* "+ (yyvsp[0].Node)->type;
																								}
#line 4147 "parser.tab.c"
    break;

  case 127:
#line 1817 "parser.y"
                                                                                                                                                                                { (yyval.Node)=(yyvsp[0].Node); }
#line 4153 "parser.tab.c"
    break;

  case 128:
#line 1821 "parser.y"
                                                                                                                                                                        { (yyval.Node) = (yyvsp[0].Node); }
#line 4159 "parser.tab.c"
    break;

  case 129:
#line 1822 "parser.y"
                             {type_var="";}
#line 4165 "parser.tab.c"
    break;

  case 130:
#line 1822 "parser.y"
                                                                                                                                                                        { (yyval.Node) = new_2_node(",", (yyvsp[-3].Node), (yyvsp[0].Node));}
#line 4171 "parser.tab.c"
    break;

  case 131:
#line 1826 "parser.y"
                                                                                                                                                        {	
																									(yyval.Node) = new_2_node("parameter_declaration", (yyvsp[-1].Node), (yyvsp[0].Node));
																									
																									if(func_params=="")
																									    func_params += (yyvsp[0].Node)->type + " " + (yyvsp[0].Node)->key;
																									else
																									    func_params += "," + (yyvsp[0].Node)->type + " " + (yyvsp[0].Node)->key;

																								}
#line 4185 "parser.tab.c"
    break;

  case 132:
#line 1836 "parser.y"
                                                                                                                                                {	(yyval.Node)=new_2_node("parameter_declaration",(yyvsp[-1].Node),(yyvsp[0].Node)); }
#line 4191 "parser.tab.c"
    break;

  case 133:
#line 1837 "parser.y"
                                                                                                                                                                        {	(yyval.Node)=(yyvsp[0].Node); }
#line 4197 "parser.tab.c"
    break;

  case 134:
#line 1841 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = new_leaf_node((yyvsp[0].Str)); }
#line 4203 "parser.tab.c"
    break;

  case 135:
#line 1842 "parser.y"
                                                                                                                                                                {	(yyval.Node) = new_2_node("," , (yyvsp[-2].Node), new_leaf_node((yyvsp[0].Str))); }
#line 4209 "parser.tab.c"
    break;

  case 136:
#line 1846 "parser.y"
                                                                                                                                                                        {	(yyval.Node)=(yyvsp[0].Node); }
#line 4215 "parser.tab.c"
    break;

  case 137:
#line 1847 "parser.y"
                                                                                                                                                {	(yyval.Node)=new_2_node("type_name", (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 4221 "parser.tab.c"
    break;

  case 138:
#line 1851 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = (yyvsp[0].Node); }
#line 4227 "parser.tab.c"
    break;

  case 139:
#line 1852 "parser.y"
                                                                                                                                                                {	(yyval.Node) = (yyvsp[0].Node); }
#line 4233 "parser.tab.c"
    break;

  case 140:
#line 1853 "parser.y"
                                                                                                                                                        {	(yyval.Node) = new_2_node("pd", (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 4239 "parser.tab.c"
    break;

  case 141:
#line 1857 "parser.y"
                                                                                                                                                                {	(yyval.Node)=new_1_node("()",(yyvsp[-1].Node));	}
#line 4245 "parser.tab.c"
    break;

  case 142:
#line 1858 "parser.y"
                                                                                                                                                                                        {	(yyval.Node)=new_leaf_node("[]");	}
#line 4251 "parser.tab.c"
    break;

  case 143:
#line 1859 "parser.y"
                                                                                                                                                                {	(yyval.Node)=new_1_node("[]",(yyvsp[-1].Node));	}
#line 4257 "parser.tab.c"
    break;

  case 144:
#line 1860 "parser.y"
                                                                                                                                                        {	(yyval.Node)=new_1_node("[]",(yyvsp[-2].Node));	}
#line 4263 "parser.tab.c"
    break;

  case 145:
#line 1861 "parser.y"
                                                                                                                                        {	(yyval.Node)=new_2_node("[]",(yyvsp[-3].Node),(yyvsp[-1].Node));	}
#line 4269 "parser.tab.c"
    break;

  case 146:
#line 1862 "parser.y"
                                                                                                                                                                                        {	(yyval.Node)=new_leaf_node("()");	}
#line 4275 "parser.tab.c"
    break;

  case 147:
#line 1863 "parser.y"
                                                                                                                                                                {	(yyval.Node)=new_1_node("()",(yyvsp[-1].Node));	}
#line 4281 "parser.tab.c"
    break;

  case 148:
#line 1864 "parser.y"
                                                                                                                                                        {	(yyval.Node)=new_1_node("()",(yyvsp[-2].Node));	}
#line 4287 "parser.tab.c"
    break;

  case 149:
#line 1865 "parser.y"
                                                                                                                                        {	(yyval.Node)=new_2_node("()",(yyvsp[-3].Node),(yyvsp[-1].Node));	}
#line 4293 "parser.tab.c"
    break;

  case 150:
#line 1869 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4299 "parser.tab.c"
    break;

  case 151:
#line 1870 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4305 "parser.tab.c"
    break;

  case 152:
#line 1871 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[-1].Node);	}
#line 4311 "parser.tab.c"
    break;

  case 153:
#line 1872 "parser.y"
                                                                                                                                                                {	(yyval.Node) = new_1_node(",", (yyvsp[-2].Node));	}
#line 4317 "parser.tab.c"
    break;

  case 154:
#line 1876 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4323 "parser.tab.c"
    break;

  case 155:
#line 1877 "parser.y"
                                                                                                                                                                {	(yyval.Node) = new_2_node(",", (yyvsp[-2].Node), (yyvsp[0].Node));	}
#line 4329 "parser.tab.c"
    break;

  case 156:
#line 1881 "parser.y"
                                                                                                                                                                {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4335 "parser.tab.c"
    break;

  case 157:
#line 1882 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4341 "parser.tab.c"
    break;

  case 158:
#line 1883 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4347 "parser.tab.c"
    break;

  case 159:
#line 1884 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4353 "parser.tab.c"
    break;

  case 160:
#line 1885 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4359 "parser.tab.c"
    break;

  case 161:
#line 1886 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4365 "parser.tab.c"
    break;

  case 162:
#line 1887 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4371 "parser.tab.c"
    break;

  case 163:
#line 1888 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4377 "parser.tab.c"
    break;

  case 164:
#line 1889 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4383 "parser.tab.c"
    break;

  case 165:
#line 1893 "parser.y"
                                                                                                                                                        {	
																									(yyval.Node) = new_2_node("LABELLED_STATEMENT", new_leaf_node((yyvsp[-2].Str)), (yyvsp[0].Node));
																								
																								}
#line 4392 "parser.tab.c"
    break;

  case 166:
#line 1897 "parser.y"
                                                                                                                                                        {	
																									(yyval.Node) = new_2_node("CASE", (yyvsp[-2].Node), (yyvsp[0].Node));
																								}
#line 4400 "parser.tab.c"
    break;

  case 167:
#line 1901 "parser.y"
                                                                                                                                                                        {	
																									(yyval.Node) = new_1_node("DEFAULT", (yyvsp[0].Node));
																								}
#line 4408 "parser.tab.c"
    break;

  case 168:
#line 1907 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = NULL;	}
#line 4414 "parser.tab.c"
    break;

  case 169:
#line 1908 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[-1].Node);	}
#line 4420 "parser.tab.c"
    break;

  case 170:
#line 1909 "parser.y"
                                                                                                                                                                        {	(yyval.Node) = (yyvsp[-1].Node);	}
#line 4426 "parser.tab.c"
    break;

  case 171:
#line 1910 "parser.y"
                                                                                                                                                        {	(yyval.Node) = new_2_node("compound statement list", (yyvsp[-2].Node), (yyvsp[-1].Node));}
#line 4432 "parser.tab.c"
    break;

  case 172:
#line 1914 "parser.y"
                                {type_var = ""; num_scopes++; curr_scope = num_scopes; scope_st.push(curr_scope);}
#line 4438 "parser.tab.c"
    break;

  case 173:
#line 1918 "parser.y"
                                { scope_st.pop(); curr_scope = scope_st.top();}
#line 4444 "parser.tab.c"
    break;

  case 174:
#line 1922 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = (yyvsp[0].Node);	}
#line 4450 "parser.tab.c"
    break;

  case 175:
#line 1923 "parser.y"
                                                                                                                                                                {	(yyval.Node) = new_2_node("declaration_list", (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 4456 "parser.tab.c"
    break;

  case 176:
#line 1927 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node);
																									(yyval.Node)->nextlist = merging( (yyvsp[0].Node)->nextlist, merging((yyvsp[0].Node)->truelist, (yyvsp[0].Node)->falselist));
																								}
#line 4464 "parser.tab.c"
    break;

  case 177:
#line 1931 "parser.y"
                                                                                                                                                                        {	
																										(yyval.Node) = new_2_node( "statement_list" , (yyvsp[-2].Node), (yyvsp[0].Node));
																										backpatch( (yyvsp[-2].Node)->nextlist , (yyvsp[-1].line_num) );

																										(yyval.Node)->continuelist = merging((yyvsp[-2].Node)->continuelist, (yyvsp[0].Node)->continuelist);
																										(yyval.Node)->breaklist=merging((yyvsp[0].Node)->breaklist, (yyvsp[-2].Node)->breaklist);
																										(yyval.Node)->nextlist = merging((yyvsp[0].Node)->nextlist, merging((yyvsp[0].Node)->truelist, (yyvsp[0].Node)->falselist));
																										
																									}
#line 4478 "parser.tab.c"
    break;

  case 178:
#line 1943 "parser.y"
                                                                                                                                                                                        {	(yyval.Node) = NULL;	}
#line 4484 "parser.tab.c"
    break;

  case 179:
#line 1944 "parser.y"
                                                                                                                                                                                {	(yyval.Node) = (yyvsp[-1].Node);	}
#line 4490 "parser.tab.c"
    break;

  case 180:
#line 1949 "parser.y"
                                                                                {	
															(yyval.Node) = new_2_node("IF", (yyvsp[-3].Node), (yyvsp[0].Node));
															backpatch( (yyvsp[-3].Node)->truelist , (yyvsp[-1].line_num));

															(yyval.Node)->nextlist = merging( (yyvsp[-3].Node)->falselist , (yyvsp[0].Node)->nextlist);
															
														}
#line 4502 "parser.tab.c"
    break;

  case 181:
#line 1956 "parser.y"
                                                                {
															(yyval.Node) = new_3_node("IF", (yyvsp[-7].Node), (yyvsp[-4].Node), new_1_node("ELSE", (yyvsp[0].Node)));
															
															backpatch((yyvsp[-7].Node)->truelist , (yyvsp[-5].line_num));
															backpatch((yyvsp[-7].Node)->falselist , (yyvsp[-1].line_num));

															(yyval.Node)->nextlist = merging((yyvsp[-4].Node)->nextlist , (yyvsp[-3].Node)->nextlist);
															(yyval.Node)->nextlist = merging((yyval.Node)->nextlist , (yyvsp[0].Node)->nextlist);

															}
#line 4517 "parser.tab.c"
    break;

  case 182:
#line 1966 "parser.y"
                                                                                {
																(yyval.Node) = new_2_node("SWITCH-CASE", (yyvsp[-2].Node), (yyvsp[0].Node));
															}
#line 4525 "parser.tab.c"
    break;

  case 183:
#line 1972 "parser.y"
                                {
							(yyval.Node) = (yyvsp[0].Node);
							
							(yyval.Node)->truelist = makelist(emit_line);
							(yyval.Node)->truelist = merging((yyval.Node)->truelist,(yyvsp[0].Node)->truelist);
							// if tmp_0 != 0 goto ___
							emit({string("if"), NULL} , "!=" , (yyvsp[0].Node)->place , {string("goto"), NULL} , -1);
																
							(yyval.Node)->falselist = makelist(emit_line);
							(yyval.Node)->falselist = merging((yyval.Node)->falselist , (yyvsp[0].Node)->falselist);
							// goto ___
							emit({string("goto"), NULL} , "" , { "", NULL} , { "", NULL} , -1);
						}
#line 4543 "parser.tab.c"
    break;

  case 184:
#line 1988 "parser.y"
                                        {
									(yyval.Node)=(yyvsp[0].Node);
									
									(yyval.Node)->truelist = makelist(emit_line);
									(yyval.Node)->truelist = merging((yyval.Node)->truelist , (yyvsp[0].Node)->truelist);
									// if tmp_0 != 0 goto ___
									emit({string("if"), NULL} , "!=" , (yyvsp[0].Node)->place , {string("goto"), NULL} , -1);
																		
									(yyval.Node)->falselist = makelist(emit_line);
									(yyval.Node)->falselist = merging((yyval.Node)->falselist , (yyvsp[0].Node)->falselist);
									// goto ___
									emit({string("goto"), NULL}, "", { "", NULL}, { "", NULL}, -1);
								}
#line 4561 "parser.tab.c"
    break;

  case 185:
#line 2005 "parser.y"
                                                                                                                                                        {(yyval.Node)=new_2_node("NEW", (yyvsp[-3].Node), new_leaf_node((yyvsp[-1].Str)));}
#line 4567 "parser.tab.c"
    break;

  case 186:
#line 2006 "parser.y"
                                                                                                                                                                        {(yyval.Node)=new_2_node("NEW", (yyvsp[0].Node), NULL);}
#line 4573 "parser.tab.c"
    break;

  case 187:
#line 2010 "parser.y"
                                                                                                                                                                {(yyval.Node)=new_1_node("DELETE", new_leaf_node((yyvsp[-1].Str)));}
#line 4579 "parser.tab.c"
    break;

  case 188:
#line 2011 "parser.y"
                                                                                                                                                                {(yyval.Node)=new_1_node("DELETE", new_leaf_node((yyvsp[-3].Str)));}
#line 4585 "parser.tab.c"
    break;

  case 189:
#line 2015 "parser.y"
                                                                                                                                                                {
																									(yyval.Node) = new_2_Stringval_node("PRINTF", new_leaf_node((yyvsp[-2].Str)), NULL);
																									// printf stringval
																									emit({string("printf"), NULL}, "", {(yyvsp[-2].Str), NULL}, {"", NULL}, emit_line);
																								}
#line 4595 "parser.tab.c"
    break;

  case 190:
#line 2020 "parser.y"
                                                                                                                                        {
																									(yyval.Node) = new_2_Stringval_node("PRINTF", new_leaf_node((yyvsp[-4].Str)), (yyvsp[-2].Node));
																									// printf stringval from helpers
																									emit({string("printf"), NULL}, "", {(yyvsp[-4].Str), NULL}, {"0", NULL}, emit_line);
																								}
#line 4605 "parser.tab.c"
    break;

  case 191:
#line 2027 "parser.y"
                                                                                                                                {
																									(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									printf_helpers.push_back((yyvsp[0].Str));
																								}
#line 4614 "parser.tab.c"
    break;

  case 192:
#line 2031 "parser.y"
                                                                                                                {
																									(yyval.Node) = new_2_node(",", new_leaf_node((yyvsp[-2].Str)),(yyvsp[0].Node));
																									printf_helpers.push_back((yyvsp[-2].Str));
																								}
#line 4623 "parser.tab.c"
    break;

  case 193:
#line 2035 "parser.y"
                                                                                                                {
																									(yyval.Node) = new_2_node("[]", new_leaf_node((yyvsp[-3].Str)), new_leaf_node((yyvsp[-1].Str)));
																								}
#line 4631 "parser.tab.c"
    break;

  case 194:
#line 2038 "parser.y"
                                                                                                                {(yyval.Node) = new_3_node("[]",new_leaf_node((yyvsp[-5].Str)),new_leaf_node((yyvsp[-3].Str)),(yyvsp[0].Node));}
#line 4637 "parser.tab.c"
    break;

  case 195:
#line 2042 "parser.y"
                                                                                                                                                {
																									(yyval.Node) = new_2_Stringval_node("SCANF", new_leaf_node((yyvsp[-4].Str)), (yyvsp[-2].Node));
																									emit({string("scanf"), NULL}, "", {(yyvsp[-4].Str), NULL}, {"0", NULL}, emit_line);
																								}
#line 4646 "parser.tab.c"
    break;

  case 196:
#line 2049 "parser.y"
                                                                                                    {(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									scanf_helpers.push_back((yyvsp[0].Str));
																								}
#line 4654 "parser.tab.c"
    break;

  case 197:
#line 2052 "parser.y"
                                                                                                    {(yyval.Node) = new_2_node(",", new_leaf_node((yyvsp[-2].Str)),(yyvsp[0].Node));
																									scanf_helpers.push_back((yyvsp[-2].Str));
																								}
#line 4662 "parser.tab.c"
    break;

  case 198:
#line 2058 "parser.y"
                                                                                                                                                        {
																								(yyval.Node) = new_2_node("WHILE", (yyvsp[-3].Node), (yyvsp[0].Node));
																								
																								backpatch((yyvsp[0].Node)->continuelist , (yyvsp[-5].line_num));
																								backpatch((yyvsp[-3].Node)->truelist , (yyvsp[-1].line_num));

																								(yyval.Node)->nextlist = merging( (yyvsp[-3].Node)->falselist , (yyvsp[0].Node)->breaklist);
																								// goto ___
																								emit({string("goto"), NULL} , "" , { "", NULL} , { "", NULL} , (yyvsp[-5].line_num));
																							}
#line 4677 "parser.tab.c"
    break;

  case 199:
#line 2068 "parser.y"
                                                                                                                                                {
																								(yyval.Node) = new_2_node("DO-WHILE", (yyvsp[-7].Node), (yyvsp[-3].Node));
																								
																								backpatch( (yyvsp[-2].Node)->nextlist, (yyvsp[-8].line_num));
																								backpatch( (yyvsp[-7].Node)->continuelist, (yyvsp[-4].line_num));
																								backpatch( (yyvsp[-3].Node)->truelist, (yyvsp[-2].Node)->line_used);

																								(yyval.Node)->nextlist = merging( (yyvsp[-7].Node)->breaklist, (yyvsp[-3].Node)->falselist);
																								
																							}
#line 4692 "parser.tab.c"
    break;

  case 200:
#line 2078 "parser.y"
                                                                                                                                {
																								(yyval.Node) = new_2_node("FOR", new_3_node("CONTROL_STATEMENTS", (yyvsp[-5].Node), (yyvsp[-3].Node), NULL), (yyvsp[0].Node));
																								
																								backpatch((yyvsp[0].Node)->nextlist,(yyvsp[-4].line_num));
																								backpatch((yyvsp[0].Node)->continuelist,(yyvsp[-4].line_num));

																								(yyval.Node)->nextlist=merging((yyvsp[0].Node)->breaklist,(yyvsp[-3].Node)->falselist);

																								backpatch((yyvsp[-3].Node)->truelist,(yyvsp[-1].line_num));
																								// goto ____
																								emit({string("goto"), NULL},"",{ "", NULL},{ "", NULL}, (yyvsp[-4].line_num));
																							}
#line 4709 "parser.tab.c"
    break;

  case 201:
#line 2090 "parser.y"
                                                                                                                        {
																								(yyval.Node) = new_2_node("FOR", new_3_node("CONTROL_STATEMENTS", (yyvsp[-8].Node), (yyvsp[-6].Node), (yyvsp[-4].Node)), (yyvsp[0].Node));
																								
																								backpatch( (yyvsp[0].Node)->nextlist , (yyvsp[-5].line_num));
																								backpatch( (yyvsp[0].Node)->continuelist , (yyvsp[-5].line_num));

																								(yyval.Node)->nextlist = merging( (yyvsp[-6].Node)->falselist , (yyvsp[0].Node)->breaklist );
																								backpatch( (yyvsp[-6].Node)->truelist , (yyvsp[-1].line_num));
																								backpatch( (yyvsp[-3].Node)->nextlist , (yyvsp[-7].line_num));
																								// goto ___
																								emit( {string("goto"), NULL} , "" , { "", NULL} , { "", NULL}, (yyvsp[-5].line_num));
																							}
#line 4726 "parser.tab.c"
    break;

  case 202:
#line 2106 "parser.y"
                                        {
									(yyval.Node) = new_1_node("GOTO", new_leaf_node((yyvsp[-1].Str)));

									if( label_tabel.find((yyvsp[-1].Str)) != label_tabel.end()){
										auto label = label_tabel.find((yyvsp[-1].Str));
										// goto ___
										emit({string("goto"), NULL}, "", { "", NULL}, { "", NULL}, label->second);
									}
									else{
										yyerror("Label does not exist");
									}
								}
#line 4743 "parser.tab.c"
    break;

  case 203:
#line 2118 "parser.y"
                                                {
									(yyval.Node) = new_leaf_node("CONTINUE");

									(yyval.Node)->continuelist=makelist(emit_line);
									// goto ___
									emit({string("goto"), NULL},"",{ "", NULL},{ "", NULL},-1);
								
								}
#line 4756 "parser.tab.c"
    break;

  case 204:
#line 2126 "parser.y"
                                                        {
									(yyval.Node) = new_leaf_node("BREAK");

									(yyval.Node)->breaklist=makelist(emit_line);
									// goto ___
									emit({string("goto"), NULL},"",{ "", NULL},{ "", NULL},-1);
								}
#line 4768 "parser.tab.c"
    break;

  case 205:
#line 2133 "parser.y"
                                                {
									(yyval.Node) = new_1_node("RETURN", NULL);
									// return
									emit({string("return"), NULL},"",{ "", NULL},{ "", NULL},-1);
								}
#line 4778 "parser.tab.c"
    break;

  case 206:
#line 2138 "parser.y"
                                        {
									(yyval.Node) = new_1_node("RETURN", (yyvsp[-1].Node));
									// return tmp_0
									emit({string("return"), NULL}, "", (yyvsp[-1].Node)->place, { "", NULL},-1);
								}
#line 4788 "parser.tab.c"
    break;

  case 207:
#line 2146 "parser.y"
                                                                                                                                                                        {
																									
																								}
#line 4796 "parser.tab.c"
    break;

  case 208:
#line 2152 "parser.y"
                                                                                                                                                        {	(yyval.Node) = (yyvsp[0].Node); 
																									type_var = "";
																								}
#line 4804 "parser.tab.c"
    break;

  case 209:
#line 2155 "parser.y"
                           { type_var = ""; }
#line 4810 "parser.tab.c"
    break;

  case 210:
#line 2155 "parser.y"
                                                                                                                                                                {	(yyval.Node) = new_2_node("<>", (yyvsp[-2].Node), (yyvsp[0].Node));
																									type_var = "";
																								}
#line 4818 "parser.tab.c"
    break;

  case 211:
#line 2162 "parser.y"
                                                                                                                                                                        {(yyval.Node) = (yyvsp[0].Node);}
#line 4824 "parser.tab.c"
    break;

  case 212:
#line 2163 "parser.y"
                                                                                                                                                                                {(yyval.Node) = (yyvsp[0].Node);}
#line 4830 "parser.tab.c"
    break;

  case 213:
#line 2164 "parser.y"
                                                                                                                                                                {(yyval.Node) = (yyvsp[0].Node);}
#line 4836 "parser.tab.c"
    break;

  case 214:
#line 2168 "parser.y"
                          { type_var = ""; }
#line 4842 "parser.tab.c"
    break;

  case 215:
#line 2168 "parser.y"
                                                                                                                                                                {
																									(yyval.Node) = new_2_node("STRUCT", (yyvsp[-5].Node), (yyvsp[-2].Node));
																									(yyval.Node)->size = (yyvsp[-2].Node)->size;
																								}
#line 4851 "parser.tab.c"
    break;

  case 216:
#line 2175 "parser.y"
                                                                                                                                        {(yyval.Node) = new_3_node("function_definition",(yyvsp[-2].Node),(yyvsp[-1].Node),(yyvsp[0].Node));}
#line 4857 "parser.tab.c"
    break;

  case 217:
#line 2176 "parser.y"
                                                                                                                                                                {(yyval.Node) = new_2_node("function_definition",(yyvsp[-1].Node), (yyvsp[0].Node));}
#line 4863 "parser.tab.c"
    break;


#line 4867 "parser.tab.c"

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
#line 2179 "parser.y"


extern char yytext[];

stack<int> scope_st;
int curr_scope = 0;
int num_scopes = 0;

string type_var;
string struct_name;	// for struct name
unordered_map <string, sym_table_t*> struct_symbol_tables;
string func_params;
vector<pair<string, tEntry*>> parameter_p;
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

int yyerror(const string& errors) {
		cout << "ERROR: Line number " << line << ": " << errors << "\n";
       	return 0;
}

int main(int argc, char *argv[]) 
{
	FILE* input;
    if (argc != 4) {
        cout << "Use the command like: ./bin/parser <inputfile> -o <.dot file>\n";
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
	sym_table_t *curr = (&GST);
    global_scope_table.insert({0, curr});
	init_bool();


	// for writing in dotfile
	ast_output.open(argv[3], fstream::out);
	ast_output << "digraph tree {\n" ;
	yyparse();
    ast_output << "}";
	ast_output.close();


	// for dumping symtable
	make_symbol_table();

	make_ircode();
//	print_asm("codegem.asm");

    return 0;
}
