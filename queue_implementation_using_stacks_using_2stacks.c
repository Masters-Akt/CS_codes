//Kumar Ankit
#include<stdio.h>
#include<stdlib.h>
#define MAX 20

typedef struct{
    int data[MAX];
    int top;
}STACK;

STACK st[2];

int push(STACK *S, int v){
    if(S->top == MAX-1){
        printf("Overflow\n");
        return 1;
    }
    S->top++;
    S->data[S->top] = v;
    return 0;
}

int pop(STACK *S, int *v){
    if(S->top == -1){
        printf("Underflow\n");
        return 1;
    }
    *v = S->data[S->top];
    S->top--;
    return 0;
}

void display(STACK *S){//using recursion
    if(S->top == -1) return;
    int u;
    pop(S, &u);
    printf("%d ", u);
    display(S);
    push(S, u);
}

void display_rev(STACK *S){
    if(S->top == -1) return;
    int u;
    pop(S, &u);
    display_rev(S);
    printf("%d ", u);
    push(S,u);
}

int isEmpty(STACK S){
    return (S.top == -1) ? 1 : 0;
}

int enqueue(int v){
    return push(&st[0], v);
}

int dequeue(int *m){
    int p = isEmpty(st[0]);
    if(p) return p;
    p = isEmpty(st[1]);
    if(p == 1){
        int n;
        while(st[0].top != -1){
            pop(&st[0], &n);
            push(&st[1], n);
        }
        pop(&st[1], &n);
        *m = n;
        return 0;
    }
    int n;
    pop(&st[1], &n);
    *m = n;
    return 0;
}

int main(){
    st[0].top = st[1].top = -1;
    int t = enqueue(10);
    display_rev(&st[1]);
    display(&st[0]);
    printf("\n");
    t = enqueue(20);
    display_rev(&st[1]);
    display(&st[0]);
    printf("\n");
    t = enqueue(30);
    display_rev(&st[1]);
    display(&st[0]);
    printf("\n");
    int m;
    int r = dequeue(&m);
    display_rev(&st[1]);
    display(&st[0]);
    printf("\n");
    return 0;
}