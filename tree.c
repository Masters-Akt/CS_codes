//Kumar Ankit
#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *left;
    int data;
    struct node *right;
};

struct node * create_node(int v){
    struct node *curr = (struct node *)malloc(sizeof(struct node));
    if(curr!=NULL){ //if curr == NULL, memory shortage
        curr->left = curr->right = NULL;
        curr->data = v;
    }
    return curr;
}

void inorder(struct node *r){
    if(r==NULL) return;
    inorder(r->left);
    printf("%d ", r->data);
    inorder(r->right);
}

void preorder(struct node *r){
    if(r==NULL) return;
    printf("%d ", r->data);
    preorder(r->left);
    preorder(r->right);
}

void postorder(struct node *r){
    if(r==NULL) return;
    postorder(r->left);
    postorder(r->right);
    printf("%d ", r->data);
}

int main(){

    return 0;
}