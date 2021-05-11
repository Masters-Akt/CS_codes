class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0;i<A.size();i++){
            for(int j=0;j<A[i].size()/2;j++){
                int temp=A[i][j];
                A[i][j]=A[i][A[i].size()-j-1];
                A[i][A[i].size()-j-1]=temp;
            }
        }
        for(int i=0;i<A.size();i++){
            for(int j=0;j<A[i].size();j++){
                if(A[i][j]==0){
                    A[i][j]=1;
                }
                else{
                    A[i][j]=0;
                }
            }
        }
        return A;
    }
};