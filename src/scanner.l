
%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"

void row_column(); 
int yylex();
int error();
%}


DIGIT [0-9]
ALPHA [a-zA-Z_]
ALPHANUM ({ALPHA}|{DIGIT})
HEX [a-fA-F0-9]
EXP [eE][+-]?{DIGIT}+
FS (f|F|l|L)     
IS (ul|uL|Ul|UL|lu|lU|Lu|LU|U|u|l|L) 
WS [ \t\v\n\f]


%%
"int"              { row_column(); return (INT);        }
"unsigned"         { row_column(); return (UNSIGNED);   }
"long"             { row_column(); return (LONG);       }
"short"            { row_column(); return (SHORT);      }
"double"           { row_column(); return (DOUBLE);     }
"float"            { row_column(); return (FLOAT);      }
"char"             { row_column(); return (CHAR);       }
"string"           { row_column(); return (STRING);     }
"bool"             { row_column(); return (BOOL);       }
"struct"           { row_column(); return (STRUCT);     }
"void"             { row_column(); return (VOID);       }
"printf"           { row_column(); return (PRINTF);     }
"scanf"            { row_column(); return (SCANF);      }
"if"               { row_column(); return (IF);         }
"else"             { row_column(); return (ELSE);       }
"switch"           { row_column(); return (SWITCH);     }
"return"           { row_column(); return (RETURN);     }
"for"              { row_column(); return (FOR);        }
"while"            { row_column(); return (WHILE);      }
"do"               { row_column(); return (DO);         }
"new"              { row_column(); return (NEW);        }
"delete"           { row_column(); return (DELETE);     }
"break"            { row_column(); return (BREAK);      }
"continue"         { row_column(); return (CONTINUE);   }
"case"             { row_column(); return (CASE);       }
"default"          { row_column(); return (DEFAULT);    }
"using"            { row_column(); return (USING);      }  
"namespace"        { row_column(); return (NAMESPACE);  }
"include"          { row_column(); return (INCLUDE);    }
"auto"             { row_column(); return (AUTO);       }
"const"            { row_column(); return (CONST);      }
"sizeof"           { row_column(); return (SIZEOF);     }
"typedef"          { row_column(); return (TYPEDEF);    }
"signed"           { row_column(); return (SIGNED);     }


{ALPHA}({ALPHANUM})*                { row_column(); return (IDENTIFIER);}
{DIGIT}+{IS}?                       { row_column(); return (CONSTANT);}
0[xX]{HEX}+{IS}?	                { row_column(); return (CONSTANT);}
{DIGIT}+{EXP}({IS})?                { row_column(); return (CONSTANT);}
{DIGIT}*"."{DIGIT}+{EXP}({FS})?     { row_column(); return (CONSTANT);}
{DIGIT}*"."{DIGIT}+({FS})?          { row_column(); return (CONSTANT);}
{DIGIT}+"."({EXP}){FS}?             { row_column(); return (CONSTANT);}
{DIGIT}+"."{FS}?                    { row_column(); return (CONSTANT);}
\'(\\.|[^\\'])+\'	                { row_column(); return (CONSTANT);}
\"(\\.|[^\\"])*\"	                { row_column(); return(STRING_VAL);}

"+="               { row_column(); return (ADD_ASSIGNMENT);         }     
"-="               { row_column(); return (SUBTRACT_ASSIGNMENT);    }
"/="               { row_column(); return (DIVIDE_ASSIGNMENT);      }
"*="               { row_column(); return (PRODUCT_ASSIGNMENT);     }
"^="               { row_column(); return (XOR_ASSIGNMENT);         }
"<="               { row_column(); return (LESS_EQUAL_OPERATOR);    }   
">="               { row_column(); return (GREATER_EQUAL_OPERATOR); }
"=="               { row_column(); return (EQUAL_LOGICAL);          }
"!="               { row_column(); return (NOT_EQUAL_OPERATOR);     }
">>"               { row_column(); return (RIGHT_SHIFT_OPERATOR);   }
"<<"               { row_column(); return (LEFT_SHIFT_OPERATOR);    }
">"                { row_column(); return ('>');                    }
"<"                { row_column(); return ('<');                    }
"~"                { row_column(); return ('~');                    }
"||"               { row_column(); return (OR_LOGICAL);             }    
"&&"               { row_column(); return (AND_LOGICAL);            }
"++"               { row_column(); return (INCREMENT);              }
"--"               { row_column(); return (DECREMENT);              }
"|"                { row_column(); return ('|');                    }
"&"                { row_column(); return ('&');                    }
"^"                { row_column(); return ('^');                    }
"="                { row_column(); return ('=');                    }
"+"                { row_column(); return ('+');                    }
"-"                { row_column(); return ('-');                    }
"/"                { row_column(); return ('/');                    }
"*"                { row_column(); return ('*');                    }
"?"                { row_column(); return (CONDITIONAL_OPERATOR);   }
"."                { row_column(); return ('.');                    }
"%"                { row_column(); return ('%');                    }
"("                { row_column(); return ('(');                    }
")"                { row_column(); return (')');                    }
";"                { row_column(); return (';');                    }
":"                { row_column(); return (':');                    }
"->"               { row_column(); return (POINTER_OPERATOR);       }
"!"                { row_column(); return ('!');                    }
"["                { row_column(); return ('[');                    }
"]"                { row_column(); return (']');                    }
"{"                { row_column(); return ('{');                    }
"}"                { row_column(); return ('}');                    }
","                { row_column(); return (',');                    }

