//Max Consecutive Ones
#include <bits/stdc++.h>
using namespace std;

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

int main(){
    vector<int> v;
    v={1,0,0,1,1,1,0,0,0,1,1,1,1};
    
    Solution s;
    int output = s.findMaxConsecutiveOnes(v);
    cout<<output;
}