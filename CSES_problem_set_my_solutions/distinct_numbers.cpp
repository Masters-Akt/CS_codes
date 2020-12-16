//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    int c=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]) c++;
    }
    cout<<c;
    return 0;
}