class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int p=1, ans = 0;
        int i=0;
        for(int j=0;j<nums.size();j++){
            p*=nums[j];
            while(p>=k){
                p/=nums[i];
                i++;
            }
            ans+=(j-i+1);
        }
        return ans;
    }
};