//Kumar Ankit
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
     string s1,s2;
     cin>>s1>>s2;
     cout<<s1.size();
     cout<<" ";
     cout<<s2.size()<<endl;
     cout<<s1+s2<<endl;
     char c0=s1[0];
     char c1=s2[0];
     s1[0]=c1;
     s2[0]=c0;
     cout<<s1+" "+s2;
    return 0;
}

