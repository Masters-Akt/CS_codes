class Solution {
public:
    int maximum69Number (int num) {
        vector<int> v;
        while(num>0){
            v.push_back(num%10);
            num/=10;
        }
        int n=0;
        bool ch = true;
        for(int i=v.size()-1;i>=0;i--){
            if(ch && v[i]==6){
                ch = false;
                n = n*10+9;
            }else{
                n = n*10+v[i];
            }
        }
        return n;
    }
};