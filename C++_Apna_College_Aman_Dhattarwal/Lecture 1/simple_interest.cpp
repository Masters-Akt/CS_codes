//Kumar Ankit
#include<iostream>
using namespace std;

int main(){
    int p,r,t;
    cout<<"Enter principal , rate of interest and time : ";
    cin>>p>>r>>t;
    cout<<"Simple Interest = "<<(p*r*t)/100<<endl;
    cout<<"Amount = "<<p+(p*r*t)/100<<endl;
    return 0;
}