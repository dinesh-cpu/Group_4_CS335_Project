%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "node.h"
int yyerror(char*);
extern FILE* yyin;
int yylex();
int yyparse();
%}

%union{
    char *Str;
	struct node* Node;
}
%token<Str> '>' '<' '~' '|' '&' '^' '=' '+' '-' '/' '*' '%' '(' ')' ':' '!' '{' '}' '[' ']' 
%token<Str> '?' '.' ';' ','
%token<Str> IDENTIFIER STRING_VAL  
%token<Node> POINTER_OPERATOR DECREMENT EQUAL_LOGICAL GREATER_EQUAL_OPERATOR INCREMENT LESS_EQUAL_OPERATOR  AND_LOGICAL OR_LOGICAL  NOT_EQUAL_OPERATOR  LEFT_SHIFT_OPERATOR RIGHT_SHIFT_OPERATOR
%token<Node> PRODUCT_ASSIGNMENT DIVIDE_ASSIGNMENT MOD_ASSIGNMENT  AND_ASSIGNMENT ADD_ASSIGNMENT OR_ASSIGNMENT  SUBTRACT_ASSIGNMENT XOR_ASSIGNMENT   
%token<Str> BOOL CHAR SHORT INT LONG SIGNED UNSIGNED STRING FLOAT DOUBLE VOID CONSTANT 
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
%type<Node> printf_stmt scanf_stmt new_stmt delete_stmt declarator_statement_suffix

%type<Node> printf_helper scanf_helper
%type<Str> storage_class_specifier type_specifier declaration_specifiers struct_ struct_specifier 
%type<Str> declaration type_qualifier specifier_qualifier_list direct_declarator parameter_declaration identifier_list 
%type<Str> declaration_list declarator struct_declaration struct_declaration_list struct_declarator pointer type_qualifier_list
%type<Str> parameter_list parameter_type_list type_name abstract_declarator direct_abstract_declarator 
%start translation_unit

%%


primary_expression
	: IDENTIFIER 							{$$=new_leaf_node($1);}		
	| CONSTANT 								{$$=new_leaf_node($1);}
	| STRING_VAL    						{$$=new_leaf_node($1);}
	| '(' expression ')'                    {$$=$2;}
	;

postfix_expression
	: primary_expression										{$$=$1;}
	| postfix_expression '[' expression ']'				        {$$ = new_2_node("[]", $1, $3);}
	| postfix_expression '(' ')'						        {$$ = new_1_node("()", $1);}
	| postfix_expression '(' argument_expression_list ')' 	    {$$ = new_2_node("()", $1, $3);}
	| postfix_expression '.' IDENTIFIER							{$$ = new_2_node(".", $1, new_leaf_node($3));}	
	| postfix_expression POINTER_OPERATOR IDENTIFIER		    {$$ = new_2_node("->", $1, new_leaf_node($3));}
	| postfix_expression INCREMENT								{$$ = new_1_node("++", $1);}		
	| postfix_expression DECREMENT								{$$ = new_1_node("++", $1);}	
	;

argument_expression_list
	: assignment_expression 									{$$=$1;}						
	| argument_expression_list ',' assignment_expression 		{$$=new_2_node(",",$1,$3);}
	;

unary_expression
	: postfix_expression										{$$ = $1;}								
	| INCREMENT unary_expression								{$$ = new_1_node("++", $2);}
	| DECREMENT unary_expression								{$$ = new_1_node("--", $2);}				
	| unary_operator cast_expression       						{make_children($1, $2, NULL, NULL); $$ = $1;}
	| SIZEOF unary_expression				                	{$$ = new_1_node("SIZEOF", $2);}
	| SIZEOF '(' type_name ')'	                                {$$ = new_1_node("SIZEOF", new_leaf_node($3));}
	;                 



unary_operator
	: '&'														{$$ = new_1_node("&", NULL);}			
	| '*'														{$$ = new_1_node("*", NULL);}
	| '+'														{$$ = new_1_node("+", NULL);}
	| '/'                										{$$ = new_1_node("/", NULL);}
	| '-'														{$$ = new_1_node("-", NULL);}
	| '~'														{$$ = new_1_node("~", NULL);}
	| '!'														{$$ = new_1_node("!", NULL);}
	;

 cast_expression
 	: unary_expression											{$$=$1;}								
 	| '(' type_name ')' cast_expression							{$$ = new_2_node("CAST_EXPRESSION", new_leaf_node($2), $4);}    	           
 	;

multiplicative_expression
	: cast_expression 											{$$ = $1;}                                          
	| multiplicative_expression '*' cast_expression				{$$ = new_2_node("*", $1, $3);}             
	| multiplicative_expression '/' cast_expression  			{$$ = new_2_node("/", $1, $3);}           
	| multiplicative_expression '%' cast_expression   			{$$ = new_2_node("%", $1, $3);}          
	;

additive_expression
	: multiplicative_expression  								 {$$ = $1;}                                
	| additive_expression '+' multiplicative_expression			 {$$ = new_2_node("+", $1, $3);}		           
	| additive_expression '-' multiplicative_expression			 {$$ = new_2_node("-", $1, $3);}        
	;

shift_expression
	: additive_expression 										 {$$ = $1;}             			                          	 
	| shift_expression LEFT_SHIFT_OPERATOR additive_expression   {$$ = new_2_node("<<", $1, $3);}               
	| shift_expression RIGHT_SHIFT_OPERATOR additive_expression	 {$$ = new_2_node(">>", $1, $3);}			 
	;

relational_expression
	: shift_expression											  		{$$ = $1;}
	| relational_expression '<' shift_expression				  		{$$ = new_2_node("<", $1, $3);}                 
	| relational_expression '>' shift_expression				  		{$$ = new_2_node(">", $1, $3);}
	| relational_expression LESS_EQUAL_OPERATOR shift_expression  		{$$ = new_2_node("<=", $1, $3);}              
	| relational_expression GREATER_EQUAL_OPERATOR shift_expression		{$$ = new_2_node(">=", $1, $3);}               
	;

equality_expression
	: relational_expression												{$$ = $1;}
	| equality_expression EQUAL_LOGICAL relational_expression			{$$ = new_2_node("==", $1, $3);}			 	
	| equality_expression NOT_EQUAL_OPERATOR relational_expression		{$$ = new_2_node("!=", $1, $3);}		
	;

and_expression
	: equality_expression												{$$ = $1;}										  
	| and_expression '&' equality_expression							{$$ = new_2_node("&", $1, $3);}				 
	;

exclusive_or_expression
	: and_expression													{$$ = $1;}										
	| exclusive_or_expression '^' and_expression						{$$ = new_2_node("^", $1, $3);}				  
	;

inclusive_or_expression
	: exclusive_or_expression											{$$ = $1;}								
	| inclusive_or_expression '|' exclusive_or_expression		 		{$$ = new_2_node("|", $1, $3);}
	;

logical_and_expression
	: inclusive_or_expression											{$$ = $1;}								  	
	| logical_and_expression AND_LOGICAL inclusive_or_expression		{$$ = new_2_node("&&", $1, $3);}		
	;

logical_or_expression
	: logical_and_expression											{$$ = $1;}							
	| logical_or_expression OR_LOGICAL logical_and_expression			{$$ = new_2_node("||", $1, $3);}		
	;

conditional_expression
	: logical_or_expression												{$$ = $1;}								           
	| logical_or_expression '?' expression ':' conditional_expression 	{$$ = new_3_node("?:", $1, $3, $5);}       
	;

assignment_expression
	: conditional_expression											 {$$ = $1;}									 
	| unary_expression assignment_operator assignment_expression         {$$ = new_3_node("assignment", $1, $2, $3);}
	;

assignment_operator														
	: '='																{$$ = new_2_node("=", NULL, NULL);}		
	| PRODUCT_ASSIGNMENT		 										{$$ = new_2_node("*=", NULL, NULL);}
	| DIVIDE_ASSIGNMENT			 										{$$ = new_2_node("/=", NULL, NULL);}
	| ADD_ASSIGNMENT			                                        {$$ = new_2_node("+=", NULL, NULL);}
	| SUBTRACT_ASSIGNMENT											 	{$$ = new_2_node("-=", NULL, NULL);}
	| AND_ASSIGNMENT													{$$ = new_2_node("&=", NULL, NULL);}
	| XOR_ASSIGNMENT													{$$ = new_2_node("^=", NULL, NULL);}
	| OR_ASSIGNMENT		        										{$$ = new_2_node("|=", NULL, NULL);}
	;

