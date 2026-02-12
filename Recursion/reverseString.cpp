class Solution {
public:
    void reverseString(vector<char>& s,int ind =0) {
        int sz = s.size();
        
        int j= sz- ind - 1;

        if(ind >= sz/2) return;

        swap(s[ind],s[j]);

        reverseString(s ,++ind);
    }
};