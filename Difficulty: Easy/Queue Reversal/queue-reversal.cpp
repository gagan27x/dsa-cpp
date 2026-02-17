class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        int sz=q.size();
        
        stack<int>st;
        
        for(int i=0;i<sz;i++){
            if(!q.empty()){
                st.push(q.front());
                q.pop();
            }
        }
        for(int i=0;i<sz;i++){
            q.push(st.top());
            st.pop();
        }
        
    }
};