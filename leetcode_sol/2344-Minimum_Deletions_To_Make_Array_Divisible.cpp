class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int gcd = numsDivide[0];
        for(int i=1;i<numsDivide.size();i++){
            gcd = __gcd(gcd, numsDivide[i]);
        }
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(gcd%nums[i]==0) return i;
        }
        return -1;
    }
};