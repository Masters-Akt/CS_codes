//Brute Force Recursion - TLE - O(2^N)
class Solution {
private:
    int solve(string& word1, string& word2, int i, int j){
        if(i==word1.size()) return word2.size()-j;
        if(j==word2.size()) return word1.size()-i;
        if(word1[i]==word2[j]) return solve(word1, word2, i+1, j+1);
        int insert = solve(word1, word2, i, j+1);
        int remove = solve(word1, word2, i+1, j);
        int replace = solve(word1, word2, i+1, j+1);
        return 1+min({insert, remove, replace});
    }
public:
    int minDistance(string word1, string word2) {
        return solve(word1, word2, 0, 0);
    }
};

//Memoization - DP
class Solution {
private:
    int solve(string& word1, string& word2, int i, int j, vector<vector<int>>& dp){
        if(i==word1.size()) return word2.size()-j;
        if(j==word2.size()) return word1.size()-i;
        if(dp[i][j]!=-1) return dp[i][j];
        if(word1[i]==word2[j]) return dp[i][j] = solve(word1, word2, i+1, j+1, dp);
        int insert = solve(word1, word2, i, j+1, dp);
        int remove = solve(word1, word2, i+1, j, dp);
        int replace = solve(word1, word2, i+1, j+1, dp);
        return dp[i][j] = 1+min({insert, remove, replace});
    }
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.size(), vector<int>(word2.size(), -1));
        return solve(word1, word2, 0, 0, dp);
    }
};