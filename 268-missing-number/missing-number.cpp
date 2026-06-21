class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<=nums.size();i++){
            mp[i]++;
        }
        for(int x : nums){
            mp[x]--;
        }
        for(auto &x : mp){
            if(x.second == 1){
                return x.first;
                break;
            }
        }
        return nums.size();
    }
};