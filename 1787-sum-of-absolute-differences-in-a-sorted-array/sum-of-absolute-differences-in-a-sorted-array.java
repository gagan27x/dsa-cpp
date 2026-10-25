class Solution {
    public int[] getSumAbsoluteDifferences(int[] nums) {
        int n = nums.length;
        int[] ans = new int[n];


        int[] preSum = new int[n];

        preSum[0] = nums[0];

        for(int i=1;i<n;i++){
            
            preSum[i] = preSum[i-1]+ nums[i];
            
        }



        for(int i=0;i<n;i++){

            ans[i]= nums[i]*i - (preSum[i]-nums[i]) + (preSum[n-1]-preSum[i]) - nums[i]*(n-i-1);

        }
        return ans;
    }
}