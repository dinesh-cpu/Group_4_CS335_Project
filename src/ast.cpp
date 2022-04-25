// ast
// -1 is not defined

#include <bits/stdc++.h>
#include "ast.h"
#define vi vector<int>
#define pb push_back
#define ul unsigned long

using namespace std;

// ast output file
extern fstream ast_output;

void backpatch(vi goto_list, int line){
    int i = 0 ; 
    while(i != goto_list.size()){
        global_emit[goto_list[i]].line_num = line;
        i++;
    }
	return;
} 

vi  merging(vi l1, vi  l2){
    vi temp(l1.size() + l2.size());
  	merge(l1.begin(), l1.end(), l2.begin(), l2.end(), temp.begin());
  	return temp;
}

vi  makelist(int line_number){
    vi l1;
    l1.pb(line_number);
    return l1;
}

ul assign_ID()
{
	static unsigned long int assign_ID = 0;
	return ++assign_ID;
}

// make new node which has all childern's null
node *new_leaf_node(const string &val)
{
	node *new_node = new node;

	new_node->s = val;
	new_node->id = assign_ID();

	new_node->child1 = NULL;
	new_node->child2 = NULL;
	new_node->child3 = NULL;
	
	new_node->init = 0;
	new_node->size = -1;
	new_node->isidentifier = 0;
	
	new_node->val_type = -1;
	new_node->num = 0;
	
	return new_node;
}

// initialize the new leaf node
node *init_leaf_node(node *leaf_node)
{
	leaf_node->id = assign_ID();

	leaf_node->child1 = NULL;
	leaf_node->child2 = NULL;
	leaf_node->child3 = NULL;
	
	leaf_node->init = 0;
	leaf_node->size = -1;
	leaf_node->isidentifier = 0;
	
	leaf_node->val_type = -1;
	leaf_node->num = 0;
	
	return leaf_node;
}

// add new node which has 1 childern node
node *new_1_node(const string &display, node *node1)
{
	node *new_node = new node;

	new_node->s = display;
	new_node->id = assign_ID();

	new_node->child1 = node1;
	new_node->child2 = NULL;
	new_node->child3 = NULL;

	new_node->size = -1;
	new_node->init = 0;

	new_node->val_type = -1;
	new_node->num = 0;

	ast_output << "\t" << new_node->id << " [label=\"" << new_node->s << "\"];\n";
	if (node1){
		ast_output << "\t" << node1->id << " [label=\"" << node1->s << "\"];\n";
		ast_output << "\t" << new_node->id << " -> " << node1->id << ";\n";
	}
	return new_node;
}

// add new node which has two childern
node *new_2_node(const string &display, node *node1, node *node2)
{
	node *new_node = new node;

	new_node->s = display;
	new_node->id = assign_ID();

	new_node->child1 = node1;
	new_node->child2 = node2;
	new_node->child3 = NULL;

	new_node->init = 0;
	new_node->size = -1;

	new_node->val_type = -1;
	new_node->num = 0;

	ast_output << "\t" << new_node->id << " [label=\"" << new_node->s << "\"];\n";
	if (node1){
		ast_output << "\t" << node1->id << " [label=\"" << node1->s << "\"];\n";
		ast_output << "\t" << new_node->id << " -> " << node1->id << ";\n";
	}
	if (node2){
		ast_output << "\t" << node2->id << " [label=\"" << node2->s << "\"];\n";
		ast_output << "\t" << new_node->id << " -> " << node2->id << ";\n";
	}
	return new_node;
}

// to include printf and scanf in ast
node *new_2_Stringval_node(const string &display, node *node1, node *node2)
{
	node *new_node = new node;

	new_node->s = display;
	new_node->id = assign_ID();

	new_node->child1 = node1;
	new_node->child2 = node2;
	new_node->child3 = NULL;

	new_node->init = 0;
	new_node->size = -1;
	
	new_node->val_type = -1;
	new_node->num = 0;

	ast_output << "\t" << new_node->id << " [label=\"" << new_node->s << "\"];\n";
	if (node1){
		ast_output << "\t" << node1->id << " [label=" << node1->s << "];\n";
		ast_output << "\t" << new_node->id << "-> " << node1->id << ";\n";
	}
	if (node2){
		ast_output << "\t" << node2->id << " [label=\"" << node2->s << "\"];\n";
		ast_output << "\t" << new_node->id << "-> " << node2->id << ";\n";
	}
	return new_node;
}

node *new_3_node(const string &display, node *node1, node *node2, node *node3)
{
	node *new_node = new node;

	new_node->s = display;
	new_node->id = assign_ID();

	new_node->child1 = node1;
	new_node->child2 = node2;
	new_node->child3 = node3;

	new_node->init = 0;
	new_node->size = -1;
	
	new_node->val_type = -1;
	new_node->num = 0;

	ast_output << "\t" << new_node->id << " [label=\"" << new_node->s << "\"];\n";
	if (node1){
		ast_output << "\t" << node1->id << " [label=\"" << node1->s << "\"];\n";
		ast_output << "\t" << new_node->id << " -> " << node1->id << ";\n";
	}
	if (node2){
		ast_output << "\t" << node2->id << " [label=\"" << node2->s << "\"];\n";
		ast_output << "\t" << new_node->id << " -> " << node2->id << ";\n";
	}
	if (node3){
		ast_output << "\t" << node3->id << " [label=\"" << node3->s << "\"];\n";
		ast_output << "\t" << new_node->id << " -> " << node3->id << ";\n";
	}	
	return new_node;
}

void make_children(node *node_root, node *node1, node *node2, node *node3)
{
	node_root->child1 = node1;
	node_root->child2 = node2;
	node_root->child3 = node3;

	if (node1){
		ast_output << "\t" << node1->id << " [label=\"" << node1->s << "\"];\n";
		ast_output << "\t" << node_root->id << " -> " << node1->id << ";\n";
	}
	
	if (node2){
		ast_output << "\t" << node2->id << " [label=\"" << node2->s << "\"];\n";
		ast_output << "\t" << node_root->id << " -> " << node2->id << ";\n";
	}
	
	if (node3){
		ast_output << "\t" << node3->id << " [label=\"" << node3->s << "\"];\n";
		ast_output << "\t" << node_root->id << " -> " << node3->id << ";\n";
	}
}