class Solution {
public:
    int trailingZeroes(int n) {
        int t_zero = 0;
        int s = n;
        while(s>=5){
            t_zero += s/5;
            s=s/5;
        }
        return t_zero;
    }
};