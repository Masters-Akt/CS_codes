/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        unsigned int l=1, h=n;
        while(l<=h){
            unsigned int mid = (l+h)/2;
            int g = guess(mid);
            if(g==0) return mid;
            if(g==1){
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
        return -1;
    }
};