//Problem : https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1
//0/1 Knapsack - DP
class Solution{
private:
    int subsetSum(int arr[], int sum, int n){
        bool dp[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0 || j==0){
                    if(i==0) dp[i][j] = false;
                    if(j==0) dp[i][j] = true;
                    continue;
                }
                if(arr[i-1]<=j){
                    dp[i][j] = dp[i-1][j-arr[i-1]]||dp[i-1][j];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        int i = sum/2;
        while(!dp[n][i]) i--;
        return sum-2*i;
    }
public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum = 0;
	    for(int i=0;i<n;i++) sum+=arr[i];
	    return subsetSum(arr, sum, n);
	} 
};