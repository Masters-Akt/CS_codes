class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_set<int> s;
        unordered_map<int, int> m;
        for(int i=0;i<matches.size();i++){
            s.insert(matches[i][0]);
            s.insert(matches[i][1]);
            m[matches[i][1]]++;
        }
        vector<vector<int>> ans(2);
        for(auto x=s.begin(); x!=s.end(); x++){
            if(m[*x]==0) ans[0].push_back(*x);
            else if(m[*x]==1) ans[1].push_back(*x);
        }
        sort(ans[0].begin(), ans[0].end());
        sort(ans[1].begin(), ans[1].end());
        return ans;
    }
};