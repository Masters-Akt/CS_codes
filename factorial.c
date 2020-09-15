//Kumar Ankit
#include<stdio.h>
#include<stdlib.h>

int factorial_iterative(int n){
    int res = 1;
    for(int i = n; i > 1; i--){
        res*=i;
    }
    return res;
}

int factorial_recursive(int n){
    if(n==0) return 1;
    return n*factorial_recursive(n-1);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Factorial from iterative approach is: ");
    int f = factorial_iterative(n);
    printf("%d\n", f);
    printf("Factorial from recursive approach is: ");
    f = factorial_recursive(n);
    printf("%d\n", f);
    return 0;
}