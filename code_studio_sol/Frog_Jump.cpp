//M1 - Recursion - TLE
#include<limits.h>
int solve(int index, vector<int>& heights){
    if(index==0) return 0;
    int left = solve(index-1, heights)+abs(heights[index]-heights[index-1]);
    int right = INT_MAX;
    if(index>1) right = solve(index-2, heights)+abs(heights[index]-heights[index-2]);
    return min(left, right);
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    return solve(n-1, heights);
}

//M2 - Recursion+Memoization
#include<limits.h>
int solve(int index, vector<int>& heights, vector<int>& dp){
    if(index==0) return 0;
    if(dp[index]!=-1) return dp[index];
    int left = solve(index-1, heights, dp)+abs(heights[index]-heights[index-1]);
    int right = INT_MAX;
    if(index>1) right = solve(index-2, heights, dp)+abs(heights[index]-heights[index-2]);
    return dp[index] = min(left, right);
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n+1, -1);
    return solve(n-1, heights, dp);
}

//M3 - Tabulation / Bottom Up DP
#include<limits.h>
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n, -1);
    dp[0] = 0;
    for(int i=1;i<n;i++){
        int fs = dp[i-1]+abs(heights[i]-heights[i-1]);
        int ss = INT_MAX;
        if(i>1) ss = dp[i-2]+abs(heights[i]-heights[i-2]);
        dp[i] = min(fs, ss);
    }
    return dp[n-1];
}

//M4 - Space Optimized Bottom Up DP
#include<limits.h>
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    int prev = 0, prev2 = 0;
    for(int i=1;i<n;i++){
        int fs = prev+abs(heights[i]-heights[i-1]);
        int ss = INT_MAX;
        if(i>1) ss = prev2+abs(heights[i]-heights[i-2]);
        int curr = min(fs, ss);
        prev2 = prev;
        prev = curr;
    }
    return prev;
}