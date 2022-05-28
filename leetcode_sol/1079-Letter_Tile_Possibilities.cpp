class Solution {
private:
    void solve(vector<int> letters, int& answer){
        for(int i=0;i<26;i++){
            if(letters[i]){
                answer++;
                letters[i]--;
                solve(letters, answer);
                letters[i]++;
            }
        }
    }
public:
    int numTilePossibilities(string tiles) {
        vector<int> letters(26, 0);
        for(char &x: tiles) letters[x-'A']++;
        int answer = 0;
        solve(letters, answer);
        return answer;
    }
};