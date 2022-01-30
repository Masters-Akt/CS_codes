class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        map<int, bool> m;
        for(int i=0;i<nums.size();i++) m[nums[i]] = true;
        long long ans = original;
        while(m[ans]){
            ans*=2;
        }
        return (int)ans;
    }
};