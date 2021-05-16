//Rectangular Pattern
/*
* * * * *
* * * * *
* * * * *
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter height : ";
    int m;
    cin>>m;
    cout<<"Enter width : ";
    int n;
    cin>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}