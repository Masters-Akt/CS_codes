class Solution {
public:
    string largestOddNumber(string num) {
        int size = num.size();
        for(int i=size-1;i>=0;i--){
            if(num[i]=='1' || num[i]=='3' || num[i]=='5' || num[i]=='7' || num[i]=='9'){
                return num.substr(0, i+1);
            }
        }
        return "";
    }
};