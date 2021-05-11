class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) return false;
        int m=arr[0], index=0;
        for(int i=0;i<arr.size();i++){
            if(m<arr[i]){
                m=arr[i];
                index=i;
            }
        }
        if(index==arr.size()-1 || index==0) return false;
        for(int i=1;i<=index;i++){
            if(arr[i]<=arr[i-1]) return false;
        }
        for(int i=index+1;i<arr.size();i++){
            if(arr[i]>=arr[i-1]) return false;
        }
        return true;
    }
};