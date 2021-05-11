class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                ans=ans+"[.]";
            }else{
                ans=ans+address[i];
            }
        }
        return ans;
    }
};