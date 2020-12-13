//Kumar Ankit
#include<stdio.h>
#include<stdlib.h>
#define MAX 20

struct node{ //tree structure
    struct node *left;
    int data;
    struct node *right;
};

typedef struct{ //for non-recursive approach
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

void preorder2(struct node *r){ //preorder traversal without using recursion
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

void inorder2(struct node *r){ //inorder traversal without using recursion
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

void postorder2(struct node *r){ //postorder traversal without using recursion
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

int find_maximum(struct node *r){ //find max using recursion
    if(r==NULL) return INT_MIN;
    int result = r->data;
    int lresult = find_maximum(r->left);
    int rresult = find_maximum(r->right);
    if(lresult>result) result = lresult;
    if(rresult>result) result = rresult;
    return result;
}

int find_minimum(struct node *r){ //find min using recursion
    if(r==NULL) return INT_MAX;
    int result = r->data;
    int lresult = find_minimum(r->left);
    int rresult = find_minimum(r->right);
    if(lresult<result) result = lresult;
    if(rresult<result) result = rresult;
    return result;
}

int search(struct node *r, int v){
    if(r==NULL) return 0;
    if(r->data == v) return 1;
    int resl = search(r->left, v);
    if(resl == 1) return 1;
    int resr = search(r->right, v);
    return resr;
}

int find_max2(struct node *r){ //find max without using recursion
    int max = INT_MIN;
    struct node *m;
    STACK s1;
    s1.top = -1;
    if(r==NULL) return INT_MAX;
    push(&s1, r);
    while(!isEmpty(s1)){
        pop(&s1, &m);
        if(m->data > max) max = m->data;
        if(m->right != NULL) push(&s1, m->right);
        if(m->left != NULL) push(&s1, m->left);
    }
    return max;
}

int find_min2(struct node *r){ //find min without using recursion
    int min = INT_MAX;
    struct node *m;
    STACK s1;
    s1.top = -1;
    if(r==NULL) return INT_MIN;
    push(&s1, r);
    while(!isEmpty(s1)){
        pop(&s1, &m);
        if(m->data < min) min = m->data;
        if(m->right != NULL) push(&s1, m->right);
        if(m->left != NULL) push(&s1, m->left);
    }
    return min;
}

int search2(struct node *r, int v){ //search without using recursion
    if(r==NULL) return 0;
    STACK s1;
    s1.top = -1;
    push(&s1, r);
    while(!(isEmpty(s1))){
        struct node *m;
        pop(&s1, &m);
        if(m->data == v) return 1;
        if(r->right != NULL) push(&s1, r->right);
        if(r->left != NULL) push(&s1, r->left);
    }
    return 0;
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
    printf("Select any one option:\n");
    printf("1. Inorder using recursion\n2.Inorder without using recursion\n3.Preorder using recursion\n4.Preorder without using recursion\n5.Postorder using recursion\n6.Postorder without using recursion\n7.Find min value in tree\n8.Find max value in the tree\n9.Search a number\n10.Find min without recursion\n11.Find max without recursion\n12.Seach a number without recursion\n");
    printf("Enter your choice : ");
    int opt;
    scanf("%d", &opt);
    switch(opt){
        case 1: printf("Inorder using recursion : ");
                inorder(root);
        break;
        case 2: printf("Inorder without using recursion : ");
                inorder2(root);
        break;
        case 3: printf("Preorder using recursion : ");
                preorder(root);
        break;
        case 4: printf("Preorder without using recursion : ");
                preorder2(root);
        break;
        case 5: printf("Postorder using recursion : ");
                postorder(root);
        break;
        case 6: printf("Postorder without using recursion : ");
                postorder2(root);
        break;
        case 7: printf("Minimum value in the tree is : ");
                int min = find_minimum(root);
                printf("%d",min);
        break;
        case 8: printf("Maximum value in the tree is : ");
                int max = find_maximum(root);
                printf("%d", max);
        break;
        case 9: printf("Enter the number to be found : ");
                int n;
                scanf("%d", &n);
                int re = search(root, n);
                if(re == 1) printf("True");
                else printf("False");
        break;
        case 10: printf("Without recursion, Minimum value in tree is : ");
                 int min = find_min2(root);
                 printf("%d", min);
        break;
        case 11: printf("Without recursion, Maximum value in tree is : ");
                 int max = find_max2(root);
                 printf("%d", max);
        break;
        case 12: printf("Without recursion, Enter the number to be found : ");
                 int n;
                 scanf("%d", &n);
                 int re = search(root, n);
                 if(re == 1) printf("True");
                 else printf("False");
        break;
        default: printf("Invalid: Enter within 1 to 6."); 
    }
    return 0;
}