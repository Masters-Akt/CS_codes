//M1
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

//M2
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minNum = nums[0], sum = nums[0];
        for(int i=1;i<nums.size();i++){
            minNum = min(minNum, nums[i]);
            sum+=nums[i];
        }
        return sum-(nums.size()*minNum);
    }
};