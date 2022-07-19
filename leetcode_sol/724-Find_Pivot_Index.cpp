class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefixSum(nums.size()), suffixSum(nums.size());
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            prefixSum[i] = sum;
            sum+=nums[i];
        }
        sum = 0;
        for(int i=nums.size()-1;i>=0;i--){
            suffixSum[i] = sum;
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(prefixSum[i]==suffixSum[i]) return i;
        }
        return -1;
    }
};