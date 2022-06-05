class Solution {
private:
    bool isValid(vector<string>& board, int row, int col){
        for(int i=row;i>=0;i--) if(board[i][col]=='Q') return false;
        for(int i=row, j=col;i>=0 && j>=0;i--, j--) if(board[i][j]=='Q') return false;
        for(int i=row, j=col;i>=0 && j<board.size();i--, j++) if(board[i][j]=='Q') return false;
        return true;
    }
    void dfs(vector<string>& board, int& ans, int row){
        if(row==board.size()){
            ans++;
            return;
        }
        for(int i=0;i<board.size();i++){
            if(isValid(board, row, i)){
                board[row][i] = 'Q';
                dfs(board, ans, row+1);
                board[row][i] = '.';
            }
        }
    }
public:
    int totalNQueens(int n) {
        int ans = 0;
        if(n<=0) return ans;
        vector<string> board(n, string(n, '.'));
        dfs(board, ans, 0);
        return ans;
    }
};