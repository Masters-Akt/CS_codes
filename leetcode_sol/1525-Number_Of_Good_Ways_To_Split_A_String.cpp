class Solution {
public:
    int numSplits(string s) {
        set<char> st;
        int prefix[s.size()];
        int suffix[s.size()];
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);
            prefix[i] = st.size();
        }
        st.clear();
        for(int i=s.size()-1;i>=0;i--){
            st.insert(s[i]);
            suffix[i] = st.size();
        }
        int c = 0;
        for(int i=1;i<s.size();i++){
            if(prefix[i-1]==suffix[i]) c++;
        }
        return c;
    }
};