class Solution {
private:
    static bool comp(vector<int> &a, vector<int> &b){
        if(a[0]!=b[0]) return a[0]>b[0];
        return a[1]<b[1];
    }
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), comp);
        int maxTillNow = INT_MIN;
        int ans = 0;
        for(auto p: properties){
            if(maxTillNow>p[1]) ans++;
            else maxTillNow=p[1];
        }
        return ans;
    }
};