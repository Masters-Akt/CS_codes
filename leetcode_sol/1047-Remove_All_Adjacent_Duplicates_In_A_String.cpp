class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(!st.empty()){
                char x = st.top();
                if(s[i]==x){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }else{
                st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty()){
            ans = st.top()+ans;
            st.pop();
        }
        return ans;
    }
};