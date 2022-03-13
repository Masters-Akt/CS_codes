class Solution {
private:
    static bool comp(const int& a, const int& b){
        int x = bitset<32>(a).count(), y = bitset<32>(b).count();
        if(x==y) return a<b;
        return x<y;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), comp);
        return arr;
    }
};