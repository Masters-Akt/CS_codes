class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> p;
    int size;
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