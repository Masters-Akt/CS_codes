class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        if(k==0) return nums[0];
        if(k==1){
            if(nums.size()==1) return -1;
            return nums[1];
        }
        if(nums.size()==1){
            if(k%2==0) return nums[0];
            return -1;
        }
        if(k>nums.size()){
            return *max_element(nums.begin(), nums.end());
        }
        int next = -1;
        if(k<nums.size()) next = nums[k];
        int m = -1;
        for(int i=0;i<k-1;i++) m=max(m, nums[i]);
        return max(next, m);
    }
};