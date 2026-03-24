class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Max=0;
        int mx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                mx++;
            }
            Max=max(Max,mx);
            if(nums[i]!=1){
                mx=0;
            }
        }
        return Max;
    }
};