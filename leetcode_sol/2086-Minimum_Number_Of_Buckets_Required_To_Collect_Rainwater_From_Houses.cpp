class Solution {
public:
    int minimumBuckets(string street) {
        int ans = 0;
        for(int i=0;i<street.size();i++){
            if(street[i]=='H'){
                if(i!=0){
                    if(street[i-1]=='B') continue;
                }
                if(i!=street.size()-1 && street[i+1]=='.'){
                    street[i+1] = 'B';
                    ans++;
                }else if(i!=0 && street[i-1]=='.'){
                    street[i-1] = 'B';
                    ans++;
                }else return -1;
            }
        }
        return ans;
    }
};