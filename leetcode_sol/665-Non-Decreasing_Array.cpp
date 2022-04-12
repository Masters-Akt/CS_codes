class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        bool allowed = true;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                if(!allowed) return false;
                allowed = false;
                if(i<2 || nums[i]>=nums[i-2]) nums[i-1] = nums[i];
                else nums[i] = nums[i-1];
            }
        }
        return true;
    }
};