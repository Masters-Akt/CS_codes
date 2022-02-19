class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        map<int, vector<int>> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]].push_back(i);
        }
        int ans = 0;
        for(auto x: m){
            if(x.second.size()>1){
                for(int i=0;i<x.second.size()-1;i++){
                    for(int j=i+1;j<x.second.size();j++){
                        if((x.second[i]*x.second[j])%k==0) ans++;
                    }
                }
            }
        }
        return ans;
    }
};