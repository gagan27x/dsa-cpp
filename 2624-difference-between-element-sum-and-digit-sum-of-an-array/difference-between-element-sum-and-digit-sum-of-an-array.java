class Solution {
    public int differenceOfSum(int[] nums) {
        int n = nums.length;
        int eleSum = 0;
        int digSum =0;

        for(int x:nums){
            eleSum += x;
        }
        for(int i=0;i<n;i++){
            
            int x = nums[i];
            if(x/10==0){
                digSum += x;
                continue; 
            }

            while(x>0){
                digSum += x%10;
                x = x/10;
            }
        }

        return Math.abs(eleSum-digSum);

    }
}