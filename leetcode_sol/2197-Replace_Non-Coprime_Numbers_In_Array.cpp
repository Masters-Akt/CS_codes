class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
            while(ans.size()>1 && __gcd(ans.back(), ans[ans.size()-2])>1){
                long long a = ans.back(), b = ans[ans.size()-2], g = __gcd(a, b);
                ans.pop_back();
                ans.pop_back();
                ans.push_back(a*b/g);
            }
        }
        return ans;
    }
};