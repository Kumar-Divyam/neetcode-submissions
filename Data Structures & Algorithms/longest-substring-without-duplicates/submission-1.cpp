class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0)
            return 0;
        set<char> temp;
        temp.insert(s[0]);
        int res=0;
        int t = 1;
        
        for(int l=0, r=1; r < s.length();){
            if(temp.count(s[r]) > 0){
                if(res < t)
                    res = t;
                while(s[l] != s[r]){
                    temp.erase(s[l]);
                    l++;
                }
                r++;l++;t=r-l;
            }
            else{
                temp.insert(s[r]);
                r++;t++;
            }
        }
        if(t>res)
            res=t;
        return res;
    }
};
