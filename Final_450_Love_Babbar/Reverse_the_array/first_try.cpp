//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

string revstring(string s){
    string ans="";
    for(int i=s.length()-1;i>=0;i--){
        ans=ans+s[i];
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<revstring(s);
    return 0;
}