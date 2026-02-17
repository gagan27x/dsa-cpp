class Solution {
public:

    // ---- Get Previous Smaller Element ----
    vector<int> getPSE(vector<int>& heights, int n) {
        
        vector<int> pse(n, -1);
        stack<int> st;
        
        for(int i = 0; i < n; ++i){
            
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            
            if(!st.empty())
                pse[i] = st.top();
            
            st.push(i);
        }
        
        return pse;
    }

    // ---- Get Next Smaller Element ----
    vector<int> getNSE(vector<int>& heights, int n) {
        
        vector<int> nse(n, n);
        stack<int> st;
        
        for(int i = n - 1; i >= 0; --i){
            
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            
            if(!st.empty())
                nse[i] = st.top();
            
            st.push(i);
        }
        
        return nse;
    }

    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        
        vector<int> pse = getPSE(heights, n);
        vector<int> nse = getNSE(heights, n);
        
        int maxArea = 0;
        
        for(int i = 0; i < n; ++i){
            
            int width = nse[i] - pse[i] - 1;
            int area = heights[i] * width;
            
            maxArea = max(maxArea, area);
        }
        
        return maxArea;
    }
};
