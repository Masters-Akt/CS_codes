//Kumar Ankit
#include<stdio.h>
#include<stdlib.h>
#define MAX 20

typedef struct{
    int data[MAX];
    int f; //front
    int r; //rear
}Dcqueue;

int insert(Dcqueue *q, int v, int side){
    if(q->f == (q->r+1)%MAX){ //Full Q
        printf("Queue is full\n");
        return 1;
    }
    if(q->r == -1){ //Empty Q
        q->f = q->r = 0;
        q->data[q->r] = v;
    }else if(side == 0){ //front side insertion
        q->f = (q->f + MAX -1)%MAX;
        q->data[q->f] = v;
    }else{ //rear side insertion
        q->r = (q->r+1)%MAX;
        q->data[q->r] = v;
    }
    return 0;
}

int delete(Dcqueue *q, int *m, int side){
    if(q->f == -1){ //Empty Q
        printf("Queue is empty\n");
        return 1;
    }
    *m = q->data[q->f];
    if(q->f == q->r){ //Single element present
        q->f = q->r = -1;
        return 0;
    }
    if(side == 0){
        q->f = (q->f + 1)%MAX;
    }else{
        q->r = (q->r + MAX -1)%MAX;
    }
    return 0;
}

int main(){
    Dcqueue q1;
    q1.f = q1.r = -1;
    int p = insert(&q1, 10, 0);
    p = insert(&q1, 20, 1);
    int m;
    int q = delete(&q1, &m, 0);
    q = delete(&q1, &m, 1);
    return 0;
}
//no display function