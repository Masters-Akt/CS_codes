#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

bool checksum(string s){
    int odd=0, even=0;
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            even+=(int(s[i])-48);
        }else{
            odd+=(int(s[i])-48);
        }
    }
    if(odd-even==0) return true;
    return false;
}

void check_card(string s){
    if(s.length()!=16 || s[0]!='5' || !(s[1]=='0' || s[1]=='1') || checksum(s)==false){
        throw "Not Valid";
    }else
    {
        throw "Valid";
    }
    
}

int main(){
    string s;
    cout<<"Enter credit card number : ";
    cin>>s;
    try{
        check_card(s);
    }
    catch(const char* msg){
        cerr<<msg;
    }

    return 0;
}