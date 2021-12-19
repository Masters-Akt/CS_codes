class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        vector<int> maxr(nums.size());
        maxr[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            maxr[i] = max(nums[i], maxr[i+1]);
        }
        for(int i=0;i<maxr.size();i++){
            cout<<maxr[i]<<" ";
        }
        int temp = 0, ans = 0;
        for(int i=0;i<nums.size();i++){
            if(temp<i && nums[temp]>maxr[i]) temp++;
            ans = max(ans, i-temp);
        }
        return ans;
    }
};