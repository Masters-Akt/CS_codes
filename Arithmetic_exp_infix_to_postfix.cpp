//Owner : Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

string convert_to_postfix(string s){
    stack<char> st;
    string ans="";
    for(int i=0; i<s.length(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        }else if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*' || s[i]=='^'){
            if(st.empty()){
                st.push(s[i]);
            }else if(st.top()=='('){
                st.push(s[i]);
            }else if(s[i]=='^'){
                st.push(s[i]);
            }else if(s[i]=='*'){
                if(st.top()=='/' || st.top()=='^'){
                    ans = ans + st.top();
                    st.pop();
                    st.push(s[i]);
                }else if(st.top()=='+' || st.top()=='-'){
                    st.push(s[i]);
                }
            }else if(s[i]=='/'){
                if(st.top()=='*' || st.top()=='^'){
                    ans = ans + st.top();
                    st.pop();
                    st.push(s[i]);
                }else if(st.top()=='+' || st.top()=='-'){
                    st.push(s[i]);
                }
            }else if(s[i]=='+'){
                ans = ans + st.top();
                st.pop();
                st.push(s[i]);
            }else if(s[i]=='-'){
                ans = ans + st.top();
                st.pop();
                st.push(s[i]);
            }
        }else if(s[i]==')'){
            while(st.top()!='('){
                ans = ans + st.top();
                st.pop();
            }
            st.pop();
        }else{
            ans = ans + s[i];
        }
        // cout<<"ans = "<<ans<<" ";
        // cout<<"stack ";
        // stack<char> st1;
        // while(st.empty()==false){
        //     cout<<st.top()<<" ";
        //     st1.push(st.top());
        //     st.pop();
        // }
        // cout<<endl;
        // while(st1.empty()==false){
        //     st.push(st1.top());
        //     st1.pop();
        // }
    }
    while(st.empty()==false){
        ans = ans + st.top();
        st.pop();
    }
    return ans;
}

int main(){
    string exp;
    cin>>exp;
    string ans = convert_to_postfix(exp);
    cout<<ans<<endl;
    return 0;
}

//Error : Last element not printing
//some minor error needs to be fixed