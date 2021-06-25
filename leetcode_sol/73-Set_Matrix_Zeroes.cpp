//Method 1
//with using two arrays
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row(matrix.size());
        vector<int> col(matrix[0].size());
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(row[i]==1 || col[j]==1) matrix[i][j]=0;
            }
        }
    }
};

//Method 2
//without using any space
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool col0 = true;
        int row = matrix.size(), col = matrix[0].size();
        for(int i=0;i<row;i++){
            if(matrix[i][0]==0) col0 = false;
            for(int j=1;j<col;j++){
                if(matrix[i][j]==0) matrix[i][0] = matrix[0][j] = 0;
            }
        }
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j] = 0;
            }
            if(!col0) matrix[i][0] = 0;
        }
    }
};