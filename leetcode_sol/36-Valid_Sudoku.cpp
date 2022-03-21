class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9]={0};
	    int cols[9][9]={0};
	    int blocks[3][3][9]={0};
	    for(int r=0;r<9;r++)
		    for(int c=0;c<9;c++)
			    if(board[r][c]!='.'){
				    int number=board[r][c]-'1';
				    if(rows[r][number]++) return 0;
				    if(cols[c][number]++) return 0;
				    if(blocks[r/3][c/3][number]++) return 0;
			    }
	    return 1;
    }
};