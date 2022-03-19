class FreqStack {
private:
    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> st;
    int max_freq;
public:
    FreqStack() {
        max_freq = 0;
    }
    
    void push(int val) {
        max_freq = max(max_freq, ++freq[val]);
        st[freq[val]].push(val);
    }
    
    int pop() {
        int x = st[max_freq].top();
        st[max_freq].pop();
        if(!st[freq[x]--].size()) max_freq--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */