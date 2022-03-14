class Solution {
public:
    string simplifyPath(string path) {
        string str;
        stringstream ss(path);
        vector<string> st;
        while(getline(ss, str, '/')){
            if(str=="" || str==".") continue;
            if(str==".." && !st.empty()) st.pop_back();
            else if(str!="..")st.push_back(str);
        }
        string ans = "";
        for(auto& s: st) ans+="/"+s;
        if(ans=="") ans+="/";
        return ans;
    }
};