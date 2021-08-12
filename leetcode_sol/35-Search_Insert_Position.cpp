class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==target) return mid;
            if(target>nums[mid]){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        return l;
    }
};