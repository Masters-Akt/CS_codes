//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

int first_try(int a, int b, int c){
    if(a>b){
        if(b>c) return c;
        if(c>a) return a;
        return b;
    }else{
        if(a>c) return c;
        if(c>b) return b;
        return a;
    }
}

int main(){
    int a=1, b=2, c=3;
    cout<<"Getting middle element:\n";
    cout<<first_try(a, b, c);
    return 0;
}