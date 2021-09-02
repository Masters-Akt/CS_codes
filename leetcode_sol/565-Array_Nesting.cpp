class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        vector<int> vis(nums.size(), false);
        int res = 0;
        for(int i=0;i<nums.size();i++){
            if(!vis[i]){
                int s = nums[i], c = 0;
                do{
                    s = nums[s];
                    c++;
                    vis[s] = true;
                }while(s!=nums[i]);
                res = max(res, c);
            }
        }
        return res;
    }
};