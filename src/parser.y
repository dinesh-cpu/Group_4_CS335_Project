%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int yyerror(char*);
extern FILE* yyin;
int yylex();
int yyparse();

%}

%union{
    char *Str;
}
%token<Str> '>' '<' '~' '|' '&' '^' '=' '+' '-' '/' '*' '%' '(' ')' ':' '!' '{' '}' '[' ']' 
%token<Str> '?' '.' ';' ','
%token<Str> IDENTIFIER STRING_VAL  
%token<Str> POINTER_OPERATOR DECREMENT EQUAL_LOGICAL GREATER_EQUAL_OPERATOR INCREMENT LESS_EQUAL_OPERATOR  AND_LOGICAL OR_LOGICAL  NOT_EQUAL_OPERATOR  LEFT_SHIFT_OPERATOR RIGHT_SHIFT_OPERATOR
%token<Str> PRODUCT_ASSIGNMENT DIVIDE_ASSIGNMENT MOD_ASSIGNMENT  AND_ASSIGNMENT ADD_ASSIGNMENT OR_ASSIGNMENT  SUBTRACT_ASSIGNMENT XOR_ASSIGNMENT   
%token<Str> BOOL CHAR SHORT INT LONG SIGNED UNSIGNED STRING FLOAT DOUBLE VOID CONSTANT 
%token<Str> STRUCT 
%token<Str> CONST
%token<Str> TYPEDEF AUTO  USING  
%token<Str> CASE CONTINUE DEFAULT BREAK DELETE DO 
%token<Str> NEW FOR IF  ELSE GOTO RETURN
%token<Str> SWITCH WHILE  SIZEOF SCANF PRINTF 
%type<Str> primary_expression postfix_expression argument_expression_list unary_expression
%type<Str> unary_operator cast_expression multiplicative_expression additive_expression shift_expression 
%type<Str> relational_expression equality_expression and_expression exclusive_or_expression
%type<Str> inclusive_or_expression logical_and_expression logical_or_expression 
%type<Str> conditional_expression assignment_expression assignment_operator expression
%type<Str> init_declarator_list init_declarator constant_expression 
%type<Str> initializer initializer_list statement labeled_statement compound_statement statement_list
%type<Str> expression_statement  selection_statement stmt iteration_statement jump_statement translation_unit external_declaration function_definition 

%type<Str> storage_class_specifier type_specifier declaration_specifiers struct_ struct_specifier
%type<Str> declaration type_qualifier specifier_qualifier_list direct_declarator parameter_declaration identifier_list 
%type<Str> declaration_list declarator struct_declaration struct_declaration_list struct_declarator pointer type_qualifier_list
%type<Str> parameter_list parameter_type_list type_name abstract_declarator direct_abstract_declarator 
%start translation_unit

%%


primary_expression
	: IDENTIFIER 			
	| CONSTANT 				
	| STRING_VAL    		
	| '(' expression ')'
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'				
	| postfix_expression '(' ')'						
	| postfix_expression '(' argument_expression_list ')' 	
	| postfix_expression '.' IDENTIFIER						
	| postfix_expression POINTER_OPERATOR IDENTIFIER		
	| postfix_expression INCREMENT							
	| postfix_expression DECREMENT							
	;

argument_expression_list
	: assignment_expression 								
	| argument_expression_list ',' assignment_expression 	
	;

unary_expression
	: postfix_expression								
	| INCREMENT unary_expression				
	| DECREMENT unary_expression				
	| unary_operator cast_expression       
	| SIZEOF unary_expression				
	| SIZEOF '(' type_name ')'	
	;                 





unary_operator
	: '&'			
	| '*'			
	| '+'			
	| '/'                
	| '-'			
	| '~'			
	| '!'	
	| NEW
	| DELETE		
	;

 cast_expression
 	: unary_expression													
 	| '(' type_name ')' cast_expression	    	           
 	;

multiplicative_expression
	: cast_expression                                           
	| multiplicative_expression '*' cast_expression             
	| multiplicative_expression '/' cast_expression             
	| multiplicative_expression '%' cast_expression             
	;

additive_expression
	: multiplicative_expression                                  
	| additive_expression '+' multiplicative_expression          
	| additive_expression '-' multiplicative_expression          
	;

shift_expression
	: additive_expression              			                          	 
	| shift_expression LEFT_SHIFT_OPERATOR additive_expression               
	| shift_expression RIGHT_SHIFT_OPERATOR additive_expression				 
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression                 
	| relational_expression '>' shift_expression				 
	| relational_expression LESS_EQUAL_OPERATOR shift_expression               
	| relational_expression GREATER_EQUAL_OPERATOR shift_expression               
	;

equality_expression
	: relational_expression								
	| equality_expression EQUAL_LOGICAL relational_expression			 	
	| equality_expression NOT_EQUAL_OPERATOR relational_expression			
	;

and_expression
	: equality_expression										  
	| and_expression '&' equality_expression					 
	;

exclusive_or_expression
	: and_expression											
	| exclusive_or_expression '^' and_expression				  
	;

inclusive_or_expression
	: exclusive_or_expression								
	| inclusive_or_expression '|' exclusive_or_expression		 
	;

logical_and_expression
	: inclusive_or_expression									  	
	| logical_and_expression AND_LOGICAL inclusive_or_expression		
	;

logical_or_expression
	: logical_and_expression								
	| logical_or_expression OR_LOGICAL logical_and_expression		
	;

