%{
#include <stdio.h>
#include <stdlib.h>
#include "parser.tab.h"

void row_column(); 
int yyerror(char*);
int yylex();
void comment();
void single_comment();
%}

DIGIT [0-9]
ALPHA [a-z_A-Z_]
ALPHANUM ({ALPHA}|{DIGIT})
HEX [a-fA-F0-9]
EXP [eE][+-]?{DIGIT}+
FS (f|F|l|L)     
IS (ul|uL|Ul|UL|lu|lU|Lu|LU|U|u|l|L) 
WS [ \t\v\n\f]

%%
"/*"			{ comment(); }
"//"			{ single_comment(); }
"int"              { yylval.Str = strdup(yytext); row_column(); return (INT);        }
"unsigned"         { yylval.Str = strdup(yytext); row_column(); return (UNSIGNED);   }
"long"             { yylval.Str = strdup(yytext); row_column(); return (LONG);       }
"short"            { yylval.Str = strdup(yytext); row_column(); return (SHORT);      }
"double"           { yylval.Str = strdup(yytext); row_column(); return (DOUBLE);     }
"float"            { yylval.Str = strdup(yytext); row_column(); return (FLOAT);      }
"char"             { yylval.Str = strdup(yytext); row_column(); return (CHAR);       }
"string"           { yylval.Str = strdup(yytext); row_column(); return (STRING);     }
"bool"             { yylval.Str = strdup(yytext); row_column(); return (BOOL);       }
"struct"           { yylval.Str = strdup(yytext); row_column(); return (STRUCT);     }
"void"             { yylval.Str = strdup(yytext); row_column(); return (VOID);       }
"printf"           { yylval.Str = strdup(yytext); row_column(); return (PRINTF);     }
"scanf"            { yylval.Str = strdup(yytext); row_column(); return (SCANF);      }
"if"               { yylval.Str = strdup(yytext); row_column(); return (IF);         }
"else"             { yylval.Str = strdup(yytext); row_column(); return (ELSE);       }
"switch"           { yylval.Str = strdup(yytext); row_column(); return (SWITCH);     }
"return"           { yylval.Str = strdup(yytext); row_column(); return (RETURN);     }
"for"              { yylval.Str = strdup(yytext); row_column(); return (FOR);        }
"while"            { yylval.Str = strdup(yytext); row_column(); return (WHILE);      }
"do"               { yylval.Str = strdup(yytext); row_column(); return (DO);         }
"new"              { yylval.Str = strdup(yytext); row_column(); return (NEW);        }
"delete"           { yylval.Str = strdup(yytext); row_column(); return (DELETE);     }
"break"            { yylval.Str = strdup(yytext); row_column(); return (BREAK);      }
"continue"         { yylval.Str = strdup(yytext); row_column(); return (CONTINUE);   }
"case"             { yylval.Str = strdup(yytext); row_column(); return (CASE);       }
"default"          { yylval.Str = strdup(yytext); row_column(); return (DEFAULT);    } 
"auto"             { yylval.Str = strdup(yytext); row_column(); return (AUTO);       }
"const"            { yylval.Str = strdup(yytext); row_column(); return (CONST);      }
"sizeof"           { yylval.Str = strdup(yytext); row_column(); return (SIZEOF);     }
"typedef"          { yylval.Str = strdup(yytext); row_column(); return (TYPEDEF);    }
"signed"           { yylval.Str = strdup(yytext); row_column(); return (SIGNED);     }


{ALPHA}({ALPHANUM})*                { yylval.Str = strdup(yytext); row_column(); return (IDENTIFIER);}
{DIGIT}+{IS}?                       { yylval.Str = strdup(yytext); row_column(); return (CONSTANT);}
0[xX]{HEX}+{IS}?	                { yylval.Str = strdup(yytext); row_column(); return (CONSTANT);}
{DIGIT}+{EXP}({IS})?                { yylval.Str = strdup(yytext); row_column(); return (CONSTANT);}
{DIGIT}*"."{DIGIT}+{EXP}({FS})?     { yylval.Str = strdup(yytext); row_column(); return (CONSTANT);}
{DIGIT}*"."{DIGIT}+({FS})?          { yylval.Str = strdup(yytext); row_column(); return (CONSTANT);}
{DIGIT}+"."({EXP}){FS}?             { yylval.Str = strdup(yytext); row_column(); return (CONSTANT);}
{DIGIT}+"."{FS}?                    { yylval.Str = strdup(yytext); row_column(); return (CONSTANT);}
\'(\\.|[^\\'])+\'	                { yylval.Str = strdup(yytext); row_column(); return (CONSTANT);}
\"(\\.|[^\\"])*\"	                { yylval.Str = strdup(yytext); row_column(); return(STRING_VAL);}

