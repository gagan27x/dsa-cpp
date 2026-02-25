class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        
        priority_queue<int,vector<int>,greater<int>> pq;
        
        int i=0;
        for(; i<arr.size(); i++){
            pq.push(arr[i]);
            
            if(i>=k){
                arr[i-k] = pq.top();
                pq.pop();
            }
        }
        
        for(int j=i-k;j<arr.size();j++){
            arr[j]=pq.top();
            pq.pop();
        }
        
    }
};