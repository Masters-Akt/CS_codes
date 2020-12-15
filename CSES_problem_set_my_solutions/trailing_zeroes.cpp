//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long c=0;
    long long num =floor(log(n)/log(5));
    while(num>0){
        c+=(n/pow(5,num));
        num--;
    }
    cout<<c;
    return 0;
}