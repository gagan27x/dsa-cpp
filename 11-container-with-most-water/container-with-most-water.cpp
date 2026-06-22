class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea  = 0;
        int i=0, j=height.size()-1;

        while(i<j){
            int h = min(height[i],height[j]);
            int w = j-i;
            int A = h*w;
            maxArea = max(maxArea,A);

            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return maxArea;
    }
};