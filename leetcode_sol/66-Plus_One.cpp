class Solution {
    public int[] plusOne(int[] digits) {
        int i=digits.length-1;
        boolean done=false;
        digits[i]++;
        while(done==false&&i!=0){
            if(digits[i]==digits[i]%10)
                done=true;
            else{
                digits[i]=digits[i]%10;
                digits[i-1]++;
                i--;
            }
        }
        if(digits[0]==digits[0]%10)
        return digits;
        else{
            int res[]=new int[digits.length+1];
            res[0]=digits[0]/10;
            res[1]=digits[0]%10;
            for(int j=1;j<digits.length;j++){
                res[j+1]=digits[j];
            }
            return res;
        }
    }
}