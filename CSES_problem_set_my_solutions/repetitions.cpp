//Kumar Ankit
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int c=1, max=0;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            c++;
        }else{
            if(c>max) max = c;
            c=1;
        }
    }
    if(c>max) max = c;
    cout<<max<<"\n";
    return 0;
}