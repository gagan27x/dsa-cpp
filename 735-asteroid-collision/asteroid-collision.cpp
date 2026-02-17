class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        int sz = asteroids.size();
        stack<int> st;

        for(int i = 0; i < sz; ++i){
            
            int cur = asteroids[i];
            
            if(cur > 0){
                st.push(cur);
                continue;
            }
            
            // cur is negative
            while(!st.empty() && st.top() > 0 && st.top() < abs(cur)){
                st.pop();
            }
            
            if(!st.empty() && st.top() > 0){
                
                if(st.top() == abs(cur)){
                    st.pop();   // both destroy
                }
                // else current destroyed, do nothing
                
            } else {
                st.push(cur);
            }
        }
        
        vector<int> ans(st.size());
        
        for(int i = st.size() - 1; i >= 0; --i){
            ans[i] = st.top();
            st.pop();
        }
        
        return ans;
    }
};
