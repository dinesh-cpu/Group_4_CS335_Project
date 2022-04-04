/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <bits/stdc++.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include "parser.tab.h"
#include "ast.h"
#include "symbol_table.h"
#include "type_checking.h"
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

extern int line;
fstream outfile;

void tokenize(std::string const &str, const char delim,
            std::vector<std::string> &out)
{
    size_t start;
    size_t end = 0;
 
    while ((start = str.find_first_not_of(delim, end)) != std::string::npos)
    {
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }
}

int yyerror(const string&);
int yylex();

#line 101 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
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
    POINTER_OPERATOR = 261,
    DECREMENT = 262,
    EQUAL_LOGICAL = 263,
    GREATER_EQUAL_OPERATOR = 264,
    INCREMENT = 265,
    LESS_EQUAL_OPERATOR = 266,
    AND_LOGICAL = 267,
    OR_LOGICAL = 268,
    NOT_EQUAL_OPERATOR = 269,
    LEFT_SHIFT_OPERATOR = 270,
    RIGHT_SHIFT_OPERATOR = 271,
    PRODUCT_ASSIGNMENT = 272,
    DIVIDE_ASSIGNMENT = 273,
    MOD_ASSIGNMENT = 274,
    AND_ASSIGNMENT = 275,
    ADD_ASSIGNMENT = 276,
    OR_ASSIGNMENT = 277,
    SUBTRACT_ASSIGNMENT = 278,
    XOR_ASSIGNMENT = 279,
    BOOL = 280,
    CHAR = 281,
    SHORT = 282,
    INT = 283,
    LONG = 284,
    SIGNED = 285,
    UNSIGNED = 286,
    STRING = 287,
    FLOAT = 288,
    DOUBLE = 289,
    VOID = 290,
    STRUCT = 291,
    CONST = 292,
    TYPEDEF = 293,
    AUTO = 294,
    USING = 295,
    CASE = 296,
    CONTINUE = 297,
    DEFAULT = 298,
    BREAK = 299,
    DELETE = 300,
    DO = 301,
    NEW = 302,
    FOR = 303,
    IF = 304,
    ELSE = 305,
    GOTO = 306,
    RETURN = 307,
    SWITCH = 308,
    WHILE = 309,
    SIZEOF = 310,
    SCANF = 311,
    PRINTF = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 37 "parser.y" /* yacc.c:355  */

    int num;
    char *Str;
    struct node* Node;

#line 205 "parser.tab.c" /* yacc.c:355  */
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

/* Copy the second part of user declarations.  */

#line 236 "parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   1087

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  203
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  362

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      79,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    97,   115,   122,   126,   127,   159,   187,
     221,   246,   250,   268,   280,   289,   304,   305,   328,   348,
     369,   376,   385,   386,   387,   388,   389,   390,   394,   395,
     404,   405,   420,   436,   452,   453,   462,   478,   479,   491,
     505,   506,   522,   537,   552,   570,   571,   586,   604,   605,
     622,   623,   639,   640,   656,   657,   666,   667,   676,   677,
     691,   692,   711,   712,   713,   714,   715,   716,   717,   718,
     722,   723,   729,   733,   734,   737,   741,   742,   743,   744,
     748,   749,   753,   763,   776,   780,   784,   788,   792,   796,
     801,   806,   811,   816,   821,   826,   831,   838,   845,   852,
     853,   860,   867,   868,   875,   884,   891,   896,   902,   908,
     913,   919,   924,   949,   958,   970,   971,   976,   980,   981,
     985,   989,   996,   997,  1001,  1002,  1006,  1007,  1011,  1012,
    1013,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,
    1029,  1030,  1031,  1032,  1036,  1037,  1041,  1042,  1043,  1044,
    1045,  1046,  1047,  1048,  1049,  1053,  1054,  1055,  1059,  1060,
    1061,  1062,  1066,  1076,  1084,  1085,  1089,  1090,  1094,  1095,
    1100,  1101,  1105,  1106,  1110,  1111,  1115,  1116,  1120,  1121,
    1124,  1125,  1126,  1127,  1131,  1135,  1136,  1140,  1141,  1142,
    1143,  1147,  1148,  1149,  1150,  1154,  1158,  1159,  1164,  1165,
    1166,  1170,  1177,  1178
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
  "STRING_VAL", "CONSTANT", "POINTER_OPERATOR", "DECREMENT",
  "EQUAL_LOGICAL", "GREATER_EQUAL_OPERATOR", "INCREMENT",
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
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "B1", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_specifier", "S1", "struct_declaration_list",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "declarator", "direct_declarator", "pointer",
  "parameter_type_list", "parameter_list", "k1", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement", "A1", "A2",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "stmt", "new_stmt", "delete_stmt", "printf_stmt",
  "printf_helper", "scanf_stmt", "scanf_helper", "iteration_statement",
  "jump_statement", "program", "translation_unit", "external_declaration",
  "external_struct_declaration", "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    62,    60,   126,   124,    38,    94,    61,
      43,    45,    47,    42,    37,    40,    41,    58,    33,   123,
     125,    91,    93,    63,    46,    59,    44,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312
};
# endif

#define YYPACT_NINF -313

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-313)))

