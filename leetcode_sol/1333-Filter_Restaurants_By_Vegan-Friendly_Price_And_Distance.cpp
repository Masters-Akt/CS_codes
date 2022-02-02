class Solution {
private:
    static bool comp(vector<int>& a, vector<int>& b){
        if(a[1]==b[1]) return a[0]>b[0];
        return a[1]>b[1];
    }
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<vector<int>> tempres;
        if(veganFriendly==0) veganFriendly=2;
        else veganFriendly = 0;
        for(int i=0;i<restaurants.size();i++){
            if(restaurants[i][2]!=veganFriendly && restaurants[i][3]<=maxPrice && restaurants[i][4]<=maxDistance){
                tempres.push_back(restaurants[i]);
            }
        }
        sort(tempres.begin(), tempres.end(), comp);
        vector<int> ans;
        for(auto x: tempres){
            ans.push_back(x[0]);
        }
        return ans;
    }
};