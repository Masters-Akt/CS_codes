//Method 1 - Using sorting
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

//Method 2 - Moore's Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore's Voting Algorithm - O(N)
        int count = 0, candidate = 0;
        for(int num : nums){
            if(count==0) candidate = num;
            if(num==candidate) count++;
            else count--;
        }
        return candidate;
    }
};