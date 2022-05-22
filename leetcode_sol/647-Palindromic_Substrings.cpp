class Solution {
private:
    int solve(string& s, int i, int j){
        if(i>=j) return 1;
        return s[i]==s[j] ? solve(s,i+1,j-1) : 0;
    }
public:
    int countSubstrings(string s) {
        int ans = 0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                ans+=solve(s,i,j);
            }
        }
        return ans;
    }
};