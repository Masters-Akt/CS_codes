class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> ans;
        if(finalSum%2) return ans;
        unordered_map<long long, bool> m;
        long long i=2, s=0;
        while(s!=finalSum){
            if(s+i>finalSum){
                int x = s+i-finalSum;
                m[x] = false;
                s-=x;
                s+=i;
            }else{
                s+=i;   
            }
            m[i] = true;
            i+=2;
        }
        for(auto x: m){
            if(x.second) ans.push_back(x.first);
        }
        return ans;
    }
};