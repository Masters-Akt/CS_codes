class Solution {
public:
    int numWays(string s) {
        long count_ones = 0, n = s.size(), mod = 1000000007;
        for(char &x: s) if(x=='1') count_ones++;
        if(count_ones==0) return (int)(((n-1)*(n-2)/2)%mod);
        if(count_ones%3!=0) return 0;
        long firstcut = 0, secondcut = 0, prev_ones = 0, required_ones = count_ones/3;
        for(int i=0;i<(int)n;i++){
            if(s[i]=='1') prev_ones++;
            else{
                if(prev_ones==required_ones) firstcut++;
                else if(prev_ones==required_ones*2) secondcut++;
            }
        }
        return (int)((firstcut+1)*(secondcut+1)%mod);
    }
};