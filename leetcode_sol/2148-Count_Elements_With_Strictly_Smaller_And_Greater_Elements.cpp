class Solution {
public:
    int countElements(vector<int>& nums) {
        int l=INT_MAX, h=INT_MIN;
        for(auto x: nums){
            l = min(l, x);
            h = max(h, x);
        }
        int ans = 0;
        for(auto x:nums){
            if(x>l && x<h) ans++;
        }
        return ans;
    }
};