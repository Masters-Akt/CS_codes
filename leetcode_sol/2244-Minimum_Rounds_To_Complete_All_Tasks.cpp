class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> m;
        for(int x: tasks) m[x]++;
        int ans = 0;
        for(auto x: m){
            if(x.second==1) return -1;
            ans+=(x.second+2)/3;
        }
        return ans;
    }
};