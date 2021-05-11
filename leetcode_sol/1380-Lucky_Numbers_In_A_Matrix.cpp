class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int i=0;i<matrix.size();i++){
            int min = matrix[i][0];
            int index_of_min=0;
            for(int j=1;j<matrix[i].size();j++){
                if(matrix[i][j]<min){
                    min=matrix[i][j];
                    index_of_min=j;
                }
            }
            bool ch=true;
            for(int j=0;j<matrix.size();j++){
                if(matrix[j][index_of_min]>min){
                    ch=false;
                    break;
                }
            }
            if(ch==true){
                ans.push_back(min);
            }
        }
        return ans;
    }
};