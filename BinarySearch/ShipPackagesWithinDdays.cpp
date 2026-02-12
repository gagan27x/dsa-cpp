class Solution {
public:
    int sz;
    bool feasible(vector<int>&w, int days, int maxCap){
        int curWt = 0;
        int curDay = 0;

        for(int i=0;i<sz;i++){
            int newWt = curWt + w[i];
            if(newWt<=maxCap){
                curWt = newWt;
            }
            else{
                ++curDay;
                curWt = w[i];
            }
        }
        return curDay < days;
    }


    int shipWithinDays(vector<int>& weights, int days) {
        sz = weights.size();
        int l = *max_element(begin(weights),end(weights));
        int h = accumulate(begin(weights),end(weights),0);
        int ans = -1;

        while(l<=h){
            int m = l + ((r-l)>>1);

            if(feasible(weights, days, m)){
                ans = m;
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;

    }
};