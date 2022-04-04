/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 37 "parser.y" /* yacc.c:1909  */

    int num;
    char *Str;
    struct node* Node;

#line 118 "parser.tab.h" /* yacc.c:1909  */
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
