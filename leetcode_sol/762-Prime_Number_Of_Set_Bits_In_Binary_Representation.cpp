class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        vector<bool> primes(32, false);
        int ans = 0;
        primes[2] = primes[3] = primes[5] = primes[7] = primes[11] = primes[13] = primes[17] = primes[19] = primes[23] = primes[29] = primes[31] = true;
        for(int i=left;i<=right;i++){
            int count_bits = 0, num = i;
            while(num){
                count_bits+=(num&1);
                num=num>>1;
            }
            if(primes[count_bits]) ans++;
        }
        return ans;
    }
};