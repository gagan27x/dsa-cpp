class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int l=0;
        int r=arr.size()-1;
        
        while(l<=r){
            int temp = arr[l];
            arr[l]=arr[r];
            arr[r]=temp;
            l++;
            r--;
        }
    }
};