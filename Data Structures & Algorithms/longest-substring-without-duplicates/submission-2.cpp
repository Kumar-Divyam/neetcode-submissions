class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> temp;
        int res=0;
        //int t = 0;
        
        for(int l=0, r=0; r < s.length();){
            if(temp.count(s[r]) > 0){
                res = max(res, (r - l));
                while(s[l] != s[r]){
                    temp.erase(s[l]);
                    l++;
                }
                //for duplicate found, dont erase and re-insert only move the pointers 
                r++;l++;
            }
            else{
                temp.insert(s[r]);
                res = max(res, (r - l + 1));
                r++;
            }
        }
        return res;
    }
};
