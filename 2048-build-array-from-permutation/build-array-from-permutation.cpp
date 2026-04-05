class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int sz = nums.size();
        vector<int> v(sz);
        int i=0;
        while(i<sz){
            v[i]=nums[nums[i]];
            i++;
        }
        return v;
    }
};