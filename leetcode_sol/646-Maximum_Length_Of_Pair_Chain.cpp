class Solution {
private:
    static bool comp(vector<int>& a, vector<int>& b){
        if(a[1]==b[1]) return a[0]<b[0];
        return a[1]<b[1];
    }
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), comp);
        int ans = 1, curr = pairs[0][1];
        for(int i=1;i<pairs.size();i++){
            if(curr<pairs[i][0]){
                ans++;
                curr = pairs[i][1];
            }
        }
        return ans;
    }
};