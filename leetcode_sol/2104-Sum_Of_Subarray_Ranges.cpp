class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans = 0;
        for(int i=0;i<nums.size();i++){
            int smallest = INT_MAX, largest = INT_MIN;
            for(int j=i;j<nums.size();j++){
                smallest = min(smallest, nums[j]);
                largest = max(largest, nums[j]);
                ans+=(largest-smallest);
            }
        }
        return ans;
    }
};