class Solution {
public:
    int xorOperation(int n, int start) {
        int a[n];
        for(int i=0;i<n;i++){
            a[i]=start+ 2*i;
        }
        int x=a[0];
        for(int i=1;i<n;i++){
            x=x^a[i];
        }
        return x;
    }
};