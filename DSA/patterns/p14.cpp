//Zig-Zag Pattern in 3 rows
/*
For n=9
    *       * 
  *   *   *   * 
*       *       * 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(i==2 && j%4==0){
                cout<<"* ";
            }else if((i+j)%4==0){
                cout<<"* ";
            }else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}