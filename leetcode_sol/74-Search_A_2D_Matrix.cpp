//Method 1 - pointer approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0, j = matrix[0].size()-1;
        while(i<matrix.size() && j>=0){
            if(matrix[i][j]==target) return true;
            if(matrix[i][j]>target) j--;
            else i++;
        }
        return false;
    }
};

//Method 2 - Binary Search concept
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
        int low = 0, high = matrix.size()*matrix[0].size()-1;
        while(low<=high){
            int mid = (low+(high-low)/2);
            if(matrix[mid/(matrix[0].size())][mid%(matrix[0].size())] == target) return true;
            if(matrix[(mid/matrix[0].size())][(mid%matrix[0].size())] < target) low = mid+1;
            else high = mid-1;
        }
        return false;
    }
};