#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int a[26]={0};
	    for(int i=0;i<s.length();i++){
	        a[(int)s[i]-97]++;
	    }
	    int n2=0;
	    for(int i=0;i<26;i++){
	        n2+=(a[i]/2);
	        //cout<<a[i]<<" ";
	    }
	    //cout<<endl<<"n2 = "<<n2<<endl;
	    int n1=s.length()-n2*2;
	    //cout<<"n1 = "<<n1<<endl;
	    //cout<<"ans = "<<ans<<endl;
	    int total = floor(s.length()/3);
	    //cout<<"total = "<<total<<" ans = "<<ans<<endl;
	    if(total<n2){
	        cout<<total<<"\n";
	    }else{
	        cout<<n2<<"\n";
	    }
	}
	return 0;
}