conditional_expression
	: logical_or_expression										           
	| logical_or_expression '?' expression ':' conditional_expression      
	;

assignment_expression
	: conditional_expression									 
	| unary_expression assignment_operator assignment_expression  
	;

assignment_operator
	: '='					
	| PRODUCT_ASSIGNMENT		
	| DIVIDE_ASSIGNMENT			
	| ADD_ASSIGNMENT			
	| SUBTRACT_ASSIGNMENT		
	| AND_ASSIGNMENT			
	| XOR_ASSIGNMENT			
	| OR_ASSIGNMENT		        
	;

expression
	: assignment_expression                 	 
	| expression ',' assignment_expression      
	;

constant_expression
	: conditional_expression		
	;

declaration					
	: declaration_specifiers ';'						
	| declaration_specifiers init_declarator_list ';'  
	;

declaration_specifiers						
	: storage_class_specifier						
	| storage_class_specifier declaration_specifiers
	| type_specifier								
	| type_specifier declaration_specifiers			
	| type_qualifier								
	| type_qualifier declaration_specifiers			
	;

init_declarator_list				
	: init_declarator							
	| init_declarator_list ',' init_declarator	
	;

init_declarator					
	: declarator                 
	| declarator '=' initializer  
	;

storage_class_specifier		
	: TYPEDEF				
	| AUTO			
	;

type_specifier			
	: VOID					
	| CHAR					
	| SHORT					
	| INT					
	| BOOL					
	| LONG					
	| FLOAT					
	| DOUBLE				
	| SIGNED				
	| UNSIGNED				
	| STRING				
	| struct_specifier 	
	;

struct_specifier     
	: struct_ IDENTIFIER '{' struct_declaration_list '}'
	| struct_ '{' struct_declaration_list '}'
	| struct_ IDENTIFIER
	;

struct_			
	: STRUCT			
	;

struct_declaration_list		
	: struct_declaration	
	| struct_declaration_list struct_declaration    
	;

struct_declaration 			
	: specifier_qualifier_list struct_declarator_list ';'	
	;

specifier_qualifier_list		
	: type_specifier specifier_qualifier_list	
	| type_specifier	                
	| type_qualifier specifier_qualifier_list	
	| type_qualifier
	;

struct_declarator_list 		
	: struct_declarator                             
	| struct_declarator_list ',' struct_declarator  
	;

struct_declarator		
	: declarator						 
	| ':' constant_expression			 
	| declarator ':' constant_expression 
	;


type_qualifier	 
	: CONST			
	;

declarator	
	: pointer direct_declarator 				
	| direct_declarator								
	;	

direct_declarator	
	: IDENTIFIER																					
	| '(' declarator ')'								
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '[' ']'							
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'	
	| direct_declarator '(' ')'							
	;	

pointer						
	: '*'    							
	| '*' type_qualifier_list    		
	| '*' pointer                       
	| '*' type_qualifier_list pointer   
	;

type_qualifier_list			
	: type_qualifier						
	| type_qualifier_list type_qualifier	
	;


parameter_type_list
	: parameter_list                 
	;

parameter_list
	: parameter_declaration		       	
	| parameter_list ',' parameter_declaration 
	;

parameter_declaration
	: declaration_specifiers declarator				
	| declaration_specifiers abstract_declarator	
	| declaration_specifiers						
	;

identifier_list
	: IDENTIFIER						
	| identifier_list ',' IDENTIFIER	
	;

type_name
	: specifier_qualifier_list       
	| specifier_qualifier_list abstract_declarator 
	;

abstract_declarator
	: pointer            					      
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator        
	: '(' abstract_declarator ')'     
	| '[' ']'
	| '[' constant_expression ']'								
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'	
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression			
	| '{' initializer_list '}'		
	| '{' initializer_list ',' '}'  
	;

initializer_list
	: initializer						
	| initializer_list ',' initializer	
	;

statement
	: labeled_statement              
	| compound_statement			
	| expression_statement			
	| selection_statement			
	| iteration_statement			
	| jump_statement			
	;
 


labeled_statement
	: IDENTIFIER ':' statement               
	| CASE constant_expression ':' statement 
	| DEFAULT ':' statement					 
	;
	
compound_statement
	: '{' '}'									
	| '{' statement_list '}'					
	| '{' declaration_list '}'					
	| '{' declaration_list statement_list '}'	
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement						
	| statement_list statement		
	;

expression_statement
	: ';'					
	| expression ';'	
	;



selection_statement
	: IF '(' expression ')' statement stmt 
	| SWITCH '(' expression ')' statement	  
	;

stmt
	: ELSE statement 	
	| statement									
	;
 

iteration_statement 
	: WHILE '(' expression ')' statement											
	| DO statement WHILE '(' expression ')' ';'										
	| FOR '(' expression_statement  expression_statement ')' statement				
	| FOR '(' expression_statement expression_statement expression ')' statement	
	;


jump_statement
	: CONTINUE ';'				
	| BREAK ';'					
	| RETURN ';'				
	| RETURN expression ';'		
	;

translation_unit
	: external_declaration                   
	| translation_unit external_declaration  

external_declaration
	: function_definition		
	| declaration				
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement   
	| declaration_specifiers declarator compound_statement 					 
	| declarator declaration_list compound_statement						 
	| declarator compound_statement											 
	;

%%


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