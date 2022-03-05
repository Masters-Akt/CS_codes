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