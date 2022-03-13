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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int yyerror(char*);
extern FILE* yyin;
int yylex();
int yyparse();


#line 81 "parser.tab.c"

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
    POINTER_OPERATOR = 260,
    DECREMENT = 261,
    EQUAL_LOGICAL = 262,
    GREATER_EQUAL_OPERATOR = 263,
    INCREMENT = 264,
    LESS_EQUAL_OPERATOR = 265,
    AND_LOGICAL = 266,
    OR_LOGICAL = 267,
    NOT_EQUAL_OPERATOR = 268,
    LEFT_SHIFT_OPERATOR = 269,
    RIGHT_SHIFT_OPERATOR = 270,
    PRODUCT_ASSIGNMENT = 271,
    DIVIDE_ASSIGNMENT = 272,
    MOD_ASSIGNMENT = 273,
    AND_ASSIGNMENT = 274,
    ADD_ASSIGNMENT = 275,
    OR_ASSIGNMENT = 276,
    SUBTRACT_ASSIGNMENT = 277,
    XOR_ASSIGNMENT = 278,
    BOOL = 279,
    CHAR = 280,
    SHORT = 281,
    INT = 282,
    LONG = 283,
    SIGNED = 284,
    UNSIGNED = 285,
    STRING = 286,
    FLOAT = 287,
    DOUBLE = 288,
    VOID = 289,
    CONSTANT = 290,
    STRUCT = 291,
    CONST = 292,
    TYPEDEF = 293,
    AUTO = 294,
    CASE = 295,
    CONTINUE = 296,
    DEFAULT = 297,
    BREAK = 298,
    DELETE = 299,
    DO = 300,
    NEW = 301,
    FOR = 302,
    IF = 303,
    ELSE = 304,
    GOTO = 305,
    RETURN = 306,
    SWITCH = 307,
    WHILE = 308,
    SIZEOF = 309,
    SCANF = 310,
    PRINTF = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "parser.y"

    char *Str;

#line 194 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

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
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1387

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  218
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  378

#define YYUNDEFTOK  2
#define YYMAXUTOK   311


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
      79,    80
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    46,    46,    47,    48,    49,    53,    54,    55,    56,
      57,    58,    59,    60,    64,    65,    69,    70,    71,    72,
      73,    74,    82,    83,    84,    85,    86,    87,    88,    92,
      93,    97,    98,    99,   100,   104,   105,   106,   110,   111,
     112,   116,   117,   118,   119,   120,   124,   125,   126,   130,
     131,   135,   136,   140,   141,   145,   146,   150,   151,   155,
     156,   160,   161,   165,   166,   167,   168,   169,   170,   171,
     172,   176,   177,   181,   185,   186,   190,   191,   192,   193,
     194,   195,   199,   200,   204,   206,   210,   211,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     230,   231,   232,   236,   240,   241,   245,   249,   250,   251,
     252,   256,   257,   261,   262,   263,   268,   272,   273,   277,
     278,   279,   280,   281,   282,   283,   287,   288,   289,   290,
     294,   295,   300,   304,   305,   309,   310,   311,   315,   316,
     320,   321,   325,   326,   327,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   343,   344,   345,   346,   350,   351,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   368,
     369,   374,   375,   376,   380,   381,   382,   383,   387,   388,
     392,   393,   397,   398,   404,   405,   409,   410,   414,   415,
     419,   420,   424,   425,   428,   429,   430,   431,   434,   437,
     440,   441,   444,   447,   448,   449,   450,   455,   456,   457,
     458,   462,   463,   466,   467,   471,   472,   473,   474
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
  "STRING_VAL", "POINTER_OPERATOR", "DECREMENT", "EQUAL_LOGICAL",
  "GREATER_EQUAL_OPERATOR", "INCREMENT", "LESS_EQUAL_OPERATOR",
  "AND_LOGICAL", "OR_LOGICAL", "NOT_EQUAL_OPERATOR", "LEFT_SHIFT_OPERATOR",
  "RIGHT_SHIFT_OPERATOR", "PRODUCT_ASSIGNMENT", "DIVIDE_ASSIGNMENT",
  "MOD_ASSIGNMENT", "AND_ASSIGNMENT", "ADD_ASSIGNMENT", "OR_ASSIGNMENT",
  "SUBTRACT_ASSIGNMENT", "XOR_ASSIGNMENT", "BOOL", "CHAR", "SHORT", "INT",
  "LONG", "SIGNED", "UNSIGNED", "STRING", "FLOAT", "DOUBLE", "VOID",
  "CONSTANT", "STRUCT", "CONST", "TYPEDEF", "AUTO", "CASE", "CONTINUE",
  "DEFAULT", "BREAK", "DELETE", "DO", "NEW", "FOR", "IF", "ELSE", "GOTO",
  "RETURN", "SWITCH", "WHILE", "SIZEOF", "SCANF", "PRINTF", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_specifier",
  "struct_", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "type_qualifier", "declarator", "direct_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "initializer_list", "statement",
  "declerator_statement_suffix", "labeled_statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "stmt", "new_stmt", "delete_stmt", "printf_stmt",
  "printf_helper", "printf_", "scanf_stmt", "scanf_helper", "scanf_",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", YY_NULLPTR
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
     311
};
# endif

