//Using Recursion - Take or not take - TLE
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