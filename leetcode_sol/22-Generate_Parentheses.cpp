class Solution {
private:
    void solve(vector<string>& ans, string temp, int open, int close, int n){
        if(temp.size()==n*2){
            ans.push_back(temp);
            return;
        }
        if(open<n) solve(ans, temp+"(", open+1, close, n);
        if(close<open) solve(ans, temp+")", open , close+1, n);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(ans, "", 0, 0, n);
        return ans;
    }
};