class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        int m = num/1000;
        for(int i=1;i<=m;i++) ans+="M";
        num-=(m*1000);
        int h = num/100;
        num-=(h*100);
        if(h==9) ans+="CM";
        else{
            if(h>=5){
                ans+="D";
                h-=5;
                while(h>0){
                    ans+="C";
                    h--;
                }
            }else{
                if(h==4){
                    ans+="CD";
                }else{
                    while(h>0){
                        ans+="C";
                        h--;
                    }   
                }
            }
            
        }
        int t = num/10;
        num-=(t*10);
        if(t==9) ans+="XC";
        else{
            if(t>=5){
                ans+="L";
                t-=5;
                while(t-->0){
                    ans+="X";
                }
            }else{
                if(t==4) ans+="XL";
                else{
                    while(t--){
                        ans+="X";
                    }
                }
            }
        }
        if(num==9) ans+="IX";
        else{
            if(num>=5){
                ans+="V";
                num-=5;
                while(num--){
                    ans+="I";
                }
            }else{
                if(num==4) ans+="IV";
                else{
                    while(num--){
                        ans+="I";
                    }
                }
            }
        }
        return ans;
    }
};