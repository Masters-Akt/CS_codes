//Kumar Ankit
#include<stdio.h>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod){
    if(n==1){
        printf("\nMove disc 1 from rod %c to %c.", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\nMove disc %d from rod %c to %c.", n, from_rod, to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

int main(){
    printf("Enter number of discs in tower : ");
    int n;
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}