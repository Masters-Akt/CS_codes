class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int m=0,c=1,n=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) c++;
            else{
                if(c>m){
                n=nums[i-1];
                m=max(m,c);
                }
                c=1;
            }
        }
        if(c>m){
            n=nums[nums.size()-1];
        }
        return n;
    }
};