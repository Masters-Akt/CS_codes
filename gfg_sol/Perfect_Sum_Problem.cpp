//Problem : https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1#
//0/1 Knapsack - dp
class Solution{
	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        int dp[n+1][sum+1];
        int z = 0, mod = 1000000007;
        for(int i=0;i<n+1;i++){
            if(arr[i]==0) z++;
            for(int j=0;j<sum+1;j++){
                if(i==0 || j==0){
                    if(i==0) dp[i][j] = 0;
                    if(j==0) dp[i][j] = pow(2, z);
                    continue;
                }
                if(arr[i-1]<=j){
                    dp[i][j] = (dp[i-1][j-arr[i-1]]%mod + dp[i-1][j]%mod)%mod;
                }else{
                    dp[i][j] = dp[i-1][j]%mod;
                }
            }
        }
        return dp[n][sum]%mod;
	}	  
};