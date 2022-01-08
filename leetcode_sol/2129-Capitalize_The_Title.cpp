class Solution {
public:
    string capitalizeTitle(string title) {
        int start=0;
        string ans="", temp="";
        for(int i=0;i<title.size();i++){
            if(title[i]==' '){
                transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
                if(temp.size()>2){
                    char x = temp[0];
                    x = toupper(x);
                    temp = x+temp.substr(1, temp.size()-1);
                }
                if(ans=="") ans+=temp;
                else ans+=" "+temp;
                temp="";
            }else{
                temp+=title[i];
            }
        }
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        if(temp.size()>2){
            char x = temp[0];
            x = toupper(x);
            temp = x+temp.substr(1, temp.size()-1);
        }
        if(ans=="") ans+=temp;
        else ans+=" "+temp;
        return ans;
    }
};