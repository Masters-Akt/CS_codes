class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        if(nums.size()<=1) return true;
        int c = 0, ind = -1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>=nums[i]){
                c++;
                ind = i;
            }
        }
        if(c>1) return false;
        if(c==0) return true;
        else if(ind==nums.size()-1 || ind==1) return true;
        else if(nums[ind-1]<nums[ind+1]) return true;
        else if(nums[ind-2]<nums[ind]) return true;
        return false;
    }
};