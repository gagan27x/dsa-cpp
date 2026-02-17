class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        
        int n = arr.size();
        
        // Sort based on start time
        sort(arr.begin(), arr.end());
        
        for(int i = 1; i < n; ++i){
            
            if(arr[i][0] < arr[i-1][1]){
                return false;   // overlap found
            }
        }
        
        return true;
    }
};
