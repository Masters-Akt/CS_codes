class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int m = INT_MAX;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            m = min(m,sum);
        }
        if(m>0) return 1;
        return m*(-1)+1;
    }
};