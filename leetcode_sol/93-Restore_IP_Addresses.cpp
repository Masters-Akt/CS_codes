//Method 1 - Brute Force types
class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        for(int i=1;i<=3;i++){
            for(int j=1;j<=3;j++){
                for(int k=1;k<=3;k++){
                    for(int l=1;l<=3;l++){
                        if(i+j+k+l==s.size()){
                            int first = stoi(s.substr(0,i));
                            int second = stoi(s.substr(i, j));
                            int third = stoi(s.substr(i+j, k));
                            int fourth = stoi(s.substr(i+j+k, l));
                            if(first<=255 && second<=255 && third<=255 && fourth<=255){
                                string temp = ""+to_string(first)+"."+to_string(second)+"."+to_string(third)+"."+to_string(fourth);
                                if(temp.size()-3==s.size()) ans.push_back(temp);
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};