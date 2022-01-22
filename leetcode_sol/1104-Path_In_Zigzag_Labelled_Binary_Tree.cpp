class Solution {
private:
    void solve(vector<int>& ans, int label){
        ans.push_back(label);
        int c = ceil(log2(label));
        if(ceil(log2(label))==floor(log2(label))) c++;
        if(c==1){
            return;
        }
        int new_label = label-pow(2,c-1);
        if(c%2==1){
            if(new_label%2==0) new_label = new_label/2;
            else new_label = (new_label-1)/2;
        }else{
            if(new_label%2==0) new_label = (new_label+1)/2;
            else new_label = (new_label)/2;
        }
        new_label = pow(2,c-2)-1-new_label;
        new_label+=(pow(2,c-2));
        solve(ans, new_label);
    }
public:
    vector<int> pathInZigZagTree(int label) {
        vector<int> ans;
        solve(ans, label);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};