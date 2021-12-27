class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0 || n==1) return n;
        vector<int> temp(n+1);
        temp[0] = 0, temp[1] = 1;
        int m = 1;
        for(int i=2;i<=n;i++){
            temp[i] = i%2==0 ? temp[i/2] : temp[i/2]+temp[i/2+1];
            m = max(m, temp[i]);
        }
        return m;
    }
};