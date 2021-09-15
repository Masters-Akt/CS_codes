class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p = 0;
        for(int x: nums){
            if(p<2 || x>nums[p-2]) nums[p++] = x;
        }
        return p;
    }
};