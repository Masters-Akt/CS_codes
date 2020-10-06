//Kumar Ankit
#include<stdio.h>

struct node{
    int data;
    struct node *next;
};

typedef struct{
    struct node *R;
}Cqueue;

int insert(Cqueue *q, int v){
    struct node *curr = (struct node *)malloc(sizeof(struct node));
    if(curr == NULL){ //if curr not created due to memory shortage
        printf("Not possible, Memory full\n");
        return 1;
    }
    curr->data = v;
    curr->next = NULL;
    if(q->R == NULL){ //No data present
        q->R = curr;
        curr->next = curr;
    }else{
        curr->next = q->R->next;
        q->R->next = curr;
        q->R = curr;
    }
    return 0;
}

int delete(Cqueue *q, int *m){
    if(q->R == NULL){ //Queue is empty
        printf("Not possible, Q is empty\n");
        return 1;
    }
    if(q->R->next == q->R){ //Single node present
        *m = q->R->data;
        free(q->R);
        q->R = NULL;
    }else{
        struct node *ptr = q->R->next;
        *m = ptr->data;
        q->R->next = ptr->next;
        free(ptr);
    }
    return 0;
}

int main(){
    Cqueue q1 = {NULL}; //works same as q1.R=NULL;
    int p = insert(&q1, 10);
    int m;
    int q = delete(&q1, &m);
    return 0;
}

//display function required