class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int a=0;
        int b=n;
        vector<int> ans(2*n);

        for(int i=0;i<2*n;i+=2){
            ans[i]=nums[a];
            a++;
        }
        for(int i=1;i<2*n;i+=2){
            ans[i]=nums[b];
            b++;
        }
        return ans;
    }
};