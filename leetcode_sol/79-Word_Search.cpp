class Solution {
private:
    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int index){
        if(index+1==word.size()) return true;
        index++;
        vector<int> dir = {0, 1, 0, -1, 0};
        for(int p=0;p<4;p++){
            int xi = i+dir[p];
            int xj = j+dir[p+1];
            if(xi>=0 && xj>=0 && xi<board.size() && xj<board[0].size() && board[xi][xj]==word[index]){
                board[xi][xj] = '@';
                bool check = dfs(board, word, xi, xj, index);
                if(check) return check;
                board[xi][xj] = word[index];
            }
        }
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]==word[0]){
                    board[i][j] = '@';
                    bool check = dfs(board, word, i, j, 0);
                    if(check) return check;
                    board[i][j] = word[0];
                }
            }
        }
        return false;
    }
};