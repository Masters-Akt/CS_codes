class Solution {
private:
    int ans = INT_MIN;
    void updateResult(vector<int>& nums, int k){
        int s=0;
        set<int> sortedSum;
        set<int>::iterator it;
        sortedSum.insert(0);
        for(int& num: nums){
            s+=num;
            it=sortedSum.lower_bound(s-k);
            if(it!=sortedSum.end()) ans = max(ans, s - *it);
            sortedSum.insert(s);
        }
    }
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        vector<int> rowSum(matrix[0].size());
        for(int i=0;i<matrix.size();i++){
            fill(rowSum.begin(), rowSum.end(), 0);
            for(int row=i;row<matrix.size();row++){
                for(int col=0;col<matrix[0].size();col++)
                    rowSum[col]+=matrix[row][col];
                updateResult(rowSum, k);
                if(ans==k) return ans;
            }
        }
        return ans;
    }
};