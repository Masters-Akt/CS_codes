//Kumar Ankit
#include<stdio.h>
#include<stdlib.h>
#define MAX 30

void display(int a[], int c){
    for(int i=0;i<c;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insert(int *a, int *c, int n, int pos){
    for(int i=(*c)-1;i>=pos;i--){
        a[i+n] = a[i];
    }
    int i = pos;
    while(n--){
        printf("Enter value: ");
        int p;
        scanf("%d", &p);
        a[i] = p;
        i++;
        (*c)++;
    }
}

void delete(int *a, int *c, int n, int pos){
    for(int i=pos+n; i<(*c); i++){
        a[i-n] = a[i];
    }
    (*c)-=n;
}

int main(){
    int a[MAX];
    for(int i=0;i<10;i++){
        a[i] = rand()%101;
    }
    int c = 10;
    display(a, c);
    int n;
    printf("Enter number of elements to be inserted: ");
    scanf("%d", &n);
    printf("Enter the index position at which they are to be inserted: ");
    int pos;
    scanf("%d", &pos);
    insert(a, &c, n, pos);
    display(a, c);
    printf("Enter the number of elements to be deleted: ");
    scanf("%d", &n);
    printf("Enter the position from which they are to be deleted: ");
    scanf("%d", &pos);
    delete(a, &c, n, pos);
    display(a, c);
    return 0;
}