//Method - 1 - O(NlogN)
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        vector<pair<double, pair<int, int>>> store(points.size());
        for(int i=0;i<points.size();i++){
            store[i].first = (double)(sqrt(((double)points[i][0]*points[i][0] + (double)points[i][1]*points[i][1])));
            store[i].second.first = points[i][0];
            store[i].second.second = points[i][1];
        }
        sort(store.begin(), store.end());
        for(int i=0; i<k; i++){
            ans.push_back({store[i].second.first, store[i].second.second});
        }
        return ans;
    }
};

//Method - 2 - Using Multimap
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        multimap<double, int> m;
        for(int i=0;i<points.size();i++){
            m.insert({points[i][0]*points[i][0] + points[i][1]*points[i][1], i});
        }
        auto it = m.begin();
        while(k--){
            ans.push_back(points[it->second]);
            it++;
        }
        return ans;
    }
};