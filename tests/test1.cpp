struct node
{
    int val;
    struct node* next;
};

int main(){
    struct node* head;
    struct node* node;
    int sum;
    int i;
    head = malloc(sizeof(struct node));
    head->val = 0;
    for(i=0; i<10; ++i){
        struct node* newnode;
        struct node* node;
        newnode = malloc(sizeof(struct node));
        newnode->val = i;
        newnode->next = 0;
        node = head;
        while(node->next){
            node = node->next;
        }
        node->next = newnode;
    }
    sum = 0;
    node = head;
    while(node){
        sum += node->val;
        node = node->next;
    }
    
    return 0;
}