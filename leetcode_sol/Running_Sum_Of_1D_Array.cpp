class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int s=0;
        for(int i=0;i<nums.size();i++){
            s=s+nums[i];
            sum.push_back(s);
        }
        return sum;
    }
};