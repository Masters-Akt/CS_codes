//Using Recursion - Take or not take - TLE - O(2^n)
class Solution {
private:
    int recfunc(int ind, vector<int>& nums){
        if(ind>=nums.size()) return 0;
        //steal
        int steal = nums[ind] + recfunc(ind+2, nums);
        //not steal
        int notsteal = recfunc(ind+1, nums);
        return max(steal, notsteal);
    }
public:
    int rob(vector<int>& nums) {
        return recfunc(0, nums);
    }
};

//Memoization DP
class Solution {
private:
    int recfunc(int ind, vector<int>& nums, vector<int>& dp){
        if(ind>=nums.size()) return 0;
        if(dp[ind]!=-1) return dp[ind];
        //steal
        int steal = nums[ind] + recfunc(ind+2, nums, dp);
        //not steal
        int notsteal = recfunc(ind+1, nums, dp);
        return dp[ind] = max(steal, notsteal);
    }
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return recfunc(0, nums, dp);
    }
};