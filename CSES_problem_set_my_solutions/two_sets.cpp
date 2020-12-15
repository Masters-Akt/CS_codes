//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> v1;
    vector<long long> v2;
    long long s1=0, s2=0;
    v1.push_back(n);
    v2.push_back(n-1);
    s1=n;
    s2=n-1;
    n=n-2;
    while(n>0){
        if(s1<=s2){
            s1+=n;
            v1.push_back(n);
        }else{
            s2+=n;
            v2.push_back(n);
        }
        n--;
    }
    if(s1!=s2) cout<<"NO";
    else{
        cout<<"YES\n";
        cout<<v1.size()<<"\n";
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<"\n"<<v2.size()<<"\n";
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }
    }
    return 0;
}