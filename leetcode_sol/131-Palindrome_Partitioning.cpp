//M1 - DFS+Backtracking - TC = O(N.2^N) - SC = O(N)
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

//M2 - DP without backtracking - TC = O(N3)
//Approach: Start with last index of string, calc ans for it and store it.
//We create substring with each j and check if it is palindrome, we already know the ans for rest of substrings stored in dp array, hence no backtracking
class Solution {
private:
    bool check_palindrome(string& s){
        int start = 0, end = s.size()-1;
        while(start<=end){
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<vector<string>>> dp(s.size()+1);
        for(int i=s.size()-1;i>=0;i--){
            for(int j=i;j<s.size();j++){
                string temp_substr = s.substr(i, j-i+1);
                if(check_palindrome(temp_substr)){
                    vector<vector<string>> temp = dp[j+1];
                    if(temp.size()!=0){
                        for(int k=0;k<temp.size();k++){
                            temp[k].insert(temp[k].begin(), temp_substr);
                            dp[i].push_back(temp[k]);
                        }
                    }else dp[i].push_back({temp_substr});
                }
            }
        }
        return dp[0];
    }
};

//Same approach dp without backtracking but not using insert, instead reversing the required ans
class Solution {
private:
    bool check_palindrome(string& s){
        int start = 0, end = s.size()-1;
        while(start<=end){
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<vector<string>>> dp(s.size()+1);
        for(int i=s.size()-1;i>=0;i--){
            for(int j=i;j<s.size();j++){
                string temp_substr = s.substr(i, j-i+1);
                if(check_palindrome(temp_substr)){
                    vector<vector<string>> temp = dp[j+1];
                    if(temp.size()!=0){
                        for(int k=0;k<temp.size();k++){
                            temp[k].push_back(temp_substr);
                            dp[i].push_back(temp[k]);
                        }
                    }else dp[i].push_back({temp_substr});
                }
            }
        }
        for(int i=0;i<dp[0].size();i++) reverse(dp[0][i].begin(), dp[0][i].end());
        return dp[0];
    }
};