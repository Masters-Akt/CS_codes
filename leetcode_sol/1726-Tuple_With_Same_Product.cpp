class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                int p = nums[i]*nums[j];
                ans+=(8*m[p]);
                m[p]++;
            }
        }
        return ans;
    }
};
