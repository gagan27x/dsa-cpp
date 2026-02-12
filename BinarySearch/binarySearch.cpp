class Solution {
public:
    int search(vector<int>& nums, int tar, int l , int r) {
        
        if(l>r) return -1;
        int mid = l + ((r-l)>>1);

        if(nums[mid]>tar){
            r=mid-1;
        } 
        else{
            l=mid+1;
        }
    
    }
};