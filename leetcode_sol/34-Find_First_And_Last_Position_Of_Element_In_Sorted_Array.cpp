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