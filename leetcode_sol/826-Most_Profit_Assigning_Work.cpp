class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> diffpro;
        diffpro.push_back({0, 0});
        for(int i=0;i<profit.size();i++) diffpro.push_back({difficulty[i], profit[i]});
        sort(diffpro.begin(), diffpro.end());
        int curr_max_profit = diffpro[0].second;
        for(int i=0;i<diffpro.size();i++){
            if(diffpro[i].second>curr_max_profit) curr_max_profit = diffpro[i].second;
            else diffpro[i].second = curr_max_profit;
        }
        sort(worker.begin(), worker.end());
        int worker_pointer = 0, ans = 0;
        for(int i=0;i<diffpro.size();i++){
            if(worker_pointer>=worker.size()) break;
            if(worker[worker_pointer]<diffpro[i].first){
                ans+=diffpro[i-1].second;
                worker_pointer++;
                i--;
            }
        }
        while(worker_pointer<worker.size()){
            ans+=diffpro[diffpro.size()-1].second;
            worker_pointer++;
        }
        return ans;
    }
};