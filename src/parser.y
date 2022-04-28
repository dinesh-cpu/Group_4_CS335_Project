%{
#include <bits/stdc++.h>
#include "parser.tab.h"
#include "ast.h"
#include "type_checking.h"

using namespace std;

extern int line;
fstream ast_output;

int yyerror(const string&);
int yylex();
%}

%locations

%union{
	int line_num;
    char *Str;
    struct node* Node;
}

%token<Str> '>' '<' '~' '|' '&' '^' '=' '+' '-' '/' '*' '%' '(' ')' ':' '!' '{' '}' '[' ']' 
%token<Str> '?' '.' ';' ','
%token<Str> IDENTIFIER STRING_VAL CONSTANT CHAR_CONSTANT
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
%type<Node> expression_statement  selection_statement iteration_statement jump_statement translation_unit external_declaration function_definition 
%type<Node> printf_stmt scanf_stmt new_stmt delete_stmt 
%type<Node> program

%type<Node> printf_helper scanf_helper
%type<Node> storage_class_specifier type_specifier declaration_specifiers struct_specifier 
%type<Node> declaration specifier_qualifier_list direct_declarator parameter_declaration identifier_list 
%type<Node> declaration_list declarator struct_declaration struct_declaration_list pointer struct_declarator_list
%type<Node> parameter_list parameter_type_list type_name abstract_declarator direct_abstract_declarator 
%type<Node> S1 E1 E2 external_struct_declaration N new_or new_and C1 C2
%start program

%type<line_num> M 
%%

primary_expression
	: IDENTIFIER																			{	$$ = new_leaf_node($1);	
																								tEntry* entry = lookup(scope_st,$1);
																								if(entry == NULL){
																												$$->type = "NULLTYPE";
																												yyerror(string($1) + " is not declared");
																								}
																								else{
																									$$->size = entry->size;
																									$$->init = entry->init;
																									$$->type = entry->type;
																									$$->key = $$->s;
																									$$->isidentifier = 1;
																									$$->place = {$$->key,entry};	
																								}
																							}
	| CONSTANT																				{
																								$$ = new_leaf_node($1);
																								$$->key = $$->s;
																								$$->init = 1;
																								float num = stof($$->s);
																								int a = num;
																								if(a == num){
																									// int
																									$$->val_type = 1;
																									$$->num = num;
																									$$->type = "int";

																									$$->place = {$1, NULL};
																								}
																								else {
																									// float
																									$$->val_type = 3;
																									$$->num = num;
																									$$->type = "float";

																									$$->place = {$1, NULL};
																								}
																							}
	| CHAR_CONSTANT																			{
																								$$ = new_leaf_node($1);
																								$$->key = $$->s;
																								$$->init = 1;
																								$$->type = "char";
																																															
																								$$->place = {$1, NULL};
																							}
																							
	| STRING_VAL																			{	// cout << "string called"<<endl;
																								$$=new_leaf_node($1);

																								// for dot file "\"name\""
																								string a = "\\";
																								string b = $$->s;
																								b.pop_back();
																								string c = "\\\"";
																								// update s
																								$$->s = a + b + c;

																								$$->init=1;	
																								$$->type = "string";
																								$$->key = $$->s;
																								
																								$$->place = {$1, NULL};
																							}
	| '(' expression ')'                        											{
																								$$=$2;
																							}
	;	
	
