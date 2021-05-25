class Solution {
public:
    double angleClock(int hour, int minutes) {
        double a1 = abs((double)(30*(double)hour - ((double)11/2)*(double)minutes));
        if(a1>=180.0) return 360.0-a1;
        return a1;
    }
};