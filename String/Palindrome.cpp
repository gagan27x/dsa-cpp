class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;

        while(i<j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            else if(!isalnum(s[j])){
                j--;
                continue;
            }
            else if(toupper(s[i])!=toupper(s[j])){
                return 0;
            }
            i++,j--;
        }
        return 1;
    }
};