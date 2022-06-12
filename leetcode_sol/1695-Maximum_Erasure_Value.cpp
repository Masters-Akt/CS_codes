class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> s;
        for(int i=0, j=0, win=0; j<nums.size(); j++){
            while(s.find(nums[j])!=s.end()){
                s.erase(nums[i]);
                win-=nums[i];
                i++;
            }
            s.insert(nums[j]);
            win+=nums[j];
            ans = max(ans, win);
        }
        return ans;
    }
};