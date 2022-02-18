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
# define YYDEBUG 1
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
#line 12 "parser.y"

    char *Str;

#line 119 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