expression
	: assignment_expression  											{$$ = $1;}                	 
	| expression ',' assignment_expression								{$$ = new_2_node(",", $1, $3);}      
	;

constant_expression
	: conditional_expression											{$$ = $1;}	
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
	: declarator   						{$$ = NULL;}              
	| declarator '=' initializer  		{$$ = new_2_node("=", new_leaf_node($1), $3);}
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
	| ':' constant_expression				{$$ = $1;}	 
	| declarator ':' constant_expression 
	;


type_qualifier	 
	: CONST			
	;

declarator	
	: pointer direct_declarator 		{$$ = $2;}			
	| direct_declarator					{$$ = $1;}				
	;	

direct_declarator	
	: IDENTIFIER										{$$ = $1;}																				
	| '(' declarator ')'								{$$ = $2;}								
	| direct_declarator '[' constant_expression ']'		{$$ = $1;}
	| direct_declarator '[' ']'							{$$ = $1;}	
	| direct_declarator '(' parameter_type_list ')'		{$$ = $1;}
	| direct_declarator '(' identifier_list ')'			{$$ = $1;}
	| direct_declarator '(' ')'							{$$ = $1;}			
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
	| '[' constant_expression ']'									{$$ = "[]";}						
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'		{$$ = $1;}
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression				{$$ = $1;}
	| new_stmt							{$$ = $1;}
	| '{' initializer_list '}'			{$$ = $2;}	
	| '{' initializer_list ',' '}'  	{$$ = new_1_node(",", $2);}
	;

initializer_list
	: initializer							{$$ = $1;}				
	| initializer_list ',' initializer		{$$ = new_2_node(",", $1, $3);}
	;

statement
	: labeled_statement     	{$$ = $1;}         
	| compound_statement		{$$ = $1;}	
	| expression_statement		{$$ = $1;}		
	| selection_statement		{$$ = $1;}		
	| iteration_statement		{$$ = $1;}			
	| jump_statement			{$$ = $1;}
	| printf_stmt			    {$$ = $1;}
	| scanf_stmt			    {$$ = $1;}
	| delete_stmt				{$$ = $1;}
	;


labeled_statement
	: IDENTIFIER ':' statement      			{$$ = new_2_node("LABELLED_STATEMENT", new_leaf_node($1), $3);}         
	| CASE constant_expression ':' statement 	{$$ = new_2_node($1, $2, $4);}
	| DEFAULT ':' statement						{$$ = new_2_node($1, NULL, $3);}	 
	;
	
compound_statement
	: '{' '}'									{$$ = NULL;}					
	| '{' statement_list '}'					{$$ = $2;}				
	| '{' declaration_list '}'					{$$ = NULL;}				
	| '{' declaration_list statement_list '}'	{$$ = $3;}
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement						{$$ = $1;}				
	| statement_list statement		{$$ = new_2_node("STATEMENT_LIST", $1, $2);}	
	;

expression_statement
	: ';'						{$$ = NULL;}
	| expression ';'			{$$ = $1;}
	;



selection_statement
	: IF '(' expression ')' statement stmt 		{$$ = new_3_node("IF-ELSE", $3, $5, $6);}
	| SWITCH '(' expression ')' statement	  	{$$ = new_2_node("SWITCH-CASE", $3, $5);}
	;

stmt
	: ELSE statement 							{$$ = $2;}
	| statement									{$$=$1;}							
	;
 

new_stmt
    : NEW type_specifier '[' CONSTANT ']'		{$$=new_2_node("NEW", new_leaf_node($2), new_leaf_node($4));}
	| NEW type_specifier 						{$$=new_2_node("NEW", new_leaf_node($2), NULL);}
	;

delete_stmt
    : DELETE IDENTIFIER ';' declarator_statement_suffix			{$$=new_1_node("DELETE", new_leaf_node($2));}
	| DELETE '[' ']' IDENTIFIER ';' declarator_statement_suffix	{$$=new_1_node("DELETE", new_leaf_node($2));}
	;

