class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int count1=0;
        for(int i=0;i<nums.size();i++){

            count++;
            if(nums[i]==0){
                count =0;
            }
            count1=max(count1,count);
        }
        return count1;
        
    }
};