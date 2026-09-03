class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int maxlen = 0;

        unordered_set<int> st;

        for(int r=0;r<s.size();r++){

            while(st.count(s[r])){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            maxlen=max(maxlen,r-l+1);
        }

        return maxlen;
    }
};