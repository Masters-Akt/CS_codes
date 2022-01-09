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