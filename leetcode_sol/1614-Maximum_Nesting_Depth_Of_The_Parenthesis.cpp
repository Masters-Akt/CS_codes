class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int c = 0, m = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                c++;
                st.push(s[i]);
            }else if(s[i]==')'){
                m = max(m, c);
                c--;
                st.pop();
            }
        }
        return max(m, c);
    }
};