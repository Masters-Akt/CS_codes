class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, pair<int, int>> m;
        for(int i=0;i<list1.size();i++) m[list1[i]] = {i, -1};
        for(int i=0;i<list2.size();i++){
            if(m[list2[i]].second==-1) m[list2[i]].second = i;
            else m[list2[i]] = {-1, i};
        }
        int mi = INT_MAX;
        for(auto x: m){
            if(x.second.first!=-1 && x.second.second!=-1) mi = min(mi, x.second.first+x.second.second);
        }
        vector<string> ans;
        for(auto x: m){
            if(x.second.first!=-1 && x.second.second!=-1 && mi==(x.second.first+x.second.second)) ans.push_back(x.first);
        }
        return ans;
    }
};