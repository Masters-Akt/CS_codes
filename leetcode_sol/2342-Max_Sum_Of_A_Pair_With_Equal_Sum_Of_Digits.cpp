class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> m;
        for(int x: nums){
            int sum = 0, temp = x;
            while(temp){
                sum+=temp%10;
                temp/=10;
            }
            if(m[sum]){
                ans = max(ans, x+m[sum]);
                m[sum] = max(m[sum], x);
            }else m[sum] = x;
        }
        return ans==0?-1:ans;
    }
};