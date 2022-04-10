// ast
#include <bits/stdc++.h>
#include "3ac.h"
using namespace std;

typedef struct node
{
	node() : child1(NULL),
			 child2(NULL),
			 child3(NULL),
			 to_add_label(1) 
	{
	}

	// Abstract syntax tree
	string s;
	unsigned long int id;

	int to_add_label;
	struct node *child1;
	struct node *child2;
	struct node *child3;

	// symbol table and type checking
	int init;
	string type;
	string key;
	int size;

	// constant type
	int val_type; // 1 int, 2 long, 3 float, 4 double
	double num;

	//3AC
	int instr_num;

	vector<int> nextlist;
	vector<int> startlist; // continue
	vector<int> endlist;   // break
	vector<int> truelist;
	vector<int> falselist;

	opd place;
	int flag;     //for struct, array
	int pointer;  //for deferencing
} node;

extern vector<opd> param_place;
extern FILE *yyin;
void free_ast(node *root);
node *init_leaf_node(node *leaf_node);
node *new_leaf_node(const string &val);
node *new_1_node(const string &display, node *node1);
node *new_2_node(const string &display, node *node1, node *node2);
node *new_2_Stringval_node(const string &display, node *node1, node *node2);
node *new_3_node(const string &display, node *node1, node *node2, node *node3);
void make_children(node *node_root, node *child1, node *child2, node *child3);
