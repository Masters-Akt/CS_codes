//Kumar Ankit
#include<stdio.h>

int main(){
    printf("Enter row and column of first matrix : ");
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    printf("Enter elements of first matrix : ");
    int m1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter row and column of second matrix : ");
    scanf("%d %d", &r2, &c2);
    printf("Enter elements of second matrix : ");
    int m2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d", &m2[i][j]);
        }
    }
    if(r1==r2 && c1==c2){
        int m3[r1][c1];
        printf("The resultant matrix after addition is : \n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                m3[i][j] = m1[i][j] + m2[i][j];
                printf("%d ", m3[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("Cannot add the matrices!");
    }
    return 0;
}