class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Step 1 - Transpose
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //Step 2 - Reverse each row
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};