class Solution {
    public int countHillValley(int[] nums) {
        int count =0;

        for(int i=1;i<nums.length-1;i++){
            int j= i+1;
            int k=i-1;

            while(j < nums.length && nums[i]==nums[j]){
                j++;
            }
            if(j==nums.length){
                break;
            }
            if(nums[i]>nums[j] && nums[i]> nums[k]){
                ++count;
            }
            else if(nums[i]<nums[j] && nums[i]<nums[k]){
                ++count;
            }
            
            
        }

        return count;
    }
}