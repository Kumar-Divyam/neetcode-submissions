class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0, j= s.length()-1; i < j;){
            if(!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))){
                i++;
            }
            else if(!((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= '0' && s[j] <= '9'))){
                j--;
            }
            //else if(((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) && ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= '0' && s[j] <= '9'))){
            else{
                if(tolower(s[i]) == tolower(s[j])){
                    i++; j--;
                } else{
                    return false;
                }
            }
        }
        return true;
    }
};
