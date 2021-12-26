//M-1 - Brute Force - O(N2) - TLE
class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
       map<int, vector<int>> m;
        for(int i=0;i<arr.size();i++) m[arr[i]].push_back(i);
        vector<long long> ans(arr.size(), 0);
        for(auto x: m){
            vector<int> ind = x.second;
            for(int j=0;j<ind.size();j++){
                long long sum = 0;
                for(int k=0;k<ind.size();k++){
                    sum+=abs(ind[j]-ind[k]);
                }
                ans[ind[j]] = sum;
            }
        }
        return ans;
    }
};

//M-2 - Optimized
class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        //Formula Used
        /*
        Take example A, B, C, D, E
        calc for C :
        = |C-A|+|C-B|+|D-C|+|E-C|
        Hence first two can be opened as 2*C-(A+B) and later two as (D+E)-2*C
        
        Hence prefix sum concept to be used from both side of the array and final answer can be achieved
        */
        unordered_map<int, long long> m; //keeping count entries
        unordered_map<int, long long> sum; //keepng prefix sum;
        vector<long long> ans(arr.size(), 0);
        for(int i=0;i<arr.size();i++){
            ans[i]+=(m[arr[i]]*i*1ll-sum[arr[i]]);
            m[arr[i]]++;
            sum[arr[i]]+=i;
        }
        m.clear();
        sum.clear();
        for(int i=arr.size()-1;i>=0;i--){
            ans[i]+=(sum[arr[i]]-(m[arr[i]]*i*1ll));
            m[arr[i]]++;
            sum[arr[i]]+=i;
        }
        return ans;
    }
};