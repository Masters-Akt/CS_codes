//Using Sorting - O(nlogn)
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp = nums;
        sort(nums.begin(), nums.end());
        int p1=nums.size(), p2=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]!=nums[i]){
                p1 = min(p1, i);
                p2 = max(p2, i);
            }
        }
        if(p2-p1>=0) return p2-p1+1;
        return 0;
    }
};

//O(N)
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int beg=-1, end=-2, leftmax=nums[0], rightmin=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++){
            leftmax = max(leftmax, nums[i]);
            rightmin = min(rightmin, nums[nums.size()-i-1]);
            if(nums[i]<leftmax) end = i;
            if(nums[nums.size()-i-1]>rightmin) beg = nums.size()-i-1;
        }
        return end-beg+1;
    }
};