#define YYTABLE_NINF -196

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     999,    22,    29,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,    25,  -313,  -313,    29,   583,
     583,  -313,    35,   127,    11,    85,    87,  -313,  -313,  -313,
    -313,   117,    95,  -313,   142,   119,  -313,    34,   145,  -313,
    -313,   154,  -313,   341,  -313,   678,   127,  -313,   999,  -313,
     158,  -313,    29,   167,   653,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,   597,  -313,  -313,   178,  -313,  -313,   867,
     867,   892,   179,   190,   193,   149,   520,   195,   212,   708,
     216,   223,   920,   224,   225,  -313,    98,    28,   892,  -313,
     203,   213,   186,    26,   164,   235,   236,   237,   210,     4,
    -313,  -313,    40,  -313,    29,  -313,  -313,  -313,   264,   418,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  1013,  -313,  -313,
    -313,  -313,   228,  -313,  1027,  -313,   243,  -313,   653,  1027,
    -313,  -313,  -313,    55,  1027,    96,   239,   520,   892,  -313,
    -313,   240,  -313,   520,  -313,   231,   233,   181,   733,   892,
    -313,   112,   892,   892,   597,  -313,   232,   234,   761,   892,
     229,   238,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,   892,  -313,   892,   892,   892,   892,   892,   892,
     892,   892,   892,   892,   892,   892,   892,   892,   892,   892,
     892,   892,   892,  -313,   892,  -313,  -313,  -313,   418,  -313,
    -313,  -313,  -313,    36,   252,   246,  -313,    62,  -313,   327,
    -313,    29,  -313,   177,   255,  -313,  -313,   951,   786,   184,
    -313,   185,   892,  -313,   520,  -313,   251,  -313,   258,   733,
      75,  -313,    84,    89,   265,   259,    92,  -313,   115,  -313,
      90,  -313,  -313,  -313,  -313,  -313,  -313,   203,   203,   213,
     213,   186,   186,   186,   186,    26,    26,   164,   235,   236,
     237,   113,   210,  -313,  -313,   929,  -313,    65,  -313,  -313,
    -313,   583,  -313,   260,   261,  -313,   262,  -313,  -313,   548,
     267,  -313,   274,   278,  -313,   275,   185,   131,   814,  -313,
    -313,   276,   892,   839,   520,   520,   520,  -313,   292,   277,
     273,  -313,   892,  -313,   892,  -313,  -313,  -313,    29,   279,
    -313,  -313,   281,  -313,  -313,  -313,  -313,   289,  -313,   285,
    -313,   118,   520,   120,   443,  -313,  -313,   282,   294,  -313,
      63,   295,  -313,  -313,  -313,  -313,  -313,  -313,  -313,   283,
    -313,   520,   520,  -313,  -313,   286,   300,   298,   273,   303,
    -313,  -313,  -313,   292,  -313,   313,  -313,  -313,  -313,   312,
     273,  -313
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   115,     0,   108,    88,    86,    87,    89,    90,    93,
      94,    95,    91,    92,    85,     0,    84,   199,    75,    76,
      78,    96,     0,   107,     0,     0,    75,   196,   200,   198,
     116,     0,    97,    75,     0,    75,    80,    82,     0,    77,
      79,   162,   203,     0,    75,     0,   106,     1,     0,   109,
       0,    73,     0,     0,     0,   202,    97,   158,    26,    22,
      24,    25,    23,     0,    27,   168,     2,     4,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,    16,    28,     0,    30,
      34,    37,    40,    45,    48,    50,    52,    54,    56,    58,
      60,    70,     0,   164,    75,   166,   146,   147,     0,     0,
     148,   149,   154,   152,   153,   150,   151,     0,   111,     2,
      28,    72,     0,   197,     0,    81,    82,    74,     0,     0,
     140,    83,   141,     0,   103,   126,     0,     0,     0,    18,
      17,     0,   191,     0,   192,     0,     0,     0,     0,     0,
     193,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,    13,    12,    62,    63,    64,    67,    65,    69,
      66,    68,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   169,     0,   163,   165,   160,     0,   167,
     159,   114,   124,   123,     0,   117,   118,     0,   110,     0,
      99,     0,   144,     0,   175,     5,   102,     0,     0,   128,
     127,   129,     0,   155,     0,   157,     0,   176,     0,     0,
       0,   194,     0,     0,     0,     0,     0,     8,     0,    14,
       0,    10,    11,    61,    32,    31,    33,    35,    36,    38,
      39,    42,    41,    44,    43,    46,    47,    49,    51,    53,
      55,     0,    57,    71,   161,     0,   121,   128,   122,   112,
     120,     0,   113,     0,     0,   100,    75,   104,   142,     0,
       0,   136,     0,     0,   132,     0,   130,     0,     0,    29,
     156,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     9,     0,     7,     0,   119,   125,   201,     0,     0,
     143,   145,     0,   137,   131,   133,   138,     0,   134,     0,
     177,     0,     0,     0,     0,   171,   187,     0,     0,   178,
     180,     0,    15,    59,   105,   101,   174,   139,   135,     0,
     189,     0,     0,   173,   170,   185,     0,     0,     0,     0,
     188,   190,   172,     0,   184,     0,   181,   179,   186,   182,
       0,   183
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -313,  -313,  -313,  -313,   -24,  -313,   -49,    52,    53,    30,
      49,   152,   161,   166,   160,   165,  -313,   -43,   -51,  -313,
     -56,   -47,   -29,   -22,    12,  -313,   301,  -313,   -30,  -313,
    -313,  -313,   153,  -114,  -313,    -2,   -19,     5,  -109,  -313,
    -313,    93,  -313,   204,  -120,  -200,  -110,  -313,   -75,  -313,
       3,  -313,   -92,  -313,   253,  -139,  -313,  -313,  -313,  -313,
    -313,  -312,  -313,    10,  -313,  -313,  -313,  -313,   317,  -313,
    -313
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    85,    86,   238,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   172,
     102,   122,    17,    34,   203,    35,    36,    19,    20,    21,
      33,   209,   210,   135,   276,    22,    23,    24,   282,   205,
     271,   206,   207,   136,   283,   221,   131,   213,   105,   106,
     107,    43,   197,   108,   109,   110,   111,   344,   132,   112,
     113,   331,   114,   328,   115,   116,    25,    26,    27,    28,
      29
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,   147,   121,   130,    48,    46,    30,   133,   204,   229,
     211,    50,    18,    53,   103,   220,    37,   200,   212,   286,
     216,   120,   117,   151,   141,    42,     2,   191,   121,   181,
     182,    39,    40,   134,   199,     1,   356,   164,     3,   173,
      55,   192,     1,    54,     2,   139,   140,   120,   361,     1,
     126,   265,    32,    41,    41,   104,     3,   218,   155,   183,
      18,   184,   223,     3,   120,   193,   194,   286,   225,   165,
     166,   215,   167,   168,   169,   170,   171,   130,   272,   196,
     265,   194,   133,   268,   347,    47,   218,  -195,   273,   348,
     293,   294,     3,   230,   134,   211,   232,   233,   133,   214,
     295,   194,   126,   240,   134,   296,   264,   239,   299,     1,
     194,   217,   303,   158,   -98,   194,   194,   218,   300,   159,
     104,   243,   160,   199,   134,   244,   245,   246,   161,   162,
     304,   301,   163,    49,   339,   261,   341,   231,   194,   194,
     219,   302,    44,   263,   194,    52,   194,   316,    45,   290,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,    51,   120,   311,
     145,   285,    56,   289,    57,   121,   146,   124,   317,   134,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    38,   127,    16,   120,   137,   185,   278,   120,   217,
     287,   266,   186,   279,   142,   218,   288,   143,   267,   277,
     148,   251,   252,   253,   254,   174,   175,   176,   144,   324,
     325,   326,   219,   177,   178,   179,   180,   149,   130,   247,
     248,   152,   249,   250,   255,   256,   321,   323,   153,   156,
     157,   319,   187,   189,   188,   121,   190,   340,    46,   343,
     208,   332,    54,   226,   309,   222,   241,   224,   227,   228,
     235,   333,   236,    31,   120,   242,   351,   352,   269,    58,
     267,    59,   270,   292,    60,    61,   280,    62,   291,    63,
     120,   297,    64,    41,   195,   298,   307,   306,   308,    65,
     313,    66,    67,    68,   314,    69,   312,   315,    70,   327,
     330,   320,   329,   336,   335,   337,   334,   338,   350,   345,
     346,   349,   353,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    38,   354,    16,   355,   357,    71,
      72,    73,    74,    75,    76,   359,    77,    78,   360,   257,
      79,    80,    81,    82,    83,    84,    58,   274,    59,   258,
     260,    60,    61,   125,    62,   259,    63,   262,   234,    64,
      41,   198,   275,   358,   305,   123,    65,     0,    66,    67,
      68,     0,    69,     0,     0,    70,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    38,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    38,     0,    16,     0,     0,    71,    72,    73,    74,
      75,    76,     0,    77,    78,     0,     0,    79,    80,    81,
      82,    83,    84,    58,     0,    59,     0,     0,    60,    61,
       0,    62,     0,    63,     0,     0,    64,    41,   195,     0,
       0,     0,     0,    65,     0,    66,    67,    68,    58,    69,
      59,     0,    70,    60,    61,     0,    62,     0,    63,     0,
       0,    64,    41,     0,     0,     0,     0,     0,    65,     0,
      66,    67,    68,     0,    69,     0,     0,    70,     0,     0,
       0,     0,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,     0,    79,    80,    81,    82,    83,    84,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,    76,     0,    77,    78,   342,     0,    79,
      80,    81,    82,    83,    84,    58,     0,    59,     0,     0,
      60,    61,     0,    62,     0,    63,     0,     0,    64,    41,
       0,     0,     0,     0,     0,    65,     0,    66,    67,    68,
       0,    69,     0,    58,    70,    59,     0,     0,    60,    61,
       0,    62,     0,    63,     0,     0,    64,   128,   310,     0,
       0,     0,     0,     0,     0,   119,    67,    68,     0,    69,
       0,     0,    70,     0,     0,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,     0,    79,    80,    81,    82,
      83,    84,    58,     0,    59,     0,     0,    60,    61,     0,
      62,     0,    63,     0,     0,    64,     0,     0,     0,   129,
       0,     0,     0,     0,   119,    67,    68,    82,    69,     0,
       0,    70,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    38,     0,    16,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    38,    58,     0,
      59,     0,     0,    60,    61,     0,    62,     0,    63,     0,
       0,    64,   128,     0,     0,     0,    82,     0,     0,     0,
     119,    67,    68,    58,    69,    59,     0,    70,    60,    61,
       0,    62,     0,    63,     0,     0,    64,     0,     0,     0,
     118,     0,     0,     0,     0,   119,    67,    68,     0,    69,
       0,     0,    70,    58,     0,    59,     0,     0,    60,    61,
       0,    62,     0,    63,   129,     0,    64,     0,     0,     0,
       0,     0,    82,   150,     0,   119,    67,    68,    58,    69,
      59,     0,    70,    60,    61,     0,    62,     0,    63,     0,
       0,    64,     0,     0,     0,     0,     0,    82,    65,     0,
     119,    67,    68,     0,    69,     0,    58,    70,    59,     0,
       0,    60,    61,     0,    62,     0,    63,   237,     0,    64,
       0,     0,     0,     0,     0,     0,     0,    82,   119,    67,
      68,    58,    69,    59,     0,    70,    60,    61,     0,    62,
       0,    63,     0,     0,    64,     0,     0,     0,   284,     0,
       0,     0,    82,   119,    67,    68,     0,    69,     0,    58,
      70,    59,     0,     0,    60,    61,     0,    62,     0,    63,
       0,     0,    64,     0,     0,     0,   318,     0,     0,     0,
      82,   119,    67,    68,    58,    69,    59,     0,    70,    60,
      61,     0,    62,     0,    63,   322,     0,    64,     0,     0,
       0,     0,     0,     0,     0,    82,   119,    67,    68,     0,
      69,     0,    58,    70,    59,     0,     0,    60,    61,     0,
      62,     0,   138,     0,     0,    64,     0,     0,     0,     0,
       0,     0,     0,    82,   119,    67,    68,    58,    69,    59,
       0,    70,    60,    61,     0,    62,     0,    63,     0,     0,
      64,     0,     0,     0,     0,     0,     0,     0,    82,   119,
      67,    68,     0,    69,     0,    58,    70,    59,     0,     0,
      60,    61,     0,    62,     0,   154,     0,     0,    64,     0,
       0,     0,     1,     0,   265,   281,    82,   119,    67,    68,
     218,    69,     0,     0,    70,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     1,     0,   217,   281,     0,     0,
       0,    82,   218,     0,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    38,
       0,    16,     0,     0,     0,     0,     0,     0,     0,    82,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    38,     1,    16,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     202,     0,     0,     0,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       0,    16,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    38,     0,    16,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    38
};

