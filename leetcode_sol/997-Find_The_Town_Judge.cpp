class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> cnt_trusts(n+1, 0); //for storing number of followers
        vector<bool> ifTrusted(n+1, false); //for storing if he is following or not
        for(int i=0;i<trust.size();i++){
            int x = trust[i][0];
            int y = trust[i][1];
            //x trusts y
            ifTrusted[x] = true;
            cnt_trusts[y]++;
        }
        vector<int> res;
        for(int i=1;i<=n;i++){
            if(cnt_trusts[i]==n-1 && !ifTrusted[i]) res.push_back(i);
        }
        if(res.size()!=1) return -1;
        return res[0];
    }
};