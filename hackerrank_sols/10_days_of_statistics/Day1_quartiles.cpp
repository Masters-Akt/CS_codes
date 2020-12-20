//Kumar Ankit
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    if(n%2==0){
        int q2=(a[n/2-1]+a[n/2])/2;
        if((n/2)%2==1){
        int q1=a[n/4];
        int q3=a[n/2 + n/4];
        cout<<q1<<"\n"<<q2<<"\n"<<q3;
        }
        else{
            int q1=(a[(n/2)/2]+a[(n/2)/2 -1])/2;
        int q3=(a[n/2 + n/4 -1]+ a[n/2 + n/4])/2;
        cout<<q1<<"\n"<<q2<<"\n"<<q3;
        }
        
    }else{
        int q2=a[n/2];
        if((n/2)%2==1){
        int q1=a[n/4];
        int q3=a[n/2 + n/4];
        cout<<q1<<"\n"<<q2<<"\n"<<q3;
        }else{
            int q1=(a[(n/2)/2]+a[(n/2)/2 -1])/2;
        int q3=(a[n/2 + n/4 +1]+ a[n/2 + n/4])/2;
        cout<<q1<<"\n"<<q2<<"\n"<<q3;
        }
        
    } 
    return 0;
}
