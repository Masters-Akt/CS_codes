#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    stack<char> st;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='>'){
	            st.push('<');
	        }else if(s[i]=='<'){
	            st.push('>');
	        }else{
	            st.push('*');
	        }
	    }
	    int count = 0;
	    char x = st.top();
	    st.pop();
	    while(!st.empty()){
	        char y = st.top();
	        if(x=='<' && y=='>') count++;
	        x = y;
	        st.pop();
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
