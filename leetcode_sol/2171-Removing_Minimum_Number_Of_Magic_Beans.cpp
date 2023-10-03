//Method - 1
class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(), beans.end());
        vector<long long> suffix(beans.size()+1);
        suffix[0] = 0;
        long long sum = 0;
        for(int i=0;i<beans.size();i++){
            sum+=beans[i];
            suffix[i+1] = sum;
        }
        long long ans = LONG_MAX;
        for(int i=0;i<beans.size();i++){
            long long temp = suffix[i]+sum-suffix[i+1]-(beans.size()-i-1)*beans[i];
            ans = min(ans, temp);
        }
        return ans;
    }
};

//Method - 2
class Solution {
public:
    //Expl: After arrangement, make each one a candidate and find the min value for: at each place I need to drop all the less values ones and subtract the current from more value ones 
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(), beans.end(), greater<int>());
        long long ans = LONG_LONG_MAX;
        long long total = 0;
        for(int x: beans) total+=x;
        for(int i=0;i<beans.size();i++){
            ans = min(ans, total - (long long)beans[i]*(i+1));
        }
        return ans;
    }
};
