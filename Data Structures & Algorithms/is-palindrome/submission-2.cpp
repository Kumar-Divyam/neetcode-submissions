class Solution {
public:
    bool isPalindrome(string s) {
        string pal="";
        for(int i=0; i < s.length(); i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
                char temp = s[i];
                pal += tolower(temp);
            }
        }
        for(int i=0, j= pal.length()-1; i<j; i++, j--){
            if(pal[i] != pal[j])
                return false;
        }
        return true;
    }
};
