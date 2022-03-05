class MapSum {
private:
    unordered_map<string, int> m;
public:
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        m[key] = val;
    }
    
    int sum(string prefix) {
        int ans = 0;
        for(auto x: m){
            if(x.first.substr(0, prefix.size())==prefix) ans+=x.second;
        }
        return ans;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */