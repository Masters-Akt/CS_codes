class Solution {
private:
    static bool comp(vector<int>& a, vector<int>& b){
        return a[0]+a[1]+a[2]<b[0]+b[1]+b[2];
    }
public:
    int maxHeight(vector<vector<int>>& cuboids) {
        sort(cuboids.begin(), cuboids.end(), comp);
        vector<int> maxheight(cuboids.size(), 0);
        int iterating_index = 0;
        for(auto &x: cuboids){
            sort(x.begin(), x.end());
            maxheight[iterating_index++] = x.back();
        }
        int ans = 0;
        for(int i=0;i<cuboids.size();i++){
            for(int j=0;j<i;j++){
                if(cuboids[i][0]>=cuboids[j][0] && cuboids[i][1]>=cuboids[j][1] && cuboids[i][2]>=cuboids[j][2]){
                    maxheight[i] = max(maxheight[i], maxheight[j]+max({cuboids[i][0], cuboids[i][1], cuboids[i][2]}));
                }
            }
            ans = max(ans, maxheight[i]);
        }
        return ans;
    }
};