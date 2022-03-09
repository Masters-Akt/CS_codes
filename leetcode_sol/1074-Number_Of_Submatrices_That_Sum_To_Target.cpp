//TLE - 39/40 test cases passed - O(N^4)
class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        for(int i=1;i<matrix.size();i++) matrix[i][0]+=matrix[i-1][0];
        for(int j=1;j<matrix[0].size();j++) matrix[0][j]+=matrix[0][j-1];
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[i].size();j++){
                matrix[i][j]+=matrix[i-1][j]+matrix[i][j-1]-matrix[i-1][j-1];
            }
        }
        int ans = 0;
        for(int a=0;a<matrix.size();a++){
            for(int b=0;b<matrix[0].size();b++){
                for(int c=a;c<matrix.size();c++){
                    for(int d=b;d<matrix[0].size();d++){
                        int sum = matrix[c][d];
                        if(a>0) sum-=matrix[a-1][d];
                        if(b>0) sum-=matrix[c][b-1];
                        if(a>0 && b>0) sum+=matrix[a-1][b-1];
                        if(sum==target) ans++;
                    }
                }
            }
        }
        return ans;
    }
};

//AC using map
class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int ans = 0;
        for(int i=0;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                matrix[i][j]+=matrix[i][j-1];
            }
        }
        for(int i=0;i<matrix[0].size();i++){
            for(int j=i;j<matrix[0].size();j++){
                unordered_map<int, int> m = {{0, 1}};
                int cur = 0;
                for(int k=0;k<matrix.size();k++){
                    cur+=matrix[k][j]-((i>0)?matrix[k][i-1]:0);
                    ans+=((m.find(cur-target)!=m.end())?m[cur-target]:0);
                    m[cur]++;
                }
            }
        }
        return ans;
    }
};