{WS}	           { row_column();                                  }
.			       { row_column(); return error();                  }

%% 


int error(){
    printf("Unknown Token\n");
    return (0);
}

int yywrap(){
    return (1);
} 

int line = 1;
int column = 0;
 

int curr_length = 0;
void row_column(){
    int i;
    for(i= 0 ; yytext[i]!='\0'; i++){
        if(yytext[i] == '\n'){
            column = 0;
            line += 1;
        }
        else if(yytext[i] == '\t'){
            int extra_space = column%4;
            int col_shift = 4 - extra_space;
            column += col_shift;
        }
        else{
            column += 1;
        }
    }
    curr_length = i;
}

int main(int argc, char** argv){

    if(argc <= 1){
        printf("No input file given.\n");
        return -1;
    }

    if(argc != 2){
        printf("Invalid syntax.\n");
        return -1;
    }

    FILE *f;
    f = fopen(argv[1],"r");

    if(f == NULL){
        printf("Can't open file.\n");
        return -1;
    }
    yyin = f;      // for input file
    printf("Token                  Lexeme          Line#           Column#\n");
    printf("<==================================================================>\n\n");
    
    int value;
    int no_of_tokens;
    for(no_of_tokens=0 ; (value=yylex()) > 0 ; no_of_tokens++){
           if(value == 257) printf("INT                    ");
           else if (value == 258) printf("LONG                   ");
           else if (value == 259) printf("SHORT                  ");
           else if (value == 260) printf("UNSIGNED               ");
           else if (value == 261) printf("DOUBLE                 ");
           else if (value == 262) printf("FLOAT                  ");
           else if (value == 263) printf("CHAR                   ");
           else if (value == 264) printf("STRING                 ");
           else if (value == 265) printf("BOOL                   ");
           else if (value == 266) printf("STRUCT                 ");
           else if (value == 267) printf("VOID                   ");
           else if (value == 268) printf("PRINTF                 ");
           else if (value == 269) printf("SCANF                  ");
           else if (value == 270) printf("IF                     ");
           else if (value == 271) printf("ELSE                   ");
           else if (value == 272) printf("SWITCH                 ");
           else if (value == 273) printf("RETURN                 ");
           else if (value == 274) printf("FOR                    ");
           else if (value == 275) printf("WHILE                  ");
           else if (value == 276) printf("DO                     ");
           else if (value == 277) printf("NEW                    ");
           else if (value == 278) printf("DELETE                 ");
           else if (value == 279) printf("BREAK                  ");
           else if (value == 280) printf("CONTINUE               ");
           else if (value == 281) printf("CASE                   ");
           else if (value == 282) printf("DEFAULT                ");
           else if (value == 283) printf("USING                  ");
           else if (value == 284) printf("NAMESPACE              ");
           else if (value == 285) printf("INCLUDE                ");
           else if (value == 286) printf("AUTO                   ");
           else if (value == 287) printf("CONST                  ");
           else if (value == 288) printf("SIZEOF                 ");
           else if (value == 289) printf("TYPEDEF                ");
           else if (value == 290) printf("SIGNED                 ");
           else if (value == 291) printf("IDENTIFIER             ");
           else if (value == 292) printf("CONSTANT               ");
           else if (value == 293) printf("ADD_ASSIGNMENT         ");
           else if (value == 294) printf("SUBTRACT_ASSIGNMENT    ");
           else if (value == 295) printf("DIVIDE_ASSGINMENT      ");
           else if (value == 296) printf("PRODUCT_ASSIGNMENT     ");
           else if (value == 297) printf("XOR_ASSIGNMENT         ");
           else if (value == 298) printf("LESS_EQUAL_OPERATOR    ");
           else if (value == 299) printf("GREATER_EQUAL_OPERATOR ");
           else if (value == 300) printf("EQUAL_LOGICAL          ");
           else if (value == 301) printf("NOT_EQUAL_OPERATOR     ");
           else if (value == 302) printf("RIGHT_SHIFT_OPERATOR   ");
           else if (value == 303) printf("LEFT_SHIFT_OPERATOR    ");
           else if (value == 304) printf("OR_LOGICAL             ");
           else if (value == 305) printf("AND_LOGICAL            ");
           else if (value == 306) printf("INCREMENT              ");
           else if (value == 307) printf("DECREMENT              ");
           else if (value == 308) printf("CONDITIONAL_OPERATOR   ");
           else if (value == 309) printf("POINTER_OPERATOR       ");
           else if (value == 311) printf("STRING_VAL             ");
           else printf("%s                      ", yytext);
            
           printf("	%s 		", yytext);
           printf(" %d              ", line);
           printf(" %d \n", column - curr_length + 1 );
    }
    return (0);
}


