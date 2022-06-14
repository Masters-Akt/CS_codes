class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size(), n = word2.size();
        if(m<n) swap(word1, word2), swap(n, m);
        vector<int> dpLast(n+1, 0), dpCurr(n+1, 0);
        for(char c1: word1) {
            for(int j=0; j<n; j++) 
                dpCurr[j+1] = (c1==word2[j]) ? dpLast[j]+1 : max(dpCurr[j], dpLast[j+1]);
            swap(dpLast, dpCurr);
        }
        return m+n-2*dpLast[n];
    }
};