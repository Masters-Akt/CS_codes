//Method - TLE
class Solution {
public:
    int minFlips(string target) {
        vector<char> arr(target.size(), '0');
        int i = 0, c = 0;
        while(i<target.size()){
            if(target[i]!=arr[i]){
                c++;
                for(int j=i;j<arr.size();j++){
                    if(arr[j]=='0') arr[j] = '1';
                    else arr[j] = '0';
                }
            }
            i++;
        }
        return c;
    }
};