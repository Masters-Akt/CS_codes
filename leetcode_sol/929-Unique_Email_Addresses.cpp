class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> s;
        for(string x: emails){
            string y = "";
            for(int i=0;i<x.size();i++){
                if(x[i]=='@' || x[i]=='+') break;
                if(x[i]=='.') continue;
                y+=x[i];
            }
            int index = 0;
            for(int i=0;i<x.size();i++){
                if(x[i]=='@'){
                    index = i;
                    break;
                }  
            } 
            y+="@";
            for(int i=index+1;i<x.size();i++) y+=x[i];
            s.insert(y);
        }
        return s.size();
    }
};