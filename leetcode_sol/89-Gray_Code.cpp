class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> sol = {0};
        for(int i=0;i<n;i++){
            int s = sol.size();
            for(int j=s-1;j>=0;j--){
                sol.push_back(sol[j]|1<<i);
            }
        }
        return sol;
    }
};