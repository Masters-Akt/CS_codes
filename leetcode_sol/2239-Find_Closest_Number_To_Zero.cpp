class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = INT_MAX, ans2;
        for(int x: nums){
            if(ans>=abs(x)){
                ans = abs(x);
                ans2 = x;
            }
        }
        return ans2;
    }
};