class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum1=0, sum2=0, index=0;
        for(int x: nums) sum1+=x;
        while(index!=nums.size()){
            sum1-=nums[index];
            if(sum1==sum2) return index;
            sum2+=nums[index];
            index++;
        }
        return -1;
    }
};