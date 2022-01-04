//Problem : https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/
//Sliding Window Two pointer approach
//Asked In Goldman Sachs
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if(k==1) return 0;
        long long prod = 1, ans = 0, left_pointer = 0;
        for(int right_pointer=0; right_pointer<n;right_pointer++){
            prod*=a[right_pointer];
            while(prod>=k){
                prod/=a[left_pointer];
                left_pointer++;
            }
            ans+=(right_pointer-left_pointer+1);
        }
        return ans;
    }
};