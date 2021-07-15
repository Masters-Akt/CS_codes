//Method 1 - Brute Force - O(N3)
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int c=0;
        for(int i=0; i<nums.size()-2; i++){
            for(int j=i+1; j<nums.size()-1; j++){
                for(int k=j+1; k<nums.size(); k++){
                    if(nums[i]+nums[j]>nums[k] && nums[i]+nums[k]>nums[j] && nums[j]+nums[k]>nums[i]) c++;
                }
            }
        }
        return c;
    }
};

//Method 2 - Binary Search
class Solution {
public:
    int binarySearch(vector<int> nums, int l, int r, int x){
        while(r>=l && r<nums.size()){
            int mid=(l+r)/2;
            if(nums[mid]>=x) r=mid-1;
            else l=mid+1;
        }
        return l;
    }
    
    int triangleNumber(vector<int>& nums) {
        int c=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++){
            int k=i+2;
            for(int j=i+1; j<nums.size()-1 && nums[i]!=0; j++){
                k=binarySearch(nums, k, nums.size()-1, nums[i]+nums[j]);
                c+=k-j-1;
            }
        }
        return c;
    }
};