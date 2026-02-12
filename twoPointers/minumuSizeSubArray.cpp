class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int size = nums.size();
        int ans = INT_MAX;
        int l=0;
        int sum=0;

        for(int r=0 ;r<size ;r++){
            sum = sum + nums[r];

            while(sum>=target){

                ans = min(ans,r-l+1);
                sum = sum - nums[l];
                l++;

            }
        }
        return (ans==INT_MAX) ? 0 : ans;
    }
};