class Solution {
private:
    int calc(int min, int sec, int s, int m, int p){
        if(min>99 || sec>99 || min<0 || sec<0) return INT_MAX;   
        vector<int> v = {min/10, min%10, sec/10, sec%10};
        vector<int> vv;
        int i=0;
        while(i<4 && v[i]==0) i++;
        for(; i<4; i++) vv.push_back(v[i]);
        int cost=0;
        for(int e: vv){
            if(e!=s) cost+=m;
            s=e;
            cost+=p;
        }
        return cost;
    }
public:
    int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds) {
        int mins=targetSeconds/60;
        int secs= targetSeconds-60*mins;
        return min(calc(mins, secs, startAt, moveCost, pushCost), calc(mins-1, secs+60, startAt, moveCost, pushCost));
    }
};