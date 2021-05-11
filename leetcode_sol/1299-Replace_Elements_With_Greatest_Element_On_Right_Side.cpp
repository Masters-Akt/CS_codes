class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if(i==arr.size()-1){
                arr.erase(arr.begin()+i);
                arr.push_back(-1);
            }else{
                int m=arr[i+1];
                for(int j=i+2;j<arr.size();j++){
                    m=max(m,arr[j]);
                }
                arr.erase(arr.begin()+i);
                arr.insert(arr.begin()+i,m);
            }
        }
        return arr;
    }
};