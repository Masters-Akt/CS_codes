class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size();i++){
            int tofind = target - numbers[i];
            int low = i+1, high = numbers.size()-1;
            while(low<=high){
                int mid = (low+high)/2;
                if(numbers[mid]==tofind) return {i+1, mid+1};
                if(numbers[mid]>tofind) high = mid-1;
                else low = mid+1;
            }
        }
        return {-1};
    }
};