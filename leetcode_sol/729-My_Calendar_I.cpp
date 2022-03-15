class MyCalendar {
private:
    vector<pair<int, int>> events;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto& x: events){
            if(!((end<=x.first)||(start>=x.second))) return false;
        }
        events.push_back({start, end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */