/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 122 "parser.tab.h"

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
