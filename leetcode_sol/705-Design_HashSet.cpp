class MyHashSet {
private:
    unordered_map<int, bool> m;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        m[key] = true;
    }
    
    void remove(int key) {
        m[key] = false;
    }
    
    bool contains(int key) {
        return m[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */