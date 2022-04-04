%{
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

void break_inputs(string const &str, const char delim, vector<string> &out)
{
    size_t start;
    size_t end = 0;
 
    while ((start = str.find_first_not_of(delim, end)) != string::npos)
    {
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }
}

int yyerror(const string&);
int yylex();
%}
%locations

%union{
    int num;
    char *Str;
    struct node* Node;
}

%token<Str> '>' '<' '~' '|' '&' '^' '=' '+' '-' '/' '*' '%' '(' ')' ':' '!' '{' '}' '[' ']' 
%token<Str> '?' '.' ';' ','
%token<Str> IDENTIFIER STRING_VAL CONSTANT
%token<Str> POINTER_OPERATOR DECREMENT EQUAL_LOGICAL GREATER_EQUAL_OPERATOR INCREMENT LESS_EQUAL_OPERATOR  AND_LOGICAL OR_LOGICAL  NOT_EQUAL_OPERATOR  LEFT_SHIFT_OPERATOR RIGHT_SHIFT_OPERATOR
%token<Str> PRODUCT_ASSIGNMENT DIVIDE_ASSIGNMENT MOD_ASSIGNMENT  AND_ASSIGNMENT ADD_ASSIGNMENT OR_ASSIGNMENT  SUBTRACT_ASSIGNMENT XOR_ASSIGNMENT  
%token<Str> BOOL CHAR SHORT INT LONG SIGNED UNSIGNED STRING FLOAT DOUBLE VOID
%token<Str> STRUCT 
%token<Str> CONST
%token<Str> TYPEDEF AUTO  USING  
%token<Str> CASE CONTINUE DEFAULT BREAK DELETE DO 
%token<Str> NEW FOR IF  ELSE GOTO RETURN
%token<Str> SWITCH WHILE  SIZEOF SCANF PRINTF 


%type<Node> primary_expression postfix_expression argument_expression_list unary_expression
%type<Node> unary_operator cast_expression multiplicative_expression additive_expression shift_expression 
%type<Node> relational_expression equality_expression and_expression exclusive_or_expression
%type<Node> inclusive_or_expression logical_and_expression logical_or_expression 
%type<Node> conditional_expression assignment_expression assignment_operator expression
%type<Node> init_declarator_list init_declarator constant_expression 
%type<Node> initializer initializer_list statement labeled_statement compound_statement statement_list
%type<Node> expression_statement  selection_statement stmt iteration_statement jump_statement translation_unit external_declaration function_definition 
%type<Node> printf_stmt scanf_stmt new_stmt delete_stmt 
%type<Node> program

%type<Node> printf_helper scanf_helper
%type<Node> storage_class_specifier type_specifier declaration_specifiers struct_specifier 
%type<Node> declaration specifier_qualifier_list direct_declarator parameter_declaration identifier_list 
%type<Node> declaration_list declarator struct_declaration struct_declaration_list pointer struct_declarator_list
%type<Node> parameter_list parameter_type_list type_name abstract_declarator direct_abstract_declarator 
%type<Node> A1 A2 B1 k1 S1 external_struct_declaration
%start program
%%

primary_expression
	: IDENTIFIER																			{	$$=new_leaf_node($1);
																								tEntry* entry=find_entry(scope_st,$1);
																								if(!entry){
																											if(is_keyword($$->s)) 
																												$$->type="void";
																											else 
																												yyerror(string($1) + " is not declared");
																										}
																								else{	
																									if(entry->type == ""){
																										$$->type = "";
																										yyerror(string($1) + " is not declared in this scope.");
																									}
																									else{
																										$$->type=entry->type;
																										$$->key=entry->key;
																										$$->size=entry->size;
																										$$->init=entry->init;
																									}
																								}
																							}
	| CONSTANT																				{
																								$$=new_leaf_node($1);
																								$$->key=$$->s;
																								$$->init=1;
																								float num = stof($$->s);
																								int a = num;
																								if(a == num){
																									$$->val_type=1;
																									$$->num = num;
																									$$->type="int";
																								}else{
																									$$->val_type=3;
																									$$->num = num;
																									$$->type="float";
																								}
																							}
	| STRING_VAL																			{	// cout << "aa gya vai"<<endl;
																								$$=new_leaf_node($1);
																								$$->s = add_quotes($$->s);
																								$$->type = "string";
																								$$->key=$$->s;
																								$$->init=1;
																							}
	| '(' expression ')'                        											{
																								$$=$2;
																							}
	;	
	
