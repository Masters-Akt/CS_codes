//Kumar Ankit
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function   
    *a = *a + *b;
    *b=abs(*a-(2**b));


}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d",*pa,*pb);

    return 0;
}

