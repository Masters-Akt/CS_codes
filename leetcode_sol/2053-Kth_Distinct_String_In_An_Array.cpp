class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string> v;
        vector<int> f;
        for(int i=0;i<arr.size();i++){
            vector<string>::iterator it = find(v.begin(), v.end(), arr[i]);
            if(it==v.end()){
                v.push_back(arr[i]);
                f.push_back(1);
            }else{
                f[it-v.begin()]++;
            }
        }
        vector<string> ans;
        for(int i=0;i<v.size();i++){
            if(f[i]==1) ans.push_back(v[i]);
        }
        if(ans.size()<k) return "";
        return ans[k-1];
    }
};