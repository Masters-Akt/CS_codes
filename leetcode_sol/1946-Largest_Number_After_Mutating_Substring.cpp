class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        string ans = "";
        bool check = false;
        int b = -1;
        for(int i=0;i<num.size();i++){
            int x = num[i]-'0';
            if(change[x]>x) check = true;
            if(change[x]>=x) ans+=to_string(change[x]);
            else ans+=num[i];
            if(check && change[x]<x){
                b = i;
                break;
            }
        }
        if(b!=-1){
            for(int i=b+1;i<num.size();i++) ans+=num[i];
        }
        return ans;
    }
};