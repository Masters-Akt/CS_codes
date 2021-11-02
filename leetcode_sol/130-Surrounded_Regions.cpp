class Solution {
public:
    void solve(vector<vector<char>>& board) {
        vector<vector<bool>> check(board.size(), vector<bool>(board[0].size(), true));
        int i=0, j=0;
        queue<pair<int, int>> q;
        while(j<board[0].size()){
            if(board[i][j]=='O'){
                q.push({i, j});
            }
            j++;
        }
        i=1, j=0;
        while(i<board.size()){
            if(board[i][j]=='O'){
                q.push({i, j});
            }
            i++;
        }
        i=board.size()-1, j=1;
        while(j<board[0].size()){
            if(board[i][j]=='O'){
                q.push({i, j});
            }
            j++;
        }
        i=1, j=board[0].size()-1;
        while(i<board.size()){
            if(board[i][j]=='O'){
                q.push({i, j});
            }
            i++;
        }
        while(!q.empty()){
            pair<int, int> p = q.front();
            q.pop();
            if(!check[p.first][p.second]) continue;
            check[p.first][p.second] = false;
            int x = p.first+1;
            int y = p.second;
            if(x<board.size() && board[x][y]=='O') q.push({x, y});
            x-=2;
            if(x>=0 && board[x][y]=='O') q.push({x, y});
            x++;
            y--;
            if(y>=0 && board[x][y]=='O') q.push({x, y});
            y+=2;
            if(y<board[0].size() && board[x][y]=='O') q.push({x, y});
        }
        for(int i=0;i<check.size();i++){
            for(int j=0;j<check[0].size();j++){
                if(check[i][j]) board[i][j] = 'X';
                else board[i][j] = 'O';
            }
        }
    }
};