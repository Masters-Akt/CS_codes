class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int ans = 0;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            ans+=(i*nums[i]);
        }
        int res = ans;
        for(int i=nums.size()-1;i>=1;i--){
            int temp = ans+(sum-nums[i]*nums.size());
            ans = temp;
            res = max(res, ans);
        }
        return res;
    }
};