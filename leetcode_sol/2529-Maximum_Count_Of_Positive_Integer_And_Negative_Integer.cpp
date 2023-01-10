class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int posCount = 0, negCount = 0;
        for(int x: nums){
            if(x<0) negCount++;
            else if(x>0) posCount++;
        }
        return max(posCount, negCount);
    }
};