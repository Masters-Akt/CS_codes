class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int i=0, ans, j=seats.size()-1;
        while(seats[i]==0) i++;
        ans = i;
        while(seats[j]==0) j--;
        ans = max(ans, ((int)seats.size()-j-1));
        int count = 0;
        for(int k=i;k<=j;k++){
            if(seats[k]==0) count++;
            else{
                if(count%2==0) ans = max(ans, count/2);
                else ans = max(ans, count/2+1);
                count = 0;
            }
        }
        return ans;
    }
};