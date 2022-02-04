class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans = 0, sum = 0;
        unordered_map<int, int> m;
        m[0] = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]) sum++;
            else sum--;
            if(m.count(sum)) ans = max(ans, i-m[sum]);
            else m[sum] = i;
        }
        return ans;
    }
};