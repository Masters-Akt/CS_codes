//Method 1 - Brute Force - TLE
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        //Brute-Force
        int c = 0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if((long long int)nums[i]>2*(long long int)nums[j]) c++;
            }
        }
        return c;
    }
};