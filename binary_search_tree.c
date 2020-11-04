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

void inorder(struct node *r){ //inorder search using recursion
    if(r==NULL) return;
    inorder(r->left);
    printf("%d ", r->data);
    inorder(r->right);
}

struct node * insert(struct node *r, int v){
    if(r==NULL){
        struct node *curr = (struct node *)malloc(sizeof(struct node));
        curr->left = curr->right = NULL;
        curr->data = v;
        return curr;
    }else if(r->data < v){
        r->right = insert(r->right, v);
        return r;
    }else if(r->data >v){
        r->left = insert(r->left, v);
        return r;
    }
}

struct node * find_max(struct node *r){
    if(r==NULL) return r;
    else if(r->right!=NULL){
        return find_max(r->right);
    }else{
        return r;
    }
}

struct node * delete(struct node *r, int v){
    if(r==NULL) return r;
    else if(r->data > v){
        r->left = delete(r->left, v);
        return r;
    }else if(r->data < v){
        r->right = delete(r->right, v);
        return r;
    }else{
        if(r->right!=NULL && r->left!=NULL){
            struct node *temp = find_max(r->left);
            r->data = temp->data;
            r->left = delete(r->left, r->data);
            return temp;
        }else if(r->left == NULL){
            struct node *temp = r->right;
            free(r);
            return temp;
        }else if(r->right == NULL){
            struct node *temp = r->left;
            free(r);
            return temp;
        }
    }
}

int main(){
    struct node *root = NULL;
    root = create_node(35);
    root->left = create_node(20);
    root->left->left = create_node(10);
    root->left->right = create_node(29);
    root->left->right->right = create_node(31);
    root->left->right->right->left = create_node(30);
    root->right = create_node(70);
    root->right->left = create_node(45);
    root->right->left->right = create_node(63);
    root->right->left->right->left = create_node(50);
    root->right->left->right->left->right = create_node(54);
    root->right->right = create_node(71);
    printf("Inorder display of current tree : \n");
    inorder(root);
    printf("\n");
    printf("Inserting 56 and 80 : \n");
    root = insert(root, 56);
    root = insert(root, 80);
    inorder(root);
    printf("\n");
    printf("Deleting 71 : \n");
    root = delete(root, 71);
    inorder(root);
    return 0;
}