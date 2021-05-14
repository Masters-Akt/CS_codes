class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> p;
        for(int i=1;i<=m;i++){
            p.push_back(i);
        }
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            vector<int>::iterator it = find(p.begin(), p.end(), queries[i]);
            ans.push_back(it-p.begin());
            p.erase(it);
            p.insert(p.begin(), queries[i]);
        }
        return ans;
    }
};