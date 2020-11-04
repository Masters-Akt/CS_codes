//Kumar Ankit
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

int height(struct node *r){ //height of the tree
    if(r==NULL) return 0;
    else{
        int lh = height(r->left);
        int rh = height(r->right);
        if(lh>rh) return lh+1;
        else return rh+1;
    }
}

void printLevel(struct node *r, int l){
    if(r == NULL) return;
    if(l == 1) printf("%d ", r->data);
    else if(l > 1){
        printLevel(r->left, l-1);
        printLevel(r->right, l-1);
    }
}

void levelOrder(struct node *r){
    int h = height(r);
    for(int i=1; i<=h; i++){
        printLevel(r, i);
    }
}

void reverseLevelOrder(struct node *r){
    int h = height(r);
    for(int i=h; i>=1; i--){
        printLevel(r, i);
    }
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

void deleteTree(struct node *r){
    if(r == NULL) return;
    deleteTree(r->left);
    deleteTree(r->right);
    printf("Deleting node : %d ",r->data);
    free(r);
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
    printf("Level order traversal of the given binary tree is : ");
    levelOrder(root);
    printf("\nReverse level order traversal : ");
    reverseLevelOrder(root);
    printf("Deleting right subtree : \n");
    printf("Before deletion : ");
    inorder(root);
    printf("\nAfter deletion  of right subtree : ");
    deleteTree(root->right);
    inorder(root);
    return 0;
}