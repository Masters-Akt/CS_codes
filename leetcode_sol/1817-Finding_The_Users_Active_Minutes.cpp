class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> ans(k,0);
        unordered_map<int, unordered_set<int>> m;
        for(auto x: logs){
            m[x[0]].insert(x[1]);
        }
        for(auto x: m){
            ans[x.second.size()-1]++;
        }
        return ans;
    }
};