//Kumar Ankit
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int a[1000];
    for(i=(num-1);i>=0;i--)
        a[i]=*arr++;
    for(i=0;i<num;i++)
    printf("%d ",a[i]);
    return 0;
}

