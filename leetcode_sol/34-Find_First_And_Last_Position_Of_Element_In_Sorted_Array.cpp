//O(N)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        bool ch = false;
        int ind=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(!ch){
                    ch = true;
                    ans.push_back(i);   
                }else{
                    ind = i;    
                }
            }
        }
        if(!ch){
            ans.push_back(-1);
            ans.push_back(-1);
        }else{
            if(ind==-1){
                ans.push_back(ans[0]);
            }else{
                ans.push_back(ind);
            }
        }
        return ans;
    }
};

//O(logN)
class Solution {
private:
    int find_first(vector<int>& nums, int target){
        int ans = -1, start = 0, end = nums.size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]>=target) end = mid-1;
            else start = mid+1;
            if(nums[mid]==target) ans = mid;
        }
        return ans;
    }
    int find_last(vector<int>& nums, int target){
        int ans = -1, start = 0, end = nums.size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]<=target) start = mid+1;
            else end = mid-1;
            if(nums[mid]==target) ans = mid;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = find_first(nums, target);
        int last = find_last(nums, target);
        return {first, last};
    }
};