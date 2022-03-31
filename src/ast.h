// ast
#include <bits/stdc++.h>

typedef struct node
{

	node() : child1(NULL),
			 child2(NULL),
			 child3(NULL),
			 child_count(0)
	{
	}

	// AST
	std::string s;
	unsigned long int id;

	struct node *child1;
	struct node *child2;
	struct node *child3;
	int child_count;
	int lexer;
	// type checking and error reporting
	std::string type;
	std::string key;
	int line_num;
	int size;
	int init;

	// constant type
	int val_type; // 1 int, 2 long, 3 float, 4 double
	double num;
} node;

extern FILE *yyin;
void free_ast(node *root);
std::string add_quotes(const std::string &str);
node *init_leaf_node(node *leaf_node);
node *new_leaf_node(const std::string &val);
node *new_1_node(const std::string &display, node *node1);
node *new_2_node(const std::string &display, node *node1, node *node2);
node *new_2_Stringval_node(const std::string &display, node *node1, node *node2);
node *new_3_node(const std::string &display, node *node1, node *node2, node *node3);
void make_children(node *node_root, node *child1, node *child2, node *child3);
