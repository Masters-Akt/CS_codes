class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if(targetCapacity==0) return true;
        int g = __gcd(jug1Capacity, jug2Capacity);
        if(targetCapacity<=jug1Capacity+jug2Capacity && targetCapacity%g==0) return true;
        return false;
    }
};