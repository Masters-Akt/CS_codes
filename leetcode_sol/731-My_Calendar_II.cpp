class MyCalendarTwo {
private:
    map<int, int> events;
public:
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        events[start]++;
        events[end]--;
        int check = 0;
        for(auto& x: events){
            check+=x.second;
            if(check==3){
                events[start]--;
                events[end]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */