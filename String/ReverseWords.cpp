class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string word = "";        
        
        int i=0;
        while(i<s.size() && s[i]==' ') i++;

        for(i;i<s.size();i++){
            if(s[i]==' '){
                if(i>0 && s[i-1]==' '){
                    continue;
                }
                v.push_back(word);
                word.clear();
            }
            else{
                word.push_back(s[i]);
            }
        }

        if(!word.empty()){
            v.push_back(word);
        }

        string str;
        for(int i=v.size()-1 ; i>-1; i--){
            str+=v[i];
            if(i!=0){
                str.push_back(' ');
            }
        }
        return str;
    }
};