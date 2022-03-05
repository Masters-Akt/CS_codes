class Solution {
public:
    int arraySign(vector<int>& nums) {
        bool check = true;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) return 0;
            if(nums[i]<0) check = !check;
        }
        if(check) return 1;
        return -1;
    }
};