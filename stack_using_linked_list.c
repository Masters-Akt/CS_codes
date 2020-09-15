//Owner : Kumar Ankit
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct{
    struct node *top;
}STACK;

int push(STACK *S, int v){
    struct node *curr;
    curr = (struct node *)malloc(sizeof(struct node));
    if(curr == NULL){
        printf("Overflow\n");
        return 1;
    }
    curr->data = v;
    curr->next = NULL;
    curr->next = S->top;
    S->top = curr;
    return 0;
}

int pop(STACK *S, struct node **v){
    if(S->top == NULL){
        printf("Underflow\n");
        return 1;
    }
    *v = S->top;         // Alternative: ptr=S->top; S->top=S->top->next; *v=ptr
    S->top = S->top->next;
    return 0;
}

void display(STACK *S){
    if(S->top == NULL) return;
    struct node *t;
    int u;
    pop(S, &t);
    u = t->data;
    printf("%d ", u);
    display(S);
    push(S, u);
}

int main(){
    struct node *m;
    STACK S1;
    S1.top = NULL;
    int b = push(&S1, 15);
    display(&S1);
    int c = pop(&S1, &m);
    return 0;
}