class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int ans = 0, sum = 0;
        for(int x : nums){
            sum+=x;
            int r = sum%k;
            if(r<0) r+=k;
            if(r==0) ans++;
            if(m.find(r)!=m.end()) ans+=m[r];
            m[r]++;
        }
        return ans;
    }
};