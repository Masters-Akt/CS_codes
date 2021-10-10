class Solution {
public:
    int minPartitions(string n) {
        //Algo: Find max number in n. Take that many numbers and start filling by first x digits of each number by 1 where x in the number at position i. if n[0] is 5 then for first 5 numbers taken the first digit will be 1, and so on with next digits. We find that the numbers generated give us the sum equal to n. So answer is the max digit in n.
        int m = 0;
        for(int i=0;i<n.size();i++){
            int num = n[i]-'0';
            if(num>m) m = num;
        }
        return m;
    }
};