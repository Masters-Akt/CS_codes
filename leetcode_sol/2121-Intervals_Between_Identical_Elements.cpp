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