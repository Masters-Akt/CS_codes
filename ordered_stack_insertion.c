//Owner: Kumar Ankit
#include<stdio.h>
#include<stdlib.h>
#define MAX 20

typedef struct{
    int data[MAX];
    int top;
}STACK;

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

void order_insert(STACK *S, int n){
    STACK temp;
    temp.top = -1;
    for(int i = 0; i < n; i++){
        printf("Enter element : ");
        int p;
        scanf("%d", &p);
        while(1){
            if(S->top == -1){
                push(S, p);
                break;
            }
            int m;
            pop(S, &m);
            if(p<m){
                push(S, m);
                push(S, p);
                break;
            }else{
                push(&temp, m);
            }
        }
        while(temp.top != -1){
            int q;
            pop(&temp, &q);
            push(S, q);
        }
    }
}

void display(STACK *S){
    if(S->top == -1) return;
    int u;
    pop(S, &u);
    printf("%d ", u);
    display(S);
    push(S, u);
}

int main(){
    int n;
    STACK S1;
    S1.top = -1;
    printf("Enter number of elements to be inserted:");
    scanf("%d", &n);
    order_insert(&S1, n);
    display(&S1);
    return 0;
}