class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            while(j<nums.size()){
                if(nums[i]==nums[j]){
                    ans++;
                }
                j++;
            }
        }
        return ans;
    }
};