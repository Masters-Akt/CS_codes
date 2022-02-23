class Solution {
private:
    int i, j;
    unordered_set<int> store;
public:
    Solution(int m, int n) {
        i = m;
        j = n;
    }
    
    vector<int> flip() {
        int r = rand()%(i*j);
        while(store.count(r)) r = (r+1)%(i*j);
        store.insert(r);
        return {r/j, r%j};
    }
    
    void reset() {
        store = {};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(m, n);
 * vector<int> param_1 = obj->flip();
 * obj->reset();
 */