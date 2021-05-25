class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans=customers[0][0]+customers[0][1];
        int time_elapsed = customers[0][0]+customers[0][1];
        cout<<ans<<"\n";
        for(int i=1;i<customers.size();i++){
            if(time_elapsed-customers[i][0]<0)time_elapsed+=(customers[i][0]-time_elapsed);
            ans+=(customers[i][1]+time_elapsed-customers[i][0]);
            time_elapsed+=(customers[i][1]);
            cout<<ans<<"\n";
        }
        ans-=customers[0][0];
        return ans/(double)(customers.size());
    }
};