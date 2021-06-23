class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int a[100]={0};
        for(int i=0;i<nums.size();i++){
            a[nums[i]-1]++;
        }
        int c = 0;
        for(int i=0;i<100;i++){
            if(a[i]==1) c+=(i+1);
        }
        return c;
    }
};