postfix_expression	
	: primary_expression																	{ $$ = $1; }
	| postfix_expression '[' expression ']'												{	
																							// printf("postfix called\n");
																							$$ = new_2_node("[]", $1, $3);
																							// array
                                                                                            $$->flag = 1;
																				
																							if($3->s.substr(0,1) == "-"){
																								yyerror( "Index of array " + $1->key + " negative is invald.");

																							}
																							else{ 
																								tEntry* entry = lookup(scope_st, $1->key);
																								if(entry){
																									$$->type = entry->type;
																								}
																								else{
																									$$->type = "NULLTYPE";
																									yyerror($1->key + " is not declared");
																								}

																								int curr_idx = stoi($3->key);
																								int arr_length = entry->size/getSize(entry->type);

																								if(curr_idx >= arr_length){
																									yyerror("Array " + $1->key + " index is out of bound.");
																								}
																								else{
																									$$->key = $1->key;
																									$$->val_type = $1->val_type;
																									if($1->init == 1 && $3->init == 1)
																										$$->init = 1;
	
																									// tmp_0 = n * size
																									string tmp_0 = ir_variable( $3->type , offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize($3->type) );
																									emit($3->place, "*", {to_string(getSize($$->type)), NULL}, {tmp_0, tempen0}, emit_line);
	
																									// tmp_1 = arr + tmp_0
																									string tmp_1 = ir_variable($$->type + " *", offset, curr_scope);
																									tEntry* tempen1 = lookup(scope_st, tmp_1);
																									align_offset( getSize($$->type + " *") );
																									emit($1->place , "+", {tmp_0, tempen0}, {tmp_1, tempen1}, emit_line );
																									$$->place = {tmp_1, tempen1};
																								}
																							}
																						}

	| postfix_expression '(' ')'															{	
																								$$ = new_1_node("()", $1);

																							 	tEntry* entry=lookup(scope_st,$1->key);
																								if(entry){
																									$$->type = entry->type;
																									$$->key = $1->key;
																									$$->val_type = $1->val_type;
																									$$->num = $1->num;
																									$$->init = $1->init;

																									if(entry->type == ""){
																										yyerror("NULLTYPE function call.");
																									}

																									string funcname = $$->type+" "+$1->key;
																									// FIND IS FUNCTION IS DECLARED
																									if(FUNC_PARAM.find(funcname) == FUNC_PARAM.end()){
																										yyerror("The Function " + $1->key + " is not yet declared");
																									}
																									else{
																										emit({string("call"), NULL}, "", $1->place, {"", NULL},-1);
																									}
																									// no function arguments
																									func_args="";
																								}
																								else{
																									$$->type = "NULLTYPE";
																									yyerror($1->key +  " is not yet declared");
																								}
																							}
	| postfix_expression '(' argument_expression_list ')' 									{	
																								$$ = new_2_node("()", $1,$3);
																							 	tEntry* entry = lookup(scope_st,$1->key);

																								if(entry){
																									if($1->init == 1 && $3->init == 1)
																										$$->init = $1->init;
																									$$->type = entry->type;
																									$$->key = $1->key;
																									$$->val_type = $1->val_type;
																									$$->num = $1->num;
																									$$->place = {$1->key,lookup(scope_st,$1->key)};

																									string funcname = $$->type+" "+$1->key;

																									if(FUNC_PARAM.find(funcname) == FUNC_PARAM.end()){
																										yyerror("Function " + $1->key + " is not declared");
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
																											emit( {string("call"), NULL} , "" , $1->place , { "", NULL} , -1);
																											parameter_p.clear();
																										}
																										else 
																											yyerror("Invalid number of arguments");
																									}
																								}
																								else{
																									$$->type = "NULLTYPE";
																									yyerror($1->key + " is not yet declared");
																								}
																							}
	| postfix_expression '.' IDENTIFIER														{	

																								$$ = new_2_node("." , $1 , new_leaf_node($3));
																								tEntry* entry = lookup(scope_st,$1->key);
																								$$->key = $1->key;

																								// struct
																								$$->flag=1;
																								if(entry){
																									tEntry* struct_entry= find_struct_entry($1->type , $3);
																									if(struct_entry){
																										if(struct_entry->key != $3)
																											yyerror("Type Mismatch");
																										$$->type = struct_entry->type;
																									}
																									else{
																										     yyerror("Invalid attribute " + string($3) + " for " + $1->key);
																											 $$->type = "error_type";
																									}
																									
																									// tmp_0 = struct name + offset
																									string tmp_0 = ir_variable($$->type + " *",offset,curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize($$->type + " *") );
																									emit( $1->place ,"+" , {to_string(struct_entry->offset), NULL} , {tmp_0, tempen0} , emit_line);
																									
																									$$->place = { tmp_0, tempen0};

																								}	

																								else{
																									$$->type = "NULLTYPE";
																									yyerror($1->key + " is not yet declared.");
																								}
																							}

	| postfix_expression POINTER_OPERATOR IDENTIFIER										{
																								$$ = new_2_node("->", $1, new_leaf_node($3));
																								$$->key=$1->key;
																								// ptr not supported
																								//if( isptr($1->type)){
																								// 	tEntry* entry = find_struct_entry(struct_name, $1->key);
																								//}
																								//else{
																								//	yyerror("This operation is not supported.");
																								//}
																							}

	| postfix_expression INCREMENT															{
																								// cout << "increment" << $1->init << endl;
    												    										$$ = new_1_node("++", $1);
																								$$->key  = $1->key;
																								$$->init = $1->init;
																								if($$->init != 1){
																									yyerror("First initialise the variable " + $1->key);
																								}
																								$$->type = $1->type;
																								$$->val_type = $1->val_type;
																								$$->num = $1->num + 1;

																								string typecheck = postfix_expr( $1->type );
																								// type is not integer
																								if(typecheck == ""){
																									$$->type = "NULLTYPE";
																								    yyerror($1->key + " doesn't have suitable type for increment operation");
																								}
																								// integer
																								else{
																								   	$$->type = typecheck;

																								   	string tmp_0 = ir_variable( $$->type, offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																								   	align_offset( getSize($$->type) );

																								   	$$->place = {tmp_0, tempen0};
																									// tmp_0 = variable
																								   	emit({ "", NULL} , "" , $1->place , $$->place , emit_line);
																									// variable = tmp_0 + 1
																									emit($$->place, "+" , {string("1"), NULL} , $1->place , emit_line);
																								}
																							}
	| postfix_expression DECREMENT															{
																								$$ = new_1_node("--", $1);
																								$$->key = $1->key;
																								$$->val_type = $1->val_type;
																								$$->num = $1->num-1;
																								$$->init = $1->init;
																								if($$->init != 1){
																									yyerror("First initialise the variable " + $1->key);
																								}
																								$$->type = $1->type;

																								string typecheck = postfix_expr($1 -> type);
																								// type is not integer
																								if(typecheck == ""){
																									$$->type = "NULLTYPE";
																								    yyerror($1->key + " doesn't have suitable type for decrement operation");
																								}
																							
																								else{
																								   	$$->type = typecheck;

																								   	string tmp_0 = ir_variable( $$->type, offset , curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize($$->type) );

																									$$->place = {tmp_0, tempen0};
																									// tmp_0 = variable
																									emit({ "", NULL} ,"" , $1->place , $$->place, emit_line);
																									// variable = tmp_0 + 1
																									emit($$->place , "-", {string("1"), NULL}, $1->place, emit_line);
																								}
																							}	
	;

argument_expression_list
	: assignment_expression 																{	
																								$$=$1;
																							 	// func_args
																								$$->init = $1->init;
																								$$->key = $1->key;
																								$$->num = $1->num;
																								$$->val_type = $1->val_type;
																								$$->init = $1->init;
																								func_args = $1->type;

																								// lists
																								$$->nextlist = $1->nextlist;
																								$$->continuelist = $1->continuelist;
																								$$->breaklist = $1->breaklist;
																								$$->truelist = $1->truelist;
																								$$->falselist = $1->falselist;

																								$$->place = $1->place;
																								parameter_p.push_back($1->place);

																							}
	| argument_expression_list ',' assignment_expression 									{
																								$$=new_2_node(",", $1 , $3);

																								func_args = func_args + " ," + $3->type;
																							 	$$->type = "";
																							 	if($1->init == 1 && $3->init == 1)
																								 	$$->init = 1;
																								$$->key = $1->key;
																								$$->num = $1->num + 1;
																								$$->val_type = $1->val_type;
																								
																								parameter_p.push_back($3->place);

																							}
	;

unary_expression
	: postfix_expression																	{ $$ = $1; }				
	| INCREMENT unary_expression															{   
																								$$ = new_1_node("++", $2);
																								tEntry* entry = lookup( scope_st , $2->key );

																								if(entry){
																									$$->num = $2->num+1;

																									if($2->init == 1){
																										$$->init = 1;
																									}
																								    else{
																										yyerror("Variable " + $2->key + " is not initialised.");
																									}
																									
																									if($2->init){
																										$$->type = entry->type;
																										$$->key = $2->key;
																										$$->val_type = $2->val_type;
																										$$->num = $2->num+1;

											 															string typecheck = postfix_expr($2->type);
																										if(typecheck == ""){
																												 $$->type = "NULLTYPE";
																												 yyerror($2->key + " doesnot have suitable type for increment operation");
											 															}
																										else{
																											$$->type = typecheck;

																											string tmp_0 = ir_variable($$->type , offset ,  curr_scope);
																											tEntry* tempen0 = lookup(scope_st, tmp_0);
																											align_offset( getSize($$->type) );

																											$$->place = {tmp_0, tempen0};
																											// tmp_0 = variable + 1	
																											emit($2->place , "+" , {string("1"), NULL},  $$->place, emit_line);
																											// variable = tmp_0
																											emit({ "", NULL} , "", $$->place, $2->place, emit_line);
											 															}
																									}
																									
																								}
																							}

	| DECREMENT unary_expression															{	$$ = new_1_node("--", $2);
																								tEntry* entry=lookup(scope_st,$2->key);

																								if(entry){
																									$$->num = $2->num-1;

																									if($2->init == 1){
																										$$->init = 1;
																									}
																									else
																										yyerror("Variable " + $2->key + " is not initialised.");

																									if($2->init){
																										$$->type = $2->type;
																										$$->key = $2->key;
																										$$->val_type = $2->val_type;
																										$$->num = $2->num-1;

																										string typecheck = postfix_expr($2 -> type);
																										if(typecheck == ""){
																											$$->type = "NULLTYPE";
																											yyerror($2->key + " doesnot have suitable type for decrement operation");
																										}
																										else{
																											$$->type = typecheck;

																											string tmp_0 = ir_variable( $$->type , offset, curr_scope);
																											tEntry* tempen0 = lookup(scope_st, tmp_0);
																											align_offset( getSize($$->type) );

																											$$->place = {tmp_0, tempen0};	
																											// tmp_0 = variable + 1
																											emit($2->place, "-" , {string("1"), NULL} , $$->place , emit_line);
																											// variable = tmp_0
																											emit({ "", NULL}, "" , $$->place , $2->place , emit_line);  
																										}	
																									}
																								}
																							}

	| unary_operator cast_expression       													{
																								make_children($1, $2, NULL, NULL); 
																								$$ = $1;
																								tEntry* entry=lookup(scope_st , $2->s);

																								if(!entry){
																									yyerror($2->key+" is not declared");
																								}
																								else{
																									if($2->init == 1){
																										$$->init = 1;
																									}

																									$$->type = $2->type;
																									$$->key = $2->key;
																									$$->num = $2->num;
																									$$->val_type = $2->val_type;

											 														string typecheck = unary_expr($1->s, $2->type);

																									if(typecheck == ""){
												 														yyerror("Not consistent with the operator " + $1->key);
																									}
	
																									if($1->s=="*"){
																										if($2->type[$2->type.size()-1] != '*'){
																											yyerror($2->key + " is not a pointer type");
																										}
																										
																										// * (int *) = int
																										$$->type = $2->type.substr(0,$2->type.size()-2);
																									}

																									else if($1->s == "&"){
																										if( $2->type[$2->type.size()-1] == '*'){
																											yyerror($2->key + " is not a pointer type");
																										}
																										
																										$$->type = $2->type + " *";
																									}

																									if($1->s == "*"){
																										$$->flag = 1;
																										$$->place = $2->place;
																									}

																									else {
																										string tmp_0 = ir_variable($$->type , offset,  curr_scope);
																										tEntry* tempen0 = lookup(scope_st, tmp_0);
																										align_offset( getSize($$->type) );

																										$$->place = {tmp_0, tempen0};
																										emit({ "", NULL} , $1->s , $2->place , $$->place , emit_line);
																									}	
																								}
																							}

	| SIZEOF unary_expression																{	
																								$$ = new_1_node("SIZEOF", $2);
																							 	$$->type = "int";
																							 	$$->init = 1;
																								$$->num = $2->num;
																							 	$$->key = $2->key;
																								$$->val_type = $2->val_type;
																								
																							}

	| SIZEOF '(' type_name ')'																{
																								$$ = new_1_node( "SIZEOF" , $3);
																								$$->type = "int";
																								$$->init = 1;
																								$$->key = $3->key;
																							}
	;

unary_operator
	: '&'																					{ 	$$ = new_1_node( "&" , NULL) ;
																							 	$$->key = $$->s ; 
																								$$->type="&" ; 
																							}
	| '*'																					{ 	$$ = new_1_node( "*" , NULL) ; 
																								$$->key = $$->s ; 
																								$$->type="*" ; 
																							}
	| '+'																					{ 	$$ = new_1_node( "+" , NULL) ; 
																								$$->key = $$->s ; 
																								$$->type="+" ; 
																							}
    | '-'																					{ 	$$ = new_1_node( "-" , NULL) ; 
																								$$->key = $$->s ; 
																								$$->type="-" ; 
																							}
	| '~'																					{ 	$$ = new_1_node( "~" , NULL) ; 
																								$$->key = $$->s ; 
																								$$->type="~" ; 
																							}
	| '!'																					{ 	$$ = new_1_node( "!" , NULL) ; 
																								$$->key = $$->s ; 
																								$$->type="!" ; 
																							}
	;

 cast_expression
 	: unary_expression																		{
		 																						$$ = $1;

																								if($1->flag == 1){		
																									string tmp_0 = ir_variable( $1->type , offset , curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize( $1->type) );

																									emit({ "", NULL}, "*", $1->place, {tmp_0, tempen0}, emit_line);
																									$$->place = {tmp_0, tempen0};
																								}

																								// reset flag
																								$$->flag = 0;
																							}
 	| '(' type_name ')' cast_expression	    	            								{
		 																						$$ =  new_2_node("CAST_EXPRESSION", $2, $4);
	 																							$$->type = $2->type;

																								if($4->init == 1){
																									$$->init = 1;
																								}
																								$$->key=$4->key;
														 									}   
 	;

multiplicative_expression	
	: cast_expression                                           							{$$ = $1;}
	| multiplicative_expression '*' cast_expression             							{
																								$$ = new_2_node("*", $1, $3);
																								$$->key = $1->key;
																								if($1->init==1 && $3->init==1) {
																									$$->init=1;
																								}

																								string typecheck = multiplicative_expr($1->type, $3->type, '*'); 
																								// cout<< typecheck<< endl;
																								if(typecheck == ""){
																									$$->type = "NULLTYPE";
																									yyerror(" * operator will not be used");
																								}
																								else{
																									if(typecheck == "int"){
																										$$->type = "int";
																									}
																									else if(typecheck == "float"){
																										$$->type = "float";
																									}
																									else 
																										$$->type = typecheck;

																									string tmp_0 = ir_variable ( $$->type , offset , curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize($$->type) );

																									$$->place = {tmp_0, tempen0};	
																									// tmp_0 = exp * exp
																									emit( $1->place , "*" , $3->place , $$->place , emit_line);
																								} 	
																							}

	| multiplicative_expression '/' cast_expression             							{	
																								$$ = new_2_node("/", $1, $3);
																								$$->key = $1->key;
																								if($1->init==1 && $3->init==1) {
																									$$->init=1;
																								}

																								string typecheck = multiplicative_expr($1->type, $3->type, '/'); 
																								if(typecheck == ""){
																									$$->type = "NULLTYPE";
																									yyerror("/ operator is not applicable");
																								}
																								else{
																									if(typecheck == "int")
																										$$->type = "int";
																									else if( typecheck == "float")
																										$$->type = "float";
																									else 
																										$$->type = typecheck;
																									
																									string tmp_0 = ir_variable( $$->type, offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize($$->type) );

																									$$->place = {tmp_0, tempen0};
																									// tmp_0 = exp / exp
																									emit($1->place, "/", $3->place, $$->place, emit_line);	
																								} 	
																							}														
																
																
																
																
	| multiplicative_expression '%' cast_expression             							{	
																								$$ = new_2_node("%", $1, $3);
																								$$->key = $1->key;
																								if($1->init == 1 && $3->init == 1){
																									$$->init = 1;
																								} 

																								string typecheck = multiplicative_expr($1->type, $3->type, '%'); 
																								if(typecheck == ""){
																									$$->type = "NULLTYPE";
																									yyerror("% operator is not applicable");
																								}
																								else{
																									if(typecheck == "int"){
																										$$->type = "int";
																									}
																									else 
																										$$->type = typecheck;

																									string tmp_0 = ir_variable( $$->type ,offset ,curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize($$->type) );

																									$$->place = {tmp_0, tempen0};
																									// tmp_0 = exp % exp
																									emit($1->place, "%" ,$3->place , $$->place ,emit_line);
																								}
																							}
	;

additive_expression
	: multiplicative_expression                                  							{$$ = $1;}
	| additive_expression '+' multiplicative_expression          							{	
																								$$ = new_2_node("+", $1, $3);
																								$$->key=$1->key;
																								if($1->init==1 && $3->init==1) {
																									$$->init=1;
																								}
																									
																								string typecheck = additive_expr($1->type,$3->type,'+');
																								if(typecheck == ""){
																									$$->type = "NULLTYPE";
																									yyerror("+ operator is not applicable");
																								}
																								else{
																									$$->type = typecheck;
																									string tmp_0 = ir_variable( $$->type, offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize($$->type) );

																									$$->place = {tmp_0, tempen0};
																									// tmp_0 = exp + exp
																									emit($1->place, "+", $3->place, $$->place, emit_line);
																								} 
																								
																 							}
	| additive_expression '-' multiplicative_expression          							{
																								$$ = new_2_node("-", $1, $3);
																								$$->key=$1->key;
																								if($1->init==1 && $3->init==1) {
																									$$->init=1;
																								}
																									
																								string typecheck = additive_expr($1->type , $3->type, '-');
																								if(typecheck == ""){
																									$$->type = "NULLTYPE";
																									yyerror("- operator is not applicable.");
																								}
																								else {
																									if( typecheck == "int")
																										$$->type = "int";
																									else if( typecheck == "float")
																										$$->type = "float";
																									else 
																										$$->type = typecheck;

																									string tmp=ir_variable($$->type,offset,curr_scope);
																									tEntry* tempen = lookup(scope_st, tmp);
																									align_offset(getSize($$->type));

																									$$->place = {tmp, tempen};	
																									// tmp_0 = exp - exp
																									emit($1->place , "-" , $3->place , $$->place , emit_line);
																								}
																							}							
	;

shift_expression
	: additive_expression                                        							{ $$ = $1; }
	| shift_expression LEFT_SHIFT_OPERATOR additive_expression      						{
																								$$ = new_2_node("<<", $1, $3);
																								$$->key=$1->key;
																								if($1->init == 1 && $3->init ==1){
																									$$->init = 1;
																								}
																  								 	
																  								string typecheck = shift_expr( $1->type , $3->type);
																  								if( typecheck == ""){
																									$$->type = "NULLTYPE";
																								 	yyerror("<< operator is not applicable");
																 								}
																								else{
																								  	$$->type = $1->type;
																									string tmp_0 = ir_variable($$->type , offset , curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize($$->type) );

																									$$->place = {tmp_0, tempen0};
																									// tmp_0 = exp << exp
																									emit($1->place,"<<", $3->place , $$->place , emit_line);
																 								}
																								
																 							}
	| shift_expression RIGHT_SHIFT_OPERATOR additive_expression	   							{
																								$$ = new_2_node(">>", $1, $3);
																								$$->key=$1->key;
																   								if($1->init == 1 && $3->init ==1){
																									$$->init = 1;
																								}
																   									
																  								string typecheck = shift_expr($1->type, $3->type);
																  								if(typecheck == ""){
																									  $$->type = "NULLTYPE";
																									  yyerror(">> operator is not applicable.");
																  								}
																								else{
																									$$->type = $1->type;
																									string tmp_0 = ir_variable($$->type ,offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																		                 			align_offset( getSize($$->type) );

																		                 			$$->place = {tmp_0, tempen0};																												
																		                 			// tmp_0 = exp >> exp
																		                 			emit($1->place,">>" , $3->place , $$->place , emit_line);
																  								}
																							}
	;

relational_expression
	: shift_expression											     						{$$ = $1;}
	| relational_expression '<' shift_expression                 							{
																								$$ = new_2_node("<", $1, $3);
																								$$->key=$1->key;
																								if($1->init==1 && $3->init==1){
																									$$->init=1;
																								}

																								string typecheck = relational_expr($1->type , $3->type);
																								if(typecheck == ""){
																									$$->type = "NULLTYPE";
																									yyerror("< operator is not applicable");
																								}
																								else{
																									if( typecheck == "int"){
																										$$->type = "int";

																										string tmp_0 = ir_variable( $$->type,offset ,curr_scope);
																										tEntry* tempen0 = lookup(scope_st, tmp_0);
																										align_offset( getSize($$->type) );

																										$$->place = {tmp_0, tempen0};																												
																										// tmp_0 = exp < exp
																										emit($1->place,"<",$3->place,$$->place,emit_line);	
																									}
																									else if(typecheck == "Bool"){
																										$$->type = "Bool";
																										yyerror("Invalid Comparison between pointer and integer");
																									}
																									else{
																										yyerror("error in comparing");
																									}
																								}
																								
																							}							
	| relational_expression '>' shift_expression											{	$$ = new_2_node(">", $1, $3);
																								$$->key = $1->key;	
																								if($1->init==1 && $3->init==1) 
																									$$->init=1;

																								string typecheck = relational_expr($1->type,$3->type);
																								if(typecheck == ""){
																									$$->type = "NULLTYPE";
																								  	yyerror("> operator is not applicable.");
																								}
																								else{
																									if(typecheck == "int"){
																										$$->type = "int";

																										string tmp_0 = ir_variable($$->type ,offset ,curr_scope);
																										tEntry* tempen0 = lookup(scope_st, tmp_0);
																										align_offset( getSize($$->type) );

																										$$->place = {tmp_0, tempen0};
																										// tmp_0 = exp > exp
																										emit($1->place, ">", $3->place, $$->place, emit_line);
																									}
																									else{
																										yyerror("error in comparing");
																									}
																								}														
																							}

	| relational_expression LESS_EQUAL_OPERATOR shift_expression               				{
																								$$ = new_2_node("<=", $1, $3);
																								$$->key = $1->key;
																								if($1->init == 1 && $3->init == 1) 
																									$$->init = 1;	

																								string typecheck = relational_expr($1->type,$3->type);
																								if(typecheck == ""){
																									$$->type = "NULLTYPE";
																								  	yyerror("<= is not applicable.");
																								}
																								else{
																									if(typecheck == "int"){
																										$$->type = "int";

																										string tmp_0 = ir_variable($$->type, offset, curr_scope);
																										tEntry* tempen0 = lookup(scope_st, tmp_0);
																										align_offset( getSize($$->type) );

																										$$->place = {tmp_0, tempen0};
																										// tmp_0 = exp <= exp
																										emit($1->place, "<=", $3->place, $$->place, emit_line);
																									}
																									else{
																										yyerror("error in comparing");
																									}
																								}	
																																							
																							}
	| relational_expression GREATER_EQUAL_OPERATOR shift_expression 						{
																								$$ = new_2_node(">=", $1, $3);
																								$$->key = $1->key;
																								if($1->init == 1 && $3->init == 1) 
																									$$->init = 1;

																								string typecheck = relational_expr($1->type,$3->type);
																								if( typecheck == ""){
																									$$->type = "NULLTYPE";
																									yyerror(">= operator is not applicable");
																								}
																								else{
																									if( typecheck == "int"){
																										$$->type = "int";

																										string tmp_0 = ir_variable($$->type, offset, curr_scope);
																										tEntry* tempen0 = lookup(scope_st, tmp_0);
																										align_offset( getSize($$->type) );

																										$$->place = {tmp_0, tempen0};																												
																										// tmp_0 = exp >= exp
																										emit($1->place , ">=" ,$3->place , $$->place , emit_line);

																									}
																									else if(typecheck == "Bool"){
																										$$->type = "Bool";
																										yyerror("Invalid Comparison between pointer and integer");
																									}
																									else{
																										yyerror ("error in comparing.");
																									}
																								}	
																								
																																								
																							}
	;

equality_expression
	: relational_expression										 							{$$ = $1;}
	| equality_expression EQUAL_LOGICAL relational_expression								{
																								$$ = new_2_node("==", $1, $3);
																								$$->key = $1->key;
																								if($1->init == 1 && $3->init == 1) 
																									$$->init = 1;	

																								string typecheck = equality_expr($1->type,$3->type);
																								if( typecheck == ""){
																									$$->type = "NULLTYPE";
																								    yyerror("== operator is not applicable.");
																								}
																								else{
																									if(typecheck == "True"){
																										$$->type = "int";

																										string tmp_0 = ir_variable($$->type ,offset, curr_scope);
																										tEntry* tempen0 = lookup(scope_st, tmp_0);
																										align_offset( getSize($$->type) );

																										$$->place = {tmp_0 , tempen0 };
																										// tmp_0 = exp == exp
																										emit($1->place, "==", $3->place, $$->place, emit_line);

																									}
																									else if( typecheck == "true"){
																										yyerror("Comparison between pointer and integer");
																									}
																									else{
																										yyerror("equality operation is not valid.");
																									}
																								}																
																							}
	| equality_expression NOT_EQUAL_OPERATOR relational_expression							{
																								$$ = new_2_node("!=", $1, $3);
																								$$->key = $1->key;
																								if($1->init ==1 && $3->init == 1) 
																									$$->init = 1;	

																								string typecheck = equality_expr($1->type, $3->type);
																								if( typecheck == ""){
																									$$->type = "NULLTYPE";
																								  	yyerror("!= operator is not valid.");
																								}
																								else{
																									if( typecheck == "True"){
																										$$->type="int";

																										string tmp_0 = ir_variable($$->type, offset, curr_scope);
																										tEntry* tempen0 = lookup(scope_st, tmp_0);
																										align_offset( getSize($$->type) );

																										$$->place = {tmp_0,tempen0};																												
																										// tmp_0 = exp == exp
																										emit( $1->place, "!=", $3->place, $$->place, emit_line);	
																									}
																									else if( typecheck == "true"){
																										yyerror("Comparison between pointer and integer");
																									}
																									else{
																										yyerror("!= operetor is not valid.");
																									}
																								}																
																							}
	;

and_expression
	: equality_expression										  							{$$ = $1;}
	| and_expression '&' equality_expression					  							{
																								$$ = new_2_node("&", $1, $3);
																								$$->key = $1->key;
																								if($1->init == 1 && $3->init == 1) 
																									$$->init = 1;

																								string typecheck = bitwise_expr($1->type,$3->type);
																								if(typecheck == ""){
																									$$->type = "NULLTYPE";
																									yyerror("Invalid type for '&' expression");
																								}
																								
																								else if(typecheck=="true"){
																									$$->type = "int";

																									string tmp_0 = ir_variable($$->type, offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize($$->type) );

																									$$->place = {tmp_0, tempen0};
																									// tmp_0 = exp & exp	
																									emit($1->place, "&", $3->place, $$->place, emit_line);
																								}

																								else{
																									yyerror("& operator is not applicable.");
																								}
																							}
	;

exclusive_or_expression
	: and_expression											  							{$$ = $1;}
	| exclusive_or_expression '^' and_expression				  							{
																								$$ = new_2_node("^", $1, $3);
																								$$->key = $1->key;
																								if($1->init == 1 && $3->init == 1) 
																									$$->init = 1;

																								string typecheck = bitwise_expr($1->type, $3->type);
																								if( typecheck == ""){
																									$$->type = "NULLTYPE";
																									yyerror("Invalid type for '^' expression");
																								}
																								else if( typecheck == "true"){
																									$$->type = "int";

																									string tmp_0 = ir_variable( $$->type, offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize($$->type) );

																									$$->place = { tmp_0, tempen0};																												
																									// tmp_0 = exp ^ exp
																									emit($1->place,"^",$3->place,$$->place,emit_line);
																								}	
																								else {
																									yyerror("^ operator is not applicable.");
																								}
																							}
	;

inclusive_or_expression
	: exclusive_or_expression									  							{ $$ = $1;}
	| inclusive_or_expression '|' exclusive_or_expression		  							{
																								$$ = new_2_node("|", $1, $3);
																								$$->key = $1->key;
																								if($1->init == 1 && $3->init == 1) 
																									$$->init = 1;

																								string typecheck = bitwise_expr($1->type, $3->type);
																								if( typecheck == ""){
																									$$->type = "NULLTYPE";
																									yyerror("Invalid type for '|' expression");
																								}
																								else if( typecheck == "true"){
																		  							$$->type = "int";
							
																		                            string tmp_0 = ir_variable( $$->type, offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																		                            align_offset( getSize($$->type) );

																		                            $$->place = {tmp_0, tempen0};																												
																									// tmp_0 = exp | exp 	
																		                            emit($1->place, "|" , $3->place, $$->place, emit_line);
																
																	                            }
																								else if(typecheck == "True"){
																									$$->type = "long long";

																									string tmp_0 = ir_variable($$->type, offset, curr_scope);
																									tEntry* tempen0 = lookup(scope_st, tmp_0);
																									align_offset( getSize($$->type) );

																									$$->place = {tmp_0, tempen0};
																									// tmp_0 = exp | exp	
																									emit( $1->place, "|", $3->place, $$->place, emit_line);
																								}
																								else{
																									yyerror("| operation is not applicable.");
																								}
																							}						
	;

logical_and_expression
	: inclusive_or_expression									  							{ $$ = $1;}
	| new_and AND_LOGICAL M inclusive_or_expression										{
																								$$ = new_2_node("&&", $1, $4);
																								$$->type = "int";
																								$$->key = $1->key;
																								if($1->init == 1 && $4->init == 1) 
																									$$->init = 1;

																								backpatch( $1->truelist, $3);
																								$4->falselist = makelist( emit_line);

																								// if tmp_1 == tmp_2 goto ___
																								emit({string("if"), NULL} ,"==", $4->place, {string("goto"), NULL},-1);

																								$4->truelist = makelist( emit_line);

																								// goto ____
																								emit({string("goto"), NULL},"",{ "", NULL},{ "", NULL},-1);

																								string tmp_0 = ir_variable( $$->type, offset, curr_scope);
																								tEntry* tempen0 = lookup(scope_st, tmp_0);
																								align_offset( getSize($$->type) );

																								$$->place = {tmp_0, tempen0};																												

																								backpatch($4->truelist, emit_line); 
																								// tmp_0 = exp
																								emit({ "", NULL},"", {string("1"), NULL} , $$->place, emit_line);

																								$$->truelist = makelist(emit_line);
																								// goto ___
																								emit({string("goto"), NULL} ,"", { "", NULL} , { "", NULL},-1);

																								backpatch(merging($1->falselist ,$4->falselist), emit_line);  
																								// tmp_0 = 0
																								emit({ "", NULL},"",{"0", NULL} , $$->place, emit_line);
																								
																								$$->falselist = makelist( emit_line);
																								// goto ___
																								emit( {string("goto"), NULL},"", { "", NULL}, { "", NULL},-1);	
																  							}
	;

new_and
	: logical_and_expression  {
										$$=$1;
	
										$$->falselist=merging(makelist(emit_line),$1->falselist);
										// if tmp_1 == tmp_2 goto ___
										emit({string("if"), NULL},"==", $1->place ,{string("goto"), NULL},-1);
														
										$$->truelist = merging( makelist(emit_line) , $1->truelist );
										// goto ____
										emit( {string("goto"), NULL} , "" ,{ "", NULL}, { "", NULL},-1);		

									}	
	;

// M
M
	: %empty 				{	
								$$ = emit_line;
							}
	;

logical_or_expression
	: logical_and_expression									  							{$$ = $1;}
	| new_or OR_LOGICAL M logical_and_expression								{
																							$$ = new_2_node("||", $1, $4);
																							$$->type = "int";
																							$$->key = $1->key;
																							if($1->init == 1 && $4->init == 1)
																								$$->init = 1;
																							
																							backpatch($1->falselist, $3);
					
																							if( $4->falselist.size() == 0)
																								$4->falselist = makelist(emit_line);
																							else
																								backpatch($4->falselist , emit_line);
																							
																							// if tmp_1 == tmp_2 goto ___
																							emit({string("if"), NULL},"==" ,$4->place ,{string("goto"), NULL} ,-1);
					
																							if( $4->truelist.size() == 0)
																								$4->truelist=makelist(emit_line);
																							else
																								backpatch($4->truelist, emit_line);
																							
																							// goto ___
																							emit({string("goto"), NULL},"" ,{ "", NULL} ,{ "", NULL},-1);
																							
																							string tmp_0 = ir_variable( $$->type, offset, curr_scope);
																							tEntry* tempen0 = lookup(scope_st, tmp_0);
																							align_offset( getSize($$->type) );

																							$$->place ={tmp_0 ,tempen0};																												
																							
																							backpatch($4->falselist, emit_line);
																							// tmp_0 = 0
																							emit( { "", NULL}, "", {"0", NULL} , $$->place, emit_line);

																							$$->falselist = makelist(emit_line);
																							// goto __
																							emit({string("goto"), NULL},"",{ "", NULL}, { "", NULL},-1);
																							
																							backpatch( merging($1->truelist, $4->truelist) , emit_line);  
																							// tmp_0 = 1
																							emit({ "", NULL},"",{string("1"), NULL} , $$->place, emit_line);
																							
																							$$->truelist = makelist( emit_line);
																							// goto __ 
																							emit({string("goto"), NULL},"",{ "", NULL},{ "", NULL},-1);
																						}
	;					
					
new_or 					
	: logical_or_expression		{					
									$$=$1;					
					
									$$->falselist= merging( makelist(emit_line) , $1->falselist);
									// if tmp_0 == 0 goto ___
									emit({string("if"), NULL}, "==", $1->place, {string("goto"), NULL}, -1);
									
									$$->truelist = merging( makelist(emit_line), $1->truelist);
									// goto ___
									emit({string("goto"), NULL}, "", { "", NULL}, { "", NULL}, -1);		
								}
	;


conditional_expression
	: logical_or_expression										           					{$$ = $1;}
	| new_or '?' M expression N ':' M conditional_expression      					{
																								$$ = new_3_node("?:", $1, $4, $8);
																								$$->key = $8->key;
																								if($1->init == 1 && $8->init == 1 && $4->init == 1) 
																									$$->init = 1;

																								string typecheck = conditional_expr($1->type, $8->type);
																								if(typecheck == ""){
																									$$->type = "NULLTYPE";
																									yyerror("The types are not compatible for conditional expression.");
																								}
																								else{
																									$$->type = typecheck;

																									backpatch( $1->truelist, $3);
																						         	backpatch( $1->falselist, $7);
																						         	
																						         	string tmp_0 = ir_variable( $$->type, offset, curr_scope);
																									 tEntry* tempen0 = lookup(scope_st, tmp_0);
																						         	align_offset( getSize($$->type) );

																						         	$$->place = {tmp_0, tempen0};	
																						         	
																									// tmp_0 = tmp_1
																						         	emit({ "", NULL},"", $8->place , $$->place, emit_line);
																									// goto ___
																						         	emit({string("goto"), NULL},"", { "", NULL}, { "", NULL}, emit_line + 2);
																						         	backpatch( $8->truelist,  emit_line + 2);					
																						         	backpatch( $8->falselist, emit_line + 2);						
																						         	backpatch( $4->truelist , $5->line_used);					
																						         	backpatch( $4->falselist , $5->line_used);					
																						         	backpatch( $5->nextlist, emit_line);
																									// tmp_0 = tmp_1
																						         	emit({ "", NULL}, "", $4->place , $$->place, emit_line);
																						        }
																							}   
	;

N
	:%empty 			{
							$$ = new node();
							$$->line_used = emit_line;														
							$$->nextlist = makelist(emit_line);
							
							// goto ___
							emit({string("goto"), NULL},"",{ "", NULL},{ "", NULL},-1);
						}
	;

assignment_expression
	: conditional_expression									  							{ $$ = $1; }
	| unary_expression assignment_operator assignment_expression  							{
																									make_children($2, $1, $3, NULL); 
																									$$ = $2;
																									$$->key=$3->key;

																									string typecheck = assignment_expr($1->type , $3->type, $2->s);

																									if( typecheck == ""){
																										$$->type = "NULLTYPE";
																										yyerror("invalid assign type " + $3->type + " to " + $1->type);
																									}
																									else{
																										if( typecheck == "true"){
																											$$->type = $1->type;

																											if($2->s == "="){
																												backpatch( $3->falselist, emit_line);
																												backpatch( $3->truelist, emit_line);
																												
																												if($1->flag == 1){
																													// tmp_0 = **tmp_1
																													emit({"*", NULL}, "", $3->place, $1->place, emit_line);
																												}
																												else if($3->flag == 1){
																													// tmp_0 = *tmp_1
																													emit({ "", NULL}, "*", $3->place, $1->place, emit_line);
																												}
																												else{
																													// tmp_0 = tmp_1
																													emit( { "", NULL},"", $3->place, $1->place, emit_line);
																												} 
																											}
																											else{
																						  						string tmp_0 = ir_variable( $$->type, offset, curr_scope);
																												tEntry* tempen0 = lookup(scope_st, tmp_0);
																						  						align_offset( getSize($$->type) );

																						  						$$->place = {tmp_0, tempen0};

																						  						backpatch( $3->falselist, emit_line);
																						  						backpatch( $3->truelist, emit_line);

																						  						string tmp_1 = ir_variable( $$->type,offset,curr_scope);
																												tEntry* tempen1 = lookup(scope_st, tmp_1);
																						  						align_offset( getSize($$->type) );

																						  						pair<string, tEntry*> tmp_opd = {tmp_1 , tempen0};

																						  						string str="";
																						  						str = str + $2->s[0] ;
																						  						if( $2->s[1] != '=')
																												  	str = str+$2->s[1];

																						  						emit( $1->place , str , $3->place, $$->place, emit_line);
																												// tmp_0 = tmp_1
																						  						emit({ "", NULL}, "", $$->place, $1->place ,emit_line);
																				                          	}

																										}		
																										else if( typecheck == "pointer_error"){
																											$$->type = $1->type;
																											yyerror("Assignment with incompatible pointer type");
																										}	

																										if($1->isidentifier == 1){
																											if($3->init == 1){
																												tEntry* entry = lookup(scope_st, $1->s);
																												if(entry){
																													entry->init = 1;
																												}
																											}
																										}	
																									}
																  							}
	;


assignment_operator
	: '='																					{	$$ = new_2_node("=", NULL, NULL); 
																							 	$$->key = $$->s;
																								$$->type = $1;
																							}
	| PRODUCT_ASSIGNMENT																	{	$$ = new_2_node("*=", NULL, NULL); 
																								$$->key = $$->s;
																								$$->type = $1;
																							}
	| DIVIDE_ASSIGNMENT																		{	$$ = new_2_node("/=", NULL, NULL); 
																								$$->key = $$->s;
																								$$->type = $1;
																							}
	| ADD_ASSIGNMENT																		{	$$ = new_2_node("+=", NULL, NULL); 
																								$$->key = $$->s;
																								$$->type = $1;
																							}
	| SUBTRACT_ASSIGNMENT																	{	$$ = new_2_node("-=", NULL, NULL); 
																								$$->key = $$->s;
																								$$->type = $1;
																							}
	| AND_ASSIGNMENT																		{	$$ = new_2_node("&=", NULL, NULL); 
																								$$->key = $$->s;
																								$$->type = $1;
																							}
	| XOR_ASSIGNMENT																		{	$$ = new_2_node("^=", NULL, NULL); 
																								$$->key = $$->s;
																								$$->type = $1;
																							}
	| OR_ASSIGNMENT																			{	$$ = new_2_node("|=", NULL, NULL); 
																								$$->key = $$->s;
																								$$->type = $1;
																							}
	;

expression
	: assignment_expression                 												{ $$ = $1;}      
	| expression ',' assignment_expression      											{
																								$$ = new_2_node(",", $1, $3);
																							}
	;

constant_expression
	: conditional_expression																{ $$ = $1; }
	;

declaration
	: declaration_specifiers { type_var = ""; } ';' 														{ $$ = $1; }
	| declaration_specifiers init_declarator_list { type_var = ""; } ';'									{ $$ = new_2_node("Declaration", $1, $2); }
	;

declaration_specifiers
	: storage_class_specifier																{ $$ = $1; }
	| storage_class_specifier declaration_specifiers										{ $$ = new_2_node("Declaration Specifier", $1, $2);}
	| type_specifier																		{ $$ = $1;}
	| type_specifier declaration_specifiers													{ $$ = new_2_node("Declaration Specifier", $1, $2);}
	;

init_declarator_list
	: init_declarator																		{ $$ = $1;}
	| init_declarator_list ',' init_declarator												{ $$ = new_2_node(",", $1, $3);}
	;

init_declarator
	: declarator                   															{
																									$$ = $1;
																									if( check_type($1->type) ){
																										// cout << " if" << endl;
																										if( (lookup(scope_st, $1->key)) ){
																											if((lookup(scope_st, $1->key))->scope ==  curr_scope){
																												yyerror($1->key + " is redeclared.");
																											}
																											else{
																												insert_entry($1->key , $1->type , 0, $1->size, offset, curr_scope);
																												align_offset($1->size);
																											}
																										}
																									    else{
																									    	insert_entry($1->key , $1->type , 0, $1->size, offset, curr_scope);
																											align_offset($1->size);
																									    }
																							     	}
																									else{
																										$$->type = "NULLTYPE";
																										yyerror("Invalid type specification.");
																									}
																									$$->place = {$1->key,lookup(scope_st,$1->key)};																												
																									// tmp_0 = 
																									emit( { "", NULL},"", { "", NULL}, $$->place , emit_line);

																							}
	| declarator '=' initializer   															{
																								$$ = new_2_node("=", $1, $3);

																								string typecheck = assignment_expr($1->type, $3->type, "=");
																								if(typecheck == ""){
																									$$->type = "NULLTYPE";
																									yyerror("invald assign type " + $3->type + " to " + $1->type);
																								}
																								else{			
																									if( check_type($1->type) ){
																										// cout << "aaya " << endl;
																										$$->type = $1->type;
																										$$->init = $3->init;
																										$1->init = $3->init;

																										if( !(lookup(scope_st,$1->key)) ){
																											insert_entry($1->key ,$1->type ,1 ,$1->size ,offset ,curr_scope);
																											align_offset($1->size);

																											$$->place = {$1->key ,lookup(scope_st , $1->key)};																												
																											// tmp_0 = tmp_1
																											emit({ "", NULL},"", $3->place , $$->place , emit_line);
																										}
																										else if ((lookup(scope_st,$1->key))->scope == curr_scope){
																											yyerror($1->key + " is redeclared.");
																										}
																										else{
																											insert_entry($1->key ,$1->type ,1 ,$1->size ,offset ,curr_scope);
																											align_offset($1->size);

																											$$->place = {$1->key , lookup(scope_st , $1->key)};																												
																											// tmp_0 = tmp_1
																											emit({ "", NULL},"", $3->place, $$->place, emit_line);
																										}
																										
																									}
																									else{
																										$$->type = "NULLTYPE";
																										yyerror("Invalid type specification.");
																									}
																								}
																							} 
	;

storage_class_specifier
	: TYPEDEF    	                															{$$=new_leaf_node($1);}
	;

type_specifier
	: VOID 																						{	$$ = new_leaf_node($1);
																									if(type_var == "") type_var = "void";
																									else type_var += "void";
																								}
	| CHAR 																						{	$$ = new_leaf_node($1);
																									if(type_var == "") type_var = "char";
																									else type_var += " char";
																								}
	| SHORT																						{	$$ = new_leaf_node($1);
																									if(type_var == "") type_var = "short";
																									else type_var += " short";
																								}
	| BOOL 																						{	$$ = new_leaf_node($1);
																									if(type_var == "") type_var = "bool";
																									else type_var += " bool";
																								}
	| INT 																						{
																									$$=new_leaf_node($1);
																									if(type_var == "") type_var = "int";
																									else type_var += " int";
																								}
	| LONG																						{
																									$$ = new_leaf_node($1);
																									if(type_var == "") type_var = "long";
																									else type_var += " long";
																								}
	| FLOAT																						{
																									$$ = new_leaf_node($1);
																									if(type_var == "") type_var = "float";
																									else type_var += " float";
																								}
	| DOUBLE																					{
																									$$ = new_leaf_node($1);
																									if(type_var == "") type_var = "double";
																									else type_var += " double";
																								}
	| SIGNED																					{
																									$$ = new_leaf_node($1);
																									if(type_var == "") type_var = "signed";
																									else type_var += " signed";
																								}
	| UNSIGNED 																					{
																									$$ = new_leaf_node($1);
																									if(type_var == "") type_var = "unsigned";
																									else type_var += " unsigned";
																								}
	| STRING 																					{
																									$$ = new_leaf_node($1);
																									if(type_var == "")type_var = "string";
																									else type_var += " string";
																								}
	| struct_specifier	            															{
																									$$=$1;
																									if(type_var == "") type_var = "struct " + $$->child1->s;
																									else type_var += "struct " + $$->child1->s;
																								}

struct_specifier
	: STRUCT IDENTIFIER                                 										{	
																									$$ = new_1_node( "STRUCT" , new_leaf_node($2));
																									$$->size = getSize( "struct " + string($1));
																								}
	;

S1
	:IDENTIFIER 																				{	$$ = new_leaf_node($1);
																									struct_name = string("struct " + $$->s);
																									struct_offset = 0;
																								}
	;


struct_declaration_list
	: struct_declaration 																		{ $$=$1;}
	| struct_declaration_list struct_declaration 												{
																									$$ = new_2_node("struct_declaration_list", $1, $2);
																									$$->size = $1->size + $2->size;
																								}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list { type_var = ""; } ';' 									{
																									$$ = new_2_node("struct_declaration",$1,$2);
																									$$->size = $2->size;
																								}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list 													{ $$=new_2_node("specifier_qualifier_list",$1,$2); }
	| type_specifier																			{	
																									$$=$1;
																									$$->type=$1->type;
																								}
	;

struct_declarator_list
	: declarator																				{
																									$$=$1;
																									if( (find_struct_entry(struct_name,$1->key)) )
																										yyerror("Line " + to_string(line) + ": " + $1->key + " is already declared");
																									else{
																										insert_struct_entry(struct_name, $1->key, $1->type, struct_offset, $1->size);
																										align_struct_offset( getSize($1->type) );
																										if(($$->size)%4 == 0){
            																						
            																							}
            																							else {
            																							    $$->size = ($$->size - ($$->size)%4) + 4;
            																							} 
																									}
																								}
	| struct_declarator_list ',' declarator 													{
																									$$=new_2_node(",",$1,$3);
																									$$->size = $1->size + $3->size;
																								}
	;

declarator	
	: pointer direct_declarator 																{	
																									make_children($1,$2,NULL,NULL);
																									$$ = new_2_node("declarator", $1, $2);
																									$$->type = $1->type + " " + $2->type;
																									$$->key = $2->key;
																									$$->size = getSize($$->type);

																									$$->place = {$2->s, NULL};
																								}	

	| direct_declarator																			{
																									$$ = $1;
																									$$->place = {$1->s, NULL};
																								}
	;

direct_declarator	
	: IDENTIFIER																				{
																									$$ = new_leaf_node($1);
																									$$->type = type_var;
																									$$->key = $1;
																									$$->size = getSize($$->type);

																									$$->place = {$1, NULL};
																								}											
	| '(' declarator ')'																		{
																									$$ = new_1_node("()", $2);
																									$$->type = $2->type;
																									$$->key = $2->s;
																									$$->size = $2->size;
																								}	
	| direct_declarator '[' constant_expression ']'												{	
																									$$ = new_2_node("[]",$1,$3);
																									$$->type = $1->type;
																									$$->key = $1->s;	
																									$$->size = getSize( $$->type ) * stoi($3->s);
																								}
	| direct_declarator '[' ']'																	{
																									$$ = new_1_node("[]",$1);
																									$$->type = $1->type;
																									$$->key = $1->s;
																									$$->size = getSize($$->type);
																								}	
	| direct_declarator '(' {type_var = ""; offset = 0;} parameter_type_list ')'											{
																									$$ = new_2_node("()",$1,$4);
																									$$->type = $1->type;
																									$$->key = $1->s;
																									$$->size = getSize($$->type);
																									FUNC_PARAM.insert( make_pair( $1->type + " " + $1->key , func_params));
																									
																									const char delim = ',';
																									vector<std::string> args;
																									size_t start;
																									size_t end = 0;
																								
																									while ((start = func_params.find_first_not_of(delim, end)) != string::npos){
																									    end = func_params.find(delim, start);
																									    args.push_back(func_params.substr(start, end - start));
																									}
																									
																									insert_entry($1->key , type_var, 0, $1->size, -1, 0);
																									$1->place = {$1->key, lookup(scope_st, $1->key)};
																									// func name
																									emit({string("func"), NULL},"", $1->place, { "", NULL},-1);

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
																									insert_entry($1->key, type_var, 0, $1->size, -1, 0);
    																								entry_map.insert( make_pair(num_scopes + 1 , $1->key) );
																								}

	| direct_declarator '(' {type_var = ""; offset = 0;} identifier_list ')'												{
																									$$ = new_2_node("()",$1,$4);

																									$$->type = $1->type;
																									$$->key = $1->s;
																									$$->size = getSize( $$->type );
																									FUNC_PARAM.insert( make_pair( $1->type + " " + $1->key , func_params) );
																									
																									func_params="";
																									insert_entry($1->key , type_var, 0, $1->size, -1, 0);
    																								entry_map.insert(make_pair( num_scopes + 1, $1->key));

																									$1->place = {$1->key, lookup(scope_st, $1->key)};
																									// func name
																									emit( {string("func"), NULL}, "", $1->place, { "", NULL}, -1);
																								}	
	| direct_declarator '(' {type_var = ""; offset = 0;} ')'																{
																									$$ = new_1_node("()", $1);
																									$$->type = $1->type;
																									$$->key = $1->s;
																									$$->size = getSize($$->type);
																									FUNC_PARAM.insert( make_pair( $1->type+ " " + $1->key ,func_params));
																									
																									func_params="";
																									insert_entry($1->key, $1->type, 0, $1->size ,-1, 0);
    																								entry_map.insert(make_pair(num_scopes + 1 , $1->key));

																									$1->place = {$1->key, lookup(scope_st,$1->key)};
																									// func name
																									emit({string("func"), NULL}, "", $1->place, { "", NULL} ,-1);
																								}	
	;	

pointer
	: '*' 																						{	$$ = new_leaf_node("*");
																									$$->type = "*";
																								}
	| '*' pointer 																				{	$$ = new_1_node("*",$2);
																									$$->type = "* "+ $2->type;
																								}
	;


parameter_type_list
 	: parameter_list 																			{ $$=$1; } 			
 	;

parameter_list
	: parameter_declaration																		{ $$ = $1; }		
	| parameter_list ',' {type_var="";} parameter_declaration 													{ $$ = new_2_node(",", $1, $4);}
	;

parameter_declaration
	: declaration_specifiers declarator 														{	
																									$$ = new_2_node("parameter_declaration", $1, $2);
																									
																									if(func_params=="")
																									    func_params += $2->type + " " + $2->key;
																									else
																									    func_params += "," + $2->type + " " + $2->key;

																								}

	| declaration_specifiers abstract_declarator 												{	$$=new_2_node("parameter_declaration",$1,$2); }
	| declaration_specifiers 																	{	$$=$1; }
	;

identifier_list
	: IDENTIFIER																				{	$$ = new_leaf_node($1); } 
	| identifier_list ',' IDENTIFIER															{	$$ = new_2_node("," , $1, new_leaf_node($3)); }
	;

type_name
	: specifier_qualifier_list																	{	$$=$1; }
	| specifier_qualifier_list abstract_declarator 												{	$$=new_2_node("type_name", $1, $2); }
	;

abstract_declarator
	: pointer      																				{	$$ = $1; }	
	| direct_abstract_declarator 																{	$$ = $1; }
	| pointer direct_abstract_declarator 														{	$$ = new_2_node("pd", $1, $2); }
	;

direct_abstract_declarator
	: '(' abstract_declarator ')' 																{	$$=new_1_node("()",$2);	}
	| '[' ']'																					{	$$=new_leaf_node("[]");	}
	| '[' constant_expression ']'																{	$$=new_1_node("[]",$2);	}
	| direct_abstract_declarator '[' ']'														{	$$=new_1_node("[]",$1);	}
	| direct_abstract_declarator '[' constant_expression ']'									{	$$=new_2_node("[]",$1,$3);	}
	| '(' ')'																					{	$$=new_leaf_node("()");	}
	| '(' parameter_type_list ')' 																{	$$=new_1_node("()",$2);	}
	| direct_abstract_declarator '(' ')' 														{	$$=new_1_node("()",$1);	}
	| direct_abstract_declarator '(' parameter_type_list ')' 									{	$$=new_2_node("()",$1,$3);	}	
	;

initializer
	: assignment_expression																		{	$$ = $1;	}
	| new_stmt																					{	$$ = $1;	}
	| '{' initializer_list '}'																	{	$$ = $2;	}
	| '{' initializer_list ',' '}'  															{	$$ = new_1_node(",", $2);	}
	;

initializer_list
	: initializer																				{	$$ = $1;	}
	| initializer_list ',' initializer															{	$$ = new_2_node(",", $1, $3);	}
	;

statement
	: labeled_statement             															{	$$ = $1;	}
	| compound_statement																		{	$$ = $1;	}
	| expression_statement																		{	$$ = $1;	}
	| selection_statement																		{	$$ = $1;	}
	| iteration_statement																		{	$$ = $1;	}
	| jump_statement																			{	$$ = $1;	}
	| printf_stmt			    																{	$$ = $1;	}
	| scanf_stmt			    																{	$$ = $1;	}
	| delete_stmt																				{	$$ = $1;	}
	;

labeled_statement
	: IDENTIFIER ':' statement               													{	
																									$$ = new_2_node("LABELLED_STATEMENT", new_leaf_node($1), $3);
																								
																								}
	| CASE constant_expression ':' statement 													{	
																									$$ = new_2_node("CASE", $2, $4);
																								}

	| DEFAULT ':' statement					 													{	
																									$$ = new_1_node("DEFAULT", $3);
																								}
	;
	
compound_statement
	: '{' '}'																					{	$$ = NULL;	}
	| C1 statement_list C2																		{	$$ = $2;	}
	| C1 declaration_list C2																	{	$$ = $2;	}
	| C1 declaration_list statement_list C2														{	$$ = new_2_node("compound statement list", $2, $3);}
	;

C1
	: '{' 			{type_var = ""; num_scopes++; curr_scope = num_scopes; scope_st.push(curr_scope);}
	;

C2
	: '}'			{ scope_st.pop(); curr_scope = scope_st.top();}
	;

declaration_list
	: declaration																				{	$$ = $1;	}
	| declaration_list declaration																{	$$ = new_2_node("declaration_list", $1, $2);	}
	;

statement_list
	: statement																					{	$$ = $1;
																									$$->nextlist = merging( $1->nextlist, merging($1->truelist, $1->falselist));
																								}

	| statement_list M statement																	{	
																										$$ = new_2_node( "statement_list" , $1, $3);
																										backpatch( $1->nextlist , $2 );

																										$$->continuelist = merging($1->continuelist, $3->continuelist);
																										$$->breaklist=merging($3->breaklist, $1->breaklist);
																										$$->nextlist = merging($3->nextlist, merging($3->truelist, $3->falselist));
																										
																									}
	;

expression_statement
	: ';'																						{	$$ = NULL;	}
	| expression ';'																			{	$$ = $1;	}
	;	


selection_statement
	: IF '(' E1 ')' M statement						{	
															$$ = new_2_node("IF", $3, $6);
															backpatch( $3->truelist , $5);

															$$->nextlist = merging( $3->falselist , $6->nextlist);
															
														}												
	| IF '(' E1 ')' M statement N ELSE M statement   	{
															$$ = new_3_node("IF", $3, $6, new_1_node("ELSE", $10));
															
															backpatch($3->truelist , $5);
															backpatch($3->falselist , $9);

															$$->nextlist = merging($6->nextlist , $7->nextlist);
															$$->nextlist = merging($$->nextlist , $10->nextlist);

															}
	| SWITCH '(' expression ')' statement					{
																$$ = new_2_node("SWITCH-CASE", $3, $5);
															}
	;

E1
	: expression 		{
							$$ = $1;
							
							$$->truelist = makelist(emit_line);
							$$->truelist = merging($$->truelist,$1->truelist);
							// if tmp_0 != 0 goto ___
							emit({string("if"), NULL} , "!=" , $1->place , {string("goto"), NULL} , -1);
																
							$$->falselist = makelist(emit_line);
							$$->falselist = merging($$->falselist , $1->falselist);
							// goto ___
							emit({string("goto"), NULL} , "" , { "", NULL} , { "", NULL} , -1);
						}
	;

E2
	: expression_statement 		{
									$$=$1;
									
									$$->truelist = makelist(emit_line);
									$$->truelist = merging($$->truelist , $1->truelist);
									// if tmp_0 != 0 goto ___
									emit({string("if"), NULL} , "!=" , $1->place , {string("goto"), NULL} , -1);
																		
									$$->falselist = makelist(emit_line);
									$$->falselist = merging($$->falselist , $1->falselist);
									// goto ___
									emit({string("goto"), NULL}, "", { "", NULL}, { "", NULL}, -1);
								}
	;

// need to work on these
new_stmt
    : NEW type_specifier '[' CONSTANT ']'														{$$=new_2_node("NEW", $2, new_leaf_node($4));}
	| NEW type_specifier 																		{$$=new_2_node("NEW", $2, NULL);}
	;

delete_stmt
    : DELETE IDENTIFIER ';' 																	{$$=new_1_node("DELETE", new_leaf_node($2));}
	| DELETE '[' ']' IDENTIFIER ';' 															{$$=new_1_node("DELETE", new_leaf_node($2));}
	;

printf_stmt
	: PRINTF '(' STRING_VAL ')' ';'   															{
																									$$ = new_2_Stringval_node("PRINTF", new_leaf_node($3), NULL);
																									// printf stringval
																									emit({string("printf"), NULL}, "", {$3, NULL}, {"", NULL}, emit_line);
																								}
	| PRINTF '(' STRING_VAL ',' printf_helper ')' ';'   										{
																									$$ = new_2_Stringval_node("PRINTF", new_leaf_node($3), $5);
																									// printf stringval from helpers
																									emit({string("printf"), NULL}, "", {$3, NULL}, {"0", NULL}, emit_line);
																								}

printf_helper
	: IDENTIFIER                                                       							{
																									$$=new_leaf_node($1);
																									printf_helpers.push_back($1);
																								}
	| IDENTIFIER ',' printf_helper                                              				{
																									$$ = new_2_node(",", new_leaf_node($1),$3);
																									printf_helpers.push_back($1);
																								}
	| IDENTIFIER '[' CONSTANT ']'                                               				{
																									$$ = new_2_node("[]", new_leaf_node($1), new_leaf_node($3));
																								}
	| IDENTIFIER '[' CONSTANT ']' ',' printf_helper                             				{$$ = new_3_node("[]",new_leaf_node($1),new_leaf_node($3),$6);}
    ;

scanf_stmt
	: SCANF '(' STRING_VAL ',' scanf_helper ')' ';' 											{
																									$$ = new_2_Stringval_node("SCANF", new_leaf_node($3), $5);
																									emit({string("scanf"), NULL}, "", {$3, NULL}, {"0", NULL}, emit_line);
																								}
	;

scanf_helper
	: '&' IDENTIFIER                                                                            {$$=new_leaf_node($2);
																									scanf_helpers.push_back($2);
																								}
	| '&' IDENTIFIER ','  scanf_helper                                                          {$$ = new_2_node(",", new_leaf_node($2),$4);
																									scanf_helpers.push_back($2);
																								}
    ;	
	
iteration_statement 
	: WHILE M '(' E1 ')' M 	statement														{
																								$$ = new_2_node("WHILE", $4, $7);
																								
																								backpatch($7->continuelist , $2);
																								backpatch($4->truelist , $6);

																								$$->nextlist = merging( $4->falselist , $7->breaklist);
																								// goto ___
																								emit({string("goto"), NULL} , "" , { "", NULL} , { "", NULL} , $2);
																							}
	| DO M statement WHILE '(' M E1 N ')' ';'												{
																								$$ = new_2_node("DO-WHILE", $3, $7);
																								
																								backpatch( $8->nextlist, $2);
																								backpatch( $3->continuelist, $6);
																								backpatch( $7->truelist, $8->line_used);

																								$$->nextlist = merging( $3->breaklist, $7->falselist);
																								
																							}
	| FOR '(' expression_statement M E2  ')' M statement									{
																								$$ = new_2_node("FOR", new_3_node("CONTROL_STATEMENTS", $3, $5, NULL), $8);
																								
																								backpatch($8->nextlist,$4);
																								backpatch($8->continuelist,$4);

																								$$->nextlist=merging($8->breaklist,$5->falselist);

																								backpatch($5->truelist,$7);
																								// goto ____
																								emit({string("goto"), NULL},"",{ "", NULL},{ "", NULL}, $4);
																							}
	| FOR '(' expression_statement M E2 M expression N ')' M statement						{
																								$$ = new_2_node("FOR", new_3_node("CONTROL_STATEMENTS", $3, $5, $7), $11);
																								
																								backpatch( $11->nextlist , $6);
																								backpatch( $11->continuelist , $6);

																								$$->nextlist = merging( $5->falselist , $11->breaklist );
																								backpatch( $5->truelist , $10);
																								backpatch( $8->nextlist , $4);
																								// goto ___
																								emit( {string("goto"), NULL} , "" , { "", NULL} , { "", NULL}, $6);
																							}
	;


jump_statement
	: GOTO IDENTIFIER ';'		{
									$$ = new_1_node("GOTO", new_leaf_node($2));

									if( label_tabel.find($2) != label_tabel.end()){
										auto label = label_tabel.find($2);
										// goto ___
										emit({string("goto"), NULL}, "", { "", NULL}, { "", NULL}, label->second);
									}
									else{
										yyerror("Label does not exist");
									}
								}
	| CONTINUE ';'				{
									$$ = new_leaf_node("CONTINUE");

									$$->continuelist=makelist(emit_line);
									// goto ___
									emit({string("goto"), NULL},"",{ "", NULL},{ "", NULL},-1);
								
								}
	| BREAK ';'					{
									$$ = new_leaf_node("BREAK");

									$$->breaklist=makelist(emit_line);
									// goto ___
									emit({string("goto"), NULL},"",{ "", NULL},{ "", NULL},-1);
								}
	| RETURN ';'				{
									$$ = new_1_node("RETURN", NULL);
									// return
									emit({string("return"), NULL},"",{ "", NULL},{ "", NULL},-1);
								}
	| RETURN expression ';'		{
									$$ = new_1_node("RETURN", $2);
									// return tmp_0
									emit({string("return"), NULL}, "", $2->place, { "", NULL},-1);
								}
	;

program
	: translation_unit  					  													{
																									
																								}
	;

translation_unit
	: external_declaration                    													{	$$ = $1; 
																									type_var = "";
																								}
	| translation_unit { type_var = ""; } external_declaration   			 									{	$$ = new_2_node("<>", $1, $3);
																									type_var = "";
																								}
	;

external_declaration

	: function_definition																		{$$ = $1;}
	| declaration																				{$$ = $1;}
	| external_struct_declaration 																{$$ = $1;}
	;

external_struct_declaration
	:	STRUCT S1 { type_var = ""; } '{' struct_declaration_list '}' ';'   										{
																									$$ = new_2_node("STRUCT", $2, $5);
																									$$->size = $5->size;
																								}
	;

function_definition
	: declaration_specifiers declarator compound_statement 					  					{$$ = new_3_node("function_definition",$1,$2,$3);}
	| declarator compound_statement											  					{$$ = new_2_node("function_definition",$1, $2);}
	;

%%

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