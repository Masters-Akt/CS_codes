//Kumar Ankit
#include<stdio.h>
#define MAX 20

typedef struct{
    int data[MAX];
    int f; //front
    int R; //rear
}Dqueue;

int insert(Dqueue *q, int v, int side){
    if(q->f == 0 && q->R == MAX-1){ //full queue
        printf("Q is full\n");
        return 1;
    }
    if(q->R == -1){ //empty queue
        q->f = q->R = 0;
        q->data[q->R] = v;
        return 0;
    }
    if(side == 1){
        if(q->R != MAX-1){ //O(1)
            q->R++;
            q->data[q->R] = v;
        }else{ //O(n)
            for(int i=q->f; i<=q->R; i++){
                q->data[i-1] = q->data[i];
            }
            q->data[q->R] = v;
            q->f--;
        }
        return 0;
    }
    if(side == 0){
        if(q->f != 0){ //O(1)
            q->f--;
            q->data[q->f] = v;
        }else{ //O(n)
            for(int i=q->R; i>=q->f; i--){
                q->data[i+1] = q->data[i];
            }
            q->data[q->f] = v;
            q->R++;
        }
    }
    return 0;
}

int del(Dqueue *q, int *m, int side){
    if(q->f == -1){ //Empty Q
        printf("Q is Empty\n");
        return 1;
    }
    if(q->f == q->R){ //Single element present
        *m = q->data[q->f];
        q->f = q->R = -1;
    }else if(side == 0){ //deleting from front
        *m = q->data[q->f];
        q->f++;
    }else{ //deleting from rear
        *m = q->data[q->R];
        q->R--;
    }
    return 0;
}

void display(Dqueue q){
    int i;
    if (q.f == - 1)
        printf("Queue is empty \n");
    else{
        for (i = q.f; i <= q.R; i++)
            printf("%d ", q.data[i]);
        printf("\n");
    }
}

int main(){
    Dqueue q1;
    q1.f = q1.R = -1;
    int p = insert(&q1, 10, 0);
    p = insert(&q1, 20, 1);
    display(q1);
    int m;
    int q = del(&q1, &m, 0);
    display(q1);
    return 0;
}