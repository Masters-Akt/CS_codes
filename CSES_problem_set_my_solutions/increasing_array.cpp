//Kumar Ankit
#include<iostream>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int a[n];
    long long int s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i!=0 && a[i]<a[i-1]){
            s+=(a[i-1]-a[i]);
            a[i] = a[i-1];
        }
    }
    cout<<s<<endl;
    return 0;
}