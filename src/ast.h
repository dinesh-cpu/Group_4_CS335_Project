// ast
#include <bits/stdc++.h>
#include "3ac.h"
#define vi vector<int>
#define ul unsigned long

using namespace std;

typedef struct node
{
	// Abstract syntax tree
	string s;
	unsigned long id;
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
	vi nextlist;
	vi continuelist; 
	vi breaklist;
	vi truelist;
	vi falselist;
	opd place;
	int flag;     //for struct, array
	int pointer;  //for deferencing
} node;

extern FILE *yyin;

void backpatch(vi list, int line);
vi merging(vi l1, vi l2);
vi makelist(int line_num);
ul assign_ID();
extern vector<opd> param_place;
node *init_leaf_node(node *leaf_node);
node *new_leaf_node(const string &val);
node *new_1_node(const string &display, node *node1);
node *new_2_node(const string &display, node *node1, node *node2);
node *new_2_Stringval_node(const string &display, node *node1, node *node2);
node *new_3_node(const string &display, node *node1, node *node2, node *node3);
void make_children(node *node_root, node *child1, node *child2, node *child3);