static const yytype_int16 yycheck[] =
{
       2,    76,    45,    54,    26,    24,     1,    63,   117,   148,
     124,    33,     0,    35,    43,   135,    18,   109,   128,   219,
     134,    45,    44,    79,    71,    22,    15,    23,    71,     3,
       4,    19,    20,    63,   109,    13,   348,     9,    27,    88,
      37,    37,    13,     9,    15,    69,    70,    71,   360,    13,
      52,    15,    27,    19,    19,    43,    27,    21,    82,    33,
      48,    35,   137,    27,    88,    25,    26,   267,   143,    41,
      42,    16,    44,    45,    46,    47,    48,   128,    16,   108,
      15,    26,   138,   203,    21,     0,    21,     0,    26,    26,
     229,    16,    27,   149,   124,   209,   152,   153,   154,   129,
      16,    26,   104,   159,   134,    16,   198,   158,    16,    13,
      26,    15,    22,    15,    19,    26,    26,    21,    26,    21,
     108,   172,    24,   198,   154,   174,   175,   176,    30,    31,
      17,    16,    34,    16,    16,   191,    16,    25,    26,    26,
     135,    26,    15,   194,    26,    26,    26,    16,    21,   224,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,    25,   192,   279,
      21,   218,    27,   222,    20,   218,    27,    19,   287,   209,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    25,    62,   218,    17,    32,    20,   222,    15,
      15,   203,    38,    26,    25,    21,    21,    17,   203,   211,
      15,   181,   182,   183,   184,    12,    13,    14,    25,   294,
     295,   296,   217,    10,    11,    39,    40,    15,   279,   177,
     178,    15,   179,   180,   185,   186,   292,   293,    15,    15,
      15,   288,     7,     6,     8,   288,    36,   322,   267,   324,
      22,   302,     9,    22,   276,    16,    27,    17,    25,    78,
      28,   304,    28,   265,   288,    27,   341,   342,    16,     5,
     265,     7,    26,    15,    10,    11,    21,    13,    27,    15,
     304,    16,    18,    19,    20,    26,    25,    27,    26,    25,
      16,    27,    28,    29,    16,    31,    29,    22,    34,     7,
      27,    25,    25,    22,    25,    16,   308,    22,    25,    27,
      16,    16,    26,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    25,    62,    29,    25,    65,
      66,    67,    68,    69,    70,    22,    72,    73,    26,   187,
      76,    77,    78,    79,    80,    81,     5,    20,     7,   188,
     190,    10,    11,    52,    13,   189,    15,   192,   154,    18,
      19,   108,   209,   353,   271,    48,    25,    -1,    27,    28,
      29,    -1,    31,    -1,    -1,    34,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    -1,    72,    73,    -1,    -1,    76,    77,    78,
      79,    80,    81,     5,    -1,     7,    -1,    -1,    10,    11,
      -1,    13,    -1,    15,    -1,    -1,    18,    19,    20,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,     5,    31,
       7,    -1,    34,    10,    11,    -1,    13,    -1,    15,    -1,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    -1,    31,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    -1,
      72,    73,    -1,    -1,    76,    77,    78,    79,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    -1,    72,    73,    74,    -1,    76,
      77,    78,    79,    80,    81,     5,    -1,     7,    -1,    -1,
      10,    11,    -1,    13,    -1,    15,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      -1,    31,    -1,     5,    34,     7,    -1,    -1,    10,    11,
      -1,    13,    -1,    15,    -1,    -1,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    31,
      -1,    -1,    34,    -1,    -1,    65,    66,    67,    68,    69,
      70,    -1,    72,    73,    -1,    -1,    76,    77,    78,    79,
      80,    81,     5,    -1,     7,    -1,    -1,    10,    11,    -1,
      13,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    27,    28,    29,    79,    31,    -1,
      -1,    34,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,     5,    -1,
       7,    -1,    -1,    10,    11,    -1,    13,    -1,    15,    -1,
      -1,    18,    19,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      27,    28,    29,     5,    31,     7,    -1,    34,    10,    11,
      -1,    13,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    31,
      -1,    -1,    34,     5,    -1,     7,    -1,    -1,    10,    11,
      -1,    13,    -1,    15,    71,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    79,    25,    -1,    27,    28,    29,     5,    31,
       7,    -1,    34,    10,    11,    -1,    13,    -1,    15,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    79,    25,    -1,
      27,    28,    29,    -1,    31,    -1,     5,    34,     7,    -1,
      -1,    10,    11,    -1,    13,    -1,    15,    16,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    27,    28,
      29,     5,    31,     7,    -1,    34,    10,    11,    -1,    13,
      -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    79,    27,    28,    29,    -1,    31,    -1,     5,
      34,     7,    -1,    -1,    10,    11,    -1,    13,    -1,    15,
      -1,    -1,    18,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      79,    27,    28,    29,     5,    31,     7,    -1,    34,    10,
      11,    -1,    13,    -1,    15,    16,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    27,    28,    29,    -1,
      31,    -1,     5,    34,     7,    -1,    -1,    10,    11,    -1,
      13,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    27,    28,    29,     5,    31,     7,
      -1,    34,    10,    11,    -1,    13,    -1,    15,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    27,
      28,    29,    -1,    31,    -1,     5,    34,     7,    -1,    -1,
      10,    11,    -1,    13,    -1,    15,    -1,    -1,    18,    -1,
      -1,    -1,    13,    -1,    15,    16,    79,    27,    28,    29,
      21,    31,    -1,    -1,    34,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    15,    16,    -1,    -1,
      -1,    79,    21,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    13,    62,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    15,    27,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    62,   104,   106,   109,
     110,   111,   117,   118,   119,   148,   149,   150,   151,   152,
     119,   117,    27,   112,   105,   107,   108,   117,    60,   106,
     106,    19,   132,   133,    15,    21,   118,     0,   105,    16,
     105,    25,    26,   105,     9,   132,    27,    20,     5,     7,
      10,    11,    13,    15,    18,    25,    27,    28,    29,    31,
      34,    65,    66,    67,    68,    69,    70,    72,    73,    76,
      77,    78,    79,    80,    81,    83,    84,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   102,   104,   106,   130,   131,   132,   135,   136,
     137,   138,   141,   142,   144,   146,   147,   105,    22,    27,
      86,    99,   103,   150,    19,   108,   117,    25,    19,    71,
     100,   128,   140,   102,   110,   115,   125,    17,    15,    86,
      86,   103,    25,    17,    25,    21,    27,   130,    15,    15,
      25,   102,    15,    15,    15,    86,    15,    15,    15,    21,
      24,    30,    31,    34,     9,    41,    42,    44,    45,    46,
      47,    48,   101,    88,    12,    13,    14,    10,    11,    39,
      40,     3,     4,    33,    35,    32,    38,     7,     8,     6,
      36,    23,    37,    25,    26,    20,   104,   134,   136,   130,
     134,    16,    27,   106,   120,   121,   123,   124,    22,   113,
     114,   115,   128,   129,   110,    16,   115,    15,    21,   119,
     126,   127,    16,   130,    17,   130,    22,    25,    78,   137,
     102,    25,   102,   102,   125,    28,    28,    16,    85,   100,
     102,    27,    27,   100,    88,    88,    88,    89,    89,    90,
      90,    91,    91,    91,    91,    92,    92,    93,    94,    95,
      96,   102,    97,   100,   134,    15,   117,   119,   126,    16,
      26,   122,    16,    26,    20,   114,   116,   117,    20,    26,
      21,    16,   120,   126,    22,   103,   127,    15,    21,    88,
     130,    27,    15,   137,    16,    16,    16,    16,    26,    16,
      26,    16,    26,    22,    17,   123,    27,    25,    26,   105,
      20,   128,    29,    16,    16,    22,    16,   120,    22,   103,
      25,   102,    16,   102,   130,   130,   130,     7,   145,    25,
      27,   143,   100,    99,   117,    25,    22,    16,    22,    16,
     130,    16,    74,   130,   139,    27,    16,    21,    26,    16,
      25,   130,   130,    26,    25,    29,   143,    25,   145,    22,
      26,   143
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    86,    86,    86,    86,
      86,    86,    87,    87,    87,    87,    87,    87,    88,    88,
      89,    89,    89,    89,    90,    90,    90,    91,    91,    91,
      92,    92,    92,    92,    92,    93,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   101,   101,   101,   101,   101,   101,   101,   101,
     102,   102,   103,   104,   104,   105,   106,   106,   106,   106,
     107,   107,   108,   108,   109,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   111,   112,   113,
     113,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     118,   118,   118,   118,   118,   119,   119,   120,   121,   121,
     122,   123,   123,   123,   124,   124,   125,   125,   126,   126,
     126,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     128,   128,   128,   128,   129,   129,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   131,   131,   131,   132,   132,
     132,   132,   133,   134,   135,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   143,   143,   143,   144,   145,   145,   146,   146,   146,
     146,   147,   147,   147,   147,   148,   149,   149,   150,   150,
     150,   151,   152,   152
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     4,     0,     1,     2,     1,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       2,     4,     2,     1,     1,     3,     2,     1,     1,     3,
       4,     3,     5,     5,     4,     1,     2,     1,     1,     3,
       1,     2,     2,     1,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     1,     3,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     3,
       3,     4,     1,     1,     1,     2,     1,     2,     1,     2,
       6,     5,     2,     1,     5,     2,     3,     5,     5,     7,
       1,     3,     4,     6,     7,     2,     4,     5,     7,     6,
       7,     2,     2,     2,     3,     1,     1,     3,     1,     1,
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

#define YYBACKUP(Token, Value)                                  \
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
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

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

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 78 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																								tEntry* entry=find_entry(scope_st,(yyvsp[0].Str));
																								if(!entry){
																											if(is_keyword((yyval.Node)->s))(yyval.Node)->type="void";
																											else yyerror(string((yyvsp[0].Str)) + " not declared");
																										}
																								else{		
																									string type = entry->type;
																									if(type == ""){
																										(yyval.Node)->type = "";
																										yyerror(string((yyvsp[0].Str)) + " is not declared in this scope.");
																									}else{
																										(yyval.Node)->type=type;
																										(yyval.Node)->key=entry->key;
																										(yyval.Node)->size=entry->size;
																										(yyval.Node)->init=entry->init;
																									}
																								}
																							}
