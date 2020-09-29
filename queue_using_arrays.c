//Kumar Ankit
#include<stdio.h>
#include<stdlib.h>
#define MAX 20

typedef struct{
    int data[MAX];
    int front;
    int rear;
}Queue;

int insert(Queue *q, int v){
    if(q->rear == MAX-1){    //full Q
        printf("Queue is full\n");
        return 1;
    }
    if(q->rear == -1){   //Empty Q
        q->front = q->rear = 0;
        q->data[q->rear] = v;
    }else{   //Partially full Q
        q->rear++;
        q->data[q->rear] = v;
    }
    return 0;
}
/*There are two cases for deletion in a queue:-
Case 1:
    directly move the front forward but this will waste space as the previous memories wont be used again.
    Time complexity : O(1)
Case 2:
    don't move the front rather move all the elements 1 place leftwards, this will save the space
    Time complexity : O(n)

delete is case 1 and delete2 is case 2.
*/
int delete(Queue *q, int *m){
    if(q->front == -1){   //Empty Q
        printf("Q is empty\n");
        return 1;
    }
    if(q->front == q->rear){
        *m = q->data[q->front];
        q->front = q->rear = -1;
    }else{
        *m = q->data[q->front];
        q->front++;
    }
    return 0;
}

int delete2(Queue *q, int *m){
    if(q->front == -1){
        printf("Q is empty\n");
        return 1;
    }
    if(q->front == q->rear){
        *m = q->data[q->front];
        q->front = q->rear = -1;
    }else{
        *m = q->data[q->front];
        for(int i=1; i<q->rear; i++){
            q->data[i-1] = q->data[i];
        }
        q->rear--;
    }
    return 0;
}

int main(){
    Queue q1;
    q1.front = q1.rear = -1;
    int p = insert(&q1, 12);
    p = insert(&q1, 13);
    int m;
    int q = delete(&q1, &m);
    q = delete2(&q1, &m);
    return 0;
}