class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length())
            return false;
        vector<int> hash(26,0);
        for(int i=0; i<s1.length(); i++){
            hash[s1[i]-'a']++;
        }
        
        int window = s1.length();
        for(int i=0; i < (s2.length()-window+1); i++){
            vector<int> t(26,0);
            for(int j=i; j < (i+window); j++){
                t[s2[j]-'a']++;
            }
            int j=0;
            for(; j<26; j++){
                if(t[j] != hash[j])
                    break;
            }
            if(j==26)
                return true;
        }
        return false;

    }
};