#define YYPACT_NINF (-207)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1257,    -4,   114,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
      12,  1225,  1225,  -207,   113,  1225,  1324,    -2,    78,  1174,
    -207,  -207,  -207,  -207,    -4,    -1,   532,    35,  -207,   697,
    -207,  -207,   442,    19,  -207,   304,  -207,    12,  -207,  1324,
    1300,   903,    -2,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,   784,  -207,  -207,    72,  -207,  1098,
    1098,  -207,  1131,    -8,    81,    59,   110,   708,    92,   101,
     927,   128,   172,  1155,  -207,  -207,  -207,    67,    24,  1131,
    -207,   222,   159,   188,    46,   134,   216,   224,   186,   207,
      17,  -207,  -207,   215,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,   229,  -207,   231,  -207,  -207,   532,   114,
     865,  -207,  1324,   442,   290,  -207,    39,   442,   442,  -207,
    -207,   380,   608,   248,  -207,  -207,  -207,  -207,   115,   244,
     249,  -207,    29,  -207,  -207,  -207,  -207,   257,    95,   153,
     254,   708,  1131,  -207,  -207,   263,  -207,   708,  -207,   259,
     260,   205,   960,  1131,  -207,   228,  1131,  1131,   784,  -207,
     984,  1131,   261,   262,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  1131,  -207,  1131,  1131,  1131,  1131,
    1131,  1131,  1131,  1131,  1131,  1131,  1131,  1131,  1131,  1131,
    1131,  1131,  1131,  1131,  1131,  -207,  1131,   265,   266,  -207,
    -207,   865,   518,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
    1131,   238,  -207,   270,  -207,   366,  -207,   632,  -207,  -207,
    1190,  1017,  -207,    58,  -207,   199,  -207,  1225,  -207,   264,
    -207,  -207,  1241,   200,  -207,  1131,  -207,   708,  -207,   268,
     532,   275,   960,   107,  -207,   118,   170,   281,  -207,   177,
    -207,    37,  -207,  -207,  -207,  -207,  -207,  -207,   222,   222,
     159,   159,   188,   188,   188,   188,    46,    46,   134,   216,
     224,   186,    66,   207,  -207,   184,   272,  -207,   196,   278,
    -207,  -207,    39,  1131,  -207,  -207,  -207,   284,   285,  -207,
     280,   199,  1284,  1041,  -207,  -207,  -207,  -207,   279,  -207,
    1131,  1074,   708,   708,   708,  -207,  -207,  1131,  -207,  1131,
     282,   286,   298,  -207,   841,   247,  -207,  -207,  -207,  -207,
    -207,  -207,   292,  -207,   296,   532,   185,  -207,   191,   456,
    -207,  -207,  -207,  -207,   532,    15,   309,   299,   311,  -207,
    -207,   306,  -207,  -207,  -207,   305,  -207,   708,  -207,  -207,
    -207,   274,  -207,   310,   323,   349,  -207,   532,  -207,   314,
     532,  -207,   532,  -207,   351,  -207,  -207,  -207
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   126,     0,   119,    92,    89,    90,    91,    93,    96,
      97,    98,    94,    95,    88,   103,   116,    86,    87,   214,
       0,    76,    78,    99,     0,    80,     0,   118,     0,     0,
     211,   213,   130,   128,   127,     0,     0,     0,    82,    84,
      77,    79,     0,   102,    81,     0,   178,     0,   218,     0,
       0,     0,   117,     1,   212,   131,   129,   120,    27,    22,
      24,    26,    25,    23,     0,    28,   182,     2,     4,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   202,   198,     6,    16,    29,     0,
      31,    35,    38,    41,    46,    49,    51,    53,    55,    57,
      59,    61,    71,     0,   170,   169,    74,   160,   161,   162,
     163,   168,   166,     0,   167,     0,   164,   165,     0,     0,
       0,   216,     0,   108,     0,   104,     0,   110,     0,   174,
     180,     0,     0,    84,   179,   217,   125,   138,   137,     0,
     132,   133,     0,   122,     2,    29,    73,     0,     0,   140,
       0,     0,     0,    18,    17,     0,   207,     0,   208,     0,
       0,     0,     0,     0,   209,     0,     0,     0,     0,    20,
       0,     0,     0,     0,    13,    12,    63,    64,    65,    68,
      66,    70,    67,    69,     0,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   183,     0,     0,     0,    75,
      83,     0,     0,   154,    85,   155,   215,   107,   101,   105,
       0,     0,   111,   113,   109,     0,   176,     0,   175,   181,
       0,     0,   135,   142,   136,   143,   123,     0,   124,     0,
     121,     5,     0,   142,   141,     0,   171,     0,   173,     0,
       0,     0,     0,     0,   210,     0,     0,     0,     8,     0,
      14,     0,    10,    11,    62,    33,    32,    34,    36,    37,
      39,    40,    43,    42,    45,    44,    47,    48,    50,    52,
      54,    56,     0,    58,    72,     0,     0,   158,     0,   189,
     114,   106,     0,     0,   100,   177,   150,     0,     0,   146,
       0,   144,     0,     0,   134,   139,    30,   172,     0,   190,
       0,     0,     0,     0,     0,    21,     9,     0,     7,     0,
       0,     0,     0,   156,     0,     0,   112,   115,   151,   145,
     147,   152,     0,   148,     0,     0,     0,   205,     0,     0,
     185,   203,    15,    60,     0,   194,     0,     0,     0,   157,
     159,     0,   153,   149,   191,     0,   206,     0,   187,   184,
     192,     0,   195,     0,   200,     0,   188,     0,   186,     0,
       0,   201,     0,   204,   196,   193,   199,   197
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -207,  -207,  -207,  -207,   -41,  -207,   -78,    76,    82,    55,
      79,   179,   189,   187,   192,   193,  -207,   -48,  -112,  -207,
      10,   -56,    75,     1,  -207,   277,  -207,    71,  -207,  -207,
     273,  -110,   -46,  -207,   111,    61,     0,   -24,    42,  -207,
     -44,  -207,   165,  -207,   236,  -103,   -25,  -206,  -207,   -45,
    -111,  -207,    -5,   180,   294,  -150,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,   377,
    -207
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    86,    87,   259,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   184,
     103,   147,   104,    47,    37,    38,    21,    22,    23,    24,
     124,   125,   126,   221,   222,    25,    26,    27,    28,    34,
     297,   140,   141,   142,   150,   298,   235,   214,   288,   105,
     106,   107,   108,    49,   132,   109,   110,   359,   215,   111,
     112,   346,   113,   114,   348,   115,   116,   117,    29,    30,
      31
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     130,    20,    35,   146,    52,   287,   139,   209,   213,     1,
     145,   185,   252,    50,   219,    57,   155,   156,   149,    51,
      39,    48,    40,    41,   146,     1,    44,     2,   153,   154,
      20,   145,   161,   176,   121,   234,   361,    36,   128,     3,
     203,   362,   169,    33,   135,   238,   244,   133,   145,   193,
     194,   138,     1,   204,     2,   239,   220,    16,   260,   318,
     118,   119,    32,   206,   177,   178,     3,   179,   180,   181,
     182,   183,   264,   230,   148,    19,    56,   217,   195,   231,
     196,   224,   170,   319,   158,     3,   130,   229,   171,   151,
     165,   172,   206,     2,   284,    55,   173,   174,   157,   213,
     175,    46,   311,   127,    19,     3,   246,   162,   265,   266,
     267,   241,   248,   123,    46,   219,   163,   216,   350,   133,
      46,   206,   149,   312,   134,   127,   223,     1,     1,     2,
     230,   159,    42,   206,   313,   123,   231,   160,   232,   309,
      43,     3,     3,   166,   206,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   148,   145,   290,   197,     1,   306,   242,   189,
     190,   198,   146,   253,   231,   300,   255,   256,   148,   145,
     233,   261,   229,   146,   127,   127,   314,   167,   127,   127,
     145,   243,   201,   316,   123,   123,   206,   134,   123,   123,
     320,   355,   307,   317,   145,   342,   134,   356,   301,    52,
     321,   206,   213,   282,   302,   242,   323,   206,   301,   122,
     303,   231,   324,   199,   354,   131,   191,   192,   358,   127,
      35,   138,   200,   360,   186,   187,   188,   327,   138,   123,
     205,   206,   202,   138,   207,   146,   208,   334,   272,   273,
     274,   275,   145,   254,   206,   146,   373,   120,   332,   375,
     236,   376,   145,   291,   292,   268,   269,   339,   340,   341,
     245,   343,   233,   270,   271,   237,   276,   277,   145,   240,
     247,   249,   251,   289,   243,   250,   127,   293,   262,   263,
     310,   305,   223,   285,   286,   308,   123,   315,   322,   325,
     328,   329,   330,   138,   335,   347,   351,   344,   352,    58,
     218,    59,   368,   345,    60,    61,    62,    63,   353,    64,
     336,   338,    65,    45,   129,   363,   364,   365,   366,    66,
     367,    67,    68,   369,    69,   370,   374,    70,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   371,
      15,    16,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    71,    15,    16,    17,    18,    72,    73,
      74,    75,    76,    77,   372,    78,    79,   377,   278,    80,
      81,    82,    83,    84,    85,    58,   294,    59,   280,   279,
      60,    61,    62,    63,   281,    64,   210,   283,    65,    45,
     226,   225,   304,   326,   257,    66,    54,    67,    68,     0,
      69,     0,     0,    70,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   227,    15,    16,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    71,
      15,    16,    17,    18,    72,    73,    74,    75,    76,    77,
       0,    78,    79,     0,     0,    80,    81,    82,    83,    84,
      85,    58,     0,    59,     0,     0,    60,    61,    62,    63,
       0,    64,     0,     0,    65,    45,     0,     0,     0,     0,
       0,    66,     0,    67,    68,     0,    69,     0,     0,    70,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,     0,    15,    16,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    71,    15,    16,    17,    18,
      72,    73,    74,    75,    76,    77,     0,    78,    79,   357,
       0,    80,    81,    82,    83,    84,    85,    58,     0,    59,
       0,     0,    60,    61,    62,    63,     0,    64,     0,     0,
      65,    45,     0,     0,     0,     0,     0,    66,     0,    67,
      68,     0,    69,     0,     0,    70,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,    15,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    71,    15,    16,    17,    18,    72,    73,    74,    75,
      76,    77,     0,    78,    79,     0,     0,    80,    81,    82,
      83,    84,    85,    58,     0,    59,     0,     0,    60,    61,
      62,    63,     0,    64,     0,     0,    65,    45,   228,     0,
       0,     0,     0,    66,     0,    67,    68,    58,    69,    59,
       0,    70,    60,    61,    62,    63,     0,    64,     0,     0,
      65,    45,   295,     0,     0,     0,     0,    66,     0,    67,
      68,     0,    69,     0,     0,    70,     0,    71,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    77,     0,    78,
      79,     0,     0,    80,    81,    82,    83,    84,    85,     0,
       0,    71,     0,     0,     0,     0,    72,    73,    74,    75,
      76,    77,     0,    78,    79,     0,   120,    80,    81,    82,
      83,    84,    85,    58,     0,    59,    45,     0,    60,    61,
      62,    63,     0,    64,     0,     0,    65,    45,     0,     0,
       0,     0,     0,    66,     0,    67,    68,     0,    69,     0,
       0,    70,     0,     0,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,    15,    16,    17,
      18,     0,     0,     0,     0,     0,     0,    71,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    77,     0,    78,
      79,     0,     0,    80,    81,    82,    83,    84,    85,    58,
       0,    59,     0,     0,    60,    61,    62,    63,     0,    64,
       0,     0,    65,     0,     0,     0,     0,     0,     0,     0,
       0,   144,    68,     0,    69,     0,     0,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    71,    15,    16,    58,     0,    59,     0,
       0,    60,    61,    62,    63,     0,    64,     0,     0,    65,
     211,   349,    83,     0,     0,     0,     0,     0,   144,    68,
      58,    69,    59,     0,    70,    60,    61,    62,    63,     0,
      64,     0,     0,    65,   211,     0,     0,     0,     0,     0,
       0,     0,   144,    68,     0,    69,     0,     0,    70,     0,
      71,     0,     0,     0,     0,     0,     0,     0,    58,     0,
      59,   212,     0,    60,    61,    62,    63,     0,    64,    83,
       0,    65,     0,     0,    71,   143,     0,     0,     0,     0,
     144,    68,    58,    69,    59,   212,    70,    60,    61,    62,
      63,     0,    64,    83,     0,    65,     0,     0,     0,     0,
       0,     0,   164,     0,   144,    68,     0,    69,     0,     0,
      70,     0,    71,     0,     0,    58,     0,    59,     0,     0,
      60,    61,    62,    63,     0,    64,     0,     0,    65,     0,
       0,    83,     0,     0,     0,    66,    71,   144,    68,    58,
      69,    59,     0,    70,    60,    61,    62,    63,     0,    64,
     258,     0,    65,     0,     0,    83,     0,     0,     0,     0,
       0,   144,    68,     0,    69,     0,     0,    70,     0,    71,
       0,     0,    58,     0,    59,     0,     0,    60,    61,    62,
      63,     0,    64,     0,     0,    65,     0,     0,    83,   299,
       0,     0,     0,    71,   144,    68,    58,    69,    59,     0,
      70,    60,    61,    62,    63,     0,    64,     0,     0,    65,
       0,     0,    83,   333,     0,     0,     0,     0,   144,    68,
       0,    69,     0,     0,    70,     0,    71,     0,     0,    58,
       0,    59,     0,     0,    60,    61,    62,    63,     0,    64,
     337,     0,    65,     0,     0,    83,     0,     0,     0,     0,
      71,   144,    68,    58,    69,    59,     0,    70,    60,    61,
      62,    63,     0,   152,     0,     0,    65,     0,     0,    83,
       0,     0,     0,     0,     0,   144,    68,     0,    69,     0,
       0,    70,     0,    71,     0,     0,    58,     0,    59,     0,
       0,    60,    61,    62,    63,     0,    64,     0,     0,    65,
       0,     0,    83,     0,     0,     0,     0,    71,   144,    68,
      58,    69,    59,     0,    70,    60,    61,    62,    63,     0,
     168,     0,     0,    65,    53,     0,    83,     0,     0,     0,
       0,     0,   144,    68,     0,    69,     0,     1,    70,     2,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     1,     0,   230,   296,     0,     0,    83,
       0,   231,     0,     0,    71,     0,     0,     3,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    83,    15,    16,    17,    18,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
      15,    16,    17,    18,     1,     0,   242,   296,     0,     0,
       0,     0,   231,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     3,    15,    16,    17,    18,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
     331,    15,    16,    17,    18,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,   136,    15,    16,    17,
      18,     0,     0,     0,     0,     0,     0,   137,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    45,    15,    16,    17,    18,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
      15,    16,    17,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     0,    15,    16,    17,    18
};

