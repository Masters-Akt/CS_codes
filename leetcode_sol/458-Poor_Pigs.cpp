class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int t = minutesToTest/minutesToDie + 1;
        // t^x >= buckets ==> x
        // <=> log(buckets) base t
        int x = 0;
        while(pow(t, x) < buckets) x++;
        return x;
    }
};