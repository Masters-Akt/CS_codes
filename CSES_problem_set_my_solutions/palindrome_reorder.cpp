//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    long long a[26]={0};
    long long odd=0;
    for(long long i=0;i<s.length();i++){
        a[(long long)s[i] - 65]++;
    }
    long long index=-1;
    for(long long i=0;i<26;i++){
        if(a[i]%2==1){
            index=i;
            odd++;
            if(odd>1) break;
        }
    }
    if(odd>1) cout<<"NO SOLUTION";
    else{
        string ans="";
        if(index!=-1){
            while(a[index]-->0)
            ans=ans+(char)(index+65);
        }
        for(long long i=0;i<26;i++){
            if(a[i]!=0){
                while(a[i]>0){
                    ans=(char)(i+65) + ans + (char)(i+65);
                    a[i]-=2;
                }
            }
        }
        cout<<ans;
    }
    return 0;
}