class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum = 0;
        vector<int> r1, r2;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(nums[i]%3==1) r1.push_back(nums[i]);
            else if(nums[i]%3==2) r2.push_back(nums[i]);
        }
        if(sum%3==0) return sum;
        sort(r1.begin(), r1.end());
        sort(r2.begin(), r2.end());
        if(sum%3==1){
            if(r2.size()>=2){
                if(r2[0]+r2[1]<r1[0]){
                    return sum-r2[0]-r2[1];
                }
            }
            return sum-r1[0];
        }
        if(sum%3==2){
            if(r1.size()>=2){
                if(r1[0]+r1[1]<r2[0]){
                    return sum-r1[0]-r1[1];
                }
            }
            return sum-r2[0];
        }
        return sum;
    }
};