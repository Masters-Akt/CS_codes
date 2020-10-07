//Kumar Ankit
#include<stdio.h>
#include<stdlib.h>
#define MAX 5

typedef struct{
    int *a[3];
    int f;
    int r;
    int array;
}Queue;

int insert(Queue *q, int v){
    if(q->r == MAX-1 && q->array == 2){
        printf("Queue is full\n");
        return 1;
    }
    if(q->f == -1){
        q->f = q->r = 0;
        q->a[q->array][q->r] = v;
    }else{
        if(q->r==MAX-1){
            q->array++;
            q->r = 0;
        }else
            q->r++;
        q->a[q->array][q->r] = v;
    }
    return 0;
}

int del(Queue *q, int *m){
    if(q->f == -1){ //empty
        printf("Queue is empty\n");
        return 1;
    }
    if(q->f == q->r && q->array==0){
        *m = q->a[q->array][q->f];
        q->f = q->r = -1;
    }else{
        *m = q->a[q->array][q->f];
        int temp = q->array;
        for(int i=0;i<=temp;i++){
            for(int j=q->f; j<MAX-1; j++){
                q->a[i][j] = q->a[i][j+1];
            }
            if(i!=2){
                q->a[i][MAX-1] = q->a[i+1][0];
            }
        }
        if(q->r == 0 && q->array != 0){
            q->r = MAX-1;
            q->array--;
        }else{
            q->r--;
        }
        
    }
    return 0;
}

void display(Queue q){
    if(q.f == -1){
        printf("Queue is empty\n");
    }else{
        for(int i=0;i<=q.array;i++){
            if(i!=q.array){
                for(int j=0; j<MAX; j++){
                    printf("%d ", q.a[i][j]);
                }
                printf("\n");
            }else{
                for(int j=0;j<=q.r;j++){
                    printf("%d ", q.a[i][j]);
                }
                printf("\n");
            }
        }
        printf("\n");
    }
}

int main(){
    Queue q1;
    for(int i=0;i<3;i++){
        q1.a[i] = (int *)malloc(MAX*sizeof(int));
    }
    int m;
    q1.f = q1.r = -1;
    q1.array = 0;
    int p = insert(&q1, 5);
    p = insert(&q1, 10);
    p = insert(&q1, 15);
    display(q1);
    int q = del(&q1, &m);
    display(q1);
    p = insert(&q1, 20);
    p = insert(&q1, 25);
    p = insert(&q1, 30);
    p = insert(&q1, 35);
    p = insert(&q1, 40);
    p = insert(&q1, 45);
    p = insert(&q1, 50);
    p = insert(&q1, 55);
    p = insert(&q1, 60);
    p = insert(&q1, 65);
    display(q1);
    q = del(&q1, &m);
    q = del(&q1, &m);
    display(q1);
    return 0;
}