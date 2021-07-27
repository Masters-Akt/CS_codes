class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int c = 0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]=='X'){
                    c++;
                    board[i][j] = '.';
                    if(j!=board[i].size()-1 && board[i][j+1]=='X'){
                        int k = j+1;
                        while(k<board[i].size() && board[i][k]=='X'){
                            board[i][k] = '.';
                            k++;
                        }
                    }else if(i!=board.size()-1 && board[i+1][j]=='X'){
                        int k = i+1;
                        while(k<board.size() && board[k][j]=='X'){
                            board[k][j] = '.';
                            k++;
                        }
                    }
                }
            }
        }
        return c;
    }
};