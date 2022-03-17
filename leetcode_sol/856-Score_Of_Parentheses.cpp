class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(0);
            }else{
                int x = st.top();
                st.pop();
                int ans = 0;
                if(x==0) ans = 1;
                else ans = x*2;
                st.top()+=ans;
            }
        }
        return st.top();
    }
};