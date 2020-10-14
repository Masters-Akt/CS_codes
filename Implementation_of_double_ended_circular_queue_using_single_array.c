//Kumar Ankit
//Implementing 4 queues using a single array
#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int data[20];

typedef struct{
    int f[4]; //front
    int r[4]; //rear
}Dcqueue;

Dcqueue q1;

int insert(Dcqueue *q, int qno , int v, int side){
    if((q->f[qno]%MAX) == (q->r[qno]+1)%MAX){ //Full Q
        printf("Queue is full\n");
        return 1;
    }
    if(q->r[qno] == -1){ //Empty Q
        q->f[qno] = q->r[qno] = 5*qno;
        data[q->r[qno]] = v;
    }else if(side == 0){ //front side insertion
        if(q->f[qno]%MAX==0){
            q->f[qno] = q->f[qno] + MAX -1;
        }else{
            q->f[qno]--;
        }
        data[q->f[qno]] = v;
    }else{ //rear side insertion
        if((q->r[qno]+1)%MAX){
            q->r[qno] = q->r[qno] - (MAX-1);
        }else{
            q->r[qno]++;
        }
        data[q->r[qno]] = v;
    }
    return 0;
}

int delete(Dcqueue *q, int qno , int *m, int side){
    if(q->f[qno] == -1){ //Empty Q
        printf("Queue is empty\n");
        return 1;
    }
    *m = data[q->f[qno]];
    if(q->f[qno] == q->r[qno]){ //Single element present
        q->f[qno] = q->r[qno] = -1;
        return 0;
    }
    if(side == 0){
        if((q->f[qno]+1)%MAX){
            q->f[qno] = q->f[qno] - (MAX-1);
        }else{
            q->f[qno]++;
        }
    }else{
        if(q->r[qno]%MAX==0){
            q->r[qno] = q->r[qno] + MAX -1;
        }else{
            q->r[qno]--;
        }
    }
    return 0;
}

int main(){
    q1.f[0] = q1.r[0] = q1.f[1] = q1.r[1] = q1.f[2] = q1.r[2] = q1.f[3] = q1.r[3] = -1;
    int p = insert(&q1, 0, 10, 0);
    int m;
    int q = delete(&q1, 0, &m, 0);
    return 0;
}

//Incomplete
/*
Works needed:
1. display function
2. change forward and backward moving functions
3. change main function accordingly
*/