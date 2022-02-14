class Solution {
private:
    bool checkPalindrome(string& s){
        int i=0, j=s.size()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }else return false;
        }
        return true;
    }
    void solve(string& s, string& s1, string& s2, int index, int& ans){
        if(index==s.size()){
            if(checkPalindrome(s1) && checkPalindrome(s2)){
                ans = max(ans, (int)s1.size()*(int)s2.size());
            }
            return;
        }
        s1+=s[index];
        solve(s, s1, s2, index+1, ans);
        s1.pop_back();
        s2+=s[index];
        solve(s, s1, s2, index+1, ans);
        s2.pop_back();
        solve(s, s1, s2, index+1, ans);
    }
public:
    int maxProduct(string s) {
        string s1="", s2="";
        int ans = 0;
        solve(s, s1, s2, 0, ans);
        return ans;
    }
};