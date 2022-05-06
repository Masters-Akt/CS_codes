class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        int n = rectangles.size();
        vector<double> ratio(n, 0.0);
        for(int i=0;i<n;i++){
            ratio[i] = (double)(rectangles[i][0])/(double)(rectangles[i][1]);
        }
        sort(ratio.begin(), ratio.end());
        // for(int i=0;i<n;i++) cout<<ratio[i]<<" ";
        // cout<<endl;
        long long c = 0, temp = 1;
        for(int i=1;i<n;i++){
            if(ratio[i]==ratio[i-1]) temp++;
            else{
                c+=((temp*(temp-1))/2);
                temp = 1;
            }
        }
        if(temp!=0){
            c+=((temp*(temp-1))/2);
        }
        return c;
    }
};