class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int c1 = 0, c0 = 0;
        for(int& x: students){
            if(x==1) c1++;
            else c0++;
        }
        int i;
        for(i=0;i<sandwiches.size();i++){
            if(sandwiches[i] && c1>0) c1--;
            else if(!sandwiches[i] && c0>0) c0--;
            else break;
        }
        return sandwiches.size()-i;
    }
};