class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int count_rays = 0, prev = 0;
        for(string x: bank){
            int curr = 0;
            for(int i=0;i<x.size();i++) if(x[i]=='1') curr++;
            if(curr){
                count_rays+=(prev*curr);
                prev = curr;
            }
        }
        return count_rays;
    }
};