#line 1859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 97 "parser.y" /* yacc.c:1646  */
    {
																								(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																								(yyval.Node)->key=(yyval.Node)->s;
																								string con=(yyval.Node)->s;
																								(yyval.Node)->init=1;
																								string str2;
																								float num;
																								int a=num;
																								if(a==num){
																									(yyval.Node)->val_type=1;
																									(yyval.Node)->num = num;
																									(yyval.Node)->type="int";
																								}else{
																									(yyval.Node)->val_type=3;
																									(yyval.Node)->num = num;
																									(yyval.Node)->type="float";
																								}
																							}
#line 1882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 115 "parser.y" /* yacc.c:1646  */
    {	
																								(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																								(yyval.Node)->s = add_quotes((yyval.Node)->s);
																								(yyval.Node)->type = string("char *");
																								(yyval.Node)->key=(yyval.Node)->s;
																								(yyval.Node)->init=1;
																							}
#line 1894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 122 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=(yyvsp[-1].Node);}
#line 1900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 126 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 1906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 127 "parser.y" /* yacc.c:1646  */
    {	
																							// printf("postfix called\n");
																							(yyval.Node) = new_2_node("[]", (yyvsp[-3].Node), (yyvsp[-1].Node));

																							if((yyvsp[-1].Node)->s.substr(0,1) == "-"){
																								yyerror( "Index of an Array cannot be negative.");

																							}else{ 
																								int curr_idx;
																								curr_idx = stoi((yyvsp[-1].Node)->key);

																								tEntry* entry = find_entry(scope_st, (yyvsp[-3].Node)->key);
																								if(!entry){
																									yyerror((yyvsp[-3].Node)->key + " is not declared");
																								}else{
																									(yyval.Node)->type=entry->type;
																								}

																								int arr_length = entry->size/getSize(entry->type);


																								if(curr_idx >= arr_length){
																									yyerror("Array index is out of bound.");
																								}

																								(yyval.Node)->key=(yyvsp[-3].Node)->key;
																								(yyval.Node)->val_type=(yyvsp[-3].Node)->val_type;
																								(yyval.Node)->num=(yyvsp[-3].Node)->num;
																								if((yyvsp[-3].Node)->init==1 && (yyvsp[-1].Node)->init==1)
																									(yyval.Node)->init=1;
																								}
																							}
#line 1943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 159 "parser.y" /* yacc.c:1646  */
    {	
																								(yyval.Node) = new_1_node("()", (yyvsp[-2].Node));

																							 	tEntry* entry=find_entry(scope_st,(yyvsp[-2].Node)->key);
																								if(!entry){
																									yyerror((yyvsp[-2].Node)->key +  " not declared");
																								}
																								else{
																								
																									string type = entry->type;
																									(yyval.Node)->type=type;
																									(yyval.Node)->key=(yyvsp[-2].Node)->key;
																									(yyval.Node)->val_type=(yyvsp[-2].Node)->val_type;
																									(yyval.Node)->num=(yyvsp[-2].Node)->num;
																									(yyval.Node)->init=(yyvsp[-2].Node)->init;

																									if(type == ""){
																										yyerror("Invalid function call");
																										yyerror("Call to the function is not valid.");
																									}
																									string param=(yyval.Node)->type+" "+(yyvsp[-2].Node)->key;
																									auto func_iter = FUNC_PARAM.find(param);
																									if(func_iter == FUNC_PARAM.end()){
																										yyerror("Function "+(yyvsp[-2].Node)->key+" not declared");
																									}
																									func_args="";
																								}
																							}
#line 1976 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 187 "parser.y" /* yacc.c:1646  */
    {	
																								(yyval.Node) = new_2_node("()", (yyvsp[-3].Node),(yyvsp[-1].Node));
																							 	tEntry* entry=find_entry(scope_st,(yyvsp[-3].Node)->key);

																								if(entry){
																									string type = entry->type;
																									(yyval.Node)->init=(yyvsp[-3].Node)->init;
																									(yyval.Node)->type=type;
																									(yyval.Node)->key=(yyvsp[-3].Node)->key;
																									(yyval.Node)->val_type=(yyvsp[-3].Node)->val_type;
																									(yyval.Node)->num=(yyvsp[-3].Node)->num;

																									string param=(yyval.Node)->type+" "+(yyvsp[-3].Node)->key;

																									if(FUNC_PARAM.find(param)== FUNC_PARAM.end()){
																										yyerror("Function "+(yyvsp[-3].Node)->key+" not declared");
																									}else {
																										string param=FUNC_PARAM[(yyval.Node)->type+" "+(yyvsp[-3].Node)->key];
																										const char delim = ',';
																										std::vector<std::string> param1;
																										tokenize(param, delim, param1);
																										std::vector<std::string> arg1;
																										tokenize(func_args, delim, arg1);
																										if(arg1.size()==param1.size()){
                                                            								                for(int i=0;i<arg1.size();i++){
																											     if(param1[i].substr(0,arg1[i].size())!=arg1[i])
																											         yyerror("Invalid type of arguments");
																										    }

																										}else 
																										yyerror("Invalid number of arguments");
																									}
																								}
																							}
#line 2015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 221 "parser.y" /* yacc.c:1646  */
    {	

																								(yyval.Node) = new_2_node(".", (yyvsp[-2].Node), new_leaf_node((yyvsp[0].Str)));
																								tEntry* entry=find_entry(scope_st,(yyvsp[-2].Node)->key);
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;


																								if(entry){
																									tEntry* str_ent= find_struct_entry((yyvsp[-2].Node)->type,(yyvsp[0].Str));
																									if(str_ent){
																										    if(str_ent->key != (yyvsp[0].Str))
																											yyerror("Type Mismatch");
																										    (yyval.Node)->type=str_ent->type;


																									}
																									else{
																										     yyerror("Invalid attribute " + string((yyvsp[0].Str)));
																											 (yyval.Node)->type = "error_type";
																									}
																								}	



																							}
#line 2045 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 246 "parser.y" /* yacc.c:1646  */
    {
																								(yyval.Node) = new_2_node("->", (yyvsp[-2].Node), new_leaf_node((yyvsp[0].Str)));
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																							}
#line 2054 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 250 "parser.y" /* yacc.c:1646  */
    {
    												    										(yyval.Node) = new_1_node("++", (yyvsp[-1].Node));
																								(yyval.Node)->key=(yyvsp[-1].Node)->key;
																								(yyval.Node)->init=(yyvsp[-1].Node)->init;
																								(yyval.Node)->type=(yyvsp[-1].Node)->type;
																								(yyval.Node)->val_type=(yyvsp[-1].Node)->val_type;
																								(yyval.Node)->num=(yyvsp[-1].Node)->num+1;

																								string assign = postfix_expr67((yyvsp[-1].Node) -> type);
																								if(assign == "")
																								    yyerror("Increment operation is not defined for this type");

																								else
																								   (yyval.Node) -> type = assign;



																							}
#line 2077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 268 "parser.y" /* yacc.c:1646  */
    {
																								(yyval.Node) = new_1_node("--", (yyvsp[-1].Node));
																								(yyval.Node)->key=(yyvsp[-1].Node)->key;
																								(yyval.Node)->val_type=(yyvsp[-1].Node)->val_type;
																								(yyval.Node)->num = (yyvsp[-1].Node)->num-1;
																								(yyval.Node)->init = (yyvsp[-1].Node)->init;
																								(yyval.Node)->type = (yyvsp[-1].Node)->type;

																							}
#line 2091 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 280 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node)=(yyvsp[0].Node);
																							 	if((yyvsp[0].Node)->init == 1)(yyval.Node)->init = 1;
																								func_args=(yyvsp[0].Node)->type;
																								(yyval.Node)->key=(yyvsp[0].Node)->key;
																								(yyval.Node)->val_type=(yyvsp[0].Node)->val_type;
																								(yyval.Node)->num=(yyvsp[0].Node)->num;
																								(yyval.Node)->init=(yyvsp[0].Node)->init;

																							}
#line 2105 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 289 "parser.y" /* yacc.c:1646  */
    {
																								(yyval.Node)=new_2_node(",",(yyvsp[-2].Node),(yyvsp[0].Node));
																								string assign = "";

																								func_args=func_args +" ,"+(yyvsp[0].Node)->type;
																							 	(yyval.Node)->type = assign;
																							 	if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init == 1)(yyval.Node)->init = 1;
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																								(yyval.Node)->val_type=(yyvsp[-2].Node)->val_type;
																								(yyval.Node)->num=(yyvsp[-2].Node)->num+1;

																							}
