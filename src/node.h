// ast
#include <bits/stdc++.h>

typedef struct node{
	
	node(): child1(NULL), 
			child2(NULL), 
			child3(NULL),
			child_count(0)
		{}
	
	// AST
	std::string s;
	long unsigned int id;
	
	struct node* child1;
	struct node* child2;
	struct node* child3;
    int child_count;
	int lexer;
	// type checking and error reporting
	std::string type;
	std::string key;
	int line_num;
	int size;
	int init;

	//constant type
	int val_type;//1 int 2 long 3 
	double num;
}node;

extern FILE* yyin;
void free_ast(node* root);
std::string add_quotes(const std::string& str);
node* init_leaf_node(node* leaf_node);
node* new_leaf_node(const std::string& val);
node* new_unary_node(const std::string& op,node* node1);
node* new_binary_node(const std::string& op,node* node1,node* node2);
node* new_2_Stringval_node(const std::string& op,node* node1,node* node2);
node* new_trinary_node(const std::string& op, node* node1, node* node2, node* node3);
void assign_children(node* parent, node* child1, node* child2, node* child3);







