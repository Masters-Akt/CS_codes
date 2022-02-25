class Solution {
private:
    void solve(string s, vector<string>& ans, int index, string temp){
        if(index==s.size()){
            ans.push_back(temp);
            return;
        }
        if(isdigit(s[index])){
            temp+=s[index];
            solve(s, ans, index+1, temp);
            temp.pop_back();
        }else{
            temp+=tolower(s[index]);
            solve(s, ans, index+1, temp);
            temp.pop_back();
            temp+=toupper(s[index]);
            solve(s, ans, index+1, temp);
            temp.pop_back();    
        }
    }
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        solve(s, ans, 0, "");
        return ans;
    }
};