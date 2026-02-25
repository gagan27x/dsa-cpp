class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        
        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(int &n : arr){
            pq.push(n);
            
            if(pq.size()>k){
                pq.pop();
            }
        }
                
        vector<int> ans(k);
        for(int i=k-1; i>-1; i-- ){
            ans[i]=pq.top();
            pq.pop();
        }
        
        return ans;
        
    }
};