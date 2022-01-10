class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int iterator_a=a.size()-1, iterator_b=b.size()-1, carry = 0;
        while(iterator_a>=0 && iterator_b>=0){
            if(a[iterator_a]=='0' && b[iterator_b]=='0'){
                if(carry==0) ans+="0";
                else{
                    ans+="1";
                    carry = 0;
                }
            }else if(a[iterator_a]=='1' && b[iterator_b]=='0'){
                if(carry==0) ans+="1";
                else ans+="0";
            }else if(a[iterator_a]=='0' && b[iterator_b]=='1'){
                if(carry==0) ans+="1";
                else ans+="0";
            }else{
                if(carry==0){
                    ans+="0";
                    carry = 1;
                }else ans+="1";
            }
            iterator_a--;
            iterator_b--;
        }
        while(iterator_a>=0){
            if(carry==0) ans+=a[iterator_a];
            else{
                if(a[iterator_a]=='0'){
                    ans+="1";
                    carry=0;
                }else{
                    ans+="0";
                }
            }
            iterator_a--;
        }
        while(iterator_b>=0){
            if(carry==0) ans+=b[iterator_b];
            else{
                if(b[iterator_b]=='0'){
                    ans+="1";
                    carry=0;
                }else{
                    ans+="0";
                }
            }
            iterator_b--;
        }
        if(carry==1) ans+="1";
        reverse(ans.begin(), ans.end());
        return ans;
    }
};