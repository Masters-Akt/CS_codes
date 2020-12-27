//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

string first_try(string s){
    string ans="";
    for(int i=s.length()-1;i>=0;i--){
        ans=ans+s[i];
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<first_try(s);
    return 0;
}