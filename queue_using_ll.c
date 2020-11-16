//Kumar Ankit
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct{
    struct node *front;
    struct node *rear;
}Queue;

int insert(Queue *q, int v){
    struct node *curr = (struct node *)malloc(sizeof(struct node));
    if(curr == NULL){ //if curr not created due to memory shortage
        printf("Not helpful\n");
        return 1;
    }
    curr->data = v;
    curr->next = NULL;
    if(q->rear == NULL){ //empty queue
        q->front = q->rear = curr;
    }else{
        q->rear->next = curr;
        q->rear = curr;
    }
    printf("%d inserted\n", v);
    return 0;
}

int delete(Queue *q, int *m){  //Can return either the whole node or just the data
    if(q->front == NULL){ //empty case
        printf("Cannot help\n");
        return 1;
    }
    *m = q->front->data;
    if(q->front == q->rear){ //one element present
        free(q->front);
        q->front = q->rear = NULL;
    }else{  //multiple elements present
        struct node *ptr = q->front;
        q->front = q->front->next;
        free(ptr);
    }
    printf("%d deleted\n", *m);
    return 0;
}

int main(){
    int m;
    Queue q1;
    q1.front = q1.rear = NULL;
    int p = insert(&q1, 10);
    p = insert(&q1, 20);
    int q = delete(&q1, &m);
    return 0;
}