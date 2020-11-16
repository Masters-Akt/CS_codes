//Kumar Ankit
#include<iostream>
using namespace std;

int main(){
    cout<<"Enter three numbers : ";
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"The largest is "<<a<<endl;
        }else{
            cout<<"The largest is "<<c<<endl;
        }
    }else{
        if(b>c){
            cout<<"The largest is "<<b<<endl;
        }else{
            cout<<"The largest is "<<c<<endl;
        }
    }
    return 0;
}