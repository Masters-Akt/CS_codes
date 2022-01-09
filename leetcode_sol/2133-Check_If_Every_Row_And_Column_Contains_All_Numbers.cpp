class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        vector<vector<int>> temp = matrix;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                temp[i][j] = matrix[j][i];
            }
        }
        for(int i=0;i<matrix.size();i++){
            sort(matrix[i].begin(), matrix[i].end());
            sort(temp[i].begin(), temp[i].end());
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]!=j+1) return false;
                if(temp[i][j]!=j+1) return false;
            }
        }
        return true;
    }
};