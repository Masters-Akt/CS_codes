//Hollow Rectangle Patterns
/*
* * * * *
*       *
*       *
*       *
* * * * *
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of cols : ";
    cin>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==m-1 || j==0 || j==n-1) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}