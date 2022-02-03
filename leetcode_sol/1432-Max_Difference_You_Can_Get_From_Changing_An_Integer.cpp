class Solution {
public:
    int maxDiff(int num) {
        string temp = to_string(num);
        string str1=temp, str2=temp;
        int ind1=0, ind2=0;
        while(ind1<temp.size() && temp[ind1]=='1' || temp[ind1]=='0') ind1++;
        while(ind2<temp.size() && temp[ind2]=='9') ind2++;
        for(int i=0;i<temp.size();i++){
            if(str1[i]==temp[ind1]){
                if(ind1==0) str1[i] = '1';
                else str1[i] = '0';
            }
            if(str2[i]==temp[ind2]) str2[i]='9';
        }
        int ans1=stoi(str1), ans2=stoi(str2);
        return ans2-ans1;
    }
};