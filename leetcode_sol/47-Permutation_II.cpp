class Solution {
private:
    void solve(vector<int>& temp, vector<vector<int>>& ans, map<int, int>& m, int s){
        if(s==0){
            ans.push_back(temp);
            return;
        }
        for(auto &x: m){
            if(x.second==0) continue;
            x.second--;
            temp.push_back(x.first);
            solve(temp, ans, m, s-1);
            temp.pop_back();
            x.second++;
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        map<int, int> m;
        for(int x: nums){
            if(m.find(x)==m.end()) m[x] = 0;
            m[x]++;
        }
        solve(temp, ans, m, nums.size());
        return ans;
    }
};