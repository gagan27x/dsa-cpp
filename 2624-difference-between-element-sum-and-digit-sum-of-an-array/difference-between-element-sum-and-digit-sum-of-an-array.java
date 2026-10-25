class Solution {
    public int differenceOfSum(int[] nums) {
        int n = nums.length;
        int eleSum = 0;
        int digSum =0;

        for(int x:nums){
            eleSum += x;
        }
        for(int x:nums){

            while(x>0){
                digSum += x%10;
                x = x/10;
            }
        }

        return Math.abs(eleSum-digSum);

    }
}