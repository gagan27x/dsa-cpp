class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        if(arr.size()<2) return -1;
        sort(arr.begin(),arr.end());
        
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]!=arr[arr.size()-1]){
                return arr[i];
            }
        }
        return -1;
    }
};