class Solution {
public:
    double average(vector<int>& salary) {
        int min=salary[0], max=salary[0], sum=0;
        for(int i=0;i<salary.size();i++){
            if(salary[i]<min) min=salary[i];
            if(salary[i]>max) max=salary[i];
            sum+=salary[i];
        }
        //cout<<sum<<" "<<min<<" "<<max<<" "<<(double)(sum-min-max)<<" "<<salary.size()-2;
        return ((double)(sum-min-max))/(salary.size()-2);
    }
};