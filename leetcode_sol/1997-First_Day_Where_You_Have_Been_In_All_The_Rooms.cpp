class Solution {
public:
    int firstDayBeenInAllRooms(vector<int>& nextVisit) {
        int n = nextVisit.size();
        int mod = 1e9 + 7;
        vector<long> days(n);
        days[0] = 0;
        for(int i=1;i<n;i++){
            if(days[i-1]==nextVisit[i-1]) days[i] = days[i-1]+2;
            else days[i] = (2 + 2*days[i-1] + mod - days[nextVisit[i-1]])%mod;
        }
        return (int)days[n-1]%mod;
    }
};