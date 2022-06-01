//O(N)
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

//O(N) more short
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum(nums.size());
        sum[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            sum[i] = nums[i]+sum[i-1];
        }
        return sum;
    }
};