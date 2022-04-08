//Method 1 - Priority Queue
class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> p;
    int size;
public:
    KthLargest(int k, vector<int>& nums) {
        size = k;
        for(int i=0;i<nums.size();i++){
            p.push(nums[i]);
            if(p.size()>k) p.pop();
        }
    }
    
    int add(int val) {
        p.push(val);
        if(p.size()>size) p.pop();
        return p.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

//Method 2 - Multiset
class KthLargest {
public:
    multiset<int> m;
    int size;
    KthLargest(int k, vector<int>& nums) {
        size = k;
        for(auto x: nums) m.insert(x);
    }
    
    int add(int val) {
       m.insert(val);
        auto it = m.begin();
        advance(it, m.size()-size);
        return *it;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */