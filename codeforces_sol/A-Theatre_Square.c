//Kumar Ankit
#include<stdio.h>
int main(){
    long long int n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);
    long long int len=0,br=0;
    if(n%a==0){
        len=n/a;
    }
    else{
        len=n/a +1;
    }
    if(m%a==0){
        br=m/a;
    }
    else{
        br=m/a +1;
    }
    printf("%lld",len*br);
    return 0;
}