//Kumar Ankit
/*Question : 
A bank generated credit cards
---card number must be 16 digits
---starting 2 digits must be either 50 or 51
---last four digits can't be zero
---the checksum of alternative digits are computed and the difference should be zero
For example, if the card number is 5011213678920911
Then, 5+1+2+3+7+9+0+1=28
0+1+1+6+8+2+9+1=28
So, its a valid card and accept it and otherwise generate proper exception.

*/
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
    if(s.length()!=16 || s[0]!='5' || !(s[1]=='0' || s[1]=='1') || checksum(s)==false || (s[15]=='0' && s[14]=='0' && s[13]=='0' && s[12]=='0')){
        throw "The card is Not Valid and rejected!";
    }else
    {
        throw "The card is Valid and accepted!";
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