class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n= arr.size();
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if(arr[j]<arr[j-1]){
                    swap(arr[j],arr[j-1]);
                }
            }
        }
    }
};