class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int x: nums) m[x]++;
        int ans = 0;
        for(auto x: m){
            if((!k && x.second>1) || (k && m.count(x.first+k))) ans++;
        }
        return ans;
    }
};