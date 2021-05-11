class Solution {
    public int[] twoSum(int[] nums, int target) {
        int sol[]=new int[2];
        for(int i=0;i<nums.length-1;i++){
            for(int j=i+1;j<nums.length;j++){
                if(nums[i]+nums[j]==target){
                    sol[0]=i;
                    sol[1]=j;
                    return sol;
                }
            }
        }
        return sol;
    }
}