printf_stmt
	: PRINTF '(' STRING_VAL ')' ';' declarator_statement_suffix  						{$$ = new_2_node("PRINTF", new_leaf_node($3), NULL);}
	| PRINTF '(' STRING_VAL ',' printf_helper ')' ';' declarator_statement_suffix  	{$$ = new_2_node("PRINTF", new_leaf_node($3), $5);}

printf_helper
	: IDENTIFIER                                                       			{$$=new_leaf_node($1);}
	| IDENTIFIER ',' printf_helper                                              {$$ = new_2_node(",", new_leaf_node($1),$3);}
	| IDENTIFIER '[' CONSTANT ']'                                               {$$ = new_2_node("[]", new_leaf_node($1), new_leaf_node($3));}
	| IDENTIFIER '[' CONSTANT ']' ',' printf_helper                             {$$ = new_3_node("[]",new_leaf_node($1),new_leaf_node($3),$6);}
    ;

scanf_stmt
	: SCANF '(' STRING_VAL ',' scanf_helper ')' ';' statement					{$$ = new_2_node("SCANF", new_leaf_node($3), $5);}
	;

scanf_helper
	: '&' IDENTIFIER                                                                            {$$=new_leaf_node($2);}
	| '&' IDENTIFIER ','  scanf_helper                                                          {$$ = new_2_node(",", new_leaf_node($2),$4);}
    ;

iteration_statement 
	: WHILE '(' expression ')' statement											{$$ = new_2_node("WHILE", $3, $5);}									
	| DO statement WHILE '(' expression ')' ';'										{$$ = new_2_node("DO-WHILE", $2, $5);}		
	| FOR '(' expression_statement  expression_statement ')' statement				{$$ = new_2_node("FOR", new_3_node("CONTROL-EXPRESSIONS", $3, $4, NULL), $6);}	
	| FOR '(' expression_statement expression_statement expression ')' statement	{$$ = new_2_node("FOR", new_3_node("CONTROL-EXPRESSIONS", $3, $4, $5), $7);}
	;

declarator_statement_suffix
	: declaration		{$$=new_leaf_node($1);}
	| statement			{$$=$1;}

jump_statement
	: CONTINUE ';'									{$$ = new_leaf_node("CONTINUE");}
	| BREAK ';'										{$$ = new_leaf_node("BREAK");}	
	| RETURN ';'									{$$ = new_1_node("RETURN", NULL);}
	| RETURN expression ';'							{$$ = new_1_node("RETURN", $2);}
	;

translation_unit
	: external_declaration          				{$$ = $1;}         
	| translation_unit external_declaration			{$$ = new_2_node("<>", $1, $2);}

external_declaration
	: function_definition							{$$ = $1;}
	| declaration									{$$ = NULL;}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement   	{$$ = new_1_node($2, $4);}
	| declaration_specifiers declarator compound_statement 						{$$ = new_1_node($2, $3);}			 
	| declarator declaration_list compound_statement							{$$ = new_1_node($1, $3);}				 
	| declarator compound_statement											 	{$$ = new_1_node($1, $2);}
	;



%%


int yyerror(char *s) {
       	printf ("THE  ERROR is : %s\n",s);
       	return 0;
}

int NodeId() {
  static int nodeId = 0;
  nodeId += 1;
  return nodeId;
}

void make_children(node* parent, node* child1, node* child2, node* child3){	
	parent->child1 = child1;	
	parent->child2 = child2;	
	parent->child3 = child3;	
	fprintf(outfile, "\t%lu [label=\"%s\"];\n", parent->id, parent->s);	
	if(child1)fprintf(outfile, "\t%lu [label=\"%s\"];\n", child1->id, child1->s);	
    if(child2)fprintf(outfile, "\t%lu [label=\"%s\"];\n", child2->id, child2->s);	
	if(child3)fprintf(outfile, "\t%lu [label=\"%s\"];\n", child3->id, child3->s);	
	if(child1)fprintf(outfile, "\t%lu -> %lu;\n", parent->id, child1->id);	
	if(child2)fprintf(outfile, "\t%lu -> %lu;\n", parent->id, child2->id);	
	if(child3)fprintf(outfile, "\t%lu -> %lu;\n", parent->id, child3->id);	
}	


