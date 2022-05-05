class Solution {
public:
    long long appealSum(string s) {
        vector<int> last(26, 0);
        long long ans = 0;
        int n = s.size();
        for(int i=0;i<n;i++){
            last[s[i]-'a']=i+1;
            for(int j: last) ans+=j;
        }
        return ans;
    }
};