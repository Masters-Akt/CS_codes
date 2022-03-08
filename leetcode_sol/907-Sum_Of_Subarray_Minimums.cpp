//Brute Force - TLE
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans = 0;
        for(int i=0;i<nums.size();i++){
            int smallest = INT_MAX, largest = INT_MIN;
            for(int j=i;j<nums.size();j++){
                smallest = min(smallest, nums[j]);
                largest = max(largest, nums[j]);
                ans+=(largest-smallest);
            }
        }
        return ans;
    }
};

//AC using Stack + DP
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<int> st;
        st.push(-1);
        int mod = 1e9+7, ans = 0;
        vector<int> dp(arr.size()+1, 0);
        for(int i=0;i<arr.size();i++){
            while(st.top()!=-1 && arr[i]<=arr[st.top()]) st.pop();
            dp[i+1] = (dp[st.top()+1]+(i-st.top())*arr[i])%mod;
            st.push(i);
            ans=(ans+dp[i+1])%mod;
        }
        return ans;
    }
};