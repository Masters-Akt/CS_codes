class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int x: nums){
            m[x]++;
        }
        vector<int> ans(2, 0);
        for(auto x: m){
            if(x.second%2) ans[1]++;
            ans[0] += x.second/2;
        }
        return ans;
    }
};