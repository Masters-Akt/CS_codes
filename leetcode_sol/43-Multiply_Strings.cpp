class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0") return "0";
        vector<int> store(num1.size()+num2.size(), 0);
        for(int i=num1.size()-1;i>=0;i--){
            for(int j=num2.size()-1;j>=0;j--){
                store[i+j+1] += (num1[i]-'0')*(num2[j]-'0');
                store[i+j] += store[i+j+1]/10;
                store[i+j+1]%=10;
            }
        }
        int i = 0;
        while(store[i]==0) i++;
        string ans = "";
        while(i<store.size()) ans+=to_string(store[i++]);
        return ans;
    }
};