//Kumar Ankit
//Traversal using stack and without using recursion
#include<stdio.h>
#include<stdlib.h>
#define MAX 20

struct node{
    struct node *left;
    int data;
    struct node *right;
};

typedef struct{
    struct node *data[MAX];
    int top;
}STACK;

struct node * create_node(int v){ //node creation
    struct node *curr = (struct node *)malloc(sizeof(struct node));
    if(curr!=NULL){ //if curr == NULL, memory shortage
        curr->left = curr->right = NULL;
        curr->data = v;
    }
    return curr;
}

int push(STACK *S, struct node *v){ //push operation for stack
    if(S->top == MAX-1){
        printf("Overflow\n");
        return 1;
    }
    S->top++;
    S->data[S->top] = v;
    return 0;
}

int pop(STACK *S, struct node **v){ //pop operation for stack
    if(S->top == -1){
        printf("Underflow\n");
        return 1;
    }
    *v = S->data[S->top];
    S->top--;
    return 0;
}

int isEmpty(STACK S){ //isEmpty operation for stack
    return (S.top == -1) ? 1 : 0;
}

void preorder(struct node *r){ //preorder traversal without using recursion
    struct node *m;
    STACK S1;
    S1.top = -1;
    if(r == NULL) return;
    push(&S1, r);
    while(!isEmpty(S1)){
        pop(&S1, &m);
        printf("%d ", m->data);
        if(m->right != NULL) push(&S1, m->right);
        if(m->left != NULL) push(&S1, m->left);
    }
}

void inorder(struct node *r){ //inorder traversal without using recursion
    struct node *m;
    STACK S1;
    S1.top = -1;
    struct node *curr = r;
    while(curr != NULL){
        push(&S1, curr);
        curr = curr->left;
    }
    while(S1.top != -1){ //Or isEmpty()
        pop(&S1, &m);
        printf("%d ", m->data);
        curr = m->right;
        while(curr != NULL){
            push(&S1, curr);
            curr = curr->left;
        }
    }
}

void postorder(struct node *r){ //postorder traversal without using recursion
    struct node *curr = r, *m, *k;
    STACK S1;
    S1.top = -1;
    while(curr!=NULL){
        if(curr->right != NULL){
            push(&S1, curr->right);
        }
        push(&S1, curr);
        curr = curr->left;
    }
    while(!(isEmpty(S1))){
        pop(&S1, &m);
        if(m->right == NULL){
            printf("%d ", m->data);
        }else if(isEmpty(S1)){
            printf("%d ", m->data);
        }else{
            pop(&S1, &k);
            if(m->right != k){
                printf("%d ", m->data);
                push(&S1, k);
            }else{
                push(&S1, m);
                curr = k;
                while(curr != NULL){
                    if(curr->right != NULL){
                        push(&S1, curr->right);
                    }
                    push(&S1, curr);
                    curr = curr->left;
                }
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
    printf("Preorder Traversal without recursion : ");
    preorder(root);
    printf("\nInorder Traversal without using recursion : ");
    inorder(root);
    printf("\nPostorder Traversal without using recursion : ");
    postorder(root);
    return 0;
}