//M1
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int a[n+1];
        for(int i=0;i<n+1;i++) a[i]=0;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        for(int i=0;i<n+1;i++){
            if(a[i]==0) return i;
        }
        return -1;
    }
};

//M2 - XOR
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xo = 0;
        for(int i=0;i<=nums.size();i++) xo^=i;
        for(int x: nums) xo^=x;
        return xo;
    }
};