#line 2122 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 304 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2128 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 305 "parser.y" /* yacc.c:1646  */
    {   (yyval.Node) = new_1_node("++", (yyvsp[0].Node));
																								tEntry* entry=find_entry(scope_st,(yyvsp[0].Node)->key);
																								string type = entry->type;

																								if(entry){
																									if((yyvsp[0].Node)->init == 1)
																										(yyval.Node)->init = 1;
																								else
																									yyerror("Variable not Initialized");
																								(yyval.Node)->type = type;
																								(yyval.Node)->key=(yyvsp[0].Node)->key;
																								(yyval.Node)->val_type=(yyvsp[0].Node)->val_type;
																								(yyval.Node)->num=(yyvsp[0].Node)->num+1;

																							}
											 												string assign = postfix_expr67((yyvsp[0].Node) -> type);
																							 if(assign == ""){
																								 yyerror("Increment operation is not defined for this type.");
											 												}
																							else{
																								(yyval.Node) -> type = assign;
											 												}
																							}
#line 2156 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 328 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = new_1_node("--", (yyvsp[0].Node));
																							tEntry* entry=find_entry(scope_st,(yyvsp[0].Node)->key);
																							if(entry){
																								string type = entry->type;
																								(yyval.Node)->num = (yyvsp[0].Node)->num-1;
																							if((yyvsp[0].Node)->init == 1)
																								(yyval.Node)->init = 1;
																							}
																							(yyval.Node)->type = (yyvsp[0].Node)->type;
																							(yyval.Node)->key=(yyvsp[0].Node)->key;
																							(yyval.Node)->val_type=(yyvsp[0].Node)->val_type;
																							(yyval.Node)->num=(yyvsp[0].Node)->num-1;

																							string assign = postfix_expr67((yyvsp[0].Node) -> type);
																							if(assign == ""){
																								yyerror("Decrement operation is not defined for this type.");
																							}else{
																								(yyval.Node) -> type = assign;
																							}	
																							}
#line 2181 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 348 "parser.y" /* yacc.c:1646  */
    {
																							make_children((yyvsp[-1].Node), (yyvsp[0].Node), NULL, NULL); (yyval.Node) = (yyvsp[-1].Node);
																							tEntry* entry=find_entry(scope_st,(yyvsp[0].Node)->s);
																							if(!entry){
																								yyerror((yyvsp[0].Node)->key+" not declared");
																							}else{
																								string type = entry->type;
																								if((yyvsp[0].Node)->init == 1)
																								(yyval.Node)->init = 1;
																							}
																							string type = entry->type;
																							(yyval.Node)->type = (yyvsp[0].Node)->type;
																							(yyval.Node)->key=(yyvsp[0].Node)->key;
																							(yyval.Node)->num=(yyvsp[0].Node)->num;
																							(yyval.Node)->val_type=(yyvsp[0].Node)->val_type;
											 												string assign = unary_expr((yyvsp[-1].Node)->s, (yyvsp[0].Node) -> type, 1);
																							if(assign == ""){
												 												yyerror("Not consistent with the operator" + (yyvsp[-1].Node)->key);
																							}

																							}
#line 2207 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 369 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = new_1_node("SIZEOF", (yyvsp[0].Node));
																							 	(yyval.Node) -> type = "int";
																							 	(yyval.Node)->init=1;
																							 	(yyval.Node)->key=(yyvsp[0].Node)->key;
																							 	(yyval.Node)->val_type=(yyvsp[0].Node)->val_type;
																								 (yyval.Node)->num=(yyvsp[0].Node)->num;
																							}
#line 2219 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 376 "parser.y" /* yacc.c:1646  */
    {
																								(yyval.Node) = new_1_node("SIZEOF",(yyvsp[-1].Node));
																								(yyval.Node) -> type = "int";
																								(yyval.Node)->init=1;
																								(yyval.Node)->key=(yyvsp[-1].Node)->key;
																							}
#line 2230 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 385 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_1_node("&", NULL);(yyval.Node)->key = (yyval.Node)->s;(yyval.Node)->type="&";}
#line 2236 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 386 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_1_node("*", NULL);(yyval.Node)->key = (yyval.Node)->s;(yyval.Node)->type="*";}
#line 2242 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 387 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_1_node("+", NULL);(yyval.Node)->key = (yyval.Node)->s;(yyval.Node)->type="+";}
#line 2248 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 388 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_1_node("-", NULL);(yyval.Node)->key = (yyval.Node)->s;(yyval.Node)->type="-";}
#line 2254 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 389 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_1_node("~", NULL);(yyval.Node)->key = (yyval.Node)->s;(yyval.Node)->type="~";}
#line 2260 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 390 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_1_node("!", NULL);(yyval.Node)->key = (yyval.Node)->s;(yyval.Node)->type="!";}
#line 2266 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 394 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2272 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 395 "parser.y" /* yacc.c:1646  */
    {
		 																						(yyval.Node) =  new_2_node("CAST_EXPR", (yyvsp[-2].Node), (yyvsp[0].Node));
	 																							(yyval.Node)->type = (yyvsp[-2].Node)->type;
																								if((yyvsp[0].Node)->init == 1)(yyval.Node)->init = 1;
																									(yyval.Node)->key=(yyvsp[0].Node)->key;
														 									}
#line 2283 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 404 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2289 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 405 "parser.y" /* yacc.c:1646  */
    {
																								(yyval.Node) = new_2_node("*", (yyvsp[-2].Node), (yyvsp[0].Node));
																								string assign = multiplicative_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type, '*'); 
																								if(assign == ""){
																									yyerror("Not compatible for using * operator.");
																								}else{
																									if(assign == "int"){
																										(yyval.Node)->type = "long long";
																									}else if(assign == "float"){
																										(yyval.Node)->type = "long double";
																								}
																							} 
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;
																							}
#line 2309 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 420 "parser.y" /* yacc.c:1646  */
    {	
																							(yyval.Node) = new_2_node("/", (yyvsp[-2].Node), (yyvsp[0].Node));
																							string assign = multiplicative_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type, '/'); 
																							if(assign == ""){
																								yyerror("Types are not compatible for using / operator.");
																							}else{
																								if(assign=="int")(yyval.Node)->type = "long long";
																								if(assign=="float")(yyval.Node)->type = "long double";
																							} 
																							if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																							}
#line 2326 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 436 "parser.y" /* yacc.c:1646  */
    {	
																								(yyval.Node) = new_2_node("%", (yyvsp[-2].Node), (yyvsp[0].Node));
																								string assign = multiplicative_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type, '%'); 
																								if(assign == ""){
																									yyerror("Types arenot compatible for using % operator.");
																								}else{
																									if(assign == "int"){
																										(yyval.Node)->type = "long long";
																								} 
																								}
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;
																							}
#line 2344 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 452 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2350 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 453 "parser.y" /* yacc.c:1646  */
    {	
																								(yyval.Node) = new_2_node("+", (yyvsp[-2].Node), (yyvsp[0].Node));
																								string assign=additive_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type,'+');
																								if(assign==""){
																									yyerror("Types are not compatible for using + operator.");
																								}else (yyval.Node)->type=assign;
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;
																 							}
#line 2364 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 462 "parser.y" /* yacc.c:1646  */
    {
																								(yyval.Node) = new_2_node("-", (yyvsp[-2].Node), (yyvsp[0].Node));
																								string assign=additive_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type,'-');
																								if(assign==""){
																									yyerror("Types are not compatible for using - operator.");
																								}else {
																									if(assign=="int")(yyval.Node)->type="long long";
																									else if(assign=="float")(yyval.Node)->type="long double";
																									else (yyval.Node)->type=assign;
																								}
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;
																							}
#line 2382 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 478 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2388 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 479 "parser.y" /* yacc.c:1646  */
    {
																							(yyval.Node) = new_2_node("<<", (yyvsp[-2].Node), (yyvsp[0].Node));
																							if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init ==1)
																  							 	(yyval.Node)->init = 1;
																  							string assign = shift_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type);
																  							if(assign == ""){
																							  yyerror("The operator << has invalid operands.");
																 							}else{
																							  (yyval.Node)->type = (yyvsp[-2].Node)->type;
																 							}
																							(yyval.Node)->key=(yyvsp[-2].Node)->key;
																 							}
#line 2405 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 491 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node(">>", (yyvsp[-2].Node), (yyvsp[0].Node));
																   							if((yyvsp[-2].Node)->init == 1 && (yyvsp[0].Node)->init ==1)
																   								(yyval.Node)->init = 1;
																  							string assign = shift_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type);
																  							if(assign == ""){
																								  yyerror("The operator << has invalid operands.");
																  							}else{
																								  (yyval.Node)->type = (yyvsp[-2].Node)->type;
																  							}
																  							(yyval.Node)->key=(yyvsp[-2].Node)->key;
																							}
#line 2421 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 505 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 506 "parser.y" /* yacc.c:1646  */
    {
																								(yyval.Node) = new_2_node("<", (yyvsp[-2].Node), (yyvsp[0].Node));
																								string assign=relational_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																								if(assign=="")
																								  yyerror("The operator < has invalid operands.");
																								else{
																									if(assign=="bool"){
																										(yyval.Node)->type=assign;	
																									}else if(assign == "Bool"){
																										(yyval.Node)->type = "Bool";
																										yyerror("Warning : Comparison between pointer and integer");
																									}
																								}
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;
																							}
