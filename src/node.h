typedef struct node{
    long int id;
    char* s;
    int child_count;
    struct node* child1;
    struct node* child2;
    struct node* child3;
}node;

FILE* outfile;
extern FILE* yyin;

void make_children(node* parent, node* child1, node* child2, node* child3);
node* new_3_node(char* display, node* node1, node* node2, node* node3);
node* new_2_node(char* display,node* node1,node* node2);
node* new_2_Stringval_node(char* display, node* node1, node* node2);
node* new_1_node(char* display,node* node1);
node* new_leaf_node(char* val);
void printfile(struct node *root, FILE *file);