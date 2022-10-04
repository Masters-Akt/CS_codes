class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int, bool> m;
        for(int x: nums) m[x] = true;
        int ans = 0;
        for(int i=2;i<nums.size();i++) if(m[nums[i]-diff] && m[nums[i]-2*diff]) ans++;
        return ans;
    }
};