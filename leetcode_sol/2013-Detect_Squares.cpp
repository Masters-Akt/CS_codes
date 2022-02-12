class DetectSquares {
private:
    map<pair<int, int>, int> m;
public:
    DetectSquares() {
        
    }
    
    void add(vector<int> point) {
        m[{point[0], point[1]}]++;
    }
    
    int count(vector<int> point) {
        int ans = 0;
        for(auto x: m){
            if(!(abs(point[0]-x.first.first)!=abs(point[1]-x.first.second) || point[0]==x.first.first || point[1]==x.first.second)){
                ans+=(m[{x.first.first, point[1]}]*m[{point[0], x.first.second}])*(x.second);
            }
        }
        return ans;
    }
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */