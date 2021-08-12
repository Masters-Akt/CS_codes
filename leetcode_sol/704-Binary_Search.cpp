//Iterative way
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

//Recursive way
class Solution {
public:
    int bsearch(vector<int> nums, int l, int r, int t){
        if(l>r) return -1;
        int mid = (l+r)/2;
        if(nums[mid]==t) return mid;
        if(t<nums[mid]) return bsearch(nums, l, mid-1, t);
        return bsearch(nums, mid+1, r, t);   
    }
    
    int search(vector<int>& nums, int target) {
        return bsearch(nums, 0, nums.size()-1, target);
    }
};