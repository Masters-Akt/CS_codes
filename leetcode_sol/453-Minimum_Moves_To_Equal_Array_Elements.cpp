class Solution {
public:
    int minMoves(vector<int>& nums) {
        int d = 0;
        sort(nums.begin(), nums.end());
        for(int i=1;i<nums.size();i++){
            d+=(nums[i]-nums[0]);
        }
        return d;
    }
};