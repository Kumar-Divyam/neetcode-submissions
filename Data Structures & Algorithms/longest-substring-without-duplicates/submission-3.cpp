class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> c_map;
        int res = 0;
        for(int l=0,r=0; r<s.length(); r++){
            if(c_map.find(s[r]) != c_map.end()){
                if(c_map[s[r]] >= l)
                    l = c_map[s[r]]+1;
            }
            c_map[s[r]] = r;
            res = max(res, r-l+1);
        }
        return res;
    }
};
