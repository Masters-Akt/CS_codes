//Method 1 - Recursion - Gives TLE
class Solution {
public:
    int countPaths(int i, int j, int n, int m){
        if(i==n-1 && j==m-1) return 1;
        if(i>=n || j>=m) return 0;
        return countPaths(i+1, j, n, m)+countPaths(i, j+1, n, m);
    }
    
    int uniquePaths(int m, int n) {
        int i=0, j=0;
        return countPaths(i, j, m, n);
    }
};