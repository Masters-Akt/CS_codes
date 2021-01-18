//Owner: Kumar Ankit
//Implemented stacks using arrays
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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

int is_operand(int c){
    if((c>=65 && c<=90) || (c>=97 && c<=122) || (c>=48 && c<=57)){
        return 1;
    }
    return 0;
}

int get_v(char o){
    int t;
    switch(o){
        case '+':
        case '-': t = 1;
        break;
        case '*':
        case '/': t = 2;
        break;
        case '^': t = 3;
        break;
    }
    return t;
}

int is_HtoL(char o1, char o2){
    if(get_v(o1) > get_v(o2)){
        return 1;
    }
    return 0;
}

void infix_to_prefix(char* inp, char* out){
    int i = 0, k = 0, m, n;
    while(inp[i]!='\0'){
        if(is_operand(inp[i])){
            out[k++] = inp[i];
        }else if(inp[i] == '('){
            push(&S1, inp[i]);
        }else if(inp[i] == ')'){
            while(1){
                pop(&S1, &m);
                if(m == '('){
                    break;
                }
                out[k++] = m;
            }
        }else{
            if(S1.top == -1){
                push(&S1, inp[i]);
            }else{
                pop(&S1, &n);
                if(n == '('){
                    push(&S1, n);
                    push(&S1, inp[i]);
                }else if(is_HtoL(n, inp[i])){
                    out[k++] = m;
                    continue;
                }else{
                    push(&S1, m);
                    push(&S1, inp[i]);
                }
            }
        }
        i++;
    }
    while(S1.top != -1){
        pop(&S1, &m);
        out[k++] = m;
    }
}

void reverse(char a[], int len){
    int i = 0, j = len-1;
    while(i<j){
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

int main(){
    char inp[] = "a/b-k*(d-e*f+g)/p";
    int l = 0;
    int i = 0;
    while(inp[i]!='\0'){
        l++;
        i++;
    }
    char out[l+1];
    S1.top = -1;
    reverse(inp, l);
    infix_to_prefix(inp, out);
    reverse(out, l);
    i = 0;
    while(out[i]!='\0'){
        printf("%c", out[i]);
        i++;
    }
    return 0;
}
//Not Working : Giving Underflow, check prefix function
//And evaluation method needs to be added