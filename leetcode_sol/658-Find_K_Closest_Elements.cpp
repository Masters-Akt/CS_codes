class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        if(arr.size()==k){
            for(int i=0;i<k;i++){
                ans.push_back(arr[i]);
            }
            return ans;
        }
        int l = 0, r = arr.size()-1, mid = 0;
        while(l<=r){
            mid = (l+r)/2;
            if(arr[mid]>x) r = mid-1;
            else if(arr[mid]<x) l = mid+1;
            else break;
        }
        l = max(0, mid-1);
        r = l+1;
        while(r-l-1<k){
            if(l==-1){
                r++;
                continue;
            }
            if(r==arr.size() || abs(arr[l]-x)<=abs(arr[r]-x)) l--;
            else r++;
        }
        for(int i=l+1;i<r;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};