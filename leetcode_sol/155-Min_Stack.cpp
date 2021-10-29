class MinStack {
public:
    vector<pair<int, int>> mystack;
    MinStack() {
        
    }
    
    void push(int val) {
        if(mystack.empty()) mystack.push_back({val, val});
        else mystack.push_back({val, min(val, mystack.back().second)});
    }
    
    void pop() {
        mystack.pop_back();
    }
    
    int top() {
        return mystack.back().first;
    }
    
    int getMin() {
        return mystack.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */