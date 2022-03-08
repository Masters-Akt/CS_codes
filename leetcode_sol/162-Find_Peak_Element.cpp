//O(N)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) return i;
        }
        return nums.size()-1;
    }
};

//O(logN)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        while(low<high){
            int mid1 = (low+high)/2, mid2 = mid1+1;
            if(nums[mid1]<nums[mid2]) low = mid2;
            else high = mid1;
        }
        return low;
    }
};