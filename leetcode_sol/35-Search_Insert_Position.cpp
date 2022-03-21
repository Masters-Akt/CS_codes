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

//Same
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        while(low<=high){
            int mid = (high+low)/2;
            if(target>nums[mid]) low = mid+1;
            else high = mid-1;
        }
        return low;
    }
};