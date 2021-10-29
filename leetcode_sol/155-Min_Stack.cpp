//Method 1
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

//Method 2 - Mathematics involved
class MinStack {
public:
    stack<long long> s;
    long long m;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(val);
            m = val;
        }else if(val>=m){
            s.push(val);
        }else{
            s.push((long)val*2-m);
            m = val;
        }
    }
    
    void pop() {
        if(s.top()<m) m = 2*m-s.top();
        s.pop();
    }
    
    int top() {
        if(s.top()<m) return m;
        return s.top();
    }
    
    int getMin() {
        return m;
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
