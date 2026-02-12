class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i=0;
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
            i++;
        }
        int index =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){

                nums[index]=nums[i];
                index++;
                
            }
        }

        while(index<nums.size()){
            nums[index]=0;
            index++;
        }

        return nums;
    }
};