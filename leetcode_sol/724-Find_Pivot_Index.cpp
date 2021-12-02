class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int f[nums.size()], b[nums.size()];
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            f[i] = sum;
            sum+=nums[i];
        }
        sum = 0;
        for(int i=nums.size()-1;i>=0;i--){
            b[i] = sum;
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(f[i]==b[i]) return i;
        }
        return -1;
    }
};