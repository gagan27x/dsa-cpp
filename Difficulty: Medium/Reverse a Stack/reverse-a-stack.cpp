class Solution {
  public:
    void reverseStack(stack<int> &st) {
        // code here
        vector<int> v;
        
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        int n=v.size();
        
        for(int i=0;i<n;i++){
            st.push(v[i]);            
        }
    }
};