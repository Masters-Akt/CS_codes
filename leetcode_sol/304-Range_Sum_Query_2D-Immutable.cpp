//Method 1 - Brute Force - O(M*N) - TLE

class NumMatrix {
public:
    vector<vector<int>> m;
    NumMatrix(vector<vector<int>>& matrix) {
        m = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int i=row1;i<=row2;i++){
            for(int j=col1;j<=col2;j++){
                sum+=m[i][j];
            }
        }
        return sum;
    }
};

//M2 - Using Row as Prefix sum - TC=O(m)
class NumMatrix {
private:
    vector<vector<int>> mat;
public:
    NumMatrix(vector<vector<int>>& matrix) {
       int m = matrix.size(), n = matrix[0].size();
        for(int i=0;i<m;i++){
            vector<int> row(n);
            row[0] = matrix[i][0];
            for(int j=1;j<n;j++){
                row[j] = row[j-1] + matrix[i][j];
            }
            mat.push_back(row);
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0, minus = 0;
        for(int i=row1;i<=row2;i++){
            sum += mat[i][col2];
            if(col1>0) minus += mat[i][col1-1];
        }
        return sum - minus;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */