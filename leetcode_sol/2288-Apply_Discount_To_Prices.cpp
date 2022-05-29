class Solution {
public:
    string discountPrices(string sentence, int discount) {
        stringstream ss(sentence);
        string temp;
        string ans = "";
        while(ss>>temp){
            if(temp[0]=='$'){
                double num = 0;
                int i=1;
                while(i<temp.size() && temp[i]>='0' && temp[i]<='9'){
                    double x = temp[i]-'0';
                    num = num*10+x;
                    i++;
                }
                if(num>0 && i==temp.length()){
					double discountPercentage = (100-discount)/100.0;
                    stringstream ss2;
                    ss2<<fixed<<setprecision(2)<<(discountPercentage*num); //fixed = set decimal values, setprecision = for number of decimal places
                    ans+=" $"+ ss2.str(); //.str = gets the string from stringstream
                    continue;
                }
            }
            ans += " " + temp;
        }
        int len = ans.size();
        return ans.substr(1,len-1);
    }
};