#line 2448 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 522 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node(">", (yyvsp[-2].Node), (yyvsp[0].Node));
																								string assign=relational_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																								if(assign=="")
																								  yyerror("The operator > has invalid operands.");
																								else{
																									if(assign=="bool"){
																										(yyval.Node)->type=assign;	
																									}else if(assign == "Bool"){
																										(yyval.Node)->type = "Bool";
																										yyerror("Warning : Comparison between pointer and integer");
																									}
																								}	
																								(yyval.Node)->key=(yyvsp[-2].Node)->key;	
																								if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;															
																							}
#line 2468 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 537 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("<=", (yyvsp[-2].Node), (yyvsp[0].Node));
																							string assign=relational_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																							if(assign=="")
																							  yyerror("The operator <= has invalid operands.");
																							else{
																								if(assign=="bool"){
																									(yyval.Node)->type=assign;	
																								}else if(assign == "Bool"){
																									(yyval.Node)->type = "Bool";
																									yyerror("Warning : Comparison between pointer and integer");
																								}
																							}	
																							(yyval.Node)->key=(yyvsp[-2].Node)->key;
																							if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;																
																							}
#line 2488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 552 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node(">=", (yyvsp[-2].Node), (yyvsp[0].Node));
																							string assign=relational_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																							if(assign=="")
																							  yyerror("The operator >= has invalid operands.");
																							else{
																								if(assign=="bool"){
																									(yyval.Node)->type=assign;	
																								}else if(assign == "Bool"){
																									(yyval.Node)->type = "Bool";
																									yyerror("Warning : Comparison between pointer and integer");
																								}
																							}	
																							if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;
																							(yyval.Node)->key=(yyvsp[-2].Node)->key;																
																							}
#line 2508 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 570 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 571 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("==", (yyvsp[-2].Node), (yyvsp[0].Node));
																							string assign=equality_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																							if(assign=="")
																							  yyerror("The operator == has invalid operands.");
																							else{
																								if(assign=="True"){
																									(yyval.Node)->type="bool";	
																								}else if(assign == "true"){
																								
																									yyerror("Comparison between pointer and integer");
																								}
																							}
																							(yyval.Node)->key=(yyvsp[-2].Node)->key;
																							if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;																	
																							}
#line 2534 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 586 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("!=", (yyvsp[-2].Node), (yyvsp[0].Node));
																							string assign=equality_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																							if(assign=="")
																							  yyerror("The operator != has invalid operands.");
																							else{
																								if(assign=="True"){
																									(yyval.Node)->type="bool";	
																								}else if(assign == "true"){

																									yyerror("Comparison between pointer and integer");
																								}
																							}	
																							(yyval.Node)->key=(yyvsp[-2].Node)->key;
																							if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;																
																							}
#line 2554 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 604 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 605 "parser.y" /* yacc.c:1646  */
    {
																							(yyval.Node) = new_2_node("&", (yyvsp[-2].Node), (yyvsp[0].Node));
																							string assign=bitwise_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																							if(assign=="")
																								yyerror("Invalid type for '&' expression");
																							else if(assign=="True"){
																								(yyval.Node)->type = "long long";
																
																							}else if(assign=="true"){
																								(yyval.Node)->type = "bool";
																							}
																							(yyval.Node)->key=(yyvsp[-2].Node)->key;
																							if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;
																							}
#line 2579 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 622 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2585 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 623 "parser.y" /* yacc.c:1646  */
    {
																							(yyval.Node) = new_2_node("^", (yyvsp[-2].Node), (yyvsp[0].Node));
																							string assign=bitwise_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																							if(assign=="")
																								yyerror("Invalid type for '^' expression");
																							else if(assign=="true"){
																								(yyval.Node)->type = "bool";
																							}else if(assign=="True"){
																								(yyval.Node)->type = "long long";
																							}	
																							(yyval.Node)->key=(yyvsp[-2].Node)->key;
																							if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;
																							}
#line 2603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 639 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2609 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 640 "parser.y" /* yacc.c:1646  */
    {
																							(yyval.Node) = new_2_node("|", (yyvsp[-2].Node), (yyvsp[0].Node));
																							string assign=bitwise_expr((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
																							if(assign=="")
																								yyerror("Invalid type for '|' expression");
																							else if(assign=="true"){
																								(yyval.Node)->type = "bool";
																							}else if(assign=="True"){
																								(yyval.Node)->type = "long long";
																							}
																							(yyval.Node)->key=(yyvsp[-2].Node)->key;
																							if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;
																							}
#line 2627 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 656 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2633 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 657 "parser.y" /* yacc.c:1646  */
    {
																							(yyval.Node) = new_2_node("&&", (yyvsp[-2].Node), (yyvsp[0].Node));
																							(yyval.Node)->type = "bool";
																							(yyval.Node)->key=(yyvsp[-2].Node)->key;
																							if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;
																  							}
#line 2644 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 666 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 667 "parser.y" /* yacc.c:1646  */
    {
																							(yyval.Node) = new_2_node("||", (yyvsp[-2].Node), (yyvsp[0].Node));
																							(yyval.Node)->type = "bool";
																							(yyval.Node)->key=(yyvsp[-2].Node)->key;
																							if((yyvsp[-2].Node)->init==1 && (yyvsp[0].Node)->init==1) (yyval.Node)->init=1;
																							}
#line 2661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 676 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 677 "parser.y" /* yacc.c:1646  */
    {
																								(yyval.Node) = new_3_node("?:", (yyvsp[-4].Node), (yyvsp[-2].Node), (yyvsp[0].Node));
																								string  assign = conditional_expr((yyvsp[-4].Node)->type, (yyvsp[0].Node)->type);
																								if(assign == ""){
																									yyerror("The types are not compatible for conditional expression.");
																								}else{
																									(yyval.Node)->type = assign;
																								}
																								(yyval.Node)->key=(yyvsp[0].Node)->key;
																								if((yyvsp[-4].Node)->init==1 && (yyvsp[0].Node)->init==1 && (yyvsp[-2].Node)->init==1) (yyval.Node)->init=1;
																							}
#line 2683 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 691 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2689 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 692 "parser.y" /* yacc.c:1646  */
    {
																									make_children((yyvsp[-1].Node), (yyvsp[-2].Node), (yyvsp[0].Node), NULL); (yyval.Node) = (yyvsp[-1].Node);
																									string assign = assignment_expr((yyvsp[-2].Node)->type, (yyvsp[0].Node)->type, (yyvsp[-1].Node)->s);
																									if(assign == ""){
																										yyerror("Cannot assign type " + (yyvsp[0].Node)->type + " to " + (yyvsp[-2].Node)->type);
																									}else{
																										if(assign == "true")
																											(yyval.Node)->type = (yyvsp[-2].Node)->type;
																										else if(assign =="warning"){
																											(yyval.Node)->type = (yyvsp[-2].Node)->type;
																											yyerror("Assignment with incompatible pointer type");
																										}		
																									}
																									(yyval.Node)->key=(yyvsp[0].Node)->key;
																  							}
#line 2709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 711 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("=", NULL, NULL);  (yyval.Node)->key = (yyval.Node)->s;(yyval.Node)->type = (yyvsp[0].Str);}
#line 2715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 712 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("*=", NULL, NULL); (yyval.Node)->key = (yyval.Node)->s;(yyval.Node)->type = (yyvsp[0].Str);}
#line 2721 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 713 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("/=", NULL, NULL); (yyval.Node)->key = (yyval.Node)->s;(yyval.Node)->type = (yyvsp[0].Str);}
#line 2727 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 714 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("+=", NULL, NULL); (yyval.Node)->key = (yyval.Node)->s;(yyval.Node)->type = (yyvsp[0].Str);}
#line 2733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 715 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("-=", NULL, NULL); (yyval.Node)->key = (yyval.Node)->s;(yyval.Node)->type = (yyvsp[0].Str);}
#line 2739 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 716 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("&=", NULL, NULL); (yyval.Node)->key = (yyval.Node)->s;(yyval.Node)->type = (yyvsp[0].Str);}
#line 2745 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 717 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("^=", NULL, NULL); (yyval.Node)->key = (yyval.Node)->s;(yyval.Node)->type = (yyvsp[0].Str);}
#line 2751 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 718 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("|=", NULL, NULL); (yyval.Node)->key = (yyval.Node)->s;(yyval.Node)->type = (yyvsp[0].Str);}
#line 2757 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 722 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2763 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 723 "parser.y" /* yacc.c:1646  */
    {
																								(yyval.Node) = new_2_node(",", (yyvsp[-2].Node), (yyvsp[0].Node));
																							}
#line 2771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 729 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 733 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[-2].Node);}
#line 2783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 734 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("Declaration", (yyvsp[-3].Node), (yyvsp[-2].Node));}
#line 2789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 737 "parser.y" /* yacc.c:1646  */
    {type_var = "";}
#line 2795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 741 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 742 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("Declaration Specifier", (yyvsp[-1].Node), (yyvsp[0].Node));}
#line 2807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 743 "parser.y" /* yacc.c:1646  */
    { (yyval.Node) = (yyvsp[0].Node);}
#line 2813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 744 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("Declaration Specifier", (yyvsp[-1].Node), (yyvsp[0].Node));}
#line 2819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 748 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 2825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 749 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node(",", (yyvsp[-2].Node), (yyvsp[0].Node));}
#line 2831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 753 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node) = (yyvsp[0].Node);
																									if((find_entry(scope_st,(yyvsp[0].Node)->key))){
																										yyerror((yyvsp[0].Node)->key + " is redeclared.");
																										
																									}
																									else{
																										insert_entry((yyvsp[0].Node)->key,(yyvsp[0].Node)->type,0,(yyvsp[0].Node)->size,curr_scope);
																									}
																								}
#line 2846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 763 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node) = new_2_node("=", (yyvsp[-2].Node), (yyvsp[0].Node));
																									if((find_entry(scope_st,(yyvsp[-2].Node)->key))){
																										yyerror((yyvsp[-2].Node)->key + " is redeclared.");
																										
																									}
																									else{
																										insert_entry((yyvsp[-2].Node)->key,(yyvsp[-2].Node)->type,1,(yyvsp[-2].Node)->size,curr_scope);
																									}
																								}
