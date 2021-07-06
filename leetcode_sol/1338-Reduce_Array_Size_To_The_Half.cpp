class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> count;
        for(auto x: arr) count[x]++;
        priority_queue<int> pq;
        for(auto x: count) pq.push(x.second);
        int ans = 0, del = 0;
        while(del<arr.size()/2){
            ans++;
            del+=pq.top();
            pq.pop();
        }
        return ans;
    }
};