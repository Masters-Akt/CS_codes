//Owner: Kumar Ankit
//Implemented stack using array
#include<stdio.h>
#include<stdlib.h>
#define MAX 20

typedef struct{
    int data[MAX];
    int top;
}STACK;

STACK S1;

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

void copy_stack(STACK *S, STACK *final){
    STACK temp;
    temp.top = -1;
    while(S->top != -1){
        int m;
        pop(S, &m);
        push(&temp, m);
    }
    while(temp.top != -1){
        int m;
        pop(&temp, &m);
        push(final, m);
    }
}

int main(){
    S1.top = -1;
    int n;
    printf("Enter number of elements in first stack: ");
    scanf("%d", &n);
    while(n--){
        int x;
        scanf("%d", &x);
        push(&S1, x);
    }
    STACK S2;
    S2.top = -1;
    copy_stack(&S1, &S2);
    printf("Displaying copied stack elements : \n");
    while(S2.top != -1){
        int t;
        pop(&S2, &t);
        printf("%d ", t);
    }
    return 0;
}