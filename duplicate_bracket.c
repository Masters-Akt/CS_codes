//Owner: Kumar Ankit
#include<stdio.h>
#include<stdlib.h>
#define MAX 50

typedef struct{
    char data[MAX];
    int top;
}STACK;

int push(STACK *S, char v){
    if(S->top == MAX-1){
        printf("Overflow\n");
        return 1;
    }
    S->top++;
    S->data[S->top] = v;
    return 0;
}

int pop(STACK *S, char *v){
    if(S->top == -1){
        printf("Underflow\n");
        return 1;
    }
    *v = S->data[S->top];
    S->top--;
    return 0;
}

void display(STACK *S){
    if(S->top == -1) return;
    char u;
    pop(S, &u);
    printf("%c ", u);
    display(S);
    push(S, u);
}

void duplicate_bracket_finder(char *a){
    STACK temp;
    temp.top = -1;
    int i = 0;
    while(a[i]!='\0'){
        if(a[i]==')'){
            char m;
            pop(&temp, &m);
            if(m=='('){
                printf("Duplicate bracket found.\n");
                return;
            }
            while(m!='('){
                pop(&temp, &m);
            }
        }else{
            push(&temp, a[i]);
        }
        i++;
    }
    printf("No duplicate bracket found.\n");
}

int main(){
    char str[] = "A+((B*(d-k)))+R";
    duplicate_bracket_finder(str);
    return 0;
}