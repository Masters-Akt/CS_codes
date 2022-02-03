class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> temp(200, "");
        int j = 0, space = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                j=0;
                space++;
            }
            else{
                while(temp[j].size()<space) temp[j]+=" ";
                temp[j++]+=s[i];
            }
        }
        int index = 0;
        for(int i=0;i<200;i++){
            if(temp[i]==""){
                index = i-1;
                break;
            }
        }
        return vector<string>(temp.begin(), temp.begin()+index+1);
    }
};