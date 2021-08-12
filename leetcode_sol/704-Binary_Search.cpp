class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid, l=0, r=nums.size()-1;
        while(l<=r){
            mid = (l+r)/2;
            if(nums[mid]==target) return mid;
            if(target<nums[mid]) r = mid-1;
            else l = mid+1;
        }
        return -1;
    }
};