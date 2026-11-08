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
        int match=0;
        for(int i=0; i<26;i++){
            if(s1_hash[i] == s2_hash[i])
                match++;
        }
        //cout<<match<<endl<<"--------------"<<endl;
        if(match == 26)
            return true;
        
        for(int l=1, r=window; r < s2.length(); l++, r++){
    
            // 1. Process incoming character completely
            int in_char = s2[r] - 'a';
            s2_hash[in_char]++;
            if(s2_hash[in_char] == s1_hash[in_char])
                match++;
            else if(s2_hash[in_char] == s1_hash[in_char] + 1)
                match--;

            // 2. Process outgoing character completely
            int out_char = s2[l-1] - 'a';
            s2_hash[out_char]--;
            if(s2_hash[out_char] == s1_hash[out_char])
                match++;
            else if(s2_hash[out_char] == s1_hash[out_char] - 1)
                match--;

            if(match == 26)
                return true;
        }

        return false;

    }
};
