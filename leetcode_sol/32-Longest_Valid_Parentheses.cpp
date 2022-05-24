class Solution {
public:
    int longestValidParentheses(string s) {
        int ans = 0;
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(i);
            else{
                if(!st.empty()){
                    if(s[st.top()]=='(') st.pop();
                    else st.push(i);
                }else st.push(i);
            }
        }
        if(st.empty()) ans = s.size();
        else{
            int i = s.size(), j = 0;
            while(!st.empty()){
                j = st.top();
                st.pop();
                ans = max(ans, i-j-1);
                i = j;
            }
            ans = max(ans, i);
        }
        return ans;
    }
};