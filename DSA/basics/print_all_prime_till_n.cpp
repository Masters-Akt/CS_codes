//Kumar Ankit
#include<iostream>
using namespace std;

int main(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    int num = 2;
    while(num<=n){
        int div = 2;
        while(div<num){
            if(num%div==0) num++;
            else div++;
        }
        if(num<=n)
        cout<<num<<" ";
        num++;
    }
    return 0;
}