postfix_expression	
	: primary_expression																	{$$ = $1;}
	| postfix_expression '[' expression ']'												{	
																							// printf("postfix called\n");
																							$$ = new_2_node("[]", $1, $3);

																							if($3->s.substr(0,1) == "-"){
																								yyerror( "Index of array " + $1->key + " cannot be negative.");

																							}else{ 
																								int curr_idx;
																								curr_idx = stoi($3->key);

																								tEntry* entry = find_entry(scope_st, $1->key);
																								if(!entry){
																									yyerror($1->key + " is not declared");
																								}else{
																									$$->type=entry->type;
																								}

																								int arr_length = entry->size/getSize(entry->type);

																								if(curr_idx > arr_length){
																									yyerror("Array " + $1->key + " index is out of bound.");
																								}

																								$$->key=$1->key;
																								$$->val_type=$1->val_type;
																								$$->num=$1->num;
																								if($1->init==1 && $3->init==1)
																									$$->init=1;
																							}
																						}
	| postfix_expression '(' ')'															{	
																								$$ = new_1_node("()", $1);

																							 	tEntry* entry=find_entry(scope_st,$1->key);
																								if(entry){
																									$$->type=entry->type;
																									$$->key=$1->key;
																									$$->val_type=$1->val_type;
																									$$->num=$1->num;
																									$$->init=$1->init;

																									if(entry->type == ""){
																										yyerror("Invalid function call.");
																									}
																									string param=$$->type+" "+$1->key;
																									if(FUNC_PARAM.find(param) == FUNC_PARAM.end()){
																										yyerror("Function " + $1->key + " is not declared");
																									}
																									func_args="";
																								}
																								else{
																									yyerror($1->key +  " is not declared");
																								}
																							}
	| postfix_expression '(' argument_expression_list ')' 									{	
																								$$ = new_2_node("()", $1,$3);
																							 	tEntry* entry=find_entry(scope_st,$1->key);

																								if(entry){
																									$$->init=$1->init;
																									$$->type=entry->type;
																									$$->key=$1->key;
																									$$->val_type=$1->val_type;
																									$$->num=$1->num;

																									string param=$$->type+" "+$1->key;

																									if(FUNC_PARAM.find(param)== FUNC_PARAM.end()){
																										yyerror("Function " + $1->key + " is not declared");
																									}else {
																										string param=FUNC_PARAM[$$->type+" "+$1->key];
																										const char delim = ',';
																										std::vector<std::string> param1;
																										break_inputs(param, delim, param1);
																										std::vector<std::string> arg1;
																										break_inputs(func_args, delim, arg1);
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
	| postfix_expression '.' IDENTIFIER														{	

																								$$ = new_2_node(".", $1, new_leaf_node($3));
																								tEntry* entry=find_entry(scope_st,$1->key);
																								$$->key=$1->key;


																								if(entry){
																									tEntry* struct_entry= find_struct_entry($1->type,$3);
																									if(struct_entry){
																										    if(struct_entry->key != $3)
																											yyerror("Type Mismatch");
																										    $$->type=struct_entry->type;


																									}
																									else{
																										     yyerror("Invalid attribute " + string($3) + " for " + $1->key);
																											 $$->type = "error_type";
																									}
																								}	

																								else{
																									yyerror($1->key + " not declared.");
																								}



																							}
	| postfix_expression POINTER_OPERATOR IDENTIFIER													{
																								$$ = new_2_node("->", $1, new_leaf_node($3));
																								$$->key=$1->key;
																							}

	| postfix_expression INCREMENT															{
    												    										$$ = new_1_node("++", $1);
																								$$->key=$1->key;
																								$$->init=$1->init;
																								$$->type=$1->type;
																								$$->val_type=$1->val_type;
																								$$->num=$1->num+1;

																								string assign = postfix_expr($1 -> type);
																								// type is not integer
																								if(assign == "")
																								    yyerror($1->key + " doesn't have suitable type for increment operation");

																								else
																								   $$ -> type = assign;
																							}
	| postfix_expression DECREMENT															{
																								$$ = new_1_node("--", $1);
																								$$->key=$1->key;
																								$$->val_type=$1->val_type;
																								$$->num = $1->num-1;
																								$$->init = $1->init;
																								$$->type = $1->type;

																								string assign = postfix_expr($1 -> type);
																								// type is not integer
																								if(assign == "")
																								    yyerror($1->key + " doesn't have suitable type for decrement operation");

																								else
																								   $$ -> type = assign;

																							}	
	;

argument_expression_list
	: assignment_expression 																{	$$=$1;
																							 	if($1->init == 1)$$->init = 1;
																								func_args=$1->type;
																								$$->key=$1->key;
																								$$->val_type=$1->val_type;
																								$$->num=$1->num;
																								$$->init=$1->init;

																							}
	| argument_expression_list ',' assignment_expression 									{
																								$$=new_2_node(",",$1,$3);
																								string assign = "";

																								func_args=func_args +" ,"+$3->type;
																							 	$$->type = assign;
																							 	if($1->init == 1 && $3->init == 1)$$->init = 1;
																								$$->key=$1->key;
																								$$->val_type=$1->val_type;
																								$$->num=$1->num+1;

																							}
	;

unary_expression
	: postfix_expression																	{$$ = $1;}				
	| INCREMENT unary_expression															{   $$ = new_1_node("++", $2);
																								tEntry* entry=find_entry(scope_st,$2->key);
																								string type = entry->type;

																								if(entry){
																									string type = entry->type;
																									$$->num = $2->num+1;
																									if($2->init == 1)
																										$$->init = 1;
																								else
																									yyerror("Variable " + $2->key + " is not initialised.");

																								$$->type = type;
																								$$->key=$2->key;
																								$$->val_type=$2->val_type;
																								$$->num=$2->num+1;

																							}
											 												string assign = postfix_expr($2 -> type);
																							 if(assign == ""){
																								 yyerror($2->key + " doesnot have suitable type for increment operation");
											 												}
																							else{
																								$$ -> type = assign;
											 												}
																							}
	| DECREMENT unary_expression															{	$$ = new_1_node("--", $2);
																								tEntry* entry=find_entry(scope_st,$2->key);
																								if(entry){
																									string type = entry->type;
																									$$->num = $2->num-1;
																									if($2->init == 1)
																										$$->init = 1;
																								}
																								else
																									yyerror("Variable " + $2->key + " is not initialised.");

																								$$->type = $2->type;
																								$$->key=$2->key;
																								$$->val_type=$2->val_type;
																								$$->num=$2->num-1;

																								string assign = postfix_expr($2 -> type);
																								if(assign == ""){
																									yyerror($2->key + " doesnot have suitable type for decrement operation");
																								}else{
																									$$ -> type = assign;
																								}	
																							}
	| unary_operator cast_expression       													{
																							make_children($1, $2, NULL, NULL); $$ = $1;
																							tEntry* entry=find_entry(scope_st,$2->s);
																							if(!entry){
																								yyerror($2->key+" is not declared");
																							}else{
																								string type = entry->type;
																								if($2->init == 1)
																								$$->init = 1;
																							}
																							string type = entry->type;
																							$$->type = $2->type;
																							$$->key=$2->key;
																							$$->num=$2->num;
																							$$->val_type=$2->val_type;
											 												string assign = unary_expr($1->s, $2 -> type, 1);
																							if(assign == ""){
												 												yyerror("Not consistent with the operator " + $1->key);
																							}

																							}
	| SIZEOF unary_expression																{	$$ = new_1_node("SIZEOF", $2);
																							 	$$ -> type = "int";
																							 	$$->init=1;
																							 	$$->key=$2->key;
																							 	$$->val_type=$2->val_type;
																								 $$->num=$2->num;
																							}
	| SIZEOF '(' type_name ')'																{
																								$$ = new_1_node("SIZEOF",$3);
																								$$ -> type = "int";
																								$$->init=1;
																								$$->key=$3->key;
																							}
	;

unary_operator
	: '&'																					{$$ = new_1_node("&", NULL);$$->key = $$->s;$$->type="&";}
	| '*'																					{$$ = new_1_node("*", NULL);$$->key = $$->s;$$->type="*";}
	| '+'																					{$$ = new_1_node("+", NULL);$$->key = $$->s;$$->type="+";}
    | '-'																					{$$ = new_1_node("-", NULL);$$->key = $$->s;$$->type="-";}
	| '~'																					{$$ = new_1_node("~", NULL);$$->key = $$->s;$$->type="~";}
	| '!'																					{$$ = new_1_node("!", NULL);$$->key = $$->s;$$->type="!";}
	;

 cast_expression
 	: unary_expression																		{$$ = $1;}
 	| '(' type_name ')' cast_expression	    	            								{
		 																						$$ =  new_2_node("CAST_EXPR", $2, $4);
	 																							$$->type = $2->type;
																								if($4->init == 1)
																									$$->init = 1;
																								$$->key=$4->key;
														 									}   
 	;

multiplicative_expression	
	: cast_expression                                           							{$$ = $1;}
	| multiplicative_expression '*' cast_expression             							{
																								
																								$$ = new_2_node("*", $1, $3);
																								// cout << "N:" << $1->type << " " << $3->type<<endl;
																								string assign = multiplicative_expr($1->type, $3->type, '*'); 
																								cout<< assign<< endl;
																								if(assign == ""){
																									yyerror("Cannot apply * operator on these variables.");
																								}else{
																									if(assign == "int"){
																										$$->type = "long long";
																									}else if(assign == "float"){
																										$$->type = "long double";
																								}
																							} 
																								$$->key=$1->key;
																								if($1->init==1 && $3->init==1) 
																									$$->init=1;
																							}
	| multiplicative_expression '/' cast_expression             							{	
																								$$ = new_2_node("/", $1, $3);
																								string assign = multiplicative_expr($1->type, $3->type, '/'); 
																								if(assign == ""){
																									yyerror("Cannot apply / operator on these variables");
																								}
																								else{
																									if(assign=="int")
																										$$->type = "long long";
																									else if(assign=="float")
																										$$->type = "long double";
																								} 
																								$$->key=$1->key;
																								if($1->init==1 && $3->init==1) 
																									$$->init=1;
																								
																							}														
																
																
																
																
	| multiplicative_expression '%' cast_expression             							{	
																								$$ = new_2_node("%", $1, $3);
																								string assign = multiplicative_expr($1->type, $3->type, '%'); 
																								if(assign == ""){
																									yyerror("Cannot apply % operator on these variables.");
																								}else{
																									if(assign == "int"){
																										$$->type = "long long";
																								} 
																								}
																								$$->key=$1->key;
																								if($1->init==1 && $3->init==1) $$->init=1;
																							}
	;

additive_expression
	: multiplicative_expression                                  							{$$ = $1;}
	| additive_expression '+' multiplicative_expression          							{	
																								$$ = new_2_node("+", $1, $3);
																								string assign=additive_expr($1->type,$3->type,'+');
																								if(assign==""){
																									yyerror("Cannot apply + operator on these variables.");
																								}
																								else $$->type=assign;
																								$$->key=$1->key;
																								if($1->init==1 && $3->init==1) 
																									$$->init=1;
																 							}
	| additive_expression '-' multiplicative_expression          							{
																								$$ = new_2_node("-", $1, $3);
																								string assign=additive_expr($1->type,$3->type,'-');
																								if(assign==""){
																									yyerror("Cannot apply - operator on these variables.");
																								}
																								else {
																									if(assign=="int")$$->type="long long";
																									else if(assign=="float")$$->type="long double";
																									else $$->type=assign;
																								}
																								$$->key=$1->key;
																								if($1->init==1 && $3->init==1) 
																									$$->init=1;
																							}							
	;

shift_expression
	: additive_expression                                        							{$$ = $1;}
	| shift_expression LEFT_SHIFT_OPERATOR additive_expression      						{
																								$$ = new_2_node("<<", $1, $3);
																								if($1->init == 1 && $3->init ==1)
																  								 	$$->init = 1;
																  								string assign = shift_expr($1->type, $3->type);
																  								if(assign == ""){
																								  yyerror("Cannot apply << operator on these variables.");
																 								}
																								else{
																								  $$->type = $1->type;
																 								}
																								$$->key=$1->key;
																 							}
	| shift_expression RIGHT_SHIFT_OPERATOR additive_expression	   							{
																								$$ = new_2_node(">>", $1, $3);
																   								if($1->init == 1 && $3->init ==1)
																   									$$->init = 1;
																  								string assign = shift_expr($1->type, $3->type);
																  								if(assign == ""){
																									  yyerror("Cannot apply >> operator on these variables.");
																  								}
																								else{
																									  $$->type = $1->type;
																  								}
																  								$$->key=$1->key;
																							}
	;

relational_expression
	: shift_expression											     						{$$ = $1;}
	| relational_expression '<' shift_expression                 							{
																								$$ = new_2_node("<", $1, $3);
																								string assign=relational_expr($1->type,$3->type);
																								if(assign=="")
																								  yyerror("Cannot apply < operator on these variables.");
																								else{
																									if(assign=="bool"){
																										$$->type=assign;	
																									}else if(assign == "Bool"){
																										$$->type = "Bool";
																										yyerror("Warning : Comparison between pointer and integer");
																									}
																								}
																								$$->key=$1->key;
																								if($1->init==1 && $3->init==1) $$->init=1;
																							}							
	| relational_expression '>' shift_expression											{	$$ = new_2_node(">", $1, $3);
																								string assign=relational_expr($1->type,$3->type);
																								if(assign=="")
																								  yyerror("Cannot apply > operator on these variables.");
																								else{
																									if(assign=="bool"){
																										$$->type=assign;	
																									}else if(assign == "Bool"){
																										$$->type = "Bool";
																										yyerror("Warning : Comparison between pointer and integer");
																									}
																								}	
																								$$->key=$1->key;	
																								if($1->init==1 && $3->init==1) $$->init=1;															
																							}
	| relational_expression LESS_EQUAL_OPERATOR shift_expression               				{$$ = new_2_node("<=", $1, $3);
																							string assign=relational_expr($1->type,$3->type);
																							if(assign=="")
																							  yyerror("Cannot apply <= operator on these variables.");
																							else{
																								if(assign=="bool"){
																									$$->type=assign;	
																								}else if(assign == "Bool"){
																									$$->type = "Bool";
																									yyerror("Warning : Comparison between pointer and integer");
																								}
																							}	
																							$$->key=$1->key;
																							if($1->init==1 && $3->init==1) $$->init=1;																
																							}
	| relational_expression GREATER_EQUAL_OPERATOR shift_expression 						{$$ = new_2_node(">=", $1, $3);
																							string assign=relational_expr($1->type,$3->type);
																							if(assign=="")
																							  yyerror("Cannot apply >= operator on these variables.");
																							else{
																								if(assign=="bool"){
																									$$->type=assign;	
																								}else if(assign == "Bool"){
																									$$->type = "Bool";
																									yyerror("Warning : Comparison between pointer and integer");
																								}
																							}	
																							if($1->init==1 && $3->init==1) $$->init=1;
																							$$->key=$1->key;																
																							}
	;

equality_expression
	: relational_expression										 							{$$ = $1;}
	| equality_expression EQUAL_LOGICAL relational_expression								{$$ = new_2_node("==", $1, $3);
																							string assign=equality_expr($1->type,$3->type);
																							if(assign=="")
																							  yyerror("Cannot apply == operator on these variables.");
																							else{
																								if(assign=="True"){
																									$$->type="bool";	
																								}else if(assign == "true"){
																								
																									yyerror("Comparison between pointer and integer");
																								}
																							}
																							$$->key=$1->key;
																							if($1->init==1 && $3->init==1) $$->init=1;																	
																							}
	| equality_expression NOT_EQUAL_OPERATOR relational_expression							{$$ = new_2_node("!=", $1, $3);
																							string assign=equality_expr($1->type,$3->type);
																							if(assign=="")
																							  yyerror("Cannot apply != operator on these variables.");
																							else{
																								if(assign=="True"){
																									$$->type="bool";	
																								}else if(assign == "true"){

																									yyerror("Comparison between pointer and integer");
																								}
																							}	
																							$$->key=$1->key;
																							if($1->init==1 && $3->init==1) $$->init=1;																
																							}
	;

and_expression
	: equality_expression										  							{$$ = $1;}
	| and_expression '&' equality_expression					  							{
																							$$ = new_2_node("&", $1, $3);
																							string assign=bitwise_expr($1->type,$3->type);
																							if(assign=="")
																								yyerror("Invalid type for '&' expression");
																							else if(assign=="True"){
																								$$->type = "long long";
																
																							}else if(assign=="true"){
																								$$->type = "bool";
																							}
																							$$->key=$1->key;
																							if($1->init==1 && $3->init==1) $$->init=1;
																							}
	;

exclusive_or_expression
	: and_expression											  							{$$ = $1;}
	| exclusive_or_expression '^' and_expression				  							{
																							$$ = new_2_node("^", $1, $3);
																							string assign=bitwise_expr($1->type,$3->type);
																							if(assign=="")
																								yyerror("Invalid type for '^' expression");
																							else if(assign=="true"){
																								$$->type = "bool";
																							}else if(assign=="True"){
																								$$->type = "long long";
																							}	
																							$$->key=$1->key;
																							if($1->init==1 && $3->init==1) $$->init=1;
																							}
	;

inclusive_or_expression
	: exclusive_or_expression									  							{$$ = $1;}
	| inclusive_or_expression '|' exclusive_or_expression		  							{
																							$$ = new_2_node("|", $1, $3);
																							string assign=bitwise_expr($1->type,$3->type);
																							if(assign=="")
																								yyerror("Invalid type for '|' expression");
																							else if(assign=="true"){
																								$$->type = "bool";
																							}else if(assign=="True"){
																								$$->type = "long long";
																							}
																							$$->key=$1->key;
																							if($1->init==1 && $3->init==1) $$->init=1;
																							}						
	;

logical_and_expression
	: inclusive_or_expression									  							{$$ = $1;}
	| logical_and_expression AND_LOGICAL inclusive_or_expression							{
																							$$ = new_2_node("&&", $1, $3);
																							$$->type = "bool";
																							$$->key=$1->key;
																							if($1->init==1 && $3->init==1) $$->init=1;
																  							}
	;

logical_or_expression
	: logical_and_expression									  							{$$ = $1;}
	| logical_or_expression OR_LOGICAL logical_and_expression								{
																							$$ = new_2_node("||", $1, $3);
																							$$->type = "bool";
																							$$->key=$1->key;
																							if($1->init==1 && $3->init==1) $$->init=1;
																							}
	;

conditional_expression
	: logical_or_expression										           					{$$ = $1;}
	| logical_or_expression '?' expression ':' conditional_expression      					{
																								$$ = new_3_node("?:", $1, $3, $5);
																								string  assign = conditional_expr($1->type, $5->type);
																								if(assign == ""){
																									yyerror("The types are not compatible for conditional expression.");
																								}else{
																									$$->type = assign;
																								}
																								$$->key=$5->key;
																								if($1->init==1 && $5->init==1 && $3->init==1) $$->init=1;
																							}   
	;

assignment_expression
	: conditional_expression									  							{$$ = $1;}
	| unary_expression assignment_operator assignment_expression  							{
																									make_children($2, $1, $3, NULL); $$ = $2;
																									string assign = assignment_expr($1->type, $3->type, $2->s);
																									if(assign == ""){
																										yyerror("Cannot assign type " + $3->type + " to " + $1->type);
																									}else{
																										if(assign == "true")
																											$$->type = $1->type;
																										else if(assign =="warning"){
																											$$->type = $1->type;
																											yyerror("Assignment with incompatible pointer type");
																										}		
																									}
																									$$->key=$3->key;
																  							}
	;


assignment_operator
	: '='																					{$$ = new_2_node("=", NULL, NULL);  $$->key = $$->s;$$->type = $1;}
	| PRODUCT_ASSIGNMENT																	{$$ = new_2_node("*=", NULL, NULL); $$->key = $$->s;$$->type = $1;}
	| DIVIDE_ASSIGNMENT																		{$$ = new_2_node("/=", NULL, NULL); $$->key = $$->s;$$->type = $1;}
	| ADD_ASSIGNMENT																		{$$ = new_2_node("+=", NULL, NULL); $$->key = $$->s;$$->type = $1;}
	| SUBTRACT_ASSIGNMENT																	{$$ = new_2_node("-=", NULL, NULL); $$->key = $$->s;$$->type = $1;}
	| AND_ASSIGNMENT																		{$$ = new_2_node("&=", NULL, NULL); $$->key = $$->s;$$->type = $1;}
	| XOR_ASSIGNMENT																		{$$ = new_2_node("^=", NULL, NULL); $$->key = $$->s;$$->type = $1;}
	| OR_ASSIGNMENT																			{$$ = new_2_node("|=", NULL, NULL); $$->key = $$->s;$$->type = $1;}
	;

expression
	: assignment_expression                 												{$$ = $1;}      
	| expression ',' assignment_expression      											{
																								$$ = new_2_node(",", $1, $3);
																							}
	;

constant_expression
	: conditional_expression																{$$ = $1;}
	;

declaration
	: declaration_specifiers B1 ';' 														{$$ = $1;}
	| declaration_specifiers init_declarator_list B1 ';'									{$$ = new_2_node("Declaration", $1, $2);}
	;
B1
	: %empty 	{type_var = "";}
	;

declaration_specifiers
	: storage_class_specifier																{$$ = $1;}
	| storage_class_specifier declaration_specifiers										{$$ = new_2_node("Declaration Specifier", $1, $2);}
	| type_specifier																		{ $$ = $1;}
	| type_specifier declaration_specifiers													{$$ = new_2_node("Declaration Specifier", $1, $2);}
	;

init_declarator_list
	: init_declarator																		{$$ = $1;}
	| init_declarator_list ',' init_declarator												{$$ = new_2_node(",", $1, $3);}
	;

init_declarator
	: declarator                   															{
																									$$ = $1;
																									if((find_entry(scope_st,$1->key))){
																										yyerror($1->key + " is redeclared.");
																										
																									}
																									else{
																										insert_entry($1->key,$1->type,0,$1->size,curr_scope);
																									}
																								}
	| declarator '=' initializer   																{
																									$$ = new_2_node("=", $1, $3);
																									if((find_entry(scope_st,$1->key))){
																										yyerror($1->key + " is redeclared.");
																										
																									}
																									else{
																										insert_entry($1->key,$1->type,1,$1->size,curr_scope);
																									}
																								}
	;

storage_class_specifier
	: TYPEDEF    	                															{$$=new_leaf_node($1);}
	;

type_specifier
	: VOID 																						{	$$=new_leaf_node($1);
																									if(type_var=="")type_var="void";
																									else type_var += "void";
																								}
	| CHAR 																						{	$$=new_leaf_node($1);
																									if(type_var=="")type_var="char";
																									else type_var += " char";
																								}
	| SHORT																						{	$$=new_leaf_node($1);
																									if(type_var=="")type_var="short";
																									else type_var += " short";
																								}
	| BOOL 																						{	$$=new_leaf_node($1);
																									if(type_var=="")type_var="bool";
																									else type_var += " bool";
																								}
	| INT 																						{
																									$$=new_leaf_node($1);
																									if(type_var=="")type_var="int";
																									else type_var+=" int";
																								}
	| LONG																						{
																									$$=new_leaf_node($1);
																									if(type_var=="")type_var="long";
																									else type_var+=" long";
																								}
	| FLOAT																						{
																									$$=new_leaf_node($1);
																									if(type_var=="")type_var="float";
																									else type_var+=" float";
																								}
	| DOUBLE																					{
																									$$=new_leaf_node($1);
																									if(type_var=="")type_var="double";
																									else type_var+=" double";
																								}
	| SIGNED																					{
																									$$=new_leaf_node($1);
																									if(type_var=="")type_var="signed";
																									else type_var+=" signed";
																								}
	| UNSIGNED 																					{
																									$$=new_leaf_node($1);
																									if(type_var=="")type_var="unsigned";
																									else type_var+=" unsigned";
																								}
	| STRING 																					{
																									$$=new_leaf_node($1);
																									if(type_var=="")type_var="string";
																									else type_var+=" string";
																								}
	| struct_specifier	            															{
																									$$=$1;
																									if(type_var=="")type_var="struct "+$$->child1->s;
																									else type_var+="struct "+$$->child1->s;
																								}

struct_specifier
	: STRUCT IDENTIFIER                                 										{	
																									$$ = new_1_node("STRUCT", new_leaf_node($2));
																									$$->size = getSize("struct " + string($1));
																								}
	;

S1
	:IDENTIFIER 																				{	$$=new_leaf_node($1);
																									struct_name = string("struct " + $$->s);
																								}
	;


struct_declaration_list
	: struct_declaration 																		{$$=$1;}
	| struct_declaration_list struct_declaration 												{
																									$$ = new_2_node("struct_declaration_list",$1,$2);
																									$$->size = $1->size + $2->size;
																								}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list B1 ';' 									{
																								$$ = new_2_node("struct_declaration",$1,$2);
																								$$->size=$2->size;
																								}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list 													{$$=new_2_node("specifier_qualifier_list",$1,$2);}
	| type_specifier																			{	
																									$$=$1;
																									$$->type=$1->type;
																								}
	;

struct_declarator_list
	: declarator																				{
																									$$=$1;
																									if((find_struct_entry(struct_name,$1->key)))
																										yyerror("Line " + to_string($1->line_num) + ": " + $1->key + " is already declared");
																									else{
																										insert_struct_entry(struct_name, $1->key,$1->type,$1->size);
																										
																									}
																								}
	| struct_declarator_list ',' declarator 													{
																									$$=new_2_node(",",$1,$3);
																									$$->size = $1->size + $3->size;
																								}
	;

declarator	
	: pointer direct_declarator 																{
																									$$ = new_2_node("declarator",$1,$2);
																									$$->type=$1->type+" "+$2->type;
																									$$->key=$2->key;$$->size=getSize($$->type);
																								}	
	| direct_declarator																			{
																									$$ = $1;
																								}
	;

direct_declarator	
	: IDENTIFIER																				{
																									$$ = new_leaf_node($1);
																									$$->type=type_var;
																									$$->key=$1;
																									$$->size=getSize($$->type);
																								}											
	| '(' declarator ')'																		{
																									$$ = new_1_node("()", $2);
																									$$->type=$2->type;$$->key=$2->s;
																									$$->size=$2->size;
																								}	
	| direct_declarator '[' constant_expression ']'												{	
																									$$ = new_2_node("[]",$1,$3);
																									$$->type=$1->type;$$->key=$1->s;
																									
																									$$->size=getSize($$->type)*stoi($3->s);
																								}
	| direct_declarator '[' ']'																	{
																									$$ = new_1_node("[]",$1);
																									$$->type=$1->type;$$->key=$1->s;
																									$$->size=getSize($$->type);
																								}	
	| direct_declarator '(' B1 parameter_type_list ')'											{
																									$$ = new_2_node("()",$1,$4);
																									$$->type=$1->type;$$->key=$1->s;
																									$$->size=getSize($$->type);
																									FUNC_PARAM.insert(make_pair($1->type+" "+$1->key,func_params));
																									const char delim = ',';
																									std::vector<std::string> args;
																									break_inputs(func_params, delim, args);
																									for(int i=0;i<args.size();i++){
																										const char delim1 = ' ';
																										std::vector<std::string> arg;
																										break_inputs(args[i], delim1, arg);
																										string t="";
																										for(int j=0;j<arg.size()-1;j++){
																											if(t=="")t=arg[j];
																											else t+=" "+arg[j];
																										}
																										int size=getSize(t);																
																										insert_entry(arg[arg.size()-1],t,1,size,num_scopes+1);
																									}			
																									
																									func_params="";
																									insert_entry($1->key,type_var,0,$1->size,0);
    																								entry_map.insert(make_pair(num_scopes+1,$1->key));
																								}	
	| direct_declarator '(' B1 identifier_list ')'												{
																									$$ = new_2_node("()",$1,$4);
																									$$->type=$1->type;$$->key=$1->s;
																									$$->size=getSize($$->type);
																									FUNC_PARAM.insert(make_pair($1->type+" "+$1->key,func_params));
																									func_params="";
																									insert_entry($1->key,type_var,0,$1->size,0);
    																								entry_map.insert(make_pair(num_scopes+1,$1->key));
																								}	
	| direct_declarator '(' B1 ')'																{
																									$$ = new_1_node("()", $1);
																									$$->type=$1->type;$$->key=$1->s;
																									$$->size=getSize($$->type);
																									FUNC_PARAM.insert(make_pair($1->type+" "+$1->key,func_params));
																									func_params="";
																									insert_entry($1->key,$1->type,0,$1->size,0);
    																								entry_map.insert(make_pair(num_scopes+1,$1->key));
																								}	
	;	

pointer
	: '*' 																						{$$=new_leaf_node("*");$$->type="*";}
	| '*' pointer 																				{$$=new_1_node("*",$2);$$->type="* "+ $2->type;}
	;


parameter_type_list
 	: parameter_list 																			{$$=$1;} 			
 	;

parameter_list
	: parameter_declaration																		{$$=$1;}		
	| parameter_list k1 parameter_declaration 													{$$=new_2_node(",",$1,$3);}
	;

k1
	: ','		{type_var="";}
	;

parameter_declaration
	: declaration_specifiers declarator 														{
																									if(func_params=="")
																									    func_params+=$2->type+" "+$2->key;
																									else
																									    func_params+=","+$2->type+" "+$2->key;
																									$$=new_2_node("parameter_declaration",$1,$2);
																								}
	| declaration_specifiers abstract_declarator 												{$$=new_2_node("parameter_declaration",$1,$2);}
	| declaration_specifiers 																	{$$=$1;}
	;

identifier_list
	: IDENTIFIER																				{$$ = new_leaf_node($1);}
	| identifier_list ',' IDENTIFIER															{$$ = new_2_node("," , $1, new_leaf_node($3));}
	;

type_name
	: specifier_qualifier_list																	{$$=$1;}
	| specifier_qualifier_list abstract_declarator 												{$$=new_2_node("type_name",$1,$2);}
	;

abstract_declarator
	: pointer      																				{$$=$1;}	
	| direct_abstract_declarator 																{$$=$1;}
	| pointer direct_abstract_declarator 														{$$=new_2_node("pointer direct_abstract_declarator", $1, $2);}
	;

direct_abstract_declarator
	: '(' abstract_declarator ')' 																{$$=new_1_node("()",$2);}
	| '[' ']'																					{$$=new_leaf_node("[]");}
	| '[' constant_expression ']'																{$$=new_1_node("[]",$2);}
	| direct_abstract_declarator '[' ']'														{$$=new_1_node("[]",$1);}
	| direct_abstract_declarator '[' constant_expression ']'									{$$=new_2_node("[]",$1,$3);}
	| '(' ')'																					{$$=new_leaf_node("()");}
	| '(' parameter_type_list ')' 																{$$=new_1_node("()",$2);}
	| direct_abstract_declarator '(' ')' 														{$$=new_1_node("()",$1);}
	| direct_abstract_declarator '(' parameter_type_list ')' 									{$$=new_2_node("()",$1,$3);}
	;

initializer
	: assignment_expression																		{$$ = $1;}
	| new_stmt																					{$$ = $1;}
	| '{' initializer_list '}'																	{$$ = $2;}
	| '{' initializer_list ',' '}'  															{$$ = new_1_node(",", $2);}
	;

initializer_list
	: initializer																				{$$ = $1;}
	| initializer_list ',' initializer															{$$ = new_2_node(",", $1, $3);}
	;

statement
	: labeled_statement             															{$$ = $1;}
	| compound_statement																		{$$ = $1;}
	| expression_statement																		{$$ = $1;}
	| selection_statement																		{$$ = $1;}
	| iteration_statement																		{$$ = $1;}
	| jump_statement																			{$$ = $1;}
	| printf_stmt			    																{$$ = $1;}
	| scanf_stmt			    																{$$ = $1;}
	| delete_stmt																				{$$ = $1;}
	;

labeled_statement
	: IDENTIFIER ':' statement               													{$$ = new_2_node("LABELLED_STATEMENT", new_leaf_node($1), $3);}
	| CASE constant_expression ':' statement 													{$$ = new_2_node("CASE", $2, $4);}
	| DEFAULT ':' statement					 													{$$ = new_1_node("DEFAULT", $3);}
	;
	
compound_statement
	: '{' '}'																					{$$ = NULL;}
	| A1 statement_list A2																		{$$ = $2;}
	| A1 declaration_list A2																	{$$ = $2;}
	| A1 declaration_list statement_list A2														{if($2){$$ = new_2_node("INIT_LIST--STATEMENT_LIST", $2, $3);}else{$$ = new_2_node("compound_statement",$2,$3);}}
	;

A1
	: '{'
																								{
																									type_var = "";
																									num_scopes++;
																									curr_scope = num_scopes;
																									scope_st.push(curr_scope);
																								}
	;

A2
	: '}'
																								{
																									scope_st.pop();
																									curr_scope = scope_st.top();
																								}
	;

declaration_list
	: declaration																				{$$ = $1;}
	| declaration_list declaration																{$$ = new_2_node("declaration_list", $1, $2);}
	;

statement_list
	: statement																					{$$ = $1;}
	| statement_list statement																	{$$ = new_2_node("statement_list", $1, $2);}
	;

expression_statement
	: ';'																						{$$ = NULL;}
	| expression ';'																			{$$ = $1;}
	;


selection_statement
	: IF '(' expression ')' statement stmt    													{if($6){$$ = new_3_node("IF", $3, $5, new_1_node("ELSE", $6));}else{$$ = new_2_node("IF", $3, $5);}}
	| SWITCH '(' expression ')' statement	  													{$$ = new_2_node("SWITCH-CASE", $3, $5);}
	;

stmt
	: ELSE statement																			{$$ = $2;}
	| statement 																				{$$ = $1;}
	;

new_stmt
    : NEW type_specifier '[' CONSTANT ']'														{$$=new_2_node("NEW", $2, new_leaf_node($4));}
	| NEW type_specifier 																		{$$=new_2_node("NEW", $2, NULL);}
	;

delete_stmt
    : DELETE IDENTIFIER ';' 																	{$$=new_1_node("DELETE", new_leaf_node($2));}
	| DELETE '[' ']' IDENTIFIER ';' 															{$$=new_1_node("DELETE", new_leaf_node($2));}
	;

printf_stmt
	: PRINTF '(' STRING_VAL ')' ';'   															{$$ = new_2_Stringval_node("PRINTF", new_leaf_node($3), NULL);}
	| PRINTF '(' STRING_VAL ',' printf_helper ')' ';'   										{$$ = new_2_Stringval_node("PRINTF", new_leaf_node($3), $5);}

printf_helper
	: IDENTIFIER                                                       							{$$=new_leaf_node($1);}
	| IDENTIFIER ',' printf_helper                                              				{$$ = new_2_node(",", new_leaf_node($1),$3);}
	| IDENTIFIER '[' CONSTANT ']'                                               				{$$ = new_2_node("[]", new_leaf_node($1), new_leaf_node($3));}
	| IDENTIFIER '[' CONSTANT ']' ',' printf_helper                             				{$$ = new_3_node("[]",new_leaf_node($1),new_leaf_node($3),$6);}
    ;

scanf_stmt
	: SCANF '(' STRING_VAL ',' scanf_helper ')' ';' 											{$$ = new_2_Stringval_node("SCANF", new_leaf_node($3), $5);}
	;

scanf_helper
	: '&' IDENTIFIER                                                                            {$$=new_leaf_node($2);}
	| '&' IDENTIFIER ','  scanf_helper                                                          {$$ = new_2_node(",", new_leaf_node($2),$4);}
    ;	
	
iteration_statement 
	: WHILE '(' expression ')' statement														{$$ = new_2_node("WHILE", $3, $5);}
	| DO statement WHILE '(' expression ')' ';'													{$$ = new_2_node("DO-WHILE", $2, $5);}
	| FOR '(' expression_statement expression_statement ')' statement							{$$ = new_2_node("FOR", new_3_node("CONTROL_STATEMENTS", $3, $4, NULL), $6);}
	| FOR '(' expression_statement expression_statement expression ')' statement				{$$ = new_2_node("FOR", new_3_node("CONTROL_STATEMENTS", $3, $4, $5), $7);}
	;

jump_statement
	: CONTINUE ';'																				{$$ = new_leaf_node("CONTINUE");}
	| BREAK ';'																					{$$ = new_leaf_node("BREAK");}
	| RETURN ';'																				{$$ = new_1_node("RETURN", NULL);}
	| RETURN expression ';'																		{$$ = new_1_node("RETURN", $2);}
	;

program
	: translation_unit  					  													{free_ast($1);}
	;

translation_unit
	: external_declaration                    													{$$ = $1; type_var="";}
	| translation_unit B1 external_declaration   			 									{$$ = new_2_node("<>", $1, $3);type_var="";}
	;

external_declaration

	: function_definition																		{$$ = $1;}
	| declaration																				{$$ = $1;}
	| external_struct_declaration 																{$$ = $1;}
	;

external_struct_declaration
	:	STRUCT S1 B1 '{' struct_declaration_list '}' ';'   										{
																									$$ = new_2_node("STRUCT", $2, $5);
																									$$->size=$5->size;
																								}
	;

function_definition
	: declaration_specifiers declarator compound_statement 					  					{$$ = new_3_node("function_definition",$1,$2,$3);}
	| declarator compound_statement											  					{$$ = new_2_node("function_definition",$1, $2);}
	;

%%

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