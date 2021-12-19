class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int> f(cardPoints.size()+1, 0), b(cardPoints.size()+1, 0);
        int s = 0;
        for(int i=0;i<cardPoints.size();i++){
            s+=cardPoints[i];
            f[i+1] = s;
        }
        s = 0;
        for(int i=cardPoints.size()-1;i>=0;i--){
            s+=cardPoints[i];
            b[i] = s;
        }
        reverse(b.begin(), b.end());
        int ans = 0;
        for(int i=0;i<=k;i++){
            ans = max(ans, f[i]+b[k-i]);
        }
        return ans;
    }
};