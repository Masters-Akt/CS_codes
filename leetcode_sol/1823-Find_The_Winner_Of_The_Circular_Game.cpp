class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> v(n);
        for(int i=0;i<n;i++) v[i] = i+1;
        int pos = k-1;
        while(v.size()>1){
            cout<<v[pos]<<" ";
            v.erase(v.begin()+pos);
            pos+=k-1;
            pos=pos%v.size();
        }
        return v[0];
    }
};