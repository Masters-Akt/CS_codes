class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> s = score;
        sort(s.begin(), s.end(), greater<int>());
        unordered_map<int , int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]] = i+1;
        }
        vector<string> ans;
        for(int x: score){
            if(m[x]==1) ans.push_back("Gold Medal");
            else if(m[x]==2) ans.push_back("Silver Medal");
            else if(m[x]==3) ans.push_back("Bronze Medal");
            else ans.push_back(to_string(m[x]));
        }
        return ans;
    }
};