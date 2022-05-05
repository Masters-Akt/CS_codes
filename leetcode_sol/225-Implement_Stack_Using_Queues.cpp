class MyStack {
private:
    queue<int> data;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        data.push(x);
        for(int i=0; i<data.size()-1; i++) data.push(pop());
    }
    
    int pop() {
        int result = top();
        data.pop();
        return result;
    }
    
    int top() {
        return data.front();
    }
    
    bool empty() {
        return data.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */