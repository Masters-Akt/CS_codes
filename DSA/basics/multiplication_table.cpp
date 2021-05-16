//Kumar Ankit
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"Table of "<<n<<" is :\n";
    for(int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}