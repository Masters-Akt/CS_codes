class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char x;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
                continue;
            }
            if(st.empty()){
                return false;
            }
            x=st.top();
            st.pop();
            if(s[i]==')'){
                if(x=='{' || x=='['){
                    return false;
                }
            }
            else if(s[i]=='}'){
                if(x=='(' || x=='['){
                    return false;
                }
            }
            else{
                if(x=='(' || x=='{'){
                    return false;
                }
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};