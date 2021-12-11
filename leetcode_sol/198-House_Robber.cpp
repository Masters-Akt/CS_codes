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

//Memoization + Recursion DP - TC = O(N)
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

//Iterative 1-D DP
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+2, 0);
        dp[n] = dp[n+1] = 0;
        for(int i=n-1;i>=0;i--){
            dp[i] = max(nums[i]+dp[i+2], dp[i+1]);
        }
        return dp[0];
    }
};

//No space DP
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int adj = 0, nextadj = 0;
        for(int i=n-1;i>=0;i--){
            int curr = max(nums[i] + nextadj, adj);
            nextadj = adj;
            adj = curr;
        }
        return adj;
    }
};