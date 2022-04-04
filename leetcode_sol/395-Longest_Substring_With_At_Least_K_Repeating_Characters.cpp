class Solution {
private:
    int solve(string s, int k, int start, int end){
        unordered_map<char, int> m;
        for(int i=start;i<=end;i++) m[s[i]]++;
        bool check = true;
        for(auto x: m){
            if(x.second<k){
                check = false;
                break;
            }
        }
        if(check) return 1+end-start;
        int ans = 0;
        int i=start;
        for(int j=start;j<=end;j++){
            if(m[s[j]] && m[s[j]]<k){
                ans = max(ans, solve(s, k, i, j-1));
                i++;
            }
        }
        return max(ans, solve(s, k, i, end));
    }
public:
    int longestSubstring(string s, int k) {
        int start = 0, end = s.size()-1;
        return solve(s, k, start, end);
    }
};