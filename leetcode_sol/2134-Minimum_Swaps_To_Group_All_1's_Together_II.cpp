class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int ones = 0;
        for(int x: nums){
            if(x) ones++;
        }
        int m = 0;
        for(int i=0;i<ones;i++){
            if(nums[i]) m++;
        }
        int mx = m;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]) m--;
            if(nums[(i-1+ones)%nums.size()]) m++;
            mx = max(mx, m);
        }
        return ones-mx;
    }
};