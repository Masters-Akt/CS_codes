class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> m(501, 0);
        for(int x: arr) m[x]++;
        for(int i=500;i>0;i--){
            if(i==m[i]) return i;
        }
        return -1;
    }
};