class Solution {
private:
    int dp[1050][1050];
    bool solve(int n, int m, string &s, string &p){
        if(n<0 && m<0) return true;
        if(m<0) return false;
        if(n<0){
            for(int i=0;i<=m;i++) if(p[i]!='*') return false;
            return true;
        }
        if(dp[n][m]!=-1) return dp[n][m];
        bool ans = false;
        if(s[n]==p[m] || p[m]=='?') ans = ans | solve(n-1, m-1, s, p);
        else if(p[m]=='*'){
            ans = ans | solve(n-1, m, s, p);
            ans = ans | solve(n, m-1, s, p);
        }
        return dp[n][m] = ans;
    }
public:
    bool isMatch(string s, string p) {
        memset(dp, -1, sizeof(dp));
        return solve(s.size()-1, p.size()-1, s, p);
    }
};