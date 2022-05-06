class Solution {
public:
    string removeDuplicates(string s, int k) {
        if(s.size()<k) return s;
        stack<pair<char, int>> st;
        for(int i=0;i<s.size();i++){
            if(st.empty() || st.top().first!=s[i]) st.push({s[i], 1});
            else{
                auto x = st.top();
                st.pop();
                st.push({x.first, x.second+1});
            }
            if(st.top().second==k) st.pop();
        }
        string ans = "";
        while(!st.empty()){
            auto x = st.top();
            st.pop();
            while(x.second--) ans+=x.first;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};