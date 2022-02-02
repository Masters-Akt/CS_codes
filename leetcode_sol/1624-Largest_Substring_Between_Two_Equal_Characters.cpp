class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<vector<int>> m(26);
        for(int i=0;i<s.size();i++){
            m[s[i]-'a'].push_back(i);
        }
        int ans = -1;
        for(int i=0;i<26;i++){
            if(m[i].size()>1){
                ans = max(ans, m[i][m[i].size()-1]-m[i][0]-1);
            }
        }
        return ans;
    }
};