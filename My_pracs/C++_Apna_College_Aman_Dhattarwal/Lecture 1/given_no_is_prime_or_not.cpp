//Kumar Ankit
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int div = 2;
    bool ch = false;
    while(div<n){
        if(n%div==0){
            cout<<"Not Prime!"<<endl;
            ch = true;
            break;
        }else{
            div++;
        }
    }
    if(!ch){
        cout<<"Prime!"<<endl;
    }
    return 0;
}