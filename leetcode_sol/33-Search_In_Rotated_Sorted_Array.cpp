//O(logN)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        //finding the smallest element via binary search
        int high = nums.size()-1, low = 0;
        while(low<high){
            int mid = (low+high)/2;
            if(nums[mid]>nums[high]) low = mid+1;
            else high = mid;
        }
        int pivot = low;
        low = 0, high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            int realmid = (mid+pivot)%nums.size();
            if(nums[realmid]==target) return realmid;
            if(nums[realmid]<target) low = mid+1;
            else high = mid-1;
        }
        return -1;
    }
};