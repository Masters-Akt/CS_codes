//Kumar Ankit
#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *left;
    struct node *right;
    int data;
    int rightThread;
    int leftThread;
};

struct node * create_node(int v){ //node creation
    struct node *curr = (struct node *)malloc(sizeof(struct node));
    if(curr!=NULL){ //if curr == NULL, memory shortage
        curr->left = curr->right = NULL;
        curr->data = v;
    }
    return curr;
}

void inorder_threaded(struct node* r){
    if(r == NULL) return;
    struct node *curr = r;
    while(curr->left != NULL){
        curr = curr->left;
    }
    while(1){
        printf("%d ", curr->data);
        if(curr->rightThread == 1){
            curr = curr->right;
        }else{
            curr = curr->right;
            if(curr == NULL) break;
            while(curr->left != NULL){
                curr = curr->left;
            }
        }
    }
}

int main(){
    struct node *root = NULL;
    root = create_node(9);
    root->left = create_node(2);
    root->left->left = create_node(8);
    root->left->left->right = create_node(3);
    root->left->left->right->left = create_node(1);
    root->right = create_node(6);
    root->right->left = create_node(4);
    root->right->left->right = create_node(5);
    root->right->right = create_node(7);

    return 0;
}