class Solution {
private:
    bool dfs(vector<int>& sidesLength, vector<int>& matches, int index, int target){
        if(index==matches.size()) return sidesLength[0]==sidesLength[1] && sidesLength[1]==sidesLength[2] && sidesLength[2]==sidesLength[3];
        for(int i=0; i<4; i++){
            if(sidesLength[i]+matches[index]>target) continue;
            int j = i;
            while(--j>=0) if(sidesLength[i]==sidesLength[j]) break;
            if(j!=-1) continue;
            sidesLength[i]+=matches[index];
            if(dfs(sidesLength, matches, index+1, target)) return true;
            sidesLength[i]-=matches[index];
        }
        return false;
    }
public:
    bool makesquare(vector<int>& matchsticks) {
        if(matchsticks.size()<4) return false;
        int sum = 0;
        for(int val: matchsticks) sum+=val;
        if(sum%4!=0) return false;
        sort(matchsticks.begin(), matchsticks.end(), [](int& l, int& r) {return l > r;});
        vector<int> sidesLength(4, 0);
        return dfs(sidesLength, matchsticks, 0, sum/4);
    }
};