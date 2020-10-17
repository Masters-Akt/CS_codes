//Kumar Ankit
//tree traversal using recursion
#include<stdio.h>
#include<stdlib.h>

struct node{ //tree structure
    struct node *left;
    int data;
    struct node *right;
};

struct node * create_node(int v){ //node creation
    struct node *curr = (struct node *)malloc(sizeof(struct node));
    if(curr!=NULL){ //if curr == NULL, memory shortage
        curr->left = curr->right = NULL;
        curr->data = v;
    }
    return curr;
}

void inorder(struct node *r){ //inorder search using recursion
    if(r==NULL) return;
    inorder(r->left);
    printf("%d ", r->data);
    inorder(r->right);
}

void preorder(struct node *r){ //preorder search using recursion
    if(r==NULL) return;
    printf("%d ", r->data);
    preorder(r->left);
    preorder(r->right);
}

void postorder(struct node *r){ //postorder search using recursion
    if(r==NULL) return;
    postorder(r->left);
    postorder(r->right);
    printf("%d ", r->data);
}

int main(){
    struct node *root = NULL;
    root = create_node(4);
    root->left = create_node(9);
    root->left->left = create_node(3);
    root->right = create_node(8);
    root->right->left = create_node(7);
    root->right->right = create_node(6);
    printf("Inorder : ");
    inorder(root);
    printf("\nPreorder : ");
    preorder(root);
    printf("\nPostorder : ");
    postorder(root);
    return 0;
}