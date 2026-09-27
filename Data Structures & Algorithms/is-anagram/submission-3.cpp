class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> chars(26,0), chart(26,0);
        for(int i=0; i< s.length(); i++){
            chars[s[i]-97]++;
        }
        for(int i=0; i < t.length(); i++){
            chart[t[i]-97]++;
        }
        
        for(int i=0;i<26;i++){
            //cout<<chars[i]<<chart[i]<<endl;
            if(chars[i] != chart[i])
                return false;
        }
        return true;
    }
};
/*
    //most optimized
    bool isAnagram(string s, string t) {
        vector<int> charcount(26,0);
        for(int i=0; i< s.length(); i++){
            charcout[s[i]-97]++;
        }
        for(int i=0; i < t.length(); i++){
            charcount[t[i]-97]--;
        }
        
        for(int i=0;i<26;i++){
            if(charcount[i] != 0)
                return false;
        }
        return true;
    }
};

*/