static const yytype_int16 yycheck[] =
{
      45,     0,     2,    51,    28,   211,    50,   118,   120,    13,
      51,    89,   162,    15,   124,    16,    72,    25,    64,    21,
      20,    26,    21,    22,    72,    13,    25,    15,    69,    70,
      29,    72,    77,     9,    39,   138,    21,    25,    19,    27,
      23,    26,    83,     1,    49,    16,   149,    47,    89,     3,
       4,    50,    13,    36,    15,    26,    17,    61,   170,    22,
      25,    26,     1,    26,    40,    41,    27,    43,    44,    45,
      46,    47,   184,    15,    64,     0,    34,   123,    32,    21,
      34,   127,    15,    17,    25,    27,   131,   132,    21,    17,
      80,    24,    26,    15,   206,    34,    29,    30,    17,   211,
      33,    26,   252,    42,    29,    27,   151,    15,   186,   187,
     188,    16,   157,    42,    39,   225,    15,   122,   324,   119,
      45,    26,   168,    16,    49,    64,   126,    13,    13,    15,
      15,    21,    19,    26,    16,    64,    21,    27,   138,   250,
      27,    27,    27,    15,    26,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   152,   204,   220,    31,    13,   245,    15,    10,
      11,    37,   220,   163,    21,   231,   166,   167,   168,   220,
     138,   171,   227,   231,   123,   124,    16,    15,   127,   128,
     231,   149,     6,    16,   123,   124,    26,   122,   127,   128,
      16,    16,   247,    26,   245,   317,   131,    16,   233,   233,
      26,    26,   324,   203,    15,    15,    20,    26,   243,    39,
      21,    21,    26,     7,   335,    45,    38,    39,   339,   168,
     230,   230,     8,   344,    12,    13,    14,   293,   237,   168,
      25,    26,    35,   242,    15,   293,    15,   303,   193,   194,
     195,   196,   293,    25,    26,   303,   367,     9,   302,   370,
      16,   372,   303,    25,    26,   189,   190,   312,   313,   314,
      16,   319,   230,   191,   192,    26,   197,   198,   319,    22,
      17,    22,    77,   212,   242,    25,   225,    17,    27,    27,
      15,    27,   292,    28,    28,    27,   225,    16,    26,    21,
      16,    16,    22,   302,    25,     7,    59,    25,    16,     5,
      20,     7,   357,    27,    10,    11,    12,    13,    22,    15,
     310,   311,    18,    19,    20,    16,    27,    16,    22,    25,
      25,    27,    28,    59,    30,    25,    22,    33,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    26,
      60,    61,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    25,    71,    72,    26,   199,    75,
      76,    77,    78,    79,    80,     5,    20,     7,   201,   200,
      10,    11,    12,    13,   202,    15,   119,   204,    18,    19,
      20,   128,   237,   292,   168,    25,    29,    27,    28,    -1,
      30,    -1,    -1,    33,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,   131,    60,    61,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,    71,    72,    -1,    -1,    75,    76,    77,    78,    79,
      80,     5,    -1,     7,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    60,    61,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    -1,    71,    72,    73,
      -1,    75,    76,    77,    78,    79,    80,     5,    -1,     7,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    71,    72,    -1,    -1,    75,    76,    77,
      78,    79,    80,     5,    -1,     7,    -1,    -1,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    18,    19,    20,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,     5,    30,     7,
      -1,    33,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    -1,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    76,    77,    78,    79,    80,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    -1,    71,    72,    -1,     9,    75,    76,    77,
      78,    79,    80,     5,    -1,     7,    19,    -1,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    -1,    30,    -1,
      -1,    33,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    76,    77,    78,    79,    80,     5,
      -1,     7,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,     5,    -1,     7,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    -1,    -1,    18,
      19,    20,    78,    -1,    -1,    -1,    -1,    -1,    27,    28,
       5,    30,     7,    -1,    33,    10,    11,    12,    13,    -1,
      15,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,    70,    -1,    10,    11,    12,    13,    -1,    15,    78,
      -1,    18,    -1,    -1,    59,    22,    -1,    -1,    -1,    -1,
      27,    28,     5,    30,     7,    70,    33,    10,    11,    12,
      13,    -1,    15,    78,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    -1,    59,    -1,    -1,     5,    -1,     7,    -1,    -1,
      10,    11,    12,    13,    -1,    15,    -1,    -1,    18,    -1,
      -1,    78,    -1,    -1,    -1,    25,    59,    27,    28,     5,
      30,     7,    -1,    33,    10,    11,    12,    13,    -1,    15,
      16,    -1,    18,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    -1,    59,
      -1,    -1,     5,    -1,     7,    -1,    -1,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    -1,    78,    22,
      -1,    -1,    -1,    59,    27,    28,     5,    30,     7,    -1,
      33,    10,    11,    12,    13,    -1,    15,    -1,    -1,    18,
      -1,    -1,    78,    22,    -1,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    -1,    59,    -1,    -1,     5,
      -1,     7,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    -1,    18,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      59,    27,    28,     5,    30,     7,    -1,    33,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    18,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      -1,    33,    -1,    59,    -1,    -1,     5,    -1,     7,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    -1,    -1,    18,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    59,    27,    28,
       5,    30,     7,    -1,    33,    10,    11,    12,    13,    -1,
      15,    -1,    -1,    18,     0,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    13,    33,    15,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    13,    -1,    15,    16,    -1,    -1,    78,
      -1,    21,    -1,    -1,    59,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    78,    60,    61,    62,    63,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    62,    63,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    15,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    27,    60,    61,    62,    63,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      16,    60,    61,    62,    63,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    16,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    19,    60,    61,    62,    63,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    60,    61,    62,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    15,    27,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    60,    61,    62,    63,   103,
     104,   107,   108,   109,   110,   116,   117,   118,   119,   149,
     150,   151,   116,   119,   120,   117,    25,   105,   106,   117,
     104,   104,    19,    27,   104,    19,   103,   104,   133,   134,
      15,    21,   118,     0,   150,   116,   119,    16,     5,     7,
      10,    11,    12,    13,    15,    18,    25,    27,    28,    30,
      33,    59,    64,    65,    66,    67,    68,    69,    71,    72,
      75,    76,    77,    78,    79,    80,    82,    83,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   101,   103,   130,   131,   132,   133,   136,
     137,   140,   141,   143,   144,   146,   147,   148,    25,    26,
       9,   133,   134,   108,   111,   112,   113,   116,    19,    20,
     130,   134,   135,   117,   103,   133,    16,    27,   104,   121,
     122,   123,   124,    22,    27,    85,    98,   102,   101,   113,
     125,    17,    15,    85,    85,   102,    25,    17,    25,    21,
      27,   130,    15,    15,    25,   101,    15,    15,    15,    85,
      15,    21,    24,    29,    30,    33,     9,    40,    41,    43,
      44,    45,    46,    47,   100,    87,    12,    13,    14,    10,
      11,    38,    39,     3,     4,    32,    34,    31,    37,     7,
       8,     6,    35,    23,    36,    25,    26,    15,    15,   131,
     106,    19,    70,    99,   128,   139,   133,   113,    20,   112,
      17,   114,   115,   117,   113,   111,    20,   135,    20,   130,
      15,    21,   117,   119,   126,   127,    16,    26,    16,    26,
      22,    16,    15,   119,   126,    16,   130,    17,   130,    22,
      25,    77,   136,   101,    25,   101,   101,   125,    16,    84,
      99,   101,    27,    27,    99,    87,    87,    87,    88,    88,
      89,    89,    90,    90,    90,    90,    91,    91,    92,    93,
      94,    95,   101,    96,    99,    28,    28,   128,   129,   108,
     102,    25,    26,    17,    20,    20,    16,   121,   126,    22,
     102,   127,    15,    21,   123,    27,    87,   130,    27,   131,
      15,   136,    16,    16,    16,    16,    16,    26,    22,    17,
      16,    26,    26,    20,    26,    21,   115,   102,    16,    16,
      22,    16,   121,    22,   102,    25,   101,    16,   101,   130,
     130,   130,    99,    98,    25,    27,   142,     7,   145,    20,
     128,    59,    16,    22,   131,    16,    16,    73,   131,   138,
     131,    21,    26,    16,    27,    16,    22,    25,   130,    59,
      25,    26,    25,   131,    22,   131,   131,    26
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    82,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    84,    84,    85,    85,    85,    85,
      85,    85,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    88,    88,    88,    88,    89,    89,    89,    90,    90,
      90,    91,    91,    91,    91,    91,    92,    92,    92,    93,
      93,    94,    94,    95,    95,    96,    96,    97,    97,    98,
      98,    99,    99,   100,   100,   100,   100,   100,   100,   100,
     100,   101,   101,   102,   103,   103,   104,   104,   104,   104,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     109,   109,   109,   110,   111,   111,   112,   113,   113,   113,
     113,   114,   114,   115,   115,   115,   116,   117,   117,   118,
     118,   118,   118,   118,   118,   118,   119,   119,   119,   119,
     120,   120,   121,   122,   122,   123,   123,   123,   124,   124,
     125,   125,   126,   126,   126,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   128,   128,   128,   128,   129,   129,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   131,
     131,   132,   132,   132,   133,   133,   133,   133,   134,   134,
     135,   135,   136,   136,   137,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   142,   142,   142,   143,   144,
     145,   145,   146,   147,   147,   147,   147,   148,   148,   148,
     148,   149,   149,   150,   150,   151,   151,   151,   151
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     4,     1,     2,     1,     2,
       1,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     2,     1,     1,     2,     3,     2,     1,     2,
       1,     1,     3,     1,     2,     3,     1,     2,     1,     1,
       3,     4,     3,     4,     4,     3,     1,     2,     2,     3,
       1,     2,     1,     1,     3,     2,     2,     1,     1,     3,
       1,     2,     1,     1,     2,     3,     2,     3,     3,     4,
       2,     3,     3,     4,     1,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     3,     4,     1,     2,
       1,     2,     1,     2,     6,     5,     2,     1,     5,     2,
       4,     6,     6,     8,     1,     2,     4,     5,     1,     8,
       2,     3,     1,     5,     8,     5,     6,     2,     2,     2,
       3,     1,     2,     1,     1,     4,     3,     3,     2
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
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
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

#line 1866 "parser.tab.c"

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
#line 485 "parser.y"



int yyerror(char *s) {
       	printf ("what are you doing man, we already wasted one complete day, THE  ERROR is : %s\n", s);
       	return 0;
}

int main(int argc, char *argv[]) 
{
	FILE *f = fopen(argv[1], "r");
	if(f == NULL) {
		printf("Can't open file");
	}
	yyin = f;
	int status = yyparse();
	return status;

}
