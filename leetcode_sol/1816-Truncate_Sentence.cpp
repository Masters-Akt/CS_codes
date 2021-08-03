class Solution {
public:
    string truncateSentence(string s, int k) {
        int index = -1;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                k--;
                if(k==0){
                    index = i-1;
                    break;
                }
            }
        }
        if(k!=0) return s;
        return s.substr(0, index+1);
    }
};