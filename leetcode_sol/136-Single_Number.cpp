//O(nlogn)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        sort(nums.begin(), nums.end());
        for(int i=1;i<nums.size();i+=2){
            if(nums[i]!=nums[i-1]) return nums[i-1];
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2]) return nums[nums.size()-1];
        return 0;
    }
};

//O(n)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xo = 0;
        for(int x: nums) xo^=x;
        return xo;
    }
};