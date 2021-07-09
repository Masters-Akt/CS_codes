#include<stdio.h>

void printMaxRepeating(int a[], int n){
    int m = 0, freq[n];
    for(int i=0;i<n;i++){
        int c = 1;
        for(int j=i+1;j<n;j++)
            if(a[i]==a[j]) c++;
        freq[i]=c;
    }
    for(int i=0;i<n;i++) if(freq[i]>m) m = freq[i];
    if(m==1) printf("There is no repeating element.");
    else{
        printf("The maximum count is %d and the repeating elements are ", m);
        for(int i=0;i<n;i++){
            if(freq[i]==m){
                printf("%d ",a[i]);
            }
        }
    }
}

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int a[100];
    printf("Enter n elements : ");
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    printMaxRepeating(a,n);
    return 0;
}