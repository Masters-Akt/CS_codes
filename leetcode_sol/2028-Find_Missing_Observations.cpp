class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = 0;
        for(int i=0;i<rolls.size();i++) sum+=rolls[i];
        int s = mean*(n+rolls.size())-sum;
        if(s<n || s>n*6) return {};
        vector<int> ans(n, 1);
        s-=n;
        int j = 0;
        while(s){
            if(s>=5){
                ans[j]=6;
                s-=5;
            }else{
                ans[j]+=s;
                s=0;
            }
            j++;
        }
        return ans;
    }
};