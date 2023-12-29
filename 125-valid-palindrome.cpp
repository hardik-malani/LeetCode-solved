class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.length();
        string pal ="";
        string str ="";
        for(int i=len-1;i>=0;i--){
            if(iswalnum(s[i])){
                char ch = tolower(s[i]);
                pal+=ch;
            }
        }
        for(int i=0;i<len;i++){
            if(iswalnum(s[i])){
                char ch = tolower(s[i]);
                str+=ch;
            }
        }
        if(pal == str){
            return true;
        }
        return false;
    }
};