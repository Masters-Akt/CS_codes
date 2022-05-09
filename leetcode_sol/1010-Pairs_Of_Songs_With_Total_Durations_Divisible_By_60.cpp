class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0;
        vector<int> freq(60,0);
        for(int i=0;i<time.size();i++){
            int x=time[i]%60;
            if(x==0) count+=freq[0];
            else count+=freq[60-x];
            freq[x]++;
        }
        return count;
    }
};