#line 2861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 776 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_leaf_node((yyvsp[0].Str));}
#line 2867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 780 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									if(type_var=="")type_var="void";
																									else type_var += "void";
																								}
#line 2876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 784 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									if(type_var=="")type_var="char";
																									else type_var += " char";
																								}
#line 2885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 788 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									if(type_var=="")type_var="short";
																									else type_var += " short";
																								}
#line 2894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 792 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									if(type_var=="")type_var="bool";
																									else type_var += " bool";
																								}
#line 2903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 796 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									if(type_var=="")type_var="int";
																									else type_var+=" int";
																								}
#line 2913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 801 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									if(type_var=="")type_var="long";
																									else type_var+=" long";
																								}
#line 2923 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 806 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									if(type_var=="")type_var="float";
																									else type_var+=" float";
																								}
#line 2933 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 811 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									if(type_var=="")type_var="double";
																									else type_var+=" double";
																								}
#line 2943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 816 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									if(type_var=="")type_var="signed";
																									else type_var+=" signed";
																								}
#line 2953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 821 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									if(type_var=="")type_var="unsigned";
																									else type_var+=" unsigned";
																								}
#line 2963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 826 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									if(type_var=="")type_var="string";
																									else type_var+=" string";
																								}
#line 2973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 831 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node)=(yyvsp[0].Node);
																									if(type_var=="")type_var="struct "+(yyval.Node)->child1->s;
																									else type_var+="struct "+(yyval.Node)->child1->s;
																								}
#line 2983 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 838 "parser.y" /* yacc.c:1646  */
    {	
																									(yyval.Node) = new_1_node("STRUCT", new_leaf_node((yyvsp[0].Str)));
																									(yyval.Node)->size = getSize("struct " + string((yyvsp[-1].Str)));
																								}
#line 2992 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 845 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node)=new_leaf_node((yyvsp[0].Str));
																									struct_name = string("struct " + (yyval.Node)->s);
																								}
#line 3000 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 852 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=(yyvsp[0].Node);}
#line 3006 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 853 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node) = new_2_node("struct_declaration_list",(yyvsp[-1].Node),(yyvsp[0].Node));
																									(yyval.Node)->size = (yyvsp[-1].Node)->size + (yyvsp[0].Node)->size;
																								}
#line 3015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 860 "parser.y" /* yacc.c:1646  */
    {
																								(yyval.Node) = new_2_node("struct_declaration",(yyvsp[-3].Node),(yyvsp[-2].Node));
																								(yyval.Node)->size=(yyvsp[-2].Node)->size;
																								}
#line 3024 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 867 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_2_node("specifier_qualifier_list",(yyvsp[-1].Node),(yyvsp[0].Node));}
#line 3030 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 868 "parser.y" /* yacc.c:1646  */
    {	
																									(yyval.Node)=(yyvsp[0].Node);
																									(yyval.Node)->type=(yyvsp[0].Node)->type;
																								}
#line 3039 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 875 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node)=(yyvsp[0].Node);
																									if((find_struct_entry(struct_name,(yyvsp[0].Node)->key)))
																										yyerror("Line " + to_string((yyvsp[0].Node)->line_num) + ": " + (yyvsp[0].Node)->key + " is already declared");
																									else{
																										insert_struct_entry(struct_name, (yyvsp[0].Node)->key,(yyvsp[0].Node)->type,(yyvsp[0].Node)->size);
																										
																									}
																								}
#line 3053 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 884 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node)=new_2_node(",",(yyvsp[-2].Node),(yyvsp[0].Node));
																									(yyval.Node)->size = (yyvsp[-2].Node)->size + (yyvsp[0].Node)->size;
																								}
#line 3062 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 891 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node) = new_2_node("declarator",(yyvsp[-1].Node),(yyvsp[0].Node));
																									(yyval.Node)->type=(yyvsp[-1].Node)->type+" "+(yyvsp[0].Node)->type;
																									(yyval.Node)->key=(yyvsp[0].Node)->key;(yyval.Node)->size=getSize((yyval.Node)->type);
																								}
#line 3072 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 896 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node) = (yyvsp[0].Node);
																								}
#line 3080 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 902 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node) = new_leaf_node((yyvsp[0].Str));
																									(yyval.Node)->type=type_var;
																									(yyval.Node)->key=(yyvsp[0].Str);
																									(yyval.Node)->size=getSize((yyval.Node)->type);
																								}
#line 3091 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 908 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node) = new_1_node("()", (yyvsp[-1].Node));
																									(yyval.Node)->type=(yyvsp[-1].Node)->type;(yyval.Node)->key=(yyvsp[-1].Node)->s;
																									(yyval.Node)->size=(yyvsp[-1].Node)->size;
																								}
#line 3101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 913 "parser.y" /* yacc.c:1646  */
    {	
																									(yyval.Node) = new_2_node("[]",(yyvsp[-3].Node),(yyvsp[-1].Node));
																									(yyval.Node)->type=(yyvsp[-3].Node)->type;(yyval.Node)->key=(yyvsp[-3].Node)->s;
																									
																									(yyval.Node)->size=getSize((yyval.Node)->type)*stoi((yyvsp[-1].Node)->s);
																								}
#line 3112 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 919 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node) = new_1_node("[]",(yyvsp[-2].Node));
																									(yyval.Node)->type=(yyvsp[-2].Node)->type;(yyval.Node)->key=(yyvsp[-2].Node)->s;
																									(yyval.Node)->size=getSize((yyval.Node)->type);
																								}
#line 3122 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 924 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node) = new_2_node("()",(yyvsp[-4].Node),(yyvsp[-1].Node));
																									(yyval.Node)->type=(yyvsp[-4].Node)->type;(yyval.Node)->key=(yyvsp[-4].Node)->s;
																									(yyval.Node)->size=getSize((yyval.Node)->type);
																									FUNC_PARAM.insert(make_pair((yyvsp[-4].Node)->type+" "+(yyvsp[-4].Node)->key,func_params));
																									const char delim = ',';
																									std::vector<std::string> args;
																									tokenize(func_params, delim, args);
																									for(int i=0;i<args.size();i++){
																										const char delim1 = ' ';
																										std::vector<std::string> arg;
																										tokenize(args[i], delim1, arg);
																										string t="";
																										for(int j=0;j<arg.size()-1;j++){
																											if(t=="")t=arg[j];
																											else t+=" "+arg[j];
																										}
																										int size=getSize(t);																
																										insert_entry(arg[arg.size()-1],t,1,size,num_scopes+1);
																									}			
																									
																									func_params="";
																									insert_entry((yyvsp[-4].Node)->key,type_var,0,(yyvsp[-4].Node)->size,0);
    																								entry_map.insert(make_pair(num_scopes+1,(yyvsp[-4].Node)->key));
																								}
#line 3152 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 949 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node) = new_2_node("()",(yyvsp[-4].Node),(yyvsp[-1].Node));
																									(yyval.Node)->type=(yyvsp[-4].Node)->type;(yyval.Node)->key=(yyvsp[-4].Node)->s;
																									(yyval.Node)->size=getSize((yyval.Node)->type);
																									FUNC_PARAM.insert(make_pair((yyvsp[-4].Node)->type+" "+(yyvsp[-4].Node)->key,func_params));
																									func_params="";
																									insert_entry((yyvsp[-4].Node)->key,type_var,0,(yyvsp[-4].Node)->size,0);
    																								entry_map.insert(make_pair(num_scopes+1,(yyvsp[-4].Node)->key));
																								}
#line 3166 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 958 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node) = new_1_node("()", (yyvsp[-3].Node));
																									(yyval.Node)->type=(yyvsp[-3].Node)->type;(yyval.Node)->key=(yyvsp[-3].Node)->s;
																									(yyval.Node)->size=getSize((yyval.Node)->type);
																									FUNC_PARAM.insert(make_pair((yyvsp[-3].Node)->type+" "+(yyvsp[-3].Node)->key,func_params));
																									func_params="";
																									insert_entry((yyvsp[-3].Node)->key,(yyvsp[-3].Node)->type,0,(yyvsp[-3].Node)->size,0);
    																								entry_map.insert(make_pair(num_scopes+1,(yyvsp[-3].Node)->key));
																								}
#line 3180 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 970 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_leaf_node("*");(yyval.Node)->type="*";}
#line 3186 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 971 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_1_node("*",(yyvsp[0].Node));(yyval.Node)->type="* "+ (yyvsp[0].Node)->type;}
#line 3192 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 976 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=(yyvsp[0].Node);}
#line 3198 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 980 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=(yyvsp[0].Node);}
#line 3204 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 981 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_2_node(",",(yyvsp[-2].Node),(yyvsp[0].Node));}
#line 3210 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 985 "parser.y" /* yacc.c:1646  */
    {type_var="";}
