class Solution {
  public:
    vector<int> v;
    void deleteMid(stack<int>& st) {
        int n  = st.size()/2;
        
        int i=0;
        while(i<=n){
            v.push_back(st.top());
            st.pop();
            i++;
        }
        for(int i=v.size()-2;i>=0;i--){
            st.push(v[i]);
        }
        
    }
};