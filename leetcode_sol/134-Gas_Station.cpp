class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int> v(gas.size());
        for(int i=0;i<gas.size();i++){
            v[i] = gas[i] - cost[i];
        }
        vector<int> start;
        for(int i=0;i<v.size();i++){
            if(v[i]>=0){
                start.push_back(i);
            }
        }
        if(start.size()==0) return -1;
        for(int i=0;i<start.size();i++){
            int sum = 0;
            for(int j=start[i];j<v.size();j++){
                sum+=v[j];
                if(sum<0) break;
            }
            if(sum<0) continue;
            for(int j=0;j<start[i];j++){
                sum+=v[j];
                if(sum<0) break;
            }
            if(sum<0) continue;
            return start[i];
        }
        return -1;
    }
};

//More optimized
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int remBal = 0, start = 0, curBal = 0;
        for(int i=0;i<cost.size();i++){
            curBal+=(gas[i]-cost[i]);
            if(curBal<0){
                start = i+1;
                remBal+=curBal;
                curBal = 0;
            }
        }
        return curBal+remBal>=0 ? start : -1;
    }
};