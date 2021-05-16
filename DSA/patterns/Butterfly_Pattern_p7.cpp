//Butterfly Pattern
/*
For n=4
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if(j<=i || j>=2*n-i+1) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=2*n;j++){
            if(j<=i || j>=2*n-i+1) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

/*
Method 2

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    int space = 2*n - 2*i;
    for(int j=1;j<=space;j++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
}
*/