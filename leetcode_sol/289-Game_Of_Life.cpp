class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        const int m = board.size(), n = board[0].size();
        vector<vector<int>> ans = board;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int count = 0;
                if(i+1<m && board[i+1][j]) count++;
                if(j+1<n && board[i][j+1]) count++;
                if(i-1>=0 && board[i-1][j]) count++;
                if(j-1>=0 && board[i][j-1]) count++;
                if(i-1>=0 && j-1>=0 && board[i-1][j-1]) count++;
                if(i+1<m && j+1<n && board[i+1][j+1]) count++;
                if(i+1<m && j-1>=0 && board[i+1][j-1]) count++;
                if(i-1>=0 && j+1<n && board[i-1][j+1]) count++;
                if(board[i][j]){
                    if(count<2 || count>3) ans[i][j]=0;
                }else{
                    if(count==3) ans[i][j] = 1;
                }
            }
        }
        board = ans;
    }
};