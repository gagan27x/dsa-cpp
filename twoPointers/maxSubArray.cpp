class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sz = nums.size();
        int maxSum=INT_MIN;

        for(int i=0,sum =0; i<sz; i++){

            sum = nums[i]+max(0,sum);
            maxSum = max(maxSum,sum);

        }
        return maxSum;

        // int currentSum = nums[0];//kadane's algorithem
        // int maxSum = nums[0];

        // for(int i=1; i<nums.size(); i++){
            
        //     currentSum = max(nums[i],currentSum + nums[i]);

        //     maxSum = max(maxSum,currentSum);

        // }
        // return maxSum;












    }
};