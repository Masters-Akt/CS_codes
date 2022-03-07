class Solution {
private:
    static bool comp(pair<int, int>& a, pair<int, int>& b){
        if(a.first==b.first) return a.second>b.second;
        return a.first>b.first;
    }
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int, int>> store;
        for(int i=0;i<plantTime.size();i++){
            store.push_back({growTime[i], plantTime[i]});
        }
        sort(store.begin(), store.end(), comp);
        int ans = 0, plantPeriod = 0;
        for(int i=0;i<store.size();i++){
            plantPeriod+=store[i].second;
            ans = max(ans, plantPeriod+store[i].first);
        }
        return ans;
    }
};