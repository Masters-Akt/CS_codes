//Kumar Ankit
#include<iostream>
using namespace std;

int main(){
    int sidea, sideb, sidec;
    cout<<"Input sides: ";
    cin>>sidea>>sideb>>sidec;
    if(sidea==sideb && sideb==sidec){
        cout<<"Equilateral Triangle\n";
    }else if(sidea==sideb || sideb==sidec || sidea==sidec){
        cout<<"Isosceles Triangle\n";
    }else{
        cout<<"Scalene Triangle\n";
    }
    return 0;
}