"+="               { yylval.Str = strdup(yytext); row_column(); return (ADD_ASSIGNMENT);         }     
"-="               { yylval.Str = strdup(yytext); row_column(); return (SUBTRACT_ASSIGNMENT);    }
"/="               { yylval.Str = strdup(yytext); row_column(); return (DIVIDE_ASSIGNMENT);      }
"*="               { yylval.Str = strdup(yytext); row_column(); return (PRODUCT_ASSIGNMENT);     }
"^="               { yylval.Str = strdup(yytext); row_column(); return (XOR_ASSIGNMENT);         }
"&="               { yylval.Str = strdup(yytext); row_column(); return (AND_ASSIGNMENT);        }
"|="               { yylval.Str = strdup(yytext); row_column(); return (OR_ASSIGNMENT);       }
"<="               { yylval.Str = strdup(yytext); row_column(); return (LESS_EQUAL_OPERATOR);    }   
">="               { yylval.Str = strdup(yytext); row_column(); return (GREATER_EQUAL_OPERATOR); }
"=="               { yylval.Str = strdup(yytext); row_column(); return (EQUAL_LOGICAL);          }
"!="               { yylval.Str = strdup(yytext); row_column(); return (NOT_EQUAL_OPERATOR);     }
"%="               { yylval.Str = strdup(yytext); row_column(); return(MOD_ASSIGNMENT);        }
">>"               { yylval.Str = strdup(yytext); row_column(); return (RIGHT_SHIFT_OPERATOR);   }
"<<"               { yylval.Str = strdup(yytext); row_column(); return (LEFT_SHIFT_OPERATOR);    }
">"                { yylval.Str = strdup(yytext); row_column(); return ('>');                    }
"<"                { yylval.Str = strdup(yytext); row_column(); return ('<');                    }
"~"                { yylval.Str = strdup(yytext); row_column(); return ('~');                    }
"||"               { yylval.Str = strdup(yytext); row_column(); return (OR_LOGICAL);             }    
"&&"               { yylval.Str = strdup(yytext); row_column(); return (AND_LOGICAL);            }
"++"               { yylval.Str = strdup(yytext); row_column(); return (INCREMENT);              }
"--"               { yylval.Str = strdup(yytext); row_column(); return (DECREMENT);              }
"|"                { yylval.Str = strdup(yytext); row_column(); return ('|');                    }
"&"                { yylval.Str = strdup(yytext); row_column(); return ('&');                    }
"^"                { yylval.Str = strdup(yytext); row_column(); return ('^');                    }
"="                { yylval.Str = strdup(yytext); row_column(); return ('=');                    }
"+"                { yylval.Str = strdup(yytext); row_column(); return ('+');                    }
"-"                { yylval.Str = strdup(yytext); row_column(); return ('-');                    }
"/"                { yylval.Str = strdup(yytext); row_column(); return ('/');                    }
"*"                { yylval.Str = strdup(yytext); row_column(); return ('*');                    }
"."                { yylval.Str = strdup(yytext); row_column(); return ('.');                    }
"%"                { yylval.Str = strdup(yytext); row_column(); return ('%');                    }
")"                { yylval.Str = strdup(yytext); row_column(); return (')');                    }
";"                { yylval.Str = strdup(yytext); row_column(); return (';');                    }
":"                { yylval.Str = strdup(yytext); row_column(); return (':');                    }
"->"               { yylval.Str = strdup(yytext); row_column(); return (POINTER_OPERATOR);       }
"!"                { yylval.Str = strdup(yytext); row_column(); return ('!');                    }
"["                { yylval.Str = strdup(yytext); row_column(); return ('[');                    }
"]"                { yylval.Str = strdup(yytext); row_column(); return (']');                    }
"}"                { yylval.Str = strdup(yytext); row_column(); return ('}');                    }
","                { yylval.Str = strdup(yytext); row_column(); return (',');                    }
"("                { yylval.Str = strdup(yytext); row_column(); return ('(');                    }
"?"                { yylval.Str = strdup(yytext); row_column(); return ('?');                    } 
"{"                { yylval.Str = strdup(yytext); row_column(); return ('{');                    }
{WS}	           { row_column();            }
.			       { row_column(); /*return error();*/                  }

%% 

int yywrap(){
    return (1);
} 

int line = 1;
int column = 0;
int curr_length = 0;
int line_buff = 0;
 
void comment()
{
    char c, c1;

loop:
    while ((c = input()) != '*' && c != 0){
        if (c == '\n')
            line++;
    }

    if ((c1 = input()) != '/' && c != 0)
    {
        goto loop;
    }
}
void single_comment()
{
    char c;
    while ((c = input()) != '\n' && c != 0);
    line++;
}


void row_column(){
    int i;
    for(i= 0 ; yytext[i]!='\0'; i++){
        if(yytext[i] == '\n'){
            column = 0;
            line += 1;
            line_buff = 1;
        }
        else if(yytext[i] == '\t'){
            int extra_space = column%4;
            int col_shift = 4 - extra_space;
            column += col_shift;
        }
        else{
            column += 1;
            line_buff = 0;
        }
    }
    curr_length = i;
}
