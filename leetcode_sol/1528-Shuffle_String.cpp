class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<pair<int, char>> m;
        for(int i=0;i<indices.size();i++){
            m.push_back({indices[i], s[i]});
        }
        sort(m.begin(), m.end());
        string ans = "";
        for(int i=0;i<m.size();i++){
            ans+=(m[i].second);
        }
        return ans;
    }
};