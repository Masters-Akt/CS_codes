//M1 - DFS+Backtracking - TC = O(N.2^N)
class Solution {
private:
    bool check_palindrome(string& s, int start, int end){
        while(start<=end){
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
    void dfs(string& s, int start_index, vector<vector<string>>& ans, vector<string>& current){
        if(start_index>=s.size()) ans.push_back(current);
        for(int end_index=start_index;end_index<s.size();end_index++){
            if(check_palindrome(s, start_index, end_index)){
                current.push_back(s.substr(start_index, end_index-start_index+1));//consider this substring
                dfs(s, end_index+1, ans, current);//check for next
                current.pop_back();//if not found then remove prev substring as it wont make up the answer (backtracking)
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> current;
        dfs(s, 0, ans, current);
        return ans;
    }
};