#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int ch = n;
      for(int i=n;i>=1;i--){
          for(int j=n;j>ch;j--){
              printf("%d ",j);
          }
          for(int j=1;j<2*ch-1;j++){
              printf("%d ",i);
          }
          for(int j=ch;j<=n;j++){
              printf("%d ",j);
          }
          ch--;
          printf("\n");
      }
      ch+=2;
      for(int i=2;i<=n;i++){
          for(int j=n;j>ch;j--){
              printf("%d ",j);
          }
          for(int j=1;j<2*ch-1;j++){
              printf("%d ",i);
          }
          for(int j=ch;j<=n;j++){
              printf("%d ",j);
          }
          ch++;
          printf("\n");
      }
    return 0;
}