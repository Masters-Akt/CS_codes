//Method - TC = O(N) SC = O(1)
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) if(nums[i]<=0) nums[i] = nums.size()+1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                if(nums[i]<=nums.size() && nums[nums[i]-1]>0){
                    nums[nums[i]-1]*=-1;
                }
            }else if(nums[i]<0){
                if(nums[i]*-1<=nums.size() && nums[nums[i]*-1 - 1]>0) nums[nums[i]*-1 - 1]*=-1;
            }
        }
        for(int i=0;i<nums.size();i++) if(nums[i]>0) return i+1;
        return nums.size()+1;
    }
};