node* new_3_node(char* op, node* node1, node* node2, node* node3){	
	node *new=(node *)malloc(sizeof(node));	
    new->child1=node1;	
    new->child2=node2;	
	new->child3=node3;		
    new->s=(char *)malloc(sizeof(op));	
    new->id = NodeId();	
    strcpy(new->s,op);	
    fprintf(outfile, "\t%lu [label=\"%s\"];\n", new->id, new->s);	
    if(node1)fprintf(outfile, "\t%lu [label=\"%s\"];\n", node1->id, node1->s);	
    if(node2)fprintf(outfile, "\t%lu [label=\"%s\"];\n", node2->id, node2->s);	
	if(node3)fprintf(outfile, "\t%lu [label=\"%s\"];\n", node3->id, node3->s);	
    if(node1)fprintf(outfile, "\t%lu -> %lu;\n", new->id, node1->id);	
	if(node2)fprintf(outfile, "\t%lu -> %lu;\n", new->id, node2->id);	
	if(node3)fprintf(outfile, "\t%lu -> %lu;\n", new->id, node3->id);	
	return new;	
}

node* new_2_node(char* op,node* node1,node* node2){
    node *new=(node *)malloc(sizeof(node));
    new->child1=node1;
    new->child2=node2;
	new->child3=NULL;
	new->id = NodeId();
    new->s=(char *)malloc(sizeof(op));
    strcpy(new->s,op);
    fprintf(outfile, "\t%lu [label=\"%s\"];\n", new->id, new->s);
    if(node1)fprintf(outfile, "\t%lu [label=\"%s\"];\n", node1->id, node1->s);
    if(node2)fprintf(outfile, "\t%lu [label=\"%s\"];\n", node2->id, node2->s);
	if(node1)fprintf(outfile, "\t%lu -> %lu;\n", new->id, node1->id);
	if(node2)fprintf(outfile, "\t%lu -> %lu;\n", new->id, node2->id);
    return new;
}

node* new_1_node(char* op,node* node1){
    node *new=(node *)malloc(sizeof(node));
    new->child1=node1;
    new->child2=NULL;
	new->child3=NULL;
    new->s=(char *)malloc(sizeof(op));
    new->id = NodeId();
    strcpy(new->s,op);
    fprintf(outfile, "\t%lu [label=\"%s\"];\n", new->id, new->s);
    if(node1)fprintf(outfile, "\t%lu [label=\"%s\"];\n", node1->id, node1->s);
    if(node1)fprintf(outfile, "\t%lu -> %lu;\n", new->id, node1->id);
    return new;
}

node* new_leaf_node(char* val){
	node *new=(node *)malloc(sizeof(node));
    new->child1=NULL;
    new->child2=NULL;
    new->child3=NULL;
    new->s=(char *)malloc(sizeof(val));
    new->id = NodeId();
    strcpy(new->s,val);
    return new;
}

extern char yytext[];
extern int column;

void printfile(struct node *root, FILE *file){
    if (root == NULL) 
        return;
    // print(root->left, file);
    if(root->child1)
		fprintf(file, "\"%s\"->\"%s\"\n", root->s, root->child1->s);
    if(root->child2)
		fprintf(file, "\"%s\"->\"%s\"\n", root->s, root->child2->s);
    if(root->child3)
		fprintf(file, "\"%s\"->\"%s\"\n", root->s, root->child3->s);
    printfile(root->child1,file);
    printfile(root->child2,file);
	printfile(root->child3,file);
}

FILE *outfile;

int main(int argc, char *argv[]) 
{
	FILE* infile;
    if (argc != 3) {
        fprintf(stderr, "Usage: sdev inputfile outputfile\n");
        exit(1);
    }

    outfile = fopen(argv[2], "w");
	if (outfile == NULL) {
        fprintf(stderr, "Failed to open %s.\n", argv[2]);
        exit(1);	
    }

	infile = fopen(argv[1], "r");
    if (infile == NULL) {
        fprintf(stderr, "Failed to open %s.\n", argv[1]);
        exit(1);
    }
	yyin = infile;
	//yyset_in(infile);

    fprintf(outfile, "digraph tree {\n");
	yyparse();
    fprintf(outfile, "}");



    return 0;
}