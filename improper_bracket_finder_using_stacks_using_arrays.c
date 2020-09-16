//Owner: Kumar Ankit
//Implemented stack using arrays
#include<stdio.h>
#include<stdlib.h>
#define MAX 20

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

void improper_bracket_finder(char *a){
    STACK temp;
    temp.top = -1;
    int i = 0;
    while(a[i]!='\0'){
        if(a[i]=='('){
            push(&temp, a[i]);
        }else if(a[i]==')'){
            if(temp.top==-1){
                printf("Improper brackets found.\n");
                return;
            }
            char m;
            pop(&temp, &m);
            while(m!='(' && temp.top!=-1){
                pop(&temp, &m);
            }
        }
        i++;
    }
    if(temp.top == -1){
        printf("Improper brackets not found.\n");
    }else{
        printf("Improper bracketd found.\n");
    }
}

int main(){
    char str[] = "A+B-(q*d)+k)";
    improper_bracket_finder(str);
    return 0;
}