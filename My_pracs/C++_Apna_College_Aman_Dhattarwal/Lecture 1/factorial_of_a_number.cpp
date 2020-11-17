//Kumar Ankit
#include<iostream>
using namespace std;

int main(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    int fact = 1;
    while(n>0){
        fact=fact*n;
        n--;
    }
    cout<<"Factorial = "<<fact<<endl;
    return 0;
}