#line 3216 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 989 "parser.y" /* yacc.c:1646  */
    {
																									if(func_params=="")
																									    func_params+=(yyvsp[0].Node)->type+" "+(yyvsp[0].Node)->key;
																									else
																									    func_params+=","+(yyvsp[0].Node)->type+" "+(yyvsp[0].Node)->key;
																									(yyval.Node)=new_2_node("parameter_declaration",(yyvsp[-1].Node),(yyvsp[0].Node));
																								}
#line 3228 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 996 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_2_node("parameter_declaration",(yyvsp[-1].Node),(yyvsp[0].Node));}
#line 3234 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 997 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=(yyvsp[0].Node);}
#line 3240 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1001 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_leaf_node((yyvsp[0].Str));}
#line 3246 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1002 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("," , (yyvsp[-2].Node), new_leaf_node((yyvsp[0].Str)));}
#line 3252 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1006 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=(yyvsp[0].Node);}
#line 3258 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1007 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_2_node("type_name",(yyvsp[-1].Node),(yyvsp[0].Node));}
#line 3264 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1011 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=(yyvsp[0].Node);}
#line 3270 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1012 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=(yyvsp[0].Node);}
#line 3276 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1013 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_2_node("pointer direct_abstract_declarator", (yyvsp[-1].Node), (yyvsp[0].Node));}
#line 3282 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1017 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_1_node("()",(yyvsp[-1].Node));}
#line 3288 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1018 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_leaf_node("[]");}
#line 3294 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1019 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_1_node("[]",(yyvsp[-1].Node));}
#line 3300 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1020 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_1_node("[]",(yyvsp[-2].Node));}
#line 3306 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1021 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_2_node("[]",(yyvsp[-3].Node),(yyvsp[-1].Node));}
#line 3312 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1022 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_leaf_node("()");}
#line 3318 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1023 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_1_node("()",(yyvsp[-1].Node));}
#line 3324 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1024 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_1_node("()",(yyvsp[-2].Node));}
#line 3330 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1025 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_2_node("()",(yyvsp[-3].Node),(yyvsp[-1].Node));}
#line 3336 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1029 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3342 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1030 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3348 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1031 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[-1].Node);}
#line 3354 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1032 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_1_node(",", (yyvsp[-2].Node));}
#line 3360 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1036 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3366 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1037 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node(",", (yyvsp[-2].Node), (yyvsp[0].Node));}
#line 3372 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1041 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3378 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1042 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3384 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1043 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3390 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1044 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3396 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1045 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3402 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1046 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3408 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1047 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3414 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1048 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3420 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1049 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3426 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1053 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("LABELLED_STATEMENT", new_leaf_node((yyvsp[-2].Str)), (yyvsp[0].Node));}
#line 3432 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1054 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("CASE", (yyvsp[-2].Node), (yyvsp[0].Node));}
#line 3438 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1055 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_1_node("DEFAULT", (yyvsp[0].Node));}
#line 3444 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1059 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = NULL;}
#line 3450 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1060 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[-1].Node);}
#line 3456 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1061 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[-1].Node);}
#line 3462 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1062 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-2].Node)){(yyval.Node) = new_2_node("INIT_LIST--STATEMENT_LIST", (yyvsp[-2].Node), (yyvsp[-1].Node));}else{(yyval.Node) = new_2_node("compound_statement",(yyvsp[-2].Node),(yyvsp[-1].Node));}}
#line 3468 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1067 "parser.y" /* yacc.c:1646  */
    {
																									type_var = "";
																									num_scopes++;
																									curr_scope = num_scopes;
																									scope_st.push(curr_scope);
																								}
#line 3479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1077 "parser.y" /* yacc.c:1646  */
    {
																									scope_st.pop();
																									curr_scope = scope_st.top();
																								}
#line 3488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1084 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3494 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1085 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("declaration_list", (yyvsp[-1].Node), (yyvsp[0].Node));}
#line 3500 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1089 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3506 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1090 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("statement_list", (yyvsp[-1].Node), (yyvsp[0].Node));}
#line 3512 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1094 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = NULL;}
#line 3518 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1095 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[-1].Node);}
#line 3524 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1100 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].Node)){(yyval.Node) = new_3_node("IF", (yyvsp[-3].Node), (yyvsp[-1].Node), new_1_node("ELSE", (yyvsp[0].Node)));}else{(yyval.Node) = new_2_node("IF", (yyvsp[-3].Node), (yyvsp[-1].Node));}}
#line 3530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1101 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("SWITCH-CASE", (yyvsp[-2].Node), (yyvsp[0].Node));}
#line 3536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1105 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1106 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3548 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1110 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_2_node("NEW", (yyvsp[-3].Node), new_leaf_node((yyvsp[-1].Str)));}
#line 3554 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1111 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_2_node("NEW", (yyvsp[0].Node), NULL);}
#line 3560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1115 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_1_node("DELETE", new_leaf_node((yyvsp[-1].Str)));}
#line 3566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1116 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_1_node("DELETE", new_leaf_node((yyvsp[-3].Str)));}
#line 3572 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1120 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_Stringval_node("PRINTF", new_leaf_node((yyvsp[-2].Str)), NULL);}
#line 3578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1121 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_Stringval_node("PRINTF", new_leaf_node((yyvsp[-4].Str)), (yyvsp[-2].Node));}
#line 3584 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1124 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_leaf_node((yyvsp[0].Str));}
#line 3590 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1125 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node(",", new_leaf_node((yyvsp[-2].Str)),(yyvsp[0].Node));}
#line 3596 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1126 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("[]", new_leaf_node((yyvsp[-3].Str)), new_leaf_node((yyvsp[-1].Str)));}
#line 3602 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1127 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_3_node("[]",new_leaf_node((yyvsp[-5].Str)),new_leaf_node((yyvsp[-3].Str)),(yyvsp[0].Node));}
#line 3608 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1131 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_Stringval_node("SCANF", new_leaf_node((yyvsp[-4].Str)), (yyvsp[-2].Node));}
#line 3614 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1135 "parser.y" /* yacc.c:1646  */
    {(yyval.Node)=new_leaf_node((yyvsp[0].Str));}
#line 3620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1136 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node(",", new_leaf_node((yyvsp[-2].Str)),(yyvsp[0].Node));}
#line 3626 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1140 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("WHILE", (yyvsp[-2].Node), (yyvsp[0].Node));}
#line 3632 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1141 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("DO-WHILE", (yyvsp[-5].Node), (yyvsp[-2].Node));}
#line 3638 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1142 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("FOR", new_3_node("CONTROL_STATEMENTS", (yyvsp[-3].Node), (yyvsp[-2].Node), NULL), (yyvsp[0].Node));}
#line 3644 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1143 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("FOR", new_3_node("CONTROL_STATEMENTS", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node)), (yyvsp[0].Node));}
#line 3650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1147 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_leaf_node("CONTINUE");}
#line 3656 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1148 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_leaf_node("BREAK");}
#line 3662 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1149 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_1_node("RETURN", NULL);}
#line 3668 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1150 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_1_node("RETURN", (yyvsp[-1].Node));}
#line 3674 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1154 "parser.y" /* yacc.c:1646  */
    {free_ast((yyvsp[0].Node));}
#line 3680 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1158 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node); type_var="";}
#line 3686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1159 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("<>", (yyvsp[-2].Node), (yyvsp[0].Node));type_var="";}
#line 3692 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1164 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3698 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1165 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3704 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1166 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = (yyvsp[0].Node);}
#line 3710 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1170 "parser.y" /* yacc.c:1646  */
    {
																									(yyval.Node) = new_2_node("STRUCT", (yyvsp[-5].Node), (yyvsp[-2].Node));
																									(yyval.Node)->size=(yyvsp[-2].Node)->size;
																								}
#line 3719 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1177 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_3_node("function_definition",(yyvsp[-2].Node),(yyvsp[-1].Node),(yyvsp[0].Node));}
#line 3725 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1178 "parser.y" /* yacc.c:1646  */
    {(yyval.Node) = new_2_node("function_definition",(yyvsp[-1].Node), (yyvsp[0].Node));}
#line 3731 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 3735 "parser.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 1181 "parser.y" /* yacc.c:1906  */


extern char yytext[];

int curr_scope=0;
int num_scopes=0;
stack<int> scope_st;

string func_params;
string type_var;
string struct_name;
std::unordered_map <std::string, sym_table_t*> struct_symbol_tables;

string func_args;
sym_table_t sym_table;
unordered_map <int,sym_table_t*> global_scope_table;
unordered_map <string,tEntry*> GST;//global_symbol_table
unordered_map <int,string> entry_map;
unordered_map <string,string> FUNC_PARAM;
sym_table_t*curr;


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
    init_basic_func();


	// for writing in dotfile
	outfile.open(argv[3], fstream::out);
	outfile << "digraph tree {\n" ;
	yyparse();
    outfile << "}";
	outfile.close();


	// for dumping symtable
	dump_symtable();


	// memory clear
	FUNC_PARAM.clear();
	global_scope_table.clear();
	GST.clear();
	entry_map.clear();

    return 0;
}
