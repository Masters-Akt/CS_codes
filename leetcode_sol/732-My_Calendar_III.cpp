class MyCalendarThree {
private:
    map<int, int> events;
public:
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        events[start]++;
        events[end]--;
        int check = 0;
        int ans = 0;
        for(auto& x: events){
            check+=x.second;
            ans = max(ans, check);
        }
        return ans;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */