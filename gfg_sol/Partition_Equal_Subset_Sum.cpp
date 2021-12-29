//Problem : https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1
//0/1 Knapsack - DP
class Solution{
private:
    bool subsetSum(int N, int arr[], int sum){
        bool dp[N+1][sum+1];
        for(int i=0;i<N+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0 || j==0){
                    if(i==0) dp[i][j] = false;
                    if(j==0) dp[i][j] = true;
                    continue;
                }
                if(arr[i-1]<=j) dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
                else dp[i][j] = dp[i-1][j];
            }
        }
        return dp[N][sum];
    }
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = 0;
        for(int i=0;i<N;i++) sum+=arr[i];
        if(sum%2) return false;
        return subsetSum(N, arr, sum/2);
    }
};