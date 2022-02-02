class Solution {
private:
    static bool comp(pair<string, int>& a, pair<string, int>& b){
        if(a.first.size()==b.first.size()) return a.second<b.second;
        return a.first.size()<b.first.size();
    }
public:
    string arrangeWords(string text) {
        text+=" ";
        string str = "";
        stringstream ss(text);
        vector<pair<string, int>> store;
        int i=0;
        while(ss>>str){
            store.push_back({str, i});
            i++;
        }
        sort(store.begin(), store.end(), comp);
        string ans = "";
        for(auto x: store){
            if(ans==""){
                if(islower(x.first[0])){
                   transform(x.first.begin(), x.first.begin()+1, x.first.begin(), ::toupper);
                }
            }else{
                if(isupper(x.first[0])){
                    transform(x.first.begin(), x.first.begin()+1, x.first.begin(), ::tolower);
                }
            }
            ans+=x.first+" ";
        }
        ans.pop_back();
        return ans;
    }
};