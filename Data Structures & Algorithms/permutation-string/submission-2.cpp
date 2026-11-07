class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length())
            return false;
        vector<int> s1_hash(26,0), s2_hash(26,0);
        for(int i=0; i<s1.length(); i++){
            s1_hash[s1[i]-'a']++;
        }
        
        int window = s1.length();
        for(int i=0;i<window;i++){
            s2_hash[s2[i]-'a']++;
        }
        if(s1_hash == s2_hash)
            return true;
        
        for(int l=1, r=window;r < s2.length(); l++, r++){
            s2_hash[s2[l-1]-'a']--;
            s2_hash[s2[r]-'a']++;
            if(s1_hash == s2_hash)
                return true;
        }
        return false;

    }
};
