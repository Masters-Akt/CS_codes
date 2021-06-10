class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int l = 0, h = s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='I') ans.push_back(l++);
            else ans.push_back(h--);
        }
        ans.push_back(l);
        return ans;
    }
};