// ast

#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ast.h"

using namespace std;

// ast output file
extern fstream outfile;

void free_ast(node *root)
{
	if (root == NULL)
	{
		return;
	}

	// child
	free_ast(root->child1);
	free_ast(root->child2);
	free_ast(root->child3);

	// free space
	delete root;
}

string add_quotes(const string &str)
{
	string new_str = str;
	new_str.insert(0, "\\");
	new_str.pop_back();
	new_str.append("\\\"");
	return new_str;
}

unsigned long NodeId()
{
	static unsigned long int nodeId = 0;
	return ++nodeId;
}

// make new node which has all childern's null
node *new_leaf_node(const string &val)
{

	node *new_node = new node;
	new_node->child1 = NULL;
	new_node->child2 = NULL;
	new_node->child3 = NULL;
	new_node->child_count = 0;
	new_node->size = -1;
	new_node->init = 0;
	new_node->lexer = 0;
	new_node->val_type = -1;
	new_node->num = 0.0;
	new_node->s = val;
	new_node->id = NodeId();

	return new_node;
}

// initialize the new leaf node
node *init_leaf_node(node *leaf_node)
{
	leaf_node->child1 = NULL;
	leaf_node->child2 = NULL;
	leaf_node->child3 = NULL;
	leaf_node->child_count = 0;
	leaf_node->init = 0;
	leaf_node->size = -1;
	leaf_node->id = NodeId();
	leaf_node->val_type = -1;
	leaf_node->lexer = 1;
	leaf_node->num = 0.0;
	return leaf_node;
}

// add new node which has 1 childern node
node *new_1_node(const string &display, node *node1)
{
	node *new_node = new node;
	new_node->child1 = node1;
	new_node->child2 = NULL;
	new_node->child3 = NULL;
	new_node->size = -1;
	new_node->init = 0;
	new_node->lexer = 0;

	new_node->child_count = 1;
	new_node->s = display;
	new_node->id = NodeId();
	new_node->val_type = -1;
	new_node->num = 0.0;
	outfile << "\t" << new_node->id << " [label=\"" << new_node->s << "\"];\n";
	if (node1 && node1->child_count == 0)
		outfile << "\t" << node1->id << " [label=\"" << node1->s << "\"];\n";
	if (node1)
		outfile << "\t" << new_node->id << " -> " << node1->id << ";\n";
	return new_node;
}

// add new node which has two childern
node *new_2_node(const string &display, node *node1, node *node2)
{
	node *new_node = new node;
	new_node->child1 = node1;
	new_node->child2 = node2;
	new_node->child3 = NULL;
	new_node->size = -1;
	new_node->child_count = 2;
	new_node->id = NodeId();
	new_node->s = display;
	new_node->init = 0;
	new_node->val_type = -1;
	new_node->num = 0.0;
	new_node->lexer = 0;

	outfile << "\t" << new_node->id << " [label=\"" << new_node->s << "\"];\n";
	if (node1 && node1->child_count == 0)
		outfile << "\t" << node1->id << " [label=\"" << node1->s << "\"];\n";
	if (node2 && node2->child_count == 0)
		outfile << "\t" << node2->id << " [label=\"" << node2->s << "\"];\n";
	if (node1)
		outfile << "\t" << new_node->id << " -> " << node1->id << ";\n";
	if (node2)
		outfile << "\t" << new_node->id << " -> " << node2->id << ";\n";

	return new_node;
}

// to include printf and scanf in ast
node *new_2_Stringval_node(const string &display, node *node1, node *node2)
{
	node *new_node = new node;
	new_node->child1 = node1;
	new_node->child2 = node2;
	new_node->child3 = NULL;
	new_node->size = -1;
	new_node->child_count = 2;
	new_node->id = NodeId();
	new_node->s = display;

	outfile << "\t" << new_node->id << " [label=\"" << new_node->s << "\"];\n";
	if (node1 && node1->child_count == 0)
		outfile << "\t" << node1->id << " [label=" << node1->s << "];\n";
	if (node2 && node2->child_count == 0)
		outfile << "\t" << node2->id << " [label=\"" << node2->s << "\"];\n";
	if (node1)
		outfile << "\t" << new_node->id << "-> " << node1->id << ";\n";
	if (node2)
		outfile << "\t" << new_node->id << "-> " << node2->id << ";\n";
	return new_node;
}

node *new_3_node(const string &display, node *node1, node *node2, node *node3)
{
	node *new_node = new node;
	new_node->child1 = node1;
	new_node->child2 = node2;
	new_node->child3 = node3;
	new_node->size = -1;
	new_node->child_count = 3;
	new_node->s = display;
	new_node->id = NodeId();
	new_node->init = 0;
	new_node->val_type = -1; // int 1,long 2,float 3,double 4
	new_node->num = 0.0;
	new_node->lexer = 0;
	outfile << "\t" << new_node->id << " [label=\"" << new_node->s << "\"];\n";
	if (node1 && node1->child_count == 0)
		outfile << "\t" << node1->id << " [label=\"" << node1->s << "\"];\n";
	if (node2 && node2->child_count == 0)
		outfile << "\t" << node2->id << " [label=\"" << node2->s << "\"];\n";
	if (node3 && node3->child_count == 0)
		outfile << "\t" << node3->id << " [label=\"" << node3->s << "\"];\n";
	if (node1)
		outfile << "\t" << new_node->id << " -> " << node1->id << ";\n";
	if (node2)
		outfile << "\t" << new_node->id << " -> " << node2->id << ";\n";
	if (node3)
		outfile << "\t" << new_node->id << " -> " << node3->id << ";\n";
	return new_node;
}

void make_children(node *node_root, node *node1, node *node2, node *node3)
{
	node_root->child1 = node1;
	node_root->child2 = node2;
	node_root->child3 = node3;
	if (node1 && node1->child_count == 0)
		outfile << "\t" << node1->id << " [label=\"" << node1->s << "\"];\n";
	if (node2 && node2->child_count == 0)
		outfile << "\t" << node2->id << " [label=\"" << node2->s << "\"];\n";
	if (node3 && node3->child_count == 0)
		outfile << "\t" << node3->id << " [label=\"" << node3->s << "\"];\n";
	if (node1)
		outfile << "\t" << node_root->id << " -> " << node1->id << ";\n";
	if (node2)
		outfile << "\t" << node_root->id << " -> " << node2->id << ";\n";
	if (node3)
		outfile << "\t" << node_root->id << " -> " << node3->id << ";\n";
}