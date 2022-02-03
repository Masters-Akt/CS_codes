//M1 - O(NlogN)
class Solution {
private:
    void solve(vector<int>& ans, int n){
        vector<string> temp;
        for(int i=1;i<=n;i++) temp.push_back(to_string(i));
        sort(temp.begin(), temp.end());
        for(int i=0;i<n;i++) ans.push_back(stoi(temp[i]));
    }
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        solve(ans, n);
        return ans;
    }
};

//M2 - O(N)
class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans(n);
        int cur = 1;
        for(int i=0;i<n;i++){
            ans[i] = cur;
            if(cur*10<=n) cur*=10;
            else{
                if(cur>=n) cur/=10;
                cur++;
                while(cur%10==0) cur/=10;
            }
        }
        return ans;
    }
};