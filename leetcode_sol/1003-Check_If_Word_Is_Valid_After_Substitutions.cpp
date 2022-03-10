class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='c'){
                if(st.size()<2) return false;
                if(st.top()!='b') return false;
                st.pop();
                if(st.top()!='a') return false;
                st.pop();
            }else st.push(s[i]);
        }
        return